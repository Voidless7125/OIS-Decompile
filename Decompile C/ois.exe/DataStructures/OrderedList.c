#include "../ois.exe.h"


// public: __thiscall DataStructures::OrderedList<unsigned short,struct RakNet::SplitPacketChannel
// *,&int __cdecl RakNet::SplitPacketChannelComp(unsigned short const &,struct
// RakNet::SplitPacketChannel * const &)>::~OrderedList<unsigned short,struct
// RakNet::SplitPacketChannel *,&int __cdecl RakNet::SplitPacketChannelComp(unsigned short const
// &,struct RakNet::SplitPacketChannel * const &)>(void)

void __thiscall DataStructures::OrderedList<>::~OrderedList<>(OrderedList<> *this)

{
  if (*(int *)(this + 8) != 0) {
    operator_delete__(*(void **)this);
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}


// public: unsigned int __thiscall DataStructures::OrderedList<unsigned short,struct
// RakNet::SplitPacketChannel *,&int __cdecl RakNet::SplitPacketChannelComp(unsigned short const
// &,struct RakNet::SplitPacketChannel * const &)>::GetIndexFromKey(unsigned short const &,bool
// *,int (__cdecl*)(unsigned short const &,struct RakNet::SplitPacketChannel * const &))const 

uint __thiscall
DataStructures::OrderedList<>::GetIndexFromKey
          (OrderedList<> *this,ushort *param_1,bool *param_2,
          _func_int_ushort_ptr_SplitPacketChannel_ptr_ptr *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(this + 4);
  if (iVar1 != 0) {
    uVar4 = 0;
    uVar5 = iVar1 / 2;
    iVar2 = RakNet::SplitPacketChannelComp
                      (param_1,(SplitPacketChannel **)(*(int *)this + uVar5 * 4));
    iVar1 = iVar1 + -1;
    while( true ) {
      if (iVar2 == 0) {
        *param_2 = true;
        return uVar5;
      }
      iVar3 = uVar5 - 1;
      if (-1 < iVar2) {
        iVar3 = iVar1;
        uVar4 = uVar5 + 1;
      }
      uVar5 = (int)(iVar3 - uVar4) / 2 + uVar4;
      if (iVar3 < (int)uVar4) {
        *param_2 = false;
        return uVar4;
      }
      if (((int)uVar5 < 0) || (*(int *)(this + 4) <= (int)uVar5)) break;
      iVar2 = RakNet::SplitPacketChannelComp
                        (param_1,(SplitPacketChannel **)(*(int *)this + uVar5 * 4));
      iVar1 = iVar3;
    }
  }
  *param_2 = false;
  return 0;
}


// public: unsigned int __thiscall DataStructures::OrderedList<unsigned short,struct
// RakNet::SplitPacketChannel *,&int __cdecl RakNet::SplitPacketChannelComp(unsigned short const
// &,struct RakNet::SplitPacketChannel * const &)>::Insert(unsigned short const &,struct
// RakNet::SplitPacketChannel * const &,bool,char const *,unsigned int,int (__cdecl*)(unsigned short
// const &,struct RakNet::SplitPacketChannel * const &))

uint __thiscall
DataStructures::OrderedList<>::Insert
          (OrderedList<> *this,ushort *param_1,SplitPacketChannel **param_2,bool param_3,
          char *param_4,uint param_5,_func_int_ushort_ptr_SplitPacketChannel_ptr_ptr *param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  OrderedList<> *pOStack_8;
  bool objectExists;
  
  pOStack_8 = this;
  uVar2 = GetIndexFromKey(this,param_1,&objectExists,
                          (_func_int_ushort_ptr_SplitPacketChannel_ptr_ptr *)this);
  if (objectExists != false) {
    return 0xffffffff;
  }
  uVar6 = *(uint *)(this + 4);
  uVar3 = *(uint *)(this + 8);
  if (uVar2 < uVar6) {
    if (uVar6 != uVar3) {
      pvVar4 = *(void **)this;
      goto LAB_0059e010;
    }
    if (uVar3 == 0) {
      *(undefined4 *)(this + 8) = 0x10;
      uVar3 = 0x10;
LAB_0059dfc0:
      pvVar4 = operator_new__(-(uint)((int)((ulonglong)uVar3 * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)uVar3 * 4));
      uVar6 = *(uint *)(this + 4);
    }
    else {
      uVar3 = uVar3 * 2;
      *(uint *)(this + 8) = uVar3;
      if (uVar3 != 0) goto LAB_0059dfc0;
      pvVar4 = (void *)0x0;
    }
    uVar3 = 0;
    if (uVar6 != 0) {
      do {
        *(undefined4 *)((int)pvVar4 + uVar3 * 4) = *(undefined4 *)(*(int *)this + uVar3 * 4);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(this + 4));
    }
    operator_delete__(*(void **)this);
    uVar6 = *(uint *)(this + 4);
    *(void **)this = pvVar4;
LAB_0059e010:
    if (uVar6 != uVar2) {
      do {
        puVar1 = (undefined4 *)(*(int *)this + uVar6 * 4);
        uVar6 = uVar6 - 1;
        *puVar1 = puVar1[-1];
      } while (uVar6 != uVar2);
      pvVar4 = *(void **)this;
    }
    *(SplitPacketChannel **)((int)pvVar4 + uVar2 * 4) = *param_2;
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    return uVar2;
  }
  if (uVar6 != uVar3) {
    pvVar4 = *(void **)this;
    goto LAB_0059df8f;
  }
  if (uVar3 == 0) {
    *(undefined4 *)(this + 8) = 0x10;
    uVar3 = 0x10;
LAB_0059df3b:
    pvVar4 = operator_new__(-(uint)((int)((ulonglong)uVar3 * 4 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar3 * 4));
    uVar6 = *(uint *)(this + 4);
  }
  else {
    uVar3 = uVar3 * 2;
    *(uint *)(this + 8) = uVar3;
    if (uVar3 != 0) goto LAB_0059df3b;
    pvVar4 = (void *)0x0;
  }
  pvVar5 = *(void **)this;
  if (pvVar5 != (void *)0x0) {
    uVar2 = 0;
    if (uVar6 != 0) {
      do {
        *(undefined4 *)((int)pvVar4 + uVar2 * 4) = *(undefined4 *)(*(int *)this + uVar2 * 4);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(this + 4));
      pvVar5 = *(void **)this;
    }
    operator_delete__(pvVar5);
  }
  *(void **)this = pvVar4;
LAB_0059df8f:
  *(SplitPacketChannel **)((int)pvVar4 + *(int *)(this + 4) * 4) = *param_2;
  uVar2 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar2 + 1;
  return uVar2;
}


// public: __thiscall DataStructures::OrderedList<struct RakNet::uint24_t,struct
// DataStructures::RangeNode<struct RakNet::uint24_t>,&int __cdecl
// DataStructures::RangeNodeComp<struct RakNet::uint24_t>(struct RakNet::uint24_t const &,struct
// DataStructures::RangeNode<struct RakNet::uint24_t> const &)>::~OrderedList<struct
// RakNet::uint24_t,struct DataStructures::RangeNode<struct RakNet::uint24_t>,&int __cdecl
// DataStructures::RangeNodeComp<struct RakNet::uint24_t>(struct RakNet::uint24_t const &,struct
// DataStructures::RangeNode<struct RakNet::uint24_t> const &)>(void)

void __thiscall DataStructures::OrderedList<>::~OrderedList<>(OrderedList<> *this)

{
  uint *puVar1;
  void *pvVar2;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b4200;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(this + 8) != 0) {
    pvVar2 = *(void **)this;
    if (pvVar2 != (void *)0x0) {
      puVar1 = (uint *)((int)pvVar2 + -4);
      local_8 = 0;
      _eh_vector_destructor_iterator_(pvVar2,8,*puVar1,RangeNode<>::~RangeNode<>);
      operator_delete__(puVar1,*puVar1 * 8 + 4);
    }
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
  }
  ExceptionList = local_10;
  return;
}


// public: unsigned int __thiscall DataStructures::OrderedList<struct RakNet::uint24_t,struct
// DataStructures::RangeNode<struct RakNet::uint24_t>,&int __cdecl
// DataStructures::RangeNodeComp<struct RakNet::uint24_t>(struct RakNet::uint24_t const &,struct
// DataStructures::RangeNode<struct RakNet::uint24_t> const &)>::GetIndexFromKey(struct
// RakNet::uint24_t const &,bool *,int (__cdecl*)(struct RakNet::uint24_t const &,struct
// DataStructures::RangeNode<struct RakNet::uint24_t> const &))const 

uint __thiscall
DataStructures::OrderedList<>::GetIndexFromKey
          (OrderedList<> *this,uint24_t *param_1,bool *param_2,
          _func_int_uint24_t_ptr_RangeNode<>_ptr *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_8;
  
  iVar2 = *(int *)(this + 4);
  if (iVar2 != 0) {
    uVar6 = 0;
    uVar3 = iVar2 / 2;
    local_8 = iVar2 + -1;
    do {
      uVar1 = *(uint *)(*(int *)this + uVar3 * 8);
      if (param_1->val < uVar1) {
        iVar5 = -1;
      }
      else {
        if (param_1->val == uVar1) {
          *param_2 = true;
          return uVar3;
        }
        iVar5 = 1;
      }
      iVar4 = uVar3 - 1;
      if (-1 < iVar5) {
        iVar4 = local_8;
        uVar6 = uVar3 + 1;
      }
      uVar3 = (int)(iVar4 - uVar6) / 2 + uVar6;
      if (iVar4 < (int)uVar6) {
        *param_2 = false;
        return uVar6;
      }
    } while ((-1 < (int)uVar3) && (local_8 = iVar4, (int)uVar3 < iVar2));
  }
  *param_2 = false;
  return 0;
}


// public: unsigned int __thiscall DataStructures::OrderedList<int,struct
// DataStructures::Map<int,class RakNet::HuffmanEncodingTree *,&int __cdecl
// DataStructures::defaultMapKeyComparison<int>(int const &,int const &)>::MapNode,&public: static
// int __cdecl DataStructures::Map<int,class RakNet::HuffmanEncodingTree *,&int __cdecl
// DataStructures::defaultMapKeyComparison<int>(int const &,int const &)>::NodeComparisonFunc(int
// const &,struct DataStructures::Map<int,class RakNet::HuffmanEncodingTree *,&int __cdecl
// DataStructures::defaultMapKeyComparison<int>(int const &,int const &)>::MapNode const
// &)>::GetIndexFromKey(int const &,bool *,int (__cdecl*)(int const &,struct
// DataStructures::Map<int,class RakNet::HuffmanEncodingTree *,&int __cdecl
// DataStructures::defaultMapKeyComparison<int>(int const &,int const &)>::MapNode const &))const 

uint __thiscall
DataStructures::OrderedList<>::GetIndexFromKey
          (OrderedList<> *this,int *param_1,bool *param_2,_func_int_int_ptr_MapNode_ptr *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_8;
  
  iVar1 = *(int *)(this + 4);
  if (iVar1 != 0) {
    uVar5 = 0;
    uVar2 = iVar1 / 2;
    local_8 = iVar1 + -1;
    do {
      iVar4 = *(int *)(*(int *)this + uVar2 * 8);
      if (*param_1 < iVar4) {
        iVar4 = -1;
      }
      else {
        if (*param_1 == iVar4) {
          *param_2 = true;
          return uVar2;
        }
        iVar4 = 1;
      }
      iVar3 = uVar2 - 1;
      if (-1 < iVar4) {
        iVar3 = local_8;
        uVar5 = uVar2 + 1;
      }
      uVar2 = (int)(iVar3 - uVar5) / 2 + uVar5;
      if (iVar3 < (int)uVar5) {
        *param_2 = false;
        return uVar5;
      }
    } while ((-1 < (int)uVar2) && (local_8 = iVar3, (int)uVar2 < iVar1));
  }
  *param_2 = false;
  return 0;
}


// public: unsigned int __thiscall DataStructures::OrderedList<int,struct
// DataStructures::Map<int,class RakNet::HuffmanEncodingTree *,&int __cdecl
// DataStructures::defaultMapKeyComparison<int>(int const &,int const &)>::MapNode,&public: static
// int __cdecl DataStructures::Map<int,class RakNet::HuffmanEncodingTree *,&int __cdecl
// DataStructures::defaultMapKeyComparison<int>(int const &,int const &)>::NodeComparisonFunc(int
// const &,struct DataStructures::Map<int,class RakNet::HuffmanEncodingTree *,&int __cdecl
// DataStructures::defaultMapKeyComparison<int>(int const &,int const &)>::MapNode const
// &)>::Insert(int const &,struct DataStructures::Map<int,class RakNet::HuffmanEncodingTree *,&int
// __cdecl DataStructures::defaultMapKeyComparison<int>(int const &,int const &)>::MapNode const
// &,bool,char const *,unsigned int,int (__cdecl*)(int const &,struct DataStructures::Map<int,class
// RakNet::HuffmanEncodingTree *,&int __cdecl DataStructures::defaultMapKeyComparison<int>(int const
// &,int const &)>::MapNode const &))

uint __thiscall
DataStructures::OrderedList<>::Insert
          (OrderedList<> *this,int *param_1,MapNode *param_2,bool param_3,char *param_4,uint param_5
          ,_func_int_int_ptr_MapNode_ptr *param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  uint uVar8;
  bool objectExists;
  
  uVar4 = GetIndexFromKey(this,param_1,&objectExists,(_func_int_int_ptr_MapNode_ptr *)this);
  if (objectExists != false) {
    return 0xffffffff;
  }
  uVar8 = *(uint *)(this + 4);
  uVar5 = *(uint *)(this + 8);
  if (uVar4 < uVar8) {
    if (uVar8 != uVar5) {
      pvVar6 = *(void **)this;
      goto LAB_005ae97e;
    }
    if (uVar5 == 0) {
      *(undefined4 *)(this + 8) = 0x10;
      uVar5 = 0x10;
LAB_005ae912:
      pvVar6 = operator_new__(-(uint)((int)((ulonglong)uVar5 * 8 >> 0x20) != 0) |
                              (uint)((ulonglong)uVar5 * 8));
      uVar8 = *(uint *)(this + 4);
    }
    else {
      uVar5 = uVar5 * 2;
      *(uint *)(this + 8) = uVar5;
      if (uVar5 != 0) goto LAB_005ae912;
      pvVar6 = (void *)0x0;
    }
    uVar5 = 0;
    if (uVar8 != 0) {
      do {
        iVar3 = *(int *)this;
        iVar2 = uVar5 * 8;
        uVar5 = uVar5 + 1;
        *(undefined4 *)(iVar2 + (int)pvVar6) = *(undefined4 *)(iVar3 + iVar2);
        *(undefined4 *)(iVar2 + 4 + (int)pvVar6) = *(undefined4 *)(iVar3 + 4 + iVar2);
      } while (uVar5 < *(uint *)(this + 4));
    }
    operator_delete__(*(void **)this);
    uVar8 = *(uint *)(this + 4);
    *(void **)this = pvVar6;
LAB_005ae97e:
    if (uVar8 != uVar4) {
      do {
        puVar1 = (undefined4 *)(*(int *)this + uVar8 * 8);
        uVar8 = uVar8 - 1;
        *puVar1 = puVar1[-2];
        puVar1[1] = puVar1[-1];
      } while (uVar8 != uVar4);
      pvVar6 = *(void **)this;
    }
    *(undefined4 *)((int)pvVar6 + uVar4 * 8) = *(undefined4 *)param_2;
    *(undefined4 *)((int)pvVar6 + uVar4 * 8 + 4) = *(undefined4 *)(param_2 + 4);
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    return uVar4;
  }
  if (uVar8 != uVar5) {
    pvVar6 = *(void **)this;
    goto LAB_005ae8d9;
  }
  if (uVar5 == 0) {
    *(undefined4 *)(this + 8) = 0x10;
    uVar5 = 0x10;
LAB_005ae870:
    pvVar6 = operator_new__(-(uint)((int)((ulonglong)uVar5 * 8 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar5 * 8));
    uVar8 = *(uint *)(this + 4);
  }
  else {
    uVar5 = uVar5 * 2;
    *(uint *)(this + 8) = uVar5;
    if (uVar5 != 0) goto LAB_005ae870;
    pvVar6 = (void *)0x0;
  }
  pvVar7 = *(void **)this;
  if (pvVar7 != (void *)0x0) {
    uVar4 = 0;
    if (uVar8 != 0) {
      do {
        iVar3 = *(int *)this;
        iVar2 = uVar4 * 8;
        uVar4 = uVar4 + 1;
        *(undefined4 *)(iVar2 + (int)pvVar6) = *(undefined4 *)(iVar3 + iVar2);
        *(undefined4 *)(iVar2 + 4 + (int)pvVar6) = *(undefined4 *)(iVar3 + 4 + iVar2);
      } while (uVar4 < *(uint *)(this + 4));
      pvVar7 = *(void **)this;
    }
    operator_delete__(pvVar7);
  }
  *(void **)this = pvVar6;
LAB_005ae8d9:
  puVar1 = (undefined4 *)((int)pvVar6 + *(int *)(this + 4) * 8);
  *puVar1 = *(undefined4 *)param_2;
  puVar1[1] = *(undefined4 *)(param_2 + 4);
  uVar4 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar4 + 1;
  return uVar4;
}
