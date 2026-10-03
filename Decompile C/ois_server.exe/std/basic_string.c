#include "../ois_server.exe.h"


// Library Function - Single Match
//  public: __thiscall std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >(char const * const)
// 
// Library: Visual Studio 2019 Release

basic_string<> * __thiscall std::basic_string<>::basic_string<>(basic_string<> *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0xf;
  *this = (basic_string<>)0x0;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402690(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return this;
}


// Library Function - Single Match
//  public: __thiscall std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > &&)
// 
// Library: Visual Studio 2019 Release

basic_string<> * __thiscall
std::basic_string<>::basic_string<>(basic_string<> *this,basic_string<> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar3;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (basic_string<>)0x0;
  return this;
}


// Library Function - Single Match
//  public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > >
// __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >::end(void)
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __thiscall std::basic_string<>::end(basic_string<> *this)

{
  basic_string<> *pbVar1;
  undefined4 *in_stack_00000004;
  
  pbVar1 = this;
  if (0xf < *(uint *)(this + 0x14)) {
    pbVar1 = *(basic_string<> **)this;
  }
  *in_stack_00000004 = pbVar1 + *(int *)(this + 0x10);
  return;
}


// Library Function - Single Match
//  public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// & __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >::operator=(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const &)
// 
// Library: Visual Studio 2019 Release

basic_string<> * __thiscall
std::basic_string<>::operator=(basic_string<> *this,basic_string<> *param_1)

{
  basic_string<> *pbVar1;
  
  if (this != (basic_string<> *)param_1) {
    pbVar1 = param_1;
    if (0xf < *(uint *)(param_1 + 0x14)) {
      pbVar1 = *(basic_string<> **)param_1;
    }
    FUN_00402690(this,pbVar1,*(uint *)(param_1 + 0x10));
  }
  return (basic_string<> *)this;
}
