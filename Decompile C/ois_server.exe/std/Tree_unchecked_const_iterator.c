#include "../ois_server.exe.h"


// Library Function - Single Match
//  public: class std::_Tree_unchecked_const_iterator<class std::_Tree_val<struct
// std::_Tree_simple_types<unsigned int> >,struct std::_Iterator_base0> & __thiscall
// std::_Tree_unchecked_const_iterator<class std::_Tree_val<struct std::_Tree_simple_types<unsigned
// int> >,struct std::_Iterator_base0>::operator++(void)
// 
// Library: Visual Studio 2019 Release

_Tree_unchecked_const_iterator<> * __thiscall
std::_Tree_unchecked_const_iterator<>::operator++(_Tree_unchecked_const_iterator<> *this)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  iVar2 = *(int *)this;
  piVar3 = *(int **)(iVar2 + 8);
  if (*(char *)((int)piVar3 + 0xd) != '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 4) + 0xd);
    iVar5 = *(int *)(iVar2 + 4);
    while ((cVar1 == '\0' && (iVar2 == *(int *)(iVar5 + 8)))) {
      *(int *)this = iVar5;
      cVar1 = *(char *)(*(int *)(iVar5 + 4) + 0xd);
      iVar2 = iVar5;
      iVar5 = *(int *)(iVar5 + 4);
    }
    *(int *)this = iVar5;
    return (_Tree_unchecked_const_iterator<> *)this;
  }
  cVar1 = *(char *)(*piVar3 + 0xd);
  piVar4 = (int *)*piVar3;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar4 + 0xd);
    piVar3 = piVar4;
    piVar4 = (int *)*piVar4;
  }
  *(int **)this = piVar3;
  return (_Tree_unchecked_const_iterator<> *)this;
}
