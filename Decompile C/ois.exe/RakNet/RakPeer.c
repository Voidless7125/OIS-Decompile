#include "../ois.exe.h"


// public: virtual unsigned int __thiscall RakNet::RakPeer::GetMaximumIncomingConnections(void)const
// 

uint __thiscall RakNet::RakPeer::GetMaximumIncomingConnections(RakPeer *this)

{
  return *(uint *)(this + 0x10);
}


// public: virtual bool __thiscall RakNet::RakPeer::IsNetworkSimulatorActive(void)

bool __thiscall RakNet::RakPeer::IsNetworkSimulatorActive(RakPeer *this)

{
  return false;
}


// public: virtual void __thiscall RakNet::RakPeer::ApplyNetworkSimulator(float,unsigned
// short,unsigned short)

void __thiscall
RakNet::RakPeer::ApplyNetworkSimulator(RakPeer *this,float param_1,ushort param_2,ushort param_3)

{
  return;
}


// protected: struct RakNet::Packet * __thiscall RakNet::RakPeer::AllocPacket(unsigned int,char
// const *,unsigned int)

Packet * __thiscall
RakNet::RakPeer::AllocPacket(RakPeer *this,uint param_1,char *param_2,uint param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  Packet *pPVar1;
  void *pvVar2;
  char *pcVar3;
  LPCRITICAL_SECTION p_Var4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x570);
  pcVar3 = (char *)0x59f4c5;
  p_Var4 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  pPVar1 = DataStructures::MemoryPool<>::Allocate
                     ((MemoryPool<> *)(this + 0x588),pcVar3,(uint)p_Var4);
  LeaveCriticalSection(lpCriticalSection);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 4) = 0;
  *(undefined4 *)(pPVar1 + 8) = 0;
  *(undefined4 *)(pPVar1 + 0xc) = 0;
  *(undefined4 *)(pPVar1 + 0x10) = 0xffff0000;
  *(undefined2 *)pPVar1 = 2;
  *(undefined2 *)(pPVar1 + 0x20) = 0xffff;
  *(undefined4 *)(pPVar1 + 0x18) = DAT_006578d0;
  *(undefined4 *)(pPVar1 + 0x1c) = DAT_006578d4;
  *(undefined2 *)(pPVar1 + 0x20) = DAT_006578d8;
  pvVar2 = malloc(param_1);
  *(void **)(pPVar1 + 0x30) = pvVar2;
  *(uint *)(pPVar1 + 0x28) = param_1;
  *(uint *)(pPVar1 + 0x2c) = param_1 * 8;
  pPVar1[0x34] = (Packet)0x1;
  *(undefined4 *)(pPVar1 + 0x18) = DAT_00657908;
  *(undefined4 *)(pPVar1 + 0x1c) = DAT_0065790c;
  *(undefined2 *)(pPVar1 + 0x20) = DAT_00657910;
  pPVar1[0x35] = (Packet)0x0;
  return pPVar1;
}


// protected: struct RakNet::Packet * __thiscall RakNet::RakPeer::AllocPacket(unsigned int,unsigned
// char *,char const *,unsigned int)

Packet * __thiscall
RakNet::RakPeer::AllocPacket(RakPeer *this,uint param_1,uchar *param_2,char *param_3,uint param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  Packet *pPVar1;
  char *pcVar2;
  LPCRITICAL_SECTION p_Var3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x570);
  pcVar2 = (char *)0x59f574;
  p_Var3 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  pPVar1 = DataStructures::MemoryPool<>::Allocate
                     ((MemoryPool<> *)(this + 0x588),pcVar2,(uint)p_Var3);
  LeaveCriticalSection(lpCriticalSection);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 4) = 0;
  *(undefined4 *)(pPVar1 + 8) = 0;
  *(undefined4 *)(pPVar1 + 0xc) = 0;
  *(undefined2 *)pPVar1 = 2;
  *(undefined4 *)(pPVar1 + 0x10) = 0xffff0000;
  *(undefined2 *)(pPVar1 + 0x20) = 0xffff;
  *(undefined4 *)(pPVar1 + 0x18) = DAT_006578d0;
  *(undefined4 *)(pPVar1 + 0x1c) = DAT_006578d4;
  *(undefined2 *)(pPVar1 + 0x20) = DAT_006578d8;
  *(uchar **)(pPVar1 + 0x30) = param_2;
  *(uint *)(pPVar1 + 0x28) = param_1;
  *(uint *)(pPVar1 + 0x2c) = param_1 << 3;
  pPVar1[0x34] = (Packet)0x1;
  *(undefined4 *)(pPVar1 + 0x18) = DAT_00657908;
  *(undefined4 *)(pPVar1 + 0x1c) = DAT_0065790c;
  *(undefined2 *)(pPVar1 + 0x20) = DAT_00657910;
  pPVar1[0x35] = (Packet)0x0;
  return pPVar1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: __thiscall RakNet::RakPeer::RakPeer(void)

RakPeer * __thiscall RakNet::RakPeer::RakPeer(RakPeer *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  RakPeer *pRVar4;
  StringTable *pSVar5;
  HANDLE pvVar6;
  int iVar7;
  __uint64 _Var8;
  void *local_1c;
  undefined *puStack_18;
  undefined1 local_14;
  undefined3 uStack_13;
  
  puStack_18 = &DAT_005cd63a;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(undefined ***)(this + 4) = RNS2EventHandler::vftable;
  *(undefined ***)this = vftable_for_RakNet__RakPeerInterface_;
  *(undefined ***)(this + 4) = vftable_for_RakNet__RNS2EventHandler_;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0x800;
  *(undefined4 *)(this + 0x1c) = 0;
  *(RakPeer **)(this + 0x20) = this + 0x25;
  this[0x24] = (RakPeer)0x1;
  *(undefined4 *)(this + 0x244) = 0;
  *(undefined4 *)(this + 0x248) = 0;
  *(undefined4 *)(this + 0x24c) = 0x4000;
  local_14 = 3;
  uStack_13 = 0;
  _eh_vector_constructor_iterator_
            (this + 0x250,0x18,2,SimpleMutex::SimpleMutex,SimpleMutex::~SimpleMutex);
  InitializeCriticalSection((LPCRITICAL_SECTION)(this + 0x290));
  InitializeCriticalSection((LPCRITICAL_SECTION)(this + 0x2a8));
  *(undefined4 *)(this + 0x2c8) = 0;
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x2c4) = 0;
  *(undefined4 *)(this + 0x2d4) = 0;
  *(undefined4 *)(this + 0x2cc) = 0;
  *(undefined4 *)(this + 0x2d0) = 0;
  *(undefined4 *)(this + 0x2e0) = 0;
  *(undefined4 *)(this + 0x2d8) = 0;
  *(undefined4 *)(this + 0x2dc) = 0;
  *(undefined4 *)(this + 0x2f0) = 0;
  *(undefined4 *)(this + 0x2e4) = 0;
  *(undefined4 *)(this + 0x2e8) = 0;
  *(undefined4 *)(this + 0x2ec) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(this + 0x2f4));
  *(undefined4 *)(this + 0x314) = 0;
  *(undefined4 *)(this + 0x318) = 0;
  *(undefined4 *)(this + 0x31c) = 0x4000;
  InitializeCriticalSection((LPCRITICAL_SECTION)(this + 800));
  *(undefined4 *)(this + 0x344) = 0;
  *(undefined4 *)(this + 0x338) = 0;
  *(undefined4 *)(this + 0x33c) = 0;
  *(undefined4 *)(this + 0x340) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(this + 0x348));
  *(undefined4 *)(this + 0x36c) = 0;
  *(undefined4 *)(this + 0x360) = 0;
  *(undefined4 *)(this + 0x364) = 0;
  *(undefined4 *)(this + 0x368) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(this + 0x370));
  *(undefined4 *)(this + 0x394) = 0;
  *(undefined4 *)(this + 0x388) = 0;
  *(undefined4 *)(this + 0x38c) = 0;
  *(undefined4 *)(this + 0x390) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(this + 0x398));
  *(undefined4 *)(this + 0x3b8) = 0;
  *(undefined4 *)(this + 0x3bc) = 0;
  *(undefined4 *)(this + 0x3c0) = 0x4000;
  InitializeCriticalSection((LPCRITICAL_SECTION)(this + 0x3c4));
  *(undefined4 *)(this + 1000) = 0;
  *(undefined4 *)(this + 0x3dc) = 0;
  *(undefined4 *)(this + 0x3e0) = 0;
  *(undefined4 *)(this + 0x3e4) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(this + 0x3ec));
  InitializeCriticalSection((LPCRITICAL_SECTION)(this + 0x404));
  *(undefined4 *)(this + 0x42c) = 0;
  *(undefined4 *)(this + 0x424) = 0;
  *(undefined4 *)(this + 0x428) = 0;
  *(undefined4 *)(this + 0x434) = 0;
  *(undefined4 *)(this + 0x438) = 0;
  *(undefined4 *)(this + 0x43c) = 0;
  *(undefined4 *)(this + 0x440) = 0;
  *(undefined2 *)(this + 0x434) = 2;
  *(undefined4 *)(this + 0x444) = 0xffff0000;
  *(undefined2 *)(this + 0x458) = 0xffff;
  *(undefined4 *)(this + 0x450) = DAT_006578d0;
  *(undefined4 *)(this + 0x454) = DAT_006578d4;
  *(undefined2 *)(this + 0x458) = DAT_006578d8;
  *(undefined4 *)(this + 0x468) = 0;
  *(undefined4 *)(this + 0x46c) = 0;
  *(undefined4 *)(this + 0x470) = 0;
  *(undefined4 *)(this + 0x474) = 0;
  *(undefined2 *)(this + 0x468) = 2;
  *(undefined4 *)(this + 0x478) = 0xffff0000;
  *(undefined4 *)(this + 0x490) = 0;
  *(undefined4 *)(this + 0x488) = 0;
  *(undefined4 *)(this + 0x48c) = 0;
  iVar7 = 10;
  pRVar4 = this + 0x494;
  do {
    *(undefined4 *)pRVar4 = 0;
    *(undefined4 *)(pRVar4 + 4) = 0;
    *(undefined4 *)(pRVar4 + 8) = 0;
    *(undefined4 *)(pRVar4 + 0xc) = 0;
    *(undefined2 *)pRVar4 = 2;
    *(undefined4 *)(pRVar4 + 0x10) = 0xffff0000;
    iVar7 = iVar7 + -1;
    pRVar4 = pRVar4 + 0x14;
  } while (iVar7 != 0);
  *(undefined4 *)(this + 0x568) = 0xffffffff;
  InitializeCriticalSection((LPCRITICAL_SECTION)(this + 0x570));
  *(undefined4 *)(this + 0x590) = 0;
  *(undefined4 *)(this + 0x594) = 0;
  *(undefined4 *)(this + 0x598) = 0x4000;
  InitializeCriticalSection((LPCRITICAL_SECTION)(this + 0x59c));
  *(undefined4 *)(this + 0x5c0) = 0;
  *(undefined4 *)(this + 0x5b4) = 0;
  *(undefined4 *)(this + 0x5b8) = 0;
  *(undefined4 *)(this + 0x5bc) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(this + 0x5c4));
  _local_14 = CONCAT31(uStack_13,0x19);
  StringCompressor::AddReference();
  StringTable::referenceCount = StringTable::referenceCount + 1;
  if (StringTable::referenceCount == 1) {
    pSVar5 = operator_new(0xc);
    StringTable::instance = pSVar5;
    (pSVar5->orderedStringList).orderedList.listArray = (StrAndBool *)0x0;
    (pSVar5->orderedStringList).orderedList.list_size = 0;
    (pSVar5->orderedStringList).orderedList.allocation_size = 0;
    (pSVar5->orderedStringList).orderedList.allocation_size = 0;
    (pSVar5->orderedStringList).orderedList.listArray = (StrAndBool *)0x0;
    (pSVar5->orderedStringList).orderedList.list_size = 0;
  }
  WSAStartupSingleton::AddRef();
  *(undefined4 *)(this + 0x41c) = 0x240;
  this[0x420] = (RakPeer)0x0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x22c) = 0;
  *(undefined4 *)(this + 0x230) = 0;
  *(undefined4 *)(this + 0x234) = 0;
  *(undefined4 *)(this + 0x238) = 0;
  *(undefined4 *)(this + 0x288) = 0;
  *(undefined4 *)(this + 0x284) = 0;
  this[8] = (RakPeer)0x1;
  this[9] = (RakPeer)0x0;
  *(undefined4 *)(this + 0x484) = 0;
  this[10] = (RakPeer)0x0;
  this[0x55c] = (RakPeer)0x0;
  uVar3 = uRam00657900;
  uVar2 = uRam006578fc;
  uVar1 = DAT_006578f8;
  *(undefined4 *)(this + 0x494) = _DAT_006578f4;
  *(undefined4 *)(this + 0x498) = uVar1;
  *(undefined4 *)(this + 0x49c) = uVar2;
  *(undefined4 *)(this + 0x4a0) = uVar3;
  *(undefined2 *)(this + 0x4a6) = DAT_00657906;
  *(undefined2 *)(this + 0x4a4) = DAT_00657904;
  uVar3 = uRam00657900;
  uVar2 = uRam006578fc;
  uVar1 = DAT_006578f8;
  *(undefined4 *)(this + 0x4a8) = _DAT_006578f4;
  *(undefined4 *)(this + 0x4ac) = uVar1;
  *(undefined4 *)(this + 0x4b0) = uVar2;
  *(undefined4 *)(this + 0x4b4) = uVar3;
  *(undefined2 *)(this + 0x4ba) = DAT_00657906;
  *(undefined2 *)(this + 0x4b8) = DAT_00657904;
  uVar3 = uRam00657900;
  uVar2 = uRam006578fc;
  uVar1 = DAT_006578f8;
  *(undefined4 *)(this + 0x4bc) = _DAT_006578f4;
  *(undefined4 *)(this + 0x4c0) = uVar1;
  *(undefined4 *)(this + 0x4c4) = uVar2;
  *(undefined4 *)(this + 0x4c8) = uVar3;
  *(undefined2 *)(this + 0x4ce) = DAT_00657906;
  *(undefined2 *)(this + 0x4cc) = DAT_00657904;
  uVar3 = uRam00657900;
  uVar2 = uRam006578fc;
  uVar1 = DAT_006578f8;
  *(undefined4 *)(this + 0x4d0) = _DAT_006578f4;
  *(undefined4 *)(this + 0x4d4) = uVar1;
  *(undefined4 *)(this + 0x4d8) = uVar2;
  *(undefined4 *)(this + 0x4dc) = uVar3;
  *(undefined2 *)(this + 0x4e2) = DAT_00657906;
  *(undefined2 *)(this + 0x4e0) = DAT_00657904;
  uVar3 = uRam00657900;
  uVar2 = uRam006578fc;
  uVar1 = DAT_006578f8;
  *(undefined4 *)(this + 0x4e4) = _DAT_006578f4;
  *(undefined4 *)(this + 0x4e8) = uVar1;
  *(undefined4 *)(this + 0x4ec) = uVar2;
  *(undefined4 *)(this + 0x4f0) = uVar3;
  *(undefined2 *)(this + 0x4f6) = DAT_00657906;
  *(undefined2 *)(this + 0x4f4) = DAT_00657904;
  uVar3 = uRam00657900;
  uVar2 = uRam006578fc;
  uVar1 = DAT_006578f8;
  *(undefined4 *)(this + 0x4f8) = _DAT_006578f4;
  *(undefined4 *)(this + 0x4fc) = uVar1;
  *(undefined4 *)(this + 0x500) = uVar2;
  *(undefined4 *)(this + 0x504) = uVar3;
  *(undefined2 *)(this + 0x50a) = DAT_00657906;
  *(undefined2 *)(this + 0x508) = DAT_00657904;
  uVar3 = uRam00657900;
  uVar2 = uRam006578fc;
  uVar1 = DAT_006578f8;
  *(undefined4 *)(this + 0x50c) = _DAT_006578f4;
  *(undefined4 *)(this + 0x510) = uVar1;
  *(undefined4 *)(this + 0x514) = uVar2;
  *(undefined4 *)(this + 0x518) = uVar3;
  *(undefined2 *)(this + 0x51e) = DAT_00657906;
  *(undefined2 *)(this + 0x51c) = DAT_00657904;
  uVar3 = uRam00657900;
  uVar2 = uRam006578fc;
  uVar1 = DAT_006578f8;
  *(undefined4 *)(this + 0x520) = _DAT_006578f4;
  *(undefined4 *)(this + 0x524) = uVar1;
  *(undefined4 *)(this + 0x528) = uVar2;
  *(undefined4 *)(this + 0x52c) = uVar3;
  *(undefined2 *)(this + 0x532) = DAT_00657906;
  *(undefined2 *)(this + 0x530) = DAT_00657904;
  uVar3 = uRam00657900;
  uVar2 = uRam006578fc;
  uVar1 = DAT_006578f8;
  *(undefined4 *)(this + 0x534) = _DAT_006578f4;
  *(undefined4 *)(this + 0x538) = uVar1;
  *(undefined4 *)(this + 0x53c) = uVar2;
  *(undefined4 *)(this + 0x540) = uVar3;
  *(undefined2 *)(this + 0x546) = DAT_00657906;
  *(undefined2 *)(this + 0x544) = DAT_00657904;
  uVar3 = uRam00657900;
  uVar2 = uRam006578fc;
  uVar1 = DAT_006578f8;
  *(undefined4 *)(this + 0x548) = _DAT_006578f4;
  *(undefined4 *)(this + 0x54c) = uVar1;
  *(undefined4 *)(this + 0x550) = uVar2;
  *(undefined4 *)(this + 0x554) = uVar3;
  *(undefined2 *)(this + 0x55a) = DAT_00657906;
  *(undefined2 *)(this + 0x558) = DAT_00657904;
  this[0x464] = (RakPeer)0x0;
  this[0x228] = (RakPeer)0x0;
  *(undefined4 *)(this + 0x47c) = 0;
  *(undefined4 *)(this + 0x480) = 1000;
  *(undefined4 *)(this + 0x460) = 0;
  uVar3 = uRam00657900;
  uVar2 = uRam006578fc;
  uVar1 = DAT_006578f8;
  *(undefined4 *)(this + 0x468) = _DAT_006578f4;
  *(undefined4 *)(this + 0x46c) = uVar1;
  *(undefined4 *)(this + 0x470) = uVar2;
  *(undefined4 *)(this + 0x474) = uVar3;
  *(undefined2 *)(this + 0x47a) = DAT_00657906;
  *(undefined2 *)(this + 0x478) = DAT_00657904;
  *(undefined4 *)(this + 0x450) = DAT_00657908;
  *(undefined4 *)(this + 0x454) = DAT_0065790c;
  *(undefined2 *)(this + 0x458) = DAT_00657910;
  *(undefined4 *)(this + 0x560) = 0;
  *(undefined4 *)(this + 0x564) = 0;
  *(undefined4 *)(this + 0x44c) = 10000;
  *(undefined4 *)(this + 0x31c) = 0x700;
  *(undefined4 *)(this + 0x3c0) = 0x60;
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x570));
  *(undefined4 *)(this + 0x598) = 0x800;
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x570));
  *(undefined4 *)(this + 0x24c) = 0x180;
  _Var8 = RakPeerInterface::Get64BitUniqueRandomNumber();
  *(__uint64 *)(this + 0x450) = _Var8;
  pvVar6 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  *(HANDLE *)(this + 0x568) = pvVar6;
  this[0x56c] = (RakPeer)0x0;
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x5c4));
  *(undefined4 *)(this + 0x5dc) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x5c4));
  ExceptionList = local_1c;
  return this;
}


// public: virtual void * __thiscall RakNet::RakPeer::`vector deleting destructor'(unsigned int)

void * __thiscall RakNet::RakPeer::_vector_deleting_destructor_(RakPeer *this,uint param_1)

{
  ~RakPeer(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x5e0);
  }
  return this;
}


// public: virtual __thiscall RakNet::RakPeer::~RakPeer(void)

void __thiscall RakNet::RakPeer::~RakPeer(RakPeer *this)

{
  uint *puVar1;
  void *pvVar2;
  uint uVar3;
  char *pcVar4;
  LPCRITICAL_SECTION p_Var5;
  code *pcVar6;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cd660;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable_for_RakNet__RakPeerInterface_;
  *(undefined ***)(this + 4) = vftable_for_RakNet__RNS2EventHandler_;
  Shutdown(this,0,'\0',LOW_PRIORITY);
  uVar3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x2a8));
  if (*(int *)(this + 0x2c4) != 0) {
    do {
      free((void *)**(undefined4 **)(*(int *)(this + 0x2c0) + uVar3 * 4));
      operator_delete(*(void **)(*(int *)(this + 0x2c0) + uVar3 * 4),(nothrow_t *)0x8);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(this + 0x2c4));
  }
  if (*(int *)(this + 0x2c8) != 0) {
    operator_delete__(*(void **)(this + 0x2c0));
    *(undefined4 *)(this + 0x2c8) = 0;
    *(undefined4 *)(this + 0x2c0) = 0;
    *(undefined4 *)(this + 0x2c4) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2a8));
  StringCompressor::RemoveReference();
  StringTable::RemoveReference();
  if (WSAStartupSingleton::refCount != 0) {
    if (WSAStartupSingleton::refCount < 2) {
      WSACleanup();
      WSAStartupSingleton::refCount = 0;
    }
    else {
      WSAStartupSingleton::refCount = WSAStartupSingleton::refCount + -1;
    }
  }
  if (*(HANDLE *)(this + 0x568) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(this + 0x568));
    *(undefined4 *)(this + 0x568) = 0xffffffff;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x5c4));
  if (*(int *)(this + 0x5c0) != 0) {
    operator_delete__(*(void **)(this + 0x5b4));
  }
  p_Var5 = (LPCRITICAL_SECTION)(this + 0x59c);
  pcVar4 = (char *)0x59ff44;
  DeleteCriticalSection(p_Var5);
  DataStructures::MemoryPool<>::Clear((MemoryPool<> *)(this + 0x588),pcVar4,(uint)p_Var5);
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x570));
  if ((*(int *)(this + 0x490) != 0) && (pvVar2 = *(void **)(this + 0x488), pvVar2 != (void *)0x0)) {
    puVar1 = (uint *)((int)pvVar2 + -4);
    local_8 = 0;
    _eh_vector_destructor_iterator_(pvVar2,4,*puVar1,RakString::~RakString);
    operator_delete__(puVar1,*puVar1 * 4 + 4);
    local_8 = 0xffffffff;
  }
  if (*(int *)(this + 0x42c) != 0) {
    operator_delete__(*(void **)(this + 0x424));
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x404));
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x3ec));
  if (*(int *)(this + 1000) != 0) {
    operator_delete__(*(void **)(this + 0x3dc));
  }
  p_Var5 = (LPCRITICAL_SECTION)(this + 0x3c4);
  pcVar4 = (char *)0x59ffea;
  DeleteCriticalSection(p_Var5);
  DataStructures::MemoryPool<>::Clear((MemoryPool<> *)(this + 0x3b0),pcVar4,(uint)p_Var5);
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x398));
  if (*(int *)(this + 0x394) != 0) {
    operator_delete__(*(void **)(this + 0x388));
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x370));
  if (*(int *)(this + 0x36c) != 0) {
    operator_delete__(*(void **)(this + 0x360));
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x348));
  if (*(int *)(this + 0x344) != 0) {
    operator_delete__(*(void **)(this + 0x338));
  }
  p_Var5 = (LPCRITICAL_SECTION)(this + 800);
  pcVar4 = (char *)0x5a0061;
  DeleteCriticalSection(p_Var5);
  DataStructures::MemoryPool<>::Clear((MemoryPool<> *)(this + 0x30c),pcVar4,(uint)p_Var5);
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x2f4));
  if (*(int *)(this + 0x2f0) != 0) {
    operator_delete__(*(void **)(this + 0x2e4));
  }
  if (*(int *)(this + 0x2e0) != 0) {
    operator_delete__(*(void **)(this + 0x2d8));
  }
  if (*(int *)(this + 0x2d4) != 0) {
    operator_delete__(*(void **)(this + 0x2cc));
  }
  if (*(int *)(this + 0x2c8) != 0) {
    operator_delete__(*(void **)(this + 0x2c0));
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x2a8));
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x290));
  pcVar6 = SimpleMutex::~SimpleMutex;
  pcVar4 = &DAT_00000002;
  _eh_vector_destructor_iterator_(this + 0x250,0x18,2,SimpleMutex::~SimpleMutex);
  DataStructures::MemoryPool<>::Clear((MemoryPool<> *)(this + 0x23c),pcVar4,(uint)pcVar6);
  if ((this[0x24] != (RakPeer)0x0) && (0x800 < *(uint *)(this + 0x18))) {
    free(*(void **)(this + 0x20));
  }
  *(undefined ***)(this + 4) = RNS2EventHandler::vftable;
  *(undefined ***)this = RakPeerInterface::vftable;
  ExceptionList = local_10;
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: virtual enum RakNet::StartupResult __thiscall RakNet::RakPeer::Startup(unsigned
// int,struct RakNet::SocketDescriptor *,unsigned int,int)

StartupResult __thiscall
RakNet::RakPeer::Startup
          (RakPeer *this,uint param_1,SocketDescriptor *param_2,uint param_3,int param_4)

{
  undefined4 *puVar1;
  RakPeer RVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  u_short hostshort;
  u_short uVar9;
  uint *puVar10;
  int *piVar11;
  RakPeer *pRVar12;
  void *pvVar13;
  HANDLE hThread;
  StartupResult SVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  __uint64 _Var18;
  char *pcVar19;
  int *local_6c;
  int local_68;
  RakPeer *local_64;
  RakPeer *local_60;
  u_short local_5c [2];
  RakPeer *local_58;
  u_short local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  RakPeer *local_34;
  u_short local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &DAT_005cd6ad;
  local_1c = ExceptionList;
  local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_64 = (RakPeer *)param_2;
  cVar8 = (**(code **)(*(int *)this + 0x3c))(local_24);
  if (cVar8 == '\0') {
    if (*(int *)(this + 0x450) == 0 && *(int *)(this + 0x454) == 0) {
      _Var18 = RakPeerInterface::Get64BitUniqueRandomNumber();
      *(__uint64 *)(this + 0x450) = _Var18;
      if (_Var18 == 0) goto LAB_005a0875;
    }
    local_68 = 0;
    if (param_4 != -99999) {
      local_68 = param_4;
    }
    FillIPList(this);
    if ((*(uint *)(this + 0x450) == DAT_00657908) && (*(uint *)(this + 0x454) == DAT_0065790c)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      uVar17 = *(uint *)(this + 0x454) ^ *(uint *)(this + 0x450);
      _printf("%i\n",uVar17);
      _DAT_006582e0 = 0;
      uVar17 = uVar17 | 1;
      puVar10 = &DAT_0065791c;
      iVar15 = 0x26f;
      _DAT_00657918 = uVar17;
      do {
        uVar17 = uVar17 * 0x10dcd;
        *puVar10 = uVar17;
        puVar10 = puVar10 + 1;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    if (((local_64 != (RakPeer *)0x0) && (param_3 != 0)) && (param_1 != 0)) {
      DerefAllSockets(this);
      local_60 = (RakPeer *)0x0;
      if (param_3 != 0) {
        local_64 = local_64 + 0x30;
        do {
          piVar11 = operator_new(100);
          uVar17 = 100;
          pcVar19 = (char *)0x0;
          memset(piVar11,0,100);
          piVar11[3] = 0;
          piVar11[4] = 0;
          piVar11[5] = 0;
          piVar11[6] = 0;
          piVar11[7] = -0x10000;
          *(undefined2 *)(piVar11 + 3) = 2;
          *piVar11 = (int)RNS2_Berkley::vftable;
          piVar11[1] = 0;
          piVar11[0x16] = 0;
          piVar11[9] = -1;
          *piVar11 = (int)RNS2_Windows::vftable;
          piVar11[0x18] = 0;
          piVar11[2] = 7;
          piVar11[8] = (int)local_60;
          if ((piVar11[2] == 3) || (piVar11[2] == 0)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          local_6c = piVar11;
          if (bVar4) {
            local_50 = 2;
            local_48 = 0;
            local_44 = 1;
            local_5c[0] = *(u_short *)(local_64 + -0x30);
            local_58 = local_64 + -0x2e;
            local_54 = *(u_short *)(local_64 + -0xe);
            local_4c = *(undefined4 *)local_64;
            local_38 = local_68;
            local_34 = this + 4;
            local_30 = *(u_short *)(local_64 + -0xc);
            local_40 = 0;
            local_3c = 0;
            uVar17 = 0x1ff;
            pcVar19 = "f:\\src\\ois\\libs\\raknet\\code\\rakpeer.cpp";
            iVar15 = (**(code **)(*piVar11 + 8))(local_5c);
            if ((*(u_short *)(local_64 + -0xe) != 2) || (iVar15 == 1)) {
              (**(code **)*piVar11)(1);
              DerefAllSockets(this);
              goto LAB_005a0875;
            }
            if (iVar15 == 2) {
              (**(code **)*piVar11)(1);
              DerefAllSockets(this);
              goto LAB_005a0875;
            }
            if (iVar15 == 3) {
              (**(code **)*piVar11)(1);
              DerefAllSockets(this);
              goto LAB_005a0875;
            }
          }
          DataStructures::List<>::Insert((List<> *)(this + 0x424),(uint *)&local_6c,pcVar19,uVar17);
          local_64 = local_64 + 0x34;
          local_60 = local_60 + 1;
        } while (local_60 < param_3);
      }
      uVar17 = 0;
      if (param_3 != 0) {
        do {
          pvVar13 = *(void **)(*(int *)(this + 0x424) + uVar17 * 4);
          if ((*(int *)((int)pvVar13 + 8) == 3) || (*(int *)((int)pvVar13 + 8) == 0)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            *(undefined1 *)((int)pvVar13 + 0x5c) = 0;
            local_28 = 0;
            local_60 = (RakPeer *)
                       _beginthreadex((void *)0x0,0x200000,RNS2_Berkley::RecvFromLoop,pvVar13,0,
                                      &local_28);
            SetThreadPriority(local_60,local_68);
            if (local_60 != (RakPeer *)0x0) {
              CloseHandle(local_60);
            }
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < param_3);
      }
      local_64 = this + 0x496;
      local_60 = (RakPeer *)0x0;
      do {
        if (*(u_short *)local_64 == DAT_006578f6) {
          if ((*(u_short *)(local_64 + -2) == 2) && (*(int *)(local_64 + 2) == DAT_006578f8)) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          if (!bVar4) goto LAB_005a04ec;
          bVar4 = true;
        }
        else {
LAB_005a04ec:
          bVar4 = false;
        }
        if (bVar4) break;
        iVar15 = *(int *)(**(int **)(this + 0x424) + 8);
        if ((iVar15 == 3) || (iVar15 == 0)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          hostshort = ntohs((u_short)((uint)*(undefined4 *)(**(int **)(this + 0x424) + 0xc) >> 0x10)
                           );
          uVar9 = htons(hostshort);
          *(u_short *)local_64 = uVar9;
          *(u_short *)(local_64 + 0xe) = hostshort;
        }
        local_64 = local_64 + 0x14;
        local_60 = local_60 + 1;
      } while ((int)local_60 < 10);
      if (*(int *)(this + 0xc) == 0) {
        if (param_1 < *(uint *)(this + 0x10)) {
          *(uint *)(this + 0x10) = param_1;
        }
        *(uint *)(this + 0xc) = param_1;
        if (param_1 == 0) {
          pRVar12 = (RakPeer *)0x0;
          uVar17 = 0;
        }
        else {
          uVar17 = -(uint)((int)((ulonglong)param_1 * 0x1210 >> 0x20) != 0) |
                   (uint)((ulonglong)param_1 * 0x1210);
          local_64 = operator_new__(-(uint)(0xfffffffb < uVar17) | uVar17 + 4);
          local_14 = 0;
          if (local_64 == (RakPeer *)0x0) {
            pRVar12 = (RakPeer *)0x0;
          }
          else {
            *(uint *)local_64 = param_1;
            local_60 = local_64 + 4;
            _eh_vector_constructor_iterator_
                      (local_60,0x1210,param_1,RemoteSystemStruct::RemoteSystemStruct,
                       RemoteSystemStruct::~RemoteSystemStruct);
            pRVar12 = local_60;
          }
          local_14 = 0xffffffff;
          uVar17 = *(uint *)(this + 0xc);
        }
        *(RakPeer **)(this + 0x22c) = pRVar12;
        pvVar13 = (void *)0x0;
        if (uVar17 * 8 != 0) {
          lVar3 = (ulonglong)(uVar17 * 8) * 4;
          pvVar13 = operator_new__(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3);
          uVar17 = *(uint *)(this + 0xc);
        }
        *(void **)(this + 0x238) = pvVar13;
        if (uVar17 == 0) {
          pvVar13 = (void *)0x0;
          iVar15 = 0;
        }
        else {
          pvVar13 = operator_new__(-(uint)((int)((ulonglong)uVar17 * 4 >> 0x20) != 0) |
                                   (uint)((ulonglong)uVar17 * 4));
          iVar15 = *(int *)(this + 0xc);
        }
        *(void **)(this + 0x230) = pvVar13;
        local_60 = (RakPeer *)0x0;
        pRVar12 = (RakPeer *)0x0;
        if (iVar15 != 0) {
          iVar15 = 0;
          do {
            *(undefined1 *)(iVar15 + *(int *)(this + 0x22c)) = 0;
            uVar7 = uRam00657900;
            uVar6 = uRam006578fc;
            iVar5 = DAT_006578f8;
            iVar16 = *(int *)(this + 0x22c);
            puVar1 = (undefined4 *)(iVar16 + 4 + iVar15);
            *puVar1 = _DAT_006578f4;
            puVar1[1] = iVar5;
            puVar1[2] = uVar6;
            puVar1[3] = uVar7;
            *(undefined2 *)(iVar16 + 0x16 + iVar15) = DAT_00657906;
            *(undefined2 *)(iVar16 + 0x14 + iVar15) = DAT_00657904;
            iVar16 = *(int *)(this + 0x22c);
            *(uint *)(iVar16 + 0x11f0 + iVar15) = DAT_00657908;
            *(uint *)(iVar16 + 0x11f4 + iVar15) = DAT_0065790c;
            *(undefined2 *)(iVar16 + 0x11f8 + iVar15) = DAT_00657910;
            uVar7 = uRam00657900;
            uVar6 = uRam006578fc;
            iVar5 = DAT_006578f8;
            iVar16 = *(int *)(this + 0x22c);
            puVar1 = (undefined4 *)(iVar16 + 0x18 + iVar15);
            *puVar1 = _DAT_006578f4;
            puVar1[1] = iVar5;
            puVar1[2] = uVar6;
            puVar1[3] = uVar7;
            *(undefined2 *)(iVar16 + 0x2a + iVar15) = DAT_00657906;
            *(undefined2 *)(iVar16 + 0x28 + iVar15) = DAT_00657904;
            *(undefined4 *)(iVar15 + 0x120c + *(int *)(this + 0x22c)) = 0;
            *(undefined4 *)(iVar15 + 0x1200 + *(int *)(this + 0x22c)) =
                 *(undefined4 *)(this + 0x41c);
            *(short *)(iVar15 + 0x1208 + *(int *)(this + 0x22c)) = (short)local_60;
            iVar16 = *(int *)(this + 0x22c) + iVar15;
            iVar15 = iVar15 + 0x1210;
            *(int *)(*(int *)(this + 0x230) + (int)local_60 * 4) = iVar16;
            local_60 = local_60 + 1;
            pRVar12 = *(RakPeer **)(this + 0xc);
          } while (local_60 < pRVar12);
        }
        uVar17 = 0;
        if (((uint)pRVar12 & 0x1fffffff) != 0) {
          do {
            *(undefined4 *)(*(int *)(this + 0x238) + uVar17 * 4) = 0;
            uVar17 = uVar17 + 1;
          } while (uVar17 < (uint)(*(int *)(this + 0xc) << 3));
        }
      }
      if (this[8] != (RakPeer)0x0) {
        this[0x280] = (RakPeer)0x0;
        this[8] = (RakPeer)0x0;
        uVar7 = uRam00657900;
        uVar6 = uRam006578fc;
        iVar15 = DAT_006578f8;
        *(undefined4 *)(this + 0x468) = _DAT_006578f4;
        *(int *)(this + 0x46c) = iVar15;
        *(undefined4 *)(this + 0x470) = uVar6;
        *(undefined4 *)(this + 0x474) = uVar7;
        *(undefined2 *)(this + 0x47a) = DAT_00657906;
        *(undefined2 *)(this + 0x478) = DAT_00657904;
        ClearBufferedCommands(this);
        ClearBufferedPackets(this);
        ClearSocketQueryOutput(this);
        if (this[9] == (RakPeer)0x0) {
          local_2c = 0;
          hThread = (HANDLE)_beginthreadex((void *)0x0,0x200000,UpdateNetworkLoop,this,0,&local_2c);
          SetThreadPriority(hThread,local_68);
          if (hThread == (HANDLE)0x0) {
            (**(code **)(*(int *)this + 0x38))(0,0,3);
            goto LAB_005a0875;
          }
          CloseHandle(hThread);
          RVar2 = this[9];
          while (RVar2 == (RakPeer)0x0) {
            Sleep(10);
            RVar2 = this[9];
          }
        }
      }
      uVar17 = 0;
      if (*(int *)(this + 0x2d0) != 0) {
        do {
          (**(code **)(**(int **)(*(int *)(this + 0x2cc) + uVar17 * 4) + 0x14))();
          uVar17 = uVar17 + 1;
        } while (uVar17 < *(uint *)(this + 0x2d0));
      }
      uVar17 = 0;
      if (*(int *)(this + 0x2dc) != 0) {
        do {
          (**(code **)(**(int **)(*(int *)(this + 0x2d8) + uVar17 * 4) + 0x14))();
          uVar17 = uVar17 + 1;
        } while (uVar17 < *(uint *)(this + 0x2dc));
      }
    }
  }
LAB_005a0875:
  ExceptionList = local_1c;
  SVar14 = __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return SVar14;
}


// public: virtual bool __thiscall RakNet::RakPeer::InitializeSecurity(char const *,char const
// *,bool)

bool __thiscall
RakNet::RakPeer::InitializeSecurity(RakPeer *this,char *param_1,char *param_2,bool param_3)

{
  return false;
}


// public: virtual void __thiscall RakNet::RakPeer::AddToSecurityExceptionList(char const *)

void __thiscall RakNet::RakPeer::AddToSecurityExceptionList(RakPeer *this,char *param_1)

{
  uint uVar1;
  RakString *pRVar2;
  RakString *this_00;
  char **ppcVar3;
  char *pcVar4;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cd6e8;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x404));
  ppcVar3 = &param_1;
  pcVar4 = param_1;
  pRVar2 = (RakString *)RakString::RakString(this_00,(char *)ppcVar3,param_1,uVar1);
  local_8 = 0;
  DataStructures::List<>::Insert((List<> *)(this + 0x488),pRVar2,(char *)ppcVar3,(uint)pcVar4);
  local_8 = 1;
  RakString::Free((RakString *)&param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x404));
  ExceptionList = local_10;
  return;
}


// public: virtual void __thiscall RakNet::RakPeer::RemoveFromSecurityExceptionList(char const *)

void __thiscall RakNet::RakPeer::RemoveFromSecurityExceptionList(RakPeer *this,char *param_1)

{
  uint *puVar1;
  RakString *pRVar2;
  void *pvVar3;
  int iVar4;
  SharedString *pSVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cd710;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(this + 0x48c) != 0) {
    if (param_1 == (char *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x404));
      if (*(int *)(this + 0x490) != 0) {
        pvVar3 = *(void **)(this + 0x488);
        if (pvVar3 != (void *)0x0) {
          puVar1 = (uint *)((int)pvVar3 + -4);
          local_8 = 0;
          _eh_vector_destructor_iterator_(pvVar3,4,*puVar1,RakString::~RakString);
          operator_delete__(puVar1,*puVar1 * 4 + 4);
        }
        *(undefined4 *)(this + 0x490) = 0;
        *(undefined4 *)(this + 0x488) = 0;
        *(undefined4 *)(this + 0x48c) = 0;
      }
    }
    else {
      local_14 = 0;
      EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x404));
      uVar8 = *(uint *)(this + 0x48c);
      if (uVar8 != 0) {
        do {
          iVar4 = *(int *)(this + 0x488);
          pRVar2 = (RakString *)(iVar4 + local_14 * 4);
          bVar7 = RakString::IPAddressMatch(pRVar2,param_1);
          if (bVar7) {
            RakString::Free(pRVar2);
            pSVar5 = *(SharedString **)(iVar4 + -4 + uVar8 * 4);
            if (pSVar5 != &RakString::emptyString) {
              EnterCriticalSection((LPCRITICAL_SECTION)pSVar5->refCountMutex);
              iVar6 = *(int *)(iVar4 + -4 + uVar8 * 4);
              if (*(int *)(iVar6 + 4) == 0) {
                *(SharedString **)pRVar2 = &RakString::emptyString;
              }
              else {
                *(int *)pRVar2 = iVar6;
                *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)**(undefined4 **)(iVar4 + -4 + uVar8 * 4));
            }
            uVar8 = *(uint *)(this + 0x48c);
            uVar9 = *(int *)(this + 0x48c) - 1;
            if (uVar9 < uVar8) {
              if (uVar9 < uVar8 - 1) {
                do {
                  pRVar2 = (RakString *)(*(int *)(this + 0x488) + uVar9 * 4);
                  RakString::Free(pRVar2);
                  if (*(SharedString **)(pRVar2 + 4) != &RakString::emptyString) {
                    EnterCriticalSection
                              ((LPCRITICAL_SECTION)(*(SharedString **)(pRVar2 + 4))->refCountMutex);
                    iVar4 = *(int *)(pRVar2 + 4);
                    if (*(int *)(iVar4 + 4) == 0) {
                      *(SharedString **)pRVar2 = &RakString::emptyString;
                    }
                    else {
                      *(int *)pRVar2 = iVar4;
                      *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)**(undefined4 **)(pRVar2 + 4));
                  }
                  uVar8 = *(uint *)(this + 0x48c);
                  uVar9 = uVar9 + 1;
                } while (uVar9 < uVar8 - 1);
              }
              *(uint *)(this + 0x48c) = uVar8 - 1;
            }
          }
          else {
            local_14 = local_14 + 1;
          }
          uVar8 = *(uint *)(this + 0x48c);
        } while (local_14 < uVar8);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x404));
  }
  ExceptionList = local_10;
  return;
}


// public: virtual bool __thiscall RakNet::RakPeer::IsInSecurityExceptionList(char const *)

bool __thiscall RakNet::RakPeer::IsInSecurityExceptionList(RakPeer *this,char *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  bool bVar2;
  uint uVar3;
  RakString *this_00;
  
  if (*(int *)(this + 0x48c) == 0) {
    return false;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x404);
  uVar3 = 0;
  EnterCriticalSection(lpCriticalSection);
  uVar1 = *(uint *)(this + 0x48c);
  if (uVar1 != 0) {
    this_00 = *(RakString **)(this + 0x488);
    do {
      bVar2 = RakString::IPAddressMatch(this_00,param_1);
      if (bVar2) {
        LeaveCriticalSection(lpCriticalSection);
        return true;
      }
      uVar3 = uVar3 + 1;
      this_00 = this_00 + 4;
    } while (uVar3 < uVar1);
  }
  LeaveCriticalSection(lpCriticalSection);
  return false;
}


// public: virtual void __thiscall RakNet::RakPeer::SetMaximumIncomingConnections(unsigned short)

void __thiscall RakNet::RakPeer::SetMaximumIncomingConnections(RakPeer *this,ushort param_1)

{
  *(uint *)(this + 0x10) = (uint)param_1;
  return;
}


// public: virtual unsigned short __thiscall RakNet::RakPeer::NumberOfConnections(void)const 

ushort __thiscall RakNet::RakPeer::NumberOfConnections(RakPeer *this)

{
  ushort uVar1;
  uint uVar2;
  List<> guids;
  List<> addresses;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005cd740;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  addresses.allocation_size = 0;
  addresses.listArray = (SystemAddress *)0x0;
  addresses.list_size = 0;
  guids.allocation_size = 0;
  guids.listArray = (RakNetGUID *)0x0;
  guids.list_size = 0;
  local_8 = 1;
  (**(code **)(*(int *)this + 0x80))(&addresses,&guids,uVar2);
  if (guids.allocation_size != 0) {
    operator_delete__(guids.listArray);
  }
  if (addresses.allocation_size != 0) {
    operator_delete__(addresses.listArray);
  }
  ExceptionList = local_10;
  uVar1 = __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return uVar1;
}


// public: virtual void __thiscall RakNet::RakPeer::SetIncomingPassword(char const *,int)

void __thiscall RakNet::RakPeer::SetIncomingPassword(RakPeer *this,char *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0xff;
  if (param_2 < 0x100) {
    uVar1 = param_2;
  }
  uVar1 = -(uint)(param_1 != (char *)0x0) & uVar1;
  if (0 < (int)uVar1) {
    memcpy(this + 0x128,param_1,uVar1);
  }
  this[0x228] = SUB41(uVar1,0);
  return;
}


// public: virtual void __thiscall RakNet::RakPeer::GetIncomingPassword(char *,int *)

void __thiscall RakNet::RakPeer::GetIncomingPassword(RakPeer *this,char *param_1,int *param_2)

{
  size_t sVar1;
  uint uVar2;
  
  uVar2 = (uint)(byte)this[0x228];
  if (param_1 == (char *)0x0) {
    *param_2 = uVar2;
    return;
  }
  sVar1 = *param_2;
  if ((int)uVar2 < *param_2) {
    *param_2 = uVar2;
    sVar1 = uVar2;
  }
  if (0 < (int)sVar1) {
    memcpy(param_1,this + 0x128,sVar1);
  }
  return;
}


// public: virtual enum RakNet::ConnectionAttemptResult __thiscall RakNet::RakPeer::Connect(char
// const *,unsigned short,char const *,int,struct RakNet::PublicKey *,unsigned int,unsigned
// int,unsigned int,unsigned int)

ConnectionAttemptResult __thiscall
RakNet::RakPeer::Connect
          (RakPeer *this,char *param_1,ushort param_2,char *param_3,int param_4,PublicKey *param_5,
          uint param_6,uint param_7,uint param_8,uint param_9)

{
  uint uVar1;
  ConnectionAttemptResult CVar2;
  PublicKey *extraout_ECX;
  uint uVar3;
  
  if (((param_1 != (char *)0x0) && (this[8] == (RakPeer)0x0)) && (param_6 < *(uint *)(this + 0x428))
     ) {
    uVar1 = GetRakNetSocketFromUserConnectionSocketIndex(this,param_6);
    uVar3 = 0xff;
    if (param_4 < 0x100) {
      uVar3 = param_4;
    }
    CVar2 = SendConnectionRequest
                      (this,param_1,param_2,param_3,-(uint)(param_3 != (char *)0x0) & uVar3,
                       extraout_ECX,uVar1,(uint)extraout_ECX,param_7,param_8,param_9);
    return CVar2;
  }
  return INVALID_PARAMETER;
}


// public: virtual enum RakNet::ConnectionAttemptResult __thiscall
// RakNet::RakPeer::ConnectWithSocket(char const *,unsigned short,char const *,int,class
// RakNet::RakNetSocket2 *,struct RakNet::PublicKey *,unsigned int,unsigned int,unsigned int)

ConnectionAttemptResult __thiscall
RakNet::RakPeer::ConnectWithSocket
          (RakPeer *this,char *param_1,ushort param_2,char *param_3,int param_4,
          RakNetSocket2 *param_5,PublicKey *param_6,uint param_7,uint param_8,uint param_9)

{
  ConnectionAttemptResult CVar1;
  uint uVar2;
  PublicKey *in_stack_ffffffdc;
  uint in_stack_ffffffe0;
  uint in_stack_ffffffe4;
  
  if (((param_1 != (char *)0x0) && (this[8] == (RakPeer)0x0)) && (param_5 != (RakNetSocket2 *)0x0))
  {
    uVar2 = 0xff;
    if (param_4 < 0x100) {
      uVar2 = param_4;
    }
    CVar1 = SendConnectionRequest
                      (this,param_1,param_2,param_3,-(uint)(param_3 != (char *)0x0) & uVar2,
                       in_stack_ffffffdc,in_stack_ffffffe0,in_stack_ffffffe4,param_7,param_8,param_9
                       ,param_5);
    return CVar1;
  }
  return INVALID_PARAMETER;
}


// public: virtual void __thiscall RakNet::RakPeer::Shutdown(unsigned int,unsigned char,enum
// PacketPriority)

void __thiscall
RakNet::RakPeer::Shutdown(RakPeer *this,uint param_1,uchar param_2,PacketPriority param_3)

{
  uint *puVar1;
  LPCRITICAL_SECTION p_Var2;
  RakPeer RVar3;
  RNS2_Berkley *this_00;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  HuffmanEncodingTreeNode *pHVar8;
  HuffmanEncodingTreeNode **ppHVar9;
  uint uVar10;
  char *extraout_ECX;
  HuffmanEncodingTreeNode *pHVar11;
  int iVar12;
  HuffmanEncodingTreeNode **ppHVar13;
  __uint64 _Var14;
  undefined8 uVar15;
  undefined8 uVar16;
  LPCRITICAL_SECTION p_Var17;
  void *pvVar18;
  int local_30;
  HuffmanEncodingTreeNode *local_28;
  Queue<> local_24;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cd778;
  local_10 = ExceptionList;
  uVar5 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pHVar8 = *(HuffmanEncodingTreeNode **)(this + 0xc);
  local_28 = pHVar8;
  local_14 = uVar5;
  if (param_1 != 0) {
    if (pHVar8 != (HuffmanEncodingTreeNode *)0x0) {
      local_30 = 0;
      pHVar11 = pHVar8;
      do {
        if (*(char *)(*(int *)(this + 0x22c) + local_30) != '\0') {
          NotifyAndFlagForShutdown
                    (this,*(SystemAddress *)((char *)(*(int *)(this + 0x22c) + local_30) + 4),false,
                     param_2,param_3);
        }
        local_30 = local_30 + 0x1210;
        pHVar11 = (HuffmanEncodingTreeNode *)((int)&pHVar11[-1].parent + 3);
      } while (pHVar11 != (HuffmanEncodingTreeNode *)0x0);
    }
    _Var14 = GetTimeUS_Windows();
    uVar15 = __aulldiv((uint)_Var14,(uint)(_Var14 >> 0x20),1000,0);
    if (param_1 != 0) {
      while (uVar10 = 0, pHVar8 != (HuffmanEncodingTreeNode *)0x0) {
        pcVar6 = *(char **)(this + 0x22c);
        while (*pcVar6 == '\0') {
          uVar10 = uVar10 + 1;
          pcVar6 = pcVar6 + 0x1210;
          if (pHVar8 <= uVar10) goto LAB_005a0ed4;
        }
        Sleep(0xf);
        _Var14 = GetTimeUS_Windows();
        uVar16 = __aulldiv((uint)_Var14,(uint)(_Var14 >> 0x20),1000,0);
        if (param_1 <= (uint)((int)uVar16 - (int)uVar15)) break;
      }
    }
  }
LAB_005a0ed4:
  if (*(int *)(this + 0x2d0) != 0) {
    uVar10 = 0;
    do {
      (**(code **)(**(int **)(*(int *)(this + 0x2cc) + uVar10 * 4) + 0x18))(uVar5);
      uVar10 = uVar10 + 1;
      pHVar8 = local_28;
    } while (uVar10 < *(uint *)(this + 0x2d0));
  }
  if (*(int *)(this + 0x2dc) != 0) {
    uVar5 = 0;
    do {
      (**(code **)(**(int **)(*(int *)(this + 0x2d8) + uVar5 * 4) + 0x18))();
      uVar5 = uVar5 + 1;
      pHVar8 = local_28;
    } while (uVar5 < *(uint *)(this + 0x2dc));
  }
  *(undefined4 *)(this + 0x234) = 0;
  SetEvent(*(HANDLE *)(this + 0x568));
  uVar5 = 0;
  this[8] = (RakPeer)0x1;
  if (*(int *)(this + 0x428) != 0) {
    do {
      iVar7 = *(int *)(*(int *)(this + 0x424) + uVar5 * 4);
      iVar12 = *(int *)(iVar7 + 8);
      if ((iVar12 != 3) && (iVar12 != 0)) {
        *(undefined1 *)(iVar7 + 0x5c) = 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(this + 0x428));
  }
  RVar3 = this[9];
  while (RVar3 != (RakPeer)0x0) {
    this[8] = (RakPeer)0x1;
    Sleep(0xf);
    RVar3 = this[9];
  }
  local_28 = (HuffmanEncodingTreeNode *)0x0;
  if (*(int *)(this + 0x428) != 0) {
    do {
      this_00 = *(RNS2_Berkley **)(*(int *)(this + 0x424) + (int)local_28 * 4);
      iVar7 = *(int *)&this_00->field_0x8;
      if ((iVar7 != 3) && (iVar7 != 0)) {
        RNS2_Berkley::BlockOnStopRecvPollingThread(this_00);
      }
      local_28 = (HuffmanEncodingTreeNode *)&local_28->field_0x1;
    } while (local_28 < *(undefined1 **)(this + 0x428));
  }
  if (pHVar8 != (HuffmanEncodingTreeNode *)0x0) {
    local_28 = (HuffmanEncodingTreeNode *)0x0;
    do {
      (&local_28->value)[*(int *)(this + 0x22c)] = '\0';
      ReliabilityLayer::Reset
                ((ReliabilityLayer *)((int)&local_28[0xc].left + *(int *)(this + 0x22c)),false,
                 *(int *)((int)&local_28[0xe6].left + *(int *)(this + 0x22c)),SUB41(local_28,0));
      *(undefined4 *)((int)&local_28[0xe6].right + *(int *)(this + 0x22c)) = 0;
      local_28 = (HuffmanEncodingTreeNode *)&local_28[0xe7].weight;
      pHVar8 = (HuffmanEncodingTreeNode *)((int)&pHVar8[-1].parent + 3);
    } while (pHVar8 != (HuffmanEncodingTreeNode *)0x0);
  }
  *(undefined4 *)(this + 0xc) = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x59c));
  uVar5 = 0;
  while( true ) {
    uVar10 = *(uint *)(this + 0x5b8);
    if (*(uint *)(this + 0x5bc) < uVar10) {
      iVar7 = *(int *)(this + 0x5c0) - uVar10;
    }
    else {
      iVar7 = -uVar10;
    }
    uVar4 = *(uint *)(this + 0x5c0);
    if (*(uint *)(this + 0x5bc) + iVar7 <= uVar5) break;
    if (uVar10 + uVar5 < uVar4) {
      (**(code **)(*(int *)this + 0x60))
                (*(undefined4 *)(*(int *)(this + 0x5b4) + (uVar10 + uVar5) * 4));
      uVar5 = uVar5 + 1;
    }
    else {
      (**(code **)(*(int *)this + 0x60))
                (*(undefined4 *)(*(int *)(this + 0x5b4) + ((uVar10 - uVar4) + uVar5) * 4));
      uVar5 = uVar5 + 1;
    }
  }
  if (uVar4 != 0) {
    if (0x20 < uVar4) {
      operator_delete__(*(void **)(this + 0x5b4));
      *(undefined4 *)(this + 0x5c0) = 0;
    }
    *(undefined4 *)(this + 0x5b8) = 0;
    *(undefined4 *)(this + 0x5bc) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x59c));
  p_Var2 = (LPCRITICAL_SECTION)(this + 0x570);
  pcVar6 = (char *)0x5a10d0;
  p_Var17 = p_Var2;
  EnterCriticalSection(p_Var2);
  DataStructures::MemoryPool<>::Clear((MemoryPool<> *)(this + 0x588),pcVar6,(uint)p_Var17);
  LeaveCriticalSection(p_Var2);
  DerefAllSockets(this);
  ClearBufferedCommands(this);
  ClearBufferedPackets(this);
  ClearSocketQueryOutput(this);
  *(undefined4 *)(this + 0x288) = 0;
  *(undefined4 *)(this + 0x284) = 0;
  local_24.allocation_size = 0;
  local_24.array = (HuffmanEncodingTreeNode **)0x0;
  local_24.head = 0;
  local_24.tail = 0;
  p_Var2 = (LPCRITICAL_SECTION)(this + 0x2f4);
  local_8 = 0;
  pcVar6 = "\x0f\x1f@";
  p_Var17 = p_Var2;
  EnterCriticalSection(p_Var2);
  while( true ) {
    uVar5 = *(uint *)(this + 0x2e8);
    if (*(uint *)(this + 0x2ec) < uVar5) {
      iVar7 = *(int *)(this + 0x2f0) - uVar5;
    }
    else {
      iVar7 = -uVar5;
    }
    if (*(uint *)(this + 0x2ec) + iVar7 == 0) break;
    iVar7 = *(int *)(this + 0x2f0);
    iVar12 = uVar5 + 1;
    *(int *)(this + 0x2e8) = iVar12;
    if (iVar12 == iVar7) {
      *(undefined4 *)(this + 0x2e8) = 0;
      local_28 = *(HuffmanEncodingTreeNode **)(*(int *)(this + 0x2e4) + -4 + iVar7 * 4);
    }
    else if (iVar12 == 0) {
      local_28 = *(HuffmanEncodingTreeNode **)(*(int *)(this + 0x2e4) + -4 + iVar7 * 4);
    }
    else {
      local_28 = *(HuffmanEncodingTreeNode **)(*(int *)(this + 0x2e4) + -4 + iVar12 * 4);
    }
    DataStructures::Queue<>::Push(&local_24,&local_28,pcVar6,(uint)p_Var17);
  }
  LeaveCriticalSection(p_Var2);
  uVar5 = local_24.head;
  local_28 = (HuffmanEncodingTreeNode *)0x0;
  ppHVar13 = local_24.array + local_24.head;
  while( true ) {
    if (local_24.tail < uVar5) {
      pHVar8 = (HuffmanEncodingTreeNode *)(local_24.allocation_size + (local_24.tail - uVar5));
    }
    else {
      pHVar8 = (HuffmanEncodingTreeNode *)(local_24.tail - uVar5);
    }
    if (pHVar8 <= local_28) break;
    ppHVar9 = ppHVar13;
    if (local_24.allocation_size <= &local_28->value + uVar5) {
      ppHVar9 = local_24.array + (int)((uVar5 - local_24.allocation_size) + (int)local_28);
    }
    operator_delete(*ppHVar9,(nothrow_t *)0x150);
    local_28 = (HuffmanEncodingTreeNode *)&local_28->field_0x1;
    ppHVar13 = ppHVar13 + 1;
  }
  local_8 = 0xffffffff;
  if ((undefined1 *)local_24.allocation_size != (undefined1 *)0x0) {
    operator_delete__(local_24.array);
  }
  pvVar18 = *(void **)(this + 0x22c);
  *(undefined4 *)(this + 0x22c) = 0;
  if (pvVar18 != (void *)0x0) {
    puVar1 = (uint *)((int)pvVar18 + -4);
    local_8 = 1;
    _eh_vector_destructor_iterator_(pvVar18,0x1210,*puVar1,RemoteSystemStruct::~RemoteSystemStruct);
    operator_delete__(puVar1,*puVar1 * 0x1210 + 4);
  }
  pvVar18 = *(void **)(this + 0x230);
  operator_delete__(pvVar18);
  *(undefined4 *)(this + 0x230) = 0;
  DataStructures::MemoryPool<>::Clear((MemoryPool<> *)(this + 0x23c),extraout_ECX,(uint)pvVar18);
  operator_delete__(*(void **)(this + 0x238));
  *(undefined4 *)(this + 0x238) = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x5c4));
  *(undefined4 *)(this + 0x5dc) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x5c4));
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: virtual bool __thiscall RakNet::RakPeer::IsActive(void)const 

bool __thiscall RakNet::RakPeer::IsActive(RakPeer *this)

{
  return this[8] == (RakPeer)0x0;
}


// public: virtual bool __thiscall RakNet::RakPeer::GetConnectionList(struct RakNet::SystemAddress
// *,unsigned short *)const 

bool __thiscall
RakNet::RakPeer::GetConnectionList(RakPeer *this,SystemAddress *param_1,ushort *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined3 uVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  SystemAddress *pSVar8;
  SystemAddress *pSVar9;
  ushort uVar10;
  List<> guids;
  List<> addresses;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cd7b0;
  local_10 = ExceptionList;
  uVar6 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 != (ushort *)0x0) {
    if ((*(int *)(this + 0x22c) == 0) || (this[8] == (RakPeer)0x1)) {
      *param_2 = 0;
    }
    else {
      addresses.allocation_size = 0;
      addresses.listArray = (SystemAddress *)0x0;
      addresses.list_size = 0;
      guids.allocation_size = 0;
      guids.listArray = (RakNetGUID *)0x0;
      guids.list_size = 0;
      local_8 = 1;
      (**(code **)(*(int *)this + 0x80))(&addresses,&guids,uVar6);
      if (param_1 == (SystemAddress *)0x0) {
        *param_2 = (ushort)addresses.list_size;
      }
      else {
        uVar10 = 0;
        if (*param_2 != 0) {
          do {
            uVar7 = (uint)uVar10;
            if (addresses.list_size <= uVar7) break;
            uVar10 = uVar10 + 1;
            pSVar9 = addresses.listArray + uVar7;
            pSVar8 = param_1 + uVar7;
            uVar4 = *(undefined3 *)&pSVar9->field_0x1;
            uVar1 = *(undefined4 *)&pSVar9->field_0x4;
            uVar2 = *(undefined4 *)&pSVar9->field_0x8;
            uVar3 = *(undefined4 *)&pSVar9->field_0xc;
            pSVar8->address = pSVar9->address;
            *(undefined3 *)&pSVar8->field_0x1 = uVar4;
            *(undefined4 *)&pSVar8->field_0x4 = uVar1;
            *(undefined4 *)&pSVar8->field_0x8 = uVar2;
            *(undefined4 *)&pSVar8->field_0xc = uVar3;
            pSVar8->systemIndex = pSVar9->systemIndex;
            pSVar8->debugPort = pSVar9->debugPort;
          } while (uVar10 < *param_2);
        }
        *param_2 = uVar10;
      }
      if (guids.allocation_size != 0) {
        operator_delete__(guids.listArray);
      }
      if (addresses.allocation_size != 0) {
        operator_delete__(addresses.listArray);
      }
    }
  }
  ExceptionList = local_10;
  uVar5 = __security_check_cookie(uVar6 ^ (uint)&stack0xfffffffc);
  return (bool)uVar5;
}


// public: virtual unsigned int __thiscall RakNet::RakPeer::GetNextSendReceipt(void)

uint __thiscall RakNet::RakPeer::GetNextSendReceipt(RakPeer *this)

{
  uint uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x5c4));
  uVar1 = *(uint *)(this + 0x5dc);
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x5c4));
  return uVar1;
}


// public: virtual unsigned int __thiscall RakNet::RakPeer::IncrementNextSendReceipt(void)

uint __thiscall RakNet::RakPeer::IncrementNextSendReceipt(RakPeer *this)

{
  int iVar1;
  uint uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x5c4));
  uVar2 = *(uint *)(this + 0x5dc);
  iVar1 = uVar2 + 1;
  *(int *)(this + 0x5dc) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(this + 0x5dc) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x5c4));
  return uVar2;
}


// public: virtual unsigned int __thiscall RakNet::RakPeer::Send(char const *,int,enum
// PacketPriority,enum PacketReliability,char,struct RakNet::AddressOrGUID,bool,unsigned int)

uint __thiscall
RakNet::RakPeer::Send
          (RakPeer *this,char *param_1,int param_2,PacketPriority param_3,PacketReliability param_4,
          char param_5,AddressOrGUID param_6,bool param_7,uint param_8)

{
  AddressOrGUID AVar1;
  uint uVar2;
  uint unaff_EDI;
  bool bVar3;
  undefined3 in_stack_00000045;
  undefined1 auVar4 [16];
  undefined1 in_stack_ffffffb0 [28];
  undefined4 in_stack_ffffffcc;
  undefined4 in_stack_ffffffd0;
  undefined4 uVar5;
  char buff [5];
  
  uVar5 = param_6._36_4_;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  if (((((param_1 == (char *)0x0) || (param_2 < 0)) || (*(int *)(this + 0x22c) == 0)) ||
      (this[8] == (RakPeer)0x1)) ||
     ((bVar3 = param_6._36_1_ == '\0', param_6._36_4_ = uVar5, bVar3 &&
      (bVar3 = AddressOrGUID::IsUndefined((AddressOrGUID *)&stack0x00000018), bVar3)))) {
    uVar2 = __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
    return uVar2;
  }
  if (_param_7 == NO_ACTION) {
    _param_7 = (**(code **)(*(int *)this + 0x48))();
  }
  if ((param_6._36_1_ == '\0') &&
     (bVar3 = IsLoopbackAddress(this,(AddressOrGUID *)&stack0x00000018,true), bVar3)) {
    (**(code **)(*(int *)this + 0x54))();
    if (4 < (int)param_4) {
      EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x5c4));
      LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x5c4));
      (**(code **)(*(int *)this + 0x54))();
    }
    uVar2 = __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
    return uVar2;
  }
  bVar3 = false;
  uVar5 = param_6._36_4_;
  AddressOrGUID::AddressOrGUID((AddressOrGUID *)&stack0xffffffac,(AddressOrGUID *)&stack0x00000018);
  AVar1.systemAddress._12_2_ = (ushort)in_stack_ffffffcc;
  AVar1.systemAddress._14_2_ = SUB42(in_stack_ffffffcc,2);
  auVar4 = in_stack_ffffffb0._0_16_;
  AVar1.rakNetGuid.g = auVar4._0_8_;
  AVar1.rakNetGuid.systemIndex = auVar4._8_2_;
  AVar1.rakNetGuid._10_6_ = auVar4._10_6_;
  AVar1.systemAddress.address = (<>)in_stack_ffffffb0[0x10];
  AVar1.systemAddress._1_8_ = in_stack_ffffffb0._17_8_;
  AVar1.systemAddress._9_3_ = in_stack_ffffffb0._25_3_;
  AVar1.systemAddress.debugPort = (short)in_stack_ffffffd0;
  AVar1.systemAddress.systemIndex = SUB42(in_stack_ffffffd0,2);
  AVar1._36_4_ = uVar5;
  SendBuffered(this,param_1,param_2 * 8,param_3,param_4,param_5,AVar1,bVar3,_param_7,unaff_EDI);
  uVar2 = __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return uVar2;
}


// public: virtual void __thiscall RakNet::RakPeer::SendLoopback(char const *,int)

void __thiscall RakNet::RakPeer::SendLoopback(RakPeer *this,char *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Packet *pPVar6;
  char *in_stack_ffffffe8;
  uint in_stack_ffffffec;
  
  if ((param_1 != (char *)0x0) && (-1 < param_2)) {
    pPVar6 = AllocPacket(this,param_2,in_stack_ffffffe8,in_stack_ffffffec);
    memcpy(*(void **)(pPVar6 + 0x30),param_1,param_2);
    uVar1 = *(undefined4 *)(this + 0x4a4);
    uVar2 = *(undefined4 *)(this + 0x494);
    uVar3 = *(undefined4 *)(this + 0x498);
    uVar4 = *(undefined4 *)(this + 0x49c);
    uVar5 = *(undefined4 *)(this + 0x4a0);
    *(short *)(pPVar6 + 0x10) = (short)uVar1;
    *(undefined4 *)pPVar6 = uVar2;
    *(undefined4 *)(pPVar6 + 4) = uVar3;
    *(undefined4 *)(pPVar6 + 8) = uVar4;
    *(undefined4 *)(pPVar6 + 0xc) = uVar5;
    *(short *)(pPVar6 + 0x12) = (short)((uint)uVar1 >> 0x10);
    *(undefined4 *)(pPVar6 + 0x18) = *(undefined4 *)(this + 0x450);
    *(undefined4 *)(pPVar6 + 0x1c) = *(undefined4 *)(this + 0x454);
    *(undefined2 *)(pPVar6 + 0x20) = *(undefined2 *)(this + 0x458);
    (**(code **)(*(int *)this + 0x114))(pPVar6,0);
  }
  return;
}


// public: virtual unsigned int __thiscall RakNet::RakPeer::Send(class RakNet::BitStream const
// *,enum PacketPriority,enum PacketReliability,char,struct RakNet::AddressOrGUID,bool,unsigned int)

uint __thiscall
RakNet::RakPeer::Send
          (RakPeer *this,BitStream *param_1,PacketPriority param_2,PacketReliability param_3,
          char param_4,AddressOrGUID param_5,bool param_6,uint param_7)

{
  uint uVar1;
  uchar *puVar2;
  AddressOrGUID AVar3;
  bool bVar4;
  uint uVar5;
  uint unaff_EDI;
  undefined3 in_stack_0000003d;
  undefined1 auVar6 [16];
  undefined1 in_stack_ffffffb0 [28];
  undefined4 in_stack_ffffffcc;
  undefined4 in_stack_ffffffd0;
  char buff [5];
  
  uVar5 = ___security_cookie ^ (uint)&stack0xfffffffc;
  if ((((param_1->numberOfBitsUsed + 7 < 8) || (*(int *)(this + 0x22c) == 0)) ||
      (this[8] == (RakPeer)0x1)) ||
     ((!param_6 && (bVar4 = AddressOrGUID::IsUndefined(&param_5), bVar4)))) {
    uVar5 = __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
    return uVar5;
  }
  if (param_7 == 0) {
    param_7 = (**(code **)(*(int *)this + 0x48))();
  }
  if ((!param_6) && (bVar4 = IsLoopbackAddress(this,&param_5,true), bVar4)) {
    (**(code **)(*(int *)this + 0x54))();
    if (4 < (int)param_3) {
      EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x5c4));
      LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x5c4));
      (**(code **)(*(int *)this + 0x54))();
    }
    uVar5 = __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
    return uVar5;
  }
  uVar1 = param_1->numberOfBitsUsed;
  bVar4 = false;
  puVar2 = param_1->data;
  AddressOrGUID::AddressOrGUID((AddressOrGUID *)&stack0xffffffac,&param_5);
  AVar3.systemAddress._12_2_ = (ushort)in_stack_ffffffcc;
  AVar3.systemAddress._14_2_ = SUB42(in_stack_ffffffcc,2);
  auVar6 = in_stack_ffffffb0._0_16_;
  AVar3.rakNetGuid.g = auVar6._0_8_;
  AVar3.rakNetGuid.systemIndex = auVar6._8_2_;
  AVar3.rakNetGuid._10_6_ = auVar6._10_6_;
  AVar3.systemAddress.address = (<>)in_stack_ffffffb0[0x10];
  AVar3.systemAddress._1_8_ = in_stack_ffffffb0._17_8_;
  AVar3.systemAddress._9_3_ = in_stack_ffffffb0._25_3_;
  AVar3.systemAddress.debugPort = (short)in_stack_ffffffd0;
  AVar3.systemAddress.systemIndex = SUB42(in_stack_ffffffd0,2);
  AVar3._36_4_ = _param_6;
  SendBuffered(this,(char *)puVar2,uVar1,param_2,param_3,param_4,AVar3,bVar4,param_7,unaff_EDI);
  uVar5 = __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
  return uVar5;
}


// public: virtual unsigned int __thiscall RakNet::RakPeer::SendList(char const * *,int const
// *,int,enum PacketPriority,enum PacketReliability,char,struct RakNet::AddressOrGUID,bool,unsigned
// int)

uint __thiscall
RakNet::RakPeer::SendList
          (RakPeer *this,char **param_1,int *param_2,int param_3,PacketPriority param_4,
          PacketReliability param_5,char param_6,AddressOrGUID param_7,bool param_8,uint param_9)

{
  bool bVar1;
  char **extraout_ECX;
  char **extraout_ECX_00;
  char **ppcVar2;
  AddressOrGUID in_stack_ffffffb8;
  uint uVar3;
  
  if ((((param_1 != (char **)0x0) && (param_2 != (int *)0x0)) && (*(int *)(this + 0x22c) != 0)) &&
     ((this[8] != (RakPeer)0x1 && (param_3 != 0)))) {
    ppcVar2 = param_1;
    if ((!param_8) && (bVar1 = AddressOrGUID::IsUndefined(&param_7), ppcVar2 = extraout_ECX, bVar1))
    {
      return 0;
    }
    if (param_9 == 0) {
      param_9 = (**(code **)(*(int *)this + 0x48))();
      ppcVar2 = extraout_ECX_00;
    }
    uVar3 = param_9;
    AddressOrGUID::AddressOrGUID((AddressOrGUID *)&stack0xffffffb8,&param_7);
    SendBufferedList(this,param_1,param_2,param_3,param_4,param_5,param_6,in_stack_ffffffb8,param_8,
                     (ConnectMode)ppcVar2,uVar3);
    return param_9;
  }
  return 0;
}


// public: virtual struct RakNet::Packet * __thiscall RakNet::RakPeer::Receive(void)

Packet * __thiscall RakNet::RakPeer::Receive(RakPeer *this)

{
  char *pcVar1;
  char cVar2;
  RemoteSystemStruct *pRVar3;
  int iVar4;
  RakPeer *extraout_ECX;
  RakPeer *extraout_ECX_00;
  RakPeer *extraout_ECX_01;
  RakPeer *this_00;
  RakPeer *this_01;
  Packet *pPVar5;
  uint uVar6;
  bool bVar7;
  __uint64 _Var8;
  BitStream local_138;
  SystemAddress local_24;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  cVar2 = (**(code **)(*(int *)this + 0x3c))();
  if (cVar2 == '\0') {
LAB_005a1b19:
    pPVar5 = (Packet *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return pPVar5;
  }
  uVar6 = 0;
  if (*(int *)(this + 0x2d0) != 0) {
    do {
      (**(code **)(**(int **)(*(int *)(this + 0x2cc) + uVar6 * 4) + 0xc))();
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(this + 0x2d0));
  }
  uVar6 = 0;
  if (*(int *)(this + 0x2dc) != 0) {
    do {
      (**(code **)(**(int **)(*(int *)(this + 0x2d8) + uVar6 * 4) + 0xc))();
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(this + 0x2dc));
  }
LAB_005a18e0:
  do {
    EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x59c));
    if (*(int *)(this + 0x5b8) == *(int *)(this + 0x5bc)) {
      pPVar5 = (Packet *)0x0;
    }
    else {
      iVar4 = *(int *)(this + 0x5b8) + 1;
      *(int *)(this + 0x5b8) = iVar4;
      if (iVar4 == *(int *)(this + 0x5c0)) {
        *(undefined4 *)(this + 0x5b8) = 0;
        iVar4 = 0;
      }
      if (iVar4 == 0) {
        pPVar5 = *(Packet **)(*(int *)(this + 0x5b4) + -4 + *(int *)(this + 0x5c0) * 4);
      }
      else {
        pPVar5 = *(Packet **)(*(int *)(this + 0x5b4) + -4 + iVar4 * 4);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x59c));
    if (pPVar5 == (Packet *)0x0) goto LAB_005a1b19;
    this_00 = extraout_ECX;
    if ((8 < *(uint *)(pPVar5 + 0x28)) && (pcVar1 = *(char **)(pPVar5 + 0x30), *pcVar1 == '\x1b')) {
      memset(local_138.stackData,0,0x103);
      local_138.numberOfBitsUsed = 0x40;
      local_138.readOffset = 0;
      local_138.copyData = false;
      local_138.numberOfBitsAllocated = 0x40;
      local_138.data = (uchar *)(pcVar1 + 1);
      BitStream::Read<>(&local_138,(__uint64 *)&local_10);
      local_24._0_2_ = *(undefined2 *)pPVar5;
      local_24._2_2_ = *(undefined2 *)(pPVar5 + 2);
      local_24._4_4_ = *(undefined4 *)(pPVar5 + 4);
      local_24._8_2_ = *(undefined2 *)(pPVar5 + 8);
      local_24._10_2_ = *(undefined2 *)(pPVar5 + 10);
      local_24._12_2_ = *(undefined2 *)(pPVar5 + 0xc);
      local_24._14_2_ = *(undefined2 *)(pPVar5 + 0xe);
      local_24._16_4_ = *(undefined4 *)(pPVar5 + 0x10);
      if (((local_24._2_2_ == DAT_006578f6) &&
          ((local_24._0_2_ == 2 && (local_24._4_4_ == DAT_006578f8)))) ||
         (uVar6 = GetRemoteSystemIndex(this,&local_24), uVar6 == 0xffffffff)) {
LAB_005a1a05:
        _Var8 = 0;
      }
      else {
        pRVar3 = (RemoteSystemStruct *)((RakPeer *)(uVar6 * 0x1210) + *(int *)(this + 0x22c));
        if ((*pRVar3 != (RemoteSystemStruct)0x1) || (pRVar3 == (RemoteSystemStruct *)0x0))
        goto LAB_005a1a05;
        _Var8 = GetClockDifferentialInt((RakPeer *)(uVar6 * 0x1210),pRVar3);
      }
      bVar7 = local_10 < (uint)_Var8;
      local_10 = local_10 - (uint)_Var8;
      local_138.numberOfBitsUsed = 0;
      local_c = (local_c - (int)(_Var8 >> 0x20)) - (uint)bVar7;
      BitStream::Write<>(&local_138,(__uint64 *)&local_10);
      this_00 = extraout_ECX_00;
      if ((local_138.copyData != false) && (0x800 < local_138.numberOfBitsAllocated)) {
        free(local_138.data);
        this_00 = extraout_ECX_01;
      }
    }
    CallPluginCallbacks(this_00,(List<> *)(this + 0x2cc),pPVar5);
    CallPluginCallbacks(this_01,(List<> *)(this + 0x2d8),pPVar5);
    uVar6 = 0;
    if (*(int *)(this + 0x2d0) != 0) {
      do {
        iVar4 = (**(code **)(**(int **)(*(int *)(this + 0x2cc) + uVar6 * 4) + 0x10))(pPVar5);
        if (iVar4 == 0) {
          (**(code **)(*(int *)this + 0x60))(pPVar5);
LAB_005a1aae:
          pPVar5 = (Packet *)0x0;
          break;
        }
        if (iVar4 == 2) goto LAB_005a1aae;
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(this + 0x2d0));
    }
    uVar6 = 0;
    if (*(int *)(this + 0x2dc) != 0) {
      do {
        iVar4 = (**(code **)(**(int **)(*(int *)(this + 0x2d8) + uVar6 * 4) + 0x10))(pPVar5);
        if (iVar4 == 0) {
          (**(code **)(*(int *)this + 0x60))(pPVar5);
          goto LAB_005a18e0;
        }
        if (iVar4 == 2) goto LAB_005a18e0;
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(this + 0x2dc));
    }
    if (pPVar5 != (Packet *)0x0) {
      pPVar5 = (Packet *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return pPVar5;
    }
  } while( true );
}


// public: virtual void __thiscall RakNet::RakPeer::DeallocatePacket(struct RakNet::Packet *)

void __thiscall RakNet::RakPeer::DeallocatePacket(RakPeer *this,Packet *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char *pcVar1;
  LPCRITICAL_SECTION p_Var2;
  
  if (param_1 != (Packet *)0x0) {
    if (param_1[0x34] != (Packet)0x0) {
      free(*(void **)(param_1 + 0x30));
      lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x570);
      pcVar1 = (char *)0x5a1b5e;
      p_Var2 = lpCriticalSection;
      EnterCriticalSection(lpCriticalSection);
      DataStructures::MemoryPool<>::Release
                ((MemoryPool<> *)(this + 0x588),param_1,pcVar1,(uint)p_Var2);
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
    free(param_1);
  }
  return;
}


// public: virtual unsigned int __thiscall RakNet::RakPeer::GetMaximumNumberOfPeers(void)const 

uint __thiscall RakNet::RakPeer::GetMaximumNumberOfPeers(RakPeer *this)

{
  return *(uint *)(this + 0xc);
}


// public: virtual void __thiscall RakNet::RakPeer::CloseConnection(struct
// RakNet::AddressOrGUID,bool,unsigned char,enum PacketPriority)

void __thiscall
RakNet::RakPeer::CloseConnection
          (RakPeer *this,AddressOrGUID param_1,bool param_2,uchar param_3,PacketPriority param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  HuffmanEncodingTreeNode *pHVar1;
  HuffmanEncodingTreeNode *pHVar2;
  undefined2 uVar3;
  int iVar4;
  HuffmanEncodingTreeNode *pHVar5;
  AddressOrGUID *pAVar6;
  undefined4 *puVar7;
  LPCRITICAL_SECTION p_Var8;
  char *pcVar9;
  uint uVar10;
  undefined4 uStack_3c;
  undefined4 local_1c [5];
  HuffmanEncodingTreeNode *local_8;
  
  uStack_3c._0_1_ = (<>)0xbe;
  uStack_3c._1_3_ = 0x5a1b;
  CloseConnectionInternal(this,&param_1,param_2,false,param_3,param_4);
  if (!param_2) {
    pcVar9 = (char *)0x5a1bd6;
    AddressOrGUID::AddressOrGUID((AddressOrGUID *)&stack0xffffffb4,&param_1);
    uVar10 = 0x5a1bdd;
    iVar4 = (**(code **)(*(int *)this + 0x6c))();
    if (iVar4 == 2) {
      pHVar5 = (HuffmanEncodingTreeNode *)AllocPacket(this,1,pcVar9,uVar10);
      (pHVar5[2].left)->value = '\x16';
      if (((int)param_1.rakNetGuid.g == DAT_00657908) &&
         (param_1.rakNetGuid.g._4_4_ == DAT_0065790c)) {
        pAVar6 = (AddressOrGUID *)
                 (**(code **)(*(int *)this + 0xd0))
                           (CONCAT22(param_1.systemAddress._2_2_,param_1.systemAddress._0_2_),
                            param_1.systemAddress._4_4_,param_1.systemAddress._8_4_,
                            param_1.systemAddress._12_4_,param_1.systemAddress._16_4_);
      }
      else {
        pAVar6 = &param_1;
      }
      pHVar5[1].weight = (uint)(pAVar6->rakNetGuid).g;
      pHVar5[1].left = *(HuffmanEncodingTreeNode **)((int)&(pAVar6->rakNetGuid).g + 4);
      *(ushort *)&pHVar5[1].right = (pAVar6->rakNetGuid).systemIndex;
      if (((param_1.systemAddress._2_2_ == DAT_006578f6) && (param_1.systemAddress._0_2_ == 2)) &&
         (param_1.systemAddress._4_4_ == DAT_006578f8)) {
        puVar7 = (undefined4 *)
                 (**(code **)(*(int *)this + 0xd4))
                           (local_1c,(int)param_1.rakNetGuid.g,param_1.rakNetGuid.g._4_4_,
                            param_1.rakNetGuid._8_4_,param_1.rakNetGuid._12_4_);
      }
      else {
        puVar7 = local_1c;
        local_1c[4]._0_2_ = param_1.systemAddress.debugPort;
        local_1c[4]._2_2_ = param_1.systemAddress.systemIndex;
        local_1c[0] = CONCAT22(param_1.systemAddress._2_2_,param_1.systemAddress._0_2_);
        local_1c[1] = param_1.systemAddress._4_4_;
        local_1c[2] = param_1.systemAddress._8_4_;
        local_1c[3] = param_1.systemAddress._12_4_;
      }
      uVar10 = puVar7[1];
      pHVar1 = (HuffmanEncodingTreeNode *)puVar7[2];
      pHVar2 = (HuffmanEncodingTreeNode *)puVar7[3];
      *(undefined4 *)pHVar5 = *puVar7;
      pHVar5->weight = uVar10;
      pHVar5->left = pHVar1;
      pHVar5->right = pHVar2;
      *(undefined2 *)((int)&pHVar5->parent + 2) = *(undefined2 *)((int)puVar7 + 0x12);
      *(undefined2 *)&pHVar5->parent = *(undefined2 *)(puVar7 + 4);
      uVar3 = (**(code **)(*(int *)this + 0x74))
                        (*(undefined4 *)pHVar5,pHVar5->weight,pHVar5->left,pHVar5->right,
                         pHVar5->parent);
      *(undefined2 *)((int)&pHVar5->parent + 2) = uVar3;
      *(undefined2 *)&pHVar5[1].right = uVar3;
      *(undefined1 *)((int)&pHVar5[2].right + 1) = 1;
      lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x59c);
      pcVar9 = (char *)0x5a1ce1;
      p_Var8 = lpCriticalSection;
      local_8 = pHVar5;
      EnterCriticalSection(lpCriticalSection);
      DataStructures::Queue<>::Push((Queue<> *)(this + 0x5b4),&local_8,pcVar9,(uint)p_Var8);
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return;
}


// public: virtual void __thiscall RakNet::RakPeer::CancelConnectionAttempt(struct
// RakNet::SystemAddress)

void __thiscall RakNet::RakPeer::CancelConnectionAttempt(RakPeer *this,SystemAddress param_1)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x2f4));
  uVar3 = *(uint *)(this + 0x2e8);
  iVar6 = uVar3 * 4;
  uVar4 = uVar3;
  while( true ) {
    if (*(uint *)(this + 0x2ec) < uVar3) {
      iVar2 = *(int *)(this + 0x2f0) - uVar3;
    }
    else {
      iVar2 = -uVar3;
    }
    if (*(uint *)(this + 0x2ec) + iVar2 <= uVar5) goto LAB_005a1dfb;
    iVar2 = iVar6;
    if (*(uint *)(this + 0x2f0) <= uVar4) {
      iVar2 = ((uVar3 - *(int *)(this + 0x2f0)) + uVar5) * 4;
    }
    psVar1 = *(short **)(iVar2 + *(int *)(this + 0x2e4));
    if (((psVar1[1] == param_1._2_2_) && (*psVar1 == 2)) && (*(int *)(psVar1 + 2) == param_1._4_4_))
    break;
    uVar5 = uVar5 + 1;
    iVar6 = iVar6 + 4;
    uVar4 = uVar4 + 1;
  }
  if (*(uint *)(this + 0x2f0) <= uVar4) {
    uVar3 = uVar3 - *(int *)(this + 0x2f0);
  }
  operator_delete(*(void **)(*(int *)(this + 0x2e4) + (uVar5 + uVar3) * 4),(nothrow_t *)0x150);
  DataStructures::Queue<>::RemoveAtIndex((Queue<> *)(this + 0x2e4),uVar5);
LAB_005a1dfb:
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2f4));
  return;
}


// public: virtual enum RakNet::ConnectionState __thiscall
// RakNet::RakPeer::GetConnectionState(struct RakNet::AddressOrGUID)

ConnectionState __thiscall RakNet::RakPeer::GetConnectionState(RakPeer *this,AddressOrGUID param_1)

{
  short *psVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint local_8;
  
  if (((param_1.systemAddress._2_2_ != DAT_006578f6) || (param_1.systemAddress._0_2_ != 2)) ||
     (param_1.systemAddress._4_4_ != DAT_006578f8)) {
    uVar6 = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x2f4));
    uVar5 = *(uint *)(this + 0x2e8);
    iVar7 = uVar5 * 4;
    local_8 = uVar5;
    while( true ) {
      if (*(uint *)(this + 0x2ec) < uVar5) {
        iVar4 = *(int *)(this + 0x2f0) - uVar5;
      }
      else {
        iVar4 = -uVar5;
      }
      if (*(uint *)(this + 0x2ec) + iVar4 <= uVar6) break;
      iVar4 = iVar7;
      if (*(uint *)(this + 0x2f0) <= local_8) {
        iVar4 = ((uVar5 - *(uint *)(this + 0x2f0)) + uVar6) * 4;
      }
      psVar1 = *(short **)(iVar4 + *(int *)(this + 0x2e4));
      if (((psVar1[1] == param_1.systemAddress._2_2_) && (*psVar1 == 2)) &&
         (*(int *)(psVar1 + 2) == param_1.systemAddress._4_4_)) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2f4));
        return IS_PENDING;
      }
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + 4;
      local_8 = local_8 + 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2f4));
  }
  if (((param_1.systemAddress._2_2_ == DAT_006578f6) && (param_1.systemAddress._0_2_ == 2)) &&
     (param_1.systemAddress._4_4_ == DAT_006578f8)) {
    if (((int)param_1.rakNetGuid.g == DAT_00657908) && (param_1.rakNetGuid.g._4_4_ == DAT_0065790c))
    {
      return IS_NOT_CONNECTED;
    }
    if ((param_1.rakNetGuid.systemIndex != 0xffff) &&
       (uVar5 = (uint)param_1.rakNetGuid.systemIndex, uVar5 < *(uint *)(this + 0xc))) {
      iVar7 = *(int *)(this + 0x22c);
      iVar4 = uVar5 * 0x1210;
      if ((*(int *)(iVar4 + 0x11f0 + iVar7) == (int)param_1.rakNetGuid.g) &&
         ((*(int *)(iVar4 + 0x11f4 + iVar7) == param_1.rakNetGuid.g._4_4_ &&
          (*(char *)(iVar4 + iVar7) != '\0')))) goto LAB_005a1fee;
    }
    uVar6 = *(uint *)(this + 0xc);
    uVar5 = 0;
    if (uVar6 != 0) {
      pcVar2 = *(char **)(this + 0x22c);
      do {
        if (((*pcVar2 != '\0') && (*(int *)(pcVar2 + 0x11f0) == (int)param_1.rakNetGuid.g)) &&
           (*(int *)(pcVar2 + 0x11f4) == param_1.rakNetGuid.g._4_4_)) goto LAB_005a1fee;
        uVar5 = uVar5 + 1;
        pcVar2 = pcVar2 + 0x1210;
      } while (uVar5 < uVar6);
    }
    uVar5 = 0;
    if (uVar6 != 0) {
      piVar3 = (int *)(*(int *)(this + 0x22c) + 0x11f0);
      do {
        if ((*piVar3 == (int)param_1.rakNetGuid.g) && (piVar3[1] == param_1.rakNetGuid.g._4_4_))
        goto LAB_005a1fee;
        uVar5 = uVar5 + 1;
        piVar3 = piVar3 + 0x484;
      } while (uVar5 < uVar6);
    }
  }
  else {
    uVar5 = GetIndexFromSystemAddress(this,param_1.systemAddress,false);
LAB_005a1fee:
    if (uVar5 != 0xffffffff) {
      if (*(char *)(*(int *)(this + 0x22c) + uVar5 * 0x1210) == '\0') {
        return IS_DISCONNECTED;
      }
      switch(*(undefined4 *)(*(int *)(this + 0x22c) + 0x120c + uVar5 * 0x1210)) {
      case 1:
      case 3:
        return IS_DISCONNECTING;
      case 2:
        return IS_SILENTLY_DISCONNECTING;
      case 4:
      case 5:
      case 6:
        return IS_CONNECTING;
      case 7:
        return IS_CONNECTED;
      }
    }
  }
  return IS_NOT_CONNECTED;
}


// public: virtual int __thiscall RakNet::RakPeer::GetIndexFromSystemAddress(struct
// RakNet::SystemAddress)const 

int __thiscall RakNet::RakPeer::GetIndexFromSystemAddress(RakPeer *this,SystemAddress param_1)

{
  int iVar1;
  
  iVar1 = GetIndexFromSystemAddress(this,param_1,false);
  return iVar1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: virtual struct RakNet::SystemAddress __thiscall
// RakNet::RakPeer::GetSystemAddressFromIndex(unsigned int)

SystemAddress * __thiscall
RakNet::RakPeer::GetSystemAddressFromIndex
          (RakPeer *this,SystemAddress *__return_storage_ptr__,uint param_1)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined2 uVar20;
  char *pcVar21;
  
  uVar19 = _DAT_00657904;
  uVar18 = uRam00657900;
  uVar17 = uRam006578fc;
  uVar1 = DAT_006578f8;
  if (((param_1 < *(uint *)(this + 0xc)) &&
      (pcVar21 = (char *)(*(int *)(this + 0x22c) + param_1 * 0x1210), *pcVar21 != '\0')) &&
     (*(int *)(pcVar21 + 0x120c) == 7)) {
    cVar2 = pcVar21[5];
    cVar3 = pcVar21[6];
    cVar4 = pcVar21[7];
    cVar5 = pcVar21[8];
    cVar6 = pcVar21[9];
    cVar7 = pcVar21[10];
    cVar8 = pcVar21[0xb];
    cVar9 = pcVar21[0xc];
    cVar10 = pcVar21[0xd];
    cVar11 = pcVar21[0xe];
    cVar12 = pcVar21[0xf];
    cVar13 = pcVar21[0x10];
    cVar14 = pcVar21[0x11];
    cVar15 = pcVar21[0x12];
    cVar16 = pcVar21[0x13];
    uVar1 = *(undefined4 *)(pcVar21 + 0x14);
    __return_storage_ptr__->address = (<>)pcVar21[4];
    __return_storage_ptr__->field_0x1 = cVar2;
    __return_storage_ptr__->field_0x2 = cVar3;
    __return_storage_ptr__->field_0x3 = cVar4;
    __return_storage_ptr__->field_0x4 = cVar5;
    __return_storage_ptr__->field_0x5 = cVar6;
    __return_storage_ptr__->field_0x6 = cVar7;
    __return_storage_ptr__->field_0x7 = cVar8;
    __return_storage_ptr__->field_0x8 = cVar9;
    __return_storage_ptr__->field_0x9 = cVar10;
    __return_storage_ptr__->field_0xa = cVar11;
    __return_storage_ptr__->field_0xb = cVar12;
    __return_storage_ptr__->field_0xc = cVar13;
    __return_storage_ptr__->field_0xd = cVar14;
    __return_storage_ptr__->field_0xe = cVar15;
    __return_storage_ptr__->field_0xf = cVar16;
    __return_storage_ptr__->debugPort = (short)uVar1;
    __return_storage_ptr__->systemIndex = (short)((uint)uVar1 >> 0x10);
    return __return_storage_ptr__;
  }
  *(undefined4 *)__return_storage_ptr__ = _DAT_006578f4;
  *(undefined4 *)&__return_storage_ptr__->field_0x4 = uVar1;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar17;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar18;
  uVar1 = _DAT_00657904;
  DAT_00657904 = (undefined2)uVar19;
  DAT_00657906 = SUB42(uVar19,2);
  uVar20 = DAT_00657906;
  __return_storage_ptr__->debugPort = DAT_00657904;
  _DAT_00657904 = uVar1;
  __return_storage_ptr__->systemIndex = uVar20;
  return __return_storage_ptr__;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: virtual struct RakNet::RakNetGUID __thiscall RakNet::RakPeer::GetGUIDFromIndex(unsigned
// int)

RakNetGUID * __thiscall
RakNet::RakPeer::GetGUIDFromIndex(RakPeer *this,RakNetGUID *__return_storage_ptr__,uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar5 = uRam00657914;
  uVar4 = _DAT_00657910;
  uVar3 = DAT_0065790c;
  if (param_1 < *(uint *)(this + 0xc)) {
    iVar6 = param_1 * 0x1210;
    iVar2 = *(int *)(this + 0x22c);
    if ((*(char *)(iVar6 + iVar2) != '\0') && (*(int *)(iVar6 + 0x120c + iVar2) == 7)) {
      puVar1 = (undefined4 *)(iVar6 + 0x11f0 + iVar2);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(undefined4 *)&__return_storage_ptr__->g = *puVar1;
      *(undefined4 *)((int)&__return_storage_ptr__->g + 4) = uVar3;
      *(undefined4 *)&__return_storage_ptr__->systemIndex = uVar4;
      *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar5;
      return __return_storage_ptr__;
    }
  }
  *(undefined4 *)&__return_storage_ptr__->g = DAT_00657908;
  *(undefined4 *)((int)&__return_storage_ptr__->g + 4) = uVar3;
  *(undefined4 *)&__return_storage_ptr__->systemIndex = uVar4;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar5;
  return __return_storage_ptr__;
}


// public: virtual void __thiscall RakNet::RakPeer::GetSystemList(class DataStructures::List<struct
// RakNet::SystemAddress> &,class DataStructures::List<struct RakNet::RakNetGUID> &)const 

void __thiscall RakNet::RakPeer::GetSystemList(RakPeer *this,List<> *param_1,List<> *param_2)

{
  char *pcVar1;
  uint uVar2;
  char *in_stack_ffffffe8;
  SystemAddress *in_stack_ffffffec;
  
  if (param_1->allocation_size != 0) {
    in_stack_ffffffec = param_1->listArray;
    in_stack_ffffffe8 = (char *)0x5a2168;
    operator_delete__(in_stack_ffffffec);
    param_1->allocation_size = 0;
    param_1->listArray = (SystemAddress *)0x0;
    param_1->list_size = 0;
  }
  if (param_2->allocation_size != 0) {
    in_stack_ffffffec = (SystemAddress *)param_2->listArray;
    in_stack_ffffffe8 = (char *)0x5a218f;
    operator_delete__(in_stack_ffffffec);
    param_2->allocation_size = 0;
    param_2->listArray = (RakNetGUID *)0x0;
    param_2->list_size = 0;
  }
  if (((*(int *)(this + 0x22c) != 0) && (this[8] != (RakPeer)0x1)) &&
     (uVar2 = 0, *(int *)(this + 0x234) != 0)) {
    do {
      pcVar1 = *(char **)(*(int *)(this + 0x230) + uVar2 * 4);
      if ((*pcVar1 != '\0') && (*(int *)(pcVar1 + 0x120c) == 7)) {
        DataStructures::List<>::Push
                  (param_1,(SystemAddress *)(pcVar1 + 4),in_stack_ffffffe8,(uint)in_stack_ffffffec);
        DataStructures::List<>::Push
                  (param_2,(RakNetGUID *)(*(int *)(*(int *)(this + 0x230) + uVar2 * 4) + 0x11f0),
                   in_stack_ffffffe8,(uint)in_stack_ffffffec);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(this + 0x234));
  }
  return;
}


// public: virtual void __thiscall RakNet::RakPeer::AddToBanList(char const *,unsigned int)

void __thiscall RakNet::RakPeer::AddToBanList(RakPeer *this,char *param_1,uint param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  char *pcVar9;
  byte *pbVar10;
  uint uVar11;
  void *pvVar12;
  bool bVar13;
  __uint64 _Var14;
  undefined8 uVar15;
  
  _Var14 = GetTimeUS_Windows();
  uVar15 = __aulldiv((uint)_Var14,(uint)(_Var14 >> 0x20),1000,0);
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    pcVar9 = param_1;
    do {
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    if ((uint)((int)pcVar9 - (int)(param_1 + 1)) < 0x10) {
      lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x2a8);
      uVar11 = 0;
      EnterCriticalSection(lpCriticalSection);
      if (*(int *)(this + 0x2c4) != 0) {
        puVar5 = *(undefined4 **)(this + 0x2c0);
        do {
          pbVar10 = *(byte **)*puVar5;
          pbVar3 = (byte *)param_1;
          do {
            bVar2 = *pbVar3;
            bVar13 = bVar2 < *pbVar10;
            if (bVar2 != *pbVar10) {
LAB_005a22b6:
              uVar4 = -(uint)bVar13 | 1;
              goto LAB_005a22bb;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar3[1];
            bVar13 = bVar2 < pbVar10[1];
            if (bVar2 != pbVar10[1]) goto LAB_005a22b6;
            pbVar3 = pbVar3 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar2 != 0);
          uVar4 = 0;
LAB_005a22bb:
          if (uVar4 == 0) {
            iVar6 = *(int *)(*(int *)(this + 0x2c0) + uVar11 * 4);
            if (param_2 == 0) {
              *(undefined4 *)(iVar6 + 4) = 0;
              LeaveCriticalSection(lpCriticalSection);
              return;
            }
            *(uint *)(iVar6 + 4) = param_2 + (int)uVar15;
            LeaveCriticalSection(lpCriticalSection);
            return;
          }
          uVar11 = uVar11 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar11 < *(uint *)(this + 0x2c4));
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2a8));
      puVar5 = operator_new(8);
      pcVar9 = malloc(0x10);
      *puVar5 = pcVar9;
      if (param_2 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = (int)uVar15 + param_2;
      }
      puVar5[1] = iVar6;
      do {
        cVar1 = *param_1;
        param_1 = param_1 + 1;
        *pcVar9 = cVar1;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x2a8));
      iVar8 = *(int *)(this + 0x2c4);
      iVar6 = *(int *)(this + 0x2c8);
      if (iVar8 == iVar6) {
        uVar11 = 0x10;
        if (iVar6 != 0) {
          uVar11 = iVar6 * 2;
        }
        *(uint *)(this + 0x2c8) = uVar11;
        if (uVar11 == 0) {
          pvVar12 = (void *)0x0;
        }
        else {
          pvVar12 = operator_new__(-(uint)((int)((ulonglong)uVar11 * 4 >> 0x20) != 0) |
                                   (uint)((ulonglong)uVar11 * 4));
        }
        pvVar7 = *(void **)(this + 0x2c0);
        if (pvVar7 != (void *)0x0) {
          uVar11 = 0;
          if (*(int *)(this + 0x2c4) != 0) {
            do {
              *(undefined4 *)((int)pvVar12 + uVar11 * 4) =
                   *(undefined4 *)(*(int *)(this + 0x2c0) + uVar11 * 4);
              uVar11 = uVar11 + 1;
            } while (uVar11 < *(uint *)(this + 0x2c4));
            pvVar7 = *(void **)(this + 0x2c0);
          }
          operator_delete__(pvVar7);
        }
        iVar8 = *(int *)(this + 0x2c4);
        *(void **)(this + 0x2c0) = pvVar12;
      }
      else {
        pvVar12 = *(void **)(this + 0x2c0);
      }
      *(undefined4 **)((int)pvVar12 + iVar8 * 4) = puVar5;
      *(int *)(this + 0x2c4) = *(int *)(this + 0x2c4) + 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2a8));
    }
  }
  return;
}


// public: virtual void __thiscall RakNet::RakPeer::RemoveFromBanList(char const *)

void __thiscall RakNet::RakPeer::RemoveFromBanList(RakPeer *this,char *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  char *pcVar8;
  undefined4 *puVar9;
  uint uVar10;
  bool bVar11;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    pcVar8 = param_1;
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    if ((uint)((int)pcVar8 - (int)(param_1 + 1)) < 0x10) {
      uVar10 = 0;
      puVar9 = (undefined4 *)0x0;
      EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x2a8));
      if (*(int *)(this + 0x2c4) != 0) {
        puVar9 = *(undefined4 **)(this + 0x2c0);
        do {
          pbVar7 = *(byte **)*puVar9;
          pbVar5 = (byte *)param_1;
          do {
            bVar3 = *pbVar5;
            bVar11 = bVar3 < *pbVar7;
            if (bVar3 != *pbVar7) {
LAB_005a24a7:
              uVar6 = -(uint)bVar11 | 1;
              goto LAB_005a24ac;
            }
            if (bVar3 == 0) break;
            bVar3 = pbVar5[1];
            bVar11 = bVar3 < pbVar7[1];
            if (bVar3 != pbVar7[1]) goto LAB_005a24a7;
            pbVar5 = pbVar5 + 2;
            pbVar7 = pbVar7 + 2;
          } while (bVar3 != 0);
          uVar6 = 0;
LAB_005a24ac:
          if (uVar6 == 0) {
            iVar4 = *(int *)(this + 0x2c0);
            puVar9 = *(undefined4 **)(iVar4 + uVar10 * 4);
            *(undefined4 *)(iVar4 + uVar10 * 4) =
                 *(undefined4 *)(iVar4 + -4 + *(int *)(this + 0x2c4) * 4);
            uVar10 = *(uint *)(this + 0x2c4);
            uVar6 = *(int *)(this + 0x2c4) - 1;
            if (uVar6 < uVar10) {
              if (uVar6 < uVar10 - 1) {
                do {
                  puVar1 = (undefined4 *)(*(int *)(this + 0x2c0) + uVar6 * 4);
                  uVar6 = uVar6 + 1;
                  *puVar1 = puVar1[1];
                  uVar10 = *(uint *)(this + 0x2c4);
                } while (uVar6 < uVar10 - 1);
              }
              *(uint *)(this + 0x2c4) = uVar10 - 1;
            }
            goto LAB_005a2515;
          }
          uVar10 = uVar10 + 1;
          puVar9 = puVar9 + 1;
        } while (uVar10 < *(uint *)(this + 0x2c4));
        puVar9 = (undefined4 *)0x0;
      }
LAB_005a2515:
      LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2a8));
      if (puVar9 != (undefined4 *)0x0) {
        free((void *)*puVar9);
        operator_delete(puVar9,(nothrow_t *)0x8);
      }
    }
  }
  return;
}


// public: virtual void __thiscall RakNet::RakPeer::ClearBanList(void)

void __thiscall RakNet::RakPeer::ClearBanList(RakPeer *this)

{
  uint uVar1;
  
  uVar1 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x2a8));
  if (*(int *)(this + 0x2c4) != 0) {
    do {
      free((void *)**(undefined4 **)(*(int *)(this + 0x2c0) + uVar1 * 4));
      operator_delete(*(void **)(*(int *)(this + 0x2c0) + uVar1 * 4),(nothrow_t *)0x8);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(this + 0x2c4));
  }
  if (*(int *)(this + 0x2c8) != 0) {
    operator_delete__(*(void **)(this + 0x2c0));
    *(undefined4 *)(this + 0x2c8) = 0;
    *(undefined4 *)(this + 0x2c0) = 0;
    *(undefined4 *)(this + 0x2c4) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2a8));
  return;
}


// public: virtual void __thiscall RakNet::RakPeer::SetLimitIPConnectionFrequency(bool)

void __thiscall RakNet::RakPeer::SetLimitIPConnectionFrequency(RakPeer *this,bool param_1)

{
  this[0x56c] = (RakPeer)param_1;
  return;
}


// public: virtual bool __thiscall RakNet::RakPeer::IsBanned(char const *)

bool __thiscall RakNet::RakPeer::IsBanned(RakPeer *this,char *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BanStruct **ppBVar1;
  BanStruct *pBVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  __uint64 _Var8;
  undefined8 uVar9;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    pcVar6 = param_1;
    do {
      cVar4 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar4 != '\0');
    if (((uint)((int)pcVar6 - (int)(param_1 + 1)) < 0x10) &&
       (uVar7 = 0, *(int *)(this + 0x2c4) != 0)) {
      _Var8 = GetTimeUS_Windows();
      uVar9 = __aulldiv((uint)_Var8,(uint)(_Var8 >> 0x20),1000,0);
      lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x2a8);
      EnterCriticalSection(lpCriticalSection);
      uVar5 = *(uint *)(this + 0x2c4);
      if (uVar5 != 0) {
        do {
          ppBVar1 = ((List<> *)(this + 0x2c0))->listArray;
          pBVar2 = ppBVar1[uVar7];
          if ((*(uint *)(pBVar2 + 4) == 0) || ((uint)uVar9 <= *(uint *)(pBVar2 + 4))) {
            pcVar6 = *(char **)pBVar2;
            iVar3 = 0;
            cVar4 = *param_1;
            if (*pcVar6 == cVar4) {
              do {
                if (cVar4 == '\0') goto LAB_005a26e3;
                cVar4 = param_1[iVar3 + 1];
                iVar3 = iVar3 + 1;
              } while (pcVar6[iVar3] == cVar4);
            }
            if (((pcVar6[iVar3] != '\0') && (param_1[iVar3] != '\0')) && (pcVar6[iVar3] == '*')) {
LAB_005a26e3:
              LeaveCriticalSection(lpCriticalSection);
              return true;
            }
            uVar7 = uVar7 + 1;
          }
          else {
            ppBVar1[uVar7] = ppBVar1[uVar5 - 1];
            DataStructures::List<>::RemoveAtIndex
                      ((List<> *)(this + 0x2c0),*(int *)(this + 0x2c4) - 1);
            free(*(void **)pBVar2);
            operator_delete(pBVar2,(nothrow_t *)0x8);
          }
          uVar5 = *(uint *)(this + 0x2c4);
        } while (uVar7 < uVar5);
      }
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return false;
}


// public: virtual void __thiscall RakNet::RakPeer::Ping(struct RakNet::SystemAddress)

void __thiscall RakNet::RakPeer::Ping(RakPeer *this,SystemAddress param_1)

{
  PingInternal(this,param_1,false,UNRELIABLE);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: virtual bool __thiscall RakNet::RakPeer::Ping(char const *,unsigned short,bool,unsigned
// int)

bool __thiscall
RakNet::RakPeer::Ping(RakPeer *this,char *param_1,ushort param_2,bool param_3,uint param_4)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  u_short uVar4;
  uint uVar5;
  uchar *puVar6;
  __uint64 *p_Var7;
  bool extraout_CL;
  char extraout_CL_00;
  uint uVar8;
  __uint64 _Var9;
  SystemAddress local_174;
  undefined1 local_160 [8];
  undefined8 local_158;
  RakPeer *local_150;
  uchar local_149;
  RNS2_SendParameters bsp;
  BitStream bitStream;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cd7eb;
  local_10 = ExceptionList;
  uVar5 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_150 = this;
  if (param_1 != (char *)0x0) {
    memset(&bitStream,0,0x114);
    bitStream.data = bitStream.stackData;
    bitStream.numberOfBitsUsed = 0;
    bitStream.readOffset = 0;
    bitStream.numberOfBitsAllocated = 0x800;
    bitStream.copyData = true;
    local_8 = 0;
    local_149 = '\x02';
    if (!param_3) {
      local_149 = '\x01';
    }
    BitStream::WriteBits(&bitStream,&local_149,8,extraout_CL);
    _Var9 = GetTimeUS_Windows();
    local_158 = __aulldiv((uint)_Var9,(uint)(_Var9 >> 0x20),1000,0);
    BitStream::Write<>(&bitStream,&local_158);
    uVar8 = bitStream.numberOfBitsUsed - 1 & 7;
    bitStream.numberOfBitsUsed = bitStream.numberOfBitsUsed + (7 - uVar8);
    if ((bitStream.numberOfBitsUsed & 7) == 0) {
      BitStream::AddBitsAndReallocate(&bitStream,0x80);
      puVar6 = bitStream.data + (bitStream.numberOfBitsUsed + 7 >> 3);
      puVar6[0] = '\0';
      puVar6[1] = 0xff;
      puVar6[2] = 0xff;
      puVar6[3] = '\0';
      puVar6[4] = 0xfe;
      puVar6[5] = 0xfe;
      puVar6[6] = 0xfe;
      puVar6[7] = 0xfe;
      puVar6[8] = 0xfd;
      puVar6[9] = 0xfd;
      puVar6[10] = 0xfd;
      puVar6[0xb] = 0xfd;
      puVar6[0xc] = '\x12';
      puVar6[0xd] = '4';
      puVar6[0xe] = 'V';
      puVar6[0xf] = 'x';
      bitStream.numberOfBitsUsed = bitStream.numberOfBitsUsed + 0x80;
    }
    else {
      BitStream::WriteBits(&bitStream,"",0x80,SUB41(uVar8,0));
    }
    p_Var7 = (__uint64 *)(**(code **)(*(int *)this + 200))(local_160);
    BitStream::Write<>(&bitStream,p_Var7);
    uVar8 = GetRakNetSocketFromUserConnectionSocketIndex(this,param_4);
    local_158 = CONCAT44(uVar8,(undefined4)local_158);
    bsp.systemAddress.debugPort = 0;
    bsp.systemAddress.systemIndex = 0xffff;
    bsp.systemAddress._2_2_ = 0;
    bsp.systemAddress._4_2_ = 0;
    bsp.systemAddress._6_2_ = 0;
    bsp.systemAddress._8_4_ = 0;
    bsp.systemAddress._12_4_ = 0;
    bsp.systemAddress.address = (<>)0x2;
    bsp.systemAddress._1_1_ = 0;
    bsp.data = (char *)bitStream.data;
    bsp.ttl = 0;
    bsp.length = bitStream.numberOfBitsUsed + 7 >> 3;
    bVar2 = SystemAddress::SetBinaryAddress(&bsp.systemAddress,param_1,extraout_CL_00);
    if (bVar2) {
      bsp.systemAddress._2_2_ = htons(param_2);
      uVar4 = ntohs(bsp.systemAddress._2_2_);
    }
    else {
      bsp.systemAddress._16_4_ = (uint)DAT_006578f2 << 0x10;
      bsp.systemAddress._0_2_ = SUB42(_DAT_006578e0,0);
      bsp.systemAddress._2_2_ = SUB42((uint)_DAT_006578e0 >> 0x10,0);
      bsp.systemAddress._4_2_ = SUB42(DAT_006578e4,0);
      bsp.systemAddress._6_2_ = SUB42((uint)DAT_006578e4 >> 0x10,0);
      bsp.systemAddress._8_4_ = uRam006578e8;
      bsp.systemAddress._12_4_ = uRam006578ec;
      uVar4 = DAT_006578f0;
    }
    bsp.systemAddress.debugPort = uVar4;
    if (((bsp.systemAddress._2_2_ == DAT_006578f6) && (bsp.systemAddress._0_2_ == 2)) &&
       (CONCAT22(bsp.systemAddress._6_2_,bsp.systemAddress._4_2_) == DAT_006578f8)) {
      local_149 = '\0';
    }
    else {
      iVar1 = *(int *)(*(int *)(this + 0x424) + local_158._4_4_ * 4);
      local_174._0_4_ = *(undefined4 *)(iVar1 + 0xc);
      local_174._4_4_ = *(undefined4 *)(iVar1 + 0x10);
      local_174._8_4_ = *(undefined4 *)(iVar1 + 0x14);
      local_174._12_4_ = *(undefined4 *)(iVar1 + 0x18);
      local_174._16_4_ = *(undefined4 *)(iVar1 + 0x1c);
      SystemAddress::FixForIPVersion(&bsp.systemAddress,&local_174);
      uVar8 = 0;
      if (*(int *)(this + 0x2dc) != 0) {
        do {
          (**(code **)(**(int **)(*(int *)(this + 0x2d8) + uVar8 * 4) + 0x2c))
                    (bitStream.data,bitStream.numberOfBitsUsed,
                     CONCAT22(bsp.systemAddress._2_2_,bsp.systemAddress._0_2_),
                     CONCAT22(bsp.systemAddress._6_2_,bsp.systemAddress._4_2_),
                     bsp.systemAddress._8_4_,bsp.systemAddress._12_4_,bsp.systemAddress._16_4_);
          uVar8 = uVar8 + 1;
          this = local_150;
        } while (uVar8 < *(uint *)(local_150 + 0x2dc));
      }
      (**(code **)(**(int **)(*(int *)(this + 0x424) + local_158._4_4_ * 4) + 4))();
      local_149 = '\x01';
    }
    if ((bitStream.copyData != false) && (0x800 < bitStream.numberOfBitsAllocated)) {
      free(bitStream.data);
    }
  }
  ExceptionList = local_10;
  uVar3 = __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
  return (bool)uVar3;
}


// public: virtual int __thiscall RakNet::RakPeer::GetAveragePing(struct RakNet::AddressOrGUID)

int __thiscall RakNet::RakPeer::GetAveragePing(RakPeer *this,AddressOrGUID param_1)

{
  SystemAddress SVar1;
  RakNetGUID RVar2;
  RemoteSystemStruct *pRVar3;
  int iVar4;
  int iVar5;
  AddressOrGUID local_2c;
  
  AddressOrGUID::AddressOrGUID(&local_2c,&param_1);
  if (((int)local_2c.rakNetGuid.g == DAT_00657908) && (local_2c.rakNetGuid.g._4_4_ == DAT_0065790c))
  {
    SVar1._4_4_ = local_2c.systemAddress._4_4_;
    SVar1.address = local_2c.systemAddress.address;
    SVar1._1_3_ = local_2c.systemAddress._1_3_;
    SVar1._8_4_ = local_2c.systemAddress._8_4_;
    SVar1._12_4_ = local_2c.systemAddress._12_4_;
    SVar1.debugPort = local_2c.systemAddress.debugPort;
    SVar1.systemIndex = local_2c.systemAddress.systemIndex;
    pRVar3 = GetRemoteSystemFromSystemAddress(this,SVar1,false,false);
  }
  else {
    RVar2.g._4_4_ = local_2c.rakNetGuid.g._4_4_;
    RVar2.g._0_4_ = (int)local_2c.rakNetGuid.g;
    RVar2.systemIndex = local_2c.rakNetGuid.systemIndex;
    RVar2._10_2_ = local_2c.rakNetGuid._10_2_;
    RVar2._12_4_ = local_2c.rakNetGuid._12_4_;
    pRVar3 = GetRemoteSystemFromGUID(this,RVar2,false);
  }
  if (pRVar3 != (RemoteSystemStruct *)0x0) {
    iVar5 = 0;
    pRVar3 = pRVar3 + 0x1178;
    iVar4 = 0;
    do {
      if (*(ushort *)pRVar3 == 0xffff) break;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + (uint)*(ushort *)pRVar3;
      pRVar3 = pRVar3 + 0x10;
    } while (iVar4 < 5);
    if (0 < iVar4) {
      return iVar5 / iVar4;
    }
  }
  return -1;
}


// public: virtual int __thiscall RakNet::RakPeer::GetLastPing(struct RakNet::AddressOrGUID)const 

int __thiscall RakNet::RakPeer::GetLastPing(RakPeer *this,AddressOrGUID param_1)

{
  SystemAddress SVar1;
  RakNetGUID RVar2;
  RemoteSystemStruct *pRVar3;
  AddressOrGUID local_2c;
  
  AddressOrGUID::AddressOrGUID(&local_2c,&param_1);
  if (((int)local_2c.rakNetGuid.g == DAT_00657908) && (local_2c.rakNetGuid.g._4_4_ == DAT_0065790c))
  {
    SVar1._4_4_ = local_2c.systemAddress._4_4_;
    SVar1.address = local_2c.systemAddress.address;
    SVar1._1_3_ = local_2c.systemAddress._1_3_;
    SVar1._8_4_ = local_2c.systemAddress._8_4_;
    SVar1._12_4_ = local_2c.systemAddress._12_4_;
    SVar1.debugPort = local_2c.systemAddress.debugPort;
    SVar1.systemIndex = local_2c.systemAddress.systemIndex;
    pRVar3 = GetRemoteSystemFromSystemAddress(this,SVar1,false,false);
  }
  else {
    RVar2.g._4_4_ = local_2c.rakNetGuid.g._4_4_;
    RVar2.g._0_4_ = (int)local_2c.rakNetGuid.g;
    RVar2.systemIndex = local_2c.rakNetGuid.systemIndex;
    RVar2._10_2_ = local_2c.rakNetGuid._10_2_;
    RVar2._12_4_ = local_2c.rakNetGuid._12_4_;
    pRVar3 = GetRemoteSystemFromGUID(this,RVar2,false);
  }
  if (pRVar3 == (RemoteSystemStruct *)0x0) {
    return -1;
  }
  if (*(int *)(pRVar3 + 0x11c8) == 0 && *(int *)(pRVar3 + 0x11cc) == 0) {
    return (uint)*(ushort *)(pRVar3 + 0x11b8);
  }
  return (uint)*(ushort *)(pRVar3 + *(int *)(pRVar3 + 0x11c8) * 0x10 + 0x1168);
}


// public: virtual int __thiscall RakNet::RakPeer::GetLowestPing(struct RakNet::AddressOrGUID)const 

int __thiscall RakNet::RakPeer::GetLowestPing(RakPeer *this,AddressOrGUID param_1)

{
  SystemAddress SVar1;
  RakNetGUID RVar2;
  RemoteSystemStruct *pRVar3;
  AddressOrGUID local_2c;
  
  AddressOrGUID::AddressOrGUID(&local_2c,&param_1);
  if (((int)local_2c.rakNetGuid.g == DAT_00657908) && (local_2c.rakNetGuid.g._4_4_ == DAT_0065790c))
  {
    SVar1._4_4_ = local_2c.systemAddress._4_4_;
    SVar1.address = local_2c.systemAddress.address;
    SVar1._1_3_ = local_2c.systemAddress._1_3_;
    SVar1._8_4_ = local_2c.systemAddress._8_4_;
    SVar1._12_4_ = local_2c.systemAddress._12_4_;
    SVar1.debugPort = local_2c.systemAddress.debugPort;
    SVar1.systemIndex = local_2c.systemAddress.systemIndex;
    pRVar3 = GetRemoteSystemFromSystemAddress(this,SVar1,false,false);
  }
  else {
    RVar2.g._4_4_ = local_2c.rakNetGuid.g._4_4_;
    RVar2.g._0_4_ = (int)local_2c.rakNetGuid.g;
    RVar2.systemIndex = local_2c.rakNetGuid.systemIndex;
    RVar2._10_2_ = local_2c.rakNetGuid._10_2_;
    RVar2._12_4_ = local_2c.rakNetGuid._12_4_;
    pRVar3 = GetRemoteSystemFromGUID(this,RVar2,false);
  }
  if (pRVar3 == (RemoteSystemStruct *)0x0) {
    return -1;
  }
  return (uint)*(ushort *)(pRVar3 + 0x11d0);
}


// public: virtual void __thiscall RakNet::RakPeer::SetOccasionalPing(bool)

void __thiscall RakNet::RakPeer::SetOccasionalPing(RakPeer *this,bool param_1)

{
  this[10] = (RakPeer)param_1;
  return;
}


// public: virtual unsigned __int64 __thiscall RakNet::RakPeer::GetClockDifferential(struct
// RakNet::AddressOrGUID)

__uint64 __thiscall RakNet::RakPeer::GetClockDifferential(RakPeer *this,AddressOrGUID param_1)

{
  SystemAddress SVar1;
  RakNetGUID RVar2;
  RemoteSystemStruct *pRVar3;
  RakPeer *extraout_ECX;
  RakPeer *extraout_ECX_00;
  RakPeer *this_00;
  __uint64 _Var4;
  AddressOrGUID local_2c;
  
  AddressOrGUID::AddressOrGUID(&local_2c,&param_1);
  if (((int)local_2c.rakNetGuid.g == DAT_00657908) && (local_2c.rakNetGuid.g._4_4_ == DAT_0065790c))
  {
    SVar1._4_4_ = local_2c.systemAddress._4_4_;
    SVar1.address = local_2c.systemAddress.address;
    SVar1._1_3_ = local_2c.systemAddress._1_3_;
    SVar1._8_4_ = local_2c.systemAddress._8_4_;
    SVar1._12_4_ = local_2c.systemAddress._12_4_;
    SVar1.debugPort = local_2c.systemAddress.debugPort;
    SVar1.systemIndex = local_2c.systemAddress.systemIndex;
    pRVar3 = GetRemoteSystemFromSystemAddress(this,SVar1,false,false);
    this_00 = extraout_ECX;
  }
  else {
    RVar2.g._4_4_ = local_2c.rakNetGuid.g._4_4_;
    RVar2.g._0_4_ = (int)local_2c.rakNetGuid.g;
    RVar2.systemIndex = local_2c.rakNetGuid.systemIndex;
    RVar2._10_2_ = local_2c.rakNetGuid._10_2_;
    RVar2._12_4_ = local_2c.rakNetGuid._12_4_;
    pRVar3 = GetRemoteSystemFromGUID(this,RVar2,false);
    this_00 = extraout_ECX_00;
  }
  if (pRVar3 == (RemoteSystemStruct *)0x0) {
    return 0;
  }
  _Var4 = GetClockDifferentialInt(this_00,pRVar3);
  return _Var4;
}


// protected: unsigned __int64 __thiscall RakNet::RakPeer::GetClockDifferentialInt(struct
// RakNet::RakPeer::RemoteSystemStruct *)const 

__uint64 __thiscall
RakNet::RakPeer::GetClockDifferentialInt(RakPeer *this,RemoteSystemStruct *param_1)

{
  ushort uVar1;
  RemoteSystemStruct *pRVar2;
  ushort uVar3;
  int iVar4;
  __uint64 clockDifferential;
  undefined4 local_8;
  
  iVar4 = 0;
  uVar3 = 0xffff;
  pRVar2 = param_1 + 0x1180;
  local_8 = 0;
  param_1 = (RemoteSystemStruct *)0x0;
  do {
    uVar1 = *(ushort *)(pRVar2 + -8);
    if (uVar1 == 0xffff) {
      return CONCAT44(local_8,param_1);
    }
    if (uVar1 < uVar3) {
      param_1 = *(RemoteSystemStruct **)pRVar2;
      local_8 = *(undefined4 *)(pRVar2 + 4);
      uVar3 = uVar1;
    }
    iVar4 = iVar4 + 1;
    pRVar2 = pRVar2 + 0x10;
  } while (iVar4 < 5);
  return CONCAT44(local_8,param_1);
}


// public: virtual void __thiscall RakNet::RakPeer::SetOfflinePingResponse(char const *,unsigned
// int)

void __thiscall RakNet::RakPeer::SetOfflinePingResponse(RakPeer *this,char *param_1,uint param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x268));
  ((BitStream *)(this + 0x14))->numberOfBitsUsed = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    BitStream::Write((BitStream *)(this + 0x14),param_1,param_2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x268));
  return;
}


// public: virtual void __thiscall RakNet::RakPeer::GetOfflinePingResponse(char * *,unsigned int *)

void __thiscall RakNet::RakPeer::GetOfflinePingResponse(RakPeer *this,char **param_1,uint *param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x268));
  *param_1 = *(char **)(this + 0x20);
  *param_2 = *(int *)(this + 0x14) + 7U >> 3;
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x268));
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: virtual struct RakNet::SystemAddress __thiscall RakNet::RakPeer::GetInternalID(struct
// RakNet::SystemAddress,int)const 

SystemAddress * __thiscall
RakNet::RakPeer::GetInternalID
          (RakPeer *this,SystemAddress *__return_storage_ptr__,SystemAddress param_1,int param_2)

{
  RemoteSystemStruct *pRVar1;
  RakPeer *pRVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 uVar7;
  RemoteSystemStruct *pRVar8;
  
  if (((param_1._2_2_ == DAT_006578f6) && (param_1._0_2_ == 2)) && (param_1._4_4_ == DAT_006578f8))
  {
    pRVar2 = this + param_2 * 0x14 + 0x494;
    uVar3 = *(undefined4 *)(pRVar2 + 4);
    uVar4 = *(undefined4 *)(pRVar2 + 8);
    uVar5 = *(undefined4 *)(pRVar2 + 0xc);
    *(undefined4 *)__return_storage_ptr__ = *(undefined4 *)pRVar2;
    *(undefined4 *)&__return_storage_ptr__->field_0x4 = uVar3;
    *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar4;
    *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar5;
    uVar3 = *(undefined4 *)(this + param_2 * 0x14 + 0x4a4);
    __return_storage_ptr__->debugPort = (short)uVar3;
    __return_storage_ptr__->systemIndex = (short)((uint)uVar3 >> 0x10);
    return __return_storage_ptr__;
  }
  pRVar8 = GetRemoteSystemFromSystemAddress(this,param_1,false,true);
  uVar4 = uRam00657900;
  uVar3 = uRam006578fc;
  iVar6 = DAT_006578f8;
  if (pRVar8 == (RemoteSystemStruct *)0x0) {
    *(undefined4 *)__return_storage_ptr__ = _DAT_006578f4;
    *(int *)&__return_storage_ptr__->field_0x4 = iVar6;
    *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar3;
    *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar4;
    uVar7 = DAT_00657906;
    __return_storage_ptr__->debugPort = DAT_00657904;
    __return_storage_ptr__->systemIndex = uVar7;
    return __return_storage_ptr__;
  }
  pRVar1 = pRVar8 + param_2 * 0x14 + 0x2c;
  uVar3 = *(undefined4 *)(pRVar1 + 4);
  uVar4 = *(undefined4 *)(pRVar1 + 8);
  uVar5 = *(undefined4 *)(pRVar1 + 0xc);
  *(undefined4 *)__return_storage_ptr__ = *(undefined4 *)pRVar1;
  *(undefined4 *)&__return_storage_ptr__->field_0x4 = uVar3;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar4;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar5;
  uVar3 = *(undefined4 *)(pRVar8 + param_2 * 0x14 + 0x3c);
  __return_storage_ptr__->debugPort = (short)uVar3;
  __return_storage_ptr__->systemIndex = (short)((uint)uVar3 >> 0x10);
  return __return_storage_ptr__;
}


// public: virtual void __thiscall RakNet::RakPeer::SetInternalID(struct RakNet::SystemAddress,int)

void __thiscall RakNet::RakPeer::SetInternalID(RakPeer *this,SystemAddress param_1,int param_2)

{
  *(ushort *)(this + param_2 * 0x14 + 0x4a4) = param_1.debugPort;
  *(undefined4 *)(this + param_2 * 0x14 + 0x494) = param_1._0_4_;
  *(undefined4 *)(this + param_2 * 0x14 + 0x498) = param_1._4_4_;
  *(undefined4 *)(this + param_2 * 0x14 + 0x49c) = param_1._8_4_;
  *(undefined4 *)(this + param_2 * 0x14 + 0x4a0) = param_1._12_4_;
  *(ushort *)(this + param_2 * 0x14 + 0x4a6) = param_1.systemIndex;
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: virtual struct RakNet::SystemAddress __thiscall RakNet::RakPeer::GetExternalID(struct
// RakNet::SystemAddress)const 

SystemAddress * __thiscall
RakNet::RakPeer::GetExternalID
          (RakPeer *this,SystemAddress *__return_storage_ptr__,SystemAddress param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  undefined2 uVar10;
  short sVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  SystemAddress inactiveExternalId;
  
  inactiveExternalId.systemIndex = DAT_00657906;
  inactiveExternalId.debugPort = DAT_00657904;
  if (((param_1._2_2_ == DAT_006578f6) && (param_1._0_2_ == 2)) && (param_1._4_4_ == DAT_006578f8))
  {
    uVar2 = *(undefined4 *)(this + 0x46c);
    uVar4 = *(undefined4 *)(this + 0x470);
    uVar5 = *(undefined4 *)(this + 0x474);
    *(undefined4 *)__return_storage_ptr__ = *(undefined4 *)(this + 0x468);
    *(undefined4 *)&__return_storage_ptr__->field_0x4 = uVar2;
    *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar4;
    *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar5;
    uVar2 = *(undefined4 *)(this + 0x478);
    __return_storage_ptr__->debugPort = (short)uVar2;
    __return_storage_ptr__->systemIndex = (short)((uint)uVar2 >> 0x10);
    return __return_storage_ptr__;
  }
  uVar9 = 0;
  uVar16 = uRam00657900;
  uVar17 = uRam00657902;
  uVar10 = _DAT_006578f4;
  sVar11 = DAT_006578f6;
  uVar12 = (undefined2)DAT_006578f8;
  uVar13 = DAT_006578f8._2_2_;
  uVar14 = uRam006578fc;
  uVar15 = uRam006578fe;
  if (*(uint *)(this + 0xc) != 0) {
    piVar8 = (int *)(*(int *)(this + 0x22c) + 8);
    do {
      if (((*(short *)((int)piVar8 + -2) == param_1._2_2_) && ((short)piVar8[-1] == 2)) &&
         (*piVar8 == param_1._4_4_)) {
        if ((char)piVar8[-2] != '\0') {
          piVar1 = piVar8 + 4;
          iVar3 = piVar1[1];
          iVar6 = piVar1[2];
          iVar7 = piVar1[3];
          *(int *)__return_storage_ptr__ = *piVar1;
          *(int *)&__return_storage_ptr__->field_0x4 = iVar3;
          *(int *)&__return_storage_ptr__->field_0x8 = iVar6;
          *(int *)&__return_storage_ptr__->field_0xc = iVar7;
          iVar3 = piVar8[8];
          __return_storage_ptr__->debugPort = (short)iVar3;
          __return_storage_ptr__->systemIndex = (short)((uint)iVar3 >> 0x10);
          return __return_storage_ptr__;
        }
        if (((*(short *)((int)piVar8 + 0x12) != DAT_006578f6) || ((short)piVar8[4] != 2)) ||
           (piVar8[5] != DAT_006578f8)) {
          uVar10 = (undefined2)piVar8[4];
          sVar11 = *(short *)((int)piVar8 + 0x12);
          uVar12 = (undefined2)piVar8[5];
          uVar13 = *(undefined2 *)((int)piVar8 + 0x16);
          uVar14 = (undefined2)piVar8[6];
          uVar15 = *(undefined2 *)((int)piVar8 + 0x1a);
          uVar16 = (undefined2)piVar8[7];
          uVar17 = *(undefined2 *)((int)piVar8 + 0x1e);
          inactiveExternalId._16_4_ = piVar8[8];
        }
      }
      uVar9 = uVar9 + 1;
      piVar8 = piVar8 + 0x484;
    } while (uVar9 < *(uint *)(this + 0xc));
  }
  *(undefined2 *)__return_storage_ptr__ = uVar10;
  *(short *)&__return_storage_ptr__->field_0x2 = sVar11;
  *(undefined2 *)&__return_storage_ptr__->field_0x4 = uVar12;
  *(undefined2 *)&__return_storage_ptr__->field_0x6 = uVar13;
  *(undefined2 *)&__return_storage_ptr__->field_0x8 = uVar14;
  *(undefined2 *)&__return_storage_ptr__->field_0xa = uVar15;
  *(undefined2 *)&__return_storage_ptr__->field_0xc = uVar16;
  *(undefined2 *)&__return_storage_ptr__->field_0xe = uVar17;
  __return_storage_ptr__->debugPort = inactiveExternalId.debugPort;
  __return_storage_ptr__->systemIndex = inactiveExternalId.systemIndex;
  return __return_storage_ptr__;
}


// public: virtual struct RakNet::RakNetGUID const __thiscall RakNet::RakPeer::GetMyGUID(void)const 

RakNetGUID * __thiscall RakNet::RakPeer::GetMyGUID(RakPeer *this,RakNetGUID *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(this + 0x454);
  uVar2 = *(undefined4 *)(this + 0x458);
  uVar3 = *(undefined4 *)(this + 0x45c);
  *(undefined4 *)&__return_storage_ptr__->g = *(undefined4 *)(this + 0x450);
  *(undefined4 *)((int)&__return_storage_ptr__->g + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->systemIndex = uVar2;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar3;
  return __return_storage_ptr__;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: virtual struct RakNet::SystemAddress __thiscall RakNet::RakPeer::GetMyBoundAddress(int)

SystemAddress * __thiscall
RakNet::RakPeer::GetMyBoundAddress(RakPeer *this,SystemAddress *__return_storage_ptr__,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  SystemAddress *pSVar6;
  undefined8 local_20;
  int local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005cd828;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 0;
  local_20 = 0;
  local_8 = 0;
  (**(code **)(*(int *)this + 0x124))(&local_20,local_14);
  uVar4 = uRam00657900;
  uVar3 = uRam006578fc;
  uVar2 = DAT_006578f8;
  if (local_20._4_4_ == 0) {
    *(undefined4 *)__return_storage_ptr__ = _DAT_006578f4;
    *(undefined4 *)&__return_storage_ptr__->field_0x4 = uVar2;
    *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar3;
    *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar4;
    uVar5 = DAT_00657906;
    __return_storage_ptr__->debugPort = DAT_00657904;
    __return_storage_ptr__->systemIndex = uVar5;
  }
  else {
    iVar1 = *(int *)((int)(void *)local_20 + param_1 * 4);
    uVar2 = *(undefined4 *)(iVar1 + 0x10);
    uVar3 = *(undefined4 *)(iVar1 + 0x14);
    uVar4 = *(undefined4 *)(iVar1 + 0x18);
    *(undefined4 *)__return_storage_ptr__ = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)&__return_storage_ptr__->field_0x4 = uVar2;
    *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar3;
    *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar4;
    uVar2 = *(undefined4 *)(iVar1 + 0x1c);
    __return_storage_ptr__->debugPort = (short)uVar2;
    __return_storage_ptr__->systemIndex = (short)((uint)uVar2 >> 0x10);
  }
  if (local_18 != 0) {
    operator_delete__((void *)local_20);
  }
  ExceptionList = local_10;
  pSVar6 = (SystemAddress *)__security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return pSVar6;
}


// public: virtual struct RakNet::RakNetGUID const & __thiscall
// RakNet::RakPeer::GetGuidFromSystemAddress(struct RakNet::SystemAddress)const 

RakNetGUID * __thiscall
RakNet::RakPeer::GetGuidFromSystemAddress(RakPeer *this,SystemAddress param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  if (((param_1._2_2_ == DAT_006578f6) && (param_1._0_2_ == 2)) && (param_1._4_4_ == DAT_006578f8))
  {
    return (RakNetGUID *)(this + 0x450);
  }
  if ((param_1.systemIndex != 0xffff) && ((uint)param_1._16_4_ >> 0x10 < *(uint *)(this + 0xc))) {
    iVar3 = ((uint)param_1._16_4_ >> 0x10) * 0x1210;
    iVar1 = *(int *)(this + 0x22c);
    if ((*(short *)(iVar3 + 6 + iVar1) == param_1._2_2_) &&
       ((*(short *)(iVar3 + 4 + iVar1) == 2 && (*(int *)(iVar3 + 8 + iVar1) == param_1._4_4_)))) {
      return (RakNetGUID *)(iVar1 + 0x11f0 + iVar3);
    }
  }
  uVar4 = 0;
  if (*(uint *)(this + 0xc) != 0) {
    piVar2 = (int *)(*(int *)(this + 0x22c) + 8);
    do {
      if (((*(short *)((int)piVar2 + -2) == param_1._2_2_) && ((short)piVar2[-1] == 2)) &&
         (*piVar2 == param_1._4_4_)) {
        *(short *)(uVar4 * 0x1210 + 0x11f8 + *(int *)(this + 0x22c)) = (short)uVar4;
        return (RakNetGUID *)(*(int *)(this + 0x22c) + 0x11f0 + uVar4 * 0x1210);
      }
      uVar4 = uVar4 + 1;
      piVar2 = piVar2 + 0x484;
    } while (uVar4 < *(uint *)(this + 0xc));
  }
  return (RakNetGUID *)&DAT_00657908;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: virtual struct RakNet::SystemAddress __thiscall
// RakNet::RakPeer::GetSystemAddressFromGuid(struct RakNet::RakNetGUID)const 

SystemAddress * __thiscall
RakNet::RakPeer::GetSystemAddressFromGuid
          (RakPeer *this,SystemAddress *__return_storage_ptr__,RakNetGUID param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int in_stack_00000008;
  
  uVar4 = uRam00657900;
  uVar3 = uRam006578fc;
  uVar2 = DAT_006578f8;
  if ((in_stack_00000008 != DAT_00657908) || ((int)param_1.g != DAT_0065790c)) {
    if ((in_stack_00000008 == *(int *)(this + 0x450)) && ((int)param_1.g == *(int *)(this + 0x454)))
    {
      (**(code **)(*(int *)this + 0xbc))
                (__return_storage_ptr__,_DAT_006578f4,DAT_006578f8,uRam006578fc,uRam00657900,
                 _DAT_00657904,0);
      return __return_storage_ptr__;
    }
    if ((param_1.g._4_2_ != 0xffff) && ((uint)param_1.g._4_2_ < *(uint *)(this + 0xc))) {
      iVar6 = *(int *)(this + 0x22c) + (uint)param_1.g._4_2_ * 0x1210;
      if ((*(int *)(iVar6 + 0x11f0) == in_stack_00000008) &&
         (*(int *)(iVar6 + 0x11f4) == (int)param_1.g)) {
        uVar2 = *(undefined4 *)(iVar6 + 8);
        uVar3 = *(undefined4 *)(iVar6 + 0xc);
        uVar4 = *(undefined4 *)(iVar6 + 0x10);
        *(undefined4 *)__return_storage_ptr__ = *(undefined4 *)(iVar6 + 4);
        *(undefined4 *)&__return_storage_ptr__->field_0x4 = uVar2;
        *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar3;
        *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar4;
        uVar2 = *(undefined4 *)(iVar6 + 0x14);
        __return_storage_ptr__->debugPort = (short)uVar2;
        __return_storage_ptr__->systemIndex = (short)((uint)uVar2 >> 0x10);
        return __return_storage_ptr__;
      }
    }
    uVar9 = 0;
    if (*(int *)(this + 0xc) != 0) {
      piVar7 = (int *)(*(int *)(this + 0x22c) + 0x11f0);
      do {
        if ((*piVar7 == in_stack_00000008) && (piVar7[1] == (int)param_1.g)) {
          iVar8 = uVar9 * 0x1210;
          *(short *)(iVar8 + 0x11f8 + *(int *)(this + 0x22c)) = (short)uVar9;
          iVar6 = *(int *)(this + 0x22c);
          puVar1 = (undefined4 *)(iVar6 + 4 + iVar8);
          uVar2 = puVar1[1];
          uVar3 = puVar1[2];
          uVar4 = puVar1[3];
          *(undefined4 *)__return_storage_ptr__ = *puVar1;
          *(undefined4 *)&__return_storage_ptr__->field_0x4 = uVar2;
          *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar3;
          *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar4;
          uVar2 = *(undefined4 *)(iVar6 + 0x14 + iVar8);
          __return_storage_ptr__->debugPort = (short)uVar2;
          __return_storage_ptr__->systemIndex = (short)((uint)uVar2 >> 0x10);
          return __return_storage_ptr__;
        }
        uVar9 = uVar9 + 1;
        piVar7 = piVar7 + 0x484;
      } while (uVar9 < *(uint *)(this + 0xc));
    }
  }
  *(undefined4 *)__return_storage_ptr__ = _DAT_006578f4;
  *(undefined4 *)&__return_storage_ptr__->field_0x4 = uVar2;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar3;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar4;
  uVar5 = DAT_00657906;
  __return_storage_ptr__->debugPort = DAT_00657904;
  __return_storage_ptr__->systemIndex = uVar5;
  return __return_storage_ptr__;
}


// public: virtual bool __thiscall RakNet::RakPeer::GetClientPublicKeyFromSystemAddress(struct
// RakNet::SystemAddress,char *)const 

bool __thiscall
RakNet::RakPeer::GetClientPublicKeyFromSystemAddress
          (RakPeer *this,SystemAddress param_1,char *param_2)

{
  return false;
}


// public: virtual void __thiscall RakNet::RakPeer::SetTimeoutTime(unsigned int,struct
// RakNet::SystemAddress)

void __thiscall RakNet::RakPeer::SetTimeoutTime(RakPeer *this,uint param_1,SystemAddress param_2)

{
  RemoteSystemStruct *pRVar1;
  uint uVar2;
  int iVar3;
  
  if (((param_2._2_2_ == DAT_006578f6) && (param_2._0_2_ == 2)) && (param_2._4_4_ == DAT_006578f8))
  {
    uVar2 = 0;
    *(uint *)(this + 0x44c) = param_1;
    if (*(int *)(this + 0xc) != 0) {
      iVar3 = 0;
      do {
        if (*(char *)(*(int *)(this + 0x22c) + iVar3) != '\0') {
          *(uint *)(*(int *)(this + 0x22c) + 0x9b8 + iVar3) = param_1;
        }
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 0x1210;
      } while (uVar2 < *(uint *)(this + 0xc));
      return;
    }
  }
  else {
    pRVar1 = GetRemoteSystemFromSystemAddress(this,param_2,false,true);
    if (pRVar1 != (RemoteSystemStruct *)0x0) {
      *(uint *)(pRVar1 + 0x9b8) = param_1;
    }
  }
  return;
}


// public: virtual unsigned int __thiscall RakNet::RakPeer::GetTimeoutTime(struct
// RakNet::SystemAddress)

uint __thiscall RakNet::RakPeer::GetTimeoutTime(RakPeer *this,SystemAddress param_1)

{
  return *(uint *)(this + 0x44c);
}


// public: virtual int __thiscall RakNet::RakPeer::GetMTUSize(struct RakNet::SystemAddress)const 

int __thiscall RakNet::RakPeer::GetMTUSize(RakPeer *this,SystemAddress param_1)

{
  RemoteSystemStruct *pRVar1;
  
  if (((param_1._2_2_ != DAT_006578f6) || (param_1._0_2_ != 2)) || (param_1._4_4_ != DAT_006578f8))
  {
    pRVar1 = GetRemoteSystemFromSystemAddress(this,param_1,false,true);
    if (pRVar1 != (RemoteSystemStruct *)0x0) {
      return *(int *)(pRVar1 + 0x1200);
    }
  }
  return *(int *)(this + 0x41c);
}


// public: virtual unsigned int __thiscall RakNet::RakPeer::GetNumberOfAddresses(void)

uint __thiscall RakNet::RakPeer::GetNumberOfAddresses(RakPeer *this)

{
  char cVar1;
  RakPeer *pRVar2;
  uint uVar3;
  
  cVar1 = (**(code **)(*(int *)this + 0x3c))();
  if (cVar1 == '\0') {
    FillIPList(this);
  }
  uVar3 = 0;
  for (pRVar2 = this + 0x498;
      ((*(short *)(pRVar2 + -2) != DAT_006578f6 || (*(short *)(pRVar2 + -4) != 2)) ||
      (*(int *)pRVar2 != DAT_006578f8)); pRVar2 = pRVar2 + 0x14) {
    uVar3 = uVar3 + 1;
  }
  return uVar3;
}


// public: virtual char const * __thiscall RakNet::RakPeer::GetLocalIP(unsigned int)

char * __thiscall RakNet::RakPeer::GetLocalIP(RakPeer *this,uint param_1)

{
  char cVar1;
  char extraout_CL;
  char extraout_CL_00;
  char cVar2;
  
  cVar1 = (**(code **)(*(int *)this + 0x3c))();
  cVar2 = extraout_CL;
  if (cVar1 == '\0') {
    FillIPList(this);
    cVar2 = extraout_CL_00;
  }
  SystemAddress::ToString
            ((SystemAddress *)(this + (param_1 * 5 + 0x125) * 4),false,&DAT_00662920,cVar2);
  return &DAT_00662920;
}


// public: virtual bool __thiscall RakNet::RakPeer::IsLocalIP(char const *)

bool __thiscall RakNet::RakPeer::IsLocalIP(RakPeer *this,char *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    return false;
  }
  pbVar6 = &cp_005e6788;
  pbVar2 = (byte *)param_1;
  do {
    bVar1 = *pbVar2;
    bVar8 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_005a3577:
      uVar3 = -(uint)bVar8 | 1;
      goto LAB_005a357c;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar8 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_005a3577;
    pbVar2 = pbVar2 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_005a357c:
  if (uVar3 != 0) {
    pcVar5 = "localhost";
    pbVar2 = (byte *)param_1;
    do {
      bVar1 = *pbVar2;
      bVar8 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_005a35b0:
        uVar3 = -(uint)bVar8 | 1;
        goto LAB_005a35b5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar8 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_005a35b0;
      pbVar2 = pbVar2 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_005a35b5:
    if (uVar3 != 0) {
      iVar4 = (**(code **)(*(int *)this + 0xe8))();
      iVar7 = 0;
      if (iVar4 < 1) {
        return false;
      }
      do {
        pbVar6 = (byte *)(**(code **)(*(int *)this + 0xec))(iVar7);
        pbVar2 = (byte *)param_1;
        do {
          bVar1 = *pbVar2;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_005a3600:
            uVar3 = -(uint)bVar8 | 1;
            goto LAB_005a3605;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_005a3600;
          pbVar2 = pbVar2 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        uVar3 = 0;
LAB_005a3605:
        if (uVar3 == 0) {
          return true;
        }
        iVar7 = iVar7 + 1;
        if (iVar4 <= iVar7) {
          return false;
        }
      } while( true );
    }
  }
  return true;
}


// public: virtual void __thiscall RakNet::RakPeer::AllowConnectionResponseIPMigration(bool)

void __thiscall RakNet::RakPeer::AllowConnectionResponseIPMigration(RakPeer *this,bool param_1)

{
  this[0x464] = (RakPeer)param_1;
  return;
}


// public: virtual bool __thiscall RakNet::RakPeer::AdvertiseSystem(char const *,unsigned short,char
// const *,int,unsigned int)

bool __thiscall
RakNet::RakPeer::AdvertiseSystem
          (RakPeer *this,char *param_1,ushort param_2,char *param_3,int param_4,uint param_5)

{
  undefined1 uVar1;
  uint uVar2;
  undefined2 in_stack_0000000a;
  uint uVar3;
  uchar local_129;
  BitStream bs;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cd85b;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar1 = 0x14;
  uVar3 = uVar2;
  memset(&bs,0,0x114);
  bs.data = bs.stackData;
  bs.numberOfBitsUsed = 0;
  bs.numberOfBitsAllocated = 0x800;
  bs.readOffset = 0;
  bs.copyData = true;
  local_8 = 0;
  local_129 = '\x1d';
  BitStream::WriteBits(&bs,&local_129,8,(bool)uVar1);
  BitStream::WriteAlignedBytes(&bs,(uchar *)param_3,param_4);
  (**(code **)(*(int *)this + 0x158))
            (param_1,_param_2,bs.data,bs.numberOfBitsUsed + 7 >> 3,param_5,uVar3);
  if ((bs.copyData != false) && (0x800 < bs.numberOfBitsAllocated)) {
    free(bs.data);
  }
  ExceptionList = local_10;
  uVar1 = __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return (bool)uVar1;
}


// public: virtual void __thiscall RakNet::RakPeer::SetSplitMessageProgressInterval(int)

void __thiscall RakNet::RakPeer::SetSplitMessageProgressInterval(RakPeer *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  *(int *)(this + 0x47c) = param_1;
  if (*(int *)(this + 0xc) != 0) {
    uVar1 = 0;
    do {
      uVar2 = uVar2 + 1;
      *(undefined4 *)(uVar1 * 0x1210 + 0x108 + *(int *)(this + 0x22c)) =
           *(undefined4 *)(this + 0x47c);
      uVar1 = uVar2 & 0xffff;
    } while (uVar1 < *(uint *)(this + 0xc));
  }
  return;
}


// public: virtual int __thiscall RakNet::RakPeer::GetSplitMessageProgressInterval(void)const 

int __thiscall RakNet::RakPeer::GetSplitMessageProgressInterval(RakPeer *this)

{
  return *(int *)(this + 0x47c);
}


// public: virtual void __thiscall RakNet::RakPeer::SetUnreliableTimeout(unsigned int)

void __thiscall RakNet::RakPeer::SetUnreliableTimeout(RakPeer *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  *(uint *)(this + 0x480) = param_1;
  if (*(int *)(this + 0xc) != 0) {
    uVar4 = 0;
    do {
      uVar1 = *(uint *)(this + 0x480);
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(this + 0x22c);
      *(int *)(uVar4 * 0x1210 + 0x114 + iVar2) = (int)((ulonglong)uVar1 * 1000 >> 0x20);
      *(int *)(uVar4 * 0x1210 + 0x110 + iVar2) = (int)((ulonglong)uVar1 * 1000);
      uVar4 = uVar3 & 0xffff;
    } while (uVar4 < *(uint *)(this + 0xc));
  }
  return;
}


// public: virtual void __thiscall RakNet::RakPeer::SendTTL(char const *,unsigned short,int,unsigned
// int)

void __thiscall
RakNet::RakPeer::SendTTL(RakPeer *this,char *param_1,ushort param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int extraout_ECX;
  undefined1 auStack_78 [12];
  char *local_6c;
  RakPeer *local_68;
  int local_64;
  SystemAddress local_60 [2];
  undefined1 *local_38;
  int local_34;
  undefined1 auStack_30 [4];
  RNS2_SendParameters bsp;
  char fakeData [2];
  
  bsp.systemAddress._16_4_ = ___security_cookie ^ (uint)auStack_78;
  local_6c = param_1;
  bsp.systemAddress._12_2_ = 0x100;
  local_68 = this;
  uVar3 = GetRakNetSocketFromUserConnectionSocketIndex(this,param_4);
  iVar1 = uVar3 * 4;
  iVar2 = *(int *)(*(int *)(iVar1 + *(int *)(this + 0x424)) + 8);
  local_64 = iVar1;
  if ((iVar2 != 3) && (iVar2 != 0)) {
    bsp.systemAddress._4_4_ = 0xffff0000;
    bsp.systemAddress._8_4_ = 0;
    bsp.data = (char *)0x0;
    bsp.length = 0;
    bsp.systemAddress.address = (<>)0x0;
    bsp.systemAddress._1_3_ = 0;
    auStack_30 = (undefined1  [4])0x2;
    local_38 = &bsp.systemAddress.field_0xc;
    local_34 = 2;
    SystemAddress::FromStringExplicitPort((SystemAddress *)auStack_30,local_6c,param_2,extraout_ECX)
    ;
    iVar1 = *(int *)(iVar1 + *(int *)(this + 0x424));
    local_60[0]._0_4_ = *(undefined4 *)(iVar1 + 0xc);
    local_60[0]._4_4_ = *(undefined4 *)(iVar1 + 0x10);
    local_60[0]._8_4_ = *(undefined4 *)(iVar1 + 0x14);
    local_60[0]._12_4_ = *(undefined4 *)(iVar1 + 0x18);
    local_60[0]._16_4_ = *(undefined4 *)(iVar1 + 0x1c);
    SystemAddress::FixForIPVersion((SystemAddress *)auStack_30,local_60);
    uVar3 = 0;
    bsp.systemAddress._8_4_ = param_3;
    if (*(int *)(this + 0x2dc) != 0) {
      do {
        (**(code **)(**(int **)(*(int *)(this + 0x2d8) + uVar3 * 4) + 0x2c))
                  (local_38,local_34 << 3,auStack_30,bsp.data,bsp.length,bsp.systemAddress._0_4_,
                   bsp.systemAddress._4_4_);
        uVar3 = uVar3 + 1;
        this = local_68;
      } while (uVar3 < *(uint *)(local_68 + 0x2dc));
    }
    (**(code **)(**(int **)(local_64 + *(int *)(this + 0x424)) + 4))
              (&local_38,"f:\\src\\ois\\libs\\raknet\\code\\rakpeer.cpp",0xabd);
  }
  __security_check_cookie(bsp.systemAddress._16_4_ ^ (uint)auStack_78);
  return;
}


// public: virtual void __thiscall RakNet::RakPeer::AttachPlugin(class RakNet::PluginInterface2 *)

void __thiscall RakNet::RakPeer::AttachPlugin(RakPeer *this,PluginInterface2 *param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  RakPeer *this_00;
  char *in_stack_ffffffe0;
  PluginInterface2 *local_c;
  uint local_8;
  
  local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  local_c = param_1;
  cVar1 = (**(code **)(*(int *)param_1 + 0x28))();
  if (cVar1 == '\0') {
    uVar2 = 0;
    if (*(uint *)(this + 0x2d0) != 0) {
      piVar3 = *(int **)(this + 0x2cc);
      do {
        if ((PluginInterface2 *)*piVar3 == param_1) {
          if (uVar2 != 0xffffffff) goto LAB_005a3a16;
          break;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (uVar2 < *(uint *)(this + 0x2d0));
    }
    *(RakPeer **)(param_1 + 4) = this;
    uVar2 = 0x5a3a04;
    (**(code **)(*(int *)param_1 + 4))();
    this_00 = this + 0x2cc;
  }
  else {
    uVar2 = 0;
    if (*(uint *)(this + 0x2dc) != 0) {
      piVar3 = *(int **)(this + 0x2d8);
      do {
        if ((PluginInterface2 *)*piVar3 == param_1) {
          if (uVar2 != 0xffffffff) goto LAB_005a3a16;
          break;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (uVar2 < *(uint *)(this + 0x2dc));
    }
    *(RakPeer **)(param_1 + 4) = this;
    uVar2 = 0x5a39cd;
    (**(code **)(*(int *)param_1 + 4))();
    this_00 = this + 0x2d8;
  }
  DataStructures::List<>::Insert((List<> *)this_00,(uint *)&local_c,in_stack_ffffffe0,uVar2);
LAB_005a3a16:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// public: virtual void __thiscall RakNet::RakPeer::DetachPlugin(class RakNet::PluginInterface2 *)

void __thiscall RakNet::RakPeer::DetachPlugin(RakPeer *this,PluginInterface2 *param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  
  if (param_1 != (PluginInterface2 *)0x0) {
    cVar1 = (**(code **)(*(int *)param_1 + 0x28))();
    uVar3 = 0;
    if (cVar1 == '\0') {
      if (*(uint *)(this + 0x2d0) != 0) {
        piVar2 = *(int **)(this + 0x2cc);
        while ((PluginInterface2 *)*piVar2 != param_1) {
          uVar3 = uVar3 + 1;
          piVar2 = piVar2 + 1;
          if (*(uint *)(this + 0x2d0) <= uVar3) {
            (**(code **)(*(int *)param_1 + 8))();
            *(undefined4 *)(param_1 + 4) = 0;
            return;
          }
        }
        if (uVar3 != 0xffffffff) {
          *(undefined4 *)(*(int *)(this + 0x2cc) + uVar3 * 4) =
               *(undefined4 *)(*(int *)(this + 0x2cc) + -4 + *(int *)(this + 0x2d0) * 4);
          *(int *)(this + 0x2d0) = *(int *)(this + 0x2d0) + -1;
        }
      }
    }
    else if (*(uint *)(this + 0x2dc) != 0) {
      piVar2 = *(int **)(this + 0x2d8);
      while ((PluginInterface2 *)*piVar2 != param_1) {
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 1;
        if (*(uint *)(this + 0x2dc) <= uVar3) {
          (**(code **)(*(int *)param_1 + 8))();
          *(undefined4 *)(param_1 + 4) = 0;
          return;
        }
      }
      if (uVar3 != 0xffffffff) {
        *(undefined4 *)(*(int *)(this + 0x2d8) + uVar3 * 4) =
             *(undefined4 *)(*(int *)(this + 0x2d8) + -4 + *(int *)(this + 0x2dc) * 4);
        *(int *)(this + 0x2dc) = *(int *)(this + 0x2dc) + -1;
        (**(code **)(*(int *)param_1 + 8))();
        *(undefined4 *)(param_1 + 4) = 0;
        return;
      }
    }
    (**(code **)(*(int *)param_1 + 8))();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


// public: virtual void __thiscall RakNet::RakPeer::PushBackPacket(struct RakNet::Packet *,bool)

void __thiscall RakNet::RakPeer::PushBackPacket(RakPeer *this,Packet *param_1,bool param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  HuffmanEncodingTreeNode *pHVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  HuffmanEncodingTreeNode *pHVar9;
  Queue<> *this_00;
  char *pcVar10;
  LPCRITICAL_SECTION p_Var11;
  uint local_10;
  HuffmanEncodingTreeNode *local_c;
  uint local_8;
  
  local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  local_c = (HuffmanEncodingTreeNode *)param_1;
  if (param_1 != (Packet *)0x0) {
    local_10 = 0;
    if (*(int *)(this + 0x2d0) != 0) {
      do {
        (**(code **)(**(int **)(*(int *)(this + 0x2cc) + local_10 * 4) + 0x40))
                  (*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x2c),
                   *(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                   *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
        local_10 = local_10 + 1;
      } while (local_10 < *(uint *)(this + 0x2d0));
    }
    local_10 = 0;
    if (*(int *)(this + 0x2dc) != 0) {
      do {
        (**(code **)(**(int **)(*(int *)(this + 0x2d8) + local_10 * 4) + 0x40))
                  (*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x2c),
                   *(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                   *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
        local_10 = local_10 + 1;
      } while (local_10 < *(uint *)(this + 0x2dc));
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x59c);
    pcVar10 = (char *)0x5a3bd8;
    p_Var11 = lpCriticalSection;
    EnterCriticalSection(lpCriticalSection);
    this_00 = (Queue<> *)(this + 0x5b4);
    DataStructures::Queue<>::Push(this_00,&local_c,pcVar10,(uint)p_Var11);
    if (param_2) {
      uVar1 = *(uint *)(this + 0x5bc);
      uVar7 = *(uint *)(this + 0x5b8);
      pHVar9 = (HuffmanEncodingTreeNode *)(uVar1 - uVar7);
      pHVar4 = pHVar9;
      if (uVar1 < uVar7) {
        pHVar4 = (HuffmanEncodingTreeNode *)((*(int *)(this + 0x5c0) - uVar7) + uVar1);
      }
      if (pHVar4 != (HuffmanEncodingTreeNode *)&DAT_00000001) {
        if (uVar1 < uVar7) {
          pHVar9 = (HuffmanEncodingTreeNode *)((*(int *)(this + 0x5c0) - uVar7) + uVar1);
        }
        puVar5 = (undefined1 *)((int)&pHVar9[-1].parent + 2);
        while( true ) {
          pHVar9 = (HuffmanEncodingTreeNode *)((int)&pHVar9[-1].parent + 3);
          iVar2 = *(int *)(this + 0x5b8);
          puVar3 = *(undefined1 **)(this + 0x5c0);
          iVar8 = iVar2 - (int)puVar3;
          if (puVar5 + iVar2 < puVar3) {
            iVar8 = iVar2;
          }
          iVar6 = iVar2 - (int)puVar3;
          if (&pHVar9->value + iVar2 < puVar3) {
            iVar6 = *(int *)(this + 0x5b8);
          }
          this_00->array[(int)(&pHVar9->value + iVar6)] = this_00->array[(int)(puVar5 + iVar8)];
          if (puVar5 == (undefined1 *)0x0) break;
          puVar5 = puVar5 + -1;
        }
        uVar1 = *(uint *)(this + 0x5b8);
        uVar7 = uVar1 - *(int *)(this + 0x5c0);
        if (uVar1 < *(uint *)(this + 0x5c0)) {
          uVar7 = uVar1;
        }
        this_00->array[uVar7] = (HuffmanEncodingTreeNode *)param_1;
        local_c = pHVar9;
      }
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// public: virtual void __thiscall RakNet::RakPeer::ChangeSystemAddress(struct
// RakNet::RakNetGUID,struct RakNet::SystemAddress const &)

void __thiscall
RakNet::RakPeer::ChangeSystemAddress(RakPeer *this,RakNetGUID param_1,SystemAddress *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  BufferedCommandStruct *pBVar4;
  char *in_stack_ffffffec;
  uint in_stack_fffffff0;
  
  pBVar4 = DataStructures::ThreadsafeAllocatingQueue<>::Allocate
                     ((ThreadsafeAllocatingQueue<> *)(this + 0x30c),in_stack_ffffffec,
                      in_stack_fffffff0);
  *(undefined4 *)(pBVar4 + 0x4c) = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x4;
  uVar2 = *(undefined4 *)&param_2->field_0x8;
  uVar3 = *(undefined4 *)&param_2->field_0xc;
  *(undefined4 *)(pBVar4 + 0x20) = *(undefined4 *)param_2;
  *(undefined4 *)(pBVar4 + 0x24) = uVar1;
  *(undefined4 *)(pBVar4 + 0x28) = uVar2;
  *(undefined4 *)(pBVar4 + 0x2c) = uVar3;
  *(ushort *)(pBVar4 + 0x32) = param_2->systemIndex;
  *(ushort *)(pBVar4 + 0x30) = param_2->debugPort;
  *(undefined4 *)(pBVar4 + 0x10) = (undefined4)param_1.g;
  *(undefined4 *)(pBVar4 + 0x14) = param_1.g._4_4_;
  *(ushort *)(pBVar4 + 0x18) = param_1.systemIndex;
  *(undefined4 *)(pBVar4 + 0x6c) = 3;
  DataStructures::ThreadsafeAllocatingQueue<>::Push
            ((ThreadsafeAllocatingQueue<> *)(this + 0x30c),pBVar4);
  return;
}


// public: virtual struct RakNet::Packet * __thiscall RakNet::RakPeer::AllocatePacket(unsigned int)

Packet * __thiscall RakNet::RakPeer::AllocatePacket(RakPeer *this,uint param_1)

{
  Packet *pPVar1;
  char *in_stack_fffffff4;
  uint in_stack_fffffff8;
  
  pPVar1 = AllocPacket(this,param_1,in_stack_fffffff4,in_stack_fffffff8);
  return pPVar1;
}


// WARNING: Removing unreachable block (ram,0x005a3f35)
// public: virtual class RakNet::RakNetSocket2 * __thiscall RakNet::RakPeer::GetSocket(struct
// RakNet::SystemAddress)

RakNetSocket2 * __thiscall RakNet::RakPeer::GetSocket(RakPeer *this,SystemAddress param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  BufferedCommandStruct *pBVar4;
  uint uVar5;
  RakNetSocket2 *pRVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  List<> *pLVar7;
  __uint64 _Var8;
  undefined8 uVar9;
  undefined8 uVar10;
  char *in_stack_ffffffc4;
  char *pcVar11;
  uint in_stack_ffffffc8;
  LPCRITICAL_SECTION p_Var12;
  List<> output;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cd898;
  local_10 = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pBVar4 = DataStructures::ThreadsafeAllocatingQueue<>::Allocate
                     ((ThreadsafeAllocatingQueue<> *)(this + 0x30c),in_stack_ffffffc4,
                      in_stack_ffffffc8);
  *(undefined4 *)(pBVar4 + 0x6c) = 2;
  *(undefined4 *)(pBVar4 + 0x10) = DAT_00657908;
  *(undefined4 *)(pBVar4 + 0x14) = DAT_0065790c;
  *(undefined2 *)(pBVar4 + 0x18) = DAT_00657910;
  *(undefined4 *)(pBVar4 + 0x20) = param_1._0_4_;
  *(undefined4 *)(pBVar4 + 0x24) = param_1._4_4_;
  *(undefined4 *)(pBVar4 + 0x28) = param_1._8_4_;
  *(undefined4 *)(pBVar4 + 0x2c) = param_1._12_4_;
  *(ushort *)(pBVar4 + 0x32) = param_1.systemIndex;
  *(ushort *)(pBVar4 + 0x30) = param_1.debugPort;
  *(undefined4 *)(pBVar4 + 0x4c) = 0;
  DataStructures::ThreadsafeAllocatingQueue<>::Push
            ((ThreadsafeAllocatingQueue<> *)(this + 0x30c),pBVar4);
  _Var8 = GetTimeUS_Windows();
  uVar9 = __aulldiv((uint)_Var8,(uint)(_Var8 >> 0x20),1000,0);
  output.allocation_size = 0;
  output.listArray = (RakNetSocket2 **)0x0;
  output.list_size = 0;
  local_8 = 0;
  _Var8 = GetTimeUS_Windows();
  uVar10 = __aulldiv((uint)_Var8,(uint)(_Var8 >> 0x20),1000,0);
  uVar5 = (uint)uVar10;
  do {
    if (((int)uVar9 + 1000U <= uVar5) || (this[9] == (RakPeer)0x0)) goto LAB_005a3ed1;
    Sleep(0);
    EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x3ec));
    if (*(int *)(this + 0x3e0) == *(int *)(this + 0x3e4)) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x3ec));
    }
    else {
      iVar1 = *(int *)(this + 0x3e0) + 1;
      *(int *)(this + 0x3e0) = iVar1;
      iVar2 = *(int *)(this + 1000);
      if (iVar1 == iVar2) {
        *(undefined4 *)(this + 0x3e0) = 0;
        pLVar7 = *(List<> **)(*(int *)(this + 0x3dc) + -4 + iVar2 * 4);
      }
      else if (iVar1 == 0) {
        pLVar7 = *(List<> **)(*(int *)(this + 0x3dc) + -4 + iVar2 * 4);
      }
      else {
        pLVar7 = *(List<> **)(*(int *)(this + 0x3dc) + -4 + iVar1 * 4);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x3ec));
      if (pLVar7 != (List<> *)0x0) {
        DataStructures::List<>::operator=(&output,pLVar7);
        if (*(int *)(pLVar7 + 8) != 0) {
          operator_delete__(*(void **)pLVar7);
          *(undefined4 *)(pLVar7 + 8) = 0;
          *(undefined4 *)pLVar7 = 0;
          *(undefined4 *)(pLVar7 + 4) = 0;
        }
        lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x3c4);
        pcVar11 = (char *)0x5a3f4c;
        p_Var12 = lpCriticalSection;
        EnterCriticalSection(lpCriticalSection);
        DataStructures::MemoryPool<>::Release
                  ((MemoryPool<> *)(this + 0x3b0),(SocketQueryOutput *)pLVar7,pcVar11,(uint)p_Var12)
        ;
        LeaveCriticalSection(lpCriticalSection);
LAB_005a3ed1:
        if (output.allocation_size != 0) {
          operator_delete__(output.listArray);
        }
        ExceptionList = local_10;
        pRVar6 = (RakNetSocket2 *)__security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
        return pRVar6;
      }
    }
    _Var8 = GetTimeUS_Windows();
    uVar10 = __aulldiv((uint)_Var8,(uint)(_Var8 >> 0x20),1000,0);
    uVar5 = (uint)uVar10;
  } while( true );
}


// WARNING: Removing unreachable block (ram,0x005a40ca)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: virtual void __thiscall RakNet::RakPeer::GetSockets(class DataStructures::List<class
// RakNet::RakNetSocket2 *> &)

void __thiscall RakNet::RakPeer::GetSockets(RakPeer *this,List<> *param_1)

{
  LPCRITICAL_SECTION p_Var1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  BufferedCommandStruct *pBVar5;
  int iVar6;
  List<> *pLVar7;
  char *in_stack_ffffffe8;
  char *pcVar8;
  RakNetSocket2 **in_stack_ffffffec;
  LPCRITICAL_SECTION p_Var9;
  
  if (param_1->allocation_size != 0) {
    in_stack_ffffffec = param_1->listArray;
    in_stack_ffffffe8 = (char *)0x5a3f98;
    operator_delete__(in_stack_ffffffec);
    param_1->allocation_size = 0;
    param_1->listArray = (RakNetSocket2 **)0x0;
    param_1->list_size = 0;
  }
  pBVar5 = DataStructures::ThreadsafeAllocatingQueue<>::Allocate
                     ((ThreadsafeAllocatingQueue<> *)(this + 0x30c),in_stack_ffffffe8,
                      (uint)in_stack_ffffffec);
  *(undefined4 *)(pBVar5 + 0x6c) = 2;
  *(undefined4 *)(pBVar5 + 0x10) = DAT_00657908;
  *(undefined4 *)(pBVar5 + 0x14) = DAT_0065790c;
  *(undefined2 *)(pBVar5 + 0x18) = DAT_00657910;
  uVar4 = uRam00657900;
  uVar3 = uRam006578fc;
  uVar2 = DAT_006578f8;
  *(undefined4 *)(pBVar5 + 0x20) = _DAT_006578f4;
  *(undefined4 *)(pBVar5 + 0x24) = uVar2;
  *(undefined4 *)(pBVar5 + 0x28) = uVar3;
  *(undefined4 *)(pBVar5 + 0x2c) = uVar4;
  *(undefined2 *)(pBVar5 + 0x32) = DAT_00657906;
  *(undefined2 *)(pBVar5 + 0x30) = DAT_00657904;
  *(undefined4 *)(pBVar5 + 0x4c) = 0;
  DataStructures::ThreadsafeAllocatingQueue<>::Push
            ((ThreadsafeAllocatingQueue<> *)(this + 0x30c),pBVar5);
  if (this[9] == (RakPeer)0x0) {
    return;
  }
  p_Var1 = (LPCRITICAL_SECTION)(this + 0x3ec);
  do {
    Sleep(0);
    EnterCriticalSection(p_Var1);
    if (*(int *)(this + 0x3e0) == *(int *)(this + 0x3e4)) {
      LeaveCriticalSection(p_Var1);
    }
    else {
      iVar6 = *(int *)(this + 0x3e0) + 1;
      *(int *)(this + 0x3e0) = iVar6;
      if (iVar6 == *(int *)(this + 1000)) {
        *(undefined4 *)(this + 0x3e0) = 0;
        iVar6 = 0;
      }
      if (iVar6 == 0) {
        pLVar7 = *(List<> **)(*(int *)(this + 0x3dc) + -4 + *(int *)(this + 1000) * 4);
      }
      else {
        pLVar7 = *(List<> **)(*(int *)(this + 0x3dc) + -4 + iVar6 * 4);
      }
      LeaveCriticalSection(p_Var1);
      if (pLVar7 != (List<> *)0x0) {
        DataStructures::List<>::operator=(param_1,pLVar7);
        if (*(int *)(pLVar7 + 8) != 0) {
          operator_delete__(*(void **)pLVar7);
          *(undefined4 *)(pLVar7 + 8) = 0;
          *(undefined4 *)pLVar7 = 0;
          *(undefined4 *)(pLVar7 + 4) = 0;
        }
        p_Var1 = (LPCRITICAL_SECTION)(this + 0x3c4);
        pcVar8 = (char *)0x5a40e1;
        p_Var9 = p_Var1;
        EnterCriticalSection(p_Var1);
        DataStructures::MemoryPool<>::Release
                  ((MemoryPool<> *)(this + 0x3b0),(SocketQueryOutput *)pLVar7,pcVar8,(uint)p_Var9);
        LeaveCriticalSection(p_Var1);
        return;
      }
    }
    if (this[9] == (RakPeer)0x0) {
      return;
    }
  } while( true );
}


// public: virtual void __thiscall RakNet::RakPeer::ReleaseSockets(class DataStructures::List<class
// RakNet::RakNetSocket2 *> &)

void __thiscall RakNet::RakPeer::ReleaseSockets(RakPeer *this,List<> *param_1)

{
  if (param_1->allocation_size != 0) {
    operator_delete__(param_1->listArray);
    param_1->allocation_size = 0;
    param_1->listArray = (RakNetSocket2 **)0x0;
    param_1->list_size = 0;
  }
  return;
}


// public: virtual void __thiscall RakNet::RakPeer::SetPerConnectionOutgoingBandwidthLimit(unsigned
// int)

void __thiscall RakNet::RakPeer::SetPerConnectionOutgoingBandwidthLimit(RakPeer *this,uint param_1)

{
  *(uint *)(this + 0x460) = param_1;
  return;
}


// public: virtual void __thiscall RakNet::RakPeer::WriteOutOfBandHeader(class RakNet::BitStream *)

void __thiscall RakNet::RakPeer::WriteOutOfBandHeader(RakPeer *this,BitStream *param_1)

{
  uint uVar1;
  uchar *puVar2;
  int iVar3;
  uchar local_5;
  
  BitStream::WriteBits(param_1,&local_5,8,SUB41(this,0));
  BitStream::Write<>(param_1,(__uint64 *)(this + 0x450));
  iVar3 = param_1->numberOfBitsUsed - (param_1->numberOfBitsUsed - 1 & 7);
  uVar1 = iVar3 + 7;
  param_1->numberOfBitsUsed = uVar1;
  if ((uVar1 & 7) == 0) {
    BitStream::AddBitsAndReallocate(param_1,0x80);
    puVar2 = param_1->data + (param_1->numberOfBitsUsed + 7 >> 3);
    puVar2[0] = '\0';
    puVar2[1] = 0xff;
    puVar2[2] = 0xff;
    puVar2[3] = '\0';
    puVar2[4] = 0xfe;
    puVar2[5] = 0xfe;
    puVar2[6] = 0xfe;
    puVar2[7] = 0xfe;
    puVar2[8] = 0xfd;
    puVar2[9] = 0xfd;
    puVar2[10] = 0xfd;
    puVar2[0xb] = 0xfd;
    puVar2[0xc] = '\x12';
    puVar2[0xd] = '4';
    puVar2[0xe] = 'V';
    puVar2[0xf] = 'x';
    param_1->numberOfBitsUsed = param_1->numberOfBitsUsed + 0x80;
    return;
  }
  BitStream::WriteBits(param_1,"",0x80,SUB41(iVar3,0));
  return;
}


// public: virtual void __thiscall RakNet::RakPeer::SetUserUpdateThread(void (__cdecl*)(class
// RakNet::RakPeerInterface *,void *),void *)

void __thiscall
RakNet::RakPeer::SetUserUpdateThread
          (RakPeer *this,_func_void_RakPeerInterface_ptr_void_ptr *param_1,void *param_2)

{
  *(_func_void_RakPeerInterface_ptr_void_ptr **)(this + 0x560) = param_1;
  *(void **)(this + 0x564) = param_2;
  return;
}


// public: virtual void __thiscall RakNet::RakPeer::SetIncomingDatagramEventHandler(bool
// (__cdecl*)(struct RakNet::RNS2RecvStruct *))

void __thiscall
RakNet::RakPeer::SetIncomingDatagramEventHandler
          (RakPeer *this,_func_bool_RNS2RecvStruct_ptr *param_1)

{
  *(_func_bool_RNS2RecvStruct_ptr **)(this + 0x484) = param_1;
  return;
}


// public: virtual bool __thiscall RakNet::RakPeer::SendOutOfBand(char const *,unsigned short,char
// const *,unsigned int,unsigned int)

bool __thiscall
RakNet::RakPeer::SendOutOfBand
          (RakPeer *this,char *param_1,ushort param_2,char *param_3,uint param_4,uint param_5)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  int extraout_ECX;
  SystemAddress local_164;
  char *local_150;
  char *local_14c;
  RNS2_SendParameters bsp;
  BitStream bitStream;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cd8cb;
  local_10 = ExceptionList;
  uVar4 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14c = param_3;
  local_150 = param_1;
  cVar2 = (**(code **)(*(int *)this + 0x3c))(uVar4);
  if (((cVar2 != '\0') && (param_1 != (char *)0x0)) && (*param_1 != '\0')) {
    memset(&bitStream,0,0x114);
    bitStream.data = bitStream.stackData;
    bitStream.numberOfBitsUsed = 0;
    bitStream.numberOfBitsAllocated = 0x800;
    bitStream.readOffset = 0;
    bitStream.copyData = true;
    local_8 = 0;
    (**(code **)(*(int *)this + 300))(&bitStream);
    if (param_4 != 0) {
      BitStream::Write(&bitStream,local_14c,param_4);
    }
    uVar5 = GetRakNetSocketFromUserConnectionSocketIndex(this,param_5);
    bsp.systemAddress.debugPort = 0;
    bsp.systemAddress.systemIndex = 0xffff;
    bsp.ttl = 0;
    bsp.systemAddress._4_4_ = 0;
    bsp.systemAddress._8_4_ = 0;
    bsp.systemAddress._12_4_ = 0;
    bsp.systemAddress.address = (<>)0x2;
    bsp.systemAddress._1_3_ = 0;
    bsp.data = (char *)bitStream.data;
    bsp.length = bitStream.numberOfBitsUsed + 7 >> 3;
    SystemAddress::FromStringExplicitPort(&bsp.systemAddress,local_150,param_2,extraout_ECX);
    local_150 = (char *)(uVar5 * 4);
    iVar1 = *(int *)(local_150 + *(int *)(this + 0x424));
    local_164._0_4_ = *(undefined4 *)(iVar1 + 0xc);
    local_164._4_4_ = *(undefined4 *)(iVar1 + 0x10);
    local_164._8_4_ = *(undefined4 *)(iVar1 + 0x14);
    local_164._12_4_ = *(undefined4 *)(iVar1 + 0x18);
    local_164._16_4_ = *(undefined4 *)(iVar1 + 0x1c);
    SystemAddress::FixForIPVersion(&bsp.systemAddress,&local_164);
    local_14c = (char *)0x0;
    if (*(int *)(this + 0x2dc) != 0) {
      do {
        (**(code **)(**(int **)(*(int *)(this + 0x2d8) + (int)local_14c * 4) + 0x2c))
                  (bsp.data,bsp.length << 3,bsp.systemAddress._0_4_,bsp.systemAddress._4_4_,
                   bsp.systemAddress._8_4_,bsp.systemAddress._12_4_,bsp.systemAddress._16_4_);
        local_14c = local_14c + 1;
      } while (local_14c < *(char **)(this + 0x2dc));
    }
    (**(code **)(**(int **)(local_150 + *(int *)(this + 0x424)) + 4))
              (&bsp,"f:\\src\\ois\\libs\\raknet\\code\\rakpeer.cpp",0xbe5);
    if ((bitStream.copyData != false) && (0x800 < bitStream.numberOfBitsAllocated)) {
      free(bitStream.data);
    }
  }
  ExceptionList = local_10;
  uVar3 = __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
  return (bool)uVar3;
}


// public: virtual struct RakNet::RakNetStatistics * __thiscall
// RakNet::RakPeer::GetStatistics(struct RakNet::SystemAddress,struct RakNet::RakNetStatistics *)

RakNetStatistics * __thiscall
RakNet::RakPeer::GetStatistics(RakPeer *this,SystemAddress param_1,RakNetStatistics *param_2)

{
  int *piVar1;
  __uint64 *p_Var2;
  __uint64 _Var3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  RakNetStatistics *pRVar7;
  RemoteSystemStruct *pRVar8;
  int iVar9;
  undefined4 *puVar10;
  RakNetStatistics *pRVar11;
  undefined1 auStack_fc [3];
  char local_f9;
  uint local_f8;
  RakPeer *local_f4;
  undefined1 local_f0 [4];
  RakNetStatistics rnsTemp;
  
  uVar5 = ___security_cookie ^ (uint)auStack_fc;
  pRVar7 = (RakNetStatistics *)&DAT_00662840;
  if (param_2 != (RakNetStatistics *)0x0) {
    pRVar7 = param_2;
  }
  local_f4 = this;
  if (((param_1._2_2_ == DAT_006578f6) && (param_1._0_2_ == 2)) && (param_1._4_4_ == DAT_006578f8))
  {
    local_f9 = '\0';
    local_f8 = 0;
    if (*(int *)(this + 0xc) != 0) {
      uVar6 = 0;
      do {
        uVar4 = local_f8;
        local_f8 = uVar4;
        if (*(char *)(uVar6 * 0x1210 + *(int *)(this + 0x22c)) != '\0') {
          ReliabilityLayer::GetStatistics
                    ((ReliabilityLayer *)(*(int *)(this + 0x22c) + uVar6 * 0x1210 + 0xf8),
                     (RakNetStatistics *)local_f0);
          if (local_f9 == '\0') {
            local_f9 = '\x01';
            puVar10 = (undefined4 *)local_f0;
            pRVar11 = pRVar7;
            for (iVar9 = 0x38; this = local_f4, iVar9 != 0; iVar9 = iVar9 + -1) {
              *(undefined4 *)pRVar11->valueOverLastSecond = *puVar10;
              puVar10 = puVar10 + 1;
              pRVar11 = (RakNetStatistics *)((int)pRVar11->valueOverLastSecond + 4);
            }
          }
          else {
            pRVar7->messageInSendBuffer[0] =
                 pRVar7->messageInSendBuffer[0] + rnsTemp.BPSLimitByOutgoingBandwidthLimit._4_4_;
            pRVar7->bytesInSendBuffer[0] = pRVar7->bytesInSendBuffer[0] + (double)rnsTemp._164_8_;
            pRVar7->messageInSendBuffer[1] =
                 pRVar7->messageInSendBuffer[1] + rnsTemp.messageInSendBuffer[0];
            pRVar7->bytesInSendBuffer[1] =
                 (double)rnsTemp.bytesInSendBuffer._4_8_ + pRVar7->bytesInSendBuffer[1];
            pRVar7->messageInSendBuffer[2] =
                 pRVar7->messageInSendBuffer[2] + rnsTemp.messageInSendBuffer[1];
            pRVar7->bytesInSendBuffer[2] =
                 pRVar7->bytesInSendBuffer[2] + (double)rnsTemp.bytesInSendBuffer._12_8_;
            pRVar7->messageInSendBuffer[3] =
                 pRVar7->messageInSendBuffer[3] + rnsTemp.messageInSendBuffer[2];
            pRVar7->bytesInSendBuffer[3] =
                 (double)rnsTemp.bytesInSendBuffer._20_8_ + pRVar7->bytesInSendBuffer[3];
            _Var3 = pRVar7->valueOverLastSecond[0];
            *(int *)pRVar7->valueOverLastSecond =
                 (int)pRVar7->valueOverLastSecond[0] + (int)local_f0;
            piVar1 = (int *)((int)pRVar7->valueOverLastSecond + 4);
            *piVar1 = *piVar1 + (int)rnsTemp.valueOverLastSecond[0] +
                      (uint)CARRY4((uint)_Var3,(uint)local_f0);
            p_Var2 = pRVar7->runningTotal;
            _Var3 = *p_Var2;
            *(uint *)p_Var2 = (int)*p_Var2 + rnsTemp.valueOverLastSecond[6]._4_4_;
            piVar1 = (int *)((int)pRVar7->runningTotal + 4);
            *piVar1 = *piVar1 + (int)rnsTemp.runningTotal[0] +
                      (uint)CARRY4((uint)_Var3,rnsTemp.valueOverLastSecond[6]._4_4_);
            p_Var2 = pRVar7->valueOverLastSecond + 1;
            _Var3 = *p_Var2;
            *(uint *)p_Var2 = (uint)*p_Var2 + rnsTemp.valueOverLastSecond[0]._4_4_;
            piVar1 = (int *)((int)pRVar7->valueOverLastSecond + 0xc);
            *piVar1 = *piVar1 + (int)rnsTemp.valueOverLastSecond[1] +
                      (uint)CARRY4((uint)_Var3,rnsTemp.valueOverLastSecond[0]._4_4_);
            p_Var2 = pRVar7->runningTotal + 1;
            _Var3 = *p_Var2;
            *(uint *)p_Var2 = (uint)*p_Var2 + rnsTemp.runningTotal[0]._4_4_;
            piVar1 = (int *)((int)pRVar7->runningTotal + 0xc);
            *piVar1 = *piVar1 + (int)rnsTemp.runningTotal[1] +
                      (uint)CARRY4((uint)_Var3,rnsTemp.runningTotal[0]._4_4_);
            p_Var2 = pRVar7->valueOverLastSecond + 2;
            _Var3 = *p_Var2;
            *(uint *)p_Var2 = (uint)*p_Var2 + rnsTemp.valueOverLastSecond[1]._4_4_;
            piVar1 = (int *)((int)pRVar7->valueOverLastSecond + 0x14);
            *piVar1 = *piVar1 + (int)rnsTemp.valueOverLastSecond[2] +
                      (uint)CARRY4((uint)_Var3,rnsTemp.valueOverLastSecond[1]._4_4_);
            p_Var2 = pRVar7->runningTotal + 2;
            _Var3 = *p_Var2;
            *(uint *)p_Var2 = (uint)*p_Var2 + rnsTemp.runningTotal[1]._4_4_;
            piVar1 = (int *)((int)pRVar7->runningTotal + 0x14);
            *piVar1 = *piVar1 + (int)rnsTemp.runningTotal[2] +
                      (uint)CARRY4((uint)_Var3,rnsTemp.runningTotal[1]._4_4_);
            p_Var2 = pRVar7->valueOverLastSecond + 3;
            _Var3 = *p_Var2;
            *(uint *)p_Var2 = (uint)*p_Var2 + rnsTemp.valueOverLastSecond[2]._4_4_;
            piVar1 = (int *)((int)pRVar7->valueOverLastSecond + 0x1c);
            *piVar1 = *piVar1 + (int)rnsTemp.valueOverLastSecond[3] +
                      (uint)CARRY4((uint)_Var3,rnsTemp.valueOverLastSecond[2]._4_4_);
            p_Var2 = pRVar7->runningTotal + 3;
            _Var3 = *p_Var2;
            *(uint *)p_Var2 = (uint)*p_Var2 + rnsTemp.runningTotal[2]._4_4_;
            piVar1 = (int *)((int)pRVar7->runningTotal + 0x1c);
            *piVar1 = *piVar1 + (int)rnsTemp.runningTotal[3] +
                      (uint)CARRY4((uint)_Var3,rnsTemp.runningTotal[2]._4_4_);
            p_Var2 = pRVar7->valueOverLastSecond + 4;
            _Var3 = *p_Var2;
            *(uint *)p_Var2 = (uint)*p_Var2 + rnsTemp.valueOverLastSecond[3]._4_4_;
            piVar1 = (int *)((int)pRVar7->valueOverLastSecond + 0x24);
            *piVar1 = *piVar1 + (int)rnsTemp.valueOverLastSecond[4] +
                      (uint)CARRY4((uint)_Var3,rnsTemp.valueOverLastSecond[3]._4_4_);
            p_Var2 = pRVar7->runningTotal + 4;
            _Var3 = *p_Var2;
            *(uint *)p_Var2 = (uint)*p_Var2 + rnsTemp.runningTotal[3]._4_4_;
            piVar1 = (int *)((int)pRVar7->runningTotal + 0x24);
            *piVar1 = *piVar1 + (int)rnsTemp.runningTotal[4] +
                      (uint)CARRY4((uint)_Var3,rnsTemp.runningTotal[3]._4_4_);
            p_Var2 = pRVar7->valueOverLastSecond + 5;
            _Var3 = *p_Var2;
            *(uint *)p_Var2 = (uint)*p_Var2 + rnsTemp.valueOverLastSecond[4]._4_4_;
            piVar1 = (int *)((int)pRVar7->valueOverLastSecond + 0x2c);
            *piVar1 = *piVar1 + (int)rnsTemp.valueOverLastSecond[5] +
                      (uint)CARRY4((uint)_Var3,rnsTemp.valueOverLastSecond[4]._4_4_);
            p_Var2 = pRVar7->runningTotal + 5;
            _Var3 = *p_Var2;
            *(uint *)p_Var2 = (uint)*p_Var2 + rnsTemp.runningTotal[4]._4_4_;
            piVar1 = (int *)((int)pRVar7->runningTotal + 0x2c);
            *piVar1 = *piVar1 + (int)rnsTemp.runningTotal[5] +
                      (uint)CARRY4((uint)_Var3,rnsTemp.runningTotal[4]._4_4_);
            p_Var2 = pRVar7->valueOverLastSecond + 6;
            _Var3 = *p_Var2;
            *(uint *)p_Var2 = (uint)*p_Var2 + rnsTemp.valueOverLastSecond[5]._4_4_;
            piVar1 = (int *)((int)pRVar7->valueOverLastSecond + 0x34);
            *piVar1 = *piVar1 + (int)rnsTemp.valueOverLastSecond[6] +
                      (uint)CARRY4((uint)_Var3,rnsTemp.valueOverLastSecond[5]._4_4_);
            p_Var2 = pRVar7->runningTotal + 6;
            _Var3 = *p_Var2;
            *(uint *)p_Var2 = (uint)*p_Var2 + rnsTemp.runningTotal[5]._4_4_;
            piVar1 = (int *)((int)pRVar7->runningTotal + 0x34);
            *piVar1 = *piVar1 + (int)rnsTemp.runningTotal[6] +
                      (uint)CARRY4((uint)_Var3,rnsTemp.runningTotal[5]._4_4_);
            local_f8 = uVar4;
          }
        }
        local_f8 = local_f8 + 1;
        uVar6 = local_f8 & 0xffff;
      } while (uVar6 < *(uint *)(this + 0xc));
    }
    pRVar7 = (RakNetStatistics *)__security_check_cookie(uVar5 ^ (uint)auStack_fc);
    return pRVar7;
  }
  pRVar8 = GetRemoteSystemFromSystemAddress(this,param_1,false,false);
  if ((pRVar8 != (RemoteSystemStruct *)0x0) && (this[8] == (RakPeer)0x0)) {
    ReliabilityLayer::GetStatistics((ReliabilityLayer *)(pRVar8 + 0xf8),pRVar7);
    pRVar7 = (RakNetStatistics *)__security_check_cookie(uVar5 ^ (uint)auStack_fc);
    return pRVar7;
  }
  pRVar7 = (RakNetStatistics *)__security_check_cookie(uVar5 ^ (uint)auStack_fc);
  return pRVar7;
}


// public: virtual void __thiscall RakNet::RakPeer::GetStatisticsList(class
// DataStructures::List<struct RakNet::SystemAddress> &,class DataStructures::List<struct
// RakNet::RakNetGUID> &,class DataStructures::List<struct RakNet::RakNetStatistics> &)

void __thiscall
RakNet::RakPeer::GetStatisticsList(RakPeer *this,List<> *param_1,List<> *param_2,List<> *param_3)

{
  char *pcVar1;
  uint uVar2;
  RakNetStatistics *pRVar3;
  int iVar4;
  RakNetStatistics *pRVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *in_stack_fffffef8;
  RakNetStatistics *in_stack_fffffefc;
  uint local_f0;
  undefined1 local_e8 [4];
  RakNetStatistics rns;
  
  if (param_1->allocation_size != 0) {
    in_stack_fffffefc = (RakNetStatistics *)param_1->listArray;
    in_stack_fffffef8 = (char *)0x5a4735;
    operator_delete__(in_stack_fffffefc);
    param_1->allocation_size = 0;
    param_1->listArray = (SystemAddress *)0x0;
    param_1->list_size = 0;
  }
  if (param_2->allocation_size != 0) {
    in_stack_fffffefc = (RakNetStatistics *)param_2->listArray;
    in_stack_fffffef8 = (char *)0x5a475c;
    operator_delete__(in_stack_fffffefc);
    param_2->allocation_size = 0;
    param_2->listArray = (RakNetGUID *)0x0;
    param_2->list_size = 0;
  }
  if (param_3->allocation_size != 0) {
    in_stack_fffffefc = param_3->listArray;
    in_stack_fffffef8 = (char *)0x5a4783;
    operator_delete__(in_stack_fffffefc);
    param_3->allocation_size = 0;
    param_3->listArray = (RakNetStatistics *)0x0;
    param_3->list_size = 0;
  }
  if (((*(int *)(this + 0x22c) != 0) && (this[8] != (RakPeer)0x1)) &&
     (local_f0 = 0, *(int *)(this + 0x234) != 0)) {
    do {
      iVar4 = local_f0 * 4;
      pcVar1 = *(char **)(iVar4 + *(int *)(this + 0x230));
      if ((*pcVar1 != '\0') && (*(int *)(pcVar1 + 0x120c) == 7)) {
        DataStructures::List<>::Push
                  (param_1,(SystemAddress *)(pcVar1 + 4),in_stack_fffffef8,(uint)in_stack_fffffefc);
        DataStructures::List<>::Push
                  (param_2,(RakNetGUID *)(*(int *)(*(int *)(this + 0x230) + iVar4) + 0x11f0),
                   in_stack_fffffef8,(uint)in_stack_fffffefc);
        in_stack_fffffefc = (RakNetStatistics *)local_e8;
        in_stack_fffffef8 = (char *)0x5a4838;
        ReliabilityLayer::GetStatistics
                  ((ReliabilityLayer *)(*(int *)(*(int *)(this + 0x230) + iVar4) + 0xf8),
                   in_stack_fffffefc);
        uVar7 = param_3->list_size;
        uVar2 = param_3->allocation_size;
        if (uVar7 == uVar2) {
          if (uVar2 == 0) {
            param_3->allocation_size = 0x10;
            uVar2 = 0x10;
LAB_005a4852:
            in_stack_fffffefc =
                 (RakNetStatistics *)
                 (-(uint)((int)((ulonglong)uVar2 * 0xe0 >> 0x20) != 0) |
                 (uint)((ulonglong)uVar2 * 0xe0));
            in_stack_fffffef8 = (char *)0x5a4868;
            pRVar3 = operator_new__((uint)in_stack_fffffefc);
            uVar7 = param_3->list_size;
          }
          else {
            uVar2 = uVar2 * 2;
            param_3->allocation_size = uVar2;
            if (uVar2 != 0) goto LAB_005a4852;
            pRVar3 = (RakNetStatistics *)0x0;
          }
          pRVar5 = param_3->listArray;
          if (pRVar5 != (RakNetStatistics *)0x0) {
            uVar2 = 0;
            if (uVar7 != 0) {
              iVar4 = 0;
              do {
                puVar8 = (undefined4 *)((int)param_3->listArray->valueOverLastSecond + iVar4);
                puVar9 = (undefined4 *)((int)pRVar3->valueOverLastSecond + iVar4);
                for (iVar6 = 0x38; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *puVar9 = *puVar8;
                  puVar8 = puVar8 + 1;
                  puVar9 = puVar9 + 1;
                }
                uVar2 = uVar2 + 1;
                iVar4 = iVar4 + 0xe0;
              } while (uVar2 < param_3->list_size);
              pRVar5 = param_3->listArray;
            }
            in_stack_fffffef8 = (char *)0x5a48a7;
            operator_delete__(pRVar5);
            in_stack_fffffefc = pRVar5;
          }
          param_3->listArray = pRVar3;
        }
        else {
          pRVar3 = param_3->listArray;
        }
        puVar8 = (undefined4 *)local_e8;
        pRVar3 = pRVar3 + param_3->list_size;
        for (iVar4 = 0x38; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined4 *)pRVar3->valueOverLastSecond = *puVar8;
          puVar8 = puVar8 + 1;
          pRVar3 = (RakNetStatistics *)((int)pRVar3->valueOverLastSecond + 4);
        }
        param_3->list_size = param_3->list_size + 1;
      }
      local_f0 = local_f0 + 1;
    } while (local_f0 < *(uint *)(this + 0x234));
  }
  return;
}


// public: virtual bool __thiscall RakNet::RakPeer::GetStatistics(unsigned int,struct
// RakNet::RakNetStatistics *)

bool __thiscall RakNet::RakPeer::GetStatistics(RakPeer *this,uint param_1,RakNetStatistics *param_2)

{
  if (param_1 < *(uint *)(this + 0xc)) {
    if (*(char *)(param_1 * 0x1210 + *(int *)(this + 0x22c)) != '\0') {
      ReliabilityLayer::GetStatistics
                ((ReliabilityLayer *)(*(int *)(this + 0x22c) + 0xf8 + param_1 * 0x1210),param_2);
      return true;
    }
  }
  return false;
}


// public: virtual unsigned int __thiscall RakNet::RakPeer::GetReceiveBufferSize(void)

uint __thiscall RakNet::RakPeer::GetReceiveBufferSize(RakPeer *this)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x59c);
  EnterCriticalSection(lpCriticalSection);
  uVar1 = *(uint *)(this + 0x5b8);
  uVar2 = *(uint *)(this + 0x5bc);
  if (uVar1 <= uVar2) {
    LeaveCriticalSection(lpCriticalSection);
    return uVar2 - uVar1;
  }
  iVar3 = *(int *)(this + 0x5c0);
  LeaveCriticalSection(lpCriticalSection);
  return uVar2 + (iVar3 - uVar1);
}


// protected: int __thiscall RakNet::RakPeer::GetIndexFromSystemAddress(struct
// RakNet::SystemAddress,bool)const 

int __thiscall
RakNet::RakPeer::GetIndexFromSystemAddress(RakPeer *this,SystemAddress param_1,bool param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  if (((param_1._2_2_ != DAT_006578f6) || (param_1._0_2_ != 2)) || (param_1._4_4_ != DAT_006578f8))
  {
    uVar2 = (uint)param_1._16_4_ >> 0x10;
    if ((param_1.systemIndex != 0xffff) && (uVar2 < *(uint *)(this + 0xc))) {
      iVar1 = *(int *)(this + 0x22c);
      iVar4 = uVar2 * 0x1210;
      if (((*(short *)(iVar4 + 6 + iVar1) == param_1._2_2_) &&
          ((*(short *)(iVar4 + 4 + iVar1) == 2 && (*(int *)(iVar4 + 8 + iVar1) == param_1._4_4_))))
         && (*(char *)(iVar4 + iVar1) != '\0')) {
        return uVar2;
      }
    }
    if (param_2) {
      uVar2 = GetRemoteSystemIndex(this,&param_1);
      return uVar2;
    }
    uVar2 = *(uint *)(this + 0xc);
    uVar5 = 0;
    if (uVar2 != 0) {
      piVar3 = (int *)(*(int *)(this + 0x22c) + 8);
      do {
        if (((((char)piVar3[-2] != '\0') && (*(short *)((int)piVar3 + -2) == param_1._2_2_)) &&
            ((short)piVar3[-1] == 2)) && (*piVar3 == param_1._4_4_)) {
          return uVar5;
        }
        uVar5 = uVar5 + 1;
        piVar3 = piVar3 + 0x484;
      } while (uVar5 < uVar2);
    }
    uVar5 = 0;
    if (uVar2 != 0) {
      piVar3 = (int *)(*(int *)(this + 0x22c) + 8);
      do {
        if (((*(short *)((int)piVar3 + -2) == param_1._2_2_) && ((short)piVar3[-1] == 2)) &&
           (*piVar3 == param_1._4_4_)) {
          return uVar5;
        }
        uVar5 = uVar5 + 1;
        piVar3 = piVar3 + 0x484;
      } while (uVar5 < uVar2);
    }
  }
  return -1;
}


// protected: enum RakNet::ConnectionAttemptResult __thiscall
// RakNet::RakPeer::SendConnectionRequest(char const *,unsigned short,char const *,int,struct
// RakNet::PublicKey *,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int)

ConnectionAttemptResult __thiscall
RakNet::RakPeer::SendConnectionRequest
          (RakPeer *this,char *param_1,ushort param_2,char *param_3,int param_4,PublicKey *param_5,
          uint param_6,uint param_7,uint param_8,uint param_9,uint param_10)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  HuffmanEncodingTreeNode *pHVar2;
  SystemAddress SVar3;
  bool bVar4;
  u_short uVar5;
  RemoteSystemStruct *pRVar6;
  RequestedConnectionStruct *pRVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  __uint64 _Var11;
  undefined8 uVar12;
  char *pcVar13;
  LPCRITICAL_SECTION p_Var14;
  SystemAddress systemAddress;
  RequestedConnectionStruct *rcs;
  
  systemAddress.debugPort = 0;
  systemAddress.systemIndex = 0xffff;
  systemAddress._2_2_ = 0;
  systemAddress._4_2_ = 0;
  systemAddress._6_2_ = 0;
  systemAddress._8_4_ = 0;
  systemAddress._12_4_ = 0;
  systemAddress.address = (<>)0x2;
  systemAddress._1_1_ = 0;
  bVar4 = SystemAddress::SetBinaryAddress(&systemAddress,param_1,(char)this);
  if (!bVar4) {
    return CANNOT_RESOLVE_DOMAIN_NAME;
  }
  systemAddress._2_2_ = htons(param_2);
  uVar5 = ntohs(systemAddress._2_2_);
  SVar3._2_2_ = systemAddress._2_2_;
  SVar3.address = systemAddress.address;
  SVar3._1_1_ = systemAddress._1_1_;
  SVar3._6_2_ = systemAddress._6_2_;
  SVar3._4_2_ = systemAddress._4_2_;
  systemAddress.debugPort = uVar5;
  SVar3._8_4_ = systemAddress._8_4_;
  SVar3._12_4_ = systemAddress._12_4_;
  SVar3.debugPort = uVar5;
  SVar3.systemIndex = systemAddress.systemIndex;
  pRVar6 = GetRemoteSystemFromSystemAddress(this,SVar3,false,true);
  if (pRVar6 != (RemoteSystemStruct *)0x0) {
    return ALREADY_CONNECTED_TO_ENDPOINT;
  }
  pRVar7 = operator_new(0x150);
  *(undefined4 *)pRVar7 = 0;
  *(undefined4 *)(pRVar7 + 4) = 0;
  *(undefined4 *)(pRVar7 + 8) = 0;
  *(undefined4 *)(pRVar7 + 0xc) = 0;
  *(undefined4 *)(pRVar7 + 0x10) = 0xffff0000;
  *(ushort *)(pRVar7 + 0x12) = systemAddress.systemIndex;
  *(u_short *)(pRVar7 + 0x10) = uVar5;
  *(uint *)pRVar7 = CONCAT22(systemAddress._2_2_,systemAddress._0_2_);
  *(uint *)(pRVar7 + 4) = CONCAT22(systemAddress._6_2_,systemAddress._4_2_);
  *(undefined4 *)(pRVar7 + 8) = systemAddress._8_4_;
  *(undefined4 *)(pRVar7 + 0xc) = systemAddress._12_4_;
  rcs = pRVar7;
  _Var11 = GetTimeUS_Windows();
  uVar12 = __aulldiv((uint)_Var11,(uint)(_Var11 >> 0x20),1000,0);
  *(int *)(pRVar7 + 0x18) = (int)uVar12;
  *(undefined4 *)(pRVar7 + 0x1c) = 0;
  pRVar7[0x20] = (RequestedConnectionStruct)0x0;
  *(undefined4 *)(pRVar7 + 0x24) = 0;
  *(undefined4 *)(pRVar7 + 0x144) = 0;
  *(undefined4 *)(pRVar7 + 0x130) = 0;
  *(uint *)(pRVar7 + 300) = param_6;
  *(undefined4 *)(pRVar7 + 0x148) = 1;
  *(uint *)(pRVar7 + 0x134) = param_8;
  *(uint *)(pRVar7 + 0x138) = param_9;
  memcpy(pRVar7 + 0x2a,param_3,param_4);
  pRVar7[0x12a] = SUB41(param_4,0);
  *(uint *)(pRVar7 + 0x13c) = param_10;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x2f4);
  uVar10 = 0;
  pcVar13 = (char *)0x5a4bec;
  p_Var14 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  do {
    uVar1 = *(uint *)(this + 0x2e8);
    if (*(uint *)(this + 0x2ec) < uVar1) {
      iVar9 = *(int *)(this + 0x2f0) - uVar1;
    }
    else {
      iVar9 = -uVar1;
    }
    if (*(uint *)(this + 0x2ec) + iVar9 <= uVar10) {
      DataStructures::Queue<>::Push
                ((Queue<> *)(this + 0x2e4),(HuffmanEncodingTreeNode **)&rcs,pcVar13,(uint)p_Var14);
      LeaveCriticalSection(lpCriticalSection);
      return CONNECTION_ATTEMPT_STARTED;
    }
    uVar8 = uVar1 + uVar10;
    if (*(uint *)(this + 0x2f0) <= uVar8) {
      uVar8 = (uVar1 - *(uint *)(this + 0x2f0)) + uVar10;
    }
    pHVar2 = ((Queue<> *)(this + 0x2e4))->array[uVar8];
    if (*(short *)&pHVar2->field_0x2 == systemAddress._2_2_) {
      if ((*(short *)pHVar2 == 2) &&
         (pHVar2->weight == CONCAT22(systemAddress._6_2_,systemAddress._4_2_))) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (!bVar4) goto LAB_005a4c51;
      bVar4 = true;
    }
    else {
LAB_005a4c51:
      bVar4 = false;
    }
    if (bVar4) {
      LeaveCriticalSection(lpCriticalSection);
      operator_delete(pRVar7,(nothrow_t *)0x150);
      return CONNECTION_ATTEMPT_ALREADY_IN_PROGRESS;
    }
    uVar10 = uVar10 + 1;
  } while( true );
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// protected: enum RakNet::ConnectionAttemptResult __thiscall
// RakNet::RakPeer::SendConnectionRequest(char const *,unsigned short,char const *,int,struct
// RakNet::PublicKey *,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,class
// RakNet::RakNetSocket2 *)

ConnectionAttemptResult __thiscall
RakNet::RakPeer::SendConnectionRequest
          (RakPeer *this,char *param_1,ushort param_2,char *param_3,int param_4,PublicKey *param_5,
          uint param_6,uint param_7,uint param_8,uint param_9,uint param_10,RakNetSocket2 *param_11)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  HuffmanEncodingTreeNode *pHVar2;
  SystemAddress SVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  u_short uVar7;
  RemoteSystemStruct *pRVar8;
  RequestedConnectionStruct *pRVar9;
  uint uVar10;
  int iVar11;
  ushort uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  __uint64 _Var16;
  undefined8 uVar17;
  char *pcVar18;
  LPCRITICAL_SECTION p_Var19;
  SystemAddress systemAddress;
  RequestedConnectionStruct *rcs;
  
  systemAddress.debugPort = 0;
  systemAddress.systemIndex = 0xffff;
  systemAddress._2_2_ = 0;
  systemAddress._4_2_ = 0;
  systemAddress._6_2_ = 0;
  systemAddress._8_4_ = 0;
  systemAddress._12_4_ = 0;
  systemAddress.address = (<>)0x2;
  systemAddress._1_1_ = 0;
  bVar6 = SystemAddress::SetBinaryAddress(&systemAddress,param_1,(char)this);
  if (bVar6) {
    systemAddress._2_2_ = htons(param_2);
    uVar7 = ntohs(systemAddress._2_2_);
    uVar14 = CONCAT22(systemAddress._2_2_,systemAddress._0_2_);
    uVar15 = CONCAT22(systemAddress._6_2_,systemAddress._4_2_);
    uVar12 = systemAddress.systemIndex;
  }
  else {
    systemAddress._0_2_ = SUB42(_DAT_006578e0,0);
    systemAddress._2_2_ = SUB42((uint)_DAT_006578e0 >> 0x10,0);
    systemAddress._4_2_ = SUB42(DAT_006578e4,0);
    systemAddress._6_2_ = SUB42((uint)DAT_006578e4 >> 0x10,0);
    systemAddress._8_4_ = uRam006578e8;
    systemAddress._12_4_ = uRam006578ec;
    systemAddress._16_4_ = (uint)DAT_006578f2 << 0x10;
    uVar14 = _DAT_006578e0;
    uVar15 = DAT_006578e4;
    uVar12 = DAT_006578f2;
    uVar7 = DAT_006578f0;
  }
  uVar5 = systemAddress._12_4_;
  uVar4 = systemAddress._8_4_;
  systemAddress.debugPort = uVar7;
  SVar3._4_4_ = uVar15;
  SVar3._0_4_ = uVar14;
  SVar3._8_4_ = systemAddress._8_4_;
  SVar3._12_4_ = systemAddress._12_4_;
  SVar3.debugPort = uVar7;
  SVar3.systemIndex = systemAddress.systemIndex;
  pRVar8 = GetRemoteSystemFromSystemAddress(this,SVar3,false,true);
  if (pRVar8 != (RemoteSystemStruct *)0x0) {
    return ALREADY_CONNECTED_TO_ENDPOINT;
  }
  pRVar9 = operator_new(0x150);
  *(undefined4 *)pRVar9 = 0;
  *(undefined4 *)(pRVar9 + 4) = 0;
  *(undefined4 *)(pRVar9 + 8) = 0;
  *(undefined4 *)(pRVar9 + 0xc) = 0;
  *(undefined4 *)(pRVar9 + 0x10) = 0xffff0000;
  *(ushort *)(pRVar9 + 0x12) = uVar12;
  *(u_short *)(pRVar9 + 0x10) = uVar7;
  *(undefined4 *)pRVar9 = uVar14;
  *(undefined4 *)(pRVar9 + 4) = uVar15;
  *(undefined4 *)(pRVar9 + 8) = uVar4;
  *(undefined4 *)(pRVar9 + 0xc) = uVar5;
  rcs = pRVar9;
  _Var16 = GetTimeUS_Windows();
  uVar17 = __aulldiv((uint)_Var16,(uint)(_Var16 >> 0x20),1000,0);
  *(int *)(pRVar9 + 0x18) = (int)uVar17;
  *(undefined4 *)(pRVar9 + 0x1c) = 0;
  pRVar9[0x20] = (RequestedConnectionStruct)0x0;
  *(undefined4 *)(pRVar9 + 0x24) = 0;
  *(undefined4 *)(pRVar9 + 0x144) = 0;
  *(undefined4 *)(pRVar9 + 0x130) = 0;
  *(undefined4 *)(pRVar9 + 300) = 0;
  *(undefined4 *)(pRVar9 + 0x148) = 1;
  *(uint *)(pRVar9 + 0x134) = param_8;
  *(uint *)(pRVar9 + 0x138) = param_9;
  memcpy(pRVar9 + 0x2a,param_3,param_4);
  pRVar9[0x12a] = SUB41(param_4,0);
  *(uint *)(pRVar9 + 0x13c) = param_10;
  *(RakNetSocket2 **)(pRVar9 + 0x144) = param_11;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x2f4);
  uVar13 = 0;
  pcVar18 = (char *)0x5a4e26;
  p_Var19 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  do {
    uVar1 = *(uint *)(this + 0x2e8);
    if (*(uint *)(this + 0x2ec) < uVar1) {
      iVar11 = *(int *)(this + 0x2f0) - uVar1;
    }
    else {
      iVar11 = -uVar1;
    }
    if (*(uint *)(this + 0x2ec) + iVar11 <= uVar13) {
      DataStructures::Queue<>::Push
                ((Queue<> *)(this + 0x2e4),(HuffmanEncodingTreeNode **)&rcs,pcVar18,(uint)p_Var19);
      LeaveCriticalSection(lpCriticalSection);
      return CONNECTION_ATTEMPT_STARTED;
    }
    uVar10 = uVar1 + uVar13;
    if (*(uint *)(this + 0x2f0) <= uVar10) {
      uVar10 = (uVar1 - *(uint *)(this + 0x2f0)) + uVar13;
    }
    pHVar2 = ((Queue<> *)(this + 0x2e4))->array[uVar10];
    if (*(short *)&pHVar2->field_0x2 == systemAddress._2_2_) {
      if ((*(short *)pHVar2 == 2) &&
         (pHVar2->weight == CONCAT22(systemAddress._6_2_,systemAddress._4_2_))) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      if (!bVar6) goto LAB_005a4e8b;
      bVar6 = true;
    }
    else {
LAB_005a4e8b:
      bVar6 = false;
    }
    if (bVar6) {
      LeaveCriticalSection(lpCriticalSection);
      operator_delete(pRVar9,(nothrow_t *)0x150);
      return CONNECTION_ATTEMPT_ALREADY_IN_PROGRESS;
    }
    uVar13 = uVar13 + 1;
  } while( true );
}


// protected: struct RakNet::RakPeer::RemoteSystemStruct * __thiscall
// RakNet::RakPeer::GetRemoteSystem(struct RakNet::AddressOrGUID,bool,bool)const 

RemoteSystemStruct * __thiscall
RakNet::RakPeer::GetRemoteSystem(RakPeer *this,AddressOrGUID param_1,bool param_2,bool param_3)

{
  RemoteSystemStruct *pRVar1;
  
  if (((int)param_1.rakNetGuid.g == DAT_00657908) && (param_1.rakNetGuid.g._4_4_ == DAT_0065790c)) {
    pRVar1 = GetRemoteSystemFromSystemAddress(this,param_1.systemAddress,param_2,param_3);
    return pRVar1;
  }
  pRVar1 = GetRemoteSystemFromGUID(this,param_1.rakNetGuid,param_3);
  return pRVar1;
}


// protected: struct RakNet::RakPeer::RemoteSystemStruct * __thiscall
// RakNet::RakPeer::GetRemoteSystemFromSystemAddress(struct RakNet::SystemAddress,bool,bool)const 

RemoteSystemStruct * __thiscall
RakNet::RakPeer::GetRemoteSystemFromSystemAddress
          (RakPeer *this,SystemAddress param_1,bool param_2,bool param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  if (((param_1._2_2_ != DAT_006578f6) || (param_1._0_2_ != 2)) || (param_1._4_4_ != DAT_006578f8))
  {
    if (param_2) {
      uVar1 = GetRemoteSystemIndex(this,&param_1);
      if (uVar1 != 0xffffffff) {
        if ((!param_3) || (*(char *)(uVar1 * 0x1210 + *(int *)(this + 0x22c)) == '\x01')) {
          return (RemoteSystemStruct *)(*(int *)(this + 0x22c) + uVar1 * 0x1210);
        }
      }
    }
    else {
      uVar1 = 0xffffffff;
      uVar3 = 0;
      if (*(uint *)(this + 0xc) != 0) {
        piVar2 = (int *)(*(int *)(this + 0x22c) + 8);
        do {
          if (((*(short *)((int)piVar2 + -2) == param_1._2_2_) && ((short)piVar2[-1] == 2)) &&
             (*piVar2 == param_1._4_4_)) {
            if ((char)piVar2[-2] != '\0') {
              return (RemoteSystemStruct *)(piVar2 + -2);
            }
            if (uVar1 == 0xffffffff) {
              uVar1 = uVar3;
            }
          }
          uVar3 = uVar3 + 1;
          piVar2 = piVar2 + 0x484;
        } while (uVar3 < *(uint *)(this + 0xc));
        if ((uVar1 != 0xffffffff) && (!param_3)) {
          return (RemoteSystemStruct *)(uVar1 * 0x1210 + *(int *)(this + 0x22c));
        }
      }
    }
  }
  return (RemoteSystemStruct *)0x0;
}


// protected: struct RakNet::RakPeer::RemoteSystemStruct * __thiscall
// RakNet::RakPeer::GetRemoteSystemFromGUID(struct RakNet::RakNetGUID,bool)const 

RemoteSystemStruct * __thiscall
RakNet::RakPeer::GetRemoteSystemFromGUID(RakPeer *this,RakNetGUID param_1,bool param_2)

{
  RemoteSystemStruct *pRVar1;
  uint uVar2;
  
  if (((int)param_1.g != DAT_00657908) || (param_1.g._4_4_ != DAT_0065790c)) {
    uVar2 = 0;
    if (*(uint *)(this + 0xc) != 0) {
      pRVar1 = *(RemoteSystemStruct **)(this + 0x22c);
      do {
        if ((*(int *)(pRVar1 + 0x11f0) == (int)param_1.g) &&
           (*(int *)(pRVar1 + 0x11f4) == param_1.g._4_4_)) {
          if (!param_2) {
            return pRVar1;
          }
          if (*pRVar1 != (RemoteSystemStruct)0x0) {
            return pRVar1;
          }
        }
        uVar2 = uVar2 + 1;
        pRVar1 = pRVar1 + 0x1210;
      } while (uVar2 < *(uint *)(this + 0xc));
    }
  }
  return (RemoteSystemStruct *)0x0;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// protected: void __thiscall RakNet::RakPeer::ParseConnectionRequestPacket(struct
// RakNet::RakPeer::RemoteSystemStruct *,struct RakNet::SystemAddress const &,char const *,int)

void __thiscall
RakNet::RakPeer::ParseConnectionRequestPacket
          (RakPeer *this,RemoteSystemStruct *param_1,SystemAddress *param_2,char *param_3,
          int param_4)

{
  AddressOrGUID AVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uchar *puVar4;
  uint uVar5;
  RakPeer *pRVar6;
  __uint64 *p_Var7;
  bool extraout_CL;
  uint uVar8;
  RakPeer *pRVar9;
  code *pcVar10;
  __uint64 _Var11;
  RakNetGUID in_stack_fffffd6c;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined4 uVar17;
  BitStream bs;
  BitStream bitStream;
  RakNetGUID guid;
  uchar doSecurity;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cd916;
  local_10 = ExceptionList;
  uVar5 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar5;
  memset(&bs,0,0x114);
  bs.numberOfBitsUsed = param_4 * 8;
  bs.copyData = false;
  bs.data = (uchar *)param_3;
  local_8 = 0;
  guid.g._0_4_ = DAT_006578d0;
  guid.g._4_4_ = DAT_006578d4;
  guid.systemIndex = DAT_006578d8;
  bs.readOffset = 8;
  bs.numberOfBitsAllocated = bs.numberOfBitsUsed;
  BitStream::Read<>(&bs,&guid.g);
  BitStream::Read<>(&bs,(__uint64 *)&guid.systemIndex);
  BitStream::ReadBits(&bs,&doSecurity,8,extraout_CL);
  uVar8 = bs.readOffset + 7 >> 3;
  pRVar9 = (RakPeer *)(bs.data + uVar8);
  if ((uint)(byte)this[0x228] == param_4 - uVar8) {
    pRVar6 = this + 0x128;
    uVar8 = (uint)(byte)this[0x228];
    while (uVar3 = uVar8 - 4, 3 < uVar8) {
      if (*(int *)pRVar9 != *(int *)pRVar6) goto LAB_005a51b6;
      pRVar9 = pRVar9 + 4;
      pRVar6 = pRVar6 + 4;
      uVar8 = uVar3;
    }
    if (uVar3 != 0xfffffffc) {
LAB_005a51b6:
      if ((*pRVar9 != *pRVar6) ||
         ((uVar3 != 0xfffffffd &&
          ((pRVar9[1] != pRVar6[1] ||
           ((uVar3 != 0xfffffffe &&
            ((pRVar9[2] != pRVar6[2] || ((uVar3 != 0xffffffff && (pRVar9[3] != pRVar6[3]))))))))))))
      goto LAB_005a5248;
    }
    *(undefined4 *)(param_1 + 0x120c) = 5;
    OnConnectionRequest(this,param_1,CONCAT44(uVar5,guid._12_4_));
    pcVar10 = free_exref;
  }
  else {
LAB_005a5248:
    uVar16 = 0x14;
    memset(&bitStream,0,0x114);
    bitStream.data = bitStream.stackData;
    bitStream.numberOfBitsUsed = 0;
    bitStream.numberOfBitsAllocated = 0x800;
    bitStream.readOffset = 0;
    bitStream.copyData = true;
    local_8 = CONCAT31(local_8._1_3_,1);
    doSecurity = '\x18';
    BitStream::WriteBits(&bitStream,&doSecurity,8,(bool)uVar16);
    uVar12._0_1_ = (<>)0xcb;
    uVar12._1_3_ = 0x5a52;
    uVar13 = _DAT_006578f4;
    uVar14 = DAT_006578f8;
    uVar17 = uRam006578fc;
    p_Var7 = (__uint64 *)(**(code **)(*(int *)this + 0xd0))();
    uVar15 = (undefined1)uVar17;
    uVar16 = (undefined1)uVar14;
    uVar14._0_2_ = 0x52d7;
    uVar14._2_2_ = 0x5a;
    BitStream::Write<>(&bitStream,p_Var7);
    uVar17 = 0x5a52dc;
    _Var11 = GetTimeUS_Windows();
    puVar4 = bitStream.data;
    uVar8 = bitStream.numberOfBitsUsed + 7;
    AddressOrGUID::AddressOrGUID((AddressOrGUID *)&stack0xfffffd6c,param_2);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = _Var11;
    auVar2 = auVar2 << 0x20;
    AVar1.systemAddress._0_16_ = in_stack_fffffd6c;
    AVar1.rakNetGuid.g = auVar2._0_8_;
    AVar1.rakNetGuid.systemIndex = auVar2._8_2_;
    AVar1.rakNetGuid._10_6_ = auVar2._10_6_;
    AVar1.systemAddress._16_4_ = uVar12;
    AVar1._36_4_ = uVar13;
    SendImmediate(this,(char *)puVar4,uVar8 >> 3,IMMEDIATE_PRIORITY,RELIABLE,'\0',AVar1,(bool)uVar16
                  ,(bool)uVar15,CONCAT44(uVar17,uVar14),uVar5);
    *(undefined4 *)(param_1 + 0x120c) = 2;
    pcVar10 = free_exref;
    if ((bitStream.copyData != false) && (0x800 < bitStream.numberOfBitsAllocated)) {
      free(bitStream.data);
    }
  }
  if ((bs.copyData != false) && (0x800 < bs.numberOfBitsAllocated)) {
    (*pcVar10)();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// protected: void __thiscall RakNet::RakPeer::OnConnectionRequest(struct
// RakNet::RakPeer::RemoteSystemStruct *,unsigned __int64)

void __thiscall
RakNet::RakPeer::OnConnectionRequest(RakPeer *this,RemoteSystemStruct *param_1,__uint64 param_2)

{
  AddressOrGUID AVar1;
  undefined1 auVar2 [16];
  SystemAddress SVar3;
  ulonglong uVar4;
  int iVar5;
  bool extraout_CL;
  bool extraout_CL_00;
  bool extraout_CL_01;
  bool extraout_CL_02;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar6;
  ushort uVar7;
  RakPeer *pRVar8;
  uint unaff_EDI;
  int iVar9;
  __uint64 _Var10;
  undefined4 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined2 uVar24;
  __uint64 *p_Var25;
  undefined2 uStack_146;
  BitStream bitStream;
  undefined4 local_1c;
  ushort systemIndex;
  undefined2 uStack_16;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cd94b;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar21 = 0x14;
  memset(&bitStream,0,0x114);
  bitStream.data = bitStream.stackData;
  bitStream.numberOfBitsUsed = 0;
  bitStream.numberOfBitsAllocated = 0x800;
  bitStream.readOffset = 0;
  bitStream.copyData = true;
  local_8 = 0;
  _local_1c = CONCAT17(0x10,_local_1c);
  BitStream::WriteBits(&bitStream,(uchar *)((int)register0x00000010 + -0x15),8,(bool)uVar21);
  _local_1c = CONCAT17((*(short *)(param_1 + 4) != 2) * '\x02' + '\x04',_local_1c);
  BitStream::WriteBits(&bitStream,(uchar *)((int)register0x00000010 + -0x15),8,extraout_CL);
  if (*(short *)(param_1 + 4) == 2) {
    uVar6 = *(undefined4 *)(param_1 + 4);
    _local_1c = CONCAT44(~*(uint *)(param_1 + 8),local_1c);
    BitStream::WriteBits(&bitStream,(uchar *)&systemIndex,0x20,extraout_CL_00);
    uStack_146 = (undefined2)((uint)uVar6 >> 0x10);
    _local_1c = (__uint64)CONCAT24(uStack_146,local_1c);
    BitStream::WriteBits(&bitStream,(uchar *)&systemIndex,0x10,extraout_CL_01);
  }
  uVar14 = *(undefined2 *)(param_1 + 4);
  uVar15 = *(undefined2 *)(param_1 + 6);
  uVar13 = 0x5a;
  SVar3._13_1_ = (char)((ushort)*(undefined2 *)(param_1 + 0x10) >> 8);
  SVar3._0_13_ = *(undefined1 (*) [13])(param_1 + 4);
  SVar3._14_2_ = *(undefined2 *)(param_1 + 0x12);
  SVar3._16_4_ = *(undefined4 *)(param_1 + 0x14);
  iVar5 = GetIndexFromSystemAddress(this,SVar3,true);
  _local_1c = CONCAT44(iVar5,local_1c) & 0xffffffffffff;
  iVar9 = *(int *)ThreadLocalStoragePointer;
  uVar7 = (ushort)iVar5;
  if (*(int *)(iVar9 + 4) < DAT_006629a4) {
    __Init_thread_header(&DAT_006629a4);
    iVar9 = extraout_ECX;
    if (DAT_006629a4 == -1) {
      DAT_006629a0 = htonl(0x3039);
      __Init_thread_footer(&DAT_006629a4);
      iVar9 = extraout_ECX_00;
    }
    uVar7 = systemIndex;
  }
  uVar4 = _local_1c;
  if (DAT_006629a0 != 0x3039) {
    uStack_16 = SUB82(uVar4,6);
    _local_1c = CONCAT15((char)uVar7,CONCAT14((char)(uVar7 >> 8),local_1c));
  }
  BitStream::WriteBits(&bitStream,(uchar *)&systemIndex,0x10,SUB41(iVar9,0));
  pRVar8 = this + 0x494;
  iVar9 = 10;
  uVar6 = extraout_ECX_01;
  do {
    _local_1c = CONCAT17((*(short *)pRVar8 != 2) * '\x02' + '\x04',_local_1c);
    BitStream::WriteBits(&bitStream,(uchar *)((int)register0x00000010 + -0x15),8,SUB41(uVar6,0));
    uVar6 = extraout_ECX_02;
    if (*(short *)pRVar8 == 2) {
      uVar6 = *(undefined4 *)pRVar8;
      _local_1c = CONCAT44(~*(uint *)(pRVar8 + 4),local_1c);
      BitStream::WriteBits(&bitStream,(uchar *)&systemIndex,0x20,SUB41(extraout_ECX_02,0));
      uStack_146 = (undefined2)((uint)uVar6 >> 0x10);
      _local_1c = (__uint64)CONCAT24(uStack_146,local_1c);
      BitStream::WriteBits(&bitStream,(uchar *)&systemIndex,0x10,extraout_CL_02);
      uVar6 = extraout_ECX_03;
    }
    pRVar8 = pRVar8 + 0x14;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  BitStream::Write<>(&bitStream,(__uint64 *)&stack0x00000008);
  _Var10 = GetTimeUS_Windows();
  _local_1c = __aulldiv((uint)_Var10,(uint)(_Var10 >> 0x20),1000,0);
  p_Var25 = (__uint64 *)&stack0xffffffe4;
  BitStream::Write<>(&bitStream,p_Var25);
  uVar21 = (undefined1)*(undefined4 *)(param_1 + 0x10);
  uVar16 = (undefined2)*(undefined4 *)(param_1 + 4);
  uVar17 = (undefined2)((uint)*(undefined4 *)(param_1 + 4) >> 0x10);
  uVar18 = (undefined2)*(undefined4 *)(param_1 + 8);
  uVar19 = (undefined2)((uint)*(undefined4 *)(param_1 + 8) >> 0x10);
  uVar20 = (undefined1)*(undefined4 *)(param_1 + 0xc);
  uVar24 = *(undefined2 *)(param_1 + 0x16);
  uVar22 = (undefined1)*(undefined2 *)(param_1 + 0x14);
  uVar23 = (undefined1)((ushort)*(undefined2 *)(param_1 + 0x14) >> 8);
  uVar6 = DAT_00657908;
  uVar11 = DAT_0065790c;
  uVar12 = DAT_00657910;
  _Var10 = GetTimeUS_Windows();
  auVar2._8_8_ = 0;
  auVar2._0_8_ = _Var10;
  auVar2 = auVar2 << 0x20;
  AVar1.systemAddress._0_4_ = uVar6;
  AVar1.rakNetGuid.g = auVar2._0_8_;
  AVar1.rakNetGuid.systemIndex = auVar2._8_2_;
  AVar1.rakNetGuid._10_6_ = auVar2._10_6_;
  AVar1.systemAddress._4_4_ = uVar11;
  AVar1.systemAddress._8_2_ = uVar12;
  AVar1.systemAddress._10_2_ = uVar13;
  AVar1.systemAddress._12_2_ = uVar14;
  AVar1.systemAddress._14_2_ = uVar15;
  AVar1.systemAddress.debugPort = uVar16;
  AVar1.systemAddress.systemIndex = uVar17;
  AVar1._36_2_ = uVar18;
  AVar1._38_2_ = uVar19;
  SendImmediate(this,(char *)bitStream.data,bitStream.numberOfBitsUsed,IMMEDIATE_PRIORITY,
                RELIABLE_ORDERED,'\0',AVar1,(bool)uVar20,(bool)uVar21,
                CONCAT44(p_Var25,CONCAT22(uVar24,CONCAT11(uVar23,uVar22))),unaff_EDI);
  if ((bitStream.copyData != false) && (0x800 < bitStream.numberOfBitsAllocated)) {
    free(bitStream.data);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// protected: void __thiscall RakNet::RakPeer::NotifyAndFlagForShutdown(struct
// RakNet::SystemAddress,bool,unsigned char,enum PacketPriority)

void __thiscall
RakNet::RakPeer::NotifyAndFlagForShutdown
          (RakPeer *this,SystemAddress param_1,bool param_2,uchar param_3,PacketPriority param_4)

{
  AddressOrGUID AVar1;
  undefined1 auVar2 [16];
  AddressOrGUID AVar3;
  SystemAddress SVar4;
  uint uVar5;
  uchar *puVar6;
  uint uVar7;
  RemoteSystemStruct *pRVar8;
  __uint64 _Var9;
  undefined4 in_stack_fffffe88;
  undefined4 in_stack_fffffe8c;
  __uint64 in_stack_fffffe90;
  undefined4 in_stack_fffffe98;
  undefined4 in_stack_fffffe9c;
  undefined4 in_stack_fffffea0;
  undefined4 in_stack_fffffea4;
  undefined1 uVar10;
  undefined4 uVar11;
  uchar *puVar12;
  undefined4 uVar13;
  bool bVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  ConnectMode CVar17;
  uint uVar18;
  uchar local_129;
  BitStream temp;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cd98b;
  local_10 = ExceptionList;
  uVar7 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar15 = 0x14;
  uVar18 = uVar7;
  memset(&temp,0,0x114);
  temp.data = temp.stackData;
  temp.numberOfBitsUsed = 0;
  temp.readOffset = 0;
  temp.numberOfBitsAllocated = 0x800;
  temp.copyData = true;
  local_8 = 0;
  puVar12 = &local_129;
  local_129 = '\x15';
  uVar13._0_2_ = 8;
  uVar13._2_2_ = 0;
  uVar11 = 0x5a575c;
  BitStream::WriteBits(&temp,puVar12,8,(bool)uVar15);
  puVar6 = temp.data;
  uVar5 = temp.numberOfBitsUsed;
  uVar15 = SUB41(puVar12,0);
  if (param_2) {
    uVar16 = 0x5a576b;
    _Var9 = GetTimeUS_Windows();
    puVar12 = temp.data;
    uVar5 = temp.numberOfBitsUsed;
    uVar10 = (undefined1)uVar11;
    AddressOrGUID::AddressOrGUID((AddressOrGUID *)&stack0xfffffe90,&param_1);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = _Var9;
    auVar2 = auVar2 << 0x20;
    AVar1.systemAddress._0_8_ = in_stack_fffffe90;
    AVar1.rakNetGuid.g = auVar2._0_8_;
    AVar1.rakNetGuid.systemIndex = auVar2._8_2_;
    AVar1.rakNetGuid._10_6_ = auVar2._10_6_;
    AVar1.systemAddress._8_4_ = in_stack_fffffe98;
    AVar1.systemAddress._12_4_ = in_stack_fffffe9c;
    AVar1.systemAddress._16_4_ = in_stack_fffffea0;
    AVar1._36_4_ = in_stack_fffffea4;
    SendImmediate(this,(char *)puVar12,uVar5,param_4,RELIABLE_ORDERED,param_3,AVar1,(bool)uVar10,
                  (bool)uVar15,CONCAT44(uVar16,uVar13),uVar18);
    SVar4._4_4_ = param_1._4_4_;
    SVar4.address = param_1.address;
    SVar4._1_3_ = param_1._1_3_;
    SVar4._8_4_ = param_1._8_4_;
    SVar4._12_4_ = param_1._12_4_;
    SVar4.debugPort = param_1.debugPort;
    SVar4.systemIndex = param_1.systemIndex;
    pRVar8 = GetRemoteSystemFromSystemAddress(this,SVar4,true,true);
    *(undefined4 *)(pRVar8 + 0x120c) = 1;
  }
  else {
    CVar17 = NO_ACTION;
    bVar14 = true;
    uVar13 = 0;
    AddressOrGUID::AddressOrGUID((AddressOrGUID *)&stack0xfffffe84,&param_1);
    AVar3.rakNetGuid.g._4_2_ = (ushort)in_stack_fffffe8c;
    AVar3.rakNetGuid.g._6_2_ = SUB42(in_stack_fffffe8c,2);
    AVar3.rakNetGuid.g._0_4_ = in_stack_fffffe88;
    AVar3.rakNetGuid._8_8_ = in_stack_fffffe90;
    AVar3.systemAddress.address = (<>)(char)in_stack_fffffe98;
    AVar3.systemAddress._1_3_ = SUB43(in_stack_fffffe98,1);
    AVar3.systemAddress._4_4_ = in_stack_fffffe9c;
    AVar3.systemAddress._8_1_ = SUB41(in_stack_fffffea0,0);
    AVar3.systemAddress._9_3_ = SUB43(in_stack_fffffea0,1);
    AVar3.systemAddress._12_4_ = in_stack_fffffea4;
    AVar3.systemAddress.debugPort = (short)uVar11;
    AVar3.systemAddress.systemIndex = SUB42(uVar11,2);
    AVar3._36_4_ = uVar13;
    SendBuffered(this,(char *)puVar6,uVar5,param_4,RELIABLE_ORDERED,param_3,AVar3,bVar14,CVar17,
                 uVar18);
  }
  if ((temp.copyData != false) && (0x800 < temp.numberOfBitsAllocated)) {
    free(temp.data);
  }
  ExceptionList = local_10;
  __security_check_cookie(uVar7 ^ (uint)&stack0xfffffffc);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// protected: struct RakNet::RakPeer::RemoteSystemStruct * __thiscall
// RakNet::RakPeer::AssignSystemAddressToRemoteSystemList(struct RakNet::SystemAddress,enum
// RakNet::RakPeer::RemoteSystemStruct::ConnectMode,class RakNet::RakNetSocket2 *,bool *,struct
// RakNet::SystemAddress,int,struct RakNet::RakNetGUID,bool)

RemoteSystemStruct * __thiscall
RakNet::RakPeer::AssignSystemAddressToRemoteSystemList
          (RakPeer *this,SystemAddress param_1,ConnectMode param_2,RakNetSocket2 *param_3,
          bool *param_4,SystemAddress param_5,int param_6,RakNetGUID param_7,bool param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  short *psVar5;
  RemoteSystemStruct *pRVar6;
  RakPeer *pRVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  bool *pbVar11;
  __uint64 _Var12;
  undefined8 uVar13;
  AddressOrGUID local_150;
  int local_124;
  RakPeer *local_120;
  bool *local_11c;
  uint local_118;
  uint local_114;
  char local_110 [260];
  uint local_c;
  
  local_c = ___security_cookie ^ (uint)&stack0xfffffffc;
  local_11c = param_4;
  local_120 = this;
  _Var12 = GetTimeUS_Windows();
  uVar13 = __aulldiv((uint)_Var12,(uint)(_Var12 >> 0x20),1000,0);
  uVar4 = (uint)uVar13;
  local_118 = uVar4;
  if (this[0x56c] != (RakPeer)0x0) {
    AddressOrGUID::AddressOrGUID(&local_150,&param_1);
    bVar3 = IsLoopbackAddress(this,&local_150,false);
    if (!bVar3) {
      local_114 = *(uint *)(this + 0xc);
      uVar10 = 0;
      if (local_114 != 0) {
        psVar5 = (short *)(*(int *)(this + 0x22c) + 4);
        do {
          if (((((char)psVar5[-2] == '\x01') && (*psVar5 == 2)) &&
              (*(int *)(psVar5 + 2) == param_1._4_4_)) &&
             ((uVar4 = *(uint *)(psVar5 + 0x8f2), *(int *)(psVar5 + 0x8f4) == 0 &&
              (uVar4 <= local_118)))) {
            local_124 = -(uint)(local_118 < uVar4);
            if ((local_124 == 0) && (local_118 - uVar4 < 100)) {
              *local_11c = true;
              goto LAB_005a5991;
            }
          }
          uVar10 = uVar10 + 1;
          psVar5 = psVar5 + 0x908;
          this = local_120;
          uVar4 = local_118;
        } while (uVar10 < local_114);
      }
    }
  }
  param_5._2_2_ = SUB42((uint)*(undefined4 *)(param_3 + 0xc) >> 0x10,0);
  param_5.debugPort = (ushort)*(undefined4 *)(param_3 + 0x1c);
  *local_11c = false;
  uVar10 = 0;
  if (*(uint *)(this + 0xc) != 0) {
    pcVar8 = *(char **)(this + 0x22c);
    do {
      if (*pcVar8 == '\0') {
        local_120 = (RakPeer *)(uVar10 * 0x1210);
        pbVar11 = (bool *)(*(char **)(this + 0x22c) + (int)local_120);
        local_11c = pbVar11;
        ReferenceRemoteSystem(this,&param_1,uVar10);
        *(undefined4 *)(pbVar11 + 0x1200) = *(undefined4 *)(this + 0x41c);
        *(undefined4 *)(pbVar11 + 0x11f0) = param_7.g._4_4_;
        *(undefined4 *)(pbVar11 + 0x11f4) = param_7._8_4_;
        pbVar11[0x11f8] = (bool)param_7._12_1_;
        pbVar11[0x11f9] = (bool)param_7._13_1_;
        *pbVar11 = true;
        iVar9 = *(int *)(pbVar11 + 0x1200);
        if (*(int *)(pbVar11 + 0x1200) < param_6) {
          *(int *)(pbVar11 + 0x1200) = param_6;
          iVar9 = param_6;
        }
        ReliabilityLayer::Reset((ReliabilityLayer *)(pbVar11 + 0xf8),true,iVar9,SUB41(iVar9,0));
        *(undefined4 *)(pbVar11 + 0x108) = *(undefined4 *)(this + 0x47c);
        *(ulonglong *)(pbVar11 + 0x110) = (ulonglong)*(uint *)(this + 0x480) * 1000;
        *(undefined4 *)(pbVar11 + 0x9b8) = *(undefined4 *)(this + 0x44c);
        *(int *)(*(int *)(this + 0x230) + *(int *)(this + 0x234) * 4) =
             *(int *)(this + 0x22c) + (int)local_120;
        *(int *)(this + 0x234) = *(int *)(this + 0x234) + 1;
        local_150.systemAddress._4_2_ = *(undefined2 *)(param_3 + 0xc);
        local_150.systemAddress._6_2_ = *(undefined2 *)(param_3 + 0xe);
        local_150.systemAddress._8_4_ = *(undefined4 *)(param_3 + 0x10);
        local_150.systemAddress._12_2_ = *(undefined2 *)(param_3 + 0x14);
        local_150.systemAddress._14_2_ = *(undefined2 *)(param_3 + 0x16);
        local_150.systemAddress.debugPort = *(ushort *)(param_3 + 0x18);
        local_150.systemAddress.systemIndex = *(ushort *)(param_3 + 0x1a);
        if (((local_150.systemAddress._6_2_ == param_5._2_2_) &&
            (local_150.systemAddress._4_2_ == 2)) &&
           (local_150.systemAddress._8_4_ == param_5._4_4_)) goto LAB_005a5b00;
        SystemAddress::ToString(&param_5,true,local_110,(char)local_150.systemAddress._4_2_);
        pRVar7 = this + 0x498;
        uVar10 = 0;
        goto LAB_005a5ad0;
      }
      uVar10 = uVar10 + 1;
      pcVar8 = pcVar8 + 0x1210;
    } while (uVar10 < *(uint *)(this + 0xc));
  }
LAB_005a5991:
  pRVar6 = (RemoteSystemStruct *)__security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return pRVar6;
  while( true ) {
    uVar10 = uVar10 + 1;
    pRVar7 = pRVar7 + 0x14;
    if (9 < uVar10) break;
LAB_005a5ad0:
    pbVar11 = local_11c;
    uVar4 = local_118;
    if ((((*(short *)(pRVar7 + -2) == DAT_006578f6) && (*(short *)(pRVar7 + -4) == 2)) &&
        (*(int *)pRVar7 == DAT_006578f8)) ||
       ((param_5._0_2_ == 2 && (param_5._4_4_ == *(int *)pRVar7)))) break;
  }
LAB_005a5b00:
  *(RakNetSocket2 **)(pbVar11 + 0x1204) = param_3;
  pbVar11[0x1178] = true;
  pbVar11[0x1179] = true;
  pbVar11[0x1188] = true;
  pbVar11[0x1189] = true;
  pbVar11[0x1198] = true;
  pbVar11[0x1199] = true;
  pbVar11[0x11a8] = true;
  pbVar11[0x11a9] = true;
  pbVar11[0x11b8] = true;
  pbVar11[0x11b9] = true;
  pbVar11[0x1180] = false;
  pbVar11[0x1181] = false;
  pbVar11[0x1182] = false;
  pbVar11[0x1183] = false;
  pbVar11[0x1184] = false;
  pbVar11[0x1185] = false;
  pbVar11[0x1186] = false;
  pbVar11[0x1187] = false;
  pbVar11[0x1190] = false;
  pbVar11[0x1191] = false;
  pbVar11[0x1192] = false;
  pbVar11[0x1193] = false;
  pbVar11[0x1194] = false;
  pbVar11[0x1195] = false;
  pbVar11[0x1196] = false;
  pbVar11[0x1197] = false;
  pbVar11[0x11a0] = false;
  pbVar11[0x11a1] = false;
  pbVar11[0x11a2] = false;
  pbVar11[0x11a3] = false;
  pbVar11[0x11a4] = false;
  pbVar11[0x11a5] = false;
  pbVar11[0x11a6] = false;
  pbVar11[0x11a7] = false;
  pbVar11[0x11b0] = false;
  pbVar11[0x11b1] = false;
  pbVar11[0x11b2] = false;
  pbVar11[0x11b3] = false;
  pbVar11[0x11b4] = false;
  pbVar11[0x11b5] = false;
  pbVar11[0x11b6] = false;
  pbVar11[0x11b7] = false;
  pbVar11[0x11c0] = false;
  pbVar11[0x11c1] = false;
  pbVar11[0x11c2] = false;
  pbVar11[0x11c3] = false;
  pbVar11[0x11c4] = false;
  pbVar11[0x11c5] = false;
  pbVar11[0x11c6] = false;
  pbVar11[0x11c7] = false;
  pbVar11[0x11d0] = true;
  pbVar11[0x11d1] = true;
  *(uint *)(pbVar11 + 0x11e8) = uVar4;
  pbVar11[0x11ec] = false;
  pbVar11[0x11ed] = false;
  pbVar11[0x11ee] = false;
  pbVar11[0x11ef] = false;
  pbVar11[0x120c] = true;
  pbVar11[0x120d] = false;
  pbVar11[0x120e] = false;
  pbVar11[0x120f] = false;
  pbVar11[0x11c8] = false;
  pbVar11[0x11c9] = false;
  pbVar11[0x11ca] = false;
  pbVar11[0x11cb] = false;
  pbVar11[0x11cc] = false;
  pbVar11[0x11cd] = false;
  pbVar11[0x11ce] = false;
  pbVar11[0x11cf] = false;
  pbVar11[0x11d8] = false;
  pbVar11[0x11d9] = false;
  pbVar11[0x11da] = false;
  pbVar11[0x11db] = false;
  pbVar11[0x11dc] = false;
  pbVar11[0x11dd] = false;
  pbVar11[0x11de] = false;
  pbVar11[0x11df] = false;
  pbVar11[0x1170] = false;
  uVar2 = uRam00657900;
  uVar1 = uRam006578fc;
  iVar9 = DAT_006578f8;
  *(undefined4 *)(pbVar11 + 0x18) = _DAT_006578f4;
  *(int *)(pbVar11 + 0x1c) = iVar9;
  *(undefined4 *)(pbVar11 + 0x20) = uVar1;
  *(undefined4 *)(pbVar11 + 0x24) = uVar2;
  *(undefined2 *)(pbVar11 + 0x2a) = DAT_00657906;
  *(undefined2 *)(pbVar11 + 0x28) = DAT_00657904;
  *(uint *)(pbVar11 + 0x11e0) = uVar4;
  pbVar11[0x11e4] = false;
  pbVar11[0x11e5] = false;
  pbVar11[0x11e6] = false;
  pbVar11[0x11e7] = false;
  pRVar6 = (RemoteSystemStruct *)__security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return pRVar6;
}


// protected: void __thiscall RakNet::RakPeer::ReferenceRemoteSystem(struct RakNet::SystemAddress
// const &,unsigned int)

void __thiscall
RakNet::RakPeer::ReferenceRemoteSystem(RakPeer *this,SystemAddress *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  MessageNumberNode *pMVar8;
  uint unaff_ESI;
  int iVar9;
  uint unaff_EDI;
  uint uVar10;
  SystemAddress oldAddress;
  
  uVar4 = ___security_cookie ^ (uint)&stack0xfffffffc;
  iVar9 = *(int *)(this + 0x22c) + param_2 * 0x1210;
  oldAddress._0_2_ = *(short *)(iVar9 + 4);
  oldAddress._2_2_ = *(short *)(iVar9 + 6);
  oldAddress._4_4_ = *(int *)(iVar9 + 8);
  oldAddress._8_2_ = *(undefined2 *)(iVar9 + 0xc);
  oldAddress._10_2_ = *(undefined2 *)(iVar9 + 0xe);
  oldAddress._12_2_ = *(undefined2 *)(iVar9 + 0x10);
  oldAddress._14_2_ = *(undefined2 *)(iVar9 + 0x12);
  oldAddress._16_4_ = *(undefined4 *)(iVar9 + 0x14);
  if (((oldAddress._2_2_ != DAT_006578f6) || (oldAddress._0_2_ != 2)) ||
     (oldAddress._4_4_ != DAT_006578f8)) {
    uVar5 = GetRemoteSystemIndex(this,&oldAddress);
    if (uVar5 == 0xffffffff) {
      iVar6 = 0;
    }
    else {
      iVar6 = uVar5 * 0x1210 + *(int *)(this + 0x22c);
    }
    if (iVar6 == iVar9) {
      DereferenceRemoteSystem(this,&oldAddress);
    }
  }
  DereferenceRemoteSystem(this,param_1);
  iVar9 = param_2 * 0x1210 + *(int *)(this + 0x22c);
  uVar1 = *(undefined4 *)&param_1->field_0x4;
  uVar2 = *(undefined4 *)&param_1->field_0x8;
  uVar3 = *(undefined4 *)&param_1->field_0xc;
  uVar10 = 2;
  *(undefined4 *)(iVar9 + 4) = *(undefined4 *)param_1;
  *(undefined4 *)(iVar9 + 8) = uVar1;
  *(undefined4 *)(iVar9 + 0xc) = uVar2;
  *(undefined4 *)(iVar9 + 0x10) = uVar3;
  *(ushort *)(iVar9 + 0x16) = param_1->systemIndex;
  *(ushort *)(iVar9 + 0x14) = param_1->debugPort;
  pcVar7 = (char *)SuperFastHashIncremental(&DAT_00000002,unaff_EDI,unaff_ESI);
  uVar5 = SuperFastHashIncremental(pcVar7,uVar10,unaff_EDI);
  iVar9 = *(int *)(this + 0xc);
  pMVar8 = DataStructures::MemoryPool<>::Allocate((MemoryPool<> *)(this + 0x23c),pcVar7,uVar10);
  iVar9 = (uVar5 % (uint)(iVar9 << 3)) * 4;
  iVar6 = *(int *)(iVar9 + *(int *)(this + 0x238));
  if (iVar6 != 0) {
    for (iVar9 = *(int *)(iVar6 + 4); iVar9 != 0; iVar9 = *(int *)(iVar9 + 4)) {
      iVar6 = iVar9;
    }
    pMVar8 = DataStructures::MemoryPool<>::Allocate((MemoryPool<> *)(this + 0x23c),pcVar7,uVar10);
    *(uint *)pMVar8 = param_2;
    *(undefined4 *)(pMVar8 + 4) = 0;
    *(MessageNumberNode **)(iVar6 + 4) = pMVar8;
    __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
    return;
  }
  *(undefined4 *)(pMVar8 + 4) = 0;
  *(uint *)pMVar8 = param_2;
  *(MessageNumberNode **)(iVar9 + *(int *)(this + 0x238)) = pMVar8;
  __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
  return;
}


// protected: void __thiscall RakNet::RakPeer::DereferenceRemoteSystem(struct RakNet::SystemAddress
// const &)

void __thiscall RakNet::RakPeer::DereferenceRemoteSystem(RakPeer *this,SystemAddress *param_1)

{
  int *piVar1;
  undefined4 *_Memory;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint unaff_ESI;
  uint unaff_EDI;
  int iVar7;
  
  iVar7 = 2;
  pcVar2 = (char *)SuperFastHashIncremental(&DAT_00000002,unaff_EDI,unaff_ESI);
  uVar3 = SuperFastHashIncremental(pcVar2,iVar7,unaff_EDI);
  uVar3 = uVar3 % (uint)(*(int *)(this + 0xc) << 3);
  piVar1 = *(int **)(*(int *)(this + 0x238) + uVar3 * 4);
  if (piVar1 != (int *)0x0) {
    iVar7 = *(int *)(this + 0x22c);
    piVar6 = (int *)0x0;
    while (((piVar5 = piVar1, iVar4 = *piVar5 * 0x1210,
            *(short *)(iVar4 + 6 + iVar7) != *(short *)&param_1->field_0x2 ||
            (*(short *)(iVar4 + 4 + iVar7) != 2)) ||
           (piVar1 = (int *)(iVar4 + 8 + iVar7), iVar7 = *(int *)(this + 0x22c),
           *piVar1 != *(int *)&param_1->field_0x4))) {
      piVar1 = (int *)piVar5[1];
      piVar6 = piVar5;
      if ((int *)piVar5[1] == (int *)0x0) {
        return;
      }
    }
    if (piVar6 == (int *)0x0) {
      *(int *)(*(int *)(this + 0x238) + uVar3 * 4) = piVar5[1];
    }
    else {
      piVar6[1] = piVar5[1];
    }
    _Memory = (undefined4 *)piVar5[2];
    if (_Memory[1] == 0) {
      *(undefined4 *)*_Memory = piVar5;
      _Memory[1] = _Memory[1] + 1;
      *(int *)(this + 0x248) = *(int *)(this + 0x248) + -1;
      *(undefined4 *)(_Memory[3] + 0x10) = _Memory[4];
      *(undefined4 *)(_Memory[4] + 0xc) = _Memory[3];
      if ((0 < *(int *)(this + 0x248)) && (_Memory == *(undefined4 **)(this + 0x240))) {
        *(undefined4 *)(this + 0x240) = (*(undefined4 **)(this + 0x240))[3];
      }
      iVar7 = *(int *)(this + 0x244);
      *(int *)(this + 0x244) = iVar7 + 1;
      if (iVar7 == 0) {
        *(undefined4 **)(this + 0x23c) = _Memory;
        _Memory[3] = _Memory;
        _Memory[4] = _Memory;
        return;
      }
      _Memory[3] = *(undefined4 *)(this + 0x23c);
      _Memory[4] = *(undefined4 *)(*(int *)(this + 0x23c) + 0x10);
      *(undefined4 **)(*(int *)(*(int *)(this + 0x23c) + 0x10) + 0xc) = _Memory;
      *(undefined4 **)(*(int *)(this + 0x23c) + 0x10) = _Memory;
      return;
    }
    ((undefined4 *)*_Memory)[_Memory[1]] = piVar5;
    _Memory[1] = _Memory[1] + 1;
    if ((_Memory[1] == *(uint *)(this + 0x24c) / 0xc) && (3 < *(int *)(this + 0x244))) {
      if (_Memory == *(undefined4 **)(this + 0x23c)) {
        *(undefined4 *)(this + 0x23c) = _Memory[3];
      }
      *(undefined4 *)(_Memory[4] + 0xc) = _Memory[3];
      *(undefined4 *)(_Memory[3] + 0x10) = _Memory[4];
      *(int *)(this + 0x244) = *(int *)(this + 0x244) + -1;
      free((void *)*_Memory);
      free((void *)_Memory[2]);
      free(_Memory);
    }
  }
  return;
}


// protected: unsigned int __thiscall RakNet::RakPeer::GetRemoteSystemIndex(struct
// RakNet::SystemAddress const &)const 

uint __thiscall RakNet::RakPeer::GetRemoteSystemIndex(RakPeer *this,SystemAddress *param_1)

{
  char *pcVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint unaff_ESI;
  uint unaff_EDI;
  int iVar5;
  
  iVar5 = 2;
  pcVar1 = (char *)SuperFastHashIncremental(&DAT_00000002,unaff_EDI,unaff_ESI);
  uVar2 = SuperFastHashIncremental(pcVar1,iVar5,unaff_EDI);
  puVar3 = *(uint **)(*(int *)(this + 0x238) + (uVar2 % (uint)(*(int *)(this + 0xc) << 3)) * 4);
  if (puVar3 != (uint *)0x0) {
    iVar5 = *(int *)(this + 0x22c);
    do {
      iVar4 = *puVar3 * 0x1210;
      if (((*(short *)(iVar4 + 6 + iVar5) == *(short *)&param_1->field_0x2) &&
          (*(short *)(iVar4 + 4 + iVar5) == 2)) &&
         (*(int *)(iVar4 + 8 + iVar5) == *(int *)&param_1->field_0x4)) {
        return *puVar3;
      }
      puVar3 = (uint *)puVar3[1];
    } while (puVar3 != (uint *)0x0);
  }
  return 0xffffffff;
}


// protected: bool __thiscall RakNet::RakPeer::IsLoopbackAddress(struct RakNet::AddressOrGUID const
// &,bool)const 

bool __thiscall
RakNet::RakPeer::IsLoopbackAddress(RakPeer *this,AddressOrGUID *param_1,bool param_2)

{
  int iVar1;
  RakPeer *pRVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = (int)(param_1->rakNetGuid).g;
  iVar1 = *(int *)((int)&(param_1->rakNetGuid).g + 4);
  if ((iVar3 != DAT_00657908) || (iVar1 != DAT_0065790c)) {
    if ((iVar3 == *(int *)(this + 0x450)) && (iVar1 == *(int *)(this + 0x454))) {
      return true;
    }
    return false;
  }
  pRVar2 = this + 0x498;
  iVar3 = 0;
  do {
    if (((*(short *)(pRVar2 + -2) == DAT_006578f6) && (*(short *)(pRVar2 + -4) == 2)) &&
       (*(int *)pRVar2 == DAT_006578f8)) break;
    if (((!param_2) || (*(short *)(pRVar2 + -2) == *(short *)&(param_1->systemAddress).field_0x2))
       && ((*(short *)(pRVar2 + -4) == 2 &&
           (*(int *)pRVar2 == *(int *)&(param_1->systemAddress).field_0x4)))) {
      return true;
    }
    iVar3 = iVar3 + 1;
    pRVar2 = pRVar2 + 0x14;
  } while (iVar3 < 10);
  if (param_2) {
    bVar4 = *(short *)&(param_1->systemAddress).field_0x2 == *(short *)(this + 0x46a);
  }
  else {
    bVar4 = !param_2;
  }
  if (((bVar4) && (*(short *)&param_1->systemAddress == 2)) &&
     (*(int *)&(param_1->systemAddress).field_0x4 == *(int *)(this + 0x46c))) {
    return true;
  }
  return false;
}


// protected: bool __thiscall RakNet::RakPeer::AllowIncomingConnections(void)const 

bool __thiscall RakNet::RakPeer::AllowIncomingConnections(RakPeer *this)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if ((*(int *)(this + 0x22c) != 0) && (this[8] != (RakPeer)0x1)) {
    uVar4 = 0;
    uVar2 = 0;
    if (*(uint *)(this + 0x234) != 0) {
      do {
        pcVar1 = *(char **)(*(int *)(this + 0x230) + uVar2 * 4);
        if (((*pcVar1 != '\0') && (*(int *)(pcVar1 + 0x120c) == 7)) && (pcVar1[0x1170] == '\0')) {
          uVar4 = uVar4 + 1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(this + 0x234));
    }
    uVar2 = (**(code **)(*(int *)this + 0x20))();
    return uVar4 < uVar2;
  }
  iVar3 = (**(code **)(*(int *)this + 0x20))();
  return iVar3 != 0;
}


// protected: virtual void __thiscall RakNet::RakPeer::DeallocRNS2RecvStruct(struct
// RakNet::RNS2RecvStruct *,char const *,unsigned int)

void __thiscall
RakNet::RakPeer::DeallocRNS2RecvStruct
          (RakPeer *this,RNS2RecvStruct *param_1,char *param_2,uint param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char *pcVar1;
  LPCRITICAL_SECTION p_Var2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x36c);
  pcVar1 = (char *)0x5a6154;
  p_Var2 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  DataStructures::Queue<>::Push
            ((Queue<> *)(this + 0x35c),(HuffmanEncodingTreeNode **)&param_1,pcVar1,(uint)p_Var2);
  LeaveCriticalSection(lpCriticalSection);
  return;
}


// protected: virtual struct RakNet::RNS2RecvStruct * __thiscall
// RakNet::RakPeer::AllocRNS2RecvStruct(char const *,unsigned int)

RNS2RecvStruct * __thiscall
RakNet::RakPeer::AllocRNS2RecvStruct(RakPeer *this,char *param_1,uint param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  int iVar2;
  RNS2RecvStruct *pRVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x36c);
  EnterCriticalSection(lpCriticalSection);
  uVar1 = *(uint *)(this + 0x360);
  if (*(uint *)(this + 0x364) < uVar1) {
    iVar2 = *(int *)(this + 0x368) - uVar1;
  }
  else {
    iVar2 = -uVar1;
  }
  if (*(uint *)(this + 0x364) + iVar2 == 0) {
    LeaveCriticalSection(lpCriticalSection);
    pRVar3 = operator_new(0x600);
    *(undefined4 *)(pRVar3 + 0x5d8) = 0;
    *(undefined4 *)(pRVar3 + 0x5dc) = 0;
    *(undefined4 *)(pRVar3 + 0x5e0) = 0;
    *(undefined4 *)(pRVar3 + 0x5e4) = 0;
    *(undefined2 *)(pRVar3 + 0x5d8) = 2;
    *(undefined4 *)(pRVar3 + 0x5e8) = 0xffff0000;
    return pRVar3;
  }
  iVar2 = uVar1 + 1;
  *(int *)(this + 0x360) = iVar2;
  if (iVar2 == *(int *)(this + 0x368)) {
    *(undefined4 *)(this + 0x360) = 0;
    iVar2 = 0;
  }
  if (iVar2 == 0) {
    pRVar3 = *(RNS2RecvStruct **)(*(int *)(this + 0x35c) + -4 + *(int *)(this + 0x368) * 4);
    LeaveCriticalSection(lpCriticalSection);
    return pRVar3;
  }
  pRVar3 = *(RNS2RecvStruct **)(*(int *)(this + 0x35c) + -4 + iVar2 * 4);
  LeaveCriticalSection(lpCriticalSection);
  return pRVar3;
}


// protected: void __thiscall RakNet::RakPeer::ClearBufferedPackets(void)

void __thiscall RakNet::RakPeer::ClearBufferedPackets(RakPeer *this)

{
  uint uVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x370));
  while( true ) {
    uVar1 = *(uint *)(this + 0x364);
    if (*(uint *)(this + 0x368) < uVar1) {
      iVar2 = *(int *)(this + 0x36c) - uVar1;
    }
    else {
      iVar2 = -uVar1;
    }
    if (*(uint *)(this + 0x368) + iVar2 == 0) break;
    iVar2 = uVar1 + 1;
    *(int *)(this + 0x364) = iVar2;
    if (iVar2 == *(int *)(this + 0x36c)) {
      *(undefined4 *)(this + 0x364) = 0;
      iVar2 = 0;
    }
    if (iVar2 == 0) {
      operator_delete(*(void **)(*(int *)(this + 0x360) + -4 + *(int *)(this + 0x36c) * 4),
                      (nothrow_t *)0x600);
    }
    else {
      operator_delete(*(void **)(*(int *)(this + 0x360) + -4 + iVar2 * 4),(nothrow_t *)0x600);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x370));
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x398));
  while( true ) {
    uVar1 = *(uint *)(this + 0x38c);
    if (*(uint *)(this + 0x390) < uVar1) {
      iVar2 = *(int *)(this + 0x394) - uVar1;
    }
    else {
      iVar2 = -uVar1;
    }
    if (*(uint *)(this + 0x390) + iVar2 == 0) break;
    iVar2 = uVar1 + 1;
    *(int *)(this + 0x38c) = iVar2;
    if (iVar2 == *(int *)(this + 0x394)) {
      *(undefined4 *)(this + 0x38c) = 0;
      iVar2 = 0;
    }
    if (iVar2 == 0) {
      operator_delete(*(void **)(*(int *)(this + 0x388) + -4 + *(int *)(this + 0x394) * 4),
                      (nothrow_t *)0x600);
    }
    else {
      operator_delete(*(void **)(*(int *)(this + 0x388) + -4 + iVar2 * 4),(nothrow_t *)0x600);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x398));
  return;
}


// protected: void __thiscall RakNet::RakPeer::PingInternal(struct RakNet::SystemAddress,bool,enum
// PacketReliability)

void __thiscall
RakNet::RakPeer::PingInternal
          (RakPeer *this,SystemAddress param_1,bool param_2,PacketReliability param_3)

{
  AddressOrGUID AVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uchar *puVar4;
  char cVar5;
  uint uVar6;
  __uint64 _Var7;
  __uint64 _Var8;
  undefined1 in_stack_fffffe8c [20];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  uint uVar13;
  __uint64 local_134;
  uchar local_129;
  BitStream bitStream;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cd9cb;
  local_10 = ExceptionList;
  uVar6 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar13 = uVar6;
  cVar5 = (**(code **)(*(int *)this + 0x3c))();
  if (cVar5 != '\0') {
    uVar11 = 0x14;
    memset(&bitStream,0,0x114);
    bitStream.data = bitStream.stackData;
    bitStream.numberOfBitsUsed = 0;
    bitStream.readOffset = 0;
    bitStream.numberOfBitsAllocated = 0x800;
    bitStream.copyData = true;
    local_8 = 0;
    local_129 = '\0';
    BitStream::WriteBits(&bitStream,&local_129,8,(bool)uVar11);
    _Var7 = GetTimeUS_Windows();
    uVar9 = 0x5a6431;
    local_134 = __aulldiv((uint)_Var7,(uint)(_Var7 >> 0x20),1000,0);
    uVar10._0_2_ = 0x644f;
    uVar10._2_2_ = 0x5a;
    BitStream::Write<>(&bitStream,&local_134);
    if (param_2) {
      uVar12 = 0x5a645a;
      _Var8 = GetTimeUS_Windows();
      puVar4 = bitStream.data;
      uVar3 = bitStream.numberOfBitsUsed;
      AddressOrGUID::AddressOrGUID((AddressOrGUID *)&stack0xfffffe8c,&param_1);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = _Var8;
      auVar2 = auVar2 << 0x20;
      AVar1.systemAddress.address = (<>)in_stack_fffffe8c[0];
      AVar1.systemAddress._1_8_ = in_stack_fffffe8c._1_8_;
      AVar1.systemAddress._9_7_ = in_stack_fffffe8c._9_7_;
      AVar1.systemAddress.debugPort = in_stack_fffffe8c._16_2_;
      AVar1.systemAddress.systemIndex = in_stack_fffffe8c._18_2_;
      AVar1.rakNetGuid.g = auVar2._0_8_;
      AVar1.rakNetGuid.systemIndex = auVar2._8_2_;
      AVar1.rakNetGuid._10_6_ = auVar2._10_6_;
      AVar1._36_4_ = uVar9;
      SendImmediate(this,(char *)puVar4,uVar3,IMMEDIATE_PRIORITY,param_3,'\0',AVar1,SUB81(_Var7,0),
                    SUB81(_Var7 >> 0x20,0),CONCAT44(uVar12,uVar10),uVar13);
    }
    else {
      AddressOrGUID::AddressOrGUID((AddressOrGUID *)&stack0xfffffe84,&param_1);
      (**(code **)(*(int *)this + 0x4c))(&bitStream,0,param_3,0);
    }
    if ((bitStream.copyData != false) && (0x800 < bitStream.numberOfBitsAllocated)) {
      free(bitStream.data);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(uVar6 ^ (uint)&stack0xfffffffc);
  return;
}


// protected: void __thiscall RakNet::RakPeer::CloseConnectionInternal(struct RakNet::AddressOrGUID
// const &,bool,bool,unsigned char,enum PacketPriority)

void __thiscall
RakNet::RakPeer::CloseConnectionInternal
          (RakPeer *this,AddressOrGUID *param_1,bool param_2,bool param_3,uchar param_4,
          PacketPriority param_5)

{
  int iVar1;
  SystemAddress SVar2;
  undefined4 *puVar3;
  uint uVar4;
  BufferedCommandStruct *pBVar5;
  int *piVar6;
  int iVar7;
  char *in_stack_ffffffa4;
  SystemAddress *in_stack_ffffffa8;
  undefined1 local_48 [20];
  SystemAddress local_34;
  int local_20;
  SystemAddress local_1c;
  uint local_8;
  
  local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  if ((((((int)(param_1->rakNetGuid).g != DAT_00657908) ||
        (*(int *)((int)&(param_1->rakNetGuid).g + 4) != DAT_0065790c)) ||
       (*(short *)&(param_1->systemAddress).field_0x2 != DAT_006578f6)) ||
      ((*(short *)&param_1->systemAddress != 2 ||
       (*(int *)&(param_1->systemAddress).field_0x4 != DAT_006578f8)))) &&
     ((*(int *)(this + 0x22c) != 0 && (this[8] != (RakPeer)0x1)))) {
    if (((*(short *)&(param_1->systemAddress).field_0x2 == DAT_006578f6) &&
        (*(short *)&param_1->systemAddress == 2)) &&
       (*(int *)&(param_1->systemAddress).field_0x4 == DAT_006578f8)) {
      in_stack_ffffffa4 = *(char **)&(param_1->rakNetGuid).systemIndex;
      in_stack_ffffffa8 = *(SystemAddress **)&(param_1->rakNetGuid).field_0xc;
      puVar3 = (undefined4 *)
               (**(code **)(*(int *)this + 0xd4))
                         (local_48,(int)(param_1->rakNetGuid).g,
                          *(undefined4 *)((int)&(param_1->rakNetGuid).g + 4));
      local_1c.systemIndex = *(ushort *)((int)puVar3 + 0x12);
      local_1c._0_4_ = *puVar3;
      local_1c._4_4_ = puVar3[1];
      local_1c._8_4_ = puVar3[2];
      local_1c._12_4_ = puVar3[3];
      local_1c.debugPort = *(ushort *)(puVar3 + 4);
    }
    else {
      local_1c.systemIndex = (param_1->systemAddress).systemIndex;
      local_1c.address = (param_1->systemAddress).address;
      local_1c._1_3_ = *(undefined3 *)&(param_1->systemAddress).field_0x1;
      local_1c._4_4_ = *(undefined4 *)&(param_1->systemAddress).field_0x4;
      local_1c._8_4_ = *(undefined4 *)&(param_1->systemAddress).field_0x8;
      local_1c._12_4_ = *(undefined4 *)&(param_1->systemAddress).field_0xc;
      local_1c.debugPort = (param_1->systemAddress).debugPort;
    }
    if ((((local_1c._2_2_ != DAT_006578f6) || (local_1c._0_2_ != 2)) ||
        (local_1c._4_4_ != DAT_006578f8)) && (param_3)) {
      iVar7 = **(int **)(this + 0x424);
      local_34._0_4_ = *(undefined4 *)(iVar7 + 0xc);
      local_34._4_4_ = *(undefined4 *)(iVar7 + 0x10);
      local_34._8_4_ = *(undefined4 *)(iVar7 + 0x14);
      local_34._12_4_ = *(undefined4 *)(iVar7 + 0x18);
      local_34._16_4_ = *(undefined4 *)(iVar7 + 0x1c);
      in_stack_ffffffa8 = &local_34;
      in_stack_ffffffa4 = (char *)0x5a6629;
      SystemAddress::FixForIPVersion(&local_1c,in_stack_ffffffa8);
    }
    if (param_2) {
      SVar2._4_4_ = local_1c._4_4_;
      SVar2.address = local_1c.address;
      SVar2._1_3_ = local_1c._1_3_;
      SVar2._8_4_ = local_1c._8_4_;
      SVar2._12_4_ = local_1c._12_4_;
      SVar2.debugPort = local_1c.debugPort;
      SVar2.systemIndex = local_1c.systemIndex;
      NotifyAndFlagForShutdown(this,SVar2,param_3,param_4,param_5);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (param_3) {
      uVar4 = GetRemoteSystemIndex(this,&local_1c);
      if ((uVar4 != 0xffffffff) &&
         (iVar7 = uVar4 * 0x1210, local_20 = iVar7,
         *(char *)(iVar7 + *(int *)(this + 0x22c)) != '\0')) {
        uVar4 = 0;
        if (*(int *)(this + 0x234) != 0) {
          do {
            piVar6 = (int *)(*(int *)(this + 0x230) + uVar4 * 4);
            iVar1 = *piVar6;
            if (((*(short *)(iVar1 + 6) == local_1c._2_2_) && (*(short *)(iVar1 + 4) == 2)) &&
               (*(int *)(iVar1 + 8) == local_1c._4_4_)) {
              *piVar6 = *(int *)(*(int *)(this + 0x230) + -4 + *(uint *)(this + 0x234) * 4);
              *(int *)(this + 0x234) = *(int *)(this + 0x234) + -1;
              break;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)(this + 0x234));
        }
        *(undefined1 *)(iVar7 + *(int *)(this + 0x22c)) = 0;
        piVar6 = (int *)(*(int *)(this + 0x22c) + 0x11f0 + iVar7);
        *piVar6 = DAT_00657908;
        piVar6[1] = DAT_0065790c;
        *(undefined2 *)(piVar6 + 2) = DAT_00657910;
        ReliabilityLayer::Reset
                  ((ReliabilityLayer *)(*(int *)(this + 0x22c) + 0xf8 + iVar7),false,
                   *(int *)(*(int *)(this + 0x22c) + 0x1200 + iVar7),SUB41(piVar6,0));
        *(undefined4 *)(*(int *)(this + 0x22c) + 0x1204 + iVar7) = 0;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    else {
      pBVar5 = DataStructures::ThreadsafeAllocatingQueue<>::Allocate
                         ((ThreadsafeAllocatingQueue<> *)(this + 0x30c),in_stack_ffffffa4,
                          (uint)in_stack_ffffffa8);
      *(undefined4 *)(pBVar5 + 0x6c) = 1;
      AddressOrGUID::operator=((AddressOrGUID *)(pBVar5 + 0x10),&local_1c);
      *(undefined4 *)(pBVar5 + 0x4c) = 0;
      pBVar5[0xc] = (BufferedCommandStruct)param_4;
      *(PacketPriority *)(pBVar5 + 4) = param_5;
      DataStructures::ThreadsafeAllocatingQueue<>::Push
                ((ThreadsafeAllocatingQueue<> *)(this + 0x30c),pBVar5);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// protected: void __thiscall RakNet::RakPeer::SendBuffered(char const *,unsigned int,enum
// PacketPriority,enum PacketReliability,char,struct RakNet::AddressOrGUID,bool,enum
// RakNet::RakPeer::RemoteSystemStruct::ConnectMode,unsigned int)

void __thiscall
RakNet::RakPeer::SendBuffered
          (RakPeer *this,char *param_1,uint param_2,PacketPriority param_3,PacketReliability param_4
          ,char param_5,AddressOrGUID param_6,bool param_7,ConnectMode param_8,uint param_9)

{
  LPCRITICAL_SECTION lpCriticalSection;
  ThreadsafeAllocatingQueue<> *this_00;
  BufferedCommandStruct *pBVar1;
  void *pvVar2;
  uint _Size;
  undefined4 in_stack_00000018;
  undefined3 in_stack_00000045;
  char *in_stack_ffffffdc;
  char *pcVar3;
  uint in_stack_ffffffe0;
  LPCRITICAL_SECTION p_Var4;
  
  this_00 = (ThreadsafeAllocatingQueue<> *)(this + 0x30c);
  pBVar1 = DataStructures::ThreadsafeAllocatingQueue<>::Allocate
                     (this_00,in_stack_ffffffdc,in_stack_ffffffe0);
  _Size = param_2 + 7 >> 3;
  pvVar2 = malloc(_Size);
  *(void **)(pBVar1 + 0x4c) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(this + 800);
    pcVar3 = (char *)0x5a67fd;
    p_Var4 = lpCriticalSection;
    EnterCriticalSection(lpCriticalSection);
    DataStructures::MemoryPool<>::Release((MemoryPool<> *)this_00,pBVar1,pcVar3,(uint)p_Var4);
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  memcpy(pvVar2,param_1,_Size);
  *(uint *)pBVar1 = param_2;
  *(PacketReliability *)(pBVar1 + 8) = param_4;
  pBVar1[0xc] = (BufferedCommandStruct)param_5;
  *(PacketPriority *)(pBVar1 + 4) = param_3;
  *(undefined4 *)(pBVar1 + 0x10) = in_stack_00000018;
  *(undefined4 *)(pBVar1 + 0x14) = (undefined4)param_6.rakNetGuid.g;
  *(undefined2 *)(pBVar1 + 0x18) = param_6.rakNetGuid.g._4_2_;
  *(undefined4 *)(pBVar1 + 0x20) = param_6.rakNetGuid._12_4_;
  *(undefined4 *)(pBVar1 + 0x24) = param_6.systemAddress._0_4_;
  *(undefined4 *)(pBVar1 + 0x28) = param_6.systemAddress._4_4_;
  *(undefined4 *)(pBVar1 + 0x2c) = param_6.systemAddress._8_4_;
  *(undefined2 *)(pBVar1 + 0x32) = param_6.systemAddress._14_2_;
  *(undefined2 *)(pBVar1 + 0x30) = param_6.systemAddress._12_2_;
  pBVar1[0x38] = (BufferedCommandStruct)param_6._36_1_;
  *(undefined4 *)(pBVar1 + 0x3c) = _param_7;
  *(ConnectMode *)(pBVar1 + 0x68) = param_8;
  *(undefined4 *)(pBVar1 + 0x6c) = 0;
  DataStructures::ThreadsafeAllocatingQueue<>::Push(this_00,pBVar1);
  if (param_3 == IMMEDIATE_PRIORITY) {
    SetEvent(*(HANDLE *)(this + 0x568));
  }
  return;
}


// protected: void __thiscall RakNet::RakPeer::SendBufferedList(char const * *,int const *,int,enum
// PacketPriority,enum PacketReliability,char,struct RakNet::AddressOrGUID,bool,enum
// RakNet::RakPeer::RemoteSystemStruct::ConnectMode,unsigned int)

void __thiscall
RakNet::RakPeer::SendBufferedList
          (RakPeer *this,char **param_1,int *param_2,int param_3,PacketPriority param_4,
          PacketReliability param_5,char param_6,AddressOrGUID param_7,bool param_8,
          ConnectMode param_9,uint param_10)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  void *_Memory;
  BufferedCommandStruct *pBVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  AddressOrGUID *pAVar19;
  size_t sVar20;
  size_t sVar21;
  size_t local_c;
  
  iVar5 = 0;
  local_c = 0;
  if (0 < param_3) {
    if (7 < (uint)param_3) {
      uVar3 = param_3 & 0x80000007;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
      }
      uVar15 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = 0;
      uVar11 = 0;
      uVar12 = 0;
      uVar13 = 0;
      uVar14 = 0;
      do {
        piVar1 = param_2 + iVar5;
        uVar7 = -(uint)(0 < *piVar1);
        uVar8 = -(uint)(0 < piVar1[1]);
        uVar9 = -(uint)(0 < piVar1[2]);
        uVar10 = -(uint)(0 < piVar1[3]);
        uVar15 = *piVar1 + uVar15 & uVar7 | ~uVar7 & uVar15;
        uVar16 = piVar1[1] + uVar16 & uVar8 | ~uVar8 & uVar16;
        uVar17 = piVar1[2] + uVar17 & uVar9 | ~uVar9 & uVar17;
        uVar18 = piVar1[3] + uVar18 & uVar10 | ~uVar10 & uVar18;
        piVar1 = param_2 + iVar5 + 4;
        iVar5 = iVar5 + 8;
        uVar7 = -(uint)(0 < *piVar1);
        uVar8 = -(uint)(0 < piVar1[1]);
        uVar9 = -(uint)(0 < piVar1[2]);
        uVar10 = -(uint)(0 < piVar1[3]);
        uVar11 = *piVar1 + uVar11 & uVar7 | ~uVar7 & uVar11;
        uVar12 = piVar1[1] + uVar12 & uVar8 | ~uVar8 & uVar12;
        uVar13 = piVar1[2] + uVar13 & uVar9 | ~uVar9 & uVar13;
        uVar14 = piVar1[3] + uVar14 & uVar10 | ~uVar10 & uVar14;
      } while (iVar5 < (int)(param_3 - uVar3));
      local_c = uVar11 + uVar15 + uVar13 + uVar17 + uVar12 + uVar16 + uVar14 + uVar18;
    }
    for (; iVar5 < param_3; iVar5 = iVar5 + 1) {
      sVar21 = local_c + param_2[iVar5];
      if (param_2[iVar5] < 1) {
        sVar21 = local_c;
      }
      local_c = sVar21;
    }
    if (local_c != 0) {
      pAVar19 = (AddressOrGUID *)0x5a6994;
      sVar21 = local_c;
      _Memory = malloc(local_c);
      if (_Memory != (void *)0x0) {
        iVar6 = 0;
        iVar5 = (int)param_1 - (int)param_2;
        do {
          sVar20 = *param_2;
          if (0 < (int)sVar20) {
            pAVar19 = *(AddressOrGUID **)(iVar5 + (int)param_2);
            memcpy((void *)(iVar6 + (int)_Memory),pAVar19,sVar20);
            iVar6 = iVar6 + *param_2;
            sVar21 = sVar20;
          }
          param_2 = param_2 + 1;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
        if (!param_8) {
          sVar21 = 1;
          pAVar19 = &param_7;
          bVar2 = IsLoopbackAddress(this,pAVar19,true);
          if (bVar2) {
            (**(code **)(*(int *)this + 0x54))(_Memory,local_c);
            free(_Memory);
            return;
          }
        }
        pBVar4 = DataStructures::ThreadsafeAllocatingQueue<>::Allocate
                           ((ThreadsafeAllocatingQueue<> *)(this + 0x30c),(char *)pAVar19,sVar21);
        *(size_t *)pBVar4 = local_c * 8;
        *(PacketReliability *)(pBVar4 + 8) = param_5;
        *(void **)(pBVar4 + 0x4c) = _Memory;
        pBVar4[0xc] = (BufferedCommandStruct)param_6;
        *(PacketPriority *)(pBVar4 + 4) = param_4;
        *(undefined4 *)(pBVar4 + 0x10) = (undefined4)param_7.rakNetGuid.g;
        *(undefined4 *)(pBVar4 + 0x14) = param_7.rakNetGuid.g._4_4_;
        *(ushort *)(pBVar4 + 0x18) = param_7.rakNetGuid.systemIndex;
        *(undefined4 *)(pBVar4 + 0x20) = param_7.systemAddress._0_4_;
        *(undefined4 *)(pBVar4 + 0x24) = param_7.systemAddress._4_4_;
        *(undefined4 *)(pBVar4 + 0x28) = param_7.systemAddress._8_4_;
        *(undefined4 *)(pBVar4 + 0x2c) = param_7.systemAddress._12_4_;
        *(ushort *)(pBVar4 + 0x32) = param_7.systemAddress.systemIndex;
        *(ushort *)(pBVar4 + 0x30) = param_7.systemAddress.debugPort;
        pBVar4[0x38] = (BufferedCommandStruct)param_8;
        *(undefined4 *)(pBVar4 + 0x3c) = 0;
        *(uint *)(pBVar4 + 0x68) = param_10;
        *(undefined4 *)(pBVar4 + 0x6c) = 0;
        DataStructures::ThreadsafeAllocatingQueue<>::Push
                  ((ThreadsafeAllocatingQueue<> *)(this + 0x30c),pBVar4);
        if (param_4 == IMMEDIATE_PRIORITY) {
          SetEvent(*(HANDLE *)(this + 0x568));
        }
      }
    }
  }
  return;
}


// WARNING: Function: __alloca_probe replaced with injection: alloca_probe
// WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe
// protected: bool __thiscall RakNet::RakPeer::SendImmediate(char *,unsigned int,enum
// PacketPriority,enum PacketReliability,char,struct RakNet::AddressOrGUID,bool,bool,unsigned
// __int64,unsigned int)

bool __thiscall
RakNet::RakPeer::SendImmediate
          (RakPeer *this,char *param_1,uint param_2,PacketPriority param_3,PacketReliability param_4
          ,char param_5,AddressOrGUID param_6,bool param_7,bool param_8,__uint64 param_9,
          uint param_10)

{
  int iVar1;
  int iVar2;
  SystemAddress SVar3;
  bool bVar4;
  byte bVar5;
  undefined1 uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  char in_stack_00000018;
  undefined3 in_stack_00000045;
  undefined3 in_stack_00000049;
  uint in_stack_ffffffcc;
  uint local_18;
  int local_14;
  
  uVar7 = ___security_cookie ^ (uint)&stack0xfffffffc;
  uVar11 = 0;
  bVar4 = false;
  if (((param_6.systemAddress.systemIndex == DAT_006578f6) && (param_6.systemAddress.debugPort == 2)
      ) && (param_6._36_4_ == DAT_006578f8)) {
    if ((param_6.systemAddress._0_4_ == DAT_00657908) &&
       (param_6.systemAddress._4_4_ == DAT_0065790c)) {
      uVar12 = 0xffffffff;
    }
    else {
      if ((param_6.systemAddress._0_4_ != *(int *)(this + 0x450)) ||
         (param_6.systemAddress._4_4_ != *(int *)(this + 0x454))) {
        if ((param_6.systemAddress._8_2_ != -1) &&
           (uVar12 = (uint)(ushort)param_6.systemAddress._8_2_, uVar12 < *(uint *)(this + 0xc))) {
          if ((*(int *)(uVar12 * 0x1210 + 0x11f0 + *(int *)(this + 0x22c)) ==
               param_6.systemAddress._0_4_) &&
             (*(int *)(uVar12 * 0x1210 + 0x11f4 + *(int *)(this + 0x22c)) ==
              param_6.systemAddress._4_4_)) goto LAB_005a6bec;
        }
        uVar12 = 0;
        if (*(int *)(this + 0xc) != 0) {
          piVar8 = (int *)(*(int *)(this + 0x22c) + 0x11f0);
          do {
            if ((*piVar8 == param_6.systemAddress._0_4_) &&
               (piVar8[1] == param_6.systemAddress._4_4_)) {
              *(short *)(uVar12 * 0x1210 + 0x11f8 + *(int *)(this + 0x22c)) = (short)uVar12;
              goto LAB_005a6bec;
            }
            uVar12 = uVar12 + 1;
            piVar8 = piVar8 + 0x484;
          } while (uVar12 < *(uint *)(this + 0xc));
          uVar12 = 0xffffffff;
          goto LAB_005a6bec;
        }
      }
      uVar12 = 0xffffffff;
    }
  }
  else {
    SVar3._8_4_ = _param_7;
    SVar3._0_8_ = param_6._32_8_;
    SVar3._12_4_ = _param_8;
    SVar3.debugPort = (undefined2)param_9;
    SVar3.systemIndex = param_9._2_2_;
    uVar12 = GetIndexFromSystemAddress(this,SVar3,true);
    in_stack_ffffffcc = (uint)param_9;
  }
LAB_005a6bec:
  if (in_stack_00000018 == '\0') {
    if (uVar12 == 0xffffffff) goto LAB_005a6db1;
    if (((*(char *)(uVar12 * 0x1210 + *(int *)(this + 0x22c)) == '\0') ||
        (iVar1 = *(int *)(uVar12 * 0x1210 + 0x120c + *(int *)(this + 0x22c)), iVar1 == 1)) ||
       ((iVar1 == 2 || (iVar1 == 3)))) goto LAB_005a6db1;
    uVar11 = 1;
    in_stack_ffffffcc = uVar12;
  }
  else {
    uVar9 = 0;
    if (*(int *)(this + 0xc) == 0) goto LAB_005a6db1;
    local_14 = 0;
    do {
      if ((((uVar12 == 0xffffffff) || (uVar9 != uVar12)) &&
          (pcVar10 = (char *)(local_14 + *(int *)(this + 0x22c)), *pcVar10 != '\0')) &&
         (((*(ushort *)(pcVar10 + 6) != DAT_006578f6 || (*(short *)(pcVar10 + 4) != 2)) ||
          (*(int *)(pcVar10 + 8) != DAT_006578f8)))) {
        *(uint *)(&stack0xffffffcc + uVar11 * 4) = uVar9;
        uVar11 = uVar11 + 1;
      }
      uVar9 = uVar9 + 1;
      local_14 = local_14 + 0x1210;
    } while (uVar9 < *(uint *)(this + 0xc));
    if (uVar11 == 0) goto LAB_005a6db1;
  }
  local_18 = 0;
  if (uVar11 != 0) {
    do {
      if ((((char)param_6.rakNetGuid.g == '\0') || (bVar4)) || (local_18 + 1 != uVar11)) {
        bVar5 = 0;
      }
      else {
        bVar5 = 1;
      }
      piVar8 = (int *)(&stack0xffffffcc + local_18 * 4);
      ReliabilityLayer::Send
                ((ReliabilityLayer *)(*piVar8 * 0x1210 + *(int *)(this + 0x22c) + 0xf8),param_1,
                 param_2,param_3,param_4,param_5,(bool)(bVar5 ^ 1),(int)piVar8,
                 param_6.rakNetGuid._8_8_,in_stack_ffffffcc);
      if (bVar5 != 0) {
        bVar4 = true;
      }
      if (((param_4 == RELIABLE) || (param_4 == RELIABLE_ORDERED)) ||
         ((param_4 == RELIABLE_SEQUENCED ||
          ((param_4 == RELIABLE_WITH_ACK_RECEIPT || (param_4 == RELIABLE_ORDERED_WITH_ACK_RECEIPT)))
          ))) {
        uVar13 = __aulldiv(param_6.rakNetGuid.g._4_4_,param_6.rakNetGuid._8_4_,1000,0);
        iVar1 = *piVar8;
        iVar2 = *(int *)(this + 0x22c);
        *(int *)(iVar1 * 0x1210 + 0x11e0 + iVar2) = (int)uVar13;
        *(undefined4 *)(iVar1 * 0x1210 + 0x11e4 + iVar2) = 0;
      }
      local_18 = local_18 + 1;
    } while (local_18 < uVar11);
  }
LAB_005a6db1:
  uVar6 = __security_check_cookie(uVar7 ^ (uint)&stack0xfffffffc);
  return (bool)uVar6;
}


// WARNING: Removing unreachable block (ram,0x005a6e01)
// protected: void __thiscall RakNet::RakPeer::OnConnectedPong(unsigned __int64,unsigned
// __int64,struct RakNet::RakPeer::RemoteSystemStruct *)

void __thiscall
RakNet::RakPeer::OnConnectedPong
          (RakPeer *this,__uint64 param_1,__uint64 param_2,RemoteSystemStruct *param_3)

{
  RemoteSystemStruct *pRVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  __uint64 _Var5;
  ulonglong uVar6;
  int iStack_10;
  __uint64 ping;
  
  _Var5 = GetTimeUS_Windows();
  uVar6 = __aulldiv((uint)_Var5,(uint)(_Var5 >> 0x20),1000,0);
  if (param_1 < uVar6) {
    iStack_10 = (int)uVar6 - (int)param_1;
  }
  else {
    iStack_10 = 0;
  }
  *(short *)(param_3 + *(int *)(param_3 + 0x11c8) * 0x10 + 0x1178) = (short)iStack_10;
  lVar4 = (param_2 - (uVar6 >> 1)) - (param_1 >> 1);
  iVar3 = *(int *)(param_3 + 0x11c8);
  *(int *)(param_3 + (iVar3 + 0x118) * 0x10) = (int)lVar4;
  *(int *)(param_3 + (iVar3 + 0x118) * 0x10 + 4) = (int)((ulonglong)lVar4 >> 0x20);
  if ((*(ushort *)(param_3 + 0x11d0) == 0xffff) ||
     (iStack_10 < (int)(uint)*(ushort *)(param_3 + 0x11d0))) {
    *(short *)(param_3 + 0x11d0) = (short)iStack_10;
  }
  pRVar1 = param_3 + 0x11c8;
  uVar2 = *(uint *)pRVar1;
  *(uint *)pRVar1 = *(uint *)pRVar1 + 1;
  *(uint *)(param_3 + 0x11cc) = *(int *)(param_3 + 0x11cc) + (uint)(0xfffffffe < uVar2);
  if ((*(int *)(param_3 + 0x11c8) == 5) && (*(int *)(param_3 + 0x11cc) == 0)) {
    *(undefined4 *)(param_3 + 0x11c8) = 0;
    *(undefined4 *)(param_3 + 0x11cc) = 0;
  }
  return;
}


// protected: void __thiscall RakNet::RakPeer::ClearBufferedCommands(void)

void __thiscall RakNet::RakPeer::ClearBufferedCommands(RakPeer *this)

{
  MemoryPool<> *this_00;
  uint uVar1;
  int iVar2;
  BufferedCommandStruct *pBVar3;
  uint uVar4;
  char *pcVar5;
  LPCRITICAL_SECTION p_Var6;
  LPCRITICAL_SECTION p_Var7;
  
  this_00 = (MemoryPool<> *)(this + 0x30c);
  while( true ) {
    EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x348));
    if (*(int *)(this + 0x33c) == *(int *)(this + 0x340)) break;
    iVar2 = *(int *)(this + 0x33c) + 1;
    *(int *)(this + 0x33c) = iVar2;
    if (iVar2 == *(int *)(this + 0x344)) {
      *(undefined4 *)(this + 0x33c) = 0;
      iVar2 = 0;
    }
    if (iVar2 == 0) {
      pBVar3 = *(BufferedCommandStruct **)(*(int *)(this + 0x338) + -4 + *(int *)(this + 0x344) * 4)
      ;
    }
    else {
      pBVar3 = *(BufferedCommandStruct **)(*(int *)(this + 0x338) + -4 + iVar2 * 4);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x348));
    if (pBVar3 == (BufferedCommandStruct *)0x0) goto LAB_005a6f96;
    if (*(void **)(pBVar3 + 0x4c) != (void *)0x0) {
      free(*(void **)(pBVar3 + 0x4c));
    }
    p_Var6 = (LPCRITICAL_SECTION)(this + 800);
    pcVar5 = (char *)0x5a6f6d;
    p_Var7 = p_Var6;
    EnterCriticalSection(p_Var6);
    DataStructures::MemoryPool<>::Release(this_00,pBVar3,pcVar5,(uint)p_Var7);
    LeaveCriticalSection(p_Var6);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x348));
LAB_005a6f96:
  p_Var6 = (LPCRITICAL_SECTION)(this + 800);
  pcVar5 = (char *)0x5a6fa1;
  EnterCriticalSection(p_Var6);
  uVar4 = 0;
  while( true ) {
    uVar1 = *(uint *)(this + 0x33c);
    if (*(uint *)(this + 0x340) < uVar1) {
      iVar2 = *(int *)(this + 0x344) - uVar1;
    }
    else {
      iVar2 = -uVar1;
    }
    if (*(uint *)(this + 0x340) + iVar2 <= uVar4) break;
    if (uVar1 + uVar4 < *(uint *)(this + 0x344)) {
      DataStructures::MemoryPool<>::Release
                (this_00,*(BufferedCommandStruct **)(*(int *)(this + 0x338) + (uVar1 + uVar4) * 4),
                 pcVar5,(uint)p_Var6);
      uVar4 = uVar4 + 1;
    }
    else {
      DataStructures::MemoryPool<>::Release
                (this_00,*(BufferedCommandStruct **)
                          (*(int *)(this + 0x338) + ((uVar1 - *(uint *)(this + 0x344)) + uVar4) * 4)
                 ,pcVar5,(uint)p_Var6);
      uVar4 = uVar4 + 1;
    }
  }
  if (*(uint *)(this + 0x344) != 0) {
    if (0x20 < *(uint *)(this + 0x344)) {
      operator_delete__(*(void **)(this + 0x338));
      *(undefined4 *)(this + 0x344) = 0;
    }
    *(undefined4 *)(this + 0x33c) = 0;
    *(undefined4 *)(this + 0x340) = 0;
  }
  p_Var6 = (LPCRITICAL_SECTION)(this + 800);
  LeaveCriticalSection(p_Var6);
  pcVar5 = (char *)0x5a702e;
  p_Var7 = p_Var6;
  EnterCriticalSection(p_Var6);
  DataStructures::MemoryPool<>::Clear(this_00,pcVar5,(uint)p_Var7);
  LeaveCriticalSection(p_Var6);
  return;
}


// protected: void __thiscall RakNet::RakPeer::ClearSocketQueryOutput(void)

void __thiscall RakNet::RakPeer::ClearSocketQueryOutput(RakPeer *this)

{
  MemoryPool<> *this_00;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  LPCRITICAL_SECTION p_Var8;
  LPCRITICAL_SECTION p_Var9;
  
  this_00 = (MemoryPool<> *)(this + 0x3b0);
  p_Var8 = (LPCRITICAL_SECTION)(this + 0x3c4);
  pcVar7 = (char *)0x5a7063;
  EnterCriticalSection(p_Var8);
  uVar6 = 0;
  while( true ) {
    uVar1 = *(uint *)(this + 0x3e0);
    if (*(uint *)(this + 0x3e4) < uVar1) {
      iVar3 = *(int *)(this + 1000) - uVar1;
    }
    else {
      iVar3 = -uVar1;
    }
    if (*(uint *)(this + 0x3e4) + iVar3 <= uVar6) break;
    uVar5 = *(uint *)(this + 1000);
    uVar4 = uVar1 + uVar6;
    if (uVar5 <= uVar4) {
      uVar4 = (uVar1 - uVar5) + uVar6;
    }
    puVar2 = *(undefined4 **)(*(int *)(this + 0x3dc) + uVar4 * 4);
    if (puVar2[2] != 0) {
      p_Var8 = (LPCRITICAL_SECTION)*puVar2;
      pcVar7 = (char *)0x5a70a3;
      operator_delete__(p_Var8);
      uVar5 = *(uint *)(this + 1000);
    }
    uVar1 = *(int *)(this + 0x3e0) + uVar6;
    if (uVar1 < uVar5) {
      DataStructures::MemoryPool<>::Release
                ((MemoryPool<> *)this_00,*(SocketQueryOutput **)(*(int *)(this + 0x3dc) + uVar1 * 4)
                 ,pcVar7,(uint)p_Var8);
      uVar6 = uVar6 + 1;
    }
    else {
      DataStructures::MemoryPool<>::Release
                ((MemoryPool<> *)this_00,
                 *(SocketQueryOutput **)
                  (*(int *)(this + 0x3dc) + ((*(int *)(this + 0x3e0) - uVar5) + uVar6) * 4),pcVar7,
                 (uint)p_Var8);
      uVar6 = uVar6 + 1;
    }
  }
  if (*(uint *)(this + 1000) != 0) {
    if (0x20 < *(uint *)(this + 1000)) {
      operator_delete__(*(void **)(this + 0x3dc));
      *(undefined4 *)(this + 1000) = 0;
    }
    *(undefined4 *)(this + 0x3e0) = 0;
    *(undefined4 *)(this + 0x3e4) = 0;
  }
  p_Var8 = (LPCRITICAL_SECTION)(this + 0x3c4);
  LeaveCriticalSection(p_Var8);
  pcVar7 = (char *)0x5a711b;
  p_Var9 = p_Var8;
  EnterCriticalSection(p_Var8);
  DataStructures::MemoryPool<>::Clear(this_00,pcVar7,(uint)p_Var9);
  LeaveCriticalSection(p_Var8);
  return;
}


// protected: void __thiscall RakNet::RakPeer::AddPacketToProducer(struct RakNet::Packet *)

void __thiscall RakNet::RakPeer::AddPacketToProducer(RakPeer *this,Packet *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char *pcVar1;
  LPCRITICAL_SECTION p_Var2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x59c);
  pcVar1 = (char *)0x5a7144;
  p_Var2 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  DataStructures::Queue<>::Push
            ((Queue<> *)(this + 0x5b4),(HuffmanEncodingTreeNode **)&param_1,pcVar1,(uint)p_Var2);
  LeaveCriticalSection(lpCriticalSection);
  return;
}


// protected: void __thiscall RakNet::RakPeer::DerefAllSockets(void)

void __thiscall RakNet::RakPeer::DerefAllSockets(RakPeer *this)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(this + 0x428) != 0) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(this + 0x424) + uVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(this + 0x428));
  }
  if (*(int *)(this + 0x42c) != 0) {
    operator_delete__(*(void **)(this + 0x424));
    *(undefined4 *)(this + 0x42c) = 0;
    *(undefined4 *)(this + 0x424) = 0;
    *(undefined4 *)(this + 0x428) = 0;
  }
  return;
}


// protected: unsigned int __thiscall
// RakNet::RakPeer::GetRakNetSocketFromUserConnectionSocketIndex(unsigned int)const 

uint __thiscall
RakNet::RakPeer::GetRakNetSocketFromUserConnectionSocketIndex(RakPeer *this,uint param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(uint *)(this + 0x428) != 0) {
    piVar1 = *(int **)(this + 0x424);
    do {
      if (*(uint *)(*piVar1 + 0x20) == param_1) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (uVar2 < *(uint *)(this + 0x428));
  }
  return 0xffffffff;
}


// public: virtual bool __thiscall RakNet::RakPeer::RunUpdateCycle(class RakNet::BitStream &)

bool __thiscall RakNet::RakPeer::RunUpdateCycle(RakPeer *this,BitStream *param_1)

{
  LPCRITICAL_SECTION p_Var1;
  byte bVar2;
  <> <Var3;
  void *pvVar4;
  HuffmanEncodingTreeNode *pHVar5;
  AddressOrGUID AVar6;
  AddressOrGUID AVar7;
  undefined1 auVar8 [16];
  AddressOrGUID AVar9;
  undefined1 auVar10 [16];
  AddressOrGUID AVar11;
  SystemAddress SVar12;
  SystemAddress SVar13;
  SystemAddress SVar14;
  SystemAddress SVar15;
  SystemAddress SVar16;
  SystemAddress SVar17;
  SystemAddress SVar18;
  SystemAddress SVar19;
  SystemAddress SVar20;
  RakNetGUID RVar21;
  RakNetGUID RVar22;
  code *pcVar23;
  undefined3 uVar24;
  bool bVar25;
  undefined1 uVar26;
  u_short uVar27;
  BitStream *pBVar28;
  int iVar29;
  RemoteSystemStruct *pRVar30;
  uint uVar31;
  List<> *this_00;
  SocketQueryOutput *this_01;
  uchar *puVar32;
  __uint64 *p_Var33;
  RakNetStatistics *pRVar34;
  RemoteSystemStruct *pRVar35;
  Packet *pPVar36;
  undefined1 extraout_CL;
  undefined1 extraout_CL_00;
  char cVar37;
  char extraout_CL_01;
  bool extraout_CL_02;
  bool extraout_CL_03;
  bool extraout_CL_04;
  bool extraout_CL_05;
  bool extraout_CL_06;
  bool extraout_CL_07;
  bool extraout_CL_08;
  bool extraout_CL_09;
  HuffmanEncodingTreeNode *pHVar38;
  undefined1 *puVar39;
  byte *pbVar40;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  RakPeer *this_02;
  RakPeer *this_03;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  RakPeer *this_04;
  undefined4 *extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 uVar41;
  InternalPacket *pIVar42;
  BitStream *unaff_ESI;
  int iVar43;
  HuffmanEncodingTreeNode *pHVar44;
  undefined4 *puVar45;
  RakPeer *pRVar46;
  undefined4 unaff_EDI;
  undefined4 uVar47;
  uint uVar48;
  __uint64 _Var49;
  undefined8 uVar50;
  longlong lVar51;
  ReliabilityLayer *this_05;
  undefined4 in_stack_fffff37c;
  uint in_stack_fffff380;
  HuffmanEncodingTreeNode *in_stack_fffff384;
  undefined4 uVar52;
  uint in_stack_fffff388;
  RakNetSocket2 *pRVar53;
  ushort in_stack_fffff38c;
  ushort uVar54;
  ushort uVar55;
  undefined2 in_stack_fffff38e;
  SystemAddress *pSVar56;
  undefined2 uVar57;
  undefined2 uVar58;
  undefined2 in_stack_fffff390;
  undefined2 in_stack_fffff392;
  ushort uVar59;
  undefined2 in_stack_fffff394;
  undefined2 uVar60;
  ushort in_stack_fffff396;
  undefined2 uVar61;
  undefined2 in_stack_fffff398;
  undefined2 in_stack_fffff39a;
  undefined2 uVar62;
  undefined1 in_stack_fffff39c;
  undefined1 in_stack_fffff39d;
  ushort in_stack_fffff39e;
  undefined1 in_stack_fffff3a0;
  undefined1 uVar63;
  undefined1 in_stack_fffff3a1;
  undefined2 in_stack_fffff3a2;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined2 uVar68;
  __uint64 local_c48;
  __uint64 local_c40;
  RakNetRandom *local_c38;
  RakPeer *local_c34;
  undefined1 local_c30 [8];
  HuffmanEncodingTreeNode *pHStack_c28;
  HuffmanEncodingTreeNode *pHStack_c24;
  undefined4 local_c20;
  undefined8 local_c1c;
  HuffmanEncodingTreeNode *local_c14;
  uchar *local_c10;
  uint local_c0c;
  RemoteSystemStruct *local_c08;
  HuffmanEncodingTreeNode *local_c04;
  uchar local_bfd;
  HuffmanEncodingTreeNode *local_bfc;
  uint uStack_bf8;
  uchar *puStack_bf4;
  uint uStack_bf0;
  uint local_bec;
  uint uStack_be8;
  HuffmanEncodingTreeNode *pHStack_be4;
  HuffmanEncodingTreeNode *pHStack_be0;
  HuffmanEncodingTreeNode *local_bdc;
  undefined4 local_bd8;
  uint local_bd4;
  uint uStack_bd0;
  HuffmanEncodingTreeNode *pHStack_bcc;
  HuffmanEncodingTreeNode *pHStack_bc8;
  HuffmanEncodingTreeNode *local_bc4;
  BitStream local_bc0;
  BitStream local_aac;
  BitStream local_998;
  undefined1 local_884 [20];
  char local_870 [32];
  RakNetStatistics local_850;
  BitStream local_770;
  undefined8 local_65c;
  undefined4 local_654;
  undefined4 local_650;
  undefined4 local_64c;
  undefined4 local_648;
  undefined4 local_644;
  undefined4 local_640;
  undefined4 local_63c;
  undefined4 local_638;
  undefined4 local_634;
  undefined4 local_630;
  undefined8 local_62c;
  uint local_624;
  uint local_620;
  uint local_61c;
  ushort local_618 [2];
  undefined8 local_614;
  __uint64 local_60c;
  ushort local_604;
  u_short uStack_602;
  undefined2 uStack_600;
  ushort uStack_5fe;
  uint uStack_5fc;
  uint uStack_5f8;
  undefined4 local_5f4;
  uchar local_5f0;
  uchar local_5ef;
  uchar local_5ee;
  uchar local_5ed;
  HuffmanEncodingTreeNode *local_5ec;
  undefined1 local_5e8 [1216];
  BitStream local_128;
  BitStream *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pRVar46 = (RakPeer *)CONCAT22(in_stack_fffff39a,in_stack_fffff398);
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cdb2d;
  local_10 = ExceptionList;
  pBVar28 = (BitStream *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_bc4 = (HuffmanEncodingTreeNode *)(this + 0x424);
  local_c38 = (RakNetRandom *)param_1;
  local_c30._4_4_ = 0;
  pHStack_c28 = (HuffmanEncodingTreeNode *)0x0;
  pHStack_c24 = (HuffmanEncodingTreeNode *)0x0;
  local_c30._0_4_ = 2;
  local_c20 = (HuffmanEncodingTreeNode *)0xffff0000;
  local_60c = 0;
  local_614 = 0;
  local_c34 = this;
  local_14 = pBVar28;
  if ((*(int *)(**(int **)local_bc4 + 8) == 7) && (*(int *)(**(int **)local_bc4 + 0x60) != 0)) {
    uStack_602 = 0;
    uStack_600 = 0;
    uStack_5fe = 0;
    uStack_5fc = 0;
    uStack_5f8 = 0;
    local_604 = 2;
    local_5f4 = (HuffmanEncodingTreeNode *)0xffff0000;
    while( true ) {
      in_stack_fffff3a0 = SUB41(local_5e8,0);
      in_stack_fffff3a1 = (undefined1)((uint)local_5e8 >> 8);
      in_stack_fffff3a2 = (undefined2)((uint)local_5e8 >> 0x10);
      in_stack_fffff39c = 0xbe;
      in_stack_fffff39d = 0x98;
      in_stack_fffff39e = 0x5a;
      iVar29 = (**(code **)(**(int **)(**(int **)(this + 0x424) + 0x60) + 8))();
      if (iVar29 < 1) break;
      _Var49 = GetTimeUS_Windows();
      in_stack_fffff384 = (HuffmanEncodingTreeNode *)CONCAT22(uStack_602,local_604);
      in_stack_fffff388 = CONCAT22(uStack_5fe,uStack_600);
      in_stack_fffff38c = (ushort)uStack_5fc;
      in_stack_fffff38e = (undefined2)(uStack_5fc >> 0x10);
      in_stack_fffff390 = (undefined2)uStack_5f8;
      in_stack_fffff392 = (undefined2)(uStack_5f8 >> 0x10);
      in_stack_fffff394 = SUB42(local_5f4,0);
      in_stack_fffff396 = (ushort)((uint)local_5f4 >> 0x10);
      in_stack_fffff380 = 0x5a98ff;
      SVar12._4_4_ = in_stack_fffff388;
      SVar12._0_4_ = in_stack_fffff384;
      SVar12._8_2_ = in_stack_fffff38c;
      SVar12._10_2_ = in_stack_fffff38e;
      SVar12._12_2_ = in_stack_fffff390;
      SVar12._14_2_ = in_stack_fffff392;
      SVar12.debugPort = in_stack_fffff394;
      SVar12.systemIndex = in_stack_fffff396;
      pRVar46 = this;
      ProcessNetworkPacket
                (SVar12,(char *)this,**(int **)(this + 0x424),(RakPeer *)_Var49,
                 (RakNetSocket2 *)(_Var49 >> 0x20),CONCAT44(unaff_EDI,pBVar28),unaff_ESI);
    }
  }
  while( true ) {
    EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x398));
    uVar31 = *(uint *)(this + 0x38c);
    if (*(uint *)(this + 0x390) < uVar31) {
      iVar29 = *(int *)(this + 0x394) - uVar31;
    }
    else {
      iVar29 = -uVar31;
    }
    if (*(uint *)(this + 0x390) + iVar29 == 0) break;
    iVar43 = *(int *)(this + 0x394);
    iVar29 = uVar31 + 1;
    *(int *)(this + 0x38c) = iVar29;
    if (iVar29 == iVar43) {
      *(undefined4 *)(this + 0x38c) = 0;
      iVar29 = *(int *)(*(int *)(this + 0x388) + -4 + iVar43 * 4);
    }
    else if (iVar29 == 0) {
      iVar29 = *(int *)(*(int *)(this + 0x388) + -4 + iVar43 * 4);
    }
    else {
      iVar29 = *(int *)(*(int *)(this + 0x388) + -4 + iVar29 * 4);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x398));
    if (iVar29 == 0) goto LAB_005a99f2;
    in_stack_fffff384 = *(HuffmanEncodingTreeNode **)(iVar29 + 0x5d8);
    in_stack_fffff388 = *(uint *)(iVar29 + 0x5dc);
    in_stack_fffff38c = (ushort)*(undefined4 *)(iVar29 + 0x5e0);
    in_stack_fffff38e = (undefined2)((uint)*(undefined4 *)(iVar29 + 0x5e0) >> 0x10);
    in_stack_fffff390 = (undefined2)*(undefined4 *)(iVar29 + 0x5e4);
    in_stack_fffff392 = (undefined2)((uint)*(undefined4 *)(iVar29 + 0x5e4) >> 0x10);
    in_stack_fffff394 = (undefined2)*(undefined4 *)(iVar29 + 0x5e8);
    in_stack_fffff396 = (ushort)((uint)*(undefined4 *)(iVar29 + 0x5e8) >> 0x10);
    in_stack_fffff380 = 0x5a99cf;
    SVar13._10_2_ = in_stack_fffff38e;
    SVar13._0_10_ = *(unkbyte10 *)(iVar29 + 0x5d8);
    SVar13._12_2_ = in_stack_fffff390;
    SVar13._14_2_ = in_stack_fffff392;
    SVar13.debugPort = in_stack_fffff394;
    SVar13.systemIndex = in_stack_fffff396;
    pRVar46 = this;
    ProcessNetworkPacket
              (SVar13,(char *)this,*(int *)(iVar29 + 0x5f8),*(RakPeer **)(iVar29 + 0x5f0),
               *(RakNetSocket2 **)(iVar29 + 0x5f4),CONCAT44(unaff_EDI,pBVar28),unaff_ESI);
    in_stack_fffff3a0 = (undefined1)iVar29;
    in_stack_fffff3a1 = (undefined1)((uint)iVar29 >> 8);
    in_stack_fffff3a2 = (undefined2)((uint)iVar29 >> 0x10);
    in_stack_fffff39c = 0xe6;
    in_stack_fffff39d = 0x99;
    in_stack_fffff39e = 0x5a;
    (**(code **)(*(int *)(this + 4) + 8))();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x398));
LAB_005a99f2:
  local_c14 = local_614._4_4_;
  local_c1c = local_60c;
  local_c0c = (uint)local_614;
  while (*(int *)(this + 0x33c) != *(int *)(this + 0x340)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x348));
    if (*(int *)(this + 0x33c) == *(int *)(this + 0x340)) {
      pHVar44 = (HuffmanEncodingTreeNode *)0x0;
    }
    else {
      iVar43 = *(int *)(this + 0x33c) + 1;
      *(int *)(this + 0x33c) = iVar43;
      iVar29 = *(int *)(this + 0x344);
      if (iVar43 == iVar29) {
        *(undefined4 *)(this + 0x33c) = 0;
        pHVar44 = *(HuffmanEncodingTreeNode **)(*(int *)(this + 0x338) + -4 + iVar29 * 4);
      }
      else if (iVar43 == 0) {
        pHVar44 = *(HuffmanEncodingTreeNode **)(*(int *)(this + 0x338) + -4 + iVar29 * 4);
      }
      else {
        pHVar44 = *(HuffmanEncodingTreeNode **)(*(int *)(this + 0x338) + -4 + iVar43 * 4);
      }
    }
    p_Var1 = (LPCRITICAL_SECTION)(this + 0x348);
    uVar64 = SUB41(p_Var1,0);
    uVar65 = (undefined1)((uint)p_Var1 >> 8);
    uVar60 = (undefined2)((uint)p_Var1 >> 0x10);
    uVar26 = 0xa7;
    uVar63 = 0x9a;
    uVar59 = 0x5a;
    pHStack_bc8 = pHVar44;
    LeaveCriticalSection(p_Var1);
    if (pHVar44 == (HuffmanEncodingTreeNode *)0x0) break;
    pHVar38 = pHVar44[5].left;
    if (pHVar38 == (HuffmanEncodingTreeNode *)0x0) {
      if ((int)local_c1c == 0 && local_c1c._4_4_ == 0) {
        local_c1c = GetTimeUS_Windows();
        uVar64 = 0;
        uVar65 = 0;
        uVar60 = 0;
        uVar50 = __aulldiv((uint)local_c1c,(uint)(local_c1c >> 0x20),1000,0);
        local_c0c = (uint)uVar50;
        local_c14 = (HuffmanEncodingTreeNode *)0x0;
      }
      in_stack_fffff384 = pHVar44->parent;
      in_stack_fffff388 = *(uint *)(pHVar44 + 1);
      in_stack_fffff38c = (ushort)pHVar44[1].weight;
      in_stack_fffff394 = SUB42(pHVar44[1].right,0);
      in_stack_fffff396 = (ushort)((uint)pHVar44[1].right >> 0x10);
      uVar61 = SUB42(pHVar44[1].parent,0);
      uVar57 = (undefined2)((uint)pHVar44[1].parent >> 0x10);
      in_stack_fffff380 = pHVar44[5].weight;
      AVar6.rakNetGuid.g._4_4_ = (int)local_c1c;
      AVar6.rakNetGuid.g._0_4_ = 1;
      AVar6.rakNetGuid._8_4_ = local_c1c._4_4_;
      AVar6.rakNetGuid._12_4_ = in_stack_fffff380;
      AVar6.systemAddress._0_4_ = in_stack_fffff384;
      AVar6.systemAddress._4_4_ = in_stack_fffff388;
      AVar6.systemAddress._8_2_ = in_stack_fffff38c;
      AVar6.systemAddress._10_2_ = in_stack_fffff38e;
      AVar6.systemAddress._12_2_ = in_stack_fffff390;
      AVar6.systemAddress._14_2_ = in_stack_fffff392;
      AVar6.systemAddress.debugPort = in_stack_fffff394;
      AVar6.systemAddress.systemIndex = in_stack_fffff396;
      AVar6._36_2_ = uVar61;
      AVar6._38_2_ = uVar57;
      in_stack_fffff37c = local_c1c._4_4_;
      bVar25 = SendImmediate(this,(char *)pHVar44[3].parent,*(uint *)pHVar44,pHVar44->weight,
                             (PacketReliability)pHVar44->left,*(char *)&pHVar44->right,AVar6,
                             SUB41(*(uint *)(pHVar44 + 2),0),SUB41(pHVar44[2].weight,0),
                             CONCAT26(uVar60,CONCAT15(uVar65,CONCAT14(uVar64,pHVar44[2].left))),
                             (uint)pBVar28);
      if (!bVar25) {
        free(pHVar44[3].parent);
      }
      pRVar46 = (RakPeer *)CONCAT22(uVar57,uVar61);
      if (*(uint *)(pHVar44 + 3) != 0) {
        AddressOrGUID::AddressOrGUID((AddressOrGUID *)&local_bfc,(AddressOrGUID *)&pHVar44->parent);
        if ((local_bfc == DAT_00657908) && (uStack_bf8 == DAT_0065790c)) {
          in_stack_fffff390 = (undefined2)local_bec;
          in_stack_fffff392 = (undefined2)(local_bec >> 0x10);
          in_stack_fffff394 = (undefined2)uStack_be8;
          in_stack_fffff396 = (ushort)(uStack_be8 >> 0x10);
          uVar60 = SUB42(pHStack_be4,0);
          uVar61 = (undefined2)((uint)pHStack_be4 >> 0x10);
          in_stack_fffff38c = 0x9bfa;
          in_stack_fffff38e = 0x5a;
          SVar14._4_1_ = SUB21(in_stack_fffff394,0);
          SVar14._5_1_ = SUB21(in_stack_fffff394,1);
          SVar14._0_4_ = local_bec;
          SVar14._6_2_ = in_stack_fffff396;
          SVar14._8_2_ = uVar60;
          SVar14._10_2_ = uVar61;
          SVar14._12_1_ = (char)pHStack_be0;
          SVar14._13_1_ = (char)((uint)pHStack_be0 >> 8);
          SVar14._14_2_ = (ushort)((uint)pHStack_be0 >> 0x10);
          SVar14.debugPort._0_1_ = (char)local_bdc;
          SVar14.debugPort._1_1_ = (char)((uint)local_bdc >> 8);
          SVar14.systemIndex = (ushort)((uint)local_bdc >> 0x10);
          pRVar30 = GetRemoteSystemFromSystemAddress(this,SVar14,true,true);
        }
        else {
          uVar60 = SUB42(local_bfc,0);
          uVar61 = (undefined2)((uint)local_bfc >> 0x10);
          in_stack_fffff394._0_1_ = (<>)0x14;
          in_stack_fffff394._1_1_ = 0x9c;
          in_stack_fffff396 = 0x5a;
          RVar21.g._4_1_ = (char)uStack_bf8;
          RVar21.g._0_4_ = local_bfc;
          RVar21.g._5_1_ = (char)(uStack_bf8 >> 8);
          RVar21.g._6_2_ = (ushort)(uStack_bf8 >> 0x10);
          RVar21.systemIndex._0_1_ = (char)puStack_bf4;
          RVar21.systemIndex._1_1_ = (char)((uint)puStack_bf4 >> 8);
          RVar21._10_2_ = (short)((uint)puStack_bf4 >> 0x10);
          RVar21._12_1_ = (char)uStack_bf0;
          RVar21._13_1_ = (char)(uStack_bf0 >> 8);
          RVar21._14_2_ = (ushort)(uStack_bf0 >> 0x10);
          pRVar30 = GetRemoteSystemFromGUID(this,RVar21,true);
        }
        pRVar46 = (RakPeer *)CONCAT22(uVar61,uVar60);
        if (pRVar30 != (RemoteSystemStruct *)0x0) {
          *(uint *)(pRVar30 + 0x120c) = *(uint *)(pHVar44 + 3);
          pRVar46 = (RakPeer *)CONCAT22(uVar61,uVar60);
        }
      }
    }
    else if (pHVar38 == (HuffmanEncodingTreeNode *)0x1) {
      pRVar46 = (RakPeer *)&pHVar44->parent;
      in_stack_fffff394._0_1_ = (<>)0x48;
      in_stack_fffff394._1_1_ = 0x9c;
      in_stack_fffff396 = 0x5a;
      CloseConnectionInternal
                (this,(AddressOrGUID *)pRVar46,false,true,*(uchar *)&pHVar44->right,pHVar44->weight)
      ;
    }
    else if (pHVar38 == (HuffmanEncodingTreeNode *)0x3) {
      AddressOrGUID::AddressOrGUID((AddressOrGUID *)&local_bfc,(RakNetGUID *)&pHVar44->parent);
      if ((local_bfc == DAT_00657908) && (uStack_bf8 == DAT_0065790c)) {
        in_stack_fffff390 = (undefined2)local_bec;
        in_stack_fffff392 = (undefined2)(local_bec >> 0x10);
        in_stack_fffff394 = (undefined2)uStack_be8;
        in_stack_fffff396 = (ushort)(uStack_be8 >> 0x10);
        uVar60 = SUB42(pHStack_be4,0);
        uVar61 = (undefined2)((uint)pHStack_be4 >> 0x10);
        in_stack_fffff38c = 0x9ca4;
        in_stack_fffff38e = 0x5a;
        SVar15._4_1_ = SUB21(in_stack_fffff394,0);
        SVar15._5_1_ = SUB21(in_stack_fffff394,1);
        SVar15._0_4_ = local_bec;
        SVar15._6_2_ = in_stack_fffff396;
        SVar15._8_2_ = uVar60;
        SVar15._10_2_ = uVar61;
        SVar15._12_1_ = (char)pHStack_be0;
        SVar15._13_1_ = (char)((uint)pHStack_be0 >> 8);
        SVar15._14_2_ = (ushort)((uint)pHStack_be0 >> 0x10);
        SVar15.debugPort._0_1_ = (char)local_bdc;
        SVar15.debugPort._1_1_ = (char)((uint)local_bdc >> 8);
        SVar15.systemIndex = (ushort)((uint)local_bdc >> 0x10);
        pRVar30 = GetRemoteSystemFromSystemAddress(this,SVar15,true,true);
      }
      else {
        uVar60 = SUB42(local_bfc,0);
        uVar61 = (undefined2)((uint)local_bfc >> 0x10);
        in_stack_fffff394._0_1_ = (<>)0xbe;
        in_stack_fffff394._1_1_ = 0x9c;
        in_stack_fffff396 = 0x5a;
        RVar22.g._4_1_ = (char)uStack_bf8;
        RVar22.g._0_4_ = local_bfc;
        RVar22.g._5_1_ = (char)(uStack_bf8 >> 8);
        RVar22.g._6_2_ = (ushort)(uStack_bf8 >> 0x10);
        RVar22.systemIndex._0_1_ = (char)puStack_bf4;
        RVar22.systemIndex._1_1_ = (char)((uint)puStack_bf4 >> 8);
        RVar22._10_2_ = (short)((uint)puStack_bf4 >> 0x10);
        RVar22._12_1_ = (char)uStack_bf0;
        RVar22._13_1_ = (char)(uStack_bf0 >> 8);
        RVar22._14_2_ = (ushort)(uStack_bf0 >> 0x10);
        pRVar30 = GetRemoteSystemFromGUID(this,RVar22,true);
      }
      pRVar46 = (RakPeer *)CONCAT22(uVar61,uVar60);
      if (pRVar30 != (RemoteSystemStruct *)0x0) {
        uVar31 = GetRemoteSystemIndex(this,(SystemAddress *)(pRVar30 + 4));
        ReferenceRemoteSystem(this,(SystemAddress *)&pHVar44[1].right,uVar31);
        pRVar46 = (RakPeer *)CONCAT22(uVar61,uVar60);
      }
    }
    else if (pHVar38 == (HuffmanEncodingTreeNode *)0x2) {
      if ((((pHVar44->parent == DAT_00657908) && (*(uint *)(pHVar44 + 1) == DAT_0065790c)) &&
          (*(short *)((int)&pHVar44[1].right + 2) == DAT_006578f6)) &&
         ((*(short *)&pHVar44[1].right == 2 && (pHVar44[1].parent == DAT_006578f8)))) {
        this_00 = (List<> *)
                  DataStructures::ThreadsafeAllocatingQueue<>::Allocate
                            ((ThreadsafeAllocatingQueue<> *)(this + 0x3b0),
                             (char *)CONCAT22(uVar59,CONCAT11(uVar63,uVar26)),
                             CONCAT22(uVar60,CONCAT11(uVar65,uVar64)));
        DataStructures::List<>::operator=(this_00,(List<> *)local_bc4);
        DataStructures::ThreadsafeAllocatingQueue<>::Push
                  ((ThreadsafeAllocatingQueue<> *)(this + 0x3b0),(BufferedCommandStruct *)this_00);
        this = local_c34;
      }
      else {
        uVar64 = true;
        uVar65 = 0;
        uVar60 = 0;
        uVar26 = true;
        uVar63 = 0;
        uVar59 = 0;
        AddressOrGUID::AddressOrGUID
                  ((AddressOrGUID *)&stack0xfffff37c,(AddressOrGUID *)&pHVar44->parent);
        AVar11.rakNetGuid.g._4_4_ = in_stack_fffff380;
        AVar11.rakNetGuid.g._0_4_ = in_stack_fffff37c;
        AVar11.rakNetGuid._8_4_ = in_stack_fffff384;
        AVar11.rakNetGuid._12_4_ = in_stack_fffff388;
        AVar11.systemAddress._0_2_ = in_stack_fffff38c;
        AVar11.systemAddress._2_2_ = in_stack_fffff38e;
        AVar11.systemAddress._4_2_ = in_stack_fffff390;
        AVar11.systemAddress._6_2_ = in_stack_fffff392;
        AVar11.systemAddress._8_1_ = SUB21(in_stack_fffff394,0);
        AVar11.systemAddress._9_1_ = SUB21(in_stack_fffff394,1);
        AVar11.systemAddress._10_2_ = in_stack_fffff396;
        AVar11.systemAddress._12_2_ = (short)pRVar46;
        AVar11.systemAddress._14_2_ = (short)((uint)pRVar46 >> 0x10);
        AVar11.systemAddress.debugPort._0_1_ = in_stack_fffff39c;
        AVar11.systemAddress.debugPort._1_1_ = in_stack_fffff39d;
        AVar11.systemAddress.systemIndex = in_stack_fffff39e;
        AVar11._36_1_ = in_stack_fffff3a0;
        AVar11._37_1_ = in_stack_fffff3a1;
        AVar11._38_2_ = in_stack_fffff3a2;
        local_5ec = (HuffmanEncodingTreeNode *)
                    GetRemoteSystem(this,AVar11,(bool)uVar26,(bool)uVar64);
        this_01 = DataStructures::ThreadsafeAllocatingQueue<>::Allocate
                            ((ThreadsafeAllocatingQueue<> *)(this + 0x3b0),
                             (char *)CONCAT22(uVar59,CONCAT11(uVar63,uVar26)),
                             CONCAT22(uVar60,CONCAT11(uVar65,uVar64)));
        if (*(int *)(this_01 + 8) != 0) {
          pvVar4 = *(void **)this_01;
          uVar64 = SUB41(pvVar4,0);
          uVar65 = (undefined1)((uint)pvVar4 >> 8);
          uVar60 = (undefined2)((uint)pvVar4 >> 0x10);
          uVar26 = 0x8d;
          uVar63 = 0x9d;
          uVar59 = 0x5a;
          operator_delete__(pvVar4);
          *(undefined4 *)(this_01 + 8) = 0;
          *(undefined4 *)this_01 = 0;
          *(undefined4 *)(this_01 + 4) = 0;
        }
        if (local_5ec != (HuffmanEncodingTreeNode *)0x0) {
          DataStructures::List<>::Insert
                    ((List<> *)this_01,(uint *)&local_5ec[0xe6].right,
                     (char *)CONCAT22(uVar59,CONCAT11(uVar63,uVar26)),
                     CONCAT22(uVar60,CONCAT11(uVar65,uVar64)));
        }
        DataStructures::ThreadsafeAllocatingQueue<>::Push
                  ((ThreadsafeAllocatingQueue<> *)(this + 0x3b0),(BufferedCommandStruct *)this_01);
      }
    }
    p_Var1 = (LPCRITICAL_SECTION)(this + 800);
    uVar64 = SUB41(p_Var1,0);
    uVar65 = (undefined1)((uint)p_Var1 >> 8);
    uVar60 = (undefined2)((uint)p_Var1 >> 0x10);
    uVar26 = 0xd7;
    uVar63 = 0x9d;
    uVar59 = 0x5a;
    EnterCriticalSection(p_Var1);
    in_stack_fffff3a0 = SUB41(pHStack_bc8,0);
    in_stack_fffff3a1 = (undefined1)((uint)pHStack_bc8 >> 8);
    in_stack_fffff3a2 = (undefined2)((uint)pHStack_bc8 >> 0x10);
    in_stack_fffff39c = 0xeb;
    in_stack_fffff39d = 0x9d;
    in_stack_fffff39e = 0x5a;
    DataStructures::MemoryPool<>::Release
              ((MemoryPool<> *)(this + 0x30c),(BufferedCommandStruct *)pHStack_bc8,
               (char *)CONCAT22(uVar59,CONCAT11(uVar63,uVar26)),
               CONCAT22(uVar60,CONCAT11(uVar65,uVar64)));
    LeaveCriticalSection(p_Var1);
  }
  if (*(int *)(this + 0x2e8) != *(int *)(this + 0x2ec)) {
    if ((int)local_c1c == 0 && local_c1c._4_4_ == 0) {
      local_c1c = GetTimeUS_Windows();
      uVar50 = __aulldiv((uint)local_c1c,(uint)(local_c1c >> 0x20),1000,0);
      local_c0c = (uint)uVar50;
      local_c14 = (HuffmanEncodingTreeNode *)0x0;
    }
    pRVar30 = (RemoteSystemStruct *)0x0;
    local_c08 = pRVar30;
    while( true ) {
      EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x2f4));
      uVar31 = *(uint *)(this + 0x2e8);
      if (*(uint *)(this + 0x2ec) < uVar31) {
        iVar29 = *(int *)(this + 0x2f0) - uVar31;
      }
      else {
        iVar29 = -uVar31;
      }
      if ((RemoteSystemStruct *)(*(uint *)(this + 0x2ec) + iVar29) <= pRVar30) break;
      if (pRVar30 + uVar31 < *(RemoteSystemStruct **)(this + 0x2f0)) {
        puVar45 = (undefined4 *)(*(int *)(this + 0x2e4) + (int)(pRVar30 + uVar31) * 4);
      }
      else {
        puVar45 = (undefined4 *)
                  (*(int *)(this + 0x2e4) +
                  (int)(local_c08 + (uVar31 - (int)*(RemoteSystemStruct **)(this + 0x2f0))) * 4);
      }
      pHVar44 = (HuffmanEncodingTreeNode *)*puVar45;
      p_Var1 = (LPCRITICAL_SECTION)(this + 0x2f4);
      uVar64 = SUB41(p_Var1,0);
      uVar65 = (undefined1)((uint)p_Var1 >> 8);
      uVar60 = (undefined2)((uint)p_Var1 >> 0x10);
      uVar26 = 0xc2;
      uVar63 = 0x9e;
      uVar59 = 0x5a;
      local_5ec = pHVar44;
      LeaveCriticalSection(p_Var1);
      if ((local_c14 < pHVar44[1].left) ||
         ((local_c14 <= pHVar44[1].left && (local_c0c <= pHVar44[1].weight)))) {
        pRVar30 = local_c08 + 1;
        local_c08 = pRVar30;
      }
      else {
        local_bc4 = (HuffmanEncodingTreeNode *)&(pHVar44[0xf].left)->field_0x1;
        pHStack_bc8 = (HuffmanEncodingTreeNode *)(uint)*(byte *)&pHVar44[1].right;
        if (((*(short *)&pHVar44->field_0x2 == DAT_006578f6) && (*(short *)pHVar44 == 2)) &&
           ((HuffmanEncodingTreeNode *)pHVar44->weight == DAT_006578f8)) {
          local_5ee = '\x01';
        }
        else {
          local_5ee = '\0';
        }
        if ((pHStack_bc8 == local_bc4) || (local_5ee != '\0')) {
          pHVar38 = pHVar44[1].parent;
          if (pHVar38 != (HuffmanEncodingTreeNode *)0x0) {
            uVar64 = SUB41(pHVar38,0);
            uVar65 = (undefined1)((uint)pHVar38 >> 8);
            uVar60 = (undefined2)((uint)pHVar38 >> 0x10);
            uVar26 = 0xe0;
            uVar63 = 0xa3;
            uVar59 = 0x5a;
            free(pHVar38);
            pHVar44[1].parent = (HuffmanEncodingTreeNode *)0x0;
          }
          if (((pHStack_bc8 == local_bc4) && (local_5ee == '\0')) &&
             (pHVar44[0x10].left == (HuffmanEncodingTreeNode *)&DAT_00000001)) {
            local_bc4 = (HuffmanEncodingTreeNode *)
                        AllocPacket(this,1,(char *)CONCAT22(uVar59,CONCAT11(uVar63,uVar26)),
                                    CONCAT22(uVar60,CONCAT11(uVar65,uVar64)));
            (local_bc4[2].left)->value = '\x11';
            local_bc4[2].weight = 8;
            uVar24 = *(undefined3 *)&pHVar44->field_0x1;
            uVar31 = pHVar44->weight;
            pHVar38 = pHVar44->left;
            pHVar5 = pHVar44->right;
            local_bc4->value = pHVar44->value;
            *(undefined3 *)&local_bc4->field_0x1 = uVar24;
            local_bc4->weight = uVar31;
            local_bc4->left = pHVar38;
            local_bc4->right = pHVar5;
            *(ushort *)((int)&local_bc4->parent + 2) = *(ushort *)((int)&pHVar44->parent + 2);
            p_Var1 = (LPCRITICAL_SECTION)(this + 0x59c);
            uVar64 = SUB41(p_Var1,0);
            uVar65 = (undefined1)((uint)p_Var1 >> 8);
            uVar60 = (undefined2)((uint)p_Var1 >> 0x10);
            *(ushort *)&local_bc4->parent = *(ushort *)&pHVar44->parent;
            uVar26 = 0x4e;
            uVar63 = 0xa4;
            uVar59 = 0x5a;
            EnterCriticalSection(p_Var1);
            DataStructures::Queue<>::Push
                      ((Queue<> *)(this + 0x5b4),&local_bc4,
                       (char *)CONCAT22(uVar59,CONCAT11(uVar63,uVar26)),
                       CONCAT22(uVar60,CONCAT11(uVar65,uVar64)));
            LeaveCriticalSection(p_Var1);
            pHVar44 = local_5ec;
          }
          operator_delete(pHVar44,(nothrow_t *)0x150);
          EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x2f4));
          pHVar44 = *(HuffmanEncodingTreeNode **)(this + 0x2e8);
          pHStack_bc8 = (HuffmanEncodingTreeNode *)0x0;
          local_c10 = (uchar *)((int)pHVar44 * 4);
          local_c04 = pHVar44;
          while( true ) {
            if (*(HuffmanEncodingTreeNode **)(this + 0x2ec) < pHVar44) {
              pHVar38 = (HuffmanEncodingTreeNode *)
                        ((*(int *)(this + 0x2f0) - (int)pHVar44) + *(int *)(this + 0x2ec));
            }
            else {
              pHVar38 = (HuffmanEncodingTreeNode *)
                        ((int)*(HuffmanEncodingTreeNode **)(this + 0x2ec) - (int)pHVar44);
            }
            if (pHVar38 <= pHStack_bc8) goto LAB_005aa52b;
            local_bc4 = *(HuffmanEncodingTreeNode **)(this + 0x2f0);
            puVar32 = local_c10;
            if (local_bc4 <= local_c04) {
              puVar32 = (uchar *)((int)(((int)pHVar44 - (int)local_bc4) + (int)pHStack_bc8) * 4);
            }
            if (*(HuffmanEncodingTreeNode **)(puVar32 + *(int *)(this + 0x2e4)) == local_5ec) break;
            local_c10 = local_c10 + 4;
            pHStack_bc8 = (HuffmanEncodingTreeNode *)&pHStack_bc8->field_0x1;
            local_c04 = (HuffmanEncodingTreeNode *)&local_c04->field_0x1;
          }
          DataStructures::Queue<>::RemoveAtIndex((Queue<> *)(this + 0x2e4),(uint)pHStack_bc8);
LAB_005aa52b:
          LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2f4));
          pRVar30 = local_c08;
        }
        else {
          local_c10 = (uchar *)(ZEXT48(pHStack_bc8) / (ZEXT48(pHVar44[0xf].left) / 3));
          uVar26 = 0x14;
          if (&DAT_00000002 < local_c10) {
            local_c10 = &DAT_00000002;
          }
          *(char *)&pHVar44[1].right = *(char *)&pHVar44[1].right + '\x01';
          pHVar38 = pHVar44[0xf].right;
          pHVar44[1].left =
               (HuffmanEncodingTreeNode *)(&local_c14->value + CARRY4((uint)pHVar38,local_c0c));
          pHVar44[1].weight = (uint)(&pHVar38->value + local_c0c);
          memset(&local_770,0,0x114);
          local_770.data = local_770.stackData;
          local_770.numberOfBitsUsed = 0;
          local_770.numberOfBitsAllocated = 0x800;
          local_770.readOffset = 0;
          local_770.copyData = true;
          local_8 = 0;
          local_5ed = '\x05';
          BitStream::WriteBits(&local_770,&local_5ed,8,(bool)uVar26);
          uVar31 = local_770.numberOfBitsUsed - 1 & 7;
          local_770.numberOfBitsUsed = local_770.numberOfBitsUsed + (7 - uVar31);
          if ((local_770.numberOfBitsUsed & 7) == 0) {
            BitStream::AddBitsAndReallocate(&local_770,0x80);
            puVar32 = local_770.data + ((uint)((int)(local_770.numberOfBitsUsed + 4) + 3) >> 3);
            puVar32[0] = '\0';
            puVar32[1] = 0xff;
            puVar32[2] = 0xff;
            puVar32[3] = '\0';
            puVar32[4] = 0xfe;
            puVar32[5] = 0xfe;
            puVar32[6] = 0xfe;
            puVar32[7] = 0xfe;
            puVar32[8] = 0xfd;
            puVar32[9] = 0xfd;
            puVar32[10] = 0xfd;
            puVar32[0xb] = 0xfd;
            puVar32[0xc] = '\x12';
            puVar32[0xd] = '4';
            puVar32[0xe] = 'V';
            puVar32[0xf] = 'x';
            local_770.numberOfBitsUsed =
                 (uint)&((HuffmanEncodingTreeNode *)(local_770.numberOfBitsUsed + 0x78))->left;
            uVar26 = extraout_CL;
          }
          else {
            BitStream::WriteBits(&local_770,"",0x80,SUB41(uVar31,0));
            uVar26 = extraout_CL_00;
          }
          local_5ed = '\x06';
          BitStream::WriteBits(&local_770,&local_5ed,8,(bool)uVar26);
          pHVar38 = (HuffmanEncodingTreeNode *)
                    (*(int *)(&UNK_005e2fa0 + (int)local_c10 * 4) + -0x1c);
          if ((HuffmanEncodingTreeNode *)((uint)((int)(local_770.numberOfBitsUsed + 4) + 3U) >> 3) <
              pHVar38) {
            uVar31 = (uint)((int)&((HuffmanEncodingTreeNode *)(local_770.numberOfBitsUsed + -0x14))
                                  ->parent + 3U) & 7;
            pHStack_bc8 = (HuffmanEncodingTreeNode *)
                          ((int)pHVar38 - (local_770.numberOfBitsUsed + (0xe - uVar31) >> 3));
            local_770.numberOfBitsUsed = local_770.numberOfBitsUsed + (7 - uVar31);
            BitStream::AddBitsAndReallocate(&local_770,(int)pHStack_bc8 * 8);
            memset(local_770.data + (local_770.numberOfBitsUsed + 7 >> 3),0,(size_t)pHStack_bc8);
            local_770.numberOfBitsUsed = local_770.numberOfBitsUsed + (int)pHStack_bc8 * 8;
            pHVar38 = pHStack_bc8;
          }
          SystemAddress::ToString((SystemAddress *)pHVar44,true,local_870,(char)pHVar38);
          puVar39 = (undefined1 *)0x0;
          pHStack_bc8 = (HuffmanEncodingTreeNode *)0x0;
          if (*(int *)(this + 0x2dc) != 0) {
            do {
              (**(code **)(**(int **)(*(int *)(this + 0x2d8) + (int)pHStack_bc8 * 4) + 0x2c))();
              puVar39 = &pHStack_bc8->field_0x1;
              pHVar44 = local_5ec;
              pHStack_bc8 = (HuffmanEncodingTreeNode *)puVar39;
            } while (puVar39 < *(undefined1 **)(this + 0x2dc));
          }
          pHStack_bc8 = (HuffmanEncodingTreeNode *)pHVar44[0x10].weight;
          if (pHStack_bc8 == (HuffmanEncodingTreeNode *)0x0) {
            puVar39 = *(undefined1 **)(pHVar44 + 0xf);
            pHStack_bc8 = *(HuffmanEncodingTreeNode **)(*(int *)(this + 0x424) + (int)puVar39 * 4);
          }
          uStack_5fc = *(uint *)(pHStack_bc8 + 1);
          uStack_5f8 = pHStack_bc8[1].weight;
          local_5f4 = pHStack_bc8[1].left;
          local_604 = (ushort)pHStack_bc8->right;
          uStack_602 = (u_short)((uint)pHStack_bc8->right >> 0x10);
          uStack_600 = SUB42(pHStack_bc8->parent,0);
          uStack_5fe = (ushort)((uint)pHStack_bc8->parent >> 0x10);
          SystemAddress::ToString
                    ((SystemAddress *)pHVar44,false,(char *)(local_850.runningTotal + 5),
                     (char)puVar39);
          pbVar40 = &s___1;
          p_Var33 = local_850.runningTotal + 5;
          do {
            bVar2 = (byte)*p_Var33;
            bVar25 = bVar2 < *pbVar40;
            if (bVar2 != *pbVar40) {
LAB_005aa1e1:
              uVar31 = -(uint)bVar25 | 1;
              goto LAB_005aa1e6;
            }
            if (bVar2 == 0) break;
            bVar2 = *(byte *)((int)p_Var33 + 1);
            bVar25 = bVar2 < pbVar40[1];
            if (bVar2 != pbVar40[1]) goto LAB_005aa1e1;
            p_Var33 = (__uint64 *)((int)p_Var33 + 2);
            pbVar40 = pbVar40 + 2;
          } while (bVar2 != 0);
          uVar31 = 0;
LAB_005aa1e6:
          if ((uVar31 == 0) && (local_604 == 2)) {
            SystemAddress::SetBinaryAddress((SystemAddress *)pHVar44,"127.0.0.1",(char)pbVar40);
          }
          if ((pHStack_bc8->left != (HuffmanEncodingTreeNode *)0x3) &&
             (pHStack_bc8->left != (HuffmanEncodingTreeNode *)0x0)) {
            local_bc4 = (HuffmanEncodingTreeNode *)&DAT_00000001;
            setsockopt((SOCKET)pHStack_bc8[1].parent,0,0xe,(char *)&local_bc4,4);
          }
          _Var49 = GetTimeUS_Windows();
          uVar50 = __aulldiv((uint)_Var49,(uint)(_Var49 >> 0x20),1000,0);
          local_5ec = (HuffmanEncodingTreeNode *)((ulonglong)uVar50 >> 0x20);
          local_bc4 = (HuffmanEncodingTreeNode *)uVar50;
          puStack_bf4 = local_770.data;
          uStack_bf0 = (uint)((int)(local_770.numberOfBitsUsed + 4) + 3) >> 3;
          local_bec = *(uint *)pHVar44;
          uStack_be8 = pHVar44->weight;
          pHStack_be4 = pHVar44->left;
          pHStack_be0 = pHVar44->right;
          local_bdc = pHVar44->parent;
          local_bd8 = 0;
          iVar29 = (**(code **)(*(uint *)pHStack_bc8 + 4))();
          if (iVar29 == 0x2738) {
            cVar37 = (char)((uint)pHVar44[0xf].left / 3) * ((char)local_c10 + '\x01');
            pHVar44[1].weight = local_c0c;
            pHVar44[1].left = local_c14;
LAB_005aa358:
            *(char *)&pHVar44[1].right = cVar37;
          }
          else {
            _Var49 = GetTimeUS_Windows();
            lVar51 = __aulldiv((uint)_Var49,(uint)(_Var49 >> 0x20),1000,0);
            lVar51 = lVar51 - CONCAT44(local_5ec,local_bc4);
            local_65c._4_4_ = (int)((ulonglong)lVar51 >> 0x20);
            if ((local_65c._4_4_ != 0) || (100 < (uint)lVar51)) {
              uVar31 = (uint)(ZEXT48(pHVar44[0xf].left) * 0xaaaaaaab >> 0x20) & 0xfffffffe;
              if ((int)uVar31 <= (int)(uint)*(byte *)&pHVar44[1].right) {
                cVar37 = (char)pHVar44[0xf].left + '\x01';
                goto LAB_005aa358;
              }
              pHVar44[1].weight = local_c0c;
              *(char *)&pHVar44[1].right = (char)uVar31;
              pHVar44[1].left = local_c14;
            }
          }
          if ((pHStack_bc8->left != (HuffmanEncodingTreeNode *)0x3) &&
             (pHStack_bc8->left != (HuffmanEncodingTreeNode *)0x0)) {
            local_bc4 = (HuffmanEncodingTreeNode *)0x0;
            setsockopt((SOCKET)pHStack_bc8[1].parent,0,0xe,(char *)&local_bc4,4);
          }
          pRVar30 = local_c08 + 1;
          local_8 = 0xffffffff;
          local_c08 = pRVar30;
          if ((local_770.copyData != false) && (0x800 < local_770.numberOfBitsAllocated)) {
            free(local_770.data);
          }
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2f4));
  }
  local_bc4 = (HuffmanEncodingTreeNode *)0x0;
  if (*(int *)(this + 0x234) != 0) {
    do {
      pRVar30 = *(RemoteSystemStruct **)(*(int *)(this + 0x230) + (int)local_bc4 * 4);
      local_c30._0_4_ = *(undefined4 *)(pRVar30 + 4);
      local_c30._4_4_ = *(undefined4 *)(pRVar30 + 8);
      pHStack_c28 = *(HuffmanEncodingTreeNode **)(pRVar30 + 0xc);
      pHStack_c24 = *(HuffmanEncodingTreeNode **)(pRVar30 + 0x10);
      local_c20 = *(HuffmanEncodingTreeNode **)(pRVar30 + 0x14);
      local_c08 = pRVar30;
      local_bd4 = local_c30._0_4_;
      uStack_bd0 = local_c30._4_4_;
      pHStack_bcc = pHStack_c28;
      pHStack_bc8 = pHStack_c24;
      if ((int)local_c1c == 0 && local_c1c._4_4_ == 0) {
        local_c1c = GetTimeUS_Windows();
        uVar50 = __aulldiv((uint)local_c1c,(uint)(local_c1c >> 0x20),1000,0);
        local_c0c = (uint)uVar50;
        local_c14 = (HuffmanEncodingTreeNode *)0x0;
      }
      uVar31 = *(uint *)(pRVar30 + 0x11e0);
      if ((*(HuffmanEncodingTreeNode **)(pRVar30 + 0x11e4) <= local_c14) &&
         ((local_c14 != *(HuffmanEncodingTreeNode **)(pRVar30 + 0x11e4) || (uVar31 < local_c0c)))) {
        if ((((int)local_c14 - *(int *)(pRVar30 + 0x11e4) != (uint)(local_c0c < uVar31)) ||
            (*(uint *)(pRVar30 + 0x9b8) >> 1 < local_c0c - uVar31)) &&
           ((*(int *)(pRVar30 + 0x120c) == 7 &&
            (pRVar34 = ReliabilityLayer::GetStatistics
                                 ((ReliabilityLayer *)(pRVar30 + 0xf8),&local_850),
            pRVar34->messagesInResendBuffer == 0)))) {
          SVar16._4_1_ = SUB21((short)uStack_bd0,0);
          SVar16._5_1_ = SUB21((short)uStack_bd0,1);
          SVar16._0_4_ = local_bd4;
          SVar16._6_2_ = (short)(uStack_bd0 >> 0x10);
          SVar16._8_2_ = (short)pHStack_bcc;
          SVar16._10_2_ = (short)((uint)pHStack_bcc >> 0x10);
          SVar16._12_1_ = (char)pHStack_bc8;
          SVar16._13_1_ = (char)((uint)pHStack_bc8 >> 8);
          SVar16._14_2_ = (ushort)((uint)pHStack_bc8 >> 0x10);
          SVar16.debugPort._0_1_ = (char)local_c20;
          SVar16.debugPort._1_1_ = (char)((uint)local_c20 >> 8);
          SVar16.systemIndex = (ushort)((uint)local_c20 >> 0x10);
          PingInternal(this,SVar16,true,RELIABLE);
          *(uint *)(pRVar30 + 0x11e0) = local_c0c;
          *(HuffmanEncodingTreeNode **)(pRVar30 + 0x11e4) = local_c14;
        }
      }
      uVar64 = SUB41(local_c38,0);
      uVar65 = (undefined1)((uint)local_c38 >> 8);
      uVar57 = (undefined2)((uint)local_c38 >> 0x10);
      this_05 = (ReliabilityLayer *)(pRVar30 + 0xf8);
      uVar26 = SUB41(this_05,0);
      uVar63 = (undefined1)((uint)this_05 >> 8);
      uVar59 = (ushort)((uint)this_05 >> 0x10);
      uVar41 = *(undefined4 *)(this + 0x460);
      pSVar56 = (SystemAddress *)local_c30;
      uVar60 = (undefined2)local_c1c;
      uVar61 = (undefined2)(local_c1c >> 0x10);
      pRVar53 = *(RakNetSocket2 **)(pRVar30 + 0x1204);
      uVar52._0_2_ = 0xa6c8;
      uVar52._2_2_ = 0x5a;
      ReliabilityLayer::Update
                (this_05,pRVar53,pSVar56,(int)this_05,
                 CONCAT26((ushort)((uint)uVar41 >> 0x10),
                          CONCAT15((char)((uint)uVar41 >> 8),CONCAT14((char)uVar41,local_c1c._4_4_))
                         ),(uint)(this + 0x2d8),(List<> *)this_05,local_c38,pBVar28);
      if ((pRVar30[0x9b4] == (RemoteSystemStruct)0x0) &&
         ((((iVar29 = *(int *)(pRVar30 + 0x120c), iVar29 != 1 && (iVar29 != 2)) ||
           (*(int *)(pRVar30 + 0x970) != 0)) || (*(int *)(pRVar30 + 0xa88) != 0)))) {
        if (iVar29 == 3) {
          if (*(int *)(pRVar30 + 0x105c) != 0) {
            uVar31 = *(uint *)(pRVar30 + 0x968);
            pHStack_bc8 = (HuffmanEncodingTreeNode *)(-(uint)(uVar31 < local_c0c) - (int)local_c14);
            if (((pHStack_bc8 == (HuffmanEncodingTreeNode *)0x0) && (uVar31 - local_c0c < 0x2711))
               || ((local_c14 == (HuffmanEncodingTreeNode *)(uint)(local_c0c < uVar31) &&
                   (local_c0c - uVar31 <= *(uint *)(pRVar30 + 0x9b8))))) goto LAB_005aa871;
          }
          goto LAB_005aa764;
        }
        if (((iVar29 == 4) || (iVar29 == 5)) || (iVar29 == 6)) {
          uVar31 = *(uint *)(pRVar30 + 0x11e8);
          if (((*(HuffmanEncodingTreeNode **)(pRVar30 + 0x11ec) <= local_c14) &&
              ((local_c14 != *(HuffmanEncodingTreeNode **)(pRVar30 + 0x11ec) || (uVar31 < local_c0c)
               ))) && (((int)local_c14 - *(int *)(pRVar30 + 0x11ec) != (uint)(local_c0c < uVar31) ||
                       (10000 < local_c0c - uVar31)))) goto LAB_005aa764;
        }
        if ((((iVar29 == 7) && (*(HuffmanEncodingTreeNode **)(pRVar30 + 0x11dc) <= local_c14)) &&
            ((local_c14 != *(HuffmanEncodingTreeNode **)(pRVar30 + 0x11dc) ||
             (*(uint *)(pRVar30 + 0x11d8) < local_c0c)))) &&
           ((this[10] != (RakPeer)0x0 || (*(short *)(pRVar30 + 0x11d0) == -1)))) {
          *(uint *)(pRVar30 + 0x11d8) = local_c0c + 5000;
          *(uchar **)(pRVar30 + 0x11dc) = &local_c14->value + (0xffffec77 < local_c0c);
          uVar54 = 0xa865;
          uVar57 = 0x5a;
          SVar17._4_2_ = local_c30._4_2_;
          SVar17._0_4_ = local_c30._0_4_;
          SVar17._6_2_ = local_c30._6_2_;
          SVar17._8_2_ = pHStack_c28._0_2_;
          SVar17._10_2_ = pHStack_c28._2_2_;
          SVar17._12_1_ = (char)pHStack_c24;
          SVar17._13_1_ = (char)((uint)pHStack_c24 >> 8);
          SVar17._14_2_ = pHStack_c24._2_2_;
          SVar17.debugPort._0_1_ = (char)local_c20;
          SVar17.debugPort._1_1_ = (char)((uint)local_c20 >> 8);
          SVar17.systemIndex = (ushort)((uint)local_c20 >> 0x10);
          uVar55 = local_c30._0_2_;
          uVar59 = local_c30._2_2_;
          uVar60 = local_c30._4_2_;
          uVar61 = local_c30._6_2_;
          PingInternal(this,SVar17,true,UNRELIABLE);
          SetEvent(*(HANDLE *)(this + 0x568));
          this_05 = (ReliabilityLayer *)(uint)uVar55;
          pSVar56 = (SystemAddress *)CONCAT22(uVar57,uVar54);
        }
LAB_005aa871:
        uVar57 = SUB42(this_05,0);
        uVar31 = *(uint *)(pRVar30 + 0xfc);
        if (*(uint *)(pRVar30 + 0x100) < uVar31) {
          iVar29 = *(int *)(pRVar30 + 0x104) - uVar31;
        }
        else {
          iVar29 = -uVar31;
        }
        pRVar35 = pRVar30 + 0xf8;
        if (*(uint *)(pRVar30 + 0x100) + iVar29 != 0) {
          iVar29 = uVar31 + 1;
          *(int *)(pRVar30 + 0xfc) = iVar29;
          iVar43 = *(int *)(pRVar30 + 0x104);
          if (iVar29 == iVar43) {
            *(undefined4 *)(pRVar30 + 0xfc) = 0;
            pIVar42 = *(InternalPacket **)(*(int *)pRVar35 + -4 + iVar43 * 4);
          }
          else if (iVar29 == 0) {
            pIVar42 = *(InternalPacket **)(*(int *)pRVar35 + -4 + iVar43 * 4);
          }
          else {
            pIVar42 = *(InternalPacket **)(*(int *)pRVar35 + -4 + iVar29 * 4);
          }
          local_c04 = *(HuffmanEncodingTreeNode **)(pIVar42 + 0x44);
          local_5ec = *(HuffmanEncodingTreeNode **)(pIVar42 + 0x18);
          uVar64 = SUB41(pIVar42,0);
          uVar65 = (undefined1)((uint)pIVar42 >> 8);
          uVar58 = (undefined2)((uint)pIVar42 >> 0x10);
          uVar26 = 0xe9;
          uVar63 = 0xa8;
          uVar55 = 0x5a;
          ReliabilityLayer::ReleaseToInternalPacketPool
                    ((ReliabilityLayer *)(pRVar30 + 0xf8),pIVar42);
          pRVar46 = local_c34;
          while ((local_c34 = pRVar46, local_5ec != (HuffmanEncodingTreeNode *)0x0 &&
                 (<Var3 = *(<> *)&local_c04->value, <Var3 != (<>)0x11))) {
            pHStack_bc8 = *(HuffmanEncodingTreeNode **)(pRVar30 + 0x120c);
            puVar39 = (undefined1 *)((int)&local_5ec->weight + 3);
            local_c10 = (uchar *)((uint)puVar39 >> 3);
            uVar54 = (ushort)((uint)puVar39 >> 0x10);
            uVar62 = SUB42(local_c10,0);
            if (pHStack_bc8 == (HuffmanEncodingTreeNode *)0x6) {
              if (<Var3 == (<>)0x9) {
                ParseConnectionRequestPacket
                          (pRVar46,pRVar30,(SystemAddress *)local_c30,(char *)local_c04,
                           CONCAT22(uVar54 >> 3,uVar62));
                free(local_c04);
              }
              else {
                AddressOrGUID::AddressOrGUID((AddressOrGUID *)&local_bfc,(SystemAddress *)local_c30)
                ;
                uVar60._0_1_ = (<>)0x83;
                uVar60._1_1_ = 0xa9;
                uVar61 = 0x5a;
                CloseConnectionInternal
                          (pRVar46,(AddressOrGUID *)&local_bfc,false,true,'\0',LOW_PRIORITY);
                SystemAddress::ToString
                          ((SystemAddress *)local_c30,false,
                           (char *)(local_850.messageInSendBuffer + 2),extraout_CL_01);
                (**(code **)(*(int *)pRVar46 + 0x84))();
                free(local_c04);
              }
            }
            else if (<Var3 == (<>)0x9) {
              if (pHStack_bc8 == (HuffmanEncodingTreeNode *)&DAT_00000004) {
                ParseConnectionRequestPacket
                          (pRVar46,pRVar30,(SystemAddress *)local_c30,(char *)local_c04,
                           CONCAT22(uVar54 >> 3,uVar62));
                free(local_c04);
              }
              else {
                memset(&local_bc0,0,0x114);
                local_bc0.numberOfBitsUsed = (int)local_c10 << 3;
                local_bc0.copyData = false;
                local_bc0.data = &local_c04->value;
                local_8 = 1;
                local_bc0.readOffset = 200;
                local_bc0.numberOfBitsAllocated = local_bc0.numberOfBitsUsed;
                BitStream::Read<>(&local_bc0,&local_62c);
                OnConnectionRequest(pRVar46,pRVar30,CONCAT44(pBVar28,local_62c._4_4_));
                local_8 = 0xffffffff;
                if ((local_bc0.copyData != false) && (0x800 < local_bc0.numberOfBitsAllocated)) {
                  free(local_bc0.data);
                }
                free(local_c04);
              }
            }
            else if (<Var3 == (<>)0x13) {
              if (local_c10 < (uchar *)0x18) goto LAB_005ab0e4;
              if (pHStack_bc8 == (HuffmanEncodingTreeNode *)0x5) {
                *(undefined4 *)(pRVar30 + 0x120c) = 7;
                uVar57 = (undefined2)local_c30._0_4_;
                uVar59 = (ushort)((uint)local_c30._0_4_ >> 0x10);
                uVar55 = 0xaaf9;
                uVar58 = 0x5a;
                SVar18._4_1_ = SUB21((short)local_c30._4_4_,0);
                SVar18._5_1_ = SUB21((short)local_c30._4_4_,1);
                SVar18._0_4_ = local_c30._0_4_;
                SVar18._6_2_ = (short)((uint)local_c30._4_4_ >> 0x10);
                SVar18._8_2_ = (short)pHStack_c28;
                SVar18._10_2_ = (short)((uint)pHStack_c28 >> 0x10);
                SVar18._12_1_ = (char)pHStack_c24;
                SVar18._13_1_ = (char)((uint)pHStack_c24 >> 8);
                SVar18._14_2_ = (ushort)((uint)pHStack_c24 >> 0x10);
                SVar18.debugPort._0_1_ = (char)local_c20;
                SVar18.debugPort._1_1_ = (char)((uint)local_c20 >> 8);
                SVar18.systemIndex = (ushort)((uint)local_c20 >> 0x10);
                PingInternal(pRVar46,SVar18,true,UNRELIABLE);
                SetEvent(*(HANDLE *)(pRVar46 + 0x568));
                uVar26 = 0x14;
                memset(local_884,0,0x114);
                local_884._0_4_ = (int)local_c10 << 3;
                local_884[0x10] = false;
                local_884._12_4_ = local_c04;
                local_8 = 2;
                local_5f4 = (HuffmanEncodingTreeNode *)0xffff0000;
                local_884._8_4_ = 8;
                uStack_602 = 0;
                uStack_600 = 0;
                uStack_5fe = 0;
                uStack_5fc = 0;
                uStack_5f8 = 0;
                local_604 = 2;
                pHStack_bc8 = (HuffmanEncodingTreeNode *)0x0;
                local_884._4_4_ = local_884._0_4_;
                BitStream::ReadBits((BitStream *)local_884,&local_5ed,8,(bool)uVar26);
                uVar41 = extraout_ECX;
                if (local_5ed == '\x04') {
                  BitStream::ReadBits((BitStream *)local_884,(uchar *)&local_620,0x20,
                                      SUB41(extraout_ECX,0));
                  uStack_600 = (undefined2)~local_620;
                  uStack_5fe = (ushort)(~local_620 >> 0x10);
                  BitStream::ReadBits((BitStream *)local_884,(uchar *)&uStack_602,0x10,
                                      extraout_CL_02);
                  uVar27 = ntohs(uStack_602);
                  pHStack_bc8 = (HuffmanEncodingTreeNode *)CONCAT22(pHStack_bc8._2_2_,uVar27);
                  uVar41 = extraout_ECX_00;
                }
                pRVar30 = pRVar30 + 0x2e;
                iVar29 = 10;
                do {
                  BitStream::ReadBits((BitStream *)local_884,&local_5ee,8,SUB41(uVar41,0));
                  uVar41 = extraout_ECX_01;
                  if (local_5ee == '\x04') {
                    *(u_short *)(pRVar30 + -2) = 2;
                    BitStream::ReadBits((BitStream *)local_884,(uchar *)&local_624,0x20,
                                        SUB41(extraout_ECX_01,0));
                    *(uint *)(pRVar30 + 2) = ~local_624;
                    BitStream::ReadBits((BitStream *)local_884,(uchar *)pRVar30,0x10,extraout_CL_03)
                    ;
                    uVar27 = ntohs(*(u_short *)pRVar30);
                    *(u_short *)(pRVar30 + 0xe) = uVar27;
                    uVar41 = extraout_ECX_02;
                  }
                  pRVar46 = local_c34;
                  pRVar30 = pRVar30 + 0x14;
                  iVar29 = iVar29 + -1;
                } while (iVar29 != 0);
                BitStream::Read<>((BitStream *)local_884,(__uint64 *)&local_63c);
                BitStream::Read<>((BitStream *)local_884,(__uint64 *)&local_634);
                pRVar30 = local_c08;
                uVar64 = SUB41(local_c08,0);
                uVar65 = (undefined1)((uint)local_c08 >> 8);
                uVar62 = (undefined2)((uint)local_c08 >> 0x10);
                uVar26 = (undefined1)local_630;
                uVar63 = (undefined1)((uint)local_630 >> 8);
                uVar54 = (ushort)((uint)local_630 >> 0x10);
                uVar60._0_1_ = (<>)0xaa;
                uVar60._1_1_ = 0xac;
                uVar61 = 0x5a;
                OnConnectedPong(this_02,CONCAT26((ushort)((uint)local_638 >> 0x10),
                                                 CONCAT15((char)((uint)local_638 >> 8),
                                                          CONCAT14((char)local_638,local_63c))),
                                CONCAT26(uVar54,CONCAT15(uVar63,CONCAT14(uVar26,local_634))),
                                local_c08);
                *(uint *)(pRVar30 + 0x18) = CONCAT22(uStack_602,local_604);
                *(uint *)(pRVar30 + 0x1c) = CONCAT22(uStack_5fe,uStack_600);
                *(uint *)(pRVar30 + 0x20) = uStack_5fc;
                *(uint *)(pRVar30 + 0x24) = uStack_5f8;
                *(undefined2 *)(pRVar30 + 0x2a) = local_5f4._2_2_;
                *(short *)(pRVar30 + 0x28) = (short)pHStack_bc8;
                if (((*(short *)(pRVar46 + 0x46a) == DAT_006578f6) &&
                    (*(short *)(pRVar46 + 0x468) == 2)) &&
                   (*(HuffmanEncodingTreeNode **)(pRVar46 + 0x46c) == DAT_006578f8)) {
                  *(uint *)(pRVar46 + 0x468) = CONCAT22(uStack_602,local_604);
                  *(uint *)(pRVar46 + 0x46c) = CONCAT22(uStack_5fe,uStack_600);
                  *(uint *)(pRVar46 + 0x470) = uStack_5fc;
                  *(uint *)(pRVar46 + 0x474) = uStack_5f8;
                  *(undefined2 *)(pRVar46 + 0x47a) = local_5f4._2_2_;
                  *(short *)(pRVar46 + 0x478) = (short)pHStack_bc8;
                  uVar27 = *(u_short *)(pRVar46 + 0x46a);
                  uVar64 = (undefined1)uVar27;
                  uVar65 = (undefined1)(uVar27 >> 8);
                  uVar62 = 0;
                  uVar26 = 0x15;
                  uVar63 = 0xad;
                  uVar54 = 0x5a;
                  uVar27 = ntohs(uVar27);
                  *(u_short *)(pRVar46 + 0x478) = uVar27;
                }
                pHStack_bc8 = (HuffmanEncodingTreeNode *)
                              AllocPacket(pRVar46,(uint)local_c10,&local_c04->value,
                                          (char *)CONCAT22(uVar54,CONCAT11(uVar63,uVar26)),
                                          CONCAT22(uVar62,CONCAT11(uVar65,uVar64)));
                pHStack_bc8[2].weight = (uint)local_5ec;
                *(ushort *)((int)&pHStack_bc8->parent + 2) = local_c20._2_2_;
                *(undefined2 *)pHStack_bc8 = local_c30._0_2_;
                *(undefined2 *)&pHStack_bc8->field_0x2 = local_c30._2_2_;
                *(undefined2 *)&pHStack_bc8->weight = local_c30._4_2_;
                *(undefined2 *)((int)&pHStack_bc8->weight + 2) = local_c30._6_2_;
                *(undefined2 *)&pHStack_bc8->left = pHStack_c28._0_2_;
                *(undefined2 *)((int)&pHStack_bc8->left + 2) = pHStack_c28._2_2_;
                *(undefined2 *)&pHStack_bc8->right = pHStack_c24._0_2_;
                *(undefined2 *)((int)&pHStack_bc8->right + 2) = pHStack_c24._2_2_;
                *(ushort *)&pHStack_bc8->parent = (ushort)local_c20;
                *(undefined2 *)((int)&pHStack_bc8->parent + 2) = *(undefined2 *)(pRVar30 + 0x1208);
                pHStack_bc8[1].weight = *(uint *)(pRVar30 + 0x11f0);
                pHStack_bc8[1].left = *(HuffmanEncodingTreeNode **)(pRVar30 + 0x11f4);
                p_Var1 = (LPCRITICAL_SECTION)(pRVar46 + 0x59c);
                *(undefined2 *)&pHStack_bc8[1].right = *(undefined2 *)(pRVar30 + 0x11f8);
                uVar64 = SUB41(p_Var1,0);
                uVar65 = (undefined1)((uint)p_Var1 >> 8);
                uVar62 = (undefined2)((uint)p_Var1 >> 0x10);
                *(undefined2 *)&pHStack_bc8[1].right =
                     *(undefined2 *)((int)&pHStack_bc8->parent + 2);
                uVar26 = 0xa0;
                uVar63 = 0xad;
                uVar54 = 0x5a;
                EnterCriticalSection(p_Var1);
                DataStructures::Queue<>::Push
                          ((Queue<> *)(pRVar46 + 0x5b4),&pHStack_bc8,
                           (char *)CONCAT22(uVar54,CONCAT11(uVar63,uVar26)),
                           CONCAT22(uVar62,CONCAT11(uVar65,uVar64)));
                LeaveCriticalSection(p_Var1);
                local_8 = 0xffffffff;
                pRVar30 = local_c08;
                pSVar56 = (SystemAddress *)CONCAT22(uVar58,uVar55);
                if (((bool)local_884[0x10] != false) &&
                   (pSVar56 = (SystemAddress *)CONCAT22(uVar58,uVar55),
                   (HuffmanEncodingTreeNode *)0x800 < (uint)local_884._4_4_)) {
                  free((void *)local_884._12_4_);
                  pSVar56 = (SystemAddress *)CONCAT22(uVar58,uVar55);
                  pRVar30 = local_c08;
                }
              }
            }
            else if (<Var3 == (<>)0x3) {
              if (local_c10 != (uchar *)0x11) goto LAB_005ab0e4;
              memset(local_aac.stackData,0,0x103);
              local_aac.data = &local_c04->value;
              local_aac.numberOfBitsUsed = 0x88;
              local_aac.copyData = false;
              local_aac.numberOfBitsAllocated = 0x88;
              local_aac.readOffset = 8;
              BitStream::Read<>(&local_aac,(__uint64 *)&local_64c);
              BitStream::Read<>(&local_aac,(__uint64 *)&local_644);
              uVar60._0_1_ = (<>)0x8b;
              uVar60._1_1_ = 0xae;
              uVar61 = 0x5a;
              OnConnectedPong(this_03,CONCAT26((ushort)((uint)local_648 >> 0x10),
                                               CONCAT15((char)((uint)local_648 >> 8),
                                                        CONCAT14((char)local_648,local_64c))),
                              CONCAT26((ushort)((uint)local_640 >> 0x10),
                                       CONCAT15((char)((uint)local_640 >> 8),
                                                CONCAT14((char)local_640,local_644))),pRVar30);
              free(local_c04);
              if ((local_aac.copyData != false) && (0x800 < local_aac.numberOfBitsAllocated)) {
                free(local_aac.data);
              }
            }
            else if (<Var3 == (<>)0x0) {
              if (local_c10 == (uchar *)0x9) {
                memset(&local_128,0,0x114);
                local_128.numberOfBitsUsed = 0x48;
                local_128.copyData = false;
                local_128.numberOfBitsAllocated = 0x48;
                local_128.data = &local_c04->value;
                local_8 = 3;
                local_128.readOffset = 8;
                BitStream::Read<>(&local_128,&local_65c);
                uVar26 = 0x14;
                memset(local_884,0,0x114);
                local_884._12_4_ = local_884 + 0x11;
                local_884._0_4_ = (HuffmanEncodingTreeNode *)0x0;
                local_884._4_4_ = (HuffmanEncodingTreeNode *)0x800;
                local_884._8_4_ = 0;
                local_884[0x10] = true;
                local_8 = CONCAT31(local_8._1_3_,4);
                local_bfd = '\x03';
                BitStream::WriteBits((BitStream *)local_884,&local_bfd,8,(bool)uVar26);
                BitStream::Write<>((BitStream *)local_884,&local_65c);
                _Var49 = GetTimeUS_Windows();
                uVar26 = (undefined1)_Var49;
                uVar63 = (undefined1)(_Var49 >> 0x20);
                uVar58 = 44999;
                uVar62 = 0x5a;
                local_c40 = __aulldiv((uint)_Var49,(uint)(_Var49 >> 0x20),1000,0);
                uVar64 = 0xe5;
                uVar65 = 0xaf;
                uVar55 = 0x5a;
                BitStream::Write<>((BitStream *)local_884,&local_c40);
                uVar66 = 0xea;
                uVar67 = 0xaf;
                uVar68 = 0x5a;
                _Var49 = GetTimeUS_Windows();
                pHStack_bc8 = (HuffmanEncodingTreeNode *)local_884._0_4_;
                local_5ec = (HuffmanEncodingTreeNode *)local_884._12_4_;
                AddressOrGUID::AddressOrGUID
                          ((AddressOrGUID *)&stack0xfffff384,(SystemAddress *)local_c30);
                pRVar46 = local_c34;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = _Var49;
                auVar8 = auVar8 << 0x20;
                AVar7.systemAddress._0_4_ = uVar52;
                AVar7.rakNetGuid.g = auVar8._0_8_;
                AVar7.rakNetGuid.systemIndex = auVar8._8_2_;
                AVar7.rakNetGuid._10_6_ = auVar8._10_6_;
                AVar7.systemAddress._4_4_ = pRVar53;
                AVar7.systemAddress._8_2_ = (ushort)pSVar56;
                AVar7.systemAddress._10_2_ = (short)((uint)pSVar56 >> 0x10);
                AVar7.systemAddress._12_1_ = SUB21(uVar57,0);
                AVar7.systemAddress._13_1_ = SUB21(uVar57,1);
                AVar7.systemAddress._14_2_ = uVar59;
                AVar7.systemAddress.debugPort = uVar60;
                AVar7.systemAddress.systemIndex = uVar61;
                AVar7._36_2_ = uVar58;
                AVar7._38_2_ = uVar62;
                SendImmediate(local_c34,(char *)local_5ec,(uint)pHStack_bc8,IMMEDIATE_PRIORITY,
                              UNRELIABLE,'\0',AVar7,(bool)uVar26,(bool)uVar63,
                              CONCAT26(uVar68,CONCAT15(uVar67,CONCAT14(uVar66,CONCAT22(uVar55,
                                                  CONCAT11(uVar65,uVar64))))),(uint)pBVar28);
                SetEvent(*(HANDLE *)(pRVar46 + 0x568));
                pcVar23 = free_exref;
                free(local_c04);
                uVar31 = local_128.numberOfBitsAllocated;
                cVar37 = local_128.copyData;
                if (((bool)local_884[0x10] != false) &&
                   ((HuffmanEncodingTreeNode *)0x800 < (uint)local_884._4_4_)) {
                  free((void *)local_884._12_4_);
                  uVar31 = local_128.numberOfBitsAllocated;
                  cVar37 = local_128.copyData;
                }
joined_r0x005ab6f3:
                local_8 = 0xffffffff;
                pRVar30 = local_c08;
                if ((cVar37 != '\0') && (local_8 = 0xffffffff, 0x800 < uVar31)) {
                  local_8 = 0xffffffff;
                  (*pcVar23)();
                  pRVar30 = local_c08;
                }
              }
              else {
LAB_005ab0e4:
                free(local_c04);
              }
            }
            else {
              if (<Var3 != (<>)0x15) {
                if (<Var3 != (<>)0x4) {
                  if (<Var3 == (<>)0x18) {
                    if (pHStack_bc8 == (HuffmanEncodingTreeNode *)&DAT_00000004) {
                      pPVar36 = AllocPacket(pRVar46,CONCAT22(uVar54 >> 3,uVar62),&local_c04->value,
                                            (char *)CONCAT22(uVar55,CONCAT11(uVar63,uVar26)),
                                            CONCAT22(uVar58,CONCAT11(uVar65,uVar64)));
                      *(HuffmanEncodingTreeNode **)(pPVar36 + 0x2c) = local_5ec;
                      *(ushort *)(pPVar36 + 0x12) = local_c20._2_2_;
                      *(undefined2 *)pPVar36 = local_c30._0_2_;
                      *(undefined2 *)(pPVar36 + 2) = local_c30._2_2_;
                      *(undefined2 *)(pPVar36 + 4) = local_c30._4_2_;
                      *(undefined2 *)(pPVar36 + 6) = local_c30._6_2_;
                      *(undefined2 *)(pPVar36 + 8) = pHStack_c28._0_2_;
                      *(undefined2 *)(pPVar36 + 10) = pHStack_c28._2_2_;
                      *(undefined2 *)(pPVar36 + 0xc) = pHStack_c24._0_2_;
                      *(undefined2 *)(pPVar36 + 0xe) = pHStack_c24._2_2_;
                      *(ushort *)(pPVar36 + 0x10) = (ushort)local_c20;
                      *(undefined2 *)(pPVar36 + 0x12) = *(undefined2 *)(pRVar30 + 0x1208);
                      *(undefined4 *)(pPVar36 + 0x18) = *(undefined4 *)(pRVar30 + 0x11f0);
                      *(undefined4 *)(pPVar36 + 0x1c) = *(undefined4 *)(pRVar30 + 0x11f4);
                      *(undefined2 *)(pPVar36 + 0x20) = *(undefined2 *)(pRVar30 + 0x11f8);
                      *(undefined2 *)(pPVar36 + 0x20) = *(undefined2 *)(pPVar36 + 0x12);
                      AddPacketToProducer(pRVar46,pPVar36);
                      *(undefined4 *)(pRVar30 + 0x120c) = 2;
                      goto LAB_005ab0a8;
                    }
                  }
                  else if (<Var3 == (<>)0x10) {
                    if (&DAT_00000019 < local_c10) {
                      if (((pHStack_bc8 == (HuffmanEncodingTreeNode *)0x5) ||
                          (pHStack_bc8 == (HuffmanEncodingTreeNode *)&DAT_00000004)) ||
                         (pRVar46[0x464] != (RakPeer)0x0)) {
                        bVar25 = true;
                      }
                      else {
                        bVar25 = false;
                      }
                      if (bVar25) {
                        local_5f4 = (HuffmanEncodingTreeNode *)0xffff0000;
                        uStack_602 = 0;
                        uStack_600 = 0;
                        uStack_5fe = 0;
                        uStack_5fc = 0;
                        uStack_5f8 = 0;
                        local_604 = 2;
                        uVar26 = 0x14;
                        local_5ec = (HuffmanEncodingTreeNode *)0x0;
                        memset(&local_998,0,0x114);
                        local_998.numberOfBitsUsed = (int)local_c10 << 3;
                        local_998.copyData = false;
                        local_998.data = &local_c04->value;
                        local_8 = 5;
                        local_998.readOffset = 8;
                        local_998.numberOfBitsAllocated = local_998.numberOfBitsUsed;
                        BitStream::ReadBits(&local_998,&local_5ef,8,(bool)uVar26);
                        if (local_5ef == '\x04') {
                          BitStream::ReadBits(&local_998,(uchar *)&local_61c,0x20,extraout_CL_04);
                          uStack_600 = (undefined2)~local_61c;
                          uStack_5fe = (ushort)(~local_61c >> 0x10);
                          BitStream::ReadBits(&local_998,(uchar *)&uStack_602,0x10,extraout_CL_05);
                          uVar27 = ntohs(uStack_602);
                          local_5ec = (HuffmanEncodingTreeNode *)CONCAT22(local_5ec._2_2_,uVar27);
                        }
                        BitStream::Read<>(&local_998,local_618);
                        pRVar30 = pRVar30 + 0x2e;
                        iVar29 = 10;
                        uVar41 = extraout_ECX_03;
                        do {
                          BitStream::ReadBits(&local_998,&local_5f0,8,SUB41(uVar41,0));
                          uVar41 = extraout_ECX_04;
                          if (local_5f0 == '\x04') {
                            *(u_short *)(pRVar30 + -2) = 2;
                            BitStream::ReadBits(&local_998,(uchar *)((int)&local_614 + 4),0x20,
                                                SUB41(extraout_ECX_04,0));
                            *(uint *)(pRVar30 + 2) = ~(uint)local_614._4_4_;
                            BitStream::ReadBits(&local_998,(uchar *)pRVar30,0x10,extraout_CL_06);
                            uVar27 = ntohs(*(u_short *)pRVar30);
                            *(u_short *)(pRVar30 + 0xe) = uVar27;
                            uVar41 = extraout_ECX_05;
                          }
                          pRVar46 = local_c34;
                          pRVar30 = pRVar30 + 0x14;
                          iVar29 = iVar29 + -1;
                        } while (iVar29 != 0);
                        BitStream::Read<>(&local_998,(__uint64 *)&local_654);
                        BitStream::Read<>(&local_998,&local_60c);
                        pRVar30 = local_c08;
                        OnConnectedPong(this_04,CONCAT26((ushort)((uint)local_650 >> 0x10),
                                                         CONCAT15((char)((uint)local_650 >> 8),
                                                                  CONCAT14((char)local_650,local_654
                                                                          ))),local_60c,local_c08);
                        uVar41 = CONCAT22(uStack_602,local_604);
                        uVar47 = CONCAT22(uStack_5fe,uStack_600);
                        *(undefined2 *)(pRVar30 + 0x2a) = local_5f4._2_2_;
                        *(undefined4 *)(pRVar30 + 0x18) = uVar41;
                        *(undefined4 *)(pRVar30 + 0x1c) = uVar47;
                        *(uint *)(pRVar30 + 0x20) = uStack_5fc;
                        *(uint *)(pRVar30 + 0x24) = uStack_5f8;
                        *(short *)(pRVar30 + 0x28) = (short)local_5ec;
                        uVar64 = 0xf4;
                        uVar65 = 0x78;
                        uVar60 = 0x65;
                        *(undefined4 *)(pRVar30 + 0x120c) = 7;
                        uVar26 = 0xa4;
                        uVar63 = 0xb3;
                        uVar59 = 0x5a;
                        uVar31 = uStack_5fc;
                        uVar48 = uStack_5f8;
                        bVar25 = SystemAddress::operator==
                                           ((SystemAddress *)(pRVar46 + 0x468),
                                            (SystemAddress *)&DAT_006578f4);
                        if (bVar25) {
                          *(undefined2 *)((int)extraout_ECX_06 + 0x12) = local_5f4._2_2_;
                          *extraout_ECX_06 = uVar41;
                          extraout_ECX_06[1] = uVar47;
                          extraout_ECX_06[2] = uVar31;
                          extraout_ECX_06[3] = uVar48;
                          *(short *)(extraout_ECX_06 + 4) = (short)local_5ec;
                          uVar27 = *(u_short *)(pRVar46 + 0x46a);
                          uVar64 = (undefined1)uVar27;
                          uVar65 = (undefined1)(uVar27 >> 8);
                          uVar60 = 0;
                          uVar26 = 0xce;
                          uVar63 = 0xb3;
                          uVar59 = 0x5a;
                          uVar27 = ntohs(uVar27);
                          *(u_short *)(pRVar46 + 0x478) = uVar27;
                        }
                        pPVar36 = AllocPacket(pRVar46,(uint)local_c10,&local_c04->value,
                                              (char *)CONCAT22(uVar59,CONCAT11(uVar63,uVar26)),
                                              CONCAT22(uVar60,CONCAT11(uVar65,uVar64)));
                        *(int *)(pPVar36 + 0x2c) = (int)local_c10 * 8;
                        *(ushort *)(pPVar36 + 0x12) = local_c20._2_2_;
                        *(ushort *)(pPVar36 + 0x10) = (ushort)local_c20;
                        *(undefined2 *)pPVar36 = local_c30._0_2_;
                        *(undefined2 *)(pPVar36 + 2) = local_c30._2_2_;
                        *(undefined2 *)(pPVar36 + 4) = local_c30._4_2_;
                        *(undefined2 *)(pPVar36 + 6) = local_c30._6_2_;
                        *(undefined2 *)(pPVar36 + 8) = pHStack_c28._0_2_;
                        *(undefined2 *)(pPVar36 + 10) = pHStack_c28._2_2_;
                        *(undefined2 *)(pPVar36 + 0xc) = pHStack_c24._0_2_;
                        *(undefined2 *)(pPVar36 + 0xe) = pHStack_c24._2_2_;
                        uVar57._0_1_ = (<>)0x37;
                        uVar57._1_1_ = 0xb4;
                        uVar59 = 0x5a;
                        SVar20._4_2_ = local_c30._4_2_;
                        SVar20._0_4_ = local_c30._0_4_;
                        SVar20._6_2_ = local_c30._6_2_;
                        SVar20._8_1_ = (char)pHStack_c28;
                        SVar20._9_1_ = (char)((uint)pHStack_c28 >> 8);
                        SVar20._10_2_ = pHStack_c28._2_2_;
                        SVar20._12_1_ = (char)pHStack_c24;
                        SVar20._13_1_ = (char)((uint)pHStack_c24 >> 8);
                        SVar20._14_2_ = pHStack_c24._2_2_;
                        SVar20.debugPort._0_1_ = (char)local_c20;
                        SVar20.debugPort._1_1_ = (char)((uint)local_c20 >> 8);
                        SVar20.systemIndex = local_c20._2_2_;
                        uVar60 = local_c30._0_2_;
                        uVar61 = local_c30._2_2_;
                        iVar29 = GetIndexFromSystemAddress(pRVar46,SVar20,true);
                        *(short *)(pPVar36 + 0x12) = (short)iVar29;
                        *(undefined4 *)(pPVar36 + 0x18) = *(undefined4 *)(local_c08 + 0x11f0);
                        *(undefined4 *)(pPVar36 + 0x1c) = *(undefined4 *)(local_c08 + 0x11f4);
                        *(undefined2 *)(pPVar36 + 0x20) = *(undefined2 *)(local_c08 + 0x11f8);
                        *(undefined2 *)(pPVar36 + 0x20) = *(undefined2 *)(pPVar36 + 0x12);
                        AddPacketToProducer(pRVar46,pPVar36);
                        uVar26 = 0x14;
                        memset(&local_770,0,0x114);
                        local_770.data = local_770.stackData;
                        local_770.numberOfBitsUsed = 0;
                        local_770.numberOfBitsAllocated = 0x800;
                        local_770.readOffset = 0;
                        local_770.copyData = true;
                        local_8 = CONCAT31(local_8._1_3_,6);
                        local_bfd = '\x13';
                        BitStream::WriteBits(&local_770,&local_bfd,8,(bool)uVar26);
                        local_bfd = (local_c30._0_2_ != 2) * '\x02' + '\x04';
                        BitStream::WriteBits(&local_770,&local_bfd,8,extraout_CL_07);
                        uVar41 = extraout_ECX_07;
                        if (local_c30._0_2_ == 2) {
                          local_5ec = (HuffmanEncodingTreeNode *)~local_c30._4_4_;
                          BitStream::WriteBits
                                    (&local_770,(uchar *)&local_5ec,0x20,SUB41(extraout_ECX_07,0));
                          local_5ec = (HuffmanEncodingTreeNode *)((uint)local_c30._0_4_ >> 0x10);
                          BitStream::WriteBits(&local_770,(uchar *)&local_5ec,0x10,extraout_CL_08);
                          uVar41 = extraout_ECX_08;
                        }
                        pRVar46 = pRVar46 + 0x494;
                        iVar29 = 10;
                        do {
                          local_bfd = (*(short *)pRVar46 != 2) * '\x02' + '\x04';
                          BitStream::WriteBits(&local_770,&local_bfd,8,SUB41(uVar41,0));
                          uVar41 = extraout_ECX_09;
                          if (*(short *)pRVar46 == 2) {
                            local_bd8 = *(undefined4 *)(pRVar46 + 0x10);
                            uStack_5fc = *(uint *)(pRVar46 + 4);
                            uStack_5f8 = *(uint *)(pRVar46 + 8);
                            local_5f4 = *(HuffmanEncodingTreeNode **)(pRVar46 + 0xc);
                            local_5ec = (HuffmanEncodingTreeNode *)~*(uint *)(pRVar46 + 4);
                            uStack_600 = (undefined2)*(undefined4 *)pRVar46;
                            uStack_5fe = (ushort)((uint)*(undefined4 *)pRVar46 >> 0x10);
                            BitStream::WriteBits
                                      (&local_770,(uchar *)&local_5ec,0x20,SUB41(extraout_ECX_09,0))
                            ;
                            local_5ec = (HuffmanEncodingTreeNode *)(uint)uStack_5fe;
                            BitStream::WriteBits(&local_770,(uchar *)&local_5ec,0x10,extraout_CL_09)
                            ;
                            uVar41 = extraout_ECX_10;
                          }
                          pRVar46 = pRVar46 + 0x14;
                          iVar29 = iVar29 + -1;
                        } while (iVar29 != 0);
                        BitStream::Write<>(&local_770,&local_60c);
                        _Var49 = GetTimeUS_Windows();
                        uVar26 = (undefined1)_Var49;
                        uVar63 = (undefined1)(_Var49 >> 0x20);
                        uVar58 = 0xb61c;
                        uVar62 = 0x5a;
                        local_c48 = __aulldiv((uint)_Var49,(uint)(_Var49 >> 0x20),1000,0);
                        uVar64 = 0x3a;
                        uVar65 = 0xb6;
                        uVar55 = 0x5a;
                        BitStream::Write<>(&local_770,&local_c48);
                        uVar66 = 0x3f;
                        uVar67 = 0xb6;
                        uVar68 = 0x5a;
                        _Var49 = GetTimeUS_Windows();
                        local_5ec = (HuffmanEncodingTreeNode *)local_770.numberOfBitsUsed;
                        local_c10 = local_770.data;
                        AddressOrGUID::AddressOrGUID
                                  ((AddressOrGUID *)&stack0xfffff384,(SystemAddress *)local_c30);
                        pRVar46 = local_c34;
                        auVar10._8_8_ = 0;
                        auVar10._0_8_ = _Var49;
                        auVar10 = auVar10 << 0x20;
                        AVar9.systemAddress._0_4_ = uVar52;
                        AVar9.rakNetGuid.g = auVar10._0_8_;
                        AVar9.rakNetGuid.systemIndex = auVar10._8_2_;
                        AVar9.rakNetGuid._10_6_ = auVar10._10_6_;
                        AVar9.systemAddress._4_4_ = pRVar53;
                        AVar9.systemAddress._8_2_ = (ushort)pSVar56;
                        AVar9.systemAddress._10_2_ = (short)((uint)pSVar56 >> 0x10);
                        AVar9.systemAddress._12_1_ = SUB21(uVar57,0);
                        AVar9.systemAddress._13_1_ = SUB21(uVar57,1);
                        AVar9.systemAddress._14_2_ = uVar59;
                        AVar9.systemAddress.debugPort = uVar60;
                        AVar9.systemAddress.systemIndex = uVar61;
                        AVar9._36_2_ = uVar58;
                        AVar9._38_2_ = uVar62;
                        SendImmediate(local_c34,(char *)local_c10,(uint)local_5ec,IMMEDIATE_PRIORITY
                                      ,RELIABLE_ORDERED,'\0',AVar9,(bool)uVar26,(bool)uVar63,
                                      CONCAT26(uVar68,CONCAT15(uVar67,CONCAT14(uVar66,CONCAT22(
                                                  uVar55,CONCAT11(uVar65,uVar64))))),(uint)pBVar28);
                        if (pHStack_bc8 != (HuffmanEncodingTreeNode *)0x5) {
                          uVar55 = 0xb6bf;
                          uVar58 = 0x5a;
                          SVar19._4_2_ = local_c30._4_2_;
                          SVar19._0_4_ = local_c30._0_4_;
                          SVar19._6_2_ = local_c30._6_2_;
                          SVar19._8_2_ = pHStack_c28._0_2_;
                          SVar19._10_2_ = pHStack_c28._2_2_;
                          SVar19._12_1_ = (char)pHStack_c24;
                          SVar19._13_1_ = (char)((uint)pHStack_c24 >> 8);
                          SVar19._14_2_ = pHStack_c24._2_2_;
                          SVar19.debugPort._0_1_ = (char)local_c20;
                          SVar19.debugPort._1_1_ = (char)((uint)local_c20 >> 8);
                          SVar19.systemIndex = (ushort)((uint)local_c20 >> 0x10);
                          uVar57 = local_c30._0_2_;
                          uVar59 = local_c30._2_2_;
                          uVar60 = local_c30._4_2_;
                          uVar61 = local_c30._6_2_;
                          PingInternal(pRVar46,SVar19,true,UNRELIABLE);
                          pSVar56 = (SystemAddress *)CONCAT22(uVar58,uVar55);
                        }
                        pcVar23 = free_exref;
                        uVar31 = local_998.numberOfBitsAllocated;
                        cVar37 = local_998.copyData;
                        if ((local_770.copyData != false) &&
                           (0x800 < local_770.numberOfBitsAllocated)) {
                          free(local_770.data);
                          uVar31 = local_998.numberOfBitsAllocated;
                          cVar37 = local_998.copyData;
                        }
                        goto joined_r0x005ab6f3;
                      }
                    }
                  }
                  else if ((((0x1a < (byte)<Var3) || (<Var3 == (<>)0xe)) || (<Var3 == (<>)0xf)) &&
                          (*pRVar30 != (RemoteSystemStruct)0x0)) {
                    pPVar36 = AllocPacket(pRVar46,CONCAT22(uVar54 >> 3,uVar62),&local_c04->value,
                                          (char *)CONCAT22(uVar55,CONCAT11(uVar63,uVar26)),
                                          CONCAT22(uVar58,CONCAT11(uVar65,uVar64)));
                    *(HuffmanEncodingTreeNode **)(pPVar36 + 0x2c) = local_5ec;
                    *(ushort *)(pPVar36 + 0x12) = local_c20._2_2_;
                    *(undefined2 *)pPVar36 = local_c30._0_2_;
                    *(undefined2 *)(pPVar36 + 2) = local_c30._2_2_;
                    *(undefined2 *)(pPVar36 + 4) = local_c30._4_2_;
                    *(undefined2 *)(pPVar36 + 6) = local_c30._6_2_;
                    *(undefined2 *)(pPVar36 + 8) = pHStack_c28._0_2_;
                    *(undefined2 *)(pPVar36 + 10) = pHStack_c28._2_2_;
                    *(undefined2 *)(pPVar36 + 0xc) = pHStack_c24._0_2_;
                    *(undefined2 *)(pPVar36 + 0xe) = pHStack_c24._2_2_;
                    *(ushort *)(pPVar36 + 0x10) = (ushort)local_c20;
                    *(undefined2 *)(pPVar36 + 0x12) = *(undefined2 *)(pRVar30 + 0x1208);
                    *(undefined4 *)(pPVar36 + 0x18) = *(undefined4 *)(pRVar30 + 0x11f0);
                    *(undefined4 *)(pPVar36 + 0x1c) = *(undefined4 *)(pRVar30 + 0x11f4);
                    *(undefined2 *)(pPVar36 + 0x20) = *(undefined2 *)(pRVar30 + 0x11f8);
                    *(undefined2 *)(pPVar36 + 0x20) = *(undefined2 *)(pPVar36 + 0x12);
                    AddPacketToProducer(pRVar46,pPVar36);
                    goto LAB_005ab0a8;
                  }
                }
                goto LAB_005ab0e4;
              }
              *(undefined4 *)(pRVar30 + 0x120c) = 3;
              free(local_c04);
            }
LAB_005ab0a8:
            uVar31 = *(uint *)(pRVar30 + 0xfc);
            if (*(uint *)(pRVar30 + 0x100) < uVar31) {
              iVar29 = *(int *)(pRVar30 + 0x104) - uVar31;
            }
            else {
              iVar29 = -uVar31;
            }
            pRVar35 = pRVar30 + 0xf8;
            this = pRVar46;
            if (*(uint *)(pRVar30 + 0x100) + iVar29 == 0) break;
            iVar29 = uVar31 + 1;
            *(int *)(pRVar30 + 0xfc) = iVar29;
            iVar43 = *(int *)(pRVar30 + 0x104);
            if (iVar29 == iVar43) {
              *(undefined4 *)(pRVar30 + 0xfc) = 0;
              pIVar42 = *(InternalPacket **)(*(int *)pRVar35 + -4 + iVar43 * 4);
            }
            else if (iVar29 == 0) {
              pIVar42 = *(InternalPacket **)(*(int *)pRVar35 + -4 + iVar43 * 4);
            }
            else {
              pIVar42 = *(InternalPacket **)(*(int *)pRVar35 + -4 + iVar29 * 4);
            }
            local_c04 = *(HuffmanEncodingTreeNode **)(pIVar42 + 0x44);
            local_5ec = *(HuffmanEncodingTreeNode **)(pIVar42 + 0x18);
            uVar64 = SUB41(pIVar42,0);
            uVar65 = (undefined1)((uint)pIVar42 >> 8);
            uVar58 = (undefined2)((uint)pIVar42 >> 0x10);
            uVar26 = 2;
            uVar63 = 0xb8;
            uVar55 = 0x5a;
            ReliabilityLayer::ReleaseToInternalPacketPool
                      ((ReliabilityLayer *)(pRVar30 + 0xf8),pIVar42);
            pRVar46 = local_c34;
          }
        }
      }
      else {
LAB_005aa764:
        iVar29 = *(int *)(pRVar30 + 0x120c);
        if ((((iVar29 == 7) || (iVar29 == 4)) || (iVar29 == 1)) || (iVar29 == 3)) {
          pHStack_bc8 = (HuffmanEncodingTreeNode *)
                        AllocPacket(this,1,(char *)CONCAT22((ushort)((uint)this_05 >> 0x10),
                                                            CONCAT11(uVar63,uVar26)),
                                    CONCAT22(uVar57,CONCAT11(uVar65,uVar64)));
          if (*(int *)(pRVar30 + 0x120c) == 4) {
            (pHStack_bc8[2].left)->value = '\x11';
          }
          else if (*(int *)(pRVar30 + 0x120c) == 7) {
            (pHStack_bc8[2].left)->value = '\x16';
          }
          else {
            (pHStack_bc8[2].left)->value = '\x15';
          }
          pHStack_bc8[1].weight = *(uint *)(pRVar30 + 0x11f0);
          pHStack_bc8[1].left = *(HuffmanEncodingTreeNode **)(pRVar30 + 0x11f4);
          *(undefined2 *)&pHStack_bc8[1].right = *(undefined2 *)(pRVar30 + 0x11f8);
          *(ushort *)((int)&pHStack_bc8->parent + 2) = local_c20._2_2_;
          *(undefined4 *)pHStack_bc8 = local_c30._0_4_;
          pHStack_bc8->weight = local_c30._4_4_;
          pHStack_bc8->left = pHStack_c28;
          pHStack_bc8->right = pHStack_c24;
          *(ushort *)&pHStack_bc8->parent = (ushort)local_c20;
          uVar60 = *(undefined2 *)(pRVar30 + 0x1208);
          p_Var1 = (LPCRITICAL_SECTION)(this + 0x59c);
          *(undefined2 *)((int)&pHStack_bc8->parent + 2) = uVar60;
          uVar64 = SUB41(p_Var1,0);
          uVar65 = (undefined1)((uint)p_Var1 >> 8);
          uVar61 = (undefined2)((uint)p_Var1 >> 0x10);
          *(undefined2 *)&pHStack_bc8[1].right = uVar60;
          uVar26 = 0x84;
          uVar63 = 0xb8;
          uVar59 = 0x5a;
          EnterCriticalSection(p_Var1);
          DataStructures::Queue<>::Push
                    ((Queue<> *)(this + 0x5b4),&pHStack_bc8,
                     (char *)CONCAT22(uVar59,CONCAT11(uVar63,uVar26)),
                     CONCAT22(uVar61,CONCAT11(uVar65,uVar64)));
          LeaveCriticalSection(p_Var1);
        }
        local_bfc = DAT_00657908;
        uStack_bf8 = DAT_0065790c;
        puStack_bf4 = (uchar *)CONCAT22(puStack_bf4._2_2_,DAT_00657910);
        local_bdc = local_c20;
        local_bec = local_c30._0_4_;
        uStack_be8 = local_c30._4_4_;
        pHStack_be4 = pHStack_c28;
        pHStack_be0 = pHStack_c24;
        CloseConnectionInternal(this,(AddressOrGUID *)&local_bfc,false,true,'\0',LOW_PRIORITY);
      }
      local_bc4 = (HuffmanEncodingTreeNode *)&local_bc4->field_0x1;
    } while (local_bc4 < *(undefined1 **)(this + 0x234));
  }
  ExceptionList = local_10;
  uVar26 = __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar26;
}


// protected: virtual void __thiscall RakNet::RakPeer::OnRNS2Recv(struct RakNet::RNS2RecvStruct *)

void __thiscall RakNet::RakPeer::OnRNS2Recv(RakPeer *this,RNS2RecvStruct *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  char *pcVar2;
  LPCRITICAL_SECTION p_Var3;
  HuffmanEncodingTreeNode *local_8;
  
  if ((*(code **)(this + 0x480) != (code *)0x0) &&
     (local_8 = (HuffmanEncodingTreeNode *)this, cVar1 = (**(code **)(this + 0x480))(param_1),
     cVar1 != '\x01')) {
    return;
  }
  local_8 = (HuffmanEncodingTreeNode *)param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x394);
  pcVar2 = (char *)0x5ab97f;
  p_Var3 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  DataStructures::Queue<>::Push((Queue<> *)(this + 900),&local_8,pcVar2,(uint)p_Var3);
  LeaveCriticalSection(lpCriticalSection);
  SetEvent(*(HANDLE *)(this + 0x564));
  return;
}


// protected: void __thiscall RakNet::RakPeer::CallPluginCallbacks(class DataStructures::List<class
// RakNet::PluginInterface2 *> &,struct RakNet::Packet *)

void __thiscall RakNet::RakPeer::CallPluginCallbacks(RakPeer *this,List<> *param_1,Packet *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      switch(**(undefined1 **)(param_2 + 0x30)) {
      case 10:
        uVar2 = 8;
        break;
      case 0xb:
        uVar2 = 9;
        break;
      case 0xc:
        uVar2 = 10;
        break;
      default:
        goto switchD_005abaf5_caseD_d;
      case 0x10:
        uVar2 = 0;
        goto LAB_005abb1d;
      case 0x11:
        uVar2 = 0;
        break;
      case 0x12:
        uVar2 = 1;
        break;
      case 0x13:
        uVar2 = 1;
LAB_005abb1d:
        (**(code **)(**(int **)(*(int *)param_1 + uVar1 * 4) + 0x20))
                  (param_2,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                   *(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),uVar2);
        goto switchD_005abaf5_caseD_d;
      case 0x14:
        uVar2 = 2;
        break;
      case 0x15:
        uVar2 = 1;
        goto LAB_005abafe;
      case 0x16:
        uVar2 = 2;
LAB_005abafe:
        (**(code **)(**(int **)(*(int *)param_1 + uVar1 * 4) + 0x1c))
                  (param_2,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                   *(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),uVar2);
        goto switchD_005abaf5_caseD_d;
      case 0x17:
        uVar2 = 4;
        break;
      case 0x18:
        uVar2 = 5;
        break;
      case 0x19:
        uVar2 = 6;
        break;
      case 0x1a:
        uVar2 = 7;
      }
      (**(code **)(**(int **)(*(int *)param_1 + uVar1 * 4) + 0x24))(param_2,uVar2);
switchD_005abaf5_caseD_d:
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 4));
  }
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// protected: void __thiscall RakNet::RakPeer::FillIPList(void)

void __thiscall RakNet::RakPeer::FillIPList(RakPeer *this)

{
  char **ppcVar1;
  ushort uVar2;
  uint uVar3;
  RakPeer *pRVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  hostent *phVar15;
  int iVar16;
  RakPeer *pRVar17;
  int iVar18;
  int iVar19;
  ushort uVar20;
  RakPeer *pRVar21;
  bool bVar22;
  int local_64;
  int local_5c;
  char local_58 [80];
  uint local_8;
  
  local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  if (((*(ushort *)(this + 0x496) == DAT_006578f6) && (*(short *)(this + 0x494) == 2)) &&
     (pRVar21 = this + 0x498, *(uint *)(this + 0x498) == DAT_006578f8)) {
    gethostname(local_58,0x50);
    phVar15 = gethostbyname(local_58);
    if (phVar15 != (hostent *)0x0) {
      iVar18 = 0;
      do {
        ppcVar1 = phVar15->h_addr_list + iVar18;
        if (*ppcVar1 == (char *)0x0) {
          if (iVar18 < 10) {
            iVar16 = 10 - iVar18;
            pRVar21 = this + (iVar18 * 5 + 0x129) * 4;
            do {
              uVar14 = uRam006582f0;
              uVar13 = uRam006582ec;
              uVar12 = uRam006582e8;
              *(undefined4 *)(pRVar21 + -0x10) = _DAT_006582e4;
              *(undefined4 *)(pRVar21 + -0xc) = uVar12;
              *(undefined4 *)(pRVar21 + -8) = uVar13;
              *(undefined4 *)(pRVar21 + -4) = uVar14;
              *(undefined2 *)(pRVar21 + 2) = DAT_006582f6;
              *(undefined2 *)pRVar21 = DAT_006582f4;
              iVar16 = iVar16 + -1;
              pRVar21 = pRVar21 + 0x14;
            } while (iVar16 != 0);
          }
          break;
        }
        iVar18 = iVar18 + 1;
        *(undefined4 *)pRVar21 = *(undefined4 *)*ppcVar1;
        pRVar21 = pRVar21 + 0x14;
      } while (iVar18 < 10);
    }
    local_64 = 0;
    pRVar21 = this + 0x498;
    do {
      uVar20 = *(ushort *)(pRVar21 + -2);
      if (((uVar20 == DAT_006578f6) && (*(short *)(pRVar21 + -4) == 2)) &&
         (*(uint *)pRVar21 == DAT_006578f8)) break;
      iVar16 = local_64 + 1;
      iVar18 = iVar16;
      pRVar4 = pRVar21;
      local_5c = local_64;
      if (iVar16 < 9) {
        do {
          pRVar17 = pRVar4 + 0x14;
          uVar2 = *(ushort *)(pRVar4 + 0x12);
          if (((uVar2 == DAT_006578f6) && (*(short *)(pRVar4 + 0x10) == 2)) &&
             (uVar20 = *(ushort *)(pRVar21 + -2), *(uint *)pRVar17 == DAT_006578f8)) break;
          bVar22 = uVar2 < uVar20;
          if (uVar2 == uVar20) {
            bVar22 = *(uint *)pRVar17 < *(uint *)pRVar21;
          }
          iVar19 = iVar18 + 1;
          if (!bVar22) {
            iVar18 = local_5c;
          }
          local_5c = iVar18;
          iVar18 = iVar19;
          pRVar4 = pRVar17;
        } while (iVar19 < 9);
        if (local_64 != local_5c) {
          uVar3 = *(uint *)(pRVar21 + 0xc);
          uVar5 = *(uint *)(pRVar21 + -4);
          uVar6 = *(uint *)pRVar21;
          uVar7 = *(uint *)(pRVar21 + 4);
          uVar8 = *(uint *)(pRVar21 + 8);
          uVar9 = *(uint *)(this + local_5c * 0x14 + 0x498);
          uVar10 = *(uint *)(this + local_5c * 0x14 + 0x49c);
          uVar11 = *(uint *)(this + local_5c * 0x14 + 0x4a0);
          *(uint *)(pRVar21 + -4) = *(uint *)(this + local_5c * 0x14 + 0x494);
          *(uint *)pRVar21 = uVar9;
          *(uint *)(pRVar21 + 4) = uVar10;
          *(uint *)(pRVar21 + 8) = uVar11;
          *(undefined2 *)(pRVar21 + 0xe) = *(undefined2 *)(this + local_5c * 0x14 + 0x4a6);
          *(undefined2 *)(pRVar21 + 0xc) = *(undefined2 *)(this + local_5c * 0x14 + 0x4a4);
          *(uint *)(this + local_5c * 0x14 + 0x494) = uVar5;
          *(uint *)(this + local_5c * 0x14 + 0x498) = uVar6;
          *(uint *)(this + local_5c * 0x14 + 0x49c) = uVar7;
          *(uint *)(this + local_5c * 0x14 + 0x4a0) = uVar8;
          *(short *)(this + local_5c * 0x14 + 0x4a6) = (short)(uVar3 >> 0x10);
          *(short *)(this + local_5c * 0x14 + 0x4a4) = (short)uVar3;
        }
      }
      pRVar21 = pRVar21 + 0x14;
      local_64 = iVar16;
    } while (iVar16 < 9);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// public: __thiscall RakNet::RakPeer::RemoteSystemStruct::RemoteSystemStruct(void)

RemoteSystemStruct * __thiscall
RakNet::RakPeer::RemoteSystemStruct::RemoteSystemStruct(RemoteSystemStruct *this)

{
  RemoteSystemStruct *pRVar1;
  int iVar2;
  
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined2 *)(this + 4) = 2;
  *(undefined4 *)(this + 0x14) = 0xffff0000;
  iVar2 = 10;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined2 *)(this + 0x18) = 2;
  *(undefined4 *)(this + 0x28) = 0xffff0000;
  pRVar1 = this + 0x2c;
  do {
    *(undefined4 *)pRVar1 = 0;
    *(undefined4 *)(pRVar1 + 4) = 0;
    *(undefined4 *)(pRVar1 + 8) = 0;
    *(undefined4 *)(pRVar1 + 0xc) = 0;
    *(undefined2 *)pRVar1 = 2;
    *(undefined4 *)(pRVar1 + 0x10) = 0xffff0000;
    iVar2 = iVar2 + -1;
    pRVar1 = pRVar1 + 0x14;
  } while (iVar2 != 0);
  ReliabilityLayer::ReliabilityLayer((ReliabilityLayer *)(this + 0xf8));
  *(undefined2 *)(this + 0x11f8) = 0xffff;
  *(undefined4 *)(this + 0x11f0) = DAT_006578d0;
  *(undefined4 *)(this + 0x11f4) = DAT_006578d4;
  *(undefined2 *)(this + 0x11f8) = DAT_006578d8;
  return this;
}


// public: __thiscall RakNet::RakPeer::RemoteSystemStruct::~RemoteSystemStruct(void)

void __thiscall RakNet::RakPeer::RemoteSystemStruct::~RemoteSystemStruct(RemoteSystemStruct *this)

{
  ReliabilityLayer::~ReliabilityLayer((ReliabilityLayer *)(this + 0xf8));
  return;
}


// [thunk]:public: virtual void * __thiscall RakNet::RakPeer::`vector deleting
// destructor'`adjustor{4}' (unsigned int)

void * __thiscall
RakNet::RakPeer::_vector_deleting_destructor__adjustor_4__(RakPeer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _vector_deleting_destructor_(this + -4,param_1);
  return pvVar1;
}
