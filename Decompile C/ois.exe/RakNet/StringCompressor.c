#include "../ois.exe.h"


// public: static void __cdecl RakNet::StringCompressor::AddReference(void)

void __cdecl RakNet::StringCompressor::AddReference(void)

{
  OrderedList<> *this;
  HuffmanEncodingTree *this_00;
  uint uVar1;
  _func_int_int_ptr_MapNode_ptr *extraout_ECX;
  undefined1 uVar2;
  HuffmanEncodingTree **ppHVar3;
  bool *pbVar4;
  uint *puVar5;
  _func_int_int_ptr_MapNode_ptr *p_Var6;
  undefined4 local_34;
  HuffmanEncodingTree *local_30;
  OrderedList<> *local_2c;
  HuffmanEncodingTree *local_28;
  bool local_21;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &DAT_005cdc27;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  referenceCount = referenceCount + 1;
  if (referenceCount == 1) {
    this = operator_new(0x18);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    this[0x14] = (OrderedList<>)0x0;
    local_14 = 1;
    local_2c = this;
    this_00 = operator_new(0x804);
    puVar5 = (uint *)0x804;
    local_28 = this_00;
    memset(this_00,0,0x804);
    this_00->root = (HuffmanEncodingTreeNode *)0x0;
    HuffmanEncodingTree::GenerateFromFrequencyTable(this_00,puVar5);
    pbVar4 = &local_21;
    local_28 = (HuffmanEncodingTree *)0x0;
    ppHVar3 = &local_28;
    uVar2 = 0xd2;
    p_Var6 = extraout_ECX;
    uVar1 = DataStructures::OrderedList<>::GetIndexFromKey(this,(int *)ppHVar3,pbVar4,extraout_ECX);
    if (local_21 == false) {
      local_34 = 0;
      local_30 = this_00;
      DataStructures::OrderedList<>::Insert
                (this,(int *)&local_28,(MapNode *)&local_34,(bool)uVar2,(char *)ppHVar3,(uint)pbVar4
                 ,p_Var6);
      instance = (StringCompressor *)this;
    }
    else {
      *(HuffmanEncodingTree **)(*(int *)this + 4 + uVar1 * 8) = this_00;
      instance = (StringCompressor *)this;
    }
  }
  ExceptionList = local_1c;
  return;
}


// WARNING: Removing unreachable block (ram,0x005ae6d7)
// public: static void __cdecl RakNet::StringCompressor::RemoveReference(void)

void __cdecl RakNet::StringCompressor::RemoveReference(void)

{
  HuffmanEncodingTree *this;
  StringCompressor *pSVar1;
  uint uVar2;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pSVar1 = instance;
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b3cd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((0 < referenceCount) && (referenceCount = referenceCount + -1, referenceCount == 0)) {
    if (instance != (StringCompressor *)0x0) {
      uVar2 = 0;
      if ((instance->huffmanEncodingTrees).mapNodeList.orderedList.list_size != 0) {
        do {
          this = (pSVar1->huffmanEncodingTrees).mapNodeList.orderedList.listArray[uVar2].mapNodeData
          ;
          if (this != (HuffmanEncodingTree *)0x0) {
            local_8 = 0;
            HuffmanEncodingTree::FreeMemory(this);
            local_8 = 0xffffffff;
            operator_delete(this,(nothrow_t *)0x804);
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < (pSVar1->huffmanEncodingTrees).mapNodeList.orderedList.list_size);
      }
      (pSVar1->huffmanEncodingTrees).lastSearchIndexValid = false;
      if ((pSVar1->huffmanEncodingTrees).mapNodeList.orderedList.allocation_size != 0) {
        operator_delete__((pSVar1->huffmanEncodingTrees).mapNodeList.orderedList.listArray);
        (pSVar1->huffmanEncodingTrees).mapNodeList.orderedList.allocation_size = 0;
        (pSVar1->huffmanEncodingTrees).mapNodeList.orderedList.listArray = (MapNode *)0x0;
        (pSVar1->huffmanEncodingTrees).mapNodeList.orderedList.list_size = 0;
      }
      operator_delete(pSVar1,(nothrow_t *)0x18);
    }
    instance = (StringCompressor *)0x0;
  }
  ExceptionList = local_10;
  return;
}
