#include "../ois.exe.h"


// public: __thiscall DataStructures::ThreadsafeAllocatingQueue<struct
// RakNet::RakPeer::BufferedCommandStruct>::~ThreadsafeAllocatingQueue<struct
// RakNet::RakPeer::BufferedCommandStruct>(void)

void __thiscall
DataStructures::ThreadsafeAllocatingQueue<>::~ThreadsafeAllocatingQueue<>
          (ThreadsafeAllocatingQueue<> *this)

{
  char *pcVar1;
  SimpleMutex *lpCriticalSection;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->queueMutex);
  if ((this->queue).allocation_size != 0) {
    operator_delete__((this->queue).array);
  }
  lpCriticalSection = &this->memoryPoolMutex;
  pcVar1 = (char *)0x59fde8;
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  MemoryPool<>::Clear(&this->memoryPool,pcVar1,(uint)lpCriticalSection);
  return;
}


// public: void __thiscall DataStructures::ThreadsafeAllocatingQueue<struct
// RakNet::RakPeer::BufferedCommandStruct>::Push(struct RakNet::RakPeer::BufferedCommandStruct *)

void __thiscall
DataStructures::ThreadsafeAllocatingQueue<>::Push
          (ThreadsafeAllocatingQueue<> *this,BufferedCommandStruct *param_1)

{
  SimpleMutex *lpCriticalSection;
  longlong lVar1;
  BufferedCommandStruct **ppBVar2;
  uint uVar3;
  uint uVar4;
  
  lpCriticalSection = &this->queueMutex;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->queue).allocation_size != 0) {
    (this->queue).array[(this->queue).tail] = param_1;
    uVar4 = (this->queue).allocation_size;
    uVar3 = (this->queue).tail + 1;
    (this->queue).tail = uVar3;
    if (uVar3 == uVar4) {
      (this->queue).tail = 0;
      uVar3 = 0;
    }
    if (((uVar3 == (this->queue).head) && (uVar4 = uVar4 * 2, uVar4 != 0)) &&
       (lVar1 = (ulonglong)uVar4 * 4,
       ppBVar2 = operator_new__(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1),
       ppBVar2 != (BufferedCommandStruct **)0x0)) {
      uVar4 = 0;
      if ((this->queue).allocation_size != 0) {
        do {
          ppBVar2[uVar4] =
               (this->queue).array[((this->queue).head + uVar4) % (this->queue).allocation_size];
          uVar4 = uVar4 + 1;
        } while (uVar4 < (this->queue).allocation_size);
      }
      uVar4 = (this->queue).allocation_size;
      (this->queue).tail = uVar4;
      (this->queue).head = 0;
      (this->queue).allocation_size = uVar4 * 2;
      operator_delete__((this->queue).array);
      (this->queue).array = ppBVar2;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
  ppBVar2 = operator_new__(0x40);
  (this->queue).array = ppBVar2;
  (this->queue).head = 0;
  (this->queue).tail = 1;
  *ppBVar2 = param_1;
  (this->queue).allocation_size = 0x10;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}


// public: struct RakNet::RakPeer::BufferedCommandStruct * __thiscall
// DataStructures::ThreadsafeAllocatingQueue<struct
// RakNet::RakPeer::BufferedCommandStruct>::Allocate(char const *,unsigned int)

BufferedCommandStruct * __thiscall
DataStructures::ThreadsafeAllocatingQueue<>::Allocate
          (ThreadsafeAllocatingQueue<> *this,char *param_1,uint param_2)

{
  int *piVar1;
  uint _Size;
  Page *pPVar2;
  uint uVar3;
  MemoryWithPage *pMVar4;
  MemoryWithPage **ppMVar5;
  int iVar6;
  MemoryWithPage *pMVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&this->memoryPoolMutex);
  if ((this->memoryPool).availablePagesSize < 1) {
    pPVar2 = malloc(0x14);
    pMVar7 = (MemoryWithPage *)0x0;
    (this->memoryPool).availablePages = pPVar2;
    if (pPVar2 != (Page *)0x0) {
      _Size = (this->memoryPool).memoryPoolPageSize;
      (this->memoryPool).availablePagesSize = 1;
      uVar3 = _Size / 0x78;
      pMVar4 = malloc(_Size);
      pPVar2->block = pMVar4;
      if (pMVar4 != (MemoryWithPage *)0x0) {
        ppMVar5 = malloc(uVar3 << 2);
        pMVar4 = pPVar2->block;
        pPVar2->availableStack = ppMVar5;
        if (ppMVar5 != (MemoryWithPage **)0x0) {
          if (uVar3 != 0) {
            do {
              pMVar4->parentPage = pPVar2;
              ppMVar5[(int)pMVar7] = pMVar4;
              pMVar7 = (MemoryWithPage *)&pMVar7->field_0x1;
              pMVar4 = pMVar4 + 1;
            } while ((int)pMVar7 < (int)uVar3);
          }
          pPVar2->availableStackSize = uVar3;
          pPVar2->next = (this->memoryPool).availablePages;
          pPVar2->prev = pPVar2;
          pPVar2 = (this->memoryPool).availablePages;
          piVar1 = &pPVar2->availableStackSize;
          *piVar1 = *piVar1 + -1;
          pMVar7 = ((this->memoryPool).availablePages)->availableStack[pPVar2->availableStackSize];
          goto LAB_005ac520;
        }
        free(pMVar4);
      }
      pMVar7 = (MemoryWithPage *)0x0;
    }
  }
  else {
    pPVar2 = (this->memoryPool).availablePages;
    iVar6 = pPVar2->availableStackSize + -1;
    pPVar2->availableStackSize = iVar6;
    pMVar7 = pPVar2->availableStack[iVar6];
    if (iVar6 == 0) {
      piVar1 = &(this->memoryPool).availablePagesSize;
      *piVar1 = *piVar1 + -1;
      (this->memoryPool).availablePages = pPVar2->next;
      pPVar2->next->prev = pPVar2->prev;
      pPVar2->prev->next = pPVar2->next;
      iVar6 = (this->memoryPool).unavailablePagesSize;
      (this->memoryPool).unavailablePagesSize = iVar6 + 1;
      if (iVar6 == 0) {
        (this->memoryPool).unavailablePages = pPVar2;
        pPVar2->next = pPVar2;
        pPVar2->prev = pPVar2;
      }
      else {
        pPVar2->next = (this->memoryPool).unavailablePages;
        pPVar2->prev = ((this->memoryPool).unavailablePages)->prev;
        ((this->memoryPool).unavailablePages)->prev->next = pPVar2;
        ((this->memoryPool).unavailablePages)->prev = pPVar2;
      }
    }
  }
LAB_005ac520:
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->memoryPoolMutex);
  *(undefined2 *)&pMVar7->field_0x18 = 0xffff;
  *(undefined4 *)&pMVar7->field_0x10 = DAT_006578d0;
  *(undefined4 *)&pMVar7->field_0x14 = DAT_006578d4;
  *(undefined2 *)&pMVar7->field_0x18 = DAT_006578d8;
  *(undefined4 *)&pMVar7->field_0x20 = 0;
  *(undefined4 *)&pMVar7->field_0x24 = 0;
  *(undefined4 *)&pMVar7->field_0x28 = 0;
  *(undefined4 *)&pMVar7->field_0x2c = 0;
  *(undefined2 *)&pMVar7->field_0x20 = 2;
  *(undefined4 *)&pMVar7->field_0x30 = 0xffff0000;
  return &pMVar7->userMemory;
}


// public: struct RakNet::RakPeer::SocketQueryOutput * __thiscall
// DataStructures::ThreadsafeAllocatingQueue<struct
// RakNet::RakPeer::SocketQueryOutput>::Allocate(char const *,unsigned int)

SocketQueryOutput * __thiscall
DataStructures::ThreadsafeAllocatingQueue<>::Allocate
          (ThreadsafeAllocatingQueue<> *this,char *param_1,uint param_2)

{
  int *piVar1;
  uint _Size;
  Page *pPVar2;
  MemoryWithPage *pMVar3;
  MemoryWithPage **ppMVar4;
  int iVar5;
  uint uVar6;
  MemoryWithPage *pMVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&this->memoryPoolMutex);
  if ((this->memoryPool).availablePagesSize < 1) {
    pPVar2 = malloc(0x14);
    pMVar7 = (MemoryWithPage *)0x0;
    (this->memoryPool).availablePages = pPVar2;
    if (pPVar2 != (Page *)0x0) {
      _Size = (this->memoryPool).memoryPoolPageSize;
      uVar6 = _Size >> 4;
      (this->memoryPool).availablePagesSize = 1;
      pMVar3 = malloc(_Size);
      pPVar2->block = pMVar3;
      if (pMVar3 != (MemoryWithPage *)0x0) {
        ppMVar4 = malloc(uVar6 << 2);
        pMVar3 = pPVar2->block;
        pPVar2->availableStack = ppMVar4;
        if (ppMVar4 != (MemoryWithPage **)0x0) {
          if (uVar6 != 0) {
            do {
              pMVar3->parentPage = pPVar2;
              ppMVar4[(int)pMVar7] = pMVar3;
              pMVar7 = (MemoryWithPage *)&pMVar7->field_0x1;
              pMVar3 = pMVar3 + 1;
            } while ((int)pMVar7 < (int)uVar6);
          }
          pPVar2->availableStackSize = uVar6;
          pPVar2->next = (this->memoryPool).availablePages;
          pPVar2->prev = pPVar2;
          pPVar2 = (this->memoryPool).availablePages;
          piVar1 = &pPVar2->availableStackSize;
          *piVar1 = *piVar1 + -1;
          pMVar7 = ((this->memoryPool).availablePages)->availableStack[pPVar2->availableStackSize];
          goto LAB_005ac689;
        }
        free(pMVar3);
      }
      pMVar7 = (MemoryWithPage *)0x0;
    }
  }
  else {
    pPVar2 = (this->memoryPool).availablePages;
    iVar5 = pPVar2->availableStackSize + -1;
    pPVar2->availableStackSize = iVar5;
    pMVar7 = pPVar2->availableStack[iVar5];
    if (iVar5 == 0) {
      piVar1 = &(this->memoryPool).availablePagesSize;
      *piVar1 = *piVar1 + -1;
      (this->memoryPool).availablePages = pPVar2->next;
      pPVar2->next->prev = pPVar2->prev;
      pPVar2->prev->next = pPVar2->next;
      iVar5 = (this->memoryPool).unavailablePagesSize;
      (this->memoryPool).unavailablePagesSize = iVar5 + 1;
      if (iVar5 == 0) {
        (this->memoryPool).unavailablePages = pPVar2;
        pPVar2->next = pPVar2;
        pPVar2->prev = pPVar2;
      }
      else {
        pPVar2->next = (this->memoryPool).unavailablePages;
        pPVar2->prev = ((this->memoryPool).unavailablePages)->prev;
        ((this->memoryPool).unavailablePages)->prev->next = pPVar2;
        ((this->memoryPool).unavailablePages)->prev = pPVar2;
      }
    }
  }
LAB_005ac689:
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->memoryPoolMutex);
  *(undefined4 *)&pMVar7->field_0x8 = 0;
  *(undefined4 *)pMVar7 = 0;
  *(undefined4 *)&pMVar7->field_0x4 = 0;
  return &pMVar7->userMemory;
}
