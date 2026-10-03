#include "../ois.exe.h"


// public: struct std::_Tree_node<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,struct Variable>,void *> * __thiscall
// std::_Tree_comp_alloc<class std::_Tmap_traits<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,struct Variable,struct std::less<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class
// std::allocator<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,struct Variable> >,0> >::_Buyheadnode(void)

_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buyheadnode(_Tree_comp_alloc<> *this)

{
  _Tree_node<> *p_Var1;
  
  p_Var1 = operator_new(0x50);
  *(_Tree_node<> **)p_Var1 = p_Var1;
  *(_Tree_node<> **)(p_Var1 + 4) = p_Var1;
  *(_Tree_node<> **)(p_Var1 + 8) = p_Var1;
  *(undefined2 *)(p_Var1 + 0xc) = 0x101;
  return p_Var1;
}


// public: struct std::_Tree_node<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,float>,void *> * __thiscall
// std::_Tree_comp_alloc<class std::_Tmap_traits<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,float,struct std::less<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class
// std::allocator<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,float> >,0> >::_Buyheadnode(void)

_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buyheadnode(_Tree_comp_alloc<> *this)

{
  _Tree_node<> *p_Var1;
  
  p_Var1 = operator_new(0x2c);
  *(_Tree_node<> **)p_Var1 = p_Var1;
  *(_Tree_node<> **)(p_Var1 + 4) = p_Var1;
  *(_Tree_node<> **)(p_Var1 + 8) = p_Var1;
  *(undefined2 *)(p_Var1 + 0xc) = 0x101;
  return p_Var1;
}


// public: struct std::_Tree_node<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,int>,void *> * __thiscall
// std::_Tree_comp_alloc<class std::_Tmap_traits<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,int,struct std::less<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class
// std::allocator<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,int> >,0> >::_Buynode<struct std::piecewise_construct_t const
// &,class std::tuple<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const &>,class std::tuple<> >(struct std::piecewise_construct_t const
// &,class std::tuple<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const &> &&,class std::tuple<> &&)

_Tree_node<> * __thiscall
std::_Tree_comp_alloc<>::_Buynode<>
          (_Tree_comp_alloc<> *this,piecewise_construct_t *param_1,tuple<> *param_2,tuple<> *param_3
          )

{
  _Tree_node<> *p_Var1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b2750;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  p_Var1 = _Tree_comp_alloc<>::_Buynode0((_Tree_comp_alloc<> *)this);
  local_8 = 0;
  *(undefined2 *)(p_Var1 + 0xc) = 0;
  basic_string<>::basic_string<>((basic_string<> *)(p_Var1 + 0x10),*(basic_string<> **)param_2);
  *(undefined4 *)(p_Var1 + 0x28) = 0;
  ExceptionList = local_10;
  return (_Tree_node<> *)p_Var1;
}


// public: struct std::_Tree_node<struct std::pair<int const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,void *> * __thiscall
// std::_Tree_comp_alloc<class std::_Tmap_traits<int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,struct std::less<int>,class
// std::allocator<struct std::pair<int const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > >,0> >::_Buynode<struct
// std::piecewise_construct_t const &,class std::tuple<int &&>,class std::tuple<> >(struct
// std::piecewise_construct_t const &,class std::tuple<int &&> &&,class std::tuple<> &&)

_Tree_node<> * __thiscall
std::_Tree_comp_alloc<>::_Buynode<>
          (_Tree_comp_alloc<> *this,piecewise_construct_t *param_1,tuple<int&&> *param_2,
          tuple<> *param_3)

{
  _Tree_node<> *p_Var1;
  
  p_Var1 = _Buynode0(this);
  *(undefined2 *)(p_Var1 + 0xc) = 0;
  *(undefined4 *)(p_Var1 + 0x10) = **(undefined4 **)param_2;
  *(undefined4 *)(p_Var1 + 0x24) = 0;
  *(undefined4 *)(p_Var1 + 0x28) = 0xf;
  p_Var1[0x14] = (_Tree_node<>)0x0;
  return p_Var1;
}


// public: void __thiscall std::_Tree_comp_alloc<class std::_Tmap_traits<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,bool,struct
// std::less<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// >,class std::allocator<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,bool> >,0> >::_Freenode0(struct
// std::_Tree_node<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,bool>,void *> *)

void __thiscall std::_Tree_comp_alloc<>::_Freenode0(_Tree_comp_alloc<> *this,_Tree_node<> *param_1)

{
  operator_delete(param_1,(nothrow_t *)0x2c);
  return;
}


// public: struct std::_Tree_node<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,bool>,void *> * __thiscall
// std::_Tree_comp_alloc<class std::_Tmap_traits<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,bool,struct std::less<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class
// std::allocator<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,bool> >,0> >::_Buynode0(void)

_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buynode0(_Tree_comp_alloc<> *this)

{
  _Tree_node<> *p_Var1;
  
  p_Var1 = operator_new(0x2c);
  *(undefined4 *)p_Var1 = *(undefined4 *)this;
  *(undefined4 *)(p_Var1 + 4) = *(undefined4 *)this;
  *(undefined4 *)(p_Var1 + 8) = *(undefined4 *)this;
  return p_Var1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: struct std::_Tree_node<struct std::pair<int const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,void *> * __thiscall
// std::_Tree_comp_alloc<class std::_Tmap_traits<int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,struct std::less<int>,class
// std::allocator<struct std::pair<int const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > >,0> >::_Buynode0(void)

_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buynode0(_Tree_comp_alloc<> *this)

{
  _Tree_node<> *p_Var1;
  
  p_Var1 = operator_new(0x2c);
  *(undefined4 *)p_Var1 = _startStationsPersector;
  *(undefined4 *)(p_Var1 + 4) = _startStationsPersector;
  *(undefined4 *)(p_Var1 + 8) = _startStationsPersector;
  return p_Var1;
}


// public: __thiscall std::_Tree_comp_alloc<class std::_Tmap_traits<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct
// std::less<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// >,class std::allocator<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > >,0> >::~_Tree_comp_alloc<class
// std::_Tmap_traits<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,struct std::less<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,class std::allocator<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >,0> >(void)

void __thiscall std::_Tree_comp_alloc<>::~_Tree_comp_alloc<>(_Tree_comp_alloc<> *this)

{
  operator_delete(*(void **)this,(nothrow_t *)&DAT_00000040);
  return;
}


// public: struct std::_Tree_node<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,void *> * __thiscall
// std::_Tree_comp_alloc<class std::_Tmap_traits<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,struct std::less<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class
// std::allocator<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >,0> >::_Buynode<struct std::piecewise_construct_t const &,class
// std::tuple<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// > &&>,class std::tuple<> >(struct std::piecewise_construct_t const &,class std::tuple<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &&> &&,class
// std::tuple<> &&)

_Tree_node<> * __thiscall
std::_Tree_comp_alloc<>::_Buynode<>
          (_Tree_comp_alloc<> *this,piecewise_construct_t *param_1,tuple<> *param_2,tuple<> *param_3
          )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  _Tree_node<> *p_Var5;
  
  p_Var5 = _Buynode0(this);
  *(undefined2 *)(p_Var5 + 0xc) = 0;
  puVar1 = *(undefined4 **)param_2;
  *(undefined4 *)(p_Var5 + 0x20) = 0;
  *(undefined4 *)(p_Var5 + 0x24) = 0;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(p_Var5 + 0x10) = *puVar1;
  *(undefined4 *)(p_Var5 + 0x14) = uVar2;
  *(undefined4 *)(p_Var5 + 0x18) = uVar3;
  *(undefined4 *)(p_Var5 + 0x1c) = uVar4;
  *(undefined8 *)(p_Var5 + 0x20) = *(undefined8 *)(puVar1 + 4);
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *(undefined4 *)(p_Var5 + 0x38) = 0;
  *(undefined4 *)(p_Var5 + 0x3c) = 0xf;
  p_Var5[0x28] = (_Tree_node<>)0x0;
  return p_Var5;
}


// public: void __thiscall std::_Tree_comp_alloc<class std::_Tmap_traits<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct
// std::less<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// >,class std::allocator<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > >,0> >::_Freenode0(struct
// std::_Tree_node<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > >,void *> *)

void __thiscall std::_Tree_comp_alloc<>::_Freenode0(_Tree_comp_alloc<> *this,_Tree_node<> *param_1)

{
  operator_delete(param_1,(nothrow_t *)&DAT_00000040);
  return;
}


// public: struct std::_Tree_node<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,void *> * __thiscall
// std::_Tree_comp_alloc<class std::_Tmap_traits<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,struct std::less<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class
// std::allocator<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >,0> >::_Buynode0(void)

_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buynode0(_Tree_comp_alloc<> *this)

{
  _Tree_node<> *p_Var1;
  
  p_Var1 = operator_new(0x40);
  *(undefined4 *)p_Var1 = *(undefined4 *)this;
  *(undefined4 *)(p_Var1 + 4) = *(undefined4 *)this;
  *(undefined4 *)(p_Var1 + 8) = *(undefined4 *)this;
  return p_Var1;
}


// public: struct std::_Tree_node<struct std::pair<int const ,int>,void *> * __thiscall
// std::_Tree_comp_alloc<class std::_Tmap_traits<int,int,struct std::less<int>,class
// std::allocator<struct std::pair<int const ,int> >,0> >::_Buynode<struct
// std::piecewise_construct_t const &,class std::tuple<int &&>,class std::tuple<> >(struct
// std::piecewise_construct_t const &,class std::tuple<int &&> &&,class std::tuple<> &&)

_Tree_node<> * __thiscall
std::_Tree_comp_alloc<>::_Buynode<>
          (_Tree_comp_alloc<> *this,piecewise_construct_t *param_1,tuple<int&&> *param_2,
          tuple<> *param_3)

{
  _Tree_node<> *p_Var1;
  
  p_Var1 = _Buynode0(this);
  *(undefined2 *)(p_Var1 + 0xc) = 0;
  *(undefined4 *)(p_Var1 + 0x10) = **(undefined4 **)param_2;
  *(undefined4 *)(p_Var1 + 0x14) = 0;
  return p_Var1;
}


// public: struct std::_Tree_node<struct std::pair<int const ,int>,void *> * __thiscall
// std::_Tree_comp_alloc<class std::_Tmap_traits<int,int,struct std::less<int>,class
// std::allocator<struct std::pair<int const ,int> >,0> >::_Buynode0(void)

_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buynode0(_Tree_comp_alloc<> *this)

{
  _Tree_node<> *p_Var1;
  
  p_Var1 = operator_new(0x18);
  *(undefined4 *)p_Var1 = *(undefined4 *)this;
  *(undefined4 *)(p_Var1 + 4) = *(undefined4 *)this;
  *(undefined4 *)(p_Var1 + 8) = *(undefined4 *)this;
  return p_Var1;
}


// public: struct std::_Tree_node<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > >,void *> * __thiscall std::_Tree_comp_alloc<class
// std::_Tmap_traits<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >,struct
// std::less<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// >,class std::allocator<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > >,0> >::_Buyheadnode(void)

_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buyheadnode(_Tree_comp_alloc<> *this)

{
  _Tree_node<> *p_Var1;
  
  p_Var1 = operator_new(0x34);
  *(_Tree_node<> **)p_Var1 = p_Var1;
  *(_Tree_node<> **)(p_Var1 + 4) = p_Var1;
  *(_Tree_node<> **)(p_Var1 + 8) = p_Var1;
  *(undefined2 *)(p_Var1 + 0xc) = 0x101;
  return p_Var1;
}


// public: struct std::_Tree_node<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,void *> * __thiscall
// std::_Tree_comp_alloc<class std::_Tmap_traits<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,struct std::less<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class
// std::allocator<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >,0> >::_Buyheadnode(void)

_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buyheadnode(_Tree_comp_alloc<> *this)

{
  _Tree_node<> *p_Var1;
  
  p_Var1 = operator_new(0x40);
  *(_Tree_node<> **)p_Var1 = p_Var1;
  *(_Tree_node<> **)(p_Var1 + 4) = p_Var1;
  *(_Tree_node<> **)(p_Var1 + 8) = p_Var1;
  *(undefined2 *)(p_Var1 + 0xc) = 0x101;
  return p_Var1;
}


// public: struct std::_Tree_node<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > >,void *> * __thiscall std::_Tree_comp_alloc<class
// std::_Tmap_traits<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >,struct
// std::less<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// >,class std::allocator<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > >,0> >::_Buynode<struct std::piecewise_construct_t const &,class
// std::tuple<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// > &&>,class std::tuple<> >(struct std::piecewise_construct_t const &,class std::tuple<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &&> &&,class
// std::tuple<> &&)

_Tree_node<> * __thiscall
std::_Tree_comp_alloc<>::_Buynode<>
          (_Tree_comp_alloc<> *this,piecewise_construct_t *param_1,tuple<> *param_2,tuple<> *param_3
          )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  _Tree_node<> *p_Var5;
  
  p_Var5 = _Buynode0(this);
  *(undefined2 *)(p_Var5 + 0xc) = 0;
  puVar1 = *(undefined4 **)param_2;
  *(undefined4 *)(p_Var5 + 0x20) = 0;
  *(undefined4 *)(p_Var5 + 0x24) = 0;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(p_Var5 + 0x10) = *puVar1;
  *(undefined4 *)(p_Var5 + 0x14) = uVar2;
  *(undefined4 *)(p_Var5 + 0x18) = uVar3;
  *(undefined4 *)(p_Var5 + 0x1c) = uVar4;
  *(undefined8 *)(p_Var5 + 0x20) = *(undefined8 *)(puVar1 + 4);
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *(undefined4 *)(p_Var5 + 0x28) = 0;
  *(undefined4 *)(p_Var5 + 0x2c) = 0;
  *(undefined4 *)(p_Var5 + 0x30) = 0;
  return p_Var5;
}


// public: struct std::_Tree_node<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > >,void *> * __thiscall std::_Tree_comp_alloc<class
// std::_Tmap_traits<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >,struct
// std::less<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// >,class std::allocator<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > >,0> >::_Buynode<struct std::piecewise_construct_t const &,class
// std::tuple<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// > const &>,class std::tuple<> >(struct std::piecewise_construct_t const &,class std::tuple<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &>
// &&,class std::tuple<> &&)

_Tree_node<> * __thiscall
std::_Tree_comp_alloc<>::_Buynode<>
          (_Tree_comp_alloc<> *this,piecewise_construct_t *param_1,tuple<> *param_2,tuple<> *param_3
          )

{
  _Tree_node<> *p_Var1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005baa10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  p_Var1 = _Buynode0(this);
  local_8 = 0;
  *(undefined2 *)(p_Var1 + 0xc) = 0;
  basic_string<>::basic_string<>((basic_string<> *)(p_Var1 + 0x10),*(basic_string<> **)param_2);
  *(undefined4 *)(p_Var1 + 0x28) = 0;
  *(undefined4 *)(p_Var1 + 0x2c) = 0;
  *(undefined4 *)(p_Var1 + 0x30) = 0;
  ExceptionList = local_10;
  return p_Var1;
}


// public: struct std::_Tree_node<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,void *> * __thiscall
// std::_Tree_comp_alloc<class std::_Tmap_traits<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,struct std::less<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class
// std::allocator<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >,0> >::_Buynode<struct std::piecewise_construct_t const &,class
// std::tuple<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// > const &>,class std::tuple<> >(struct std::piecewise_construct_t const &,class std::tuple<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &>
// &&,class std::tuple<> &&)

_Tree_node<> * __thiscall
std::_Tree_comp_alloc<>::_Buynode<>
          (_Tree_comp_alloc<> *this,piecewise_construct_t *param_1,tuple<> *param_2,tuple<> *param_3
          )

{
  _Tree_node<> *p_Var1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005baa30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  p_Var1 = _Buynode0(this);
  local_8 = 0;
  *(undefined2 *)(p_Var1 + 0xc) = 0;
  basic_string<>::basic_string<>((basic_string<> *)(p_Var1 + 0x10),*(basic_string<> **)param_2);
  *(undefined4 *)(p_Var1 + 0x38) = 0;
  *(undefined4 *)(p_Var1 + 0x3c) = 0xf;
  p_Var1[0x28] = (_Tree_node<>)0x0;
  ExceptionList = local_10;
  return p_Var1;
}


// public: void __thiscall std::_Tree_comp_alloc<class std::_Tmap_traits<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >,struct std::less<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,class std::allocator<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > >,0> >::_Freenode0(struct std::_Tree_node<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > >,void *> *)

void __thiscall std::_Tree_comp_alloc<>::_Freenode0(_Tree_comp_alloc<> *this,_Tree_node<> *param_1)

{
  operator_delete(param_1,(nothrow_t *)0x34);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: struct std::_Tree_node<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > >,void *> * __thiscall std::_Tree_comp_alloc<class
// std::_Tmap_traits<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >,struct
// std::less<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// >,class std::allocator<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > >,0> >::_Buynode0(void)

_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buynode0(_Tree_comp_alloc<> *this)

{
  _Tree_node<> *p_Var1;
  
  p_Var1 = operator_new(0x34);
  *(undefined4 *)p_Var1 = _multiData;
  *(undefined4 *)(p_Var1 + 4) = _multiData;
  *(undefined4 *)(p_Var1 + 8) = _multiData;
  return p_Var1;
}


// public: struct std::_Tree_node<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,void *> * __thiscall
// std::_Tree_comp_alloc<class std::_Tmap_traits<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,struct std::less<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class
// std::allocator<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >,0> >::_Buynode<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > &>(struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > &)

_Tree_node<> * __thiscall
std::_Tree_comp_alloc<>::_Buynode<>(_Tree_comp_alloc<> *this,pair<> *param_1)

{
  _Tree_node<> *p_Var1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005bab48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  p_Var1 = _Buynode0(this);
  local_8 = 0;
  *(undefined2 *)(p_Var1 + 0xc) = 0;
  basic_string<>::basic_string<>((basic_string<> *)(p_Var1 + 0x10),(basic_string<> *)param_1);
  local_8 = CONCAT31(local_8._1_3_,1);
  basic_string<>::basic_string<>
            ((basic_string<> *)(p_Var1 + 0x28),(basic_string<> *)(param_1 + 0x18));
  ExceptionList = local_10;
  return p_Var1;
}


// public: struct std::_Tree_node<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,bool>,void *> * __thiscall
// std::_Tree_comp_alloc<class std::_Tmap_traits<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,bool,struct std::less<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class
// std::allocator<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,bool> >,0> >::_Buynode<struct std::piecewise_construct_t const
// &,class std::tuple<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const &>,class std::tuple<> >(struct std::piecewise_construct_t const
// &,class std::tuple<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const &> &&,class std::tuple<> &&)

_Tree_node<> * __thiscall
std::_Tree_comp_alloc<>::_Buynode<>
          (_Tree_comp_alloc<> *this,piecewise_construct_t *param_1,tuple<> *param_2,tuple<> *param_3
          )

{
  _Tree_node<> *p_Var1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005bd2b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  p_Var1 = _Buynode0(this);
  local_8 = 0;
  *(undefined2 *)(p_Var1 + 0xc) = 0;
  basic_string<>::basic_string<>((basic_string<> *)(p_Var1 + 0x10),*(basic_string<> **)param_2);
  p_Var1[0x28] = (_Tree_node<>)0x0;
  ExceptionList = local_10;
  return p_Var1;
}


// public: struct std::_Tree_node<struct std::pair<enum cocos2d::EventKeyboard::KeyCode const
// ,char>,void *> * __thiscall std::_Tree_comp_alloc<class std::_Tmap_traits<enum
// cocos2d::EventKeyboard::KeyCode,char,struct std::less<enum cocos2d::EventKeyboard::KeyCode>,class
// std::allocator<struct std::pair<enum cocos2d::EventKeyboard::KeyCode const ,char> >,0>
// >::_Buyheadnode(void)

_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buyheadnode(_Tree_comp_alloc<> *this)

{
  _Tree_node<> *p_Var1;
  
  p_Var1 = operator_new(0x18);
  *(_Tree_node<> **)p_Var1 = p_Var1;
  *(_Tree_node<> **)(p_Var1 + 4) = p_Var1;
  *(_Tree_node<> **)(p_Var1 + 8) = p_Var1;
  *(undefined2 *)(p_Var1 + 0xc) = 0x101;
  return p_Var1;
}


// public: struct std::_Tree_node<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,int>,void *> * __thiscall
// std::_Tree_comp_alloc<class std::_Tmap_traits<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,int,struct std::less<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class
// std::allocator<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,int> >,0> >::_Buynode<struct std::piecewise_construct_t const
// &,class std::tuple<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > &&>,class std::tuple<> >(struct std::piecewise_construct_t const &,class
// std::tuple<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// > &&> &&,class std::tuple<> &&)

_Tree_node<> * __thiscall
std::_Tree_comp_alloc<>::_Buynode<>
          (_Tree_comp_alloc<> *this,piecewise_construct_t *param_1,tuple<> *param_2,tuple<> *param_3
          )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  _Tree_node<> *p_Var5;
  
  p_Var5 = _Tree_comp_alloc<>::_Buynode0((_Tree_comp_alloc<> *)this);
  *(undefined2 *)(p_Var5 + 0xc) = 0;
  puVar1 = *(undefined4 **)param_2;
  *(undefined4 *)(p_Var5 + 0x20) = 0;
  *(undefined4 *)(p_Var5 + 0x24) = 0;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(p_Var5 + 0x10) = *puVar1;
  *(undefined4 *)(p_Var5 + 0x14) = uVar2;
  *(undefined4 *)(p_Var5 + 0x18) = uVar3;
  *(undefined4 *)(p_Var5 + 0x1c) = uVar4;
  *(undefined8 *)(p_Var5 + 0x20) = *(undefined8 *)(puVar1 + 4);
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *(undefined4 *)(p_Var5 + 0x28) = 0;
  return (_Tree_node<> *)p_Var5;
}


// public: struct std::_Tree_node<struct std::pair<enum cocos2d::EventKeyboard::KeyCode const
// ,char>,void *> * __thiscall std::_Tree_comp_alloc<class std::_Tmap_traits<enum
// cocos2d::EventKeyboard::KeyCode,char,struct std::less<enum cocos2d::EventKeyboard::KeyCode>,class
// std::allocator<struct std::pair<enum cocos2d::EventKeyboard::KeyCode const ,char> >,0>
// >::_Buynode<struct std::piecewise_construct_t const &,class std::tuple<enum
// cocos2d::EventKeyboard::KeyCode const &>,class std::tuple<> >(struct std::piecewise_construct_t
// const &,class std::tuple<enum cocos2d::EventKeyboard::KeyCode const &> &&,class std::tuple<> &&)

_Tree_node<> * __thiscall
std::_Tree_comp_alloc<>::_Buynode<>
          (_Tree_comp_alloc<> *this,piecewise_construct_t *param_1,tuple<> *param_2,tuple<> *param_3
          )

{
  _Tree_node<> *p_Var1;
  
  p_Var1 = _Tree_comp_alloc<>::_Buynode0((_Tree_comp_alloc<> *)this);
  *(undefined2 *)(p_Var1 + 0xc) = 0;
  *(undefined4 *)(p_Var1 + 0x10) = **(undefined4 **)param_2;
  p_Var1[0x14] = (_Tree_node<>)0x0;
  return (_Tree_node<> *)p_Var1;
}


// public: struct std::_Tree_node<class PathNode *,void *> * __thiscall std::_Tree_comp_alloc<class
// std::_Tset_traits<class PathNode *,struct PathContext::NodeTotalWeightCompare,class
// std::allocator<class PathNode *>,1> >::_Buyheadnode(void)

_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buyheadnode(_Tree_comp_alloc<> *this)

{
  _Tree_node<> *p_Var1;
  
  p_Var1 = operator_new(0x14);
  *(_Tree_node<> **)p_Var1 = p_Var1;
  *(_Tree_node<> **)(p_Var1 + 4) = p_Var1;
  *(_Tree_node<> **)(p_Var1 + 8) = p_Var1;
  *(undefined2 *)(p_Var1 + 0xc) = 0x101;
  return p_Var1;
}


// public: struct std::_Tree_node<class PathNode *,void *> * __thiscall std::_Tree_comp_alloc<class
// std::_Tset_traits<class PathNode *,struct PathContext::NodeTotalWeightCompare,class
// std::allocator<class PathNode *>,1> >::_Buynode<class PathNode * const &>(class PathNode * const
// &)

_Tree_node<> * __thiscall
std::_Tree_comp_alloc<>::_Buynode<>(_Tree_comp_alloc<> *this,PathNode **param_1)

{
  _Tree_node<> *p_Var1;
  
  p_Var1 = _Buynode0(this);
  *(undefined2 *)(p_Var1 + 0xc) = 0;
  *(PathNode **)(p_Var1 + 0x10) = *param_1;
  return p_Var1;
}


// public: struct std::_Tree_node<class PathNode *,void *> * __thiscall std::_Tree_comp_alloc<class
// std::_Tset_traits<class PathNode *,struct PathContext::NodeTotalWeightCompare,class
// std::allocator<class PathNode *>,1> >::_Buynode0(void)

_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buynode0(_Tree_comp_alloc<> *this)

{
  _Tree_node<> *p_Var1;
  
  p_Var1 = operator_new(0x14);
  *(undefined4 *)p_Var1 = *(undefined4 *)this;
  *(undefined4 *)(p_Var1 + 4) = *(undefined4 *)this;
  *(undefined4 *)(p_Var1 + 8) = *(undefined4 *)this;
  return p_Var1;
}
