#include "../ois.exe.h"


// public: __thiscall std::map<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,int,struct std::less<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,class std::allocator<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,int> >
// >::~map<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,int,struct std::less<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > >,class std::allocator<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,int> >
// >(void)

void __thiscall std::map<>::~map<>(map<> *this)

{
  int iVar1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b1790;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *(int *)this;
  local_8 = 0;
  _Tree<>::_Erase((_Tree<> *)this,*(_Tree_node<> **)(iVar1 + 4));
  *(int *)(*(int *)this + 4) = iVar1;
  **(int **)this = iVar1;
  *(int *)(*(int *)this + 8) = iVar1;
  *(undefined4 *)(this + 4) = 0;
  operator_delete(*(void **)this,(nothrow_t *)0x2c);
  ExceptionList = local_10;
  return;
}


// public: int & __thiscall std::map<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,int,struct std::less<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class
// std::allocator<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,int> > >::operator[](class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const &)

int * __thiscall std::map<>::operator[](map<> *this,basic_string<> *param_1)

{
  uint uVar1;
  uint uVar2;
  basic_string<> *pbVar3;
  basic_string<> *pbVar4;
  uint uVar5;
  _Tree_node<> *p_Var6;
  piecewise_construct_t *extraout_ECX;
  piecewise_construct_t *ppVar7;
  piecewise_construct_t *ppVar8;
  bool bVar9;
  
  pbVar3 = param_1;
  _Tree<>::lower_bound((_Tree<> *)this,(basic_string<> *)&param_1);
  pbVar4 = param_1;
  ppVar7 = extraout_ECX;
  if (param_1 == *(basic_string<> **)this) goto LAB_0041323b;
  ppVar8 = (piecewise_construct_t *)(param_1 + 0x10);
  if (0xf < *(uint *)(param_1 + 0x24)) {
    ppVar8 = *(piecewise_construct_t **)(param_1 + 0x10);
  }
  ppVar7 = (piecewise_construct_t *)pbVar3;
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    ppVar7 = *(piecewise_construct_t **)pbVar3;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar5 = *(uint *)(pbVar3 + 0x10);
  if (uVar1 < *(uint *)(pbVar3 + 0x10)) {
    uVar5 = uVar1;
  }
  while (uVar2 = uVar5 - 4, 3 < uVar5) {
    if (*(int *)ppVar7 != *(int *)ppVar8) goto LAB_004131f6;
    ppVar7 = ppVar7 + 4;
    ppVar8 = ppVar8 + 4;
    uVar5 = uVar2;
  }
  if (uVar2 == 0xfffffffc) {
LAB_0041322a:
    uVar5 = 0;
  }
  else {
LAB_004131f6:
    bVar9 = (byte)*ppVar7 < (byte)*ppVar8;
    if ((*ppVar7 == *ppVar8) &&
       ((uVar2 == 0xfffffffd ||
        ((bVar9 = (byte)ppVar7[1] < (byte)ppVar8[1], ppVar7[1] == ppVar8[1] &&
         ((uVar2 == 0xfffffffe ||
          ((bVar9 = (byte)ppVar7[2] < (byte)ppVar8[2], ppVar7[2] == ppVar8[2] &&
           ((uVar2 == 0xffffffff ||
            (bVar9 = (byte)ppVar7[3] < (byte)ppVar8[3], ppVar7[3] == ppVar8[3]))))))))))))
    goto LAB_0041322a;
    uVar5 = -(uint)bVar9 | 1;
  }
  if (uVar5 == 0) {
    if (uVar1 <= *(uint *)(pbVar3 + 0x10)) {
LAB_0041326d:
      return (int *)(param_1 + 0x28);
    }
  }
  else if (-1 < (int)uVar5) goto LAB_0041326d;
LAB_0041323b:
  param_1 = pbVar3;
  p_Var6 = _Tree_comp_alloc<>::_Buynode<>
                     ((_Tree_comp_alloc<> *)this,ppVar7,(tuple<> *)&param_1,(tuple<> *)ppVar7);
  _Tree<>::_Insert_hint<>((_Tree<> *)this,&param_1,pbVar4,p_Var6 + 0x10,p_Var6);
  return (int *)(param_1 + 0x28);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
// __thiscall std::map<int,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,struct std::less<int>,class std::allocator<struct std::pair<int const
// ,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >
// >::operator[](int &&)

basic_string<> * __thiscall std::map<>::operator[](map<> *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*(char *)((int)_startStationsPersector[1] + 0xd) == '\0') {
    this = (map<> *)*param_1;
    puVar1 = (undefined4 *)_startStationsPersector[1];
    puVar3 = _startStationsPersector;
    do {
      if ((int)puVar1[4] < (int)this) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
    if ((puVar3 != _startStationsPersector) && ((int)puVar3[4] <= (int)this)) {
      return (basic_string<> *)(puVar3 + 5);
    }
  }
  _Tree_comp_alloc<>::_Buynode<>
            ((_Tree_comp_alloc<> *)this,(piecewise_construct_t *)this,(tuple<int&&> *)&param_1,
             (tuple<> *)this);
  _Tree<>::_Insert_hint<>();
  return (basic_string<> *)(param_1 + 5);
}


// public: __thiscall std::map<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,struct std::less<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,class std::allocator<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >
// >::~map<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct
// std::less<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// >,class std::allocator<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > >(void)

void __thiscall std::map<>::~map<>(map<> *this)

{
  map<> *local_8;
  
  local_8 = this;
  _Tree<>::erase((_Tree<> *)this,&local_8,**(undefined4 **)this,*(undefined4 **)this);
  operator_delete(*(void **)this,(nothrow_t *)&DAT_00000040);
  return;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
// __thiscall std::map<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,struct std::less<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,class std::allocator<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >
// >::operator[](class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > &&)

basic_string<> * __thiscall std::map<>::operator[](map<> *this,basic_string<> *param_1)

{
  uint uVar1;
  uint uVar2;
  basic_string<> *pbVar3;
  basic_string<> *pbVar4;
  uint uVar5;
  _Tree_node<> *p_Var6;
  piecewise_construct_t *extraout_ECX;
  piecewise_construct_t *ppVar7;
  piecewise_construct_t *ppVar8;
  bool bVar9;
  
  pbVar3 = param_1;
  _Tree<>::lower_bound((_Tree<> *)this,(basic_string<> *)&param_1);
  pbVar4 = param_1;
  ppVar7 = extraout_ECX;
  if (param_1 == *(basic_string<> **)this) goto LAB_004196eb;
  ppVar8 = (piecewise_construct_t *)(param_1 + 0x10);
  if (0xf < *(uint *)(param_1 + 0x24)) {
    ppVar8 = *(piecewise_construct_t **)(param_1 + 0x10);
  }
  ppVar7 = (piecewise_construct_t *)pbVar3;
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    ppVar7 = *(piecewise_construct_t **)pbVar3;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar5 = *(uint *)(pbVar3 + 0x10);
  if (uVar1 < *(uint *)(pbVar3 + 0x10)) {
    uVar5 = uVar1;
  }
  while (uVar2 = uVar5 - 4, 3 < uVar5) {
    if (*(int *)ppVar7 != *(int *)ppVar8) goto LAB_004196a6;
    ppVar7 = ppVar7 + 4;
    ppVar8 = ppVar8 + 4;
    uVar5 = uVar2;
  }
  if (uVar2 == 0xfffffffc) {
LAB_004196da:
    uVar5 = 0;
  }
  else {
LAB_004196a6:
    bVar9 = (byte)*ppVar7 < (byte)*ppVar8;
    if ((*ppVar7 == *ppVar8) &&
       ((uVar2 == 0xfffffffd ||
        ((bVar9 = (byte)ppVar7[1] < (byte)ppVar8[1], ppVar7[1] == ppVar8[1] &&
         ((uVar2 == 0xfffffffe ||
          ((bVar9 = (byte)ppVar7[2] < (byte)ppVar8[2], ppVar7[2] == ppVar8[2] &&
           ((uVar2 == 0xffffffff ||
            (bVar9 = (byte)ppVar7[3] < (byte)ppVar8[3], ppVar7[3] == ppVar8[3]))))))))))))
    goto LAB_004196da;
    uVar5 = -(uint)bVar9 | 1;
  }
  if (uVar5 == 0) {
    if (uVar1 <= *(uint *)(pbVar3 + 0x10)) {
LAB_0041971d:
      return (basic_string<> *)(param_1 + 0x28);
    }
  }
  else if (-1 < (int)uVar5) goto LAB_0041971d;
LAB_004196eb:
  param_1 = pbVar3;
  p_Var6 = _Tree_comp_alloc<>::_Buynode<>
                     ((_Tree_comp_alloc<> *)this,ppVar7,(tuple<> *)&param_1,(tuple<> *)ppVar7);
  _Tree<>::_Insert_hint<>((_Tree<> *)this,&param_1,pbVar4,p_Var6 + 0x10,p_Var6);
  return (basic_string<> *)(param_1 + 0x28);
}


// public: struct std::pair<class std::_Tree_iterator<class std::_Tree_val<struct
// std::_Tree_simple_types<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > > >,bool> __thiscall std::map<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct
// std::less<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// >,class std::allocator<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > >::_Try_emplace<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &&)

void __thiscall std::map<>::_Try_emplace<>(map<> *this,basic_string<> *param_1)

{
  uint uVar1;
  uint uVar2;
  piecewise_construct_t *ppVar3;
  piecewise_construct_t *ppVar4;
  uint uVar5;
  _Tree_node<> *p_Var6;
  piecewise_construct_t *extraout_ECX;
  piecewise_construct_t *ppVar7;
  piecewise_construct_t *ppVar8;
  bool bVar9;
  piecewise_construct_t *in_stack_00000008;
  
  ppVar3 = in_stack_00000008;
  _Tree<>::lower_bound((_Tree<> *)this,(basic_string<> *)&stack0x00000008);
  ppVar4 = in_stack_00000008;
  ppVar7 = extraout_ECX;
  if (in_stack_00000008 == *(piecewise_construct_t **)this) goto LAB_00419f7b;
  ppVar8 = in_stack_00000008 + 0x10;
  if (0xf < *(uint *)(in_stack_00000008 + 0x24)) {
    ppVar8 = *(piecewise_construct_t **)(in_stack_00000008 + 0x10);
  }
  ppVar7 = ppVar3;
  if (0xf < *(uint *)(ppVar3 + 0x14)) {
    ppVar7 = *(piecewise_construct_t **)ppVar3;
  }
  uVar1 = *(uint *)(in_stack_00000008 + 0x20);
  uVar5 = *(uint *)(ppVar3 + 0x10);
  if (uVar1 < *(uint *)(ppVar3 + 0x10)) {
    uVar5 = uVar1;
  }
  while (uVar2 = uVar5 - 4, 3 < uVar5) {
    if (*(int *)ppVar7 != *(int *)ppVar8) goto LAB_00419f36;
    ppVar7 = ppVar7 + 4;
    ppVar8 = ppVar8 + 4;
    uVar5 = uVar2;
  }
  if (uVar2 == 0xfffffffc) {
LAB_00419f6a:
    uVar5 = 0;
  }
  else {
LAB_00419f36:
    bVar9 = (byte)*ppVar7 < (byte)*ppVar8;
    if ((*ppVar7 == *ppVar8) &&
       ((uVar2 == 0xfffffffd ||
        ((bVar9 = (byte)ppVar7[1] < (byte)ppVar8[1], ppVar7[1] == ppVar8[1] &&
         ((uVar2 == 0xfffffffe ||
          ((bVar9 = (byte)ppVar7[2] < (byte)ppVar8[2], ppVar7[2] == ppVar8[2] &&
           ((uVar2 == 0xffffffff ||
            (bVar9 = (byte)ppVar7[3] < (byte)ppVar8[3], ppVar7[3] == ppVar8[3]))))))))))))
    goto LAB_00419f6a;
    uVar5 = -(uint)bVar9 | 1;
  }
  if (uVar5 == 0) {
    if (uVar1 <= *(uint *)(ppVar3 + 0x10)) {
LAB_00419fb3:
      *(piecewise_construct_t **)param_1 = in_stack_00000008;
      param_1[4] = (basic_string<>)0x0;
      return;
    }
  }
  else if (-1 < (int)uVar5) goto LAB_00419fb3;
LAB_00419f7b:
  in_stack_00000008 = ppVar3;
  p_Var6 = _Tree_comp_alloc<>::_Buynode<>
                     ((_Tree_comp_alloc<> *)this,ppVar7,(tuple<> *)&stack0x00000008,
                      (tuple<> *)ppVar7);
  _Tree<>::_Insert_hint<>((_Tree<> *)this,&stack0x00000008,ppVar4,p_Var6 + 0x10,p_Var6);
  *(piecewise_construct_t **)param_1 = in_stack_00000008;
  param_1[4] = (basic_string<>)0x1;
  return;
}


// public: int & __thiscall std::map<int,int,struct std::less<int>,class std::allocator<struct
// std::pair<int const ,int> > >::operator[](int const &)

int * __thiscall std::map<>::operator[](map<> *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  _Tree_node<> *p_Var3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)this;
  if (*(char *)((int)puVar4[1] + 0xd) == '\0') {
    puVar1 = (undefined4 *)puVar4[1];
    do {
      if ((int)puVar1[4] < *param_1) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
    if ((puVar4 != *(undefined4 **)this) && ((int)puVar4[4] <= *param_1)) {
      return puVar4 + 5;
    }
  }
  p_Var3 = _Tree_comp_alloc<>::_Buynode<>
                     ((_Tree_comp_alloc<> *)this,(piecewise_construct_t *)param_1,
                      (tuple<int&&> *)&param_1,(tuple<> *)param_1);
  _Tree<>::_Insert_hint<>((_Tree<> *)this,&param_1,puVar4,p_Var3 + 0x10,p_Var3);
  return param_1 + 5;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: class std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > & __thiscall std::map<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >,struct std::less<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,class std::allocator<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > > >::operator[](class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const &)

vector<> * __thiscall std::map<>::operator[](map<> *this,basic_string<> *param_1)

{
  uint uVar1;
  uint uVar2;
  basic_string<> *pbVar3;
  basic_string<> *pbVar4;
  uint uVar5;
  _Tree_node<> *p_Var6;
  _Tree_comp_alloc<> *extraout_ECX;
  _Tree_comp_alloc<> *this_00;
  void *this_01;
  _Tree_comp_alloc<> *p_Var7;
  bool bVar8;
  
  pbVar3 = param_1;
  _Tree<>::lower_bound((_Tree<> *)this,(basic_string<> *)&param_1);
  pbVar4 = param_1;
  this_00 = extraout_ECX;
  if (param_1 == _multiData) goto LAB_0047d789;
  p_Var7 = (_Tree_comp_alloc<> *)(param_1 + 0x10);
  if (0xf < *(uint *)(param_1 + 0x24)) {
    p_Var7 = *(_Tree_comp_alloc<> **)(param_1 + 0x10);
  }
  this_00 = (_Tree_comp_alloc<> *)pbVar3;
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    this_00 = *(_Tree_comp_alloc<> **)pbVar3;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar5 = *(uint *)(pbVar3 + 0x10);
  if (uVar1 < *(uint *)(pbVar3 + 0x10)) {
    uVar5 = uVar1;
  }
  while (uVar2 = uVar5 - 4, 3 < uVar5) {
    if (*(int *)this_00 != *(int *)p_Var7) goto LAB_0047d746;
    this_00 = this_00 + 4;
    p_Var7 = p_Var7 + 4;
    uVar5 = uVar2;
  }
  if (uVar2 == 0xfffffffc) {
LAB_0047d77a:
    uVar5 = 0;
  }
  else {
LAB_0047d746:
    bVar8 = (byte)*this_00 < (byte)*p_Var7;
    if ((*this_00 == *p_Var7) &&
       ((uVar2 == 0xfffffffd ||
        ((bVar8 = (byte)this_00[1] < (byte)p_Var7[1], this_00[1] == p_Var7[1] &&
         ((uVar2 == 0xfffffffe ||
          ((bVar8 = (byte)this_00[2] < (byte)p_Var7[2], this_00[2] == p_Var7[2] &&
           ((uVar2 == 0xffffffff ||
            (bVar8 = (byte)this_00[3] < (byte)p_Var7[3], this_00[3] == p_Var7[3]))))))))))))
    goto LAB_0047d77a;
    uVar5 = -(uint)bVar8 | 1;
  }
  if (uVar5 == 0) {
    if (uVar1 <= *(uint *)(pbVar3 + 0x10)) {
LAB_0047d7b4:
      return (vector<> *)(param_1 + 0x28);
    }
  }
  else if (-1 < (int)uVar5) goto LAB_0047d7b4;
LAB_0047d789:
  param_1 = pbVar3;
  p_Var6 = _Tree_comp_alloc<>::_Buynode<>
                     (this_00,(piecewise_construct_t *)this_00,(tuple<> *)&param_1,
                      (tuple<> *)this_00);
  FUN_004807e0(this_01,&param_1,(pair<> *)pbVar4,p_Var6 + 0x10);
  return (vector<> *)(param_1 + 0x28);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: class std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > & __thiscall std::map<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >,struct std::less<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,class std::allocator<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > > >::operator[](class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > &&)

vector<> * __thiscall std::map<>::operator[](map<> *this,basic_string<> *param_1)

{
  uint uVar1;
  uint uVar2;
  basic_string<> *pbVar3;
  basic_string<> *pbVar4;
  uint uVar5;
  _Tree_node<> *p_Var6;
  _Tree_comp_alloc<> *extraout_ECX;
  _Tree_comp_alloc<> *this_00;
  void *this_01;
  _Tree_comp_alloc<> *p_Var7;
  bool bVar8;
  
  pbVar3 = param_1;
  _Tree<>::lower_bound((_Tree<> *)this,(basic_string<> *)&param_1);
  pbVar4 = param_1;
  this_00 = extraout_ECX;
  if (param_1 == _multiData) goto LAB_0047d869;
  p_Var7 = (_Tree_comp_alloc<> *)(param_1 + 0x10);
  if (0xf < *(uint *)(param_1 + 0x24)) {
    p_Var7 = *(_Tree_comp_alloc<> **)(param_1 + 0x10);
  }
  this_00 = (_Tree_comp_alloc<> *)pbVar3;
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    this_00 = *(_Tree_comp_alloc<> **)pbVar3;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar5 = *(uint *)(pbVar3 + 0x10);
  if (uVar1 < *(uint *)(pbVar3 + 0x10)) {
    uVar5 = uVar1;
  }
  while (uVar2 = uVar5 - 4, 3 < uVar5) {
    if (*(int *)this_00 != *(int *)p_Var7) goto LAB_0047d826;
    this_00 = this_00 + 4;
    p_Var7 = p_Var7 + 4;
    uVar5 = uVar2;
  }
  if (uVar2 == 0xfffffffc) {
LAB_0047d85a:
    uVar5 = 0;
  }
  else {
LAB_0047d826:
    bVar8 = (byte)*this_00 < (byte)*p_Var7;
    if ((*this_00 == *p_Var7) &&
       ((uVar2 == 0xfffffffd ||
        ((bVar8 = (byte)this_00[1] < (byte)p_Var7[1], this_00[1] == p_Var7[1] &&
         ((uVar2 == 0xfffffffe ||
          ((bVar8 = (byte)this_00[2] < (byte)p_Var7[2], this_00[2] == p_Var7[2] &&
           ((uVar2 == 0xffffffff ||
            (bVar8 = (byte)this_00[3] < (byte)p_Var7[3], this_00[3] == p_Var7[3]))))))))))))
    goto LAB_0047d85a;
    uVar5 = -(uint)bVar8 | 1;
  }
  if (uVar5 == 0) {
    if (uVar1 <= *(uint *)(pbVar3 + 0x10)) {
LAB_0047d894:
      return (vector<> *)(param_1 + 0x28);
    }
  }
  else if (-1 < (int)uVar5) goto LAB_0047d894;
LAB_0047d869:
  param_1 = pbVar3;
  p_Var6 = _Tree_comp_alloc<>::_Buynode<>
                     (this_00,(piecewise_construct_t *)this_00,(tuple<> *)&param_1,
                      (tuple<> *)this_00);
  FUN_004807e0(this_01,&param_1,(pair<> *)pbVar4,p_Var6 + 0x10);
  return (vector<> *)(param_1 + 0x28);
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
// __thiscall std::map<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,struct std::less<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,class std::allocator<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >
// >::operator[](class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const &)

basic_string<> * __thiscall std::map<>::operator[](map<> *this,basic_string<> *param_1)

{
  uint uVar1;
  uint uVar2;
  basic_string<> *pbVar3;
  basic_string<> *pbVar4;
  uint uVar5;
  _Tree_node<> *p_Var6;
  piecewise_construct_t *extraout_ECX;
  piecewise_construct_t *ppVar7;
  piecewise_construct_t *ppVar8;
  bool bVar9;
  
  pbVar3 = param_1;
  _Tree<>::lower_bound((_Tree<> *)this,(basic_string<> *)&param_1);
  pbVar4 = param_1;
  ppVar7 = extraout_ECX;
  if (param_1 == *(basic_string<> **)this) goto LAB_0047d94b;
  ppVar8 = (piecewise_construct_t *)(param_1 + 0x10);
  if (0xf < *(uint *)(param_1 + 0x24)) {
    ppVar8 = *(piecewise_construct_t **)(param_1 + 0x10);
  }
  ppVar7 = (piecewise_construct_t *)pbVar3;
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    ppVar7 = *(piecewise_construct_t **)pbVar3;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar5 = *(uint *)(pbVar3 + 0x10);
  if (uVar1 < *(uint *)(pbVar3 + 0x10)) {
    uVar5 = uVar1;
  }
  while (uVar2 = uVar5 - 4, 3 < uVar5) {
    if (*(int *)ppVar7 != *(int *)ppVar8) goto LAB_0047d906;
    ppVar7 = ppVar7 + 4;
    ppVar8 = ppVar8 + 4;
    uVar5 = uVar2;
  }
  if (uVar2 == 0xfffffffc) {
LAB_0047d93a:
    uVar5 = 0;
  }
  else {
LAB_0047d906:
    bVar9 = (byte)*ppVar7 < (byte)*ppVar8;
    if ((*ppVar7 == *ppVar8) &&
       ((uVar2 == 0xfffffffd ||
        ((bVar9 = (byte)ppVar7[1] < (byte)ppVar8[1], ppVar7[1] == ppVar8[1] &&
         ((uVar2 == 0xfffffffe ||
          ((bVar9 = (byte)ppVar7[2] < (byte)ppVar8[2], ppVar7[2] == ppVar8[2] &&
           ((uVar2 == 0xffffffff ||
            (bVar9 = (byte)ppVar7[3] < (byte)ppVar8[3], ppVar7[3] == ppVar8[3]))))))))))))
    goto LAB_0047d93a;
    uVar5 = -(uint)bVar9 | 1;
  }
  if (uVar5 == 0) {
    if (uVar1 <= *(uint *)(pbVar3 + 0x10)) {
LAB_0047d97d:
      return (basic_string<> *)(param_1 + 0x28);
    }
  }
  else if (-1 < (int)uVar5) goto LAB_0047d97d;
LAB_0047d94b:
  param_1 = pbVar3;
  p_Var6 = _Tree_comp_alloc<>::_Buynode<>
                     ((_Tree_comp_alloc<> *)this,ppVar7,(tuple<> *)&param_1,(tuple<> *)ppVar7);
  _Tree<>::_Insert_hint<>((_Tree<> *)this,&param_1,pbVar4,p_Var6 + 0x10,p_Var6);
  return (basic_string<> *)(param_1 + 0x28);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: struct std::pair<class std::_Tree_iterator<class std::_Tree_val<struct
// std::_Tree_simple_types<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > > > >,bool> __thiscall std::map<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >,struct std::less<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,class std::allocator<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > > >::_Try_emplace<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > &&)

void __thiscall std::map<>::_Try_emplace<>(map<> *this,basic_string<> *param_1)

{
  uint uVar1;
  uint uVar2;
  _Tree_comp_alloc<> *p_Var3;
  pair<> *ppVar4;
  uint uVar5;
  _Tree_node<> *p_Var6;
  _Tree_comp_alloc<> *extraout_ECX;
  _Tree_comp_alloc<> *this_00;
  void *this_01;
  _Tree_comp_alloc<> *p_Var7;
  bool bVar8;
  _Tree_comp_alloc<> *in_stack_00000008;
  
  p_Var3 = in_stack_00000008;
  _Tree<>::lower_bound((_Tree<> *)this,(basic_string<> *)&stack0x00000008);
  ppVar4 = (pair<> *)in_stack_00000008;
  this_00 = extraout_ECX;
  if (in_stack_00000008 == (_Tree_comp_alloc<> *)_multiData) goto LAB_00480169;
  p_Var7 = in_stack_00000008 + 0x10;
  if (0xf < *(uint *)(in_stack_00000008 + 0x24)) {
    p_Var7 = *(_Tree_comp_alloc<> **)(in_stack_00000008 + 0x10);
  }
  this_00 = p_Var3;
  if (0xf < *(uint *)(p_Var3 + 0x14)) {
    this_00 = *(_Tree_comp_alloc<> **)p_Var3;
  }
  uVar1 = *(uint *)(in_stack_00000008 + 0x20);
  uVar5 = *(uint *)(p_Var3 + 0x10);
  if (uVar1 < *(uint *)(p_Var3 + 0x10)) {
    uVar5 = uVar1;
  }
  while (uVar2 = uVar5 - 4, 3 < uVar5) {
    if (*(int *)this_00 != *(int *)p_Var7) goto LAB_00480126;
    this_00 = this_00 + 4;
    p_Var7 = p_Var7 + 4;
    uVar5 = uVar2;
  }
  if (uVar2 == 0xfffffffc) {
LAB_0048015a:
    uVar5 = 0;
  }
  else {
LAB_00480126:
    bVar8 = (byte)*this_00 < (byte)*p_Var7;
    if ((*this_00 == *p_Var7) &&
       ((uVar2 == 0xfffffffd ||
        ((bVar8 = (byte)this_00[1] < (byte)p_Var7[1], this_00[1] == p_Var7[1] &&
         ((uVar2 == 0xfffffffe ||
          ((bVar8 = (byte)this_00[2] < (byte)p_Var7[2], this_00[2] == p_Var7[2] &&
           ((uVar2 == 0xffffffff ||
            (bVar8 = (byte)this_00[3] < (byte)p_Var7[3], this_00[3] == p_Var7[3]))))))))))))
    goto LAB_0048015a;
    uVar5 = -(uint)bVar8 | 1;
  }
  if (uVar5 == 0) {
    if (uVar1 <= *(uint *)(p_Var3 + 0x10)) {
LAB_0048019a:
      *(_Tree_comp_alloc<> **)param_1 = in_stack_00000008;
      param_1[4] = (basic_string<>)0x0;
      return;
    }
  }
  else if (-1 < (int)uVar5) goto LAB_0048019a;
LAB_00480169:
  in_stack_00000008 = p_Var3;
  p_Var6 = _Tree_comp_alloc<>::_Buynode<>
                     (this_00,(piecewise_construct_t *)this_00,(tuple<> *)&stack0x00000008,
                      (tuple<> *)this_00);
  FUN_004807e0(this_01,&stack0x00000008,ppVar4,p_Var6 + 0x10);
  *(_Tree_comp_alloc<> **)param_1 = in_stack_00000008;
  param_1[4] = (basic_string<>)0x1;
  return;
}


// public: struct std::pair<class std::_Tree_iterator<class std::_Tree_val<struct
// std::_Tree_simple_types<struct std::pair<int const ,class FogInstance *> > > >,bool> __thiscall
// std::map<int,class FogInstance *,struct std::less<int>,class std::allocator<struct std::pair<int
// const ,class FogInstance *> > >::_Try_emplace<int const &>(int const &)

void __thiscall std::map<>::_Try_emplace<int_const&>(map<> *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  _Tree_node<> *p_Var3;
  undefined4 *puVar4;
  piecewise_construct_t *in_stack_00000008;
  
  puVar4 = *(undefined4 **)this;
  if (*(char *)((int)puVar4[1] + 0xd) == '\0') {
    puVar1 = (undefined4 *)puVar4[1];
    do {
      if ((int)puVar1[4] < *(int *)in_stack_00000008) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
    if ((puVar4 != *(undefined4 **)this) && ((int)puVar4[4] <= *(int *)in_stack_00000008)) {
      *param_1 = (int)puVar4;
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  p_Var3 = _Tree_comp_alloc<>::_Buynode<>
                     ((_Tree_comp_alloc<> *)this,in_stack_00000008,(tuple<int&&> *)&stack0x00000008,
                      (tuple<> *)in_stack_00000008);
  _Tree<>::_Insert_hint<>((_Tree<> *)this,&stack0x00000008,puVar4,p_Var3 + 0x10,p_Var3);
  *param_1 = (int)in_stack_00000008;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


// public: float & __thiscall std::map<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,float,struct std::less<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class
// std::allocator<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,float> > >::operator[](class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const &)

float * __thiscall std::map<>::operator[](map<> *this,basic_string<> *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  _Tree_node<> *p_Var6;
  basic_string<> *pbVar7;
  piecewise_construct_t *ppVar8;
  basic_string<> *pbVar9;
  piecewise_construct_t *ppVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  bool bVar14;
  
  puVar1 = *(undefined4 **)this;
  ppVar8 = (piecewise_construct_t *)this;
  puVar13 = puVar1;
  if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
    uVar2 = *(uint *)(param_1 + 0x10);
    puVar11 = (undefined4 *)puVar1[1];
    do {
      pbVar9 = param_1;
      if (0xf < *(uint *)(param_1 + 0x14)) {
        pbVar9 = *(basic_string<> **)param_1;
      }
      pbVar7 = (basic_string<> *)(puVar11 + 4);
      if (0xf < (uint)puVar11[9]) {
        pbVar7 = (basic_string<> *)puVar11[4];
      }
      uVar5 = puVar11[8];
      uVar4 = uVar5;
      if (uVar2 < uVar5) {
        uVar4 = uVar2;
      }
      while (uVar3 = uVar4 - 4, 3 < uVar4) {
        if (*(int *)pbVar7 != *(int *)pbVar9) goto LAB_004a2bc6;
        pbVar7 = pbVar7 + 4;
        pbVar9 = pbVar9 + 4;
        uVar4 = uVar3;
      }
      if (uVar3 == 0xfffffffc) {
LAB_004a2bfa:
        uVar4 = 0;
      }
      else {
LAB_004a2bc6:
        bVar14 = (byte)*pbVar7 < (byte)*pbVar9;
        if ((*pbVar7 == *pbVar9) &&
           ((uVar3 == 0xfffffffd ||
            ((bVar14 = (byte)pbVar7[1] < (byte)pbVar9[1], pbVar7[1] == pbVar9[1] &&
             ((uVar3 == 0xfffffffe ||
              ((bVar14 = (byte)pbVar7[2] < (byte)pbVar9[2], pbVar7[2] == pbVar9[2] &&
               ((uVar3 == 0xffffffff ||
                (bVar14 = (byte)pbVar7[3] < (byte)pbVar9[3], pbVar7[3] == pbVar9[3]))))))))))))
        goto LAB_004a2bfa;
        uVar4 = -(uint)bVar14 | 1;
      }
      if (uVar4 == 0) {
        if (uVar2 <= uVar5) goto LAB_004a2c10;
LAB_004a2ca7:
        puVar12 = (undefined4 *)puVar11[2];
      }
      else {
        if ((int)uVar4 < 0) goto LAB_004a2ca7;
LAB_004a2c10:
        puVar12 = (undefined4 *)*puVar11;
        puVar13 = puVar11;
      }
      ppVar8 = (piecewise_construct_t *)param_1;
      puVar11 = puVar12;
    } while (*(char *)((int)puVar12 + 0xd) == '\0');
  }
  if (puVar13 == puVar1) goto LAB_004a2cd0;
  ppVar10 = (piecewise_construct_t *)(puVar13 + 4);
  if (0xf < (uint)puVar13[9]) {
    ppVar10 = (piecewise_construct_t *)puVar13[4];
  }
  ppVar8 = (piecewise_construct_t *)param_1;
  if (0xf < *(uint *)(param_1 + 0x14)) {
    ppVar8 = *(piecewise_construct_t **)param_1;
  }
  uVar2 = puVar13[8];
  uVar5 = *(uint *)(param_1 + 0x10);
  if (uVar2 < *(uint *)(param_1 + 0x10)) {
    uVar5 = uVar2;
  }
  while (uVar4 = uVar5 - 4, 3 < uVar5) {
    if (*(int *)ppVar8 != *(int *)ppVar10) goto LAB_004a2c6d;
    ppVar8 = ppVar8 + 4;
    ppVar10 = ppVar10 + 4;
    uVar5 = uVar4;
  }
  if (uVar4 == 0xfffffffc) {
LAB_004a2caf:
    uVar5 = 0;
  }
  else {
LAB_004a2c6d:
    bVar14 = (byte)*ppVar8 < (byte)*ppVar10;
    if ((*ppVar8 == *ppVar10) &&
       ((uVar4 == 0xfffffffd ||
        ((bVar14 = (byte)ppVar8[1] < (byte)ppVar10[1], ppVar8[1] == ppVar10[1] &&
         ((uVar4 == 0xfffffffe ||
          ((bVar14 = (byte)ppVar8[2] < (byte)ppVar10[2], ppVar8[2] == ppVar10[2] &&
           ((uVar4 == 0xffffffff ||
            (bVar14 = (byte)ppVar8[3] < (byte)ppVar10[3], ppVar8[3] == ppVar10[3]))))))))))))
    goto LAB_004a2caf;
    uVar5 = -(uint)bVar14 | 1;
  }
  if (uVar5 == 0) {
    if (uVar2 <= *(uint *)(param_1 + 0x10)) goto LAB_004a2cc1;
  }
  else if (-1 < (int)uVar5) {
LAB_004a2cc1:
    return (float *)(puVar13 + 10);
  }
LAB_004a2cd0:
  p_Var6 = _Tree_comp_alloc<>::_Buynode<>
                     ((_Tree_comp_alloc<> *)this,ppVar8,(tuple<> *)&param_1,(tuple<> *)ppVar8);
  _Tree<>::_Insert_hint<>((_Tree<> *)this,&param_1,puVar13,p_Var6 + 0x10,p_Var6);
  return (float *)(param_1 + 0x28);
}


// public: bool & __thiscall std::map<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,bool,struct std::less<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class
// std::allocator<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,bool> > >::operator[](class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const &)

bool * __thiscall std::map<>::operator[](map<> *this,basic_string<> *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  _Tree_node<> *p_Var6;
  basic_string<> *pbVar7;
  piecewise_construct_t *ppVar8;
  basic_string<> *pbVar9;
  piecewise_construct_t *ppVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  bool bVar14;
  
  puVar1 = *(undefined4 **)this;
  ppVar8 = (piecewise_construct_t *)this;
  puVar13 = puVar1;
  if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
    uVar2 = *(uint *)(param_1 + 0x10);
    puVar11 = (undefined4 *)puVar1[1];
    do {
      pbVar9 = param_1;
      if (0xf < *(uint *)(param_1 + 0x14)) {
        pbVar9 = *(basic_string<> **)param_1;
      }
      pbVar7 = (basic_string<> *)(puVar11 + 4);
      if (0xf < (uint)puVar11[9]) {
        pbVar7 = (basic_string<> *)puVar11[4];
      }
      uVar5 = puVar11[8];
      uVar4 = uVar5;
      if (uVar2 < uVar5) {
        uVar4 = uVar2;
      }
      while (uVar3 = uVar4 - 4, 3 < uVar4) {
        if (*(int *)pbVar7 != *(int *)pbVar9) goto LAB_004a2d86;
        pbVar7 = pbVar7 + 4;
        pbVar9 = pbVar9 + 4;
        uVar4 = uVar3;
      }
      if (uVar3 == 0xfffffffc) {
LAB_004a2dba:
        uVar4 = 0;
      }
      else {
LAB_004a2d86:
        bVar14 = (byte)*pbVar7 < (byte)*pbVar9;
        if ((*pbVar7 == *pbVar9) &&
           ((uVar3 == 0xfffffffd ||
            ((bVar14 = (byte)pbVar7[1] < (byte)pbVar9[1], pbVar7[1] == pbVar9[1] &&
             ((uVar3 == 0xfffffffe ||
              ((bVar14 = (byte)pbVar7[2] < (byte)pbVar9[2], pbVar7[2] == pbVar9[2] &&
               ((uVar3 == 0xffffffff ||
                (bVar14 = (byte)pbVar7[3] < (byte)pbVar9[3], pbVar7[3] == pbVar9[3]))))))))))))
        goto LAB_004a2dba;
        uVar4 = -(uint)bVar14 | 1;
      }
      if (uVar4 == 0) {
        if (uVar2 <= uVar5) goto LAB_004a2dd0;
LAB_004a2e67:
        puVar12 = (undefined4 *)puVar11[2];
      }
      else {
        if ((int)uVar4 < 0) goto LAB_004a2e67;
LAB_004a2dd0:
        puVar12 = (undefined4 *)*puVar11;
        puVar13 = puVar11;
      }
      ppVar8 = (piecewise_construct_t *)param_1;
      puVar11 = puVar12;
    } while (*(char *)((int)puVar12 + 0xd) == '\0');
  }
  if (puVar13 == puVar1) goto LAB_004a2e90;
  ppVar10 = (piecewise_construct_t *)(puVar13 + 4);
  if (0xf < (uint)puVar13[9]) {
    ppVar10 = (piecewise_construct_t *)puVar13[4];
  }
  ppVar8 = (piecewise_construct_t *)param_1;
  if (0xf < *(uint *)(param_1 + 0x14)) {
    ppVar8 = *(piecewise_construct_t **)param_1;
  }
  uVar2 = puVar13[8];
  uVar5 = *(uint *)(param_1 + 0x10);
  if (uVar2 < *(uint *)(param_1 + 0x10)) {
    uVar5 = uVar2;
  }
  while (uVar4 = uVar5 - 4, 3 < uVar5) {
    if (*(int *)ppVar8 != *(int *)ppVar10) goto LAB_004a2e2d;
    ppVar8 = ppVar8 + 4;
    ppVar10 = ppVar10 + 4;
    uVar5 = uVar4;
  }
  if (uVar4 == 0xfffffffc) {
LAB_004a2e6f:
    uVar5 = 0;
  }
  else {
LAB_004a2e2d:
    bVar14 = (byte)*ppVar8 < (byte)*ppVar10;
    if ((*ppVar8 == *ppVar10) &&
       ((uVar4 == 0xfffffffd ||
        ((bVar14 = (byte)ppVar8[1] < (byte)ppVar10[1], ppVar8[1] == ppVar10[1] &&
         ((uVar4 == 0xfffffffe ||
          ((bVar14 = (byte)ppVar8[2] < (byte)ppVar10[2], ppVar8[2] == ppVar10[2] &&
           ((uVar4 == 0xffffffff ||
            (bVar14 = (byte)ppVar8[3] < (byte)ppVar10[3], ppVar8[3] == ppVar10[3]))))))))))))
    goto LAB_004a2e6f;
    uVar5 = -(uint)bVar14 | 1;
  }
  if (uVar5 == 0) {
    if (uVar2 <= *(uint *)(param_1 + 0x10)) goto LAB_004a2e81;
  }
  else if (-1 < (int)uVar5) {
LAB_004a2e81:
    return (bool *)(puVar13 + 10);
  }
LAB_004a2e90:
  p_Var6 = _Tree_comp_alloc<>::_Buynode<>
                     ((_Tree_comp_alloc<> *)this,ppVar8,(tuple<> *)&param_1,(tuple<> *)ppVar8);
  _Tree<>::_Insert_hint<>((_Tree<> *)this,&param_1,puVar13,p_Var6 + 0x10,p_Var6);
  return (bool *)(param_1 + 0x28);
}


// public: __thiscall std::map<int,int,struct std::less<int>,class std::allocator<struct
// std::pair<int const ,int> > >::~map<int,int,struct std::less<int>,class std::allocator<struct
// std::pair<int const ,int> > >(void)

void __thiscall std::map<>::~map<>(map<> *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bf6c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *(int *)this;
  local_8 = 0;
  iVar3 = iVar1;
  piVar4 = *(int **)(iVar1 + 4);
  if (*(char *)((int)*(int **)(iVar1 + 4) + 0xd) == '\0') {
    do {
      _Tree<>::_Erase((_Tree<> *)this,(_Tree_node<> *)piVar4[2]);
      piVar2 = (int *)*piVar4;
      operator_delete(piVar4,(nothrow_t *)0x18);
      piVar4 = piVar2;
    } while (*(char *)((int)piVar2 + 0xd) == '\0');
    iVar3 = *(int *)this;
  }
  *(int *)(iVar3 + 4) = iVar1;
  **(int **)this = iVar1;
  *(int *)(*(int *)this + 8) = iVar1;
  *(undefined4 *)(this + 4) = 0;
  operator_delete(*(void **)this,(nothrow_t *)0x18);
  ExceptionList = local_10;
  return;
}


// public: __thiscall std::map<int,class FogInstance *,struct std::less<int>,class
// std::allocator<struct std::pair<int const ,class FogInstance *> > >::~map<int,class FogInstance
// *,struct std::less<int>,class std::allocator<struct std::pair<int const ,class FogInstance *> >
// >(void)

void __thiscall std::map<>::~map<>(map<> *this)

{
  map<> *local_8;
  
  local_8 = this;
  _Tree<>::erase((_Tree<> *)this,&local_8,**(undefined4 **)this,*(undefined4 **)this);
  operator_delete(*(void **)this,(nothrow_t *)0x18);
  return;
}


// public: int & __thiscall std::map<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,int,struct std::less<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class
// std::allocator<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,int> > >::operator[](class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > &&)

int * __thiscall std::map<>::operator[](map<> *this,basic_string<> *param_1)

{
  uint uVar1;
  uint uVar2;
  basic_string<> *pbVar3;
  basic_string<> *pbVar4;
  uint uVar5;
  _Tree_node<> *p_Var6;
  piecewise_construct_t *extraout_ECX;
  piecewise_construct_t *ppVar7;
  piecewise_construct_t *ppVar8;
  bool bVar9;
  
  pbVar3 = param_1;
  _Tree<>::lower_bound((_Tree<> *)this,(basic_string<> *)&param_1);
  pbVar4 = param_1;
  ppVar7 = extraout_ECX;
  if (param_1 == *(basic_string<> **)this) goto LAB_0052032b;
  ppVar8 = (piecewise_construct_t *)(param_1 + 0x10);
  if (0xf < *(uint *)(param_1 + 0x24)) {
    ppVar8 = *(piecewise_construct_t **)(param_1 + 0x10);
  }
  ppVar7 = (piecewise_construct_t *)pbVar3;
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    ppVar7 = *(piecewise_construct_t **)pbVar3;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar5 = *(uint *)(pbVar3 + 0x10);
  if (uVar1 < *(uint *)(pbVar3 + 0x10)) {
    uVar5 = uVar1;
  }
  while (uVar2 = uVar5 - 4, 3 < uVar5) {
    if (*(int *)ppVar7 != *(int *)ppVar8) goto LAB_005202e6;
    ppVar7 = ppVar7 + 4;
    ppVar8 = ppVar8 + 4;
    uVar5 = uVar2;
  }
  if (uVar2 == 0xfffffffc) {
LAB_0052031a:
    uVar5 = 0;
  }
  else {
LAB_005202e6:
    bVar9 = (byte)*ppVar7 < (byte)*ppVar8;
    if ((*ppVar7 == *ppVar8) &&
       ((uVar2 == 0xfffffffd ||
        ((bVar9 = (byte)ppVar7[1] < (byte)ppVar8[1], ppVar7[1] == ppVar8[1] &&
         ((uVar2 == 0xfffffffe ||
          ((bVar9 = (byte)ppVar7[2] < (byte)ppVar8[2], ppVar7[2] == ppVar8[2] &&
           ((uVar2 == 0xffffffff ||
            (bVar9 = (byte)ppVar7[3] < (byte)ppVar8[3], ppVar7[3] == ppVar8[3]))))))))))))
    goto LAB_0052031a;
    uVar5 = -(uint)bVar9 | 1;
  }
  if (uVar5 == 0) {
    if (uVar1 <= *(uint *)(pbVar3 + 0x10)) {
LAB_0052035d:
      return (int *)(param_1 + 0x28);
    }
  }
  else if (-1 < (int)uVar5) goto LAB_0052035d;
LAB_0052032b:
  param_1 = pbVar3;
  p_Var6 = _Tree_comp_alloc<>::_Buynode<>
                     ((_Tree_comp_alloc<> *)this,ppVar7,(tuple<> *)&param_1,(tuple<> *)ppVar7);
  _Tree<>::_Insert_hint<>((_Tree<> *)this,&param_1,pbVar4,p_Var6 + 0x10,p_Var6);
  return (int *)(param_1 + 0x28);
}


// public: char & __thiscall std::map<enum cocos2d::EventKeyboard::KeyCode,char,struct
// std::less<enum cocos2d::EventKeyboard::KeyCode>,class std::allocator<struct std::pair<enum
// cocos2d::EventKeyboard::KeyCode const ,char> > >::operator[](enum cocos2d::EventKeyboard::KeyCode
// const &)

char * __thiscall std::map<>::operator[](map<> *this,KeyCode *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  _Tree_node<> *p_Var3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)this;
  if (*(char *)((int)puVar4[1] + 0xd) == '\0') {
    puVar1 = (undefined4 *)puVar4[1];
    do {
      if ((int)puVar1[4] < (int)*param_1) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
    if ((puVar4 != *(undefined4 **)this) && ((int)puVar4[4] <= (int)*param_1)) {
      return (char *)(puVar4 + 5);
    }
  }
  p_Var3 = _Tree_comp_alloc<>::_Buynode<>
                     ((_Tree_comp_alloc<> *)this,(piecewise_construct_t *)param_1,
                      (tuple<> *)&param_1,(tuple<> *)param_1);
  _Tree<>::_Insert_hint<>((_Tree<> *)this,&param_1,puVar4,p_Var3 + 0x10,p_Var3);
  return (char *)(param_1 + 5);
}
