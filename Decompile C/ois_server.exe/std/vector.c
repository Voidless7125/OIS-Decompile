#include "../ois_server.exe.h"


// Library Function - Single Match
//  public: class std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class fuzzer::fuzzer_allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > & __thiscall std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// fuzzer::fuzzer_allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >::operator=(class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class fuzzer::fuzzer_allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > const &)
// 
// Library: Visual Studio 2019 Release

vector<> * __thiscall std::vector<>::operator=(vector<> *this,vector<> *param_1)

{
  if (this != (vector<> *)param_1) {
    FUN_00519580(this,*(undefined4 **)param_1,*(undefined4 **)(param_1 + 4));
  }
  return (vector<> *)this;
}
