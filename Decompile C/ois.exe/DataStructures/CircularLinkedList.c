#include "../ois.exe.h"


// public: void __thiscall DataStructures::CircularLinkedList<struct HuffmanEncodingTreeNode
// *>::Insert(struct HuffmanEncodingTreeNode * const &)

void __thiscall
DataStructures::CircularLinkedList<>::Insert
          (CircularLinkedList<> *this,HuffmanEncodingTreeNode **param_1)

{
  uint uVar1;
  node *pnVar2;
  
  uVar1 = this->list_size;
  pnVar2 = operator_new(0xc);
  if (uVar1 == 0) {
    this->root = pnVar2;
    pnVar2->item = *param_1;
    this->root->next = this->root;
    this->root->previous = this->root;
    this->list_size = 1;
    this->position = this->root;
    return;
  }
  if (uVar1 == 1) {
    this->position = pnVar2;
    this->root->next = pnVar2;
    this->root->previous = this->position;
    this->position->previous = this->root;
    this->position->next = this->root;
    this->position->item = *param_1;
    this->root = this->position;
    this->list_size = 2;
    return;
  }
  pnVar2->item = *param_1;
  this->position->previous->next = pnVar2;
  pnVar2->previous = this->position->previous;
  this->position->previous = pnVar2;
  pnVar2->next = this->position;
  if (this->position == this->root) {
    this->root = pnVar2;
    this->position = pnVar2;
  }
  this->list_size = this->list_size + 1;
  return;
}


// public: void __thiscall DataStructures::CircularLinkedList<struct HuffmanEncodingTreeNode
// *>::Clear(void)

void __thiscall DataStructures::CircularLinkedList<>::Clear(CircularLinkedList<> *this)

{
  node *pnVar1;
  node *pnVar2;
  
  if (this->list_size != 0) {
    pnVar2 = this->root;
    if (this->list_size == 1) {
      operator_delete(this->root,(nothrow_t *)0xc);
    }
    else {
      do {
        pnVar1 = pnVar2->next;
        operator_delete(pnVar2,(nothrow_t *)0xc);
        pnVar2 = pnVar1;
      } while (pnVar1 != this->root);
    }
    this->list_size = 0;
    this->root = (node *)0x0;
    this->position = (node *)0x0;
  }
  return;
}
