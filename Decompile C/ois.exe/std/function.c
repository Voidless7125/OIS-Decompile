#include "../ois.exe.h"


// public: __thiscall std::function<bool __cdecl(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >)>::~function<bool __cdecl(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)>(void)

void __thiscall std::function<>::~function<>(function<> *this)

{
  function<> *pfVar1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b27f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pfVar1 = *(function<> **)(this + 0x24);
  if (pfVar1 != (function<> *)0x0) {
    (**(code **)(*(int *)pfVar1 + 0x10))(pfVar1 != this,___security_cookie ^ (uint)&stack0xfffffffc)
    ;
    *(undefined4 *)(this + 0x24) = 0;
  }
  ExceptionList = local_10;
  return;
}


// public: __thiscall std::function<bool __cdecl(class Ship *,double,double,double)>::operator
// bool(void)const 

bool __thiscall std::function<>::operator_bool(function<> *this)

{
  return *(int *)(this + 0x24) != 0;
}


// public: class std::function<double __cdecl(class Ship *,int)> & __thiscall std::function<double
// __cdecl(class Ship *,int)>::operator=(class std::function<double __cdecl(class Ship *,int)> &&)

function<> * __thiscall std::function<>::operator=(function<> *this,function<> *param_1)

{
  function<> *pfVar1;
  function<> *pfVar2;
  undefined4 uVar3;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b29f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (this != (function<> *)param_1) {
    local_8 = 0;
    pfVar1 = *(function<> **)(this + 0x24);
    if (pfVar1 != (function<> *)0x0) {
      (**(code **)(*(int *)pfVar1 + 0x10))
                (pfVar1 != this,___security_cookie ^ (uint)&stack0xfffffffc);
      *(undefined4 *)(this + 0x24) = 0;
    }
    local_8 = 0xffffffff;
    pfVar2 = *(function<> **)(param_1 + 0x24);
    if (pfVar2 != (function<> *)0x0) {
      if (pfVar2 == param_1) {
        uVar3 = (**(code **)(*(int *)pfVar2 + 4))(this);
        *(undefined4 *)(this + 0x24) = uVar3;
        local_8 = 1;
        pfVar2 = *(function<> **)(param_1 + 0x24);
        if (pfVar2 == (function<> *)0x0) {
          ExceptionList = local_10;
          return (function<> *)this;
        }
        (**(code **)(*(int *)pfVar2 + 0x10))(pfVar2 != param_1);
      }
      else {
        *(function<> **)(this + 0x24) = pfVar2;
      }
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  ExceptionList = local_10;
  return (function<> *)this;
}


// public: __thiscall std::function<bool __cdecl(class Ship *,double,double,double)>::function<bool
// __cdecl(class Ship *,double,double,double)><class std::function<bool __cdecl(class Ship
// *,int,int,int)>,void>(class std::function<bool __cdecl(class Ship *,int,int,int)>)

function<> * __thiscall std::function<>::function<><>(function<> *this)

{
  function<> *pfVar1;
  _Func_impl_no_alloc<> *p_Var2;
  int *in_stack_00000028;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a50;
  local_10 = ExceptionList;
  pfVar1 = (function<> *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  *(undefined4 *)(this + 0x24) = 0;
  local_8 = 1;
  if (in_stack_00000028 != (int *)0x0) {
    p_Var2 = _Global_new<>(pfVar1);
    *(_Func_impl_no_alloc<> **)(this + 0x24) = p_Var2;
  }
  local_8 = 2;
  if (in_stack_00000028 != (int *)0x0) {
    (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
  }
  ExceptionList = local_10;
  return this;
}


// public: class std::function<void __cdecl(void)> & __thiscall std::function<void
// __cdecl(void)>::operator=(class std::function<void __cdecl(void)> const &)

function<> * __thiscall std::function<>::operator=(function<> *this,function<> *param_1)

{
  function<> *pfVar1;
  _Func_class<> local_3c [36];
  _Func_class<> *local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b3ec8;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = (_Func_class<> *)0x0;
  local_8 = 0;
  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    local_18 = (_Func_class<> *)(**(code **)**(undefined4 **)(param_1 + 0x24))(local_3c,local_14);
  }
  _Func_class<>::_Swap(local_3c,(_Func_class<> *)this);
  local_8 = 1;
  if (local_18 != (_Func_class<> *)0x0) {
    (**(code **)(*(int *)local_18 + 0x10))(local_18 != local_3c);
  }
  ExceptionList = local_10;
  pfVar1 = (function<> *)__security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return pfVar1;
}


// public: __thiscall std::function<bool __cdecl(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >)>::function<bool __cdecl(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)>(std::nullptr_t)

function<> * __thiscall std::function<>::function<>(function<> *this)

{
  *(undefined4 *)(this + 0x24) = 0;
  return this;
}


// public: class std::function<bool __cdecl(class Ship *,double,double,double)> & __thiscall
// std::function<bool __cdecl(class Ship *,double,double,double)>::operator=<class
// std::function<bool __cdecl(class Ship *,int,int,int)>,void>(class std::function<bool
// __cdecl(class Ship *,int,int,int)> &&)

function<> * __thiscall std::function<>::operator=<>(function<> *this,function<> *param_1)

{
  function<> *pfVar1;
  function<> *pfVar2;
  function<> *pfVar3;
  function<> local_6c [36];
  function<> *local_48;
  function<> *local_40;
  _Func_class<> local_3c [36];
  _Func_impl_no_alloc<> *local_18;
  function<> *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b41d8;
  local_10 = ExceptionList;
  pfVar2 = (function<> *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_40 = local_6c;
  local_48 = (function<> *)0x0;
  local_8 = 0;
  pfVar1 = *(function<> **)(param_1 + 0x24);
  local_14 = pfVar2;
  if (pfVar1 != (function<> *)0x0) {
    if (pfVar1 == param_1) {
      local_48 = (function<> *)(**(code **)(*(int *)pfVar1 + 4))(local_6c);
      local_8 = CONCAT31(local_8._1_3_,1);
      pfVar1 = *(function<> **)(param_1 + 0x24);
      if (pfVar1 == (function<> *)0x0) goto LAB_00430595;
      (**(code **)(*(int *)pfVar1 + 0x10))(pfVar1 != param_1);
      pfVar1 = local_48;
    }
    local_48 = pfVar1;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
LAB_00430595:
  local_18 = (_Func_impl_no_alloc<> *)0x0;
  local_8 = 3;
  if (local_48 != (function<> *)0x0) {
    local_18 = _Global_new<>(pfVar2);
  }
  local_8 = 4;
  if (local_48 != (function<> *)0x0) {
    (**(code **)(*(int *)local_48 + 0x10))(local_48 != local_6c);
    local_48 = (function<> *)0x0;
  }
  _Func_class<>::_Swap(local_3c,(_Func_class<> *)this);
  local_8 = 5;
  if (local_18 != (_Func_impl_no_alloc<> *)0x0) {
    (**(code **)(*(int *)local_18 + 0x10))(local_18 != (_Func_impl_no_alloc<> *)local_3c);
  }
  ExceptionList = local_10;
  pfVar3 = (function<> *)__security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return pfVar3;
}


// public: __thiscall std::function<bool __cdecl(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >)>::function<bool __cdecl(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)><bool (__cdecl*)(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >),void>(bool
// (__cdecl*)(class Ship *,int,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >))

function<> * __thiscall
std::function<>::function<><>(function<> *this,_func_bool_Ship_ptr_int_basic_string<> *param_1)

{
  *(undefined4 *)(this + 0x24) = 0;
  if (param_1 != (_func_bool_Ship_ptr_int_basic_string<> *)0x0) {
    *(undefined ***)this = _Func_impl_no_alloc<>::vftable;
    *(_func_bool_Ship_ptr_int_basic_string<> **)(this + 4) = param_1;
    *(function<> **)(this + 0x24) = this;
  }
  return this;
}


// public: __thiscall std::function<bool __cdecl(class Ship *,int,int,int)>::function<bool
// __cdecl(class Ship *,int,int,int)><bool (__cdecl*)(class Ship *,int,int,int),void>(bool
// (__cdecl*)(class Ship *,int,int,int))

function<> * __thiscall
std::function<>::function<><>(function<> *this,_func_bool_Ship_ptr_int_int_int *param_1)

{
  *(undefined4 *)(this + 0x24) = 0;
  if (param_1 != (_func_bool_Ship_ptr_int_int_int *)0x0) {
    *(undefined ***)this = _Func_impl_no_alloc<>::vftable;
    *(_func_bool_Ship_ptr_int_int_int **)(this + 4) = param_1;
    *(function<> **)(this + 0x24) = this;
  }
  return this;
}


// public: __thiscall std::function<bool __cdecl(class Ship *,int,int,int)>::function<bool
// __cdecl(class Ship *,int,int,int)><class std::function<bool __cdecl(class Ship
// *,double,double,double)>,void>(class std::function<bool __cdecl(class Ship
// *,double,double,double)>)

function<> * __thiscall std::function<>::function<><>(function<> *this)

{
  function<> *pfVar1;
  _Func_impl_no_alloc<> *p_Var2;
  int *in_stack_00000028;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a50;
  local_10 = ExceptionList;
  pfVar1 = (function<> *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  *(undefined4 *)(this + 0x24) = 0;
  local_8 = 1;
  if (in_stack_00000028 != (int *)0x0) {
    p_Var2 = _Global_new<>(pfVar1);
    *(_Func_impl_no_alloc<> **)(this + 0x24) = p_Var2;
  }
  local_8 = 2;
  if (in_stack_00000028 != (int *)0x0) {
    (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
  }
  ExceptionList = local_10;
  return this;
}


// public: __thiscall std::function<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > __cdecl(class Ship *,int)>::function<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > __cdecl(class Ship *,int)><class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// (__cdecl*)(class Ship *,int),void>(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > (__cdecl*)(class Ship *,int))

function<> * __thiscall
std::function<>::function<><>(function<> *this,_func_basic_string<>_Ship_ptr_int *param_1)

{
  *(undefined4 *)(this + 0x24) = 0;
  if (param_1 != (_func_basic_string<>_Ship_ptr_int *)0x0) {
    *(undefined ***)this = _Func_impl_no_alloc<>::vftable;
    *(_func_basic_string<>_Ship_ptr_int **)(this + 4) = param_1;
    *(function<> **)(this + 0x24) = this;
  }
  return this;
}


// public: class std::function<void __cdecl(class Menu *)> & __thiscall std::function<void
// __cdecl(class Menu *)>::operator=<void (__cdecl&)(class Menu *),void>(void (__cdecl&)(class Menu
// *))

function<> * __thiscall std::function<>::operator=<>(function<> *this,_func_void_Menu_ptr *param_1)

{
  uint uVar1;
  function<> *pfVar2;
  undefined **local_40;
  _func_void_Menu_ptr *local_3c;
  undefined ***local_1c;
  uint local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c5e30;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = (undefined ***)0x0;
  if (param_1 != (_func_void_Menu_ptr *)0x0) {
    local_3c = param_1;
    local_1c = &local_40;
    local_40 = _Func_impl_no_alloc<>::vftable;
  }
  local_18 = uVar1;
  _Func_class<>::_Swap((_Func_class<> *)&local_40,(_Func_class<> *)this);
  local_8 = 0;
  if (local_1c != (undefined ***)0x0) {
    (*(code *)(*local_1c)[4])(local_1c != &local_40,uVar1);
  }
  ExceptionList = local_10;
  pfVar2 = (function<> *)__security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return pfVar2;
}


// public: class std::function<void __cdecl(enum cocos2d::EventKeyboard::KeyCode,class
// cocos2d::Event *)> & __thiscall std::function<void __cdecl(enum
// cocos2d::EventKeyboard::KeyCode,class cocos2d::Event *)>::operator=<class std::_Binder<struct
// std::_Unforced,void (__thiscall PresentationInterface::*)(enum
// cocos2d::EventKeyboard::KeyCode,class cocos2d::Event *),class PresentationInterface *,struct
// std::_Ph<1> const &,struct std::_Ph<2> const &>,void>(class std::_Binder<struct
// std::_Unforced,void (__thiscall PresentationInterface::*)(enum
// cocos2d::EventKeyboard::KeyCode,class cocos2d::Event *),class PresentationInterface *,struct
// std::_Ph<1> const &,struct std::_Ph<2> const &> &&)

function<> * __thiscall std::function<>::operator=<>(function<> *this,_Binder<> *param_1)

{
  uint uVar1;
  function<> *pfVar2;
  undefined **local_3c [2];
  undefined4 local_34;
  undefined4 local_30;
  _Binder<> local_2c;
  _Binder<> local_2b;
  undefined4 local_28;
  _Func_class<> *local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c68a0;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c[0] = _Func_impl_no_alloc<>::vftable;
  local_34 = *(undefined4 *)param_1;
  local_30 = *(undefined4 *)(param_1 + 4);
  local_2c = param_1[8];
  local_2b = param_1[9];
  local_28 = *(undefined4 *)(param_1 + 0xc);
  local_18 = (_Func_class<> *)local_3c;
  local_14 = uVar1;
  _Func_class<>::_Swap(local_18,(_Func_class<> *)this);
  local_8 = 0;
  if (local_18 != (_Func_class<> *)0x0) {
    (**(code **)(*(int *)local_18 + 0x10))(local_18 != (_Func_class<> *)local_3c,uVar1);
  }
  ExceptionList = local_10;
  pfVar2 = (function<> *)__security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return pfVar2;
}


// public: class std::function<void __cdecl(class cocos2d::EventMouse *)> & __thiscall
// std::function<void __cdecl(class cocos2d::EventMouse *)>::operator=<class std::_Binder<struct
// std::_Unforced,void (__thiscall PresentationInterface::*)(class cocos2d::Event *),class
// PresentationInterface *,struct std::_Ph<1> const &>,void>(class std::_Binder<struct
// std::_Unforced,void (__thiscall PresentationInterface::*)(class cocos2d::Event *),class
// PresentationInterface *,struct std::_Ph<1> const &> &&)

function<> * __thiscall std::function<>::operator=<>(function<> *this,_Binder<> *param_1)

{
  uint uVar1;
  function<> *pfVar2;
  undefined **local_3c [2];
  undefined4 local_34;
  undefined4 local_30;
  _Binder<> local_2c;
  undefined4 local_28;
  _Func_class<> *local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c68a0;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c[0] = _Func_impl_no_alloc<>::vftable;
  local_34 = *(undefined4 *)param_1;
  local_30 = *(undefined4 *)(param_1 + 4);
  local_2c = param_1[8];
  local_28 = *(undefined4 *)(param_1 + 0xc);
  local_18 = (_Func_class<> *)local_3c;
  local_14 = uVar1;
  _Func_class<>::_Swap(local_18,(_Func_class<> *)this);
  local_8 = 0;
  if (local_18 != (_Func_class<> *)0x0) {
    (**(code **)(*(int *)local_18 + 0x10))(local_18 != (_Func_class<> *)local_3c,uVar1);
  }
  ExceptionList = local_10;
  pfVar2 = (function<> *)__security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return pfVar2;
}


// public: class std::function<void __cdecl(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)> & __thiscall std::function<void __cdecl(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)>::operator=<class std::_Binder<struct std::_Unforced,void (__thiscall
// Screen_ContractTerminal::*)(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >),class
// Screen_ContractTerminal *,struct std::_Ph<1> const &,struct std::_Ph<2> const &>,void>(class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_ContractTerminal::*)(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_ContractTerminal *,struct std::_Ph<1> const &,struct
// std::_Ph<2> const &> &&)

function<> * __thiscall std::function<>::operator=<>(function<> *this,_Binder<> *param_1)

{
  uint uVar1;
  function<> *pfVar2;
  undefined **local_3c;
  undefined4 local_38;
  _Binder<> local_34;
  _Binder<> local_33;
  undefined4 local_30;
  _Func_class<> *local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c68a0;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = _Func_impl_no_alloc<>::vftable;
  local_38 = *(undefined4 *)param_1;
  local_34 = param_1[4];
  local_33 = param_1[5];
  local_30 = *(undefined4 *)(param_1 + 8);
  local_18 = (_Func_class<> *)&local_3c;
  local_14 = uVar1;
  _Func_class<>::_Swap(local_18,(_Func_class<> *)this);
  local_8 = 0;
  if (local_18 != (_Func_class<> *)0x0) {
    (**(code **)(*(int *)local_18 + 0x10))(local_18 != (_Func_class<> *)&local_3c,uVar1);
  }
  ExceptionList = local_10;
  pfVar2 = (function<> *)__security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return pfVar2;
}


// public: class std::function<void __cdecl(void)> & __thiscall std::function<void
// __cdecl(void)>::operator=<class std::_Binder<struct std::_Unforced,void (__thiscall
// Screen_ContractTerminal::*)(void),class Screen_ContractTerminal *>,void>(class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_ContractTerminal::*)(void),class
// Screen_ContractTerminal *> &&)

function<> * __thiscall std::function<>::operator=<>(function<> *this,_Binder<> *param_1)

{
  uint uVar1;
  function<> *pfVar2;
  undefined **local_3c;
  undefined4 local_38;
  undefined4 local_34;
  _Func_class<> *local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c68a0;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = _Func_impl_no_alloc<>::vftable;
  local_38 = *(undefined4 *)param_1;
  local_34 = *(undefined4 *)(param_1 + 4);
  local_18 = (_Func_class<> *)&local_3c;
  local_14 = uVar1;
  _Func_class<>::_Swap(local_18,(_Func_class<> *)this);
  local_8 = 0;
  if (local_18 != (_Func_class<> *)0x0) {
    (**(code **)(*(int *)local_18 + 0x10))(local_18 != (_Func_class<> *)&local_3c,uVar1);
  }
  ExceptionList = local_10;
  pfVar2 = (function<> *)__security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return pfVar2;
}


// public: class std::function<void __cdecl(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)> & __thiscall std::function<void __cdecl(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)>::operator=<class std::_Binder<struct std::_Unforced,void (__thiscall
// Screen_PC::*)(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >),class
// Screen_PC *,struct std::_Ph<1> const &,struct std::_Ph<2> const &>,void>(class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_PC::*)(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_PC *,struct std::_Ph<1> const &,struct std::_Ph<2> const
// &> &&)

function<> * __thiscall std::function<>::operator=<>(function<> *this,_Binder<> *param_1)

{
  uint uVar1;
  function<> *pfVar2;
  undefined **local_3c;
  undefined4 local_38;
  _Binder<> local_34;
  _Binder<> local_33;
  undefined4 local_30;
  _Func_class<> *local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c68a0;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = _Func_impl_no_alloc<>::vftable;
  local_38 = *(undefined4 *)param_1;
  local_34 = param_1[4];
  local_33 = param_1[5];
  local_30 = *(undefined4 *)(param_1 + 8);
  local_18 = (_Func_class<> *)&local_3c;
  local_14 = uVar1;
  _Func_class<>::_Swap(local_18,(_Func_class<> *)this);
  local_8 = 0;
  if (local_18 != (_Func_class<> *)0x0) {
    (**(code **)(*(int *)local_18 + 0x10))(local_18 != (_Func_class<> *)&local_3c,uVar1);
  }
  ExceptionList = local_10;
  pfVar2 = (function<> *)__security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return pfVar2;
}


// public: class std::function<void __cdecl(void)> & __thiscall std::function<void
// __cdecl(void)>::operator=<class std::_Binder<struct std::_Unforced,void (__thiscall
// Screen_PC::*)(void),class Screen_PC *>,void>(class std::_Binder<struct std::_Unforced,void
// (__thiscall Screen_PC::*)(void),class Screen_PC *> &&)

function<> * __thiscall std::function<>::operator=<>(function<> *this,_Binder<> *param_1)

{
  uint uVar1;
  function<> *pfVar2;
  undefined **local_3c;
  undefined4 local_38;
  undefined4 local_34;
  _Func_class<> *local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c68a0;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = _Func_impl_no_alloc<>::vftable;
  local_38 = *(undefined4 *)param_1;
  local_34 = *(undefined4 *)(param_1 + 4);
  local_18 = (_Func_class<> *)&local_3c;
  local_14 = uVar1;
  _Func_class<>::_Swap(local_18,(_Func_class<> *)this);
  local_8 = 0;
  if (local_18 != (_Func_class<> *)0x0) {
    (**(code **)(*(int *)local_18 + 0x10))(local_18 != (_Func_class<> *)&local_3c,uVar1);
  }
  ExceptionList = local_10;
  pfVar2 = (function<> *)__security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return pfVar2;
}


// public: class std::function<void __cdecl(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)> & __thiscall std::function<void
// __cdecl(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >)>::operator=<class std::_Binder<struct std::_Unforced,void (__thiscall Screen_PC::*)(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >),class
// Screen_PC *,struct std::_Ph<1> const &>,void>(class std::_Binder<struct std::_Unforced,void
// (__thiscall Screen_PC::*)(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >),class Screen_PC *,struct std::_Ph<1> const &> &&)

function<> * __thiscall std::function<>::operator=<>(function<> *this,_Binder<> *param_1)

{
  uint uVar1;
  function<> *pfVar2;
  undefined **local_3c;
  undefined4 local_38;
  _Binder<> local_34;
  undefined4 local_30;
  _Func_class<> *local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c68a0;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = _Func_impl_no_alloc<>::vftable;
  local_38 = *(undefined4 *)param_1;
  local_34 = param_1[4];
  local_30 = *(undefined4 *)(param_1 + 8);
  local_18 = (_Func_class<> *)&local_3c;
  local_14 = uVar1;
  _Func_class<>::_Swap(local_18,(_Func_class<> *)this);
  local_8 = 0;
  if (local_18 != (_Func_class<> *)0x0) {
    (**(code **)(*(int *)local_18 + 0x10))(local_18 != (_Func_class<> *)&local_3c,uVar1);
  }
  ExceptionList = local_10;
  pfVar2 = (function<> *)__security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return pfVar2;
}


// public: class std::function<void __cdecl(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)> & __thiscall std::function<void __cdecl(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)>::operator=<class std::_Binder<struct std::_Unforced,void (__thiscall
// Screen_Terminal::*)(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >),class
// Screen_Terminal *,struct std::_Ph<1> const &,struct std::_Ph<2> const &>,void>(class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_Terminal::*)(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_Terminal *,struct std::_Ph<1> const &,struct std::_Ph<2>
// const &> &&)

function<> * __thiscall std::function<>::operator=<>(function<> *this,_Binder<> *param_1)

{
  uint uVar1;
  function<> *pfVar2;
  undefined **local_3c;
  undefined4 local_38;
  _Binder<> local_34;
  _Binder<> local_33;
  undefined4 local_30;
  _Func_class<> *local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c68a0;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = _Func_impl_no_alloc<>::vftable;
  local_38 = *(undefined4 *)param_1;
  local_34 = param_1[4];
  local_33 = param_1[5];
  local_30 = *(undefined4 *)(param_1 + 8);
  local_18 = (_Func_class<> *)&local_3c;
  local_14 = uVar1;
  _Func_class<>::_Swap(local_18,(_Func_class<> *)this);
  local_8 = 0;
  if (local_18 != (_Func_class<> *)0x0) {
    (**(code **)(*(int *)local_18 + 0x10))(local_18 != (_Func_class<> *)&local_3c,uVar1);
  }
  ExceptionList = local_10;
  pfVar2 = (function<> *)__security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return pfVar2;
}


// public: class std::function<void __cdecl(void)> & __thiscall std::function<void
// __cdecl(void)>::operator=<class std::_Binder<struct std::_Unforced,void (__thiscall
// Screen_Terminal::*)(void),class Screen_Terminal *>,void>(class std::_Binder<struct
// std::_Unforced,void (__thiscall Screen_Terminal::*)(void),class Screen_Terminal *> &&)

function<> * __thiscall std::function<>::operator=<>(function<> *this,_Binder<> *param_1)

{
  uint uVar1;
  function<> *pfVar2;
  undefined **local_3c;
  undefined4 local_38;
  undefined4 local_34;
  _Func_class<> *local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c68a0;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = _Func_impl_no_alloc<>::vftable;
  local_38 = *(undefined4 *)param_1;
  local_34 = *(undefined4 *)(param_1 + 4);
  local_18 = (_Func_class<> *)&local_3c;
  local_14 = uVar1;
  _Func_class<>::_Swap(local_18,(_Func_class<> *)this);
  local_8 = 0;
  if (local_18 != (_Func_class<> *)0x0) {
    (**(code **)(*(int *)local_18 + 0x10))(local_18 != (_Func_class<> *)&local_3c,uVar1);
  }
  ExceptionList = local_10;
  pfVar2 = (function<> *)__security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return pfVar2;
}


// public: class std::function<void __cdecl(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)> & __thiscall std::function<void __cdecl(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)>::operator=<class std::_Binder<struct std::_Unforced,void (__thiscall
// Screen_TradeTerminal::*)(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >),class
// Screen_TradeTerminal *,struct std::_Ph<1> const &,struct std::_Ph<2> const &>,void>(class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_TradeTerminal::*)(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_TradeTerminal *,struct std::_Ph<1> const &,struct
// std::_Ph<2> const &> &&)

function<> * __thiscall std::function<>::operator=<>(function<> *this,_Binder<> *param_1)

{
  uint uVar1;
  function<> *pfVar2;
  undefined **local_3c;
  undefined4 local_38;
  _Binder<> local_34;
  _Binder<> local_33;
  undefined4 local_30;
  _Func_class<> *local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c68a0;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = _Func_impl_no_alloc<>::vftable;
  local_38 = *(undefined4 *)param_1;
  local_34 = param_1[4];
  local_33 = param_1[5];
  local_30 = *(undefined4 *)(param_1 + 8);
  local_18 = (_Func_class<> *)&local_3c;
  local_14 = uVar1;
  _Func_class<>::_Swap(local_18,(_Func_class<> *)this);
  local_8 = 0;
  if (local_18 != (_Func_class<> *)0x0) {
    (**(code **)(*(int *)local_18 + 0x10))(local_18 != (_Func_class<> *)&local_3c,uVar1);
  }
  ExceptionList = local_10;
  pfVar2 = (function<> *)__security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return pfVar2;
}


// public: class std::function<void __cdecl(void)> & __thiscall std::function<void
// __cdecl(void)>::operator=<class std::_Binder<struct std::_Unforced,void (__thiscall
// Screen_TradeTerminal::*)(void),class Screen_TradeTerminal *>,void>(class std::_Binder<struct
// std::_Unforced,void (__thiscall Screen_TradeTerminal::*)(void),class Screen_TradeTerminal *> &&)

function<> * __thiscall std::function<>::operator=<>(function<> *this,_Binder<> *param_1)

{
  uint uVar1;
  function<> *pfVar2;
  undefined **local_3c;
  undefined4 local_38;
  undefined4 local_34;
  _Func_class<> *local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c68a0;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = _Func_impl_no_alloc<>::vftable;
  local_38 = *(undefined4 *)param_1;
  local_34 = *(undefined4 *)(param_1 + 4);
  local_18 = (_Func_class<> *)&local_3c;
  local_14 = uVar1;
  _Func_class<>::_Swap(local_18,(_Func_class<> *)this);
  local_8 = 0;
  if (local_18 != (_Func_class<> *)0x0) {
    (**(code **)(*(int *)local_18 + 0x10))(local_18 != (_Func_class<> *)&local_3c,uVar1);
  }
  ExceptionList = local_10;
  pfVar2 = (function<> *)__security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return pfVar2;
}


// public: class std::function<void __cdecl(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)> & __thiscall std::function<void __cdecl(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)>::operator=<class std::_Binder<struct std::_Unforced,void (__thiscall
// Screen_UpgradeTerminal::*)(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >),class
// Screen_UpgradeTerminal *,struct std::_Ph<1> const &,struct std::_Ph<2> const &>,void>(class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_UpgradeTerminal::*)(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_UpgradeTerminal *,struct std::_Ph<1> const &,struct
// std::_Ph<2> const &> &&)

function<> * __thiscall std::function<>::operator=<>(function<> *this,_Binder<> *param_1)

{
  uint uVar1;
  function<> *pfVar2;
  undefined **local_3c;
  undefined4 local_38;
  _Binder<> local_34;
  _Binder<> local_33;
  undefined4 local_30;
  _Func_class<> *local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c68a0;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = _Func_impl_no_alloc<>::vftable;
  local_38 = *(undefined4 *)param_1;
  local_34 = param_1[4];
  local_33 = param_1[5];
  local_30 = *(undefined4 *)(param_1 + 8);
  local_18 = (_Func_class<> *)&local_3c;
  local_14 = uVar1;
  _Func_class<>::_Swap(local_18,(_Func_class<> *)this);
  local_8 = 0;
  if (local_18 != (_Func_class<> *)0x0) {
    (**(code **)(*(int *)local_18 + 0x10))(local_18 != (_Func_class<> *)&local_3c,uVar1);
  }
  ExceptionList = local_10;
  pfVar2 = (function<> *)__security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return pfVar2;
}


// public: class std::function<void __cdecl(void)> & __thiscall std::function<void
// __cdecl(void)>::operator=<class std::_Binder<struct std::_Unforced,void (__thiscall
// Screen_UpgradeTerminal::*)(void),class Screen_UpgradeTerminal *>,void>(class std::_Binder<struct
// std::_Unforced,void (__thiscall Screen_UpgradeTerminal::*)(void),class Screen_UpgradeTerminal *>
// &&)

function<> * __thiscall std::function<>::operator=<>(function<> *this,_Binder<> *param_1)

{
  uint uVar1;
  function<> *pfVar2;
  undefined **local_3c;
  undefined4 local_38;
  undefined4 local_34;
  _Func_class<> *local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c68a0;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = _Func_impl_no_alloc<>::vftable;
  local_38 = *(undefined4 *)param_1;
  local_34 = *(undefined4 *)(param_1 + 4);
  local_18 = (_Func_class<> *)&local_3c;
  local_14 = uVar1;
  _Func_class<>::_Swap(local_18,(_Func_class<> *)this);
  local_8 = 0;
  if (local_18 != (_Func_class<> *)0x0) {
    (**(code **)(*(int *)local_18 + 0x10))(local_18 != (_Func_class<> *)&local_3c,uVar1);
  }
  ExceptionList = local_10;
  pfVar2 = (function<> *)__security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return pfVar2;
}


// public: class std::function<void __cdecl(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)> & __thiscall std::function<void __cdecl(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >)>::operator=<class std::_Binder<struct std::_Unforced,void (__thiscall
// Screen_WeaponTerminal::*)(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >),class
// Screen_WeaponTerminal *,struct std::_Ph<1> const &,struct std::_Ph<2> const &>,void>(class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_WeaponTerminal::*)(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_WeaponTerminal *,struct std::_Ph<1> const &,struct
// std::_Ph<2> const &> &&)

function<> * __thiscall std::function<>::operator=<>(function<> *this,_Binder<> *param_1)

{
  uint uVar1;
  function<> *pfVar2;
  undefined **local_3c;
  undefined4 local_38;
  _Binder<> local_34;
  _Binder<> local_33;
  undefined4 local_30;
  _Func_class<> *local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c68a0;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = _Func_impl_no_alloc<>::vftable;
  local_38 = *(undefined4 *)param_1;
  local_34 = param_1[4];
  local_33 = param_1[5];
  local_30 = *(undefined4 *)(param_1 + 8);
  local_18 = (_Func_class<> *)&local_3c;
  local_14 = uVar1;
  _Func_class<>::_Swap(local_18,(_Func_class<> *)this);
  local_8 = 0;
  if (local_18 != (_Func_class<> *)0x0) {
    (**(code **)(*(int *)local_18 + 0x10))(local_18 != (_Func_class<> *)&local_3c,uVar1);
  }
  ExceptionList = local_10;
  pfVar2 = (function<> *)__security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return pfVar2;
}


// public: class std::function<void __cdecl(void)> & __thiscall std::function<void
// __cdecl(void)>::operator=<class std::_Binder<struct std::_Unforced,void (__thiscall
// Screen_WeaponTerminal::*)(void),class Screen_WeaponTerminal *>,void>(class std::_Binder<struct
// std::_Unforced,void (__thiscall Screen_WeaponTerminal::*)(void),class Screen_WeaponTerminal *>
// &&)

function<> * __thiscall std::function<>::operator=<>(function<> *this,_Binder<> *param_1)

{
  uint uVar1;
  function<> *pfVar2;
  undefined **local_3c;
  undefined4 local_38;
  undefined4 local_34;
  _Func_class<> *local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c68a0;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = _Func_impl_no_alloc<>::vftable;
  local_38 = *(undefined4 *)param_1;
  local_34 = *(undefined4 *)(param_1 + 4);
  local_18 = (_Func_class<> *)&local_3c;
  local_14 = uVar1;
  _Func_class<>::_Swap(local_18,(_Func_class<> *)this);
  local_8 = 0;
  if (local_18 != (_Func_class<> *)0x0) {
    (**(code **)(*(int *)local_18 + 0x10))(local_18 != (_Func_class<> *)&local_3c,uVar1);
  }
  ExceptionList = local_10;
  pfVar2 = (function<> *)__security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return pfVar2;
}
