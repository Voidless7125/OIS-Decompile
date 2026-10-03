#include "../ois.exe.h"


// public: __thiscall std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > >::~pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > >(void)

void __thiscall std::pair<>::~pair<>(pair<> *this)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  uVar1 = *(uint *)(this + 0x2c);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x18);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_00419ec7;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0xf;
  this[0x18] = (pair<>)0x0;
  uVar1 = *(uint *)(this + 0x14);
  if (0xf < uVar1) {
    pvVar2 = *(void **)this;
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) {
LAB_00419ec7:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0xf;
  *this = (pair<>)0x0;
  return;
}


// public: __thiscall std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >
// >::~pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,class std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > >(void)

void __thiscall std::pair<>::~pair<>(pair<> *this)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  vector<>::_Tidy((vector<> *)(this + 0x18));
  uVar1 = *(uint *)(this + 0x14);
  if (0xf < uVar1) {
    pvVar2 = *(void **)this;
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0xf;
  *this = (pair<>)0x0;
  return;
}
