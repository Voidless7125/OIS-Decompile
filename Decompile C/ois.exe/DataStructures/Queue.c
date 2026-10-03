#include "../ois.exe.h"


// public: __thiscall DataStructures::Queue<struct HuffmanEncodingTreeNode *>::~Queue<struct
// HuffmanEncodingTreeNode *>(void)

void __thiscall DataStructures::Queue<>::~Queue<>(Queue<> *this)

{
  if (this->allocation_size != 0) {
    operator_delete__(this->array);
  }
  return;
}


// public: void __thiscall DataStructures::Queue<struct HuffmanEncodingTreeNode *>::Push(struct
// HuffmanEncodingTreeNode * const &,char const *,unsigned int)

void __thiscall
DataStructures::Queue<>::Push
          (Queue<> *this,HuffmanEncodingTreeNode **param_1,char *param_2,uint param_3)

{
  longlong lVar1;
  HuffmanEncodingTreeNode **ppHVar2;
  uint uVar3;
  
  if (this->allocation_size != 0) {
    this->array[this->tail] = *param_1;
    this->tail = this->tail + 1;
    uVar3 = this->tail;
    if (uVar3 == this->allocation_size) {
      this->tail = 0;
      uVar3 = 0;
    }
    if (((uVar3 == this->head) && (uVar3 = this->allocation_size * 2, uVar3 != 0)) &&
       (lVar1 = (ulonglong)uVar3 * 4,
       ppHVar2 = operator_new__(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1),
       ppHVar2 != (HuffmanEncodingTreeNode **)0x0)) {
      uVar3 = 0;
      if (this->allocation_size != 0) {
        do {
          ppHVar2[uVar3] = this->array[(this->head + uVar3) % this->allocation_size];
          uVar3 = uVar3 + 1;
        } while (uVar3 < this->allocation_size);
      }
      this->tail = this->allocation_size;
      this->head = 0;
      this->allocation_size = this->allocation_size * 2;
      operator_delete__(this->array);
      this->array = ppHVar2;
    }
    return;
  }
  ppHVar2 = operator_new__(0x40);
  this->array = ppHVar2;
  this->head = 0;
  this->tail = 1;
  *ppHVar2 = *param_1;
  this->allocation_size = 0x10;
  return;
}


// public: void __thiscall DataStructures::Queue<struct
// RakNet::ReliabilityLayer::DatagramHistoryNode>::Push(struct
// RakNet::ReliabilityLayer::DatagramHistoryNode const &,char const *,unsigned int)

void __thiscall
DataStructures::Queue<>::Push(Queue<> *this,DatagramHistoryNode *param_1,char *param_2,uint param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  if (*(int *)(this + 0xc) != 0) {
    puVar5 = (undefined4 *)(*(int *)(this + 8) * 0x10 + *(int *)this);
    uVar2 = *(undefined4 *)(param_1 + 4);
    uVar3 = *(undefined4 *)(param_1 + 8);
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    *puVar5 = *(undefined4 *)param_1;
    puVar5[1] = uVar2;
    puVar5[2] = uVar3;
    puVar5[3] = uVar4;
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    iVar6 = *(int *)(this + 8);
    if (iVar6 == *(int *)(this + 0xc)) {
      *(undefined4 *)(this + 8) = 0;
      iVar6 = 0;
    }
    if (((iVar6 == *(int *)(this + 4)) && (uVar8 = *(int *)(this + 0xc) * 2, uVar8 != 0)) &&
       (lVar1 = (ulonglong)uVar8 * 0x10,
       puVar5 = operator_new__(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1),
       puVar5 != (undefined4 *)0x0)) {
      uVar8 = 0;
      puVar10 = puVar5;
      if (*(int *)(this + 0xc) != 0) {
        do {
          uVar7 = *(int *)(this + 4) + uVar8;
          uVar8 = uVar8 + 1;
          puVar9 = (undefined4 *)((uVar7 % *(uint *)(this + 0xc)) * 0x10 + *(int *)this);
          uVar2 = puVar9[1];
          uVar3 = puVar9[2];
          uVar4 = puVar9[3];
          *puVar10 = *puVar9;
          puVar10[1] = uVar2;
          puVar10[2] = uVar3;
          puVar10[3] = uVar4;
          puVar10 = puVar10 + 4;
        } while (uVar8 < *(uint *)(this + 0xc));
      }
      *(int *)(this + 8) = *(int *)(this + 0xc);
      *(undefined4 *)(this + 4) = 0;
      *(int *)(this + 0xc) = *(int *)(this + 0xc) * 2;
      operator_delete__(*(void **)this);
      *(undefined4 **)this = puVar5;
    }
    return;
  }
  puVar5 = operator_new__(0x100);
  *(undefined4 **)this = puVar5;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  *puVar5 = *(undefined4 *)param_1;
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  *(undefined4 *)(this + 0xc) = 0x10;
  return;
}


// public: void __thiscall DataStructures::Queue<bool>::Push(bool const &,char const *,unsigned int)

void __thiscall
DataStructures::Queue<bool>::Push(Queue<bool> *this,bool *param_1,char *param_2,uint param_3)

{
  undefined1 *puVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  
  if (*(int *)(this + 0xc) != 0) {
    *(bool *)(*(int *)(this + 8) + *(int *)this) = *param_1;
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    iVar2 = *(int *)(this + 8);
    if (iVar2 == *(int *)(this + 0xc)) {
      *(undefined4 *)(this + 8) = 0;
      iVar2 = 0;
    }
    if (((iVar2 == *(int *)(this + 4)) && (uVar4 = *(int *)(this + 0xc) * 2, uVar4 != 0)) &&
       (pvVar3 = operator_new__(uVar4), pvVar3 != (void *)0x0)) {
      uVar4 = 0;
      if (*(int *)(this + 0xc) != 0) {
        do {
          *(undefined1 *)(uVar4 + (int)pvVar3) =
               *(undefined1 *)((*(int *)(this + 4) + uVar4) % *(uint *)(this + 0xc) + *(int *)this);
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(this + 0xc));
      }
      *(int *)(this + 8) = *(int *)(this + 0xc);
      *(undefined4 *)(this + 4) = 0;
      *(int *)(this + 0xc) = *(int *)(this + 0xc) * 2;
      operator_delete__(*(void **)this);
      *(void **)this = pvVar3;
    }
    return;
  }
  puVar1 = operator_new__(0x10);
  *(undefined1 **)this = puVar1;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 1;
  *puVar1 = *param_1;
  *(undefined4 *)(this + 0xc) = 0x10;
  return;
}


// public: unsigned int __thiscall DataStructures::Queue<bool>::Size(void)const 

uint __thiscall DataStructures::Queue<bool>::Size(Queue<bool> *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(this + 8);
  uVar2 = *(uint *)(this + 4);
  if (uVar2 <= uVar1) {
    return uVar1 - uVar2;
  }
  return (*(int *)(this + 0xc) - uVar2) + uVar1;
}


// public: void __thiscall DataStructures::Queue<struct RakNet::RakPeer::RequestedConnectionStruct
// *>::RemoveAtIndex(unsigned int)

void __thiscall DataStructures::Queue<>::RemoveAtIndex(Queue<> *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = this->head;
  uVar4 = this->tail;
  if (uVar3 != uVar4) {
    if (uVar3 < uVar4) {
      iVar1 = -uVar3;
    }
    else {
      iVar1 = this->allocation_size - uVar3;
    }
    if (param_1 < uVar4 + iVar1) {
      uVar6 = this->allocation_size;
      uVar5 = uVar3 - uVar6;
      if (uVar3 + param_1 < uVar6) {
        uVar5 = uVar3;
      }
      uVar5 = param_1 + uVar5;
      uVar3 = 0;
      if (uVar5 + 1 != uVar6) {
        uVar3 = uVar5 + 1;
      }
      if (uVar3 != uVar4) {
        do {
          uVar2 = uVar3;
          this->array[uVar5] = this->array[uVar2];
          uVar6 = this->allocation_size;
          uVar4 = this->tail;
          uVar3 = 0;
          if (uVar2 + 1 != uVar6) {
            uVar3 = uVar2 + 1;
          }
          uVar5 = uVar2;
        } while (uVar3 != uVar4);
      }
      if (uVar4 != 0) {
        uVar6 = uVar4;
      }
      this->tail = uVar6 - 1;
    }
  }
  return;
}
