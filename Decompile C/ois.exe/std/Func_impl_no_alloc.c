#include "../ois.exe.h"


// private: virtual void __thiscall std::_Func_impl_no_alloc<class std::function<bool __cdecl(class
// Ship *,int,int,int)>,bool,class Ship *,double,double,double>::_Delete_this(bool)

void __thiscall std::_Func_impl_no_alloc<>::_Delete_this(_Func_impl_no_alloc<> *this,bool param_1)

{
  _Func_impl_no_alloc<> *p_Var1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b1790;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  p_Var1 = *(_Func_impl_no_alloc<> **)(this + 0x2c);
  if (p_Var1 != (_Func_impl_no_alloc<> *)0x0) {
    (**(code **)(*(int *)p_Var1 + 0x10))
              (p_Var1 != this + 8,___security_cookie ^ (uint)&stack0xfffffffc);
    *(undefined4 *)(this + 0x2c) = 0;
  }
  if (param_1) {
    operator_delete(this,(nothrow_t *)&DAT_00000030);
  }
  ExceptionList = local_10;
  return;
}


// private: virtual void const * __thiscall std::_Func_impl_no_alloc<class std::_Binder<struct
// std::_Unforced,void (__thiscall ServerPresentationInterface::*)(int),class
// ServerPresentationInterface *,struct std::_Ph<1> const &>,void,int>::_Get(void)const 

void * __thiscall std::_Func_impl_no_alloc<>::_Get(_Func_impl_no_alloc<> *this)

{
  return this + 8;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<class
// std::function<bool __cdecl(class Ship *,int,int,int)>,bool,class Ship
// *,double,double,double>::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&function<>::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<bool,class Ship *,double,double,double> * __thiscall
// std::_Func_impl_no_alloc<class std::function<bool __cdecl(class Ship *,int,int,int)>,bool,class
// Ship *,double,double,double>::_Move(void *)

_Func_base<> * __thiscall
std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1)

{
  _Func_base<> *p_Var1;
  
  p_Var1 = (_Func_base<> *)_Func_impl_no_alloc<><>(param_1,(function<> *)(this + 8));
  return p_Var1;
}


// private: virtual class std::_Func_base<bool,class Ship *,double,double,double> * __thiscall
// std::_Func_impl_no_alloc<class std::function<bool __cdecl(class Ship *,int,int,int)>,bool,class
// Ship *,double,double,double>::_Copy(void *)const 

_Func_base<> * __thiscall
std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1)

{
  _Func_impl_no_alloc<> *p_Var1;
  function<> *unaff_retaddr;
  
  p_Var1 = _Global_new<>(unaff_retaddr);
  return (_Func_base<> *)p_Var1;
}


// private: virtual bool __thiscall std::_Func_impl_no_alloc<class std::function<bool __cdecl(class
// Ship *,int,int,int)>,bool,class Ship *,double,double,double>::_Do_call(class Ship * &&,double
// &&,double &&,double &&)

bool __thiscall
std::_Func_impl_no_alloc<>::_Do_call
          (_Func_impl_no_alloc<> *this,Ship **param_1,double *param_2,double *param_3,
          double *param_4)

{
  undefined1 uVar1;
  
  param_4 = (double *)(int)*param_4;
  param_3 = (double *)(int)*param_3;
  param_2 = (double *)(int)*param_2;
  param_1 = (Ship **)*param_1;
  if (*(int **)(this + 0x2c) == (int *)0x0) {
                    // WARNING: Subroutine does not return
    std::_Xbad_function_call();
  }
  uVar1 = (**(code **)(**(int **)(this + 0x2c) + 8))(&param_1,&param_2,&param_3,&param_4);
  return (bool)uVar1;
}


// public: __thiscall std::_Func_impl_no_alloc<class std::function<bool __cdecl(class Ship
// *,int,int,int)>,bool,class Ship *,double,double,double>::_Func_impl_no_alloc<class
// std::function<bool __cdecl(class Ship *,int,int,int)>,bool,class Ship
// *,double,double,double><class std::function<bool __cdecl(class Ship *,int,int,int)>,void>(class
// std::function<bool __cdecl(class Ship *,int,int,int)> &&)

_Func_impl_no_alloc<> * __thiscall
std::_Func_impl_no_alloc<>::_Func_impl_no_alloc<><>(_Func_impl_no_alloc<> *this,function<> *param_1)

{
  function<> *pfVar1;
  uint uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2ae8;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x2c) = 0;
  local_8 = 0;
  pfVar1 = *(function<> **)(param_1 + 0x24);
  if (pfVar1 != (function<> *)0x0) {
    if (pfVar1 == param_1) {
      uVar3 = (**(code **)(*(int *)pfVar1 + 4))(this + 8,uVar2);
      *(undefined4 *)(this + 0x2c) = uVar3;
      local_8 = CONCAT31(local_8._1_3_,1);
      pfVar1 = *(function<> **)(param_1 + 0x24);
      if (pfVar1 == (function<> *)0x0) {
        ExceptionList = local_10;
        return this;
      }
      (**(code **)(*(int *)pfVar1 + 0x10))(pfVar1 != param_1);
    }
    else {
      *(function<> **)(this + 0x2c) = pfVar1;
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  ExceptionList = local_10;
  return this;
}


// private: virtual void __thiscall std::_Func_impl_no_alloc<class std::_Binder<struct
// std::_Unforced,void (__thiscall Screen_TradeTerminal::*)(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_TradeTerminal *,struct std::_Ph<1> const &,struct
// std::_Ph<2> const &>,void,bool,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >
// >::_Delete_this(bool)

void __thiscall std::_Func_impl_no_alloc<>::_Delete_this(_Func_impl_no_alloc<> *this,bool param_1)

{
  if (param_1) {
    operator_delete(this,(nothrow_t *)0x10);
  }
  return;
}


// private: virtual void const * __thiscall std::_Func_impl_no_alloc<class std::_Binder<struct
// std::_Unforced,void (__thiscall Screen_TradeTerminal::*)(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_TradeTerminal *,struct std::_Ph<1> const &,struct
// std::_Ph<2> const &>,void,bool,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >
// >::_Get(void)const 

void * __thiscall std::_Func_impl_no_alloc<>::_Get(_Func_impl_no_alloc<> *this)

{
  return this + 4;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall ComputerSystem::*)(int),class ComputerSystem
// *,struct std::_Ph<1> const &>,void,int>::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&_Binder<>::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<void,int> * __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall ComputerSystem::*)(int),class ComputerSystem
// *,struct std::_Ph<1> const &>,void,int>::_Move(void *)

_Func_base<void,int> * __thiscall
std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  *(_Func_impl_no_alloc<> *)((int)param_1 + 8) = this[8];
  *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  return param_1;
}


// private: virtual void __thiscall std::_Func_impl_no_alloc<class std::_Binder<struct
// std::_Unforced,void (__thiscall Screen_UpgradeTerminal::*)(void),class Screen_UpgradeTerminal
// *>,void>::_Delete_this(bool)

void __thiscall std::_Func_impl_no_alloc<>::_Delete_this(_Func_impl_no_alloc<> *this,bool param_1)

{
  if (param_1) {
    operator_delete(this,(nothrow_t *)0xc);
  }
  return;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall ComputerSystem::*)(void),class ComputerSystem
// *>,void>::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&_Binder<>::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<void> * __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall ComputerSystem::*)(void),class ComputerSystem
// *>,void>::_Copy(void *)const 

_Func_base<void> * __thiscall
std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)((int)param_1 + 8) = *(undefined4 *)(this + 8);
  return param_1;
}


// private: virtual void __thiscall std::_Func_impl_no_alloc<class std::_Binder<struct
// std::_Unforced,void (__thiscall Screen_WeaponTerminal::*)(void),class Screen_WeaponTerminal
// *>,void>::_Do_call(void)

void __thiscall std::_Func_impl_no_alloc<>::_Do_call(_Func_impl_no_alloc<> *this)

{
                    // WARNING: Could not recover jumptable at 0x004b6a28. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(this + 4))();
  return;
}


// private: virtual void __thiscall std::_Func_impl_no_alloc<class std::_Binder<struct
// std::_Unforced,void (__thiscall ComputerSystem::*)(int),class ComputerSystem *,struct std::_Ph<1>
// const &>,void,int>::_Do_call(int &&)

void __thiscall std::_Func_impl_no_alloc<>::_Do_call(_Func_impl_no_alloc<> *this,int *param_1)

{
  (**(code **)(this + 4))(*param_1);
  return;
}


// private: virtual void __thiscall std::_Func_impl_no_alloc<bool (__cdecl*)(class Ship
// *,int,int,int),bool,class Ship *,double,double,double>::_Delete_this(bool)

void __thiscall std::_Func_impl_no_alloc<>::_Delete_this(_Func_impl_no_alloc<> *this,bool param_1)

{
  if (param_1) {
    operator_delete(this,(nothrow_t *)0x8);
  }
  return;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<bool
// (__cdecl*)(class Ship *,int,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >),bool,class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)
         &.P6A_NPAVShip@@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z::
          RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<bool,class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > * __thiscall std::_Func_impl_no_alloc<bool
// (__cdecl*)(class Ship *,int,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >),bool,class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >::_Copy(void *)const 

_Func_base<> * __thiscall
std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  return param_1;
}


// private: virtual bool __thiscall std::_Func_impl_no_alloc<bool (__cdecl*)(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >),bool,class
// Ship *,int,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// > >::_Do_call(class Ship * &&,int &&,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > &&)

bool __thiscall
std::_Func_impl_no_alloc<>::_Do_call
          (_Func_impl_no_alloc<> *this,Ship **param_1,int *param_2,basic_string<> *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  
  uVar2 = *(undefined4 *)param_3;
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  *(undefined4 *)(param_3 + 0x10) = 0;
  *(undefined4 *)(param_3 + 0x14) = 0xf;
  *param_3 = (basic_string<>)0x0;
  uVar3 = (**(code **)(this + 4))
                    (*param_1,*param_2,uVar2,*(undefined4 *)(param_3 + 4),
                     *(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc),uVar1,this);
  return (bool)uVar3;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<class
// std::function<bool __cdecl(class Ship *,double,double,double)>,bool,class Ship
// *,int,int,int>::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&function<>::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<bool,class Ship *,int,int,int> * __thiscall
// std::_Func_impl_no_alloc<class std::function<bool __cdecl(class Ship
// *,double,double,double)>,bool,class Ship *,int,int,int>::_Move(void *)

_Func_base<> * __thiscall
std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1)

{
  _Func_base<> *p_Var1;
  
  p_Var1 = (_Func_base<> *)_Func_impl_no_alloc<><>(param_1,(function<> *)(this + 8));
  return p_Var1;
}


// private: virtual class std::_Func_base<bool,class Ship *,int,int,int> * __thiscall
// std::_Func_impl_no_alloc<class std::function<bool __cdecl(class Ship
// *,double,double,double)>,bool,class Ship *,int,int,int>::_Copy(void *)const 

_Func_base<> * __thiscall
std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1)

{
  _Func_impl_no_alloc<> *p_Var1;
  function<> *unaff_retaddr;
  
  p_Var1 = _Global_new<>(unaff_retaddr);
  return (_Func_base<> *)p_Var1;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<bool
// (__cdecl*)(class Ship *,int,int,int),bool,class Ship
// *,double,double,double>::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&.P6A_NPAVShip@@HHH@Z::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<bool,class Ship *,int,int,int> * __thiscall
// std::_Func_impl_no_alloc<bool (__cdecl*)(class Ship *,int,int,int),bool,class Ship
// *,int,int,int>::_Move(void *)

_Func_base<> * __thiscall
std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  return param_1;
}


// private: virtual bool __thiscall std::_Func_impl_no_alloc<bool (__cdecl*)(class Ship
// *,int,int,int),bool,class Ship *,int,int,int>::_Do_call(class Ship * &&,int &&,int &&,int &&)

bool __thiscall
std::_Func_impl_no_alloc<>::_Do_call
          (_Func_impl_no_alloc<> *this,Ship **param_1,int *param_2,int *param_3,int *param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this + 4))(*param_1,*param_2,*param_3,*param_4);
  return (bool)uVar1;
}


// private: virtual bool __thiscall std::_Func_impl_no_alloc<class std::function<bool __cdecl(class
// Ship *,double,double,double)>,bool,class Ship *,int,int,int>::_Do_call(class Ship * &&,int &&,int
// &&,int &&)

bool __thiscall
std::_Func_impl_no_alloc<>::_Do_call
          (_Func_impl_no_alloc<> *this,Ship **param_1,int *param_2,int *param_3,int *param_4)

{
  undefined1 uVar1;
  Ship *local_24;
  double local_20;
  double local_18;
  double local_10;
  
  local_24 = *param_1;
  local_10 = (double)*param_2;
  local_18 = (double)*param_3;
  local_20 = (double)*param_4;
  if (*(int **)(this + 0x2c) == (int *)0x0) {
                    // WARNING: Subroutine does not return
    std::_Xbad_function_call();
  }
  uVar1 = (**(code **)(**(int **)(this + 0x2c) + 8))(&local_24,&local_10,&local_18,&local_20);
  return (bool)uVar1;
}


// public: __thiscall std::_Func_impl_no_alloc<class std::function<bool __cdecl(class Ship
// *,double,double,double)>,bool,class Ship *,int,int,int>::_Func_impl_no_alloc<class
// std::function<bool __cdecl(class Ship *,double,double,double)>,bool,class Ship
// *,int,int,int><class std::function<bool __cdecl(class Ship *,double,double,double)>,void>(class
// std::function<bool __cdecl(class Ship *,double,double,double)> &&)

_Func_impl_no_alloc<> * __thiscall
std::_Func_impl_no_alloc<>::_Func_impl_no_alloc<><>(_Func_impl_no_alloc<> *this,function<> *param_1)

{
  function<> *pfVar1;
  uint uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2ae8;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x2c) = 0;
  local_8 = 0;
  pfVar1 = *(function<> **)(param_1 + 0x24);
  if (pfVar1 != (function<> *)0x0) {
    if (pfVar1 == param_1) {
      uVar3 = (**(code **)(*(int *)pfVar1 + 4))(this + 8,uVar2);
      *(undefined4 *)(this + 0x2c) = uVar3;
      local_8 = CONCAT31(local_8._1_3_,1);
      pfVar1 = *(function<> **)(param_1 + 0x24);
      if (pfVar1 == (function<> *)0x0) {
        ExceptionList = local_10;
        return this;
      }
      (**(code **)(*(int *)pfVar1 + 0x10))(pfVar1 != param_1);
    }
    else {
      *(function<> **)(this + 0x2c) = pfVar1;
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  ExceptionList = local_10;
  return this;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<double
// (__cdecl*)(class Ship *,int),double,class Ship *,int>::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&.P6ANPAVShip@@H@Z::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<double,class Ship *,int> * __thiscall
// std::_Func_impl_no_alloc<double (__cdecl*)(class Ship *,int),double,class Ship *,int>::_Copy(void
// *)const 

_Func_base<> * __thiscall
std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  return param_1;
}


// private: virtual double __thiscall std::_Func_impl_no_alloc<double (__cdecl*)(class Ship
// *,int),double,class Ship *,int>::_Do_call(class Ship * &&,int &&)

double __thiscall
std::_Func_impl_no_alloc<>::_Do_call(_Func_impl_no_alloc<> *this,Ship **param_1,int *param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(this + 4))(*param_1,*param_2);
  return (double)fVar1;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// (__cdecl*)(class Ship *,int),class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class Ship *,int>::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)
         &.P6A?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVShip@@H@Z::
          RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class Ship *,int> * __thiscall
// std::_Func_impl_no_alloc<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > (__cdecl*)(class Ship *,int),class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class Ship *,int>::_Copy(void *)const 

_Func_base<> * __thiscall
std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  return param_1;
}


// private: virtual class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > __thiscall std::_Func_impl_no_alloc<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > (__cdecl*)(class Ship *,int),class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class Ship
// *,int>::_Do_call(class Ship * &&,int &&)

void __thiscall
std::_Func_impl_no_alloc<>::_Do_call(_Func_impl_no_alloc<> *this,Ship **param_1,int *param_2)

{
  Ship *pSVar1;
  Ship *pSVar2;
  Ship *pSVar3;
  undefined4 *puVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  undefined4 *in_stack_0000000c;
  void *local_20 [5];
  uint local_c;
  uint local_8;
  
  local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  puVar4 = (undefined4 *)(**(code **)(this + 4))(local_20,*param_2,*in_stack_0000000c);
  param_1[4] = (Ship *)0x0;
  param_1[5] = (Ship *)0x0;
  pSVar1 = (Ship *)puVar4[1];
  pSVar2 = (Ship *)puVar4[2];
  pSVar3 = (Ship *)puVar4[3];
  *param_1 = (Ship *)*puVar4;
  param_1[1] = pSVar1;
  param_1[2] = pSVar2;
  param_1[3] = pSVar3;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar4 + 4);
  puVar4[4] = 0;
  puVar4[5] = 0xf;
  *(undefined1 *)puVar4 = 0;
  if (0xf < local_c) {
    pnVar6 = (nothrow_t *)(local_c + 1);
    pvVar5 = local_20[0];
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)local_20[0] + -4);
      pnVar6 = (nothrow_t *)(local_c + 0x24);
      if (0x1f < (uint)((int)local_20[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar5,pnVar6);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<bool (__cdecl*)(void
// *),bool,void *>::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&.P6A_NPAX@Z::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<bool,void *> * __thiscall std::_Func_impl_no_alloc<bool
// (__cdecl*)(void *),bool,void *>::_Move(void *)

_Func_base<bool,void*> * __thiscall
std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  return param_1;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<void
// (__cdecl*)(class Menu *),void,class Menu *>::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&.P6AXPAVMenu@@@Z::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<void,class Menu *> * __thiscall
// std::_Func_impl_no_alloc<void (__cdecl*)(class Menu *),void,class Menu *>::_Move(void *)

_Func_base<void,Menu*> * __thiscall
std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  return param_1;
}


// private: virtual void __thiscall std::_Func_impl_no_alloc<void (__cdecl*)(class Menu
// *),void,class Menu *>::_Do_call(class Menu * &&)

void __thiscall std::_Func_impl_no_alloc<>::_Do_call(_Func_impl_no_alloc<> *this,Menu **param_1)

{
  (**(code **)(this + 4))(*param_1);
  return;
}


// private: virtual class std::_Func_base<bool,class Ship *,double,double,double> * __thiscall
// std::_Func_impl_no_alloc<bool (__cdecl*)(class Ship *,int,int,int),bool,class Ship
// *,double,double,double>::_Move(void *)

_Func_base<> * __thiscall
std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  return param_1;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<bool
// (__cdecl*)(class Ship *,double,double,double),bool,class Ship
// *,double,double,double>::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&.P6A_NPAVShip@@NNN@Z::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<bool,class Ship *,double,double,double> * __thiscall
// std::_Func_impl_no_alloc<bool (__cdecl*)(class Ship *,double,double,double),bool,class Ship
// *,double,double,double>::_Move(void *)

_Func_base<> * __thiscall
std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  return param_1;
}


// private: virtual bool __thiscall std::_Func_impl_no_alloc<bool (__cdecl*)(class Ship
// *,double,double,double),bool,class Ship *,double,double,double>::_Do_call(class Ship * &&,double
// &&,double &&,double &&)

bool __thiscall
std::_Func_impl_no_alloc<>::_Do_call
          (_Func_impl_no_alloc<> *this,Ship **param_1,double *param_2,double *param_3,
          double *param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this + 4))(*param_1,*param_2,*param_3,*param_4);
  return (bool)uVar1;
}


// private: virtual bool __thiscall std::_Func_impl_no_alloc<bool (__cdecl*)(class Ship
// *,int,int,int),bool,class Ship *,double,double,double>::_Do_call(class Ship * &&,double &&,double
// &&,double &&)

bool __thiscall
std::_Func_impl_no_alloc<>::_Do_call
          (_Func_impl_no_alloc<> *this,Ship **param_1,double *param_2,double *param_3,
          double *param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this + 4))(*param_1,(int)*param_2,(int)*param_3,(int)*param_4);
  return (bool)uVar1;
}


// private: virtual void __thiscall std::_Func_impl_no_alloc<class std::_Binder<struct
// std::_Unforced,void (__thiscall ServerPresentationInterface::*)(int),class
// ServerPresentationInterface *,struct std::_Ph<1> const &>,void,int>::_Delete_this(bool)

void __thiscall std::_Func_impl_no_alloc<>::_Delete_this(_Func_impl_no_alloc<> *this,bool param_1)

{
  if (param_1) {
    operator_delete(this,(nothrow_t *)0x18);
  }
  return;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,bool (__thiscall ServerPresentationInterface::*)(int),class
// ServerPresentationInterface *,struct std::_Ph<1> const &>,bool,int>::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&_Binder<>::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<bool,int> * __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,bool (__thiscall ServerPresentationInterface::*)(int),class
// ServerPresentationInterface *,struct std::_Ph<1> const &>,bool,int>::_Move(void *)

_Func_base<bool,int> * __thiscall
std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 8) = *(undefined4 *)(this + 8);
  *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  *(_Func_impl_no_alloc<> *)((int)param_1 + 0x10) = this[0x10];
  *(undefined4 *)((int)param_1 + 0x14) = *(undefined4 *)(this + 0x14);
  return param_1;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall ServerPresentationInterface::*)(int),class
// ServerPresentationInterface *,struct std::_Ph<1> const &>,void,int>::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&_Binder<>::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<void,int> * __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall ServerPresentationInterface::*)(int),class
// ServerPresentationInterface *,struct std::_Ph<1> const &>,void,int>::_Copy(void *)const 

_Func_base<void,int> * __thiscall
std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 8) = *(undefined4 *)(this + 8);
  *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  *(_Func_impl_no_alloc<> *)((int)param_1 + 0x10) = this[0x10];
  *(undefined4 *)((int)param_1 + 0x14) = *(undefined4 *)(this + 0x14);
  return param_1;
}


// private: virtual void __thiscall std::_Func_impl_no_alloc<class std::_Binder<struct
// std::_Unforced,void (__thiscall ServerPresentationInterface::*)(int),class
// ServerPresentationInterface *,struct std::_Ph<1> const &>,void,int>::_Do_call(int &&)

void __thiscall std::_Func_impl_no_alloc<>::_Do_call(_Func_impl_no_alloc<> *this,int *param_1)

{
  (**(code **)(this + 8))(*param_1);
  return;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall PresentationInterface::*)(class
// cocos2d::Event *),class PresentationInterface *,struct std::_Ph<1> const &>,void,class
// cocos2d::EventMouse *>::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&_Binder<>::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<void,class cocos2d::EventMouse *> * __thiscall
// std::_Func_impl_no_alloc<class std::_Binder<struct std::_Unforced,void (__thiscall
// PresentationInterface::*)(class cocos2d::Event *),class PresentationInterface *,struct
// std::_Ph<1> const &>,void,class cocos2d::EventMouse *>::_Copy(void *)const 

_Func_base<> * __thiscall
std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 8) = *(undefined4 *)(this + 8);
  *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  *(_Func_impl_no_alloc<> *)((int)param_1 + 0x10) = this[0x10];
  *(undefined4 *)((int)param_1 + 0x14) = *(undefined4 *)(this + 0x14);
  return param_1;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall PresentationInterface::*)(enum
// cocos2d::EventKeyboard::KeyCode,class cocos2d::Event *),class PresentationInterface *,struct
// std::_Ph<1> const &,struct std::_Ph<2> const &>,void,enum cocos2d::EventKeyboard::KeyCode,class
// cocos2d::Event *>::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&_Binder<>::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<void,enum cocos2d::EventKeyboard::KeyCode,class
// cocos2d::Event *> * __thiscall std::_Func_impl_no_alloc<class std::_Binder<struct
// std::_Unforced,void (__thiscall PresentationInterface::*)(enum
// cocos2d::EventKeyboard::KeyCode,class cocos2d::Event *),class PresentationInterface *,struct
// std::_Ph<1> const &,struct std::_Ph<2> const &>,void,enum cocos2d::EventKeyboard::KeyCode,class
// cocos2d::Event *>::_Move(void *)

_Func_base<> * __thiscall
std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 8) = *(undefined4 *)(this + 8);
  *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  *(_Func_impl_no_alloc<> *)((int)param_1 + 0x10) = this[0x10];
  *(_Func_impl_no_alloc<> *)((int)param_1 + 0x11) = this[0x11];
  *(undefined4 *)((int)param_1 + 0x14) = *(undefined4 *)(this + 0x14);
  return param_1;
}


// private: virtual void __thiscall std::_Func_impl_no_alloc<class std::_Binder<struct
// std::_Unforced,void (__thiscall PresentationInterface::*)(enum
// cocos2d::EventKeyboard::KeyCode,class cocos2d::Event *),class PresentationInterface *,struct
// std::_Ph<1> const &,struct std::_Ph<2> const &>,void,enum cocos2d::EventKeyboard::KeyCode,class
// cocos2d::Event *>::_Do_call(enum cocos2d::EventKeyboard::KeyCode &&,class cocos2d::Event * &&)

void __thiscall
std::_Func_impl_no_alloc<>::_Do_call(_Func_impl_no_alloc<> *this,KeyCode *param_1,Event **param_2)

{
  (**(code **)(this + 8))(*param_1,*param_2);
  return;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall RoomObject::*)(void),class RoomObject
// *>,void>::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&_Binder<>::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<void> * __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall RoomObject::*)(void),class RoomObject
// *>,void>::_Copy(void *)const 

_Func_base<void> * __thiscall
std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)((int)param_1 + 8) = *(undefined4 *)(this + 8);
  return param_1;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_ContractTerminal::*)(bool,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_ContractTerminal *,struct std::_Ph<1> const &,struct
// std::_Ph<2> const &>,void,bool,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >
// >::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&_Binder<>::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<void,bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > * __thiscall std::_Func_impl_no_alloc<class std::_Binder<struct
// std::_Unforced,void (__thiscall Screen_ContractTerminal::*)(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_ContractTerminal *,struct std::_Ph<1> const &,struct
// std::_Ph<2> const &>,void,bool,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >
// >::_Move(void *)

_Func_base<> * __thiscall
std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  *(_Func_impl_no_alloc<> *)((int)param_1 + 8) = this[8];
  *(_Func_impl_no_alloc<> *)((int)param_1 + 9) = this[9];
  *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  return param_1;
}


// private: virtual void __thiscall std::_Func_impl_no_alloc<class std::_Binder<struct
// std::_Unforced,void (__thiscall Screen_Terminal::*)(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_Terminal *,struct std::_Ph<1> const &,struct std::_Ph<2>
// const &>,void,bool,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >
// >::_Do_call(bool &&,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > &&)

void __thiscall
std::_Func_impl_no_alloc<>::_Do_call(_Func_impl_no_alloc<> *this,bool *param_1,vector<> *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  pcVar1 = *(code **)(this + 4);
  uVar2 = *(undefined4 *)param_2;
  uVar3 = *(undefined4 *)(param_2 + 4);
  uVar4 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  (*pcVar1)(*param_1,uVar2,uVar3,uVar4);
  return;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_ContractTerminal::*)(void),class
// Screen_ContractTerminal *>,void>::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&_Binder<>::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<void> * __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_ContractTerminal::*)(void),class
// Screen_ContractTerminal *>,void>::_Move(void *)

_Func_base<void> * __thiscall
std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)((int)param_1 + 8) = *(undefined4 *)(this + 8);
  return param_1;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_ContractTerminal::*)(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_ContractTerminal *,struct std::_Ph<1> const &,struct
// std::_Ph<2> const &>,void,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >
// >::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&_Binder<>::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<void,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > * __thiscall std::_Func_impl_no_alloc<class std::_Binder<struct
// std::_Unforced,void (__thiscall Screen_ContractTerminal::*)(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_ContractTerminal *,struct std::_Ph<1> const &,struct
// std::_Ph<2> const &>,void,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >
// >::_Move(void *)

_Func_base<> * __thiscall
std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  *(_Func_impl_no_alloc<> *)((int)param_1 + 8) = this[8];
  *(_Func_impl_no_alloc<> *)((int)param_1 + 9) = this[9];
  *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  return param_1;
}


// private: virtual void __thiscall std::_Func_impl_no_alloc<class std::_Binder<struct
// std::_Unforced,void (__thiscall Screen_UpgradeTerminal::*)(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_UpgradeTerminal *,struct std::_Ph<1> const &,struct
// std::_Ph<2> const &>,void,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >
// >::_Do_call(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// > &&,class std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > &&)

void __thiscall
std::_Func_impl_no_alloc<>::_Do_call
          (_Func_impl_no_alloc<> *this,basic_string<> *param_1,vector<> *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  pcVar2 = *(code **)(this + 4);
  uVar3 = *(undefined4 *)param_2;
  uVar4 = *(undefined4 *)(param_2 + 4);
  uVar5 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  uVar6 = *(undefined4 *)param_1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (basic_string<>)0x0;
  (*pcVar2)(uVar6,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
            *(undefined4 *)(param_1 + 0xc),uVar1,uVar3,uVar4,uVar5);
  return;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall ComputerSystem::*)(void),class ComputerSystem
// * &>,void>::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&_Binder<>::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<void> * __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall ComputerSystem::*)(void),class ComputerSystem
// * &>,void>::_Copy(void *)const 

_Func_base<void> * __thiscall
std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)((int)param_1 + 8) = *(undefined4 *)(this + 8);
  return param_1;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_PC::*)(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_PC *,struct std::_Ph<1> const &,struct std::_Ph<2> const
// &>,void,bool,class std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > >::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&_Binder<>::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<void,bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > * __thiscall std::_Func_impl_no_alloc<class std::_Binder<struct
// std::_Unforced,void (__thiscall Screen_PC::*)(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_PC *,struct std::_Ph<1> const &,struct std::_Ph<2> const
// &>,void,bool,class std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > >::_Move(void *)

_Func_base<> * __thiscall
std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  *(_Func_impl_no_alloc<> *)((int)param_1 + 8) = this[8];
  *(_Func_impl_no_alloc<> *)((int)param_1 + 9) = this[9];
  *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  return param_1;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_PC::*)(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >),class
// Screen_PC *,struct std::_Ph<1> const &>,void,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&_Binder<>::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<void,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > * __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_PC::*)(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >),class
// Screen_PC *,struct std::_Ph<1> const &>,void,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >::_Copy(void *)const 

_Func_base<> * __thiscall
std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  *(_Func_impl_no_alloc<> *)((int)param_1 + 8) = this[8];
  *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  return param_1;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_PC::*)(void),class Screen_PC
// *>,void>::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&_Binder<>::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<void> * __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_PC::*)(void),class Screen_PC
// *>,void>::_Copy(void *)const 

_Func_base<void> * __thiscall
std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)((int)param_1 + 8) = *(undefined4 *)(this + 8);
  return param_1;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_PC::*)(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_PC *,struct std::_Ph<1> const &,struct std::_Ph<2> const
// &>,void,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > >::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&_Binder<>::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<void,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > * __thiscall std::_Func_impl_no_alloc<class std::_Binder<struct
// std::_Unforced,void (__thiscall Screen_PC::*)(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_PC *,struct std::_Ph<1> const &,struct std::_Ph<2> const
// &>,void,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > >::_Copy(void *)const 

_Func_base<> * __thiscall
std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  *(_Func_impl_no_alloc<> *)((int)param_1 + 8) = this[8];
  *(_Func_impl_no_alloc<> *)((int)param_1 + 9) = this[9];
  *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  return param_1;
}


// private: virtual void __thiscall std::_Func_impl_no_alloc<class std::_Binder<struct
// std::_Unforced,void (__thiscall Screen_PC::*)(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >),class Screen_PC *,struct std::_Ph<1> const
// &>,void,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// >::_Do_call(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// > &&)

void __thiscall
std::_Func_impl_no_alloc<>::_Do_call(_Func_impl_no_alloc<> *this,basic_string<> *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = *(code **)(this + 4);
  uVar3 = *(undefined4 *)param_1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (basic_string<>)0x0;
  (*pcVar2)(uVar3,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
            *(undefined4 *)(param_1 + 0xc),uVar1);
  return;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_Terminal::*)(bool,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_Terminal *,struct std::_Ph<1> const &,struct std::_Ph<2>
// const &>,void,bool,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >
// >::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&_Binder<>::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<void,bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > * __thiscall std::_Func_impl_no_alloc<class std::_Binder<struct
// std::_Unforced,void (__thiscall Screen_Terminal::*)(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_Terminal *,struct std::_Ph<1> const &,struct std::_Ph<2>
// const &>,void,bool,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >
// >::_Copy(void *)const 

_Func_base<> * __thiscall
std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  *(_Func_impl_no_alloc<> *)((int)param_1 + 8) = this[8];
  *(_Func_impl_no_alloc<> *)((int)param_1 + 9) = this[9];
  *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  return param_1;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_Terminal::*)(void),class
// Screen_Terminal *>,void>::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&_Binder<>::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<void> * __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_Terminal::*)(void),class
// Screen_Terminal *>,void>::_Copy(void *)const 

_Func_base<void> * __thiscall
std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)((int)param_1 + 8) = *(undefined4 *)(this + 8);
  return param_1;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_Terminal::*)(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_Terminal *,struct std::_Ph<1> const &,struct std::_Ph<2>
// const &>,void,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >
// >::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&_Binder<>::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<void,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > * __thiscall std::_Func_impl_no_alloc<class std::_Binder<struct
// std::_Unforced,void (__thiscall Screen_Terminal::*)(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_Terminal *,struct std::_Ph<1> const &,struct std::_Ph<2>
// const &>,void,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >
// >::_Copy(void *)const 

_Func_base<> * __thiscall
std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  *(_Func_impl_no_alloc<> *)((int)param_1 + 8) = this[8];
  *(_Func_impl_no_alloc<> *)((int)param_1 + 9) = this[9];
  *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  return param_1;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_TradeTerminal::*)(bool,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_TradeTerminal *,struct std::_Ph<1> const &,struct
// std::_Ph<2> const &>,void,bool,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >
// >::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&_Binder<>::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<void,bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > * __thiscall std::_Func_impl_no_alloc<class std::_Binder<struct
// std::_Unforced,void (__thiscall Screen_TradeTerminal::*)(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_TradeTerminal *,struct std::_Ph<1> const &,struct
// std::_Ph<2> const &>,void,bool,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >
// >::_Copy(void *)const 

_Func_base<> * __thiscall
std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  *(_Func_impl_no_alloc<> *)((int)param_1 + 8) = this[8];
  *(_Func_impl_no_alloc<> *)((int)param_1 + 9) = this[9];
  *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  return param_1;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_TradeTerminal::*)(void),class
// Screen_TradeTerminal *>,void>::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&_Binder<>::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<void> * __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_TradeTerminal::*)(void),class
// Screen_TradeTerminal *>,void>::_Copy(void *)const 

_Func_base<void> * __thiscall
std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)((int)param_1 + 8) = *(undefined4 *)(this + 8);
  return param_1;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_TradeTerminal::*)(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_TradeTerminal *,struct std::_Ph<1> const &,struct
// std::_Ph<2> const &>,void,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >
// >::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&_Binder<>::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<void,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > * __thiscall std::_Func_impl_no_alloc<class std::_Binder<struct
// std::_Unforced,void (__thiscall Screen_TradeTerminal::*)(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_TradeTerminal *,struct std::_Ph<1> const &,struct
// std::_Ph<2> const &>,void,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >
// >::_Copy(void *)const 

_Func_base<> * __thiscall
std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  *(_Func_impl_no_alloc<> *)((int)param_1 + 8) = this[8];
  *(_Func_impl_no_alloc<> *)((int)param_1 + 9) = this[9];
  *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  return param_1;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_UpgradeTerminal::*)(bool,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_UpgradeTerminal *,struct std::_Ph<1> const &,struct
// std::_Ph<2> const &>,void,bool,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >
// >::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&_Binder<>::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<void,bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > * __thiscall std::_Func_impl_no_alloc<class std::_Binder<struct
// std::_Unforced,void (__thiscall Screen_UpgradeTerminal::*)(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_UpgradeTerminal *,struct std::_Ph<1> const &,struct
// std::_Ph<2> const &>,void,bool,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >
// >::_Move(void *)

_Func_base<> * __thiscall
std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  *(_Func_impl_no_alloc<> *)((int)param_1 + 8) = this[8];
  *(_Func_impl_no_alloc<> *)((int)param_1 + 9) = this[9];
  *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  return param_1;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_UpgradeTerminal::*)(void),class
// Screen_UpgradeTerminal *>,void>::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&_Binder<>::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<void> * __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_UpgradeTerminal::*)(void),class
// Screen_UpgradeTerminal *>,void>::_Move(void *)

_Func_base<void> * __thiscall
std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)((int)param_1 + 8) = *(undefined4 *)(this + 8);
  return param_1;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_UpgradeTerminal::*)(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_UpgradeTerminal *,struct std::_Ph<1> const &,struct
// std::_Ph<2> const &>,void,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >
// >::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&_Binder<>::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<void,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > * __thiscall std::_Func_impl_no_alloc<class std::_Binder<struct
// std::_Unforced,void (__thiscall Screen_UpgradeTerminal::*)(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_UpgradeTerminal *,struct std::_Ph<1> const &,struct
// std::_Ph<2> const &>,void,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >
// >::_Move(void *)

_Func_base<> * __thiscall
std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  *(_Func_impl_no_alloc<> *)((int)param_1 + 8) = this[8];
  *(_Func_impl_no_alloc<> *)((int)param_1 + 9) = this[9];
  *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  return param_1;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_WeaponTerminal::*)(bool,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_WeaponTerminal *,struct std::_Ph<1> const &,struct
// std::_Ph<2> const &>,void,bool,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >
// >::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&_Binder<>::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<void,bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > * __thiscall std::_Func_impl_no_alloc<class std::_Binder<struct
// std::_Unforced,void (__thiscall Screen_WeaponTerminal::*)(bool,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_WeaponTerminal *,struct std::_Ph<1> const &,struct
// std::_Ph<2> const &>,void,bool,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >
// >::_Copy(void *)const 

_Func_base<> * __thiscall
std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  *(_Func_impl_no_alloc<> *)((int)param_1 + 8) = this[8];
  *(_Func_impl_no_alloc<> *)((int)param_1 + 9) = this[9];
  *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  return param_1;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_WeaponTerminal::*)(void),class
// Screen_WeaponTerminal *>,void>::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&_Binder<>::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<void> * __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_WeaponTerminal::*)(void),class
// Screen_WeaponTerminal *>,void>::_Move(void *)

_Func_base<void> * __thiscall
std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)((int)param_1 + 8) = *(undefined4 *)(this + 8);
  return param_1;
}


// private: virtual class type_info const & __thiscall std::_Func_impl_no_alloc<class
// std::_Binder<struct std::_Unforced,void (__thiscall Screen_WeaponTerminal::*)(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_WeaponTerminal *,struct std::_Ph<1> const &,struct
// std::_Ph<2> const &>,void,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >
// >::_Target_type(void)const 

type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this)

{
  return (type_info *)&_Binder<>::RTTI_Type_Descriptor;
}


// private: virtual class std::_Func_base<void,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > * __thiscall std::_Func_impl_no_alloc<class std::_Binder<struct
// std::_Unforced,void (__thiscall Screen_WeaponTerminal::*)(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >),class Screen_WeaponTerminal *,struct std::_Ph<1> const &,struct
// std::_Ph<2> const &>,void,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >
// >::_Move(void *)

_Func_base<> * __thiscall
std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1)

{
  *(undefined ***)param_1 = vftable;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 4);
  *(_Func_impl_no_alloc<> *)((int)param_1 + 8) = this[8];
  *(_Func_impl_no_alloc<> *)((int)param_1 + 9) = this[9];
  *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  return param_1;
}
