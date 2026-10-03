#include "../ois.exe.h"


// int __cdecl RakNet::SplitPacketChannelComp(unsigned short const &,struct
// RakNet::SplitPacketChannel * const &)

int __cdecl RakNet::SplitPacketChannelComp(ushort *param_1,SplitPacketChannel **param_2)

{
  if (*param_1 < *(ushort *)(**(int **)(*param_2 + 8) + 0xe)) {
    return -1;
  }
  return (uint)(*param_1 != *(ushort *)(**(int **)(*param_2 + 8) + 0xe));
}


// struct RakNet::BPSTracker::TimeAndValue2 * __cdecl RakNet::OP_NEW_ARRAY<struct
// RakNet::BPSTracker::TimeAndValue2>(int,char const *,unsigned int)

TimeAndValue2 * __cdecl RakNet::OP_NEW_ARRAY<>(int param_1,char *param_2,uint param_3)

{
  uint *puVar1;
  uint in_ECX;
  uint uVar2;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cd45d;
  local_10 = ExceptionList;
  if (in_ECX == 0) {
    return (TimeAndValue2 *)0x0;
  }
  uVar2 = -(uint)((int)((ulonglong)in_ECX * 0x10 >> 0x20) != 0) | (uint)((ulonglong)in_ECX * 0x10);
  ExceptionList = &local_10;
  puVar1 = operator_new__(-(uint)(0xfffffffb < uVar2) | uVar2 + 4);
  local_8 = 0;
  if (puVar1 != (uint *)0x0) {
    *puVar1 = in_ECX;
    _eh_vector_constructor_iterator_
              ((TimeAndValue2 *)(puVar1 + 1),0x10,in_ECX,std::move<>,
               DataStructures::RangeNode<>::~RangeNode<>);
    ExceptionList = local_10;
    return (TimeAndValue2 *)(puVar1 + 1);
  }
  ExceptionList = local_10;
  return (TimeAndValue2 *)0x0;
}


// struct DataStructures::RangeNode<struct RakNet::uint24_t> * __cdecl RakNet::OP_NEW_ARRAY<struct
// DataStructures::RangeNode<struct RakNet::uint24_t> >(int,char const *,unsigned int)

RangeNode<> * __cdecl RakNet::OP_NEW_ARRAY<>(int param_1,char *param_2,uint param_3)

{
  uint *puVar1;
  uint in_ECX;
  uint uVar2;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cd4ad;
  local_10 = ExceptionList;
  if (in_ECX == 0) {
    return (RangeNode<> *)0x0;
  }
  uVar2 = -(uint)((int)((ulonglong)in_ECX * 8 >> 0x20) != 0) | (uint)((ulonglong)in_ECX * 8);
  ExceptionList = &local_10;
  puVar1 = operator_new__(-(uint)(0xfffffffb < uVar2) | uVar2 + 4);
  local_8 = 0;
  if (puVar1 != (uint *)0x0) {
    *puVar1 = in_ECX;
    _eh_vector_constructor_iterator_
              ((RangeNode<> *)(puVar1 + 1),8,in_ECX,std::move<>,
               DataStructures::RangeNode<>::~RangeNode<>);
    ExceptionList = local_10;
    return (RangeNode<> *)(puVar1 + 1);
  }
  ExceptionList = local_10;
  return (RangeNode<> *)0x0;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// bool __cdecl RakNet::ProcessOfflineNetworkPacket(struct RakNet::SystemAddress,char const
// *,int,class RakNet::RakPeer *,class RakNet::RakNetSocket2 *,bool *,unsigned __int64)

bool __cdecl
RakNet::ProcessOfflineNetworkPacket
          (SystemAddress param_1,char *param_2,int param_3,RakPeer *param_4,RakNetSocket2 *param_5,
          bool *param_6,__uint64 param_7)

{
  LPCRITICAL_SECTION p_Var1;
  Queue<> *this;
  uchar uVar2;
  short *psVar3;
  RequestedConnectionStruct *pRVar4;
  HuffmanEncodingTreeNode *pHVar5;
  SystemAddress SVar6;
  SystemAddress SVar7;
  SystemAddress SVar8;
  AddressOrGUID AVar9;
  undefined1 auVar10 [16];
  SystemAddress SVar11;
  RakNetGUID RVar12;
  SystemAddress SVar13;
  SystemAddress SVar14;
  SystemAddress SVar15;
  SystemAddress SVar16;
  RakNetGUID RVar17;
  RakNetGUID RVar18;
  char cVar19;
  byte bVar20;
  bool bVar21;
  undefined1 uVar22;
  u_short uVar23;
  uchar *puVar24;
  __uint64 *p_Var25;
  LPCRITICAL_SECTION p_Var26;
  int iVar27;
  Packet *pPVar28;
  undefined1 *puVar29;
  RemoteSystemStruct *pRVar30;
  HuffmanEncodingTreeNode *pHVar31;
  RemoteSystemStruct *pRVar32;
  bool extraout_CL;
  bool extraout_CL_00;
  bool extraout_CL_01;
  bool extraout_CL_02;
  bool extraout_CL_03;
  bool extraout_CL_04;
  bool extraout_CL_05;
  bool extraout_CL_06;
  bool extraout_CL_07;
  bool extraout_CL_08;
  bool extraout_CL_09;
  bool extraout_CL_10;
  bool extraout_CL_11;
  bool extraout_CL_12;
  bool extraout_CL_13;
  uchar *in_ECX;
  uint uVar33;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  undefined4 extraout_ECX_04;
  BitStream *this_00;
  BitStream *this_01;
  BitStream *this_02;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int iVar34;
  undefined4 extraout_ECX_07;
  uint uVar35;
  uint in_EDX;
  byte *pbVar36;
  uint uVar37;
  code *pcVar38;
  RakPeer *pRVar39;
  RakPeer RVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  __uint64 _Var43;
  undefined8 uVar44;
  ConnectMode in_stack_fffff8fc;
  ConnectMode in_stack_fffff910;
  RakNetSocket2 *pRVar45;
  undefined4 in_stack_fffff920;
  undefined4 in_stack_fffff924;
  undefined4 in_stack_fffff928;
  uchar *in_stack_fffff92c;
  undefined4 uVar46;
  char *pcVar47;
  char *pcVar48;
  RakPeer *pRVar49;
  RakPeer RVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  ushort uVar54;
  undefined2 uVar55;
  undefined2 uVar56;
  uint local_6a4;
  RNS2_SendParameters local_6a0;
  RNS2_SendParameters local_680;
  undefined1 local_660 [16];
  undefined1 local_650 [8];
  undefined4 uStack_648;
  int iStack_644;
  RNS2_SendParameters local_63c;
  undefined4 local_61c;
  BitStream local_618;
  BitStream local_500;
  BitStream local_3e8;
  BitStream local_2d0;
  BitStream local_1b8;
  undefined1 local_a0 [16];
  HuffmanEncodingTreeNode *local_90 [3];
  undefined4 local_84;
  LPCRITICAL_SECTION local_80;
  LPCRITICAL_SECTION local_7c [2];
  undefined4 local_74;
  undefined4 local_70;
  bool local_69;
  char local_68 [68];
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &DAT_005cdab0;
  local_1c = ExceptionList;
  local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_74 = param_4;
  pcVar47 = (char *)0x0;
  local_61c = in_EDX;
  local_84 = in_ECX;
  SystemAddress::ToString(&param_1,false,local_68,(char)in_ECX);
  pcVar48 = local_68;
  uVar22 = 0x73;
  uVar51 = 0x72;
  uVar54 = 0x5a;
  cVar19 = (**(code **)(*(int *)param_2 + 0x90))();
  if (cVar19 == '\0') {
    if (2 < (int)local_61c) {
      uVar2 = *in_ECX;
      if (((uVar2 == '\x01') || (uVar2 == '\x02')) && (0x18 < local_61c)) {
        puVar24 = in_ECX + 9;
        local_70 = (byte *)&DAT_005e2fac;
        local_90[0] = (HuffmanEncodingTreeNode *)0xc;
        do {
          if (*(int *)puVar24 != *(int *)local_70) {
            bVar20 = (byte)*(int *)puVar24;
            bVar21 = bVar20 < *local_70;
            if (((bVar20 == *local_70) &&
                (bVar21 = puVar24[1] < local_70[1], puVar24[1] == local_70[1])) &&
               ((bVar21 = puVar24[2] < local_70[2], puVar24[2] == local_70[2] &&
                (bVar21 = puVar24[3] < local_70[3], puVar24[3] == local_70[3])))) {
              RVar40 = (RakPeer)0x1;
            }
            else {
              RVar40 = (RakPeer)((-(uint)bVar21 | 1) == 0);
            }
            goto LAB_005a769a;
          }
          local_70 = local_70 + 4;
          puVar24 = puVar24 + 4;
          bVar21 = (HuffmanEncodingTreeNode *)0x3 < local_90[0];
          local_90[0] = (HuffmanEncodingTreeNode *)&local_90[0][-1].parent;
        } while (bVar21);
        RVar40 = (RakPeer)0x1;
      }
      else if (uVar2 == '\x1c') {
        if (local_61c < 0x1d) {
LAB_005a9665:
          *local_74 = (RakPeer)0x0;
          goto LAB_005a966d;
        }
        puVar24 = in_ECX + 0x11;
        local_70 = (byte *)&DAT_005e2fac;
        local_90[0] = (HuffmanEncodingTreeNode *)0xc;
        do {
          if (*(int *)puVar24 != *(int *)local_70) goto LAB_005a7698;
          local_70 = local_70 + 4;
          puVar24 = puVar24 + 4;
          bVar21 = (HuffmanEncodingTreeNode *)0x3 < local_90[0];
          local_90[0] = (HuffmanEncodingTreeNode *)&local_90[0][-1].parent;
        } while (bVar21);
        RVar40 = (RakPeer)0x1;
      }
      else if (uVar2 == '\r') {
        if (local_61c < 0x19) goto LAB_005a9665;
        puVar24 = in_ECX + 9;
        local_70 = (byte *)&DAT_005e2fac;
        local_90[0] = (HuffmanEncodingTreeNode *)0xc;
        do {
          if (*(int *)puVar24 != *(int *)local_70) goto LAB_005a7698;
          local_70 = local_70 + 4;
          puVar24 = puVar24 + 4;
          bVar21 = (HuffmanEncodingTreeNode *)0x3 < local_90[0];
          local_90[0] = (HuffmanEncodingTreeNode *)&local_90[0][-1].parent;
        } while (bVar21);
        RVar40 = (RakPeer)0x1;
      }
      else if ((((((uVar2 == '\x06') || (uVar2 == '\b')) ||
                 ((uVar2 == '\x05' || ((uVar2 == '\a' || (uVar2 == '\x11')))))) || (uVar2 == '\x14')
                ) || (((uVar2 == '\x17' || (uVar2 == '\x12')) || (uVar2 == '\x1a')))) &&
              (0x18 < local_61c)) {
        puVar24 = in_ECX + 1;
        local_70 = (byte *)&DAT_005e2fac;
        local_90[0] = (HuffmanEncodingTreeNode *)0xc;
        do {
          if (*(int *)puVar24 != *(int *)local_70) goto LAB_005a7698;
          local_70 = local_70 + 4;
          puVar24 = puVar24 + 4;
          bVar21 = (HuffmanEncodingTreeNode *)0x3 < local_90[0];
          local_90[0] = (HuffmanEncodingTreeNode *)&local_90[0][-1].parent;
        } while (bVar21);
        RVar40 = (RakPeer)0x1;
      }
      else {
        if ((uVar2 != '\x19') || (local_61c != 0x1a)) goto LAB_005a9665;
        puVar24 = in_ECX + 2;
        local_70 = (byte *)&DAT_005e2fac;
        local_90[0] = (HuffmanEncodingTreeNode *)0xc;
        do {
          if (*(int *)puVar24 != *(int *)local_70) goto LAB_005a7698;
          local_70 = local_70 + 4;
          puVar24 = puVar24 + 4;
          bVar21 = (HuffmanEncodingTreeNode *)0x3 < local_90[0];
          local_90[0] = (HuffmanEncodingTreeNode *)&local_90[0][-1].parent;
        } while (bVar21);
        RVar40 = (RakPeer)0x1;
      }
      goto LAB_005a769a;
    }
    *local_74 = (RakPeer)0x1;
    goto LAB_005a76a7;
  }
  local_74 = (RakPeer *)0x0;
  if (*(int *)(param_2 + 0x2dc) != 0) {
    local_7c[0] = (LPCRITICAL_SECTION)(local_61c * 8);
    do {
      (**(code **)(**(int **)(*(int *)(param_2 + 0x2d8) + (int)local_74 * 4) + 0x30))();
      local_74 = local_74 + 1;
    } while (local_74 < *(RakPeer **)(param_2 + 0x2dc));
  }
  uVar22 = 0x14;
  memset(&local_1b8,0,0x114);
  local_1b8.data = local_1b8.stackData;
  local_1b8.numberOfBitsUsed = 0;
  local_1b8.numberOfBitsAllocated = 0x800;
  local_1b8.readOffset = 0;
  local_1b8.copyData = true;
  local_14 = 0;
  local_69 = true;
  BitStream::WriteBits(&local_1b8,&local_69,8,(bool)uVar22);
  uVar33 = local_1b8.numberOfBitsUsed - 1 & 7;
  local_1b8.numberOfBitsUsed = local_1b8.numberOfBitsUsed + (7 - uVar33);
  if ((local_1b8.numberOfBitsUsed & 7) == 0) {
    BitStream::AddBitsAndReallocate(&local_1b8,0x80);
    puVar24 = local_1b8.data + (local_1b8.numberOfBitsUsed + 7 >> 3);
    puVar24[0] = '\0';
    puVar24[1] = 0xff;
    puVar24[2] = 0xff;
    puVar24[3] = '\0';
    puVar24[4] = 0xfe;
    puVar24[5] = 0xfe;
    puVar24[6] = 0xfe;
    puVar24[7] = 0xfe;
    puVar24[8] = 0xfd;
    puVar24[9] = 0xfd;
    puVar24[10] = 0xfd;
    puVar24[0xb] = 0xfd;
    puVar24[0xc] = '\x12';
    puVar24[0xd] = '4';
    puVar24[0xe] = 'V';
    puVar24[0xf] = 'x';
    local_1b8.numberOfBitsUsed = local_1b8.numberOfBitsUsed + 0x80;
  }
  else {
    BitStream::WriteBits(&local_1b8,"",0x80,SUB41(uVar33,0));
  }
  p_Var25 = (__uint64 *)(**(code **)(*(int *)param_2 + 0xd0))();
  BitStream::Write<>(&local_1b8,p_Var25);
  local_63c.data = (char *)local_1b8.data;
  uVar33 = 0;
  local_63c.ttl = 0;
  local_63c.length = local_1b8.numberOfBitsUsed + 7 >> 3;
  local_63c.systemAddress._2_2_ = param_1._2_2_;
  local_63c.systemAddress.address = param_1.address;
  local_63c.systemAddress._1_1_ = param_1._1_1_;
  local_63c.systemAddress.systemIndex = param_1.systemIndex;
  local_63c.systemAddress._4_4_ = param_1._4_4_;
  local_63c.systemAddress._8_4_ = param_1._8_4_;
  local_63c.systemAddress._12_4_ = param_1._12_4_;
  local_63c.systemAddress.debugPort = param_1.debugPort;
  if (*(int *)(param_2 + 0x2dc) != 0) {
    do {
      (**(code **)(**(int **)(*(int *)(param_2 + 0x2d8) + uVar33 * 4) + 0x2c))
                (local_1b8.data,local_1b8.numberOfBitsUsed);
      uVar33 = uVar33 + 1;
    } while (uVar33 < *(uint *)(param_2 + 0x2dc));
  }
  (**(code **)(*(int *)param_3 + 4))();
LAB_005a7489:
  if ((local_1b8.copyData != false) && (0x800 < local_1b8.numberOfBitsAllocated)) {
    free(local_1b8.data);
  }
  goto LAB_005a966d;
LAB_005a7698:
  RVar40 = (RakPeer)0x0;
LAB_005a769a:
  *local_74 = RVar40;
  if (RVar40 == (RakPeer)0x0) goto LAB_005a966d;
LAB_005a76a7:
  local_90[0] = (HuffmanEncodingTreeNode *)0x0;
  if (*(int *)(param_2 + 0x2dc) != 0) {
    local_7c[0] = (LPCRITICAL_SECTION)(local_61c * 8);
    do {
      uVar22 = (undefined1)param_1.debugPort;
      uVar51 = (undefined1)(param_1.debugPort >> 8);
      in_stack_fffff928._0_2_ = 0x76e6;
      in_stack_fffff928._2_2_ = 0x5a;
      in_stack_fffff92c = local_84;
      pcVar47 = (char *)param_1._12_4_;
      uVar54 = param_1.systemIndex;
      (**(code **)(**(int **)(*(int *)(param_2 + 0x2d8) + (int)local_90[0] * 4) + 0x30))();
      local_90[0] = (HuffmanEncodingTreeNode *)&local_90[0]->field_0x1;
      in_ECX = local_84;
    } while (local_90[0] < *(undefined1 **)(param_2 + 0x2dc));
  }
  uVar2 = *in_ECX;
  local_70 = (byte *)CONCAT13(uVar2,(undefined3)local_70);
  if (((uVar2 == '\x02') || (uVar2 == '\x01')) && (0x18 < local_61c)) {
    if ((uVar2 != '\x01') &&
       (bVar21 = RakPeer::AllowIncomingConnections((RakPeer *)param_2), !bVar21)) goto LAB_005a966d;
    memset(&local_2d0,0,0x114);
    local_2d0.copyData = false;
    local_2d0.numberOfBitsUsed = local_61c * 8;
    local_14 = 1;
    local_2d0.readOffset = 8;
    local_2d0.numberOfBitsAllocated = local_2d0.numberOfBitsUsed;
    local_2d0.data = in_ECX;
    BitStream::Read<>(&local_2d0,(__uint64 *)&local_80);
    local_2d0.readOffset = local_2d0.readOffset + 0x80;
    local_650._0_4_ = DAT_00657908;
    local_650._4_4_ = DAT_0065790c;
    uStack_648 = _DAT_00657910;
    iStack_644 = iRam00657914;
    BitStream::Read<>(&local_2d0,(__uint64 *)local_650);
    uVar22 = 0x14;
    memset(&local_1b8,0,0x114);
    local_1b8.data = local_1b8.stackData;
    local_1b8.numberOfBitsUsed = 0;
    local_1b8.numberOfBitsAllocated = 0x800;
    local_1b8.readOffset = 0;
    local_1b8.copyData = true;
    local_14 = CONCAT31(local_14._1_3_,2);
    local_69 = true;
    BitStream::WriteBits(&local_1b8,&local_69,8,(bool)uVar22);
    BitStream::Write<>(&local_1b8,(__uint64 *)&local_80);
    BitStream::Write<>(&local_1b8,(__uint64 *)(param_2 + 0x450));
    uVar33 = local_1b8.numberOfBitsUsed - 1 & 7;
    local_1b8.numberOfBitsUsed = local_1b8.numberOfBitsUsed + (7 - uVar33);
    if ((local_1b8.numberOfBitsUsed & 7) == 0) {
      BitStream::AddBitsAndReallocate(&local_1b8,0x80);
      puVar24 = local_1b8.data + (local_1b8.numberOfBitsUsed + 7 >> 3);
      puVar24[0] = '\0';
      puVar24[1] = 0xff;
      puVar24[2] = 0xff;
      puVar24[3] = '\0';
      puVar24[4] = 0xfe;
      puVar24[5] = 0xfe;
      puVar24[6] = 0xfe;
      puVar24[7] = 0xfe;
      puVar24[8] = 0xfd;
      puVar24[9] = 0xfd;
      puVar24[10] = 0xfd;
      puVar24[0xb] = 0xfd;
      puVar24[0xc] = '\x12';
      puVar24[0xd] = '4';
      puVar24[0xe] = 'V';
      puVar24[0xf] = 'x';
      local_1b8.numberOfBitsUsed = local_1b8.numberOfBitsUsed + 0x80;
    }
    else {
      BitStream::WriteBits(&local_1b8,"",0x80,SUB41(uVar33,0));
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x268));
    BitStream::Write(&local_1b8,*(char **)(param_2 + 0x20),
                     CONCAT22((ushort)(*(int *)(param_2 + 0x14) + 7U >> 0x13),
                              (short)(*(int *)(param_2 + 0x14) + 7U >> 3)));
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x268));
    local_90[0] = (HuffmanEncodingTreeNode *)0x0;
    if (*(int *)(param_2 + 0x2dc) != 0) {
      do {
        (**(code **)(**(int **)(*(int *)(param_2 + 0x2d8) + (int)local_90[0] * 4) + 0x2c))();
        local_90[0] = (HuffmanEncodingTreeNode *)&local_90[0]->field_0x1;
      } while (local_90[0] < *(undefined1 **)(param_2 + 0x2dc));
    }
    local_63c.data = (char *)local_1b8.data;
    local_63c.ttl = 0;
    local_63c.length = local_1b8.numberOfBitsUsed + 7 >> 3;
    local_63c.systemAddress.systemIndex = param_1.systemIndex;
    uVar22 = 0x3c;
    uVar51 = 0x12;
    uVar55 = 0;
    local_63c.systemAddress._2_2_ = param_1._2_2_;
    local_63c.systemAddress.address = param_1.address;
    local_63c.systemAddress._1_1_ = param_1._1_1_;
    local_63c.systemAddress.debugPort = param_1.debugPort;
    pcVar48 = "f:\\src\\ois\\libs\\raknet\\code\\rakpeer.cpp";
    local_63c.systemAddress._4_4_ = param_1._4_4_;
    local_63c.systemAddress._8_4_ = param_1._8_4_;
    local_63c.systemAddress._12_4_ = param_1._12_4_;
    (**(code **)(*(int *)param_3 + 4))();
    p_Var26 = (LPCRITICAL_SECTION)
              RakPeer::AllocPacket
                        ((RakPeer *)param_2,1,pcVar48,CONCAT22(uVar55,CONCAT11(uVar51,uVar22)));
    *(uchar *)&(p_Var26[2].DebugInfo)->Type = *local_84;
    p_Var26->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT22(param_1._2_2_,param_1._0_2_);
    p_Var26->LockCount = param_1._4_4_;
    p_Var26->RecursionCount = param_1._8_4_;
    p_Var26->OwningThread = (HANDLE)param_1._12_4_;
    *(ushort *)((int)&p_Var26->LockSemaphore + 2) = param_1.systemIndex;
    *(ushort *)&p_Var26->LockSemaphore = param_1.debugPort;
    p_Var26[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)local_650._0_4_;
    p_Var26[1].LockCount = local_650._4_4_;
    *(ushort *)&p_Var26[1].RecursionCount = (ushort)uStack_648;
    SVar14._2_2_ = param_1._2_2_;
    SVar14.address = param_1.address;
    SVar14._1_1_ = param_1._1_1_;
    SVar14.systemIndex = param_1.systemIndex;
    SVar14.debugPort = param_1.debugPort;
    SVar14._4_4_ = param_1._4_4_;
    SVar14._8_4_ = param_1._8_4_;
    SVar14._12_4_ = param_1._12_4_;
    iVar27 = RakPeer::GetIndexFromSystemAddress((RakPeer *)param_2,SVar14,true);
    *(short *)((int)&p_Var26->LockSemaphore + 2) = (short)iVar27;
    *(short *)&p_Var26[1].RecursionCount = (short)iVar27;
    p_Var1 = (LPCRITICAL_SECTION)(param_2 + 0x59c);
    uVar22 = SUB41(p_Var1,0);
    uVar51 = (undefined1)((uint)p_Var1 >> 8);
    uVar55 = (undefined2)((uint)p_Var1 >> 0x10);
    pcVar48 = (char *)0x5a7a06;
    uVar53 = uVar22;
    uVar52 = uVar51;
    uVar56 = uVar55;
    local_7c[0] = p_Var26;
    EnterCriticalSection(p_Var1);
    DataStructures::Queue<>::Push
              ((Queue<> *)(param_2 + 0x5b4),(HuffmanEncodingTreeNode **)local_7c,pcVar48,
               CONCAT22(uVar56,CONCAT11(uVar52,uVar53)));
LAB_005a7a19:
    LeaveCriticalSection((LPCRITICAL_SECTION)CONCAT22(uVar55,CONCAT11(uVar51,uVar22)));
    pcVar38 = free_exref;
    if ((local_1b8.copyData != false) && (0x800 < local_1b8.numberOfBitsAllocated)) {
      uVar22 = SUB41(local_1b8.data,0);
      uVar51 = (undefined1)((uint)local_1b8.data >> 8);
      uVar55 = (undefined2)((uint)local_1b8.data >> 0x10);
LAB_005a7a40:
      pcVar38 = free_exref;
      free((void *)CONCAT22(uVar55,CONCAT11(uVar51,uVar22)));
    }
  }
  else {
    if (uVar2 != '\x1c') {
      if (uVar2 == '\r') {
        if ((local_61c < 0x1a) || (0x1a8 < local_61c)) goto LAB_005a966d;
        local_90[0] = (HuffmanEncodingTreeNode *)(local_61c - 0x19);
        local_74 = (RakPeer *)
                   RakPeer::AllocPacket
                             ((RakPeer *)param_2,local_61c - 0x18,pcVar47,
                              CONCAT22(uVar54,CONCAT11(uVar51,uVar22)));
        memset(&local_3e8,0,0x114);
        local_3e8.copyData = false;
        local_3e8.numberOfBitsUsed = local_61c * 8;
        local_14 = 5;
        local_3e8.readOffset = 8;
        local_3e8.numberOfBitsAllocated = local_3e8.numberOfBitsUsed;
        local_3e8.data = in_ECX;
        BitStream::Read<>(&local_3e8,(__uint64 *)(local_74 + 0x18));
        pPVar28 = (Packet *)local_74;
        puVar24 = in_ECX + 0x19;
        if (in_ECX[0x19] == '\x1d') {
          *(int *)(local_74 + 0x28) = *(int *)(local_74 + 0x28) + -1;
          *(int *)(local_74 + 0x2c) = *(int *)(local_74 + 0x28) << 3;
          **(undefined1 **)(local_74 + 0x30) = 0x1d;
          puVar29 = (undefined1 *)((int)&local_90[0][-1].parent + 3);
          uVar22 = SUB41(puVar29,0);
          uVar51 = (undefined1)((uint)puVar29 >> 8);
          uVar55 = (undefined2)((uint)puVar29 >> 0x10);
          puVar24 = in_ECX + 0x1a;
        }
        else {
          **(undefined1 **)(local_74 + 0x30) = 0xd;
          uVar22 = SUB41(local_90[0],0);
          uVar51 = (undefined1)((uint)local_90[0] >> 8);
          uVar55 = (undefined2)((uint)local_90[0] >> 0x10);
        }
        memcpy((void *)(*(int *)(local_74 + 0x30) + 1),puVar24,
               CONCAT22(uVar55,CONCAT11(uVar51,uVar22)));
        *(uint *)pPVar28 = CONCAT22(param_1._2_2_,param_1._0_2_);
        *(undefined4 *)(pPVar28 + 4) = param_1._4_4_;
        *(undefined4 *)(pPVar28 + 8) = param_1._8_4_;
        *(undefined4 *)(pPVar28 + 0xc) = param_1._12_4_;
        *(ushort *)(pPVar28 + 0x12) = param_1.systemIndex;
        *(ushort *)(pPVar28 + 0x10) = param_1.debugPort;
        SVar16._2_2_ = param_1._2_2_;
        SVar16.address = param_1.address;
        SVar16._1_1_ = param_1._1_1_;
        SVar16.systemIndex = param_1.systemIndex;
        SVar16.debugPort = param_1.debugPort;
        SVar16._4_4_ = param_1._4_4_;
        SVar16._8_4_ = param_1._8_4_;
        SVar16._12_4_ = param_1._12_4_;
        iVar27 = RakPeer::GetIndexFromSystemAddress((RakPeer *)param_2,SVar16,true);
        *(short *)(pPVar28 + 0x12) = (short)iVar27;
        *(short *)(pPVar28 + 0x20) = (short)iVar27;
        RakPeer::AddPacketToProducer((RakPeer *)param_2,pPVar28);
LAB_005a9635:
        if ((local_3e8.copyData != false) && (0x800 < local_3e8.numberOfBitsAllocated)) {
          free(local_3e8.data);
        }
        goto LAB_005a966d;
      }
      if (uVar2 == '\x06') {
        local_90[0] = (HuffmanEncodingTreeNode *)0x0;
        local_2d0.data = in_ECX;
        if (*(int *)(param_2 + 0x2dc) != 0) {
          local_7c[0] = (LPCRITICAL_SECTION)(local_61c * 8);
          do {
            (**(code **)(**(int **)(*(int *)(param_2 + 0x2d8) + (int)local_90[0] * 4) + 0x30))();
            local_90[0] = (HuffmanEncodingTreeNode *)&local_90[0]->field_0x1;
            local_2d0.data = local_84;
          } while (local_90[0] < *(undefined1 **)(param_2 + 0x2dc));
        }
        memset(&local_2d0,0,0x114);
        local_2d0.numberOfBitsUsed = local_61c << 3;
        local_2d0.copyData = false;
        local_14 = 6;
        local_650._0_4_ = DAT_006578d0;
        local_650._4_4_ = DAT_006578d4;
        uStack_648 = (char *)CONCAT22(uStack_648._2_2_,DAT_006578d8);
        local_2d0.readOffset = 0x88;
        local_2d0.numberOfBitsAllocated = local_2d0.numberOfBitsUsed;
        BitStream::Read<>(&local_2d0,(__uint64 *)local_650);
        BitStream::ReadBits(&local_2d0,&local_69,8,extraout_CL);
        if (local_69 != false) {
          iVar27 = *(int *)ThreadLocalStoragePointer;
          if ((*(int *)(iVar27 + 4) < DAT_006629a4) &&
             (__Init_thread_header(&DAT_006629a4), iVar27 = extraout_ECX, DAT_006629a4 == -1)) {
            DAT_006629a0 = htonl(0x3039);
            __Init_thread_footer(&DAT_006629a4);
            iVar27 = extraout_ECX_00;
          }
          if (DAT_006629a0 == 0x3039) {
            BitStream::ReadBits(&local_2d0,(uchar *)&local_74,0x20,SUB41(iVar27,0));
          }
          else {
            bVar21 = BitStream::ReadBits(&local_2d0,(uchar *)&local_84,0x20,SUB41(iVar27,0));
            if (bVar21) {
              local_74 = (RakPeer *)
                         CONCAT13((char)local_84,
                                  CONCAT12((char)((uint)local_84 >> 8),
                                           CONCAT11(local_84._2_1_,local_84._3_1_)));
            }
          }
        }
        uVar22 = 0x14;
        memset(&local_1b8,0,0x114);
        local_1b8.data = local_1b8.stackData;
        local_1b8.numberOfBitsUsed = 0;
        local_1b8.numberOfBitsAllocated = 0x800;
        local_1b8.readOffset = 0;
        local_1b8.copyData = true;
        local_14 = CONCAT31(local_14._1_3_,7);
        local_70 = (byte *)CONCAT13(7,(undefined3)local_70);
        BitStream::WriteBits(&local_1b8,(uchar *)((int)&local_70 + 3),8,(bool)uVar22);
        uVar33 = local_1b8.numberOfBitsUsed - 1 & 7;
        local_1b8.numberOfBitsUsed = local_1b8.numberOfBitsUsed + (7 - uVar33);
        if ((local_1b8.numberOfBitsUsed & 7) == 0) {
          BitStream::AddBitsAndReallocate(&local_1b8,0x80);
          puVar24 = local_1b8.data + (local_1b8.numberOfBitsUsed + 7 >> 3);
          puVar24[0] = '\0';
          puVar24[1] = 0xff;
          puVar24[2] = 0xff;
          puVar24[3] = '\0';
          puVar24[4] = 0xfe;
          puVar24[5] = 0xfe;
          puVar24[6] = 0xfe;
          puVar24[7] = 0xfe;
          puVar24[8] = 0xfd;
          puVar24[9] = 0xfd;
          puVar24[10] = 0xfd;
          puVar24[0xb] = 0xfd;
          puVar24[0xc] = '\x12';
          puVar24[0xd] = '4';
          puVar24[0xe] = 'V';
          puVar24[0xf] = 'x';
          local_1b8.numberOfBitsUsed = local_1b8.numberOfBitsUsed + 0x80;
        }
        else {
          BitStream::WriteBits(&local_1b8,"",0x80,SUB41(uVar33,0));
        }
        if (local_69 != false) {
          BitStream::Write<>(&local_1b8,&local_74);
        }
        local_7c[0] = (LPCRITICAL_SECTION)(param_2 + 0x2f4);
        EnterCriticalSection(local_7c[0]);
        puVar24 = *(uchar **)(param_2 + 0x2e8);
        local_90[0] = (HuffmanEncodingTreeNode *)0x0;
        local_74 = (RakPeer *)((int)puVar24 * 4);
        local_84 = puVar24;
        while( true ) {
          if (*(char **)(param_2 + 0x2ec) < puVar24) {
            iVar27 = *(int *)(param_2 + 0x2f0) - (int)puVar24;
          }
          else {
            iVar27 = -(int)puVar24;
          }
          if ((HuffmanEncodingTreeNode *)(*(char **)(param_2 + 0x2ec) + iVar27) <= local_90[0]) {
            uVar22 = SUB41(local_7c[0],0);
            uVar51 = (undefined1)((uint)local_7c[0] >> 8);
            uVar55 = (undefined2)((uint)local_7c[0] >> 0x10);
            goto LAB_005a7a19;
          }
          if (local_84 < *(char **)(param_2 + 0x2f0)) {
            pRVar39 = local_74 + *(int *)(param_2 + 0x2e4);
          }
          else {
            pRVar39 = (RakPeer *)
                      (*(int *)(param_2 + 0x2e4) +
                      (int)(puVar24 + ((int)local_90[0] - (int)*(char **)(param_2 + 0x2f0))) * 4);
          }
          psVar3 = *(short **)pRVar39;
          if (((psVar3[1] == param_1._2_2_) && (*psVar3 == 2)) &&
             (*(int *)(psVar3 + 2) == param_1._4_4_)) {
            bVar21 = true;
          }
          else {
            bVar21 = false;
          }
          if (bVar21) break;
          local_74 = local_74 + 4;
          local_90[0] = (HuffmanEncodingTreeNode *)&local_90[0]->field_0x1;
          local_84 = local_84 + 1;
        }
        if (local_69 != false) {
          local_70 = (byte *)((uint)local_70 & 0xffffff);
          BitStream::WriteBits(&local_1b8,(uchar *)((int)&local_70 + 3),8,SUB41(local_90[0],0));
        }
        BitStream::Read<>(&local_2d0,(ushort *)&local_61c);
        local_70 = (byte *)CONCAT13((*psVar3 != 2) * '\x02' + '\x04',(undefined3)local_70);
        BitStream::WriteBits(&local_1b8,(uchar *)((int)&local_70 + 3),8,extraout_CL_00);
        if (*psVar3 == 2) {
          local_650._0_4_ = *(undefined4 *)psVar3;
          local_650._4_4_ = *(undefined4 *)(psVar3 + 2);
          uStack_648 = *(char **)(psVar3 + 4);
          iStack_644 = *(int *)(psVar3 + 6);
          local_7c[0] = (LPCRITICAL_SECTION)~*(uint *)(psVar3 + 2);
          BitStream::WriteBits(&local_1b8,(uchar *)local_7c,0x20,extraout_CL_01);
          local_7c[0] = (LPCRITICAL_SECTION)((uint)local_650._0_4_ >> 0x10);
          BitStream::WriteBits(&local_1b8,(uchar *)local_7c,0x10,extraout_CL_02);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x2f4));
        iVar27 = *(int *)ThreadLocalStoragePointer;
        if ((*(int *)(iVar27 + 4) < DAT_006629a4) &&
           (__Init_thread_header(&DAT_006629a4), iVar27 = extraout_ECX_01, DAT_006629a4 == -1)) {
          DAT_006629a0 = htonl(0x3039);
          __Init_thread_footer(&DAT_006629a4);
          iVar27 = extraout_ECX_02;
        }
        if (DAT_006629a0 != 0x3039) {
          uVar33 = local_61c >> 8;
          uVar22 = (undefined1)local_61c;
          local_61c._0_2_ = CONCAT11(uVar22,(char)uVar33);
        }
        BitStream::WriteBits(&local_1b8,(uchar *)&local_61c,0x10,SUB41(iVar27,0));
        p_Var25 = (__uint64 *)(**(code **)(*(int *)param_2 + 0xd0))();
        BitStream::Write<>(&local_1b8,p_Var25);
        local_90[0] = (HuffmanEncodingTreeNode *)0x0;
        if (*(int *)(param_2 + 0x2dc) != 0) {
          do {
            (**(code **)(**(int **)(*(int *)(param_2 + 0x2d8) + (int)local_90[0] * 4) + 0x2c))
                      (local_1b8.data,local_1b8.numberOfBitsUsed);
            local_90[0] = (HuffmanEncodingTreeNode *)&local_90[0]->field_0x1;
          } while (local_90[0] < *(undefined1 **)(param_2 + 0x2dc));
        }
        local_63c.data = (char *)local_1b8.data;
        local_63c.ttl = 0;
        local_63c.length = local_1b8.numberOfBitsUsed + 7 >> 3;
        local_63c.systemAddress.systemIndex = param_1.systemIndex;
        local_63c.systemAddress._2_2_ = param_1._2_2_;
        local_63c.systemAddress.address = param_1.address;
        local_63c.systemAddress._1_1_ = param_1._1_1_;
        local_63c.systemAddress.debugPort = param_1.debugPort;
        local_63c.systemAddress._4_4_ = param_1._4_4_;
        local_63c.systemAddress._8_4_ = param_1._8_4_;
        local_63c.systemAddress._12_4_ = param_1._12_4_;
        (**(code **)(*(int *)param_3 + 4))();
        if ((local_1b8.copyData != false) && (0x800 < local_1b8.numberOfBitsAllocated)) {
          free(local_1b8.data);
        }
        if ((local_2d0.copyData != false) && (0x800 < local_2d0.numberOfBitsAllocated)) {
          free(local_2d0.data);
        }
        goto LAB_005a966d;
      }
      if (uVar2 != '\b') {
        if (((((uVar2 == '\x11') || (uVar2 == '\x14')) ||
             ((uVar2 == '\x17' || ((uVar2 == '\x12' || (uVar2 == '\x18')))))) || (uVar2 == '\x1a'))
           || (uVar2 == '\x19')) {
          memset(&local_3e8,0,0x114);
          local_3e8.numberOfBitsUsed = local_61c << 3;
          local_3e8.copyData = false;
          local_14 = 10;
          local_3e8.readOffset = 0x88;
          if (local_70._3_1_ == '\x19') {
            local_3e8.readOffset = 0x90;
          }
          local_650._0_4_ = DAT_006578d0;
          local_650._4_4_ = DAT_006578d4;
          uStack_648 = (char *)CONCAT22(uStack_648._2_2_,DAT_006578d8);
          local_3e8.numberOfBitsAllocated = local_3e8.numberOfBitsUsed;
          local_3e8.data = in_ECX;
          BitStream::Read<>(&local_3e8,(__uint64 *)local_650);
          local_69 = false;
          EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x2f4));
          uVar33 = *(uint *)(param_2 + 0x2e8);
          uVar37 = 0;
          uVar35 = *(uint *)(param_2 + 0x2ec);
          local_74 = (RakPeer *)(uVar33 * 4);
          local_6a4 = uVar33;
          while( true ) {
            if (uVar35 < uVar33) {
              iVar27 = *(int *)(param_2 + 0x2f0) - uVar33;
            }
            else {
              iVar27 = -uVar33;
            }
            if (uVar35 + iVar27 <= uVar37) goto LAB_005a95a2;
            if (local_6a4 < *(uint *)(param_2 + 0x2f0)) {
              pRVar39 = local_74 + *(int *)(param_2 + 0x2e4);
            }
            else {
              pRVar39 = (RakPeer *)
                        (*(int *)(param_2 + 0x2e4) +
                        ((uVar37 - *(int *)(param_2 + 0x2f0)) + *(int *)(param_2 + 0x2e8)) * 4);
              uVar35 = *(uint *)(param_2 + 0x2ec);
            }
            psVar3 = *(short **)pRVar39;
            if ((((*(int *)(psVar3 + 0xa4) == 1) && (psVar3[1] == param_1._2_2_)) && (*psVar3 == 2))
               && (uVar35 = *(uint *)(param_2 + 0x2ec), *(int *)(psVar3 + 2) == param_1._4_4_))
            break;
            local_74 = local_74 + 4;
            uVar37 = uVar37 + 1;
            local_6a4 = local_6a4 + 1;
            uVar33 = *(uint *)(param_2 + 0x2e8);
          }
          local_69 = true;
          DataStructures::Queue<>::RemoveAtIndex((Queue<> *)(param_2 + 0x2e4),uVar37);
          operator_delete(psVar3,(nothrow_t *)0x150);
LAB_005a95a2:
          p_Var1 = (LPCRITICAL_SECTION)(param_2 + 0x2f4);
          uVar22 = SUB41(p_Var1,0);
          uVar51 = (undefined1)((uint)p_Var1 >> 8);
          uVar55 = (undefined2)((uint)p_Var1 >> 0x10);
          pcVar48 = (char *)0x5a95af;
          LeaveCriticalSection(p_Var1);
          if (local_69 != false) {
            local_7c[0] = (LPCRITICAL_SECTION)
                          RakPeer::AllocPacket
                                    ((RakPeer *)param_2,1,pcVar48,
                                     CONCAT22(uVar55,CONCAT11(uVar51,uVar22)));
            *(uchar *)&(local_7c[0][2].DebugInfo)->Type = *local_84;
            local_7c[0][1].SpinCount = 8;
            local_7c[0]->DebugInfo =
                 (PRTL_CRITICAL_SECTION_DEBUG)CONCAT22(param_1._2_2_,param_1._0_2_);
            local_7c[0]->LockCount = param_1._4_4_;
            local_7c[0]->RecursionCount = param_1._8_4_;
            local_7c[0]->OwningThread = (HANDLE)param_1._12_4_;
            *(ushort *)((int)&local_7c[0]->LockSemaphore + 2) = param_1.systemIndex;
            *(ushort *)&local_7c[0]->LockSemaphore = param_1.debugPort;
            local_7c[0][1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)local_650._0_4_;
            local_7c[0][1].LockCount = local_650._4_4_;
            *(ushort *)&local_7c[0][1].RecursionCount = (ushort)uStack_648;
            p_Var1 = (LPCRITICAL_SECTION)(param_2 + 0x59c);
            uVar22 = SUB41(p_Var1,0);
            uVar51 = (undefined1)((uint)p_Var1 >> 8);
            uVar55 = (undefined2)((uint)p_Var1 >> 0x10);
            pcVar48 = (char *)0x5a961c;
            EnterCriticalSection(p_Var1);
            DataStructures::Queue<>::Push
                      ((Queue<> *)(param_2 + 0x5b4),(HuffmanEncodingTreeNode **)local_7c,pcVar48,
                       CONCAT22(uVar55,CONCAT11(uVar51,uVar22)));
            LeaveCriticalSection(p_Var1);
          }
          goto LAB_005a9635;
        }
        if (uVar2 == '\x05') {
          if (0x11 < (int)local_61c) {
            if (in_ECX[0x11] == '\x06') {
              local_7c[0] = (LPCRITICAL_SECTION)0x0;
              if (*(int *)(param_2 + 0x2dc) != 0) {
                local_90[0] = (HuffmanEncodingTreeNode *)(local_61c * 8);
                do {
                  (**(code **)(**(int **)(*(int *)(param_2 + 0x2d8) + (int)local_7c[0] * 4) + 0x30))
                            ();
                  local_7c[0] = (LPCRITICAL_SECTION)((int)&local_7c[0]->DebugInfo + 1);
                } while (local_7c[0] < *(undefined1 **)(param_2 + 0x2dc));
              }
              memset(&local_2d0,0,0x114);
              BitStream::BitStream(&local_2d0);
              local_14 = 0xc;
              local_70 = (byte *)CONCAT13(6,(undefined3)local_70);
              BitStream::WriteBits(this_01,(uchar *)((int)&local_70 + 3),8,SUB41(this_01,0));
              BitStream::WriteAlignedBytes(&local_2d0,"",0x10);
              p_Var25 = (__uint64 *)(**(code **)(*(int *)param_2 + 0xd0))();
              BitStream::Write<>(&local_2d0,p_Var25);
              local_70 = (byte *)((uint)local_70 & 0xffffff);
              BitStream::WriteBits(&local_2d0,(uchar *)((int)&local_70 + 3),8,extraout_CL_07);
              if ((int)(local_61c + 0x1c) < 0x5d5) {
                local_7c[0] = (LPCRITICAL_SECTION)(local_61c + 0x1c & 0xffff);
              }
              else {
                local_7c[0] = (LPCRITICAL_SECTION)0x5d4;
              }
              BitStream::Write<>(&local_2d0,(ushort *)local_7c);
              local_7c[0] = (LPCRITICAL_SECTION)0x0;
              if (*(int *)(param_2 + 0x2dc) != 0) {
                do {
                  (**(code **)(**(int **)(*(int *)(param_2 + 0x2d8) + (int)local_7c[0] * 4) + 0x2c))
                            (local_2d0.data,local_2d0.numberOfBitsUsed);
                  local_7c[0] = (LPCRITICAL_SECTION)((int)&local_7c[0]->DebugInfo + 1);
                } while (local_7c[0] < *(LPCRITICAL_SECTION *)(param_2 + 0x2dc));
              }
              RNS2_SendParameters::RNS2_SendParameters(&local_680);
              local_680.systemAddress._2_2_ = param_1._2_2_;
              local_680.systemAddress.address = param_1.address;
              local_680.systemAddress._1_1_ = param_1._1_1_;
              local_680.data = (char *)local_2d0.data;
              local_680.length = local_2d0.numberOfBitsUsed + 7 >> 3;
              local_680.systemAddress.systemIndex = param_1.systemIndex;
              local_680.systemAddress.debugPort = param_1.debugPort;
              local_680.systemAddress._4_2_ = param_1._4_2_;
              local_680.systemAddress._6_2_ = param_1._6_2_;
              local_680.systemAddress._8_2_ = param_1._8_2_;
              local_680.systemAddress._10_2_ = param_1._10_2_;
              local_680.systemAddress._12_4_ = param_1._12_4_;
              (**(code **)(*(int *)param_3 + 4))();
              BitStream::~BitStream(&local_2d0);
            }
            else {
              memset(&local_3e8,0,0x114);
              BitStream::BitStream(&local_3e8);
              local_14 = 0xb;
              local_70 = (byte *)CONCAT13(0x19,(undefined3)local_70);
              BitStream::WriteBits(this_00,(uchar *)((int)&local_70 + 3),8,SUB41(this_00,0));
              local_70 = (byte *)CONCAT13(6,(undefined3)local_70);
              BitStream::WriteBits(&local_3e8,(uchar *)((int)&local_70 + 3),8,extraout_CL_06);
              BitStream::WriteAlignedBytes(&local_3e8,"",0x10);
              p_Var25 = (__uint64 *)(**(code **)(*(int *)param_2 + 0xd0))();
              BitStream::Write<>(&local_3e8,p_Var25);
              local_7c[0] = (LPCRITICAL_SECTION)0x0;
              if (*(int *)(param_2 + 0x2dc) != 0) {
                do {
                  (**(code **)(**(int **)(*(int *)(param_2 + 0x2d8) + (int)local_7c[0] * 4) + 0x2c))
                            (local_3e8.data,local_3e8.numberOfBitsUsed);
                  local_7c[0] = (LPCRITICAL_SECTION)((int)&local_7c[0]->DebugInfo + 1);
                } while (local_7c[0] < *(LPCRITICAL_SECTION *)(param_2 + 0x2dc));
              }
              RNS2_SendParameters::RNS2_SendParameters(&local_63c);
              local_63c.systemAddress._2_2_ = param_1._2_2_;
              local_63c.systemAddress.address = param_1.address;
              local_63c.systemAddress._1_1_ = param_1._1_1_;
              local_63c.data = (char *)local_3e8.data;
              local_63c.length = local_3e8.numberOfBitsUsed + 7 >> 3;
              local_63c.systemAddress.systemIndex = param_1.systemIndex;
              local_63c.systemAddress.debugPort = param_1.debugPort;
              local_63c.systemAddress._4_4_ = param_1._4_4_;
              local_63c.systemAddress._8_4_ = param_1._8_4_;
              local_63c.systemAddress._12_4_ = param_1._12_4_;
              (**(code **)(*(int *)param_3 + 4))();
              BitStream::~BitStream(&local_3e8);
            }
          }
          goto LAB_005a966d;
        }
        if (uVar2 != '\a') goto LAB_005a966d;
        local_680.ttl = -0x10000;
        local_680.systemAddress._6_2_ = 0;
        local_680.systemAddress._8_2_ = 0;
        local_680.systemAddress._10_2_ = 0;
        local_680.systemAddress._12_4_ = 0;
        local_680.systemAddress.debugPort = 0;
        local_680.systemAddress.systemIndex = 0;
        local_680.systemAddress._4_2_ = 2;
        RakNetGUID::RakNetGUID((RakNetGUID *)local_650);
        memset(&local_618,0,0x114);
        BitStream::BitStream(&local_618);
        uVar22 = 0x14;
        local_14 = 0xd;
        memset(&local_3e8,0,0x114);
        local_3e8.numberOfBitsUsed = local_61c << 3;
        local_3e8.copyData = false;
        local_3e8.readOffset = 0x88;
        local_3e8.numberOfBitsAllocated = local_3e8.numberOfBitsUsed;
        local_3e8.data = in_ECX;
        BitStream::ReadBits(&local_3e8,(uchar *)((int)&local_70 + 3),8,(bool)uVar22);
        if (local_70._3_1_ == '\x04') {
          BitStream::ReadBits(&local_3e8,(uchar *)local_7c,0x20,extraout_CL_08);
          local_680.systemAddress._8_2_ = SUB42(~(uint)local_7c[0],0);
          local_680.systemAddress._10_2_ = SUB42(~(uint)local_7c[0] >> 0x10,0);
          BitStream::ReadBits(&local_3e8,&local_680.systemAddress.field_0x6,0x10,extraout_CL_09);
          uVar23 = ntohs(local_680.systemAddress._6_2_);
          local_680.ttl = CONCAT22(local_680.ttl._2_2_,uVar23);
        }
        BitStream::Read<>(&local_3e8,(ushort *)&local_61c);
        BitStream::Read<>(&local_3e8,(__uint64 *)local_650);
        SVar13._2_2_ = param_1._2_2_;
        SVar13.address = param_1.address;
        SVar13._1_1_ = param_1._1_1_;
        SVar13.systemIndex = param_1.systemIndex;
        SVar13.debugPort = param_1.debugPort;
        SVar13._4_4_ = param_1._4_4_;
        SVar13._8_4_ = param_1._8_4_;
        SVar13._12_4_ = param_1._12_4_;
        pRVar30 = RakPeer::GetRemoteSystemFromSystemAddress((RakPeer *)param_2,SVar13,true,true);
        if ((pRVar30 == (RemoteSystemStruct *)0x0) || (*pRVar30 == (RemoteSystemStruct)0x0)) {
          local_69 = false;
        }
        else {
          local_69 = true;
        }
        RVar18.g._4_4_ = local_650._4_4_;
        RVar18.g._0_4_ = local_650._0_4_;
        RVar18._8_4_ = uStack_648;
        RVar18._12_4_ = iStack_644;
        pRVar32 = RakPeer::GetRemoteSystemFromGUID((RakPeer *)param_2,RVar18,true);
        if ((pRVar32 == (RemoteSystemStruct *)0x0) || (*pRVar32 == (RemoteSystemStruct)0x0)) {
          bVar20 = 0;
        }
        else {
          bVar20 = 1;
        }
        if ((local_69 & bVar20) == 0) {
          if (local_69 == false) {
            if (bVar20 == 1) {
              iVar27 = 3;
            }
            else {
LAB_005a8dbf:
              iVar27 = 0;
            }
          }
          else {
            if ((local_69 != true) || (bVar20 != 0)) goto LAB_005a8dbf;
            iVar27 = 4;
          }
        }
        else if ((pRVar30 == pRVar32) && (*(int *)(pRVar30 + 0x120c) == 6)) {
          iVar27 = 1;
        }
        else {
          iVar27 = 2;
        }
        memset(&local_500,0,0x114);
        BitStream::BitStream(&local_500);
        local_14 = CONCAT31(local_14._1_3_,0xf);
        local_70 = (byte *)CONCAT13(8,(undefined3)local_70);
        BitStream::WriteBits(this_02,(uchar *)((int)&local_70 + 3),8,SUB41(this_02,0));
        BitStream::WriteAlignedBytes(&local_500,"",0x10);
        p_Var25 = (__uint64 *)(**(code **)(*(int *)param_2 + 0xd0))();
        BitStream::Write<>(&local_500,p_Var25);
        local_70 = (byte *)CONCAT13((param_1._0_2_ != 2) * '\x02' + '\x04',(undefined3)local_70);
        BitStream::WriteBits(&local_500,(uchar *)((int)&local_70 + 3),8,extraout_CL_10);
        if (param_1._0_2_ == 2) {
          local_a0._2_2_ = param_1._2_2_;
          local_a0._0_2_ = 2;
          local_63c.ttl = CONCAT22(param_1.systemIndex,param_1.debugPort);
          local_a0._4_4_ = param_1._4_4_;
          local_a0._8_4_ = param_1._8_4_;
          local_a0._12_4_ = param_1._12_4_;
          local_7c[0] = (LPCRITICAL_SECTION)~param_1._4_4_;
          BitStream::WriteBits(&local_500,(uchar *)local_7c,0x20,extraout_CL_11);
          local_7c[0] = (LPCRITICAL_SECTION)(uint)(ushort)local_a0._2_2_;
          BitStream::WriteBits(&local_500,(uchar *)local_7c,0x10,extraout_CL_12);
        }
        iVar34 = *(int *)ThreadLocalStoragePointer;
        if ((*(int *)(iVar34 + 4) < DAT_006629a4) &&
           (__Init_thread_header(&DAT_006629a4), iVar34 = extraout_ECX_05, DAT_006629a4 == -1)) {
          DAT_006629a0 = htonl(0x3039);
          __Init_thread_footer(&DAT_006629a4);
          iVar34 = extraout_ECX_06;
        }
        if (DAT_006629a0 == 0x3039) {
          puVar24 = (uchar *)&local_61c;
        }
        else {
          local_70._0_2_ = CONCAT11((char)local_61c,(char)(local_61c >> 8));
          puVar24 = (uchar *)&local_70;
        }
        BitStream::WriteBits(&local_500,puVar24,0x10,(bool)SUB41(iVar34,0));
        BitStream::AddBitsAndReallocate(&local_500,1);
        if ((local_500.numberOfBitsUsed & 7) == 0) {
          local_500.data[local_500.numberOfBitsUsed >> 3] = '\0';
        }
        local_500.numberOfBitsUsed = local_500.numberOfBitsUsed + 1;
        local_90[0] = (HuffmanEncodingTreeNode *)local_500.numberOfBitsUsed;
        if (iVar27 == 1) {
          local_7c[0] = (LPCRITICAL_SECTION)0x0;
          if (*(int *)(param_2 + 0x2dc) != 0) {
            while( true ) {
              local_500.numberOfBitsUsed = (uint)local_90[0];
              (**(code **)(**(int **)(*(int *)(param_2 + 0x2d8) + (int)local_7c[0] * 4) + 0x2c))
                        (local_500.data,local_90[0]);
              local_7c[0] = (LPCRITICAL_SECTION)((int)&local_7c[0]->DebugInfo + 1);
              if (*(LPCRITICAL_SECTION *)(param_2 + 0x2dc) <= local_7c[0]) break;
              local_90[0] = (HuffmanEncodingTreeNode *)local_500.numberOfBitsUsed;
            }
          }
          RNS2_SendParameters::RNS2_SendParameters(&local_63c);
          local_63c.systemAddress._2_2_ = param_1._2_2_;
          local_63c.systemAddress.address = param_1.address;
          local_63c.systemAddress._1_1_ = param_1._1_1_;
          local_63c.data = (char *)local_500.data;
          local_63c.length = (uint)((int)(local_500.numberOfBitsUsed + 4) + 3U) >> 3;
          local_63c.systemAddress.systemIndex = param_1.systemIndex;
          local_63c.systemAddress.debugPort = param_1.debugPort;
          iVar27 = *(int *)param_3;
          local_63c.systemAddress._4_4_ = param_1._4_4_;
          local_63c.systemAddress._8_4_ = param_1._8_4_;
          local_63c.systemAddress._12_4_ = param_1._12_4_;
        }
        else if (iVar27 == 0) {
          bVar21 = RakPeer::AllowIncomingConnections((RakPeer *)param_2);
          if (bVar21) {
            local_69 = false;
            SVar8._2_2_ = local_680.systemAddress._6_2_;
            SVar8.address = (<>)local_680.systemAddress._4_1_;
            SVar8._1_1_ = local_680.systemAddress._5_1_;
            SVar8._6_2_ = local_680.systemAddress._10_2_;
            SVar8._4_2_ = local_680.systemAddress._8_2_;
            SVar6._2_2_ = param_1._2_2_;
            SVar6.address = param_1.address;
            SVar6._1_1_ = param_1._1_1_;
            SVar6.systemIndex = param_1.systemIndex;
            SVar6.debugPort = param_1.debugPort;
            SVar6._4_4_ = param_1._4_4_;
            SVar6._8_4_ = param_1._8_4_;
            SVar6._12_4_ = param_1._12_4_;
            SVar8._8_4_ = local_680.systemAddress._12_4_;
            SVar8._12_2_ = local_680.systemAddress.debugPort;
            SVar8._14_2_ = local_680.systemAddress.systemIndex;
            SVar8.debugPort = (undefined2)local_680.ttl;
            SVar8.systemIndex = local_680.ttl._2_2_;
            RVar12.g._4_4_ = local_650._0_4_;
            RVar12.g._0_4_ = extraout_ECX_07;
            RVar12._8_4_ = local_650._4_4_;
            RVar12._12_4_ = uStack_648;
            RakPeer::AssignSystemAddressToRemoteSystemList
                      ((RakPeer *)param_2,SVar6,in_stack_fffff8fc,(RakNetSocket2 *)param_3,&local_69
                       ,SVar8,local_61c & 0xffff,RVar12,(bool)SUB41(iStack_644,0));
            if (local_69 == true) {
              local_70 = (byte *)CONCAT13(0x1a,(undefined3)local_70);
              BitStream::WriteBits(&local_618,(uchar *)((int)&local_70 + 3),8,extraout_CL_13);
              BitStream::WriteAlignedBytes(&local_618,"",0x10);
              BitStream::Write<>(&local_618,(__uint64 *)(param_2 + 0x450));
              local_7c[0] = (LPCRITICAL_SECTION)0x0;
              if (*(int *)(param_2 + 0x2dc) != 0) {
                do {
                  (**(code **)(**(int **)(*(int *)(param_2 + 0x2d8) + (int)local_7c[0] * 4) + 0x2c))
                            (local_618.data,local_618.numberOfBitsUsed);
                  local_7c[0] = (LPCRITICAL_SECTION)((int)&local_7c[0]->DebugInfo + 1);
                } while (local_7c[0] < *(LPCRITICAL_SECTION *)(param_2 + 0x2dc));
              }
              RNS2_SendParameters::RNS2_SendParameters((RNS2_SendParameters *)local_660);
              local_660._10_2_ = param_1._2_2_;
              local_660[8] = param_1.address;
              local_660[9] = param_1._1_1_;
              local_660._0_4_ = local_618.data;
              local_660._4_4_ = local_618.numberOfBitsUsed + 7 >> 3;
              local_660._12_4_ = param_1._4_4_;
              local_650._0_4_ = param_1._8_4_;
              local_650._4_4_ = param_1._12_4_;
              uStack_648 = (char *)CONCAT22(param_1.systemIndex,param_1.debugPort);
            }
            else {
              local_7c[0] = (LPCRITICAL_SECTION)0x0;
              if (*(int *)(param_2 + 0x2dc) != 0) {
                do {
                  (**(code **)(**(int **)(*(int *)(param_2 + 0x2d8) + (int)local_7c[0] * 4) + 0x2c))
                            (local_500.data,local_500.numberOfBitsUsed);
                  local_7c[0] = (LPCRITICAL_SECTION)((int)&local_7c[0]->DebugInfo + 1);
                } while (local_7c[0] < *(LPCRITICAL_SECTION *)(param_2 + 0x2dc));
              }
              RNS2_SendParameters::RNS2_SendParameters(&local_6a0);
              local_6a0.systemAddress._2_2_ = param_1._2_2_;
              local_6a0.systemAddress.address = param_1.address;
              local_6a0.systemAddress._1_1_ = param_1._1_1_;
              local_6a0.systemAddress._4_4_ = param_1._4_4_;
              local_6a0.systemAddress._8_4_ = param_1._8_4_;
              local_6a0.systemAddress._12_4_ = param_1._12_4_;
              local_6a0.length = (uint)((int)(local_500.numberOfBitsUsed + 4) + 3U) >> 3;
              local_6a0.systemAddress.systemIndex = param_1.systemIndex;
              local_6a0.systemAddress.debugPort = param_1.debugPort;
            }
            iVar27 = *(int *)param_3;
          }
          else {
            local_70 = (byte *)CONCAT13(0x14,(undefined3)local_70);
            BitStream::WriteBits
                      (&local_618,(uchar *)((int)&local_70 + 3),8,(bool)SUB41(extraout_ECX_07,0));
            BitStream::WriteAlignedBytes(&local_618,"",0x10);
            BitStream::Write<>(&local_618,(__uint64 *)(param_2 + 0x450));
            local_7c[0] = (LPCRITICAL_SECTION)0x0;
            if (*(int *)(param_2 + 0x2dc) != 0) {
              do {
                (**(code **)(**(int **)(*(int *)(param_2 + 0x2d8) + (int)local_7c[0] * 4) + 0x2c))
                          (local_618.data,local_618.numberOfBitsUsed);
                local_7c[0] = (LPCRITICAL_SECTION)((int)&local_7c[0]->DebugInfo + 1);
              } while (local_7c[0] < *(LPCRITICAL_SECTION *)(param_2 + 0x2dc));
            }
            RNS2_SendParameters::RNS2_SendParameters(&local_63c);
            local_63c.systemAddress._2_2_ = param_1._2_2_;
            local_63c.systemAddress.address = param_1.address;
            local_63c.systemAddress._1_1_ = param_1._1_1_;
            local_63c.data = (char *)local_618.data;
            local_63c.length = local_618.numberOfBitsUsed + 7 >> 3;
            local_63c.systemAddress.systemIndex = param_1.systemIndex;
            local_63c.systemAddress.debugPort = param_1.debugPort;
            iVar27 = *(int *)param_3;
            local_63c.systemAddress._4_4_ = param_1._4_4_;
            local_63c.systemAddress._8_4_ = param_1._8_4_;
            local_63c.systemAddress._12_4_ = param_1._12_4_;
          }
        }
        else {
          local_70 = (byte *)CONCAT13(0x12,(undefined3)local_70);
          BitStream::WriteBits
                    (&local_618,(uchar *)((int)&local_70 + 3),8,
                     (bool)SUB41(local_500.numberOfBitsUsed,0));
          BitStream::WriteAlignedBytes(&local_618,"",0x10);
          BitStream::Write<>(&local_618,(__uint64 *)(param_2 + 0x450));
          local_7c[0] = (LPCRITICAL_SECTION)0x0;
          if (*(int *)(param_2 + 0x2dc) != 0) {
            do {
              (**(code **)(**(int **)(*(int *)(param_2 + 0x2d8) + (int)local_7c[0] * 4) + 0x2c))
                        (local_618.data,local_618.numberOfBitsUsed);
              local_7c[0] = (LPCRITICAL_SECTION)((int)&local_7c[0]->DebugInfo + 1);
            } while (local_7c[0] < *(LPCRITICAL_SECTION *)(param_2 + 0x2dc));
          }
          RNS2_SendParameters::RNS2_SendParameters(&local_63c);
          local_63c.systemAddress._2_2_ = param_1._2_2_;
          local_63c.systemAddress.address = param_1.address;
          local_63c.systemAddress._1_1_ = param_1._1_1_;
          local_63c.data = (char *)local_618.data;
          local_63c.length = local_618.numberOfBitsUsed + 7 >> 3;
          local_63c.systemAddress.systemIndex = param_1.systemIndex;
          local_63c.systemAddress.debugPort = param_1.debugPort;
          iVar27 = *(int *)param_3;
          local_63c.systemAddress._4_4_ = param_1._4_4_;
          local_63c.systemAddress._8_4_ = param_1._8_4_;
          local_63c.systemAddress._12_4_ = param_1._12_4_;
        }
        (**(code **)(iVar27 + 4))();
        BitStream::~BitStream(&local_500);
        BitStream::~BitStream(&local_3e8);
        BitStream::~BitStream(&local_618);
        goto LAB_005a966d;
      }
      local_90[0] = (HuffmanEncodingTreeNode *)0x0;
      local_1b8.data = in_ECX;
      if (*(int *)(param_2 + 0x2dc) != 0) {
        local_7c[0] = (LPCRITICAL_SECTION)(local_61c * 8);
        do {
          in_stack_fffff928._0_2_ = 0x82f6;
          in_stack_fffff928._2_2_ = 0x5a;
          in_stack_fffff92c = local_84;
          (**(code **)(**(int **)(*(int *)(param_2 + 0x2d8) + (int)local_90[0] * 4) + 0x30))();
          local_90[0] = (HuffmanEncodingTreeNode *)&local_90[0]->field_0x1;
          local_1b8.data = local_84;
        } while (local_90[0] < *(undefined1 **)(param_2 + 0x2dc));
      }
      memset(&local_1b8,0,0x114);
      local_1b8.numberOfBitsUsed = local_61c << 3;
      local_1b8.copyData = false;
      local_14 = 8;
      local_650._0_4_ = DAT_006578d0;
      local_650._4_4_ = DAT_006578d4;
      uStack_648 = (char *)CONCAT22(uStack_648._2_2_,DAT_006578d8);
      local_1b8.readOffset = 0x88;
      local_1b8.numberOfBitsAllocated = local_1b8.numberOfBitsUsed;
      BitStream::Read<>(&local_1b8,(__uint64 *)local_650);
      local_680.ttl = -0x10000;
      local_680.systemAddress._6_2_ = 0;
      local_680.systemAddress._8_2_ = 0;
      local_680.systemAddress._10_2_ = 0;
      local_680.systemAddress._12_4_ = 0;
      local_680.systemAddress.debugPort = 0;
      local_680.systemAddress.systemIndex = 0;
      local_680.systemAddress._4_2_ = 2;
      BitStream::ReadBits(&local_1b8,(uchar *)((int)&local_70 + 3),8,extraout_CL_03);
      if (local_70._3_1_ == '\x04') {
        BitStream::ReadBits(&local_1b8,(uchar *)local_7c,0x20,extraout_CL_04);
        local_680.systemAddress._8_2_ = SUB42(~(uint)local_7c[0],0);
        local_680.systemAddress._10_2_ = SUB42(~(uint)local_7c[0] >> 0x10,0);
        BitStream::ReadBits(&local_1b8,&local_680.systemAddress.field_0x6,0x10,extraout_CL_05);
        uVar23 = ntohs(local_680.systemAddress._6_2_);
        local_680.ttl = CONCAT22(local_680.ttl._2_2_,uVar23);
      }
      BitStream::Read<>(&local_1b8,(ushort *)&local_61c);
      if (local_1b8.readOffset + 1 <= local_1b8.numberOfBitsUsed) {
        local_1b8.readOffset = local_1b8.readOffset + 1;
      }
      local_7c[0] = (LPCRITICAL_SECTION)(param_2 + 0x2f4);
      EnterCriticalSection(local_7c[0]);
      pbVar36 = *(byte **)(param_2 + 0x2e8);
      local_90[0] = (HuffmanEncodingTreeNode *)0x0;
      local_84 = (uchar *)((int)pbVar36 * 4);
      local_70 = pbVar36;
      while( true ) {
        if (*(byte **)(param_2 + 0x2ec) < pbVar36) {
          iVar27 = *(int *)(param_2 + 0x2f0) - (int)pbVar36;
        }
        else {
          iVar27 = -(int)pbVar36;
        }
        if ((HuffmanEncodingTreeNode *)(*(byte **)(param_2 + 0x2ec) + iVar27) <= local_90[0]) {
          LeaveCriticalSection(local_7c[0]);
          goto LAB_005a7489;
        }
        if (local_70 < *(byte **)(param_2 + 0x2f0)) {
          puVar24 = local_84 + *(int *)(param_2 + 0x2e4);
        }
        else {
          puVar24 = (uchar *)(*(int *)(param_2 + 0x2e4) +
                             (int)(pbVar36 + ((int)local_90[0] - (int)*(byte **)(param_2 + 0x2f0)))
                             * 4);
        }
        local_74 = *(RakPeer **)puVar24;
        pbVar36 = *(byte **)(param_2 + 0x2e8);
        if (((*(short *)(local_74 + 2) == param_1._2_2_) && (*(short *)local_74 == 2)) &&
           (*(int *)(local_74 + 4) == param_1._4_4_)) break;
        local_84 = local_84 + 4;
        local_90[0] = (HuffmanEncodingTreeNode *)&local_90[0]->field_0x1;
        local_70 = local_70 + 1;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x2f4));
      iVar27 = CONCAT22(param_1._2_2_,param_1._0_2_);
      local_a0._4_4_ = param_1._4_4_;
      local_a0._0_4_ = iVar27;
      local_a0._8_4_ = param_1._8_4_;
      local_a0._12_4_ = param_1._12_4_;
      local_90[0] = (HuffmanEncodingTreeNode *)CONCAT22(param_1.systemIndex,param_1.debugPort);
      local_69 = false;
      iVar34 = iVar27;
      uVar41 = param_1._4_4_;
      uVar46 = param_1._8_4_;
      uVar42 = param_1._12_4_;
      if ((((param_1._2_2_ == DAT_006578f6) && (param_1._0_2_ == 2)) &&
          (param_1._4_4_ == DAT_006578f8)) ||
         (uVar33 = RakPeer::GetRemoteSystemIndex((RakPeer *)param_2,(SystemAddress *)local_a0),
         iVar27 = extraout_ECX_03, uVar33 == 0xffffffff)) {
LAB_005a854c:
        pRVar45 = *(RakNetSocket2 **)(local_74 + 0x144);
        uVar22 = (undefined1)iStack_644;
        uVar51 = (undefined1)((uint)iStack_644 >> 8);
        uVar55 = (undefined2)((uint)iStack_644 >> 0x10);
        SVar11._2_2_ = local_680.systemAddress._6_2_;
        SVar11.address = (<>)local_680.systemAddress._4_1_;
        SVar11._1_1_ = local_680.systemAddress._5_1_;
        in_stack_fffff920 = CONCAT22(local_680.systemAddress._10_2_,local_680.systemAddress._8_2_);
        if (pRVar45 == (RakNetSocket2 *)0x0) {
          pRVar45 = (RakNetSocket2 *)param_3;
        }
        SVar7.systemIndex = param_1.systemIndex;
        SVar7.debugPort = param_1.debugPort;
        SVar7._4_4_ = uVar41;
        SVar7._0_4_ = iVar34;
        SVar7._8_4_ = uVar46;
        SVar7._12_4_ = uVar42;
        SVar11._4_4_ = in_stack_fffff920;
        SVar11._8_4_ = local_680.systemAddress._12_4_;
        SVar11._12_2_ = local_680.systemAddress.debugPort;
        SVar11._14_2_ = local_680.systemAddress.systemIndex;
        SVar11.debugPort = (undefined2)local_680.ttl;
        SVar11.systemIndex = local_680.ttl._2_2_;
        RVar17.g._4_4_ = local_650._0_4_;
        RVar17.g._0_4_ = iVar27;
        RVar17._8_4_ = local_650._4_4_;
        RVar17._12_4_ = uStack_648;
        in_stack_fffff924 = local_680.systemAddress._12_4_;
        in_stack_fffff928 = local_680.systemAddress._16_4_;
        in_stack_fffff92c = (uchar *)local_680.ttl;
        pcVar47 = uStack_648;
        pRVar30 = RakPeer::AssignSystemAddressToRemoteSystemList
                            ((RakPeer *)param_2,SVar7,in_stack_fffff910,pRVar45,&local_69,SVar11,
                             local_61c & 0xffff,RVar17,(bool)uVar22);
        if (local_69 == false) {
          if (pRVar30 != (RemoteSystemStruct *)0x0) goto LAB_005a85be;
          local_90[0] = (HuffmanEncodingTreeNode *)
                        RakPeer::AllocPacket
                                  ((RakPeer *)param_2,1,pcVar47,
                                   CONCAT22(uVar55,CONCAT11(uVar51,uVar22)));
          p_Var1 = (LPCRITICAL_SECTION)(param_2 + 0x59c);
          uVar22 = SUB41(p_Var1,0);
          uVar51 = (undefined1)((uint)p_Var1 >> 8);
          uVar55 = (undefined2)((uint)p_Var1 >> 0x10);
          (local_90[0][2].left)->value = '\x11';
          local_90[0][2].weight = 8;
          uVar33 = *(uint *)(local_74 + 4);
          pHVar31 = *(HuffmanEncodingTreeNode **)(local_74 + 8);
          pHVar5 = *(HuffmanEncodingTreeNode **)(local_74 + 0xc);
          *(undefined4 *)local_90[0] = *(undefined4 *)local_74;
          local_90[0]->weight = uVar33;
          local_90[0]->left = pHVar31;
          local_90[0]->right = pHVar5;
          *(short *)((int)&local_90[0]->parent + 2) = *(short *)(local_74 + 0x12);
          *(short *)&local_90[0]->parent = *(short *)(local_74 + 0x10);
          local_90[0][1].weight = local_650._0_4_;
          local_90[0][1].left = (HuffmanEncodingTreeNode *)local_650._4_4_;
          *(ushort *)&local_90[0][1].right = (ushort)uStack_648;
          pcVar48 = (char *)0x5a87a2;
          EnterCriticalSection(p_Var1);
          DataStructures::Queue<>::Push
                    ((Queue<> *)(param_2 + 0x5b4),local_90,pcVar48,
                     CONCAT22(uVar55,CONCAT11(uVar51,uVar22)));
          LeaveCriticalSection(p_Var1);
        }
      }
      else {
        iVar27 = uVar33 * 0x1210;
        pRVar30 = (RemoteSystemStruct *)(*(int *)(param_2 + 0x22c) + iVar27);
        if ((*pRVar30 != (RemoteSystemStruct)0x1) || (pRVar30 == (RemoteSystemStruct *)0x0))
        goto LAB_005a854c;
LAB_005a85be:
        pRVar39 = local_74;
        pRVar30[0x1170] = (RemoteSystemStruct)0x1;
        *(undefined4 *)(pRVar30 + 0x120c) = 4;
        if (*(int *)(local_74 + 0x13c) != 0) {
          *(int *)(pRVar30 + 0x9b8) = *(int *)(local_74 + 0x13c);
        }
        uVar22 = 0x14;
        memset(&local_2d0,0,0x114);
        local_2d0.data = local_2d0.stackData;
        local_2d0.numberOfBitsUsed = 0;
        local_2d0.numberOfBitsAllocated = 0x800;
        local_2d0.readOffset = 0;
        local_2d0.copyData = true;
        local_14 = CONCAT31(local_14._1_3_,9);
        local_70 = (byte *)CONCAT13(9,(undefined3)local_70);
        BitStream::WriteBits(&local_2d0,(uchar *)((int)&local_70 + 3),8,(bool)uVar22);
        uVar41._0_1_ = (<>)0x65;
        uVar41._1_3_ = 0x5a86;
        p_Var25 = (__uint64 *)(**(code **)(*(int *)param_2 + 0xd0))();
        BitStream::Write<>(&local_2d0,p_Var25);
        _Var43 = GetTimeUS_Windows();
        uVar46 = 0x5a8684;
        uVar44 = __aulldiv((uint)_Var43,(uint)(_Var43 >> 0x20),1000,0);
        local_a0._8_8_ = uVar44;
        BitStream::Write<>(&local_2d0,(__uint64 *)(local_a0 + 8));
        RVar50 = SUB41(extraout_ECX_04,0);
        uVar53 = (undefined1)((uint)extraout_ECX_04 >> 8);
        uVar55 = (undefined2)((uint)extraout_ECX_04 >> 0x10);
        pRVar49 = (RakPeer *)0x8;
        puVar24 = (uchar *)((int)&local_70 + 3);
        local_70 = (byte *)((uint)local_70 & 0xffffff);
        uVar22 = 0xb8;
        BitStream::WriteBits(&local_2d0,puVar24,8,(bool)RVar50);
        uVar51 = SUB41(puVar24,0);
        RVar40 = pRVar39[0x12a];
        if (RVar40 != (RakPeer)0x0) {
          uVar53 = 0;
          uVar55 = 0;
          pRVar49 = pRVar39 + 0x2a;
          uVar51 = 0xd5;
          BitStream::Write(&local_2d0,(char *)pRVar49,(uint)(byte)RVar40);
          RVar50 = RVar40;
        }
        puVar24 = local_2d0.data;
        uVar33 = local_2d0.numberOfBitsUsed;
        AddressOrGUID::AddressOrGUID((AddressOrGUID *)&stack0xfffff920,&param_1);
        auVar10._4_4_ = param_6;
        auVar10._0_4_ = param_5;
        auVar10._8_8_ = 0;
        auVar10 = auVar10 << 0x20;
        AVar9.systemAddress._0_4_ = in_stack_fffff920;
        AVar9.rakNetGuid.g = auVar10._0_8_;
        AVar9.rakNetGuid.systemIndex = auVar10._8_2_;
        AVar9.rakNetGuid._10_6_ = auVar10._10_6_;
        AVar9.systemAddress._4_4_ = in_stack_fffff924;
        AVar9.systemAddress._8_2_ = (ushort)in_stack_fffff928;
        AVar9.systemAddress._10_2_ = SUB42(in_stack_fffff928,2);
        AVar9.systemAddress._12_4_ = in_stack_fffff92c;
        AVar9.systemAddress._16_4_ = uVar41;
        AVar9._36_4_ = uVar46;
        RakPeer::SendImmediate
                  ((RakPeer *)param_2,(char *)puVar24,uVar33,IMMEDIATE_PRIORITY,RELIABLE,'\0',AVar9,
                   (bool)uVar22,(bool)uVar51,
                   CONCAT26(uVar55,CONCAT15(uVar53,CONCAT14(RVar50,pRVar49))),(uint)pcVar48);
        if ((local_2d0.copyData != false) && (0x800 < local_2d0.numberOfBitsAllocated)) {
          free(local_2d0.data);
        }
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x2f4));
      uVar33 = *(uint *)(param_2 + 0x2e8);
      local_90[0] = (HuffmanEncodingTreeNode *)0x0;
      local_84 = (uchar *)(uVar33 * 4);
      this = (Queue<> *)(param_2 + 0x2e4);
      local_6a4 = uVar33;
      while( true ) {
        if (*(uint *)(param_2 + 0x2ec) < uVar33) {
          pHVar31 = (HuffmanEncodingTreeNode *)
                    ((*(int *)(param_2 + 0x2f0) - uVar33) + *(int *)(param_2 + 0x2ec));
        }
        else {
          pHVar31 = (HuffmanEncodingTreeNode *)(*(uint *)(param_2 + 0x2ec) - uVar33);
        }
        if (pHVar31 <= local_90[0]) goto LAB_005a8862;
        if (local_6a4 < *(uint *)(param_2 + 0x2f0)) {
          puVar24 = local_84 + (int)this->array;
        }
        else {
          puVar24 = (uchar *)(this->array +
                             (int)((int)local_90[0] + (uVar33 - *(uint *)(param_2 + 0x2f0))));
        }
        pRVar4 = *(RequestedConnectionStruct **)puVar24;
        if (((*(short *)(pRVar4 + 2) == param_1._2_2_) && (*(short *)pRVar4 == 2)) &&
           (*(int *)(pRVar4 + 4) == param_1._4_4_)) break;
        local_84 = local_84 + 4;
        local_90[0] = (HuffmanEncodingTreeNode *)&local_90[0]->field_0x1;
        local_6a4 = local_6a4 + 1;
      }
      DataStructures::Queue<>::RemoveAtIndex(this,(uint)local_90[0]);
LAB_005a8862:
      LeaveCriticalSection(local_7c[0]);
      operator_delete(local_74,(nothrow_t *)0x150);
      goto LAB_005a7489;
    }
    if ((local_61c < 0x21) || (0x1b0 < local_61c)) goto LAB_005a966d;
    pPVar28 = RakPeer::AllocPacket
                        ((RakPeer *)param_2,local_61c - 0x1c,pcVar47,
                         CONCAT22(uVar54,CONCAT11(uVar51,uVar22)));
    memset(&local_2d0,0,0x114);
    local_2d0.copyData = false;
    local_2d0.numberOfBitsUsed = local_61c * 8;
    local_2d0.data = local_84;
    local_14 = 3;
    local_2d0.readOffset = 8;
    local_2d0.numberOfBitsAllocated = local_2d0.numberOfBitsUsed;
    BitStream::Read<>(&local_2d0,(__uint64 *)&local_80);
    BitStream::Read<>(&local_2d0,(__uint64 *)(pPVar28 + 0x18));
    uVar22 = 0x14;
    memset(&local_3e8,0,0x114);
    local_3e8.data = *(uchar **)(pPVar28 + 0x30);
    local_3e8.numberOfBitsAllocated = *(int *)(pPVar28 + 0x28) << 3;
    local_3e8.readOffset = 0;
    local_3e8.copyData = false;
    local_14 = CONCAT31(local_14._1_3_,4);
    local_3e8.numberOfBitsUsed = 0;
    local_69 = true;
    BitStream::WriteBits(&local_3e8,&local_69,8,(bool)uVar22);
    local_7c[0] = local_80;
    BitStream::Write<>(&local_3e8,(uint *)local_7c);
    BitStream::WriteAlignedBytes(&local_3e8,local_84 + 0x21,local_61c - 0x21);
    *(uint *)pPVar28 = CONCAT22(param_1._2_2_,param_1._0_2_);
    *(undefined4 *)(pPVar28 + 4) = param_1._4_4_;
    *(undefined4 *)(pPVar28 + 8) = param_1._8_4_;
    *(undefined4 *)(pPVar28 + 0xc) = param_1._12_4_;
    *(ushort *)(pPVar28 + 0x12) = param_1.systemIndex;
    *(ushort *)(pPVar28 + 0x10) = param_1.debugPort;
    SVar15._2_2_ = param_1._2_2_;
    SVar15.address = param_1.address;
    SVar15._1_1_ = param_1._1_1_;
    SVar15.systemIndex = param_1.systemIndex;
    SVar15.debugPort = param_1.debugPort;
    SVar15._4_4_ = param_1._4_4_;
    SVar15._8_4_ = param_1._8_4_;
    SVar15._12_4_ = param_1._12_4_;
    iVar27 = RakPeer::GetIndexFromSystemAddress((RakPeer *)param_2,SVar15,true);
    *(short *)(pPVar28 + 0x12) = (short)iVar27;
    *(short *)(pPVar28 + 0x20) = (short)iVar27;
    RakPeer::AddPacketToProducer((RakPeer *)param_2,pPVar28);
    pcVar38 = free_exref;
    if ((local_3e8.copyData != false) && (0x800 < local_3e8.numberOfBitsAllocated)) {
      uVar22 = SUB41(local_3e8.data,0);
      uVar51 = (undefined1)((uint)local_3e8.data >> 8);
      uVar55 = (undefined2)((uint)local_3e8.data >> 0x10);
      goto LAB_005a7a40;
    }
  }
  if ((local_2d0.copyData != false) && (0x800 < local_2d0.numberOfBitsAllocated)) {
    (*pcVar38)();
  }
LAB_005a966d:
  ExceptionList = local_1c;
  uVar22 = __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return (bool)uVar22;
}


// void __cdecl RakNet::ProcessNetworkPacket(struct RakNet::SystemAddress,char const *,int,class
// RakNet::RakPeer *,class RakNet::RakNetSocket2 *,unsigned __int64,class RakNet::BitStream &)

void __cdecl
RakNet::ProcessNetworkPacket
          (SystemAddress param_1,char *param_2,int param_3,RakPeer *param_4,RakNetSocket2 *param_5,
          __uint64 param_6,BitStream *param_7)

{
  SystemAddress SVar1;
  bool bVar2;
  RemoteSystemStruct *pRVar3;
  char *in_ECX;
  uint in_EDX;
  undefined4 unaff_ESI;
  BitStream *unaff_EDI;
  undefined4 in_stack_00000028;
  RakPeer local_11;
  undefined4 uStack_10;
  bool isOfflineMessage;
  RakNetSocket2 *local_c;
  
  uStack_10 = in_stack_00000028;
  local_c = (RakNetSocket2 *)param_3;
  bVar2 = ProcessOfflineNetworkPacket
                    (param_1,param_2,param_3,&local_11,(RakNetSocket2 *)param_4,(bool *)param_5,
                     CONCAT44(unaff_ESI,unaff_EDI));
  if (!bVar2) {
    SVar1._4_4_ = param_1._4_4_;
    SVar1.address = param_1.address;
    SVar1._1_3_ = param_1._1_3_;
    SVar1._8_4_ = param_1._8_4_;
    SVar1._12_4_ = param_1._12_4_;
    SVar1.debugPort = param_1.debugPort;
    SVar1.systemIndex = param_1.systemIndex;
    pRVar3 = RakPeer::GetRemoteSystemFromSystemAddress((RakPeer *)param_2,SVar1,true,true);
    if ((pRVar3 != (RemoteSystemStruct *)0x0) && (local_11 == (RakPeer)0x0)) {
      ReliabilityLayer::HandleSocketReceiveFromConnectedPlayer
                ((ReliabilityLayer *)(pRVar3 + 0xf8),in_ECX,in_EDX,&param_1,
                 (List<> *)(param_2 + 0x2d8),(int)pRVar3,local_c,(RakNetRandom *)pRVar3,
                 CONCAT44(uStack_10,param_5),unaff_EDI);
    }
  }
  return;
}


// unsigned int __stdcall RakNet::UpdateNetworkLoop(void *)
// _StartAddress parameter of _beginthreadex
// 

uint RakNet::UpdateNetworkLoop(void *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  BitStream updateBitStream;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cdb6b;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar3 = uVar2;
  memset(&updateBitStream,0,0x114);
  updateBitStream.numberOfBitsUsed = 0;
  updateBitStream.readOffset = 0;
  updateBitStream.data = malloc(0x5d4);
  updateBitStream.numberOfBitsAllocated = 0x2ea0;
  updateBitStream.copyData = true;
  local_8 = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  cVar1 = *(char *)((int)param_1 + 8);
  while (cVar1 == '\0') {
    if (*(code **)((int)param_1 + 0x560) != (code *)0x0) {
      (**(code **)((int)param_1 + 0x560))(param_1,*(undefined4 *)((int)param_1 + 0x564),uVar3);
    }
    (**(code **)(*(int *)param_1 + 0x154))(&updateBitStream);
    WaitForSingleObjectEx(*(HANDLE *)((int)param_1 + 0x568),10,0);
    cVar1 = *(char *)((int)param_1 + 8);
  }
  *(undefined1 *)((int)param_1 + 9) = 0;
  if ((updateBitStream.copyData != false) && (0x800 < updateBitStream.numberOfBitsAllocated)) {
    free(updateBitStream.data);
  }
  ExceptionList = local_10;
  uVar3 = __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return uVar3;
}


// struct RakNet::SystemAddress * __cdecl RakNet::OP_NEW_ARRAY<struct
// RakNet::SystemAddress>(int,char const *,unsigned int)

SystemAddress * __cdecl RakNet::OP_NEW_ARRAY<>(int param_1,char *param_2,uint param_3)

{
  SystemAddress *pSVar1;
  SystemAddress *pSVar2;
  uint in_ECX;
  
  if (in_ECX == 0) {
    return (SystemAddress *)0x0;
  }
  pSVar1 = operator_new__(-(uint)((int)((ulonglong)in_ECX * 0x14 >> 0x20) != 0) |
                          (uint)((ulonglong)in_ECX * 0x14));
  if (pSVar1 == (SystemAddress *)0x0) {
    pSVar1 = (SystemAddress *)0x0;
  }
  else {
    pSVar2 = pSVar1;
    if (in_ECX != 0) {
      do {
        *(undefined4 *)pSVar2 = 0;
        *(undefined4 *)&pSVar2->field_0x4 = 0;
        *(undefined4 *)&pSVar2->field_0x8 = 0;
        *(undefined4 *)&pSVar2->field_0xc = 0;
        *(undefined2 *)pSVar2 = 2;
        pSVar2->debugPort = 0;
        pSVar2->systemIndex = 0xffff;
        in_ECX = in_ECX - 1;
        pSVar2 = pSVar2 + 1;
      } while (in_ECX != 0);
      return pSVar1;
    }
  }
  return pSVar1;
}


// void * __cdecl RakNet::_RakMalloc_Ex(unsigned int,char const *,unsigned int)

void * __cdecl RakNet::_RakMalloc_Ex(uint param_1,char *param_2,uint param_3)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  return pvVar1;
}


// void * __cdecl RakNet::_RakRealloc_Ex(void *,unsigned int,char const *,unsigned int)

void * __cdecl RakNet::_RakRealloc_Ex(void *param_1,uint param_2,char *param_3,uint param_4)

{
  void *pvVar1;
  
  pvVar1 = realloc(param_1,param_2);
  return pvVar1;
}


// void __cdecl RakNet::_RakFree_Ex(void *,char const *,unsigned int)

void __cdecl RakNet::_RakFree_Ex(void *param_1,char *param_2,uint param_3)

{
  free(param_1);
  return;
}
