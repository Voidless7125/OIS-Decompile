#include "../ois.exe.h"


// private: void __thiscall std::_Func_class<bool,class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >::_Set(class
// std::_Func_base<bool,class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > *)

void __thiscall std::_Func_class<>::_Set(_Func_class<> *this,_Func_base<> *param_1)

{
  *(_Func_base<> **)(this + 0x24) = param_1;
  return;
}


// public: bool __thiscall std::_Func_class<bool,class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// >::operator()(class Ship *,int,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >)const 

bool __thiscall
std::_Func_class<>::operator()
          (_Func_class<> *this,undefined4 param_1,undefined4 param_2,void *param_4)

{
  undefined1 uVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_00000020;
  undefined4 local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = param_1;
  local_8 = 0;
  if (*(int **)(this + 0x24) == (int *)0x0) {
                    // WARNING: Subroutine does not return
    std::_Xbad_function_call();
  }
  uVar1 = (**(code **)(**(int **)(this + 0x24) + 8))
                    (&local_14,&param_2,&param_4,___security_cookie ^ (uint)&stack0xfffffffc);
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar2 = param_4;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_4 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_4 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return (bool)uVar1;
}


// public: bool __thiscall std::_Func_class<bool,class Ship
// *,double,double,double>::operator()(class Ship *,double,double,double)const 

bool __thiscall
std::_Func_class<>::operator()
          (_Func_class<> *this,Ship *param_1,double param_2,double param_3,double param_4)

{
  undefined1 uVar1;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  if (*(int **)(this + 0x24) == (int *)0x0) {
                    // WARNING: Subroutine does not return
    std::_Xbad_function_call();
  }
  uVar1 = (**(code **)(**(int **)(this + 0x24) + 8))(&param_1,local_14,local_c,&stack0x00000008);
  return (bool)uVar1;
}


// public: void __thiscall std::_Func_class<void,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >::operator()(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)const 

void __thiscall std::_Func_class<>::operator()(_Func_class<> *this,void *param_2)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  uint in_stack_00000018;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b3b48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int **)(this + 0x24) == (int *)0x0) {
                    // WARNING: Subroutine does not return
    std::_Xbad_function_call();
  }
  (**(code **)(**(int **)(this + 0x24) + 8))(&param_2,___security_cookie ^ (uint)&stack0xfffffffc);
  if (0xf < in_stack_00000018) {
    pnVar2 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar1 = param_2;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_2 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return;
}


// protected: void __thiscall std::_Func_class<bool,class Ship *,double,double,double>::_Swap(class
// std::_Func_class<bool,class Ship *,double,double,double> &)

void __thiscall std::_Func_class<>::_Swap(_Func_class<> *this,_Func_class<> *param_1)

{
  _Func_class<> *p_Var1;
  _Func_class<> *p_Var2;
  undefined4 uVar3;
  _Func_class<> local_40 [36];
  _Func_class<> *local_1c;
  uint local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b3ef0;
  local_10 = ExceptionList;
  local_18 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  p_Var1 = *(_Func_class<> **)(this + 0x24);
  if ((p_Var1 != this) && (*(_Func_class<> **)(param_1 + 0x24) != param_1)) {
    *(_Func_class<> **)(this + 0x24) = *(_Func_class<> **)(param_1 + 0x24);
    *(_Func_class<> **)(param_1 + 0x24) = p_Var1;
    goto LAB_0042e39b;
  }
  local_1c = (_Func_class<> *)0x0;
  if (p_Var1 != (_Func_class<> *)0x0) {
    if (p_Var1 == this) {
      local_1c = (_Func_class<> *)(**(code **)(*(int *)p_Var1 + 4))(local_40,local_18);
      local_8 = 0;
      p_Var1 = *(_Func_class<> **)(this + 0x24);
      if (p_Var1 != (_Func_class<> *)0x0) {
        (**(code **)(*(int *)p_Var1 + 0x10))(p_Var1 != this);
        *(undefined4 *)(this + 0x24) = 0;
      }
    }
    else {
      *(undefined4 *)(this + 0x24) = 0;
      local_1c = p_Var1;
    }
  }
  local_8 = 0xffffffff;
  p_Var2 = *(_Func_class<> **)(param_1 + 0x24);
  if (p_Var2 != (_Func_class<> *)0x0) {
    if (p_Var2 == param_1) {
      uVar3 = (**(code **)(*(int *)p_Var2 + 4))(this);
      *(undefined4 *)(this + 0x24) = uVar3;
      local_8 = 1;
      p_Var2 = *(_Func_class<> **)(param_1 + 0x24);
      if (p_Var2 != (_Func_class<> *)0x0) {
        (**(code **)(*(int *)p_Var2 + 0x10))(p_Var2 != param_1);
        *(undefined4 *)(param_1 + 0x24) = 0;
      }
    }
    else {
      *(_Func_class<> **)(this + 0x24) = p_Var2;
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  local_8 = 0xffffffff;
  if (local_1c != (_Func_class<> *)0x0) {
    if (local_1c == local_40) {
      uVar3 = (**(code **)(*(int *)local_1c + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar3;
      local_8 = 2;
      if (local_1c == (_Func_class<> *)0x0) goto LAB_0042e37f;
      (**(code **)(*(int *)local_1c + 0x10))(local_1c != local_40);
    }
    else {
      *(_Func_class<> **)(param_1 + 0x24) = local_1c;
    }
    local_1c = (_Func_class<> *)0x0;
  }
LAB_0042e37f:
  local_8 = 3;
  if (local_1c != (_Func_class<> *)0x0) {
    (**(code **)(*(int *)local_1c + 0x10))(local_1c != local_40);
  }
LAB_0042e39b:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall std::_Func_class<void,int>::operator()(int)const 

void __thiscall std::_Func_class<void,int>::operator()(_Func_class<void,int> *this,int param_1)

{
  if (*(int **)(this + 0x24) == (int *)0x0) {
                    // WARNING: Subroutine does not return
    std::_Xbad_function_call();
  }
  (**(code **)(**(int **)(this + 0x24) + 8))(&param_1);
  return;
}


// protected: void __thiscall std::_Func_class<bool,class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >::_Reset<bool
// (__cdecl*)(class Ship *,int,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >)>(bool (__cdecl*&&)(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >))

void __thiscall
std::_Func_class<>::_Reset<>
          (_Func_class<> *this,bool____cdecl_____Ship__int_std__basic_string<>_ *param_1)

{
  if (*(int *)param_1 != 0) {
    *(undefined ***)this = _Func_impl_no_alloc<>::vftable;
    *(undefined4 *)(this + 4) = *(undefined4 *)param_1;
    *(_Func_class<> **)(this + 0x24) = this;
  }
  return;
}


// protected: void __thiscall std::_Func_class<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class Ship *,int>::_Reset<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// (__cdecl*)(class Ship *,int)>(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > (__cdecl*&&)(class Ship *,int))

void __thiscall
std::_Func_class<>::_Reset<>
          (_Func_class<> *this,class_std__basic_string<>____cdecl_____Ship__int_ *param_1)

{
  if (*(int *)param_1 != 0) {
    *(undefined ***)this = _Func_impl_no_alloc<>::vftable;
    *(undefined4 *)(this + 4) = *(undefined4 *)param_1;
    *(_Func_class<> **)(this + 0x24) = this;
  }
  return;
}


// public: bool __thiscall std::_Func_class<bool,int>::operator()(int)const 

bool __thiscall std::_Func_class<bool,int>::operator()(_Func_class<bool,int> *this,int param_1)

{
  undefined1 uVar1;
  
  if (*(int **)(this + 0x24) == (int *)0x0) {
                    // WARNING: Subroutine does not return
    std::_Xbad_function_call();
  }
  uVar1 = (**(code **)(**(int **)(this + 0x24) + 8))(&param_1);
  return (bool)uVar1;
}
