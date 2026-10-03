#include "../ois.exe.h"


// public: void __thiscall DataStructures::List<unsigned int>::Insert(unsigned int const &,char
// const *,unsigned int)

void __thiscall
DataStructures::List<>::Insert(List<> *this,uint *param_1,char *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  
  iVar5 = *(int *)(this + 4);
  iVar1 = *(int *)(this + 8);
  if (iVar5 != iVar1) {
    *(uint *)(*(int *)this + *(int *)(this + 4) * 4) = *param_1;
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    return;
  }
  if (iVar1 == 0) {
    *(undefined4 *)(this + 8) = 0x10;
    uVar2 = 0x10;
  }
  else {
    uVar2 = iVar1 * 2;
    *(uint *)(this + 8) = uVar2;
    if (uVar2 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_0059d6ef;
    }
  }
  pvVar3 = operator_new__(-(uint)((int)((ulonglong)uVar2 * 4 >> 0x20) != 0) |
                          (uint)((ulonglong)uVar2 * 4));
  iVar5 = *(int *)(this + 4);
LAB_0059d6ef:
  pvVar4 = *(void **)this;
  if (pvVar4 != (void *)0x0) {
    uVar2 = 0;
    if (iVar5 != 0) {
      do {
        *(undefined4 *)((int)pvVar3 + uVar2 * 4) = *(undefined4 *)(*(int *)this + uVar2 * 4);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(this + 4));
      pvVar4 = *(void **)this;
    }
    operator_delete__(pvVar4);
  }
  *(void **)this = pvVar3;
  *(uint *)((int)pvVar3 + *(int *)(this + 4) * 4) = *param_1;
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  return;
}


// public: void __thiscall DataStructures::List<struct RakNet::InternalPacket
// *>::Preallocate(unsigned int,char const *,unsigned int)

void __thiscall
DataStructures::List<>::Preallocate(List<> *this,uint param_1,char *param_2,uint param_3)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  
  uVar3 = *(uint *)(this + 8);
  uVar1 = uVar3;
  if (uVar3 == 0) {
    uVar1 = 0x10;
  }
  for (; uVar1 < param_1; uVar1 = uVar1 * 2) {
  }
  if (uVar3 < uVar1) {
    *(uint *)(this + 8) = uVar1;
    if (uVar1 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = operator_new__(-(uint)((int)((ulonglong)uVar1 * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)uVar1 * 4));
    }
    pvVar2 = *(void **)this;
    if (pvVar2 != (void *)0x0) {
      uVar3 = 0;
      if (*(int *)(this + 4) != 0) {
        do {
          *(undefined4 *)((int)pvVar4 + uVar3 * 4) = *(undefined4 *)(*(int *)this + uVar3 * 4);
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(this + 4));
        pvVar2 = *(void **)this;
      }
      operator_delete__(pvVar2);
    }
    *(void **)this = pvVar4;
  }
  return;
}


// public: void __thiscall DataStructures::List<struct
// RakNet::ReliabilityLayer::UnreliableWithAckReceiptNode>::RemoveAtIndex(unsigned int)

void __thiscall DataStructures::List<>::RemoveAtIndex(List<> *this,uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(this + 4);
  if (param_1 < uVar2) {
    if (param_1 < uVar2 - 1) {
      iVar3 = param_1 << 4;
      do {
        param_1 = param_1 + 1;
        puVar1 = (undefined4 *)(*(int *)this + iVar3);
        iVar3 = iVar3 + 0x10;
        *puVar1 = puVar1[4];
        puVar1[1] = puVar1[5];
        puVar1[2] = puVar1[6];
        puVar1[3] = puVar1[7];
        uVar2 = *(uint *)(this + 4);
      } while (param_1 < uVar2 - 1);
    }
    *(uint *)(this + 4) = uVar2 - 1;
  }
  return;
}


// public: void __thiscall DataStructures::List<bool>::Push(bool const &,char const *,unsigned int)

void __thiscall
DataStructures::List<bool>::Push(List<bool> *this,bool *param_1,char *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  
  iVar5 = *(int *)(this + 4);
  iVar1 = *(int *)(this + 8);
  if (iVar5 != iVar1) {
    *(bool *)(*(int *)this + *(int *)(this + 4)) = *param_1;
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    return;
  }
  if (iVar1 == 0) {
    *(undefined4 *)(this + 8) = 0x10;
    uVar2 = 0x10;
  }
  else {
    uVar2 = iVar1 * 2;
    *(uint *)(this + 8) = uVar2;
    if (uVar2 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_0059e14f;
    }
  }
  pvVar3 = operator_new__(uVar2);
  iVar5 = *(int *)(this + 4);
LAB_0059e14f:
  pvVar4 = *(void **)this;
  if (pvVar4 != (void *)0x0) {
    uVar2 = 0;
    if (iVar5 != 0) {
      do {
        *(undefined1 *)(uVar2 + (int)pvVar3) = *(undefined1 *)(uVar2 + *(int *)this);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(this + 4));
      pvVar4 = *(void **)this;
    }
    operator_delete__(pvVar4);
  }
  *(void **)this = pvVar3;
  *(bool *)((int)pvVar3 + *(int *)(this + 4)) = *param_1;
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  return;
}


// public: void __thiscall DataStructures::List<unsigned int>::Preallocate(unsigned int,char const
// *,unsigned int)

void __thiscall
DataStructures::List<>::Preallocate(List<> *this,uint param_1,char *param_2,uint param_3)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  
  uVar3 = *(uint *)(this + 8);
  if (uVar3 == 0) {
    uVar1 = 0x10;
  }
  else {
    uVar1 = uVar3;
    if (0x7f < uVar3) {
      return;
    }
  }
  do {
    uVar1 = uVar1 * 2;
  } while (uVar1 < 0x80);
  if (uVar3 < uVar1) {
    *(uint *)(this + 8) = uVar1;
    if (uVar1 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = operator_new__(-(uint)((int)((ulonglong)uVar1 * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)uVar1 * 4));
    }
    pvVar2 = *(void **)this;
    if (pvVar2 != (void *)0x0) {
      uVar3 = 0;
      if (*(int *)(this + 4) != 0) {
        do {
          *(undefined4 *)((int)pvVar4 + uVar3 * 4) = *(undefined4 *)(*(int *)this + uVar3 * 4);
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(this + 4));
        pvVar2 = *(void **)this;
      }
      operator_delete__(pvVar2);
    }
    *(void **)this = pvVar4;
  }
  return;
}


// public: void __thiscall DataStructures::List<struct DataStructures::Heap<unsigned __int64,struct
// RakNet::InternalPacket *,0>::HeapNode>::Insert(struct DataStructures::Heap<unsigned
// __int64,struct RakNet::InternalPacket *,0>::HeapNode const &,char const *,unsigned int)

void __thiscall
DataStructures::List<>::Insert(List<> *this,HeapNode *param_1,char *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  void *pvVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = *(int *)(this + 4);
  iVar10 = *(int *)(this + 8);
  if (iVar9 != iVar10) {
    pvVar7 = *(void **)this;
    goto LAB_0059e942;
  }
  if (iVar10 == 0) {
    *(undefined4 *)(this + 8) = 0x10;
    uVar6 = 0x10;
LAB_0059e8e2:
    pvVar7 = operator_new__(-(uint)((int)((ulonglong)uVar6 * 0x10 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar6 * 0x10));
    iVar9 = *(int *)(this + 4);
  }
  else {
    uVar6 = iVar10 * 2;
    *(uint *)(this + 8) = uVar6;
    if (uVar6 != 0) goto LAB_0059e8e2;
    pvVar7 = (void *)0x0;
  }
  pvVar8 = *(void **)this;
  if (pvVar8 != (void *)0x0) {
    uVar6 = 0;
    if (iVar9 != 0) {
      iVar10 = 0;
      do {
        uVar6 = uVar6 + 1;
        puVar1 = (undefined4 *)(*(int *)this + -0x10 + iVar10 + 0x10);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        puVar2 = (undefined4 *)(iVar10 + (int)pvVar7);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        iVar10 = iVar10 + 0x10;
      } while (uVar6 < *(uint *)(this + 4));
      pvVar8 = *(void **)this;
    }
    operator_delete__(pvVar8);
  }
  *(void **)this = pvVar7;
LAB_0059e942:
  uVar3 = *(undefined4 *)(param_1 + 4);
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)((int)pvVar7 + *(int *)(this + 4) * 0x10);
  *puVar1 = *(undefined4 *)param_1;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  return;
}


// public: void __thiscall DataStructures::List<struct DataStructures::RangeNode<struct
// RakNet::uint24_t> >::Insert(struct DataStructures::RangeNode<struct RakNet::uint24_t> const
// &,char const *,unsigned int)

void __thiscall
DataStructures::List<>::Insert(List<> *this,RangeNode<> *param_1,char *param_2,uint param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  char *pcVar3;
  RangeNode<> *pRVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint unaff_EDI;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b3cd0;
  local_10 = ExceptionList;
  pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  iVar8 = *(int *)(this + 4);
  iVar6 = *(int *)(this + 8);
  if (iVar8 == iVar6) {
    if (iVar6 == 0) {
      *(undefined4 *)(this + 8) = 0x10;
      iVar6 = 0x10;
    }
    else {
      iVar6 = iVar6 * 2;
      *(int *)(this + 8) = iVar6;
    }
    pRVar4 = RakNet::OP_NEW_ARRAY<>(iVar6,pcVar3,unaff_EDI);
    pvVar5 = *(void **)this;
    if (pvVar5 != (void *)0x0) {
      uVar7 = 0;
      if (*(int *)(this + 4) != 0) {
        do {
          puVar2 = (undefined4 *)(*(int *)this + uVar7 * 8);
          *(undefined4 *)(pRVar4 + uVar7 * 8) = *puVar2;
          *(undefined4 *)(pRVar4 + uVar7 * 8 + 4) = puVar2[1];
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(this + 4));
        pvVar5 = *(void **)this;
      }
      if (pvVar5 != (void *)0x0) {
        puVar1 = (uint *)((int)pvVar5 + -4);
        local_8 = 0;
        _eh_vector_destructor_iterator_(pvVar5,8,*puVar1,RangeNode<>::~RangeNode<>);
        operator_delete__(puVar1,*puVar1 * 8 + 4);
      }
    }
    iVar8 = *(int *)(this + 4);
    *(RangeNode<> **)this = pRVar4;
  }
  else {
    pRVar4 = *(RangeNode<> **)this;
  }
  *(undefined4 *)(pRVar4 + iVar8 * 8) = *(undefined4 *)param_1;
  *(undefined4 *)(pRVar4 + iVar8 * 8 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  ExceptionList = local_10;
  return;
}


// public: void __thiscall DataStructures::List<struct DataStructures::RangeNode<struct
// RakNet::uint24_t> >::Insert(struct DataStructures::RangeNode<struct RakNet::uint24_t> const
// &,unsigned int,char const *,unsigned int)

void __thiscall
DataStructures::List<>::Insert
          (List<> *this,RangeNode<> *param_1,uint param_2,char *param_3,uint param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  char *pcVar5;
  RangeNode<> *pRVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint unaff_EDI;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b3cd0;
  local_10 = ExceptionList;
  pcVar5 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  uVar8 = *(uint *)(this + 4);
  uVar9 = *(uint *)(this + 8);
  if (uVar8 == uVar9) {
    if (uVar9 == 0) {
      *(undefined4 *)(this + 8) = 0x10;
      iVar7 = 0x10;
    }
    else {
      iVar7 = uVar9 * 2;
      *(int *)(this + 8) = iVar7;
    }
    pRVar6 = RakNet::OP_NEW_ARRAY<>(iVar7,pcVar5,unaff_EDI);
    uVar9 = 0;
    if (*(int *)(this + 4) != 0) {
      do {
        iVar3 = *(int *)this;
        iVar7 = uVar9 * 8;
        uVar9 = uVar9 + 1;
        *(undefined4 *)(pRVar6 + iVar7) = *(undefined4 *)(iVar3 + iVar7);
        *(undefined4 *)(pRVar6 + iVar7 + 4) = *(undefined4 *)(iVar3 + 4 + iVar7);
      } while (uVar9 < *(uint *)(this + 4));
    }
    pvVar4 = *(void **)this;
    if (pvVar4 != (void *)0x0) {
      puVar1 = (uint *)((int)pvVar4 + -4);
      local_8 = 0;
      _eh_vector_destructor_iterator_(pvVar4,8,*puVar1,RangeNode<>::~RangeNode<>);
      operator_delete__(puVar1,*puVar1 * 8 + 4);
    }
    uVar8 = *(uint *)(this + 4);
    *(RangeNode<> **)this = pRVar6;
  }
  else {
    pRVar6 = *(RangeNode<> **)this;
  }
  if (uVar8 != param_2) {
    do {
      puVar2 = (undefined4 *)(*(int *)this + uVar8 * 8);
      uVar8 = uVar8 - 1;
      *puVar2 = puVar2[-2];
      puVar2[1] = puVar2[-1];
    } while (uVar8 != param_2);
    pRVar6 = *(RangeNode<> **)this;
  }
  *(undefined4 *)(pRVar6 + param_2 * 8) = *(undefined4 *)param_1;
  *(undefined4 *)(pRVar6 + param_2 * 8 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  ExceptionList = local_10;
  return;
}


// public: void __thiscall DataStructures::List<struct RakNet::SystemAddress>::Push(struct
// RakNet::SystemAddress const &,char const *,unsigned int)

void __thiscall
DataStructures::List<>::Push(List<> *this,SystemAddress *param_1,char *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined3 uVar4;
  SystemAddress *pSVar5;
  SystemAddress *pSVar6;
  uint uVar7;
  undefined4 *puVar8;
  ushort *puVar9;
  uint unaff_EBX;
  char *unaff_ESI;
  uint uVar10;
  
  uVar7 = this->list_size;
  uVar10 = this->allocation_size;
  if (uVar7 == uVar10) {
    uVar7 = 0x10;
    if (uVar10 != 0) {
      uVar7 = uVar10 * 2;
    }
    this->allocation_size = uVar7;
    pSVar5 = RakNet::OP_NEW_ARRAY<>(uVar7,unaff_ESI,unaff_EBX);
    pSVar6 = this->listArray;
    if (pSVar6 != (SystemAddress *)0x0) {
      uVar10 = 0;
      if (this->list_size != 0) {
        puVar9 = &pSVar5->debugPort;
        do {
          uVar10 = uVar10 + 1;
          puVar8 = (undefined4 *)((int)puVar9 + (int)this->listArray + (-0x10 - (int)pSVar5));
          uVar1 = puVar8[1];
          uVar2 = puVar8[2];
          uVar3 = puVar8[3];
          *(undefined4 *)(puVar9 + -8) = *puVar8;
          *(undefined4 *)(puVar9 + -6) = uVar1;
          *(undefined4 *)(puVar9 + -4) = uVar2;
          *(undefined4 *)(puVar9 + -2) = uVar3;
          puVar9[1] = *(ushort *)((int)puVar8 + 0x12);
          *puVar9 = *(ushort *)(puVar8 + 4);
          puVar9 = puVar9 + 10;
        } while (uVar10 < this->list_size);
        pSVar6 = this->listArray;
      }
      operator_delete__(pSVar6);
    }
    uVar7 = this->list_size;
    this->listArray = pSVar5;
  }
  else {
    pSVar5 = this->listArray;
  }
  pSVar5 = pSVar5 + uVar7;
  uVar4 = *(undefined3 *)&param_1->field_0x1;
  uVar1 = *(undefined4 *)&param_1->field_0x4;
  uVar2 = *(undefined4 *)&param_1->field_0x8;
  uVar3 = *(undefined4 *)&param_1->field_0xc;
  pSVar5->address = param_1->address;
  *(undefined3 *)&pSVar5->field_0x1 = uVar4;
  *(undefined4 *)&pSVar5->field_0x4 = uVar1;
  *(undefined4 *)&pSVar5->field_0x8 = uVar2;
  *(undefined4 *)&pSVar5->field_0xc = uVar3;
  pSVar5->systemIndex = param_1->systemIndex;
  pSVar5->debugPort = param_1->debugPort;
  this->list_size = this->list_size + 1;
  return;
}


// public: void __thiscall DataStructures::List<struct RakNet::RakNetGUID>::Push(struct
// RakNet::RakNetGUID const &,char const *,unsigned int)

void __thiscall
DataStructures::List<>::Push(List<> *this,RakNetGUID *param_1,char *param_2,uint param_3)

{
  RakNetGUID *pRVar1;
  RakNetGUID *pRVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = this->list_size;
  uVar6 = this->allocation_size;
  if (uVar4 != uVar6) {
    pRVar1 = this->listArray;
    goto LAB_005ac1ab;
  }
  if (uVar6 == 0) {
    this->allocation_size = 0x10;
    uVar6 = 0x10;
LAB_005ac0f7:
    pRVar1 = operator_new__(-(uint)((int)((ulonglong)uVar6 * 0x10 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar6 * 0x10));
    if (pRVar1 == (RakNetGUID *)0x0) {
      pRVar1 = (RakNetGUID *)0x0;
    }
    else if (uVar6 != 0) {
      puVar3 = &pRVar1->systemIndex;
      do {
        *puVar3 = 0xffff;
        *(undefined4 *)&((RakNetGUID *)(puVar3 + -4))->g = DAT_006578d0;
        *(undefined4 *)(puVar3 + -2) = DAT_006578d4;
        *puVar3 = DAT_006578d8;
        uVar6 = uVar6 - 1;
        puVar3 = puVar3 + 8;
      } while (uVar6 != 0);
    }
    uVar4 = this->list_size;
  }
  else {
    uVar6 = uVar6 * 2;
    this->allocation_size = uVar6;
    if (uVar6 != 0) goto LAB_005ac0f7;
    pRVar1 = (RakNetGUID *)0x0;
  }
  pRVar2 = this->listArray;
  if (pRVar2 != (RakNetGUID *)0x0) {
    uVar6 = 0;
    if (uVar4 != 0) {
      iVar5 = 0;
      do {
        pRVar2 = this->listArray;
        uVar6 = uVar6 + 1;
        *(undefined4 *)((int)&pRVar1->g + iVar5) = *(undefined4 *)((int)&pRVar2->g + iVar5);
        *(undefined4 *)((int)&pRVar1->g + iVar5 + 4) = *(undefined4 *)((int)&pRVar2->g + iVar5 + 4);
        *(undefined2 *)((int)&pRVar1->systemIndex + iVar5) =
             *(undefined2 *)((int)&pRVar2->systemIndex + iVar5);
        iVar5 = iVar5 + 0x10;
      } while (uVar6 < this->list_size);
      pRVar2 = this->listArray;
    }
    operator_delete__(pRVar2);
  }
  this->listArray = pRVar1;
LAB_005ac1ab:
  uVar6 = this->list_size;
  *(int *)&pRVar1[uVar6].g = (int)param_1->g;
  *(undefined4 *)((int)&pRVar1[uVar6].g + 4) = *(undefined4 *)((int)&param_1->g + 4);
  pRVar1[uVar6].systemIndex = param_1->systemIndex;
  this->list_size = this->list_size + 1;
  return;
}


// public: class DataStructures::List<class RakNet::RakNetSocket2 *> & __thiscall
// DataStructures::List<class RakNet::RakNetSocket2 *>::operator=(class DataStructures::List<class
// RakNet::RakNetSocket2 *> const &)

List<> * __thiscall DataStructures::List<>::operator=(List<> *this,List<> *param_1)

{
  longlong lVar1;
  RakNetSocket2 **ppRVar2;
  uint uVar3;
  uint uVar4;
  
  if ((List<> *)param_1 != this) {
    if (this->allocation_size != 0) {
      operator_delete__(this->listArray);
      this->allocation_size = 0;
      this->listArray = (RakNetSocket2 **)0x0;
      this->list_size = 0;
    }
    if (*(uint *)(param_1 + 4) == 0) {
      this->list_size = 0;
      this->allocation_size = 0;
      return (List<> *)this;
    }
    lVar1 = (ulonglong)*(uint *)(param_1 + 4) * 4;
    ppRVar2 = operator_new__(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    this->listArray = ppRVar2;
    uVar4 = 0;
    uVar3 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      do {
        this->listArray[uVar4] = *(RakNetSocket2 **)(*(int *)param_1 + uVar4 * 4);
        uVar4 = uVar4 + 1;
        uVar3 = *(uint *)(param_1 + 4);
      } while (uVar4 < uVar3);
    }
    this->allocation_size = uVar3;
    this->list_size = uVar3;
  }
  return (List<> *)this;
}


// public: void __thiscall DataStructures::List<struct RakNet::RakPeer::BanStruct
// *>::RemoveAtIndex(unsigned int)

void __thiscall DataStructures::List<>::RemoveAtIndex(List<> *this,uint param_1)

{
  BanStruct **ppBVar1;
  uint uVar2;
  
  uVar2 = this->list_size;
  if (param_1 < uVar2) {
    if (param_1 < uVar2 - 1) {
      do {
        ppBVar1 = this->listArray + param_1;
        param_1 = param_1 + 1;
        *ppBVar1 = ppBVar1[1];
        uVar2 = this->list_size;
      } while (param_1 < uVar2 - 1);
    }
    this->list_size = uVar2 - 1;
  }
  return;
}


// public: __thiscall DataStructures::List<class RakNet::RakString>::~List<class
// RakNet::RakString>(void)

void __thiscall DataStructures::List<>::~List<>(List<> *this)

{
  RakString *pRVar1;
  RakString *pRVar2;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005cdba0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((this->allocation_size != 0) && (pRVar2 = this->listArray, pRVar2 != (RakString *)0x0)) {
    pRVar1 = pRVar2 + -4;
    local_8 = 0;
    _eh_vector_destructor_iterator_(pRVar2,4,*(uint *)pRVar1,RakNet::RakString::~RakString);
    operator_delete__(pRVar1,*(uint *)pRVar1 * 4 + 4);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall DataStructures::List<class RakNet::RakString>::Insert(class
// RakNet::RakString const &,char const *,unsigned int)

void __thiscall
DataStructures::List<>::Insert(List<> *this,RakString *param_1,char *param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  RakString *pRVar3;
  uint uVar4;
  uint uVar5;
  RakString *pRVar6;
  RakString *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cdbed;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar4 = this->list_size;
  uVar5 = this->allocation_size;
  if (uVar4 != uVar5) {
    local_14 = this->listArray;
    goto LAB_005ac8c0;
  }
  if (uVar5 == 0) {
    this->allocation_size = 0x10;
    uVar5 = 0x10;
LAB_005ac7a8:
    uVar4 = -(uint)((int)((ulonglong)uVar5 * 4 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 4);
    puVar2 = operator_new__(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
    local_8 = 0;
    if (puVar2 == (uint *)0x0) {
      local_14 = (RakString *)0x0;
    }
    else {
      local_14 = (RakString *)(puVar2 + 1);
      *puVar2 = uVar5;
      _eh_vector_constructor_iterator_
                (local_14,4,uVar5,RakNet::RakString::RakString,RakNet::RakString::~RakString);
    }
    uVar4 = this->list_size;
  }
  else {
    uVar5 = uVar5 * 2;
    this->allocation_size = uVar5;
    if (uVar5 != 0) goto LAB_005ac7a8;
    local_14 = (RakString *)0x0;
  }
  local_8 = 0xffffffff;
  pRVar3 = this->listArray;
  if (pRVar3 != (RakString *)0x0) {
    uVar5 = 0;
    pRVar6 = local_14;
    if (uVar4 != 0) {
      do {
        pRVar3 = this->listArray + uVar5 * 4;
        RakNet::RakString::Free(pRVar6);
        if (*(SharedString **)pRVar3 != &RakNet::RakString::emptyString) {
          EnterCriticalSection((LPCRITICAL_SECTION)(*(SharedString **)pRVar3)->refCountMutex);
          iVar1 = *(int *)pRVar3;
          if (*(int *)(iVar1 + 4) == 0) {
            *(SharedString **)pRVar6 = &RakNet::RakString::emptyString;
          }
          else {
            *(int *)pRVar6 = iVar1;
            *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)**(undefined4 **)pRVar3);
        }
        uVar5 = uVar5 + 1;
        pRVar6 = pRVar6 + 4;
      } while (uVar5 < this->list_size);
      pRVar3 = this->listArray;
    }
    if (pRVar3 != (RakString *)0x0) {
      pRVar6 = pRVar3 + -4;
      local_8 = 1;
      _eh_vector_destructor_iterator_(pRVar3,4,*(uint *)pRVar6,RakNet::RakString::~RakString);
      operator_delete__(pRVar6,*(uint *)pRVar6 * 4 + 4);
      local_8 = 0xffffffff;
    }
  }
  this->listArray = local_14;
LAB_005ac8c0:
  local_14 = local_14 + this->list_size * 4;
  RakNet::RakString::Free(local_14);
  if (*(SharedString **)param_1 != &RakNet::RakString::emptyString) {
    EnterCriticalSection((LPCRITICAL_SECTION)(*(SharedString **)param_1)->refCountMutex);
    iVar1 = *(int *)param_1;
    if (*(int *)(iVar1 + 4) == 0) {
      *(SharedString **)local_14 = &RakNet::RakString::emptyString;
    }
    else {
      *(int *)local_14 = iVar1;
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)**(undefined4 **)param_1);
  }
  this->list_size = this->list_size + 1;
  ExceptionList = local_10;
  return;
}


// public: void __thiscall DataStructures::List<struct RakNet::RakString::SharedString
// *>::Insert(struct RakNet::RakString::SharedString * const &,char const *,unsigned int)

void __thiscall
DataStructures::List<>::Insert(List<> *this,SharedString **param_1,char *param_2,uint param_3)

{
  SharedString **ppSVar1;
  uint uVar2;
  
  if (RakNet::RakString::freeList.list_size != RakNet::RakString::freeList.allocation_size) {
    RakNet::RakString::freeList.listArray[RakNet::RakString::freeList.list_size] = *param_1;
    RakNet::RakString::freeList.list_size = RakNet::RakString::freeList.list_size + 1;
    return;
  }
  if (RakNet::RakString::freeList.allocation_size == 0) {
    RakNet::RakString::freeList.allocation_size = 0x10;
  }
  else {
    RakNet::RakString::freeList.allocation_size = RakNet::RakString::freeList.allocation_size * 2;
    if (RakNet::RakString::freeList.allocation_size == 0) {
      ppSVar1 = (SharedString **)0x0;
      goto LAB_005ae460;
    }
  }
  ppSVar1 = operator_new__(-(uint)((int)((ulonglong)RakNet::RakString::freeList.allocation_size * 4
                                        >> 0x20) != 0) |
                           (uint)((ulonglong)RakNet::RakString::freeList.allocation_size * 4));
LAB_005ae460:
  if (RakNet::RakString::freeList.listArray != (SharedString **)0x0) {
    uVar2 = 0;
    if (RakNet::RakString::freeList.list_size != 0) {
      do {
        ppSVar1[uVar2] = RakNet::RakString::freeList.listArray[uVar2];
        uVar2 = uVar2 + 1;
      } while (uVar2 < RakNet::RakString::freeList.list_size);
    }
    operator_delete__(RakNet::RakString::freeList.listArray);
  }
  RakNet::RakString::freeList.listArray = ppSVar1;
  ppSVar1[RakNet::RakString::freeList.list_size] = *param_1;
  RakNet::RakString::freeList.list_size = RakNet::RakString::freeList.list_size + 1;
  return;
}
