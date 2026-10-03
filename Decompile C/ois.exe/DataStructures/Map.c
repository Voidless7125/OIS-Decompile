#include "../ois.exe.h"


// WARNING: Removing unreachable block (ram,0x005ae752)
// public: __thiscall DataStructures::Map<int,class RakNet::HuffmanEncodingTree *,&int __cdecl
// DataStructures::defaultMapKeyComparison<int>(int const &,int const &)>::~Map<int,class
// RakNet::HuffmanEncodingTree *,&int __cdecl DataStructures::defaultMapKeyComparison<int>(int const
// &,int const &)>(void)

void __thiscall DataStructures::Map<>::~Map<>(Map<> *this)

{
  this[0x14] = (Map<>)0x0;
  if (*(int *)(this + 8) != 0) {
    operator_delete__(*(void **)this);
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}
