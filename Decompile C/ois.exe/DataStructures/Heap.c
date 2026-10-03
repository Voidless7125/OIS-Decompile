#include "../ois.exe.h"


// public: __thiscall DataStructures::Heap<unsigned __int64,struct RakNet::InternalPacket
// *,0>::~Heap<unsigned __int64,struct RakNet::InternalPacket *,0>(void)

void __thiscall DataStructures::Heap<>::~Heap<>(Heap<> *this)

{
  if (*(int *)(this + 8) != 0) {
    operator_delete__(*(void **)this);
  }
  return;
}


// public: __thiscall DataStructures::Heap<unsigned __int64,struct RakNet::InternalPacket
// *,0>::Heap<unsigned __int64,struct RakNet::InternalPacket *,0>(void)

Heap<> * __thiscall DataStructures::Heap<>::Heap<>(Heap<> *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  this[0xc] = (Heap<>)0x0;
  return this;
}


// public: void __thiscall DataStructures::Heap<unsigned __int64,struct RakNet::InternalPacket
// *,0>::Push(unsigned __int64 const &,struct RakNet::InternalPacket * const &,char const *,unsigned
// int)

void __thiscall
DataStructures::Heap<>::Push
          (Heap<> *this,__uint64 *param_1,InternalPacket **param_2,char *param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  char *in_stack_ffffffcc;
  uint in_stack_ffffffd0;
  undefined4 local_1c;
  undefined4 local_18;
  InternalPacket *local_14;
  Heap<> *local_8;
  
  local_1c = (undefined4)*param_1;
  uVar3 = *(uint *)(this + 4);
  local_18 = *(undefined4 *)((int)param_1 + 4);
  local_14 = *param_2;
  local_8 = this;
  List<>::Insert((List<> *)this,(HeapNode *)&local_1c,in_stack_ffffffcc,in_stack_ffffffd0);
  while( true ) {
    if (uVar3 == 0) {
      return;
    }
    iVar4 = *(int *)this;
    uVar13 = uVar3 - 1 >> 1;
    uVar5 = *(uint *)(iVar4 + 4 + uVar13 * 0x10);
    if (uVar5 < *(uint *)((int)param_1 + 4)) break;
    if ((uVar5 == *(uint *)((int)param_1 + 4)) &&
       (*(uint *)(iVar4 + uVar13 * 0x10) <= (uint)*param_1)) {
      return;
    }
    puVar1 = (undefined4 *)(iVar4 + uVar13 * 0x10);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    puVar2 = (undefined4 *)(iVar4 + uVar3 * 0x10);
    uVar9 = *puVar2;
    uVar10 = puVar2[1];
    uVar11 = puVar2[2];
    uVar12 = puVar2[3];
    puVar2 = (undefined4 *)(iVar4 + uVar3 * 0x10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    puVar1 = (undefined4 *)(*(int *)local_8 + uVar13 * 0x10);
    *puVar1 = uVar9;
    puVar1[1] = uVar10;
    puVar1[2] = uVar11;
    puVar1[3] = uVar12;
    uVar3 = uVar13;
    this = local_8;
  }
  return;
}


// public: struct RakNet::InternalPacket * __thiscall DataStructures::Heap<unsigned __int64,struct
// RakNet::InternalPacket *,0>::Pop(unsigned int)

InternalPacket * __thiscall DataStructures::Heap<>::Pop(Heap<> *this,uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  InternalPacket *pIVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint *puVar24;
  uint *puVar25;
  uint local_18;
  
  uVar21 = 0;
  puVar2 = *(undefined4 **)this;
  uVar23 = 2;
  pIVar3 = (InternalPacket *)puVar2[2];
  puVar1 = puVar2 + *(int *)(this + 4) * 4 + -4;
  uVar7 = puVar1[1];
  uVar8 = puVar1[2];
  uVar9 = puVar1[3];
  *puVar2 = *puVar1;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  uVar4 = **(uint **)this;
  uVar5 = (*(uint **)this)[1];
  *(int *)(this + 4) = *(int *)(this + 4) + -1;
  uVar19 = *(uint *)(this + 4);
  local_18 = 1;
  if (uVar19 < 2) {
    return pIVar3;
  }
  do {
    iVar6 = *(int *)this;
    puVar24 = (uint *)(local_18 * 0x10 + iVar6);
    if (uVar19 <= uVar23) {
      if ((puVar24[1] <= uVar5) && ((uVar5 != puVar24[1] || (*puVar24 < uVar4)))) {
        puVar1 = (undefined4 *)(iVar6 + uVar21 * 0x10);
        uVar7 = puVar1[1];
        uVar8 = puVar1[2];
        uVar9 = puVar1[3];
        puVar2 = (undefined4 *)(iVar6 + local_18 * 0x10);
        uVar15 = *puVar2;
        uVar16 = puVar2[1];
        uVar17 = puVar2[2];
        uVar18 = puVar2[3];
        puVar2 = (undefined4 *)(iVar6 + local_18 * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        puVar2[2] = uVar8;
        puVar2[3] = uVar9;
        puVar1 = (undefined4 *)(*(int *)this + uVar21 * 0x10);
        *puVar1 = uVar15;
        puVar1[1] = uVar16;
        puVar1[2] = uVar17;
        puVar1[3] = uVar18;
      }
      return pIVar3;
    }
    if ((uVar5 <= puVar24[1]) && ((puVar24[1] != uVar5 || (uVar4 <= *puVar24)))) {
      uVar19 = *(uint *)(iVar6 + 4 + uVar23 * 0x10);
      if (uVar5 < uVar19) {
        return pIVar3;
      }
      if ((uVar5 <= uVar19) && (uVar4 <= *(uint *)(iVar6 + uVar23 * 0x10))) {
        return pIVar3;
      }
    }
    puVar20 = (uint *)(uVar23 * 0x10 + iVar6);
    iVar22 = uVar21 * 0x10;
    puVar25 = (uint *)(iVar6 + iVar22);
    if ((puVar20[1] < puVar24[1]) || ((puVar20[1] <= puVar24[1] && (*puVar20 <= *puVar24)))) {
      uVar19 = puVar25[1];
      uVar21 = puVar25[2];
      uVar10 = puVar25[3];
      uVar11 = *puVar20;
      uVar12 = puVar20[1];
      uVar13 = puVar20[2];
      uVar14 = puVar20[3];
      *puVar20 = *puVar25;
      puVar20[1] = uVar19;
      puVar20[2] = uVar21;
      puVar20[3] = uVar10;
      puVar24 = (uint *)(*(int *)this + iVar22);
      *puVar24 = uVar11;
      puVar24[1] = uVar12;
      puVar24[2] = uVar13;
      puVar24[3] = uVar14;
    }
    else {
      uVar23 = puVar25[1];
      uVar19 = puVar25[2];
      uVar21 = puVar25[3];
      uVar10 = *puVar24;
      uVar11 = puVar24[1];
      uVar12 = puVar24[2];
      uVar13 = puVar24[3];
      *puVar24 = *puVar25;
      puVar24[1] = uVar23;
      puVar24[2] = uVar19;
      puVar24[3] = uVar21;
      puVar24 = (uint *)(*(int *)this + iVar22);
      *puVar24 = uVar10;
      puVar24[1] = uVar11;
      puVar24[2] = uVar12;
      puVar24[3] = uVar13;
      uVar23 = local_18;
    }
    uVar19 = *(uint *)(this + 4);
    local_18 = uVar23 * 2 + 1;
    uVar21 = uVar23;
    uVar23 = uVar23 * 2 + 2;
    if (uVar19 <= local_18) {
      return pIVar3;
    }
  } while( true );
}
