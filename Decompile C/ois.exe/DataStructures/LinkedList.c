#include "../ois.exe.h"


// public: __thiscall DataStructures::LinkedList<struct HuffmanEncodingTreeNode
// *>::~LinkedList<struct HuffmanEncodingTreeNode *>(void)

void __thiscall DataStructures::LinkedList<>::~LinkedList<>(LinkedList<> *this)

{
  CircularLinkedList<>::Clear((CircularLinkedList<> *)this);
  CircularLinkedList<>::Clear((CircularLinkedList<> *)this);
  return;
}
