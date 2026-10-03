#include "../ois.exe.h"


// public: __thiscall DataStructures::MemoryPool<struct RakNet::InternalPacket>::~MemoryPool<struct
// RakNet::InternalPacket>(void)

void __thiscall DataStructures::MemoryPool<>::~MemoryPool<>(MemoryPool<> *this)

{
  char *in_stack_fffffff8;
  uint in_stack_fffffffc;
  
  MemoryPool<>::Clear((MemoryPool<> *)this,in_stack_fffffff8,in_stack_fffffffc);
  return;
}


// public: struct RakNet::ReliabilityLayer::MessageNumberNode * __thiscall
// DataStructures::MemoryPool<struct RakNet::ReliabilityLayer::MessageNumberNode>::Allocate(char
// const *,unsigned int)

MessageNumberNode * __thiscall
DataStructures::MemoryPool<>::Allocate(MemoryPool<> *this,char *param_1,uint param_2)

{
  int *piVar1;
  MessageNumberNode *pMVar2;
  undefined4 *puVar3;
  uint uVar4;
  void *pvVar5;
  void *pvVar6;
  int iVar7;
  
  if (*(int *)(this + 8) < 1) {
    puVar3 = malloc(0x14);
    *(undefined4 **)this = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      *(undefined4 *)(this + 8) = 1;
      uVar4 = *(uint *)(this + 0x10) / 0xc;
      iVar7 = 0;
      pvVar5 = malloc(*(uint *)(this + 0x10));
      puVar3[2] = pvVar5;
      if (pvVar5 != (void *)0x0) {
        pvVar6 = malloc(uVar4 << 2);
        pvVar5 = (void *)puVar3[2];
        *puVar3 = pvVar6;
        if (pvVar6 != (void *)0x0) {
          if (uVar4 != 0) {
            do {
              *(undefined4 **)((int)pvVar5 + 8) = puVar3;
              *(void **)((int)pvVar6 + iVar7 * 4) = pvVar5;
              iVar7 = iVar7 + 1;
              pvVar5 = (void *)((int)pvVar5 + 0xc);
            } while (iVar7 < (int)uVar4);
          }
          puVar3[1] = uVar4;
          puVar3[3] = *(undefined4 *)this;
          puVar3[4] = puVar3;
          iVar7 = *(int *)this;
          piVar1 = (int *)(iVar7 + 4);
          *piVar1 = *piVar1 + -1;
          return *(MessageNumberNode **)(**(int **)this + *(int *)(iVar7 + 4) * 4);
        }
        free(pvVar5);
      }
    }
    return (MessageNumberNode *)0x0;
  }
  piVar1 = *(int **)this;
  iVar7 = piVar1[1] + -1;
  piVar1[1] = iVar7;
  pMVar2 = *(MessageNumberNode **)(*piVar1 + iVar7 * 4);
  if (iVar7 == 0) {
    *(int *)(this + 8) = *(int *)(this + 8) + -1;
    *(int *)this = piVar1[3];
    *(int *)(piVar1[3] + 0x10) = piVar1[4];
    *(int *)(piVar1[4] + 0xc) = piVar1[3];
    iVar7 = *(int *)(this + 0xc);
    *(int *)(this + 0xc) = iVar7 + 1;
    if (iVar7 == 0) {
      *(int **)(this + 4) = piVar1;
      piVar1[3] = (int)piVar1;
      piVar1[4] = (int)piVar1;
      return pMVar2;
    }
    piVar1[3] = *(int *)(this + 4);
    piVar1[4] = *(int *)(*(int *)(this + 4) + 0x10);
    *(int **)(*(int *)(*(int *)(this + 4) + 0x10) + 0xc) = piVar1;
    *(int **)(*(int *)(this + 4) + 0x10) = piVar1;
  }
  return pMVar2;
}


// public: void __thiscall DataStructures::MemoryPool<struct
// RakNet::RakPeer::BufferedCommandStruct>::Clear(char const *,unsigned int)

void __thiscall DataStructures::MemoryPool<>::Clear(MemoryPool<> *this,char *param_1,uint param_2)

{
  Page *pPVar1;
  Page *pPVar2;
  Page *pPVar3;
  
  if (0 < this->availablePagesSize) {
    pPVar3 = this->availablePages;
    free(pPVar3->availableStack);
    free(pPVar3->block);
    pPVar2 = pPVar3;
    pPVar1 = pPVar3->next;
    if (pPVar3->next != this->availablePages) {
      do {
        pPVar3 = pPVar1;
        free(pPVar2);
        free(pPVar3->availableStack);
        free(pPVar3->block);
        pPVar2 = pPVar3;
        pPVar1 = pPVar3->next;
      } while (pPVar3->next != this->availablePages);
    }
    free(pPVar3);
  }
  if (0 < this->unavailablePagesSize) {
    pPVar3 = this->unavailablePages;
    free(pPVar3->availableStack);
    free(pPVar3->block);
    pPVar2 = pPVar3;
    pPVar1 = pPVar3->next;
    if (pPVar3->next != this->unavailablePages) {
      do {
        pPVar3 = pPVar1;
        free(pPVar2);
        free(pPVar3->availableStack);
        free(pPVar3->block);
        pPVar2 = pPVar3;
        pPVar1 = pPVar3->next;
      } while (pPVar3->next != this->unavailablePages);
    }
    free(pPVar3);
  }
  this->unavailablePagesSize = 0;
  this->availablePagesSize = 0;
  return;
}


// public: struct RakNet::Packet * __thiscall DataStructures::MemoryPool<struct
// RakNet::Packet>::Allocate(char const *,unsigned int)

Packet * __thiscall
DataStructures::MemoryPool<>::Allocate(MemoryPool<> *this,char *param_1,uint param_2)

{
  int *piVar1;
  Page *pPVar2;
  uint uVar3;
  MemoryWithPage *pMVar4;
  MemoryWithPage **ppMVar5;
  int iVar6;
  
  if (this->availablePagesSize < 1) {
    pPVar2 = malloc(0x14);
    this->availablePages = pPVar2;
    if (pPVar2 != (Page *)0x0) {
      iVar6 = 0;
      this->availablePagesSize = 1;
      uVar3 = (uint)this->memoryPoolPageSize >> 6;
      pMVar4 = malloc(this->memoryPoolPageSize);
      pPVar2->block = pMVar4;
      if (pMVar4 != (MemoryWithPage *)0x0) {
        ppMVar5 = malloc(uVar3 << 2);
        pMVar4 = pPVar2->block;
        pPVar2->availableStack = ppMVar5;
        if (ppMVar5 != (MemoryWithPage **)0x0) {
          if (uVar3 != 0) {
            do {
              pMVar4->parentPage = pPVar2;
              ppMVar5[iVar6] = pMVar4;
              iVar6 = iVar6 + 1;
              pMVar4 = pMVar4 + 1;
            } while (iVar6 < (int)uVar3);
          }
          pPVar2->availableStackSize = uVar3;
          pPVar2->next = this->availablePages;
          pPVar2->prev = pPVar2;
          pPVar2 = this->availablePages;
          piVar1 = &pPVar2->availableStackSize;
          *piVar1 = *piVar1 + -1;
          return &this->availablePages->availableStack[pPVar2->availableStackSize]->userMemory;
        }
        free(pMVar4);
      }
    }
    return (Packet *)0x0;
  }
  pPVar2 = this->availablePages;
  iVar6 = pPVar2->availableStackSize + -1;
  pPVar2->availableStackSize = iVar6;
  pMVar4 = pPVar2->availableStack[iVar6];
  if (iVar6 == 0) {
    this->availablePagesSize = this->availablePagesSize + -1;
    this->availablePages = pPVar2->next;
    pPVar2->next->prev = pPVar2->prev;
    pPVar2->prev->next = pPVar2->next;
    iVar6 = this->unavailablePagesSize;
    this->unavailablePagesSize = iVar6 + 1;
    if (iVar6 == 0) {
      this->unavailablePages = pPVar2;
      pPVar2->next = pPVar2;
      pPVar2->prev = pPVar2;
      return &pMVar4->userMemory;
    }
    pPVar2->next = this->unavailablePages;
    pPVar2->prev = this->unavailablePages->prev;
    this->unavailablePages->prev->next = pPVar2;
    this->unavailablePages->prev = pPVar2;
  }
  return &pMVar4->userMemory;
}


// public: void __thiscall DataStructures::MemoryPool<struct RakNet::Packet>::Release(struct
// RakNet::Packet *,char const *,unsigned int)

void __thiscall
DataStructures::MemoryPool<>::Release(MemoryPool<> *this,Packet *param_1,char *param_2,uint param_3)

{
  Page *_Memory;
  int iVar1;
  
  _Memory = *(Page **)(param_1 + 0x38);
  if (_Memory->availableStackSize != 0) {
    _Memory->availableStack[_Memory->availableStackSize] = (MemoryWithPage *)param_1;
    _Memory->availableStackSize = _Memory->availableStackSize + 1;
    if ((_Memory->availableStackSize == (uint)this->memoryPoolPageSize >> 6) &&
       (3 < this->availablePagesSize)) {
      if (_Memory == this->availablePages) {
        this->availablePages = _Memory->next;
      }
      _Memory->prev->next = _Memory->next;
      _Memory->next->prev = _Memory->prev;
      this->availablePagesSize = this->availablePagesSize + -1;
      free(_Memory->availableStack);
      free(_Memory->block);
      free(_Memory);
    }
    return;
  }
  *_Memory->availableStack = (MemoryWithPage *)param_1;
  _Memory->availableStackSize = _Memory->availableStackSize + 1;
  this->unavailablePagesSize = this->unavailablePagesSize + -1;
  _Memory->next->prev = _Memory->prev;
  _Memory->prev->next = _Memory->next;
  if ((0 < this->unavailablePagesSize) && (_Memory == this->unavailablePages)) {
    this->unavailablePages = this->unavailablePages->next;
  }
  iVar1 = this->availablePagesSize;
  this->availablePagesSize = iVar1 + 1;
  if (iVar1 == 0) {
    this->availablePages = _Memory;
    _Memory->next = _Memory;
    _Memory->prev = _Memory;
    return;
  }
  _Memory->next = this->availablePages;
  _Memory->prev = this->availablePages->prev;
  this->availablePages->prev->next = _Memory;
  this->availablePages->prev = _Memory;
  return;
}


// public: void __thiscall DataStructures::MemoryPool<struct
// RakNet::RakPeer::BufferedCommandStruct>::Release(struct RakNet::RakPeer::BufferedCommandStruct
// *,char const *,unsigned int)

void __thiscall
DataStructures::MemoryPool<>::Release
          (MemoryPool<> *this,BufferedCommandStruct *param_1,char *param_2,uint param_3)

{
  Page *_Memory;
  int iVar1;
  
  _Memory = *(Page **)(param_1 + 0x70);
  if (_Memory->availableStackSize != 0) {
    _Memory->availableStack[_Memory->availableStackSize] = (MemoryWithPage *)param_1;
    _Memory->availableStackSize = _Memory->availableStackSize + 1;
    if ((_Memory->availableStackSize == (uint)this->memoryPoolPageSize / 0x78) &&
       (3 < this->availablePagesSize)) {
      if (_Memory == this->availablePages) {
        this->availablePages = _Memory->next;
      }
      _Memory->prev->next = _Memory->next;
      _Memory->next->prev = _Memory->prev;
      this->availablePagesSize = this->availablePagesSize + -1;
      free(_Memory->availableStack);
      free(_Memory->block);
      free(_Memory);
    }
    return;
  }
  *_Memory->availableStack = (MemoryWithPage *)param_1;
  _Memory->availableStackSize = _Memory->availableStackSize + 1;
  this->unavailablePagesSize = this->unavailablePagesSize + -1;
  _Memory->next->prev = _Memory->prev;
  _Memory->prev->next = _Memory->next;
  if ((0 < this->unavailablePagesSize) && (_Memory == this->unavailablePages)) {
    this->unavailablePages = this->unavailablePages->next;
  }
  iVar1 = this->availablePagesSize;
  this->availablePagesSize = iVar1 + 1;
  if (iVar1 == 0) {
    this->availablePages = _Memory;
    _Memory->next = _Memory;
    _Memory->prev = _Memory;
    return;
  }
  _Memory->next = this->availablePages;
  _Memory->prev = this->availablePages->prev;
  this->availablePages->prev->next = _Memory;
  this->availablePages->prev = _Memory;
  return;
}


// public: void __thiscall DataStructures::MemoryPool<struct
// RakNet::RakPeer::SocketQueryOutput>::Release(struct RakNet::RakPeer::SocketQueryOutput *,char
// const *,unsigned int)

void __thiscall
DataStructures::MemoryPool<>::Release
          (MemoryPool<> *this,SocketQueryOutput *param_1,char *param_2,uint param_3)

{
  Page *_Memory;
  int iVar1;
  
  _Memory = *(Page **)(param_1 + 0xc);
  if (_Memory->availableStackSize != 0) {
    _Memory->availableStack[_Memory->availableStackSize] = (MemoryWithPage *)param_1;
    _Memory->availableStackSize = _Memory->availableStackSize + 1;
    if ((_Memory->availableStackSize == (uint)this->memoryPoolPageSize >> 4) &&
       (3 < this->availablePagesSize)) {
      if (_Memory == this->availablePages) {
        this->availablePages = _Memory->next;
      }
      _Memory->prev->next = _Memory->next;
      _Memory->next->prev = _Memory->prev;
      this->availablePagesSize = this->availablePagesSize + -1;
      free(_Memory->availableStack);
      free(_Memory->block);
      free(_Memory);
    }
    return;
  }
  *_Memory->availableStack = (MemoryWithPage *)param_1;
  _Memory->availableStackSize = _Memory->availableStackSize + 1;
  this->unavailablePagesSize = this->unavailablePagesSize + -1;
  _Memory->next->prev = _Memory->prev;
  _Memory->prev->next = _Memory->next;
  if ((0 < this->unavailablePagesSize) && (_Memory == this->unavailablePages)) {
    this->unavailablePages = this->unavailablePages->next;
  }
  iVar1 = this->availablePagesSize;
  this->availablePagesSize = iVar1 + 1;
  if (iVar1 == 0) {
    this->availablePages = _Memory;
    _Memory->next = _Memory;
    _Memory->prev = _Memory;
    return;
  }
  _Memory->next = this->availablePages;
  _Memory->prev = this->availablePages->prev;
  this->availablePages->prev->next = _Memory;
  this->availablePages->prev = _Memory;
  return;
}
