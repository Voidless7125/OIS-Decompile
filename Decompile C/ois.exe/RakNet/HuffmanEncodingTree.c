#include "../ois.exe.h"


// public: void __thiscall RakNet::HuffmanEncodingTree::FreeMemory(void)

void __thiscall RakNet::HuffmanEncodingTree::FreeMemory(HuffmanEncodingTree *this)

{
  undefined1 *puVar1;
  int iVar2;
  HuffmanEncodingTreeNode **ppHVar3;
  CharacterEncoding *pCVar4;
  HuffmanEncodingTreeNode *pHVar5;
  HuffmanEncodingTreeNode *in_stack_ffffffb4;
  uint in_stack_ffffffb8;
  undefined1 auStack_34 [12];
  Queue<> nodeQueue;
  
  nodeQueue.tail = (uint)&stack0xfffffffc;
  nodeQueue.allocation_size = (uint)ExceptionList;
  nodeQueue.head = ___security_cookie ^ (uint)&stack0xfffffff0;
  ExceptionList = &nodeQueue.allocation_size;
  puVar1 = &stack0xfffffffc;
  if (this->root != (HuffmanEncodingTreeNode *)0x0) {
    nodeQueue.array = (HuffmanEncodingTreeNode **)0x0;
    auStack_34._0_4_ = (HuffmanEncodingTreeNode **)0x0;
    auStack_34._4_4_ = (HuffmanEncodingTreeNode **)0x0;
    auStack_34._8_4_ = (HuffmanEncodingTreeNode **)0x0;
    DataStructures::Queue<>::Push
              ((Queue<> *)auStack_34,&this->root,(char *)in_stack_ffffffb4,in_stack_ffffffb8);
    ppHVar3 = (HuffmanEncodingTreeNode **)auStack_34._4_4_;
    while( true ) {
      if ((uint)auStack_34._8_4_ < ppHVar3) {
        iVar2 = (auStack_34._8_4_ - (int)ppHVar3) + (int)nodeQueue.array;
      }
      else {
        iVar2 = auStack_34._8_4_ - (int)ppHVar3;
      }
      if (iVar2 == 0) break;
      auStack_34._4_4_ = (int)ppHVar3 + 1;
      if ((HuffmanEncodingTreeNode **)auStack_34._4_4_ == nodeQueue.array) {
        auStack_34._4_4_ = (HuffmanEncodingTreeNode **)0x0;
        pHVar5 = *(HuffmanEncodingTreeNode **)(auStack_34._0_4_ + ((int)nodeQueue.array + -1) * 4);
      }
      else if ((HuffmanEncodingTreeNode **)auStack_34._4_4_ == (HuffmanEncodingTreeNode **)0x0) {
        pHVar5 = *(HuffmanEncodingTreeNode **)(auStack_34._0_4_ + ((int)nodeQueue.array + -1) * 4);
      }
      else {
        pHVar5 = *(HuffmanEncodingTreeNode **)(auStack_34._0_4_ + ppHVar3 * 4);
      }
      if (pHVar5->left != (HuffmanEncodingTreeNode *)0x0) {
        DataStructures::Queue<>::Push
                  ((Queue<> *)auStack_34,&pHVar5->left,(char *)in_stack_ffffffb4,in_stack_ffffffb8);
      }
      if (pHVar5->right != (HuffmanEncodingTreeNode *)0x0) {
        DataStructures::Queue<>::Push
                  ((Queue<> *)auStack_34,&pHVar5->right,(char *)in_stack_ffffffb4,in_stack_ffffffb8)
        ;
      }
      ppHVar3 = (HuffmanEncodingTreeNode **)auStack_34._4_4_;
      in_stack_ffffffb8 = 0x14;
      operator_delete(pHVar5,(nothrow_t *)0x14);
      in_stack_ffffffb4 = pHVar5;
    }
    iVar2 = 0x100;
    pCVar4 = this->encodingTable;
    do {
      free(pCVar4->encoding);
      pCVar4 = pCVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    this->root = (HuffmanEncodingTreeNode *)0x0;
    puVar1 = (undefined1 *)nodeQueue.tail;
    if (nodeQueue.array != (HuffmanEncodingTreeNode **)0x0) {
      operator_delete__((void *)auStack_34._0_4_);
      puVar1 = (undefined1 *)nodeQueue.tail;
    }
  }
  nodeQueue.tail = (uint)puVar1;
  ExceptionList = (void *)nodeQueue.allocation_size;
  __security_check_cookie(nodeQueue.head ^ (uint)&stack0xfffffff0);
  return;
}


// public: void __thiscall RakNet::HuffmanEncodingTree::GenerateFromFrequencyTable(unsigned int *
// const)

void __thiscall
RakNet::HuffmanEncodingTree::GenerateFromFrequencyTable(HuffmanEncodingTree *this,uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  node *pnVar3;
  HuffmanEncodingTreeNode *pHVar4;
  uint uVar5;
  uchar *puVar6;
  uint uVar7;
  node *pnVar8;
  int iVar9;
  node *pnVar10;
  HuffmanEncodingTree *pHVar11;
  HuffmanEncodingTreeNode *pHVar12;
  HuffmanEncodingTreeNode *pHVar13;
  char *pcVar14;
  undefined4 auStack_650 [256];
  char local_250 [260];
  HuffmanEncodingTree *local_14c;
  HuffmanEncodingTreeNode *local_148;
  HuffmanEncodingTreeNode *local_144;
  BitStream local_140;
  CircularLinkedList<> local_24;
  uchar *local_18;
  uchar *local_10;
  undefined *puStack_c;
  uchar *local_8;
  
  puStack_c = &DAT_005cdc88;
  local_10 = ExceptionList;
  local_18 = (uchar *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_24.position = (node *)0x0;
  local_24.list_size = 0;
  local_24.root = (node *)0x0;
  local_8 = (uchar *)0x0;
  local_14c = this;
  FreeMemory(this);
  iVar9 = 0;
  do {
    pHVar4 = operator_new(0x14);
    pHVar4->left = (HuffmanEncodingTreeNode *)0x0;
    pHVar4->right = (HuffmanEncodingTreeNode *)0x0;
    pHVar4->value = (uchar)iVar9;
    puVar2 = (&englishCharacterFrequencies)[iVar9];
    pHVar4->weight = (uint)puVar2;
    if (puVar2 == (uint *)0x0) {
      pHVar4->weight = 1;
    }
    auStack_650[iVar9] = pHVar4;
    InsertNodeIntoSortedList((HuffmanEncodingTree *)&local_24,pHVar4,(LinkedList<> *)&local_24);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x100);
  while( true ) {
    uVar5 = local_24.list_size;
    if (local_24.root != (node *)0x0) {
      local_24.position = local_24.root;
    }
    local_144 = (local_24.position)->item;
    pHVar4 = (HuffmanEncodingTreeNode *)0x0;
    pnVar8 = local_24.position;
    pnVar10 = local_24.root;
    if ((HuffmanEncodingTreeNode *)local_24.list_size != (HuffmanEncodingTreeNode *)0x0) {
      if ((HuffmanEncodingTreeNode *)local_24.list_size == (HuffmanEncodingTreeNode *)&DAT_00000001)
      {
        operator_delete(local_24.root,(nothrow_t *)0xc);
        pnVar10 = (node *)0x0;
        pnVar8 = (node *)0x0;
        local_24.list_size = 0;
        local_24.root = (node *)0x0;
        pHVar4 = (HuffmanEncodingTreeNode *)0x0;
      }
      else {
        (local_24.position)->previous->next = (local_24.position)->next;
        (local_24.position)->next->previous = (local_24.position)->previous;
        pnVar8 = (local_24.position)->next;
        if (local_24.position == local_24.root) {
          pnVar10 = pnVar8;
        }
        local_24.root = pnVar10;
        operator_delete(local_24.position,(nothrow_t *)0xc);
        pHVar4 = (HuffmanEncodingTreeNode *)
                 ((int)&((HuffmanEncodingTreeNode *)(uVar5 + -0x14))->parent + 3);
      }
      local_24.list_size = (uint)pHVar4;
    }
    pHVar12 = pnVar8->item;
    pHVar13 = (HuffmanEncodingTreeNode *)0x0;
    local_148 = pHVar12;
    local_24.position = pnVar8;
    if (pHVar4 != (HuffmanEncodingTreeNode *)0x0) {
      if (pHVar4 == (HuffmanEncodingTreeNode *)&DAT_00000001) {
        operator_delete(pnVar10,(nothrow_t *)0xc);
        local_24.position = (node *)0x0;
        local_24.list_size = 0;
        local_24.root = (node *)0x0;
        pHVar13 = (HuffmanEncodingTreeNode *)0x0;
      }
      else {
        pnVar8->previous->next = pnVar8->next;
        pnVar8->next->previous = pnVar8->previous;
        pnVar3 = pnVar8->next;
        if (pnVar8 == pnVar10) {
          pnVar10 = pnVar3;
        }
        local_24.root = pnVar10;
        operator_delete(pnVar8,(nothrow_t *)0xc);
        pHVar13 = (HuffmanEncodingTreeNode *)((int)&pHVar4[-1].parent + 3);
        pHVar12 = local_148;
        local_24.position = pnVar3;
      }
      local_24.list_size = (uint)pHVar13;
    }
    pHVar4 = operator_new(0x14);
    pHVar11 = local_14c;
    pHVar4->left = local_144;
    pHVar4->right = pHVar12;
    pHVar4->weight = pHVar12->weight + local_144->weight;
    local_144->parent = pHVar4;
    pHVar12->parent = pHVar4;
    if (pHVar13 == (HuffmanEncodingTreeNode *)0x0) break;
    InsertNodeIntoSortedList((HuffmanEncodingTree *)&local_24,pHVar4,(LinkedList<> *)&local_24);
  }
  local_14c->root = pHVar4;
  pHVar4->parent = (HuffmanEncodingTreeNode *)0x0;
  memset(local_140.stackData,0,0x103);
  local_140.numberOfBitsAllocated = 0x800;
  local_140.data = local_140.stackData;
  local_140.numberOfBitsUsed = 0;
  local_140.readOffset = 0;
  local_140.copyData = true;
  local_144 = (HuffmanEncodingTreeNode *)0x0;
  local_148 = (HuffmanEncodingTreeNode *)&pHVar11->encodingTable[0].bitLength;
  do {
    local_140.readOffset = 0;
    local_140.numberOfBitsUsed = 0;
    uVar7 = 0;
    uVar5 = 0;
    pHVar4 = (HuffmanEncodingTreeNode *)auStack_650[(int)local_144];
    do {
      pHVar12 = pHVar4->parent;
      if (pHVar12->left == pHVar4) {
        if (0xff < uVar5) {
                    // WARNING: Subroutine does not return
          ___report_rangecheckfailure();
        }
        local_250[uVar5] = '\0';
      }
      else {
        local_250[uVar5] = '\x01';
      }
      uVar1 = uVar5 + 1;
      uVar5 = uVar1 & 0xffff;
      pHVar4 = pHVar12;
    } while (pHVar12 != pHVar11->root);
    if ((short)uVar1 != 0) {
      pcVar14 = local_250 + uVar5;
      do {
        uVar5 = uVar5 + 0xffff;
        pcVar14 = pcVar14 + -1;
        BitStream::AddBitsAndReallocate(&local_140,1);
        if (*pcVar14 == '\0') {
          if ((local_140.numberOfBitsUsed & 7) == 0) {
            local_140.data[local_140.numberOfBitsUsed >> 3] = '\0';
          }
        }
        else if ((local_140.numberOfBitsUsed & 7) == 0) {
          local_140.data[local_140.numberOfBitsUsed >> 3] = 0x80;
        }
        else {
          local_140.data[local_140.numberOfBitsUsed >> 3] =
               local_140.data[local_140.numberOfBitsUsed >> 3] |
               (byte)(0x80 >> (sbyte)(local_140.numberOfBitsUsed & 7));
        }
        uVar7 = local_140.numberOfBitsUsed + 1;
        pHVar11 = local_14c;
        local_140.numberOfBitsUsed = uVar7;
      } while ((short)uVar5 != 0);
    }
    puVar6 = malloc(uVar7 + 7 >> 3);
    pHVar4 = local_148;
    ((CharacterEncoding *)((int)local_148 + -4))->encoding = puVar6;
    memcpy(puVar6,local_140.data,local_140.numberOfBitsUsed + 7 >> 3);
    local_144 = (HuffmanEncodingTreeNode *)((int)local_144 + 1);
    *(ushort *)pHVar4 = (ushort)(byte)local_140.numberOfBitsUsed;
    local_140.numberOfBitsUsed = 0;
    local_140.readOffset = 0;
    local_148 = (HuffmanEncodingTreeNode *)((int)pHVar4 + 8);
  } while ((int)local_144 < 0x100);
  if ((local_140.copyData != false) && (0x800 < local_140.numberOfBitsAllocated)) {
    free(local_140.data);
  }
  DataStructures::CircularLinkedList<>::Clear(&local_24);
  DataStructures::CircularLinkedList<>::Clear(&local_24);
  ExceptionList = local_10;
  __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// private: void __thiscall RakNet::HuffmanEncodingTree::InsertNodeIntoSortedList(struct
// HuffmanEncodingTreeNode *,class DataStructures::LinkedList<struct HuffmanEncodingTreeNode *>
// *)const 

void __thiscall
RakNet::HuffmanEncodingTree::InsertNodeIntoSortedList
          (HuffmanEncodingTree *this,HuffmanEncodingTreeNode *param_1,LinkedList<> *param_2)

{
  int iVar1;
  LinkedList<> *pLVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  pLVar2 = param_2;
  iVar1 = *(int *)param_2;
  if (iVar1 != 0) {
    piVar4 = *(int **)&param_2->field_0x4;
    if (piVar4 == (int *)0x0) {
      piVar4 = *(int **)&param_2->field_0x8;
    }
    else {
      *(int **)&param_2->field_0x8 = piVar4;
    }
    iVar5 = 0;
    iVar6 = *(int *)&param_2->field_0x4;
    if (*(uint *)(*piVar4 + 4) < param_1->weight) {
      do {
        if ((iVar1 != 0) && (piVar4[2] != iVar6)) {
          *(int *)&param_2->field_0x8 = piVar4[2];
        }
        iVar5 = iVar5 + 1;
        if (iVar5 == iVar1) {
          if (iVar6 != 0) {
            *(undefined4 *)&param_2->field_0x8 = *(undefined4 *)(iVar6 + 4);
          }
          puVar3 = operator_new(0xc);
          if (iVar1 == 0) {
            *(undefined4 **)&pLVar2->field_0x4 = puVar3;
            *puVar3 = param_1;
            *(int *)(*(int *)&pLVar2->field_0x4 + 8) = *(int *)&pLVar2->field_0x4;
            *(int *)(*(int *)&pLVar2->field_0x4 + 4) = *(int *)&pLVar2->field_0x4;
            *(undefined4 *)pLVar2 = 1;
            *(undefined4 *)&pLVar2->field_0x8 = *(undefined4 *)&pLVar2->field_0x4;
            return;
          }
          if (iVar1 == 1) {
            *(undefined4 **)&pLVar2->field_0x8 = puVar3;
            *(undefined4 **)(*(int *)&pLVar2->field_0x4 + 8) = puVar3;
            *(undefined4 *)(*(int *)&pLVar2->field_0x4 + 4) = *(undefined4 *)&pLVar2->field_0x8;
            *(undefined4 *)(*(int *)&pLVar2->field_0x8 + 4) = *(undefined4 *)&pLVar2->field_0x4;
            *(undefined4 *)(*(int *)&pLVar2->field_0x8 + 8) = *(undefined4 *)&pLVar2->field_0x4;
            **(undefined4 **)&pLVar2->field_0x8 = param_1;
            *(undefined4 *)pLVar2 = 2;
            *(undefined4 *)&pLVar2->field_0x8 = *(undefined4 *)&pLVar2->field_0x4;
            return;
          }
          *puVar3 = param_1;
          puVar3[1] = *(undefined4 *)&pLVar2->field_0x8;
          puVar3[2] = *(undefined4 *)(*(int *)&pLVar2->field_0x8 + 8);
          *(undefined4 **)(*(int *)(*(int *)&pLVar2->field_0x8 + 8) + 4) = puVar3;
          *(undefined4 **)(*(int *)&pLVar2->field_0x8 + 8) = puVar3;
          *(int *)pLVar2 = *(int *)pLVar2 + 1;
          return;
        }
        piVar4 = *(int **)&param_2->field_0x8;
        iVar6 = *(int *)&param_2->field_0x4;
      } while (*(uint *)(*piVar4 + 4) < param_1->weight);
    }
  }
  DataStructures::CircularLinkedList<>::Insert((CircularLinkedList<> *)param_2,&param_1);
  return;
}
