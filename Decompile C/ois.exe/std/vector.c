#include "../ois.exe.h"


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
// __thiscall std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > >::operator[](unsigned int)

basic_string<> * __thiscall std::vector<>::operator[](vector<> *this,uint param_1)

{
  return (basic_string<> *)(*(int *)this + param_1 * 0x18);
}


// public: unsigned int __thiscall std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >
// >::size(void)const 

uint __thiscall std::vector<>::size(vector<> *this)

{
  return (*(int *)(this + 4) - *(int *)this) / 0x18;
}


// public: __thiscall std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > >::~vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >(void)

void __thiscall std::vector<>::~vector<>(vector<> *this)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  allocator<> *unaff_ESI;
  basic_string<> *unaff_EDI;
  void *pvVar3;
  
  if (*(basic_string<> **)this != (basic_string<> *)0x0) {
    _Destroy_range<>(*(basic_string<> **)this,unaff_EDI,unaff_ESI);
    pvVar1 = *(void **)this;
    pnVar2 = (nothrow_t *)(((*(int *)(this + 8) - (int)pvVar1) / 0x18) * 0x18);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar2 = pnVar2 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar2);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// private: void __thiscall std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >
// >::_Tidy(void)

void __thiscall std::vector<>::_Tidy(vector<> *this)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  allocator<> *unaff_ESI;
  basic_string<> *unaff_EDI;
  void *pvVar3;
  
  if (*(basic_string<> **)this != (basic_string<> *)0x0) {
    _Destroy_range<>(*(basic_string<> **)this,unaff_EDI,unaff_ESI);
    pvVar1 = *(void **)this;
    pnVar2 = (nothrow_t *)(((*(int *)(this + 8) - (int)pvVar1) / 0x18) * 0x18);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar2 = pnVar2 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar2);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// private: void __thiscall std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >
// >::_Destroy(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// > *,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *)

void __thiscall
std::vector<>::_Destroy(vector<> *this,basic_string<> *param_1,basic_string<> *param_2)

{
  basic_string<> *unaff_EBP;
  allocator<> *unaff_retaddr;
  
  _Destroy_range<>((basic_string<> *)this,unaff_EBP,unaff_retaddr);
  return;
}


// public: __thiscall std::vector<class BasicLine,class std::allocator<class BasicLine>
// >::~vector<class BasicLine,class std::allocator<class BasicLine> >(void)

void __thiscall std::vector<>::~vector<>(vector<> *this)

{
  nothrow_t *pnVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = *(void **)this;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = *(void **)(this + 4);
    if (pvVar2 != pvVar3) {
      do {
        vector<>::_Tidy((vector<> *)((int)pvVar2 + 0x18));
        vector<>::_Tidy((vector<> *)((int)pvVar2 + 8));
        pvVar2 = (void *)((int)pvVar2 + 0x24);
      } while (pvVar2 != pvVar3);
      pvVar2 = *(void **)this;
    }
    pnVar1 = (nothrow_t *)(((*(int *)(this + 8) - (int)pvVar2) / 0x24) * 0x24);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar1) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar1 = pnVar1 + 0x23;
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar1);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// public: void __thiscall std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >
// >::push_back(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > &&)

void __thiscall std::vector<>::push_back(vector<> *this,basic_string<> *param_1)

{
  basic_string<> *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  pbVar1 = *(basic_string<> **)(this + 4);
  if (*(basic_string<> **)(this + 8) != pbVar1) {
    *(undefined4 *)(pbVar1 + 0x10) = 0;
    *(undefined4 *)(pbVar1 + 0x14) = 0;
    uVar2 = *(undefined4 *)(param_1 + 4);
    uVar3 = *(undefined4 *)(param_1 + 8);
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)pbVar1 = *(undefined4 *)param_1;
    *(undefined4 *)(pbVar1 + 4) = uVar2;
    *(undefined4 *)(pbVar1 + 8) = uVar3;
    *(undefined4 *)(pbVar1 + 0xc) = uVar4;
    *(undefined8 *)(pbVar1 + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (basic_string<>)0x0;
    *(int *)(this + 4) = *(int *)(this + 4) + 0x18;
    return;
  }
  _Emplace_reallocate<>(this,pbVar1,(basic_string<> *)param_1);
  return;
}


// public: void __thiscall std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >
// >::push_back(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const &)

void __thiscall std::vector<>::push_back(vector<> *this,basic_string<> *param_1)

{
  basic_string<> *this_00;
  
  this_00 = *(basic_string<> **)(this + 4);
  if (*(basic_string<> **)(this + 8) != this_00) {
    basic_string<>::basic_string<>(this_00,(basic_string<> *)param_1);
    *(int *)(this + 4) = *(int *)(this + 4) + 0x18;
    return;
  }
  _Emplace_reallocate<>(this,(basic_string<> *)this_00,(basic_string<> *)param_1);
  return;
}


// private: void __thiscall std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >
// >::_Emplace_back_with_unused_capacity<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const &>(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const &)

void __thiscall
std::vector<>::_Emplace_back_with_unused_capacity<>(vector<> *this,basic_string<> *param_1)

{
  basic_string<>::basic_string<>(*(basic_string<> **)(this + 4),(basic_string<> *)param_1);
  *(int *)(this + 4) = *(int *)(this + 4) + 0x18;
  return;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
// __thiscall std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > >::_Emplace_reallocate<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * const,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &&)

basic_string<> * __thiscall
std::vector<>::_Emplace_reallocate<>(vector<> *this,basic_string<> *param_1,basic_string<> *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  void *pvVar6;
  basic_string<> *pbVar7;
  uint uVar8;
  int iVar9;
  allocator<> *unaff_ESI;
  basic_string<> *pbVar10;
  basic_string<> *unaff_EDI;
  uint uVar11;
  basic_string<> *pbVar12;
  
  iVar9 = *(int *)this;
  iVar1 = (*(int *)(this + 4) - iVar9) / 0x18;
  if (iVar1 == 0xaaaaaaa) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar8 = iVar1 + 1;
  uVar5 = (*(int *)(this + 8) - iVar9) / 0x18;
  uVar11 = uVar8;
  if ((uVar5 <= 0xaaaaaaa - (uVar5 >> 1)) && (uVar11 = (uVar5 >> 1) + uVar5, uVar11 < uVar8)) {
    uVar11 = uVar8;
  }
  uVar8 = uVar11 * 0x18;
  if (uVar11 < 0xaaaaaab) {
    if (uVar8 < 0x1000) {
      if (uVar8 == 0) {
        pbVar10 = (basic_string<> *)0x0;
      }
      else {
        pbVar10 = operator_new(uVar8);
      }
      goto LAB_00403a95;
    }
  }
  else {
    uVar8 = 0xffffffff;
  }
  uVar5 = uVar8 + 0x23;
  if (uVar5 <= uVar8) {
    uVar5 = 0xffffffff;
  }
  pvVar6 = operator_new(uVar5);
  if (pvVar6 == (void *)0x0) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  pbVar10 = (basic_string<> *)((int)pvVar6 + 0x23U & 0xffffffe0);
  *(void **)(pbVar10 + -4) = pvVar6;
LAB_00403a95:
  iVar9 = (((int)param_1 - iVar9) / 0x18) * 0x18;
  *(undefined4 *)(pbVar10 + iVar9 + 0x10) = 0;
  *(undefined4 *)(pbVar10 + iVar9 + 0x14) = 0;
  uVar2 = *(undefined4 *)(param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 8);
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  pbVar12 = pbVar10 + iVar9;
  *(undefined4 *)pbVar12 = *(undefined4 *)param_2;
  *(undefined4 *)(pbVar12 + 4) = uVar2;
  *(undefined4 *)(pbVar12 + 8) = uVar3;
  *(undefined4 *)(pbVar12 + 0xc) = uVar4;
  *(undefined8 *)(pbVar10 + iVar9 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *param_2 = (basic_string<>)0x0;
  pbVar12 = *(basic_string<> **)this;
  pbVar7 = pbVar10;
  if (param_1 != *(basic_string<> **)(this + 4)) {
    _Uninitialized_move<>(pbVar10,pbVar12,unaff_EDI,unaff_ESI);
    pbVar7 = pbVar10 + iVar9 + 0x18;
  }
  _Uninitialized_move<>(pbVar7,pbVar12,unaff_EDI,unaff_ESI);
  _Change_array(this,(basic_string<> *)pbVar10,iVar1 + 1,uVar11);
  return (basic_string<> *)(*(int *)this + iVar9);
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
// __thiscall std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > >::_Emplace_reallocate<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &>(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * const,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)

basic_string<> * __thiscall
std::vector<>::_Emplace_reallocate<>(vector<> *this,basic_string<> *param_1,basic_string<> *param_2)

{
  int iVar1;
  basic_string<> *pbVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  basic_string<> *extraout_ECX;
  basic_string<> *pbVar7;
  allocator<> *unaff_EDI;
  uint uVar8;
  basic_string<> *pbVar9;
  basic_string<> *pbVar10;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b1480;
  local_10 = ExceptionList;
  pbVar2 = (basic_string<> *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  iVar5 = *(int *)this;
  iVar1 = (*(int *)(this + 4) - iVar5) / 0x18;
  if (iVar1 == 0xaaaaaaa) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar6 = iVar1 + 1;
  uVar3 = (*(int *)(this + 8) - iVar5) / 0x18;
  uVar8 = uVar6;
  if ((uVar3 <= 0xaaaaaaa - (uVar3 >> 1)) && (uVar8 = (uVar3 >> 1) + uVar3, uVar8 < uVar6)) {
    uVar8 = uVar6;
  }
  uVar6 = uVar8 * 0x18;
  if (uVar8 < 0xaaaaaab) {
    if (uVar6 < 0x1000) {
      if (uVar6 == 0) {
        pbVar7 = (basic_string<> *)0x0;
      }
      else {
        pbVar7 = operator_new(uVar6);
      }
      goto LAB_00403c33;
    }
  }
  else {
    uVar6 = 0xffffffff;
  }
  uVar3 = uVar6 + 0x23;
  if (uVar3 <= uVar6) {
    uVar3 = 0xffffffff;
  }
  pvVar4 = operator_new(uVar3);
  if (pvVar4 == (void *)0x0) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  pbVar7 = (basic_string<> *)((int)pvVar4 + 0x23U & 0xffffffe0);
  *(void **)(pbVar7 + -4) = pvVar4;
LAB_00403c33:
  local_8 = 0;
  iVar5 = (((int)param_1 - iVar5) / 0x18) * 0x18;
  basic_string<>::basic_string<>((basic_string<> *)(pbVar7 + iVar5),param_2);
  pbVar9 = pbVar7;
  pbVar10 = extraout_ECX;
  if (param_1 != *(basic_string<> **)(this + 4)) {
    _Uninitialized_move<>(pbVar7,extraout_ECX,pbVar2,unaff_EDI);
    pbVar9 = (basic_string<> *)((basic_string<> *)(pbVar7 + iVar5) + 0x18);
  }
  _Uninitialized_move<>(pbVar9,pbVar10,pbVar2,unaff_EDI);
  _Change_array(this,(basic_string<> *)pbVar7,iVar1 + 1,uVar8);
  ExceptionList = local_10;
  return (basic_string<> *)(*(int *)this + iVar5);
}


// private: static void __cdecl std::vector<struct ComponentLine *,class std::allocator<struct
// ComponentLine *> >::_Xlength(void)

void __cdecl std::vector<>::_Xlength(void)

{
                    // WARNING: Subroutine does not return
  std::_Xlength_error("vector<T> too long");
}


// private: void __thiscall std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >
// >::_Change_array(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > * const,unsigned int,unsigned int)

void __thiscall
std::vector<>::_Change_array(vector<> *this,basic_string<> *param_1,uint param_2,uint param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  basic_string<> *unaff_ESI;
  void *pvVar3;
  allocator<> *unaff_EDI;
  
  if (*(basic_string<> **)this != (basic_string<> *)0x0) {
    _Destroy_range<>(*(basic_string<> **)this,unaff_ESI,unaff_EDI);
    pvVar1 = *(void **)this;
    pnVar2 = (nothrow_t *)(((*(int *)(this + 8) - (int)pvVar1) / 0x18) * 0x18);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar2 = pnVar2 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar2);
  }
  *(basic_string<> **)this = param_1;
  *(basic_string<> **)(this + 4) = param_1 + param_2 * 0x18;
  *(basic_string<> **)(this + 8) = param_1 + param_3 * 0x18;
  return;
}


// public: void __thiscall std::vector<class UIText *,class std::allocator<class UIText *>
// >::push_back(class UIText * const &)

void __thiscall std::vector<>::push_back(vector<> *this,UIText **param_1)

{
  AnimationFrames **ppAVar1;
  
  ppAVar1 = *(AnimationFrames ***)(this + 4);
  if (*(AnimationFrames ***)(this + 8) != ppAVar1) {
    *ppAVar1 = (AnimationFrames *)*param_1;
    *(int *)(this + 4) = *(int *)(this + 4) + 4;
    return;
  }
  vector<>::_Emplace_reallocate<>((vector<> *)this,ppAVar1,(AnimationFrames **)param_1);
  return;
}


// public: __thiscall std::vector<class JunkContent *,class std::allocator<class JunkContent *>
// >::~vector<class JunkContent *,class std::allocator<class JunkContent *> >(void)

void __thiscall std::vector<>::~vector<>(vector<> *this)

{
  void *pvVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    pnVar3 = (nothrow_t *)(*(int *)(this + 8) - (int)pvVar1 & 0xfffffffc);
    pvVar2 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)pvVar1 + -4);
      pnVar3 = pnVar3 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// public: class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
// Contract *> > > __thiscall std::vector<class Contract *,class std::allocator<class Contract *>
// >::erase(class std::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<class
// Contract *> > >,class std::_Vector_const_iterator<class std::_Vector_val<struct
// std::_Simple_types<class Contract *> > >)

void __thiscall std::vector<>::erase(vector<> *this,undefined4 *param_2,void *param_3,void *param_4)

{
  int iVar1;
  
  if (param_3 != param_4) {
    iVar1 = *(int *)(this + 4);
    memmove(param_3,param_4,iVar1 - (int)param_4);
    *(int *)(this + 4) = (iVar1 - (int)param_4) + (int)param_3;
    *param_2 = param_3;
    return;
  }
  *param_2 = param_3;
  return;
}


// public: class JumpPoint * & __thiscall std::vector<class JumpPoint *,class std::allocator<class
// JumpPoint *> >::operator[](unsigned int)

JumpPoint ** __thiscall std::vector<>::operator[](vector<> *this,uint param_1)

{
  return (JumpPoint **)(*(int *)this + param_1 * 4);
}


// public: unsigned int __thiscall std::vector<enum EDifficultyMode::DifficultyMode,class
// std::allocator<enum EDifficultyMode::DifficultyMode> >::size(void)const 

uint __thiscall std::vector<>::size(vector<> *this)

{
  return *(int *)(this + 4) - *(int *)this >> 2;
}


// public: void __thiscall std::vector<class InputOption *,class std::allocator<class InputOption *>
// >::push_back(class InputOption * &&)

void __thiscall std::vector<>::push_back(vector<> *this,InputOption **param_1)

{
  MetaGameAction **ppMVar1;
  
  ppMVar1 = *(MetaGameAction ***)(this + 4);
  if (*(MetaGameAction ***)(this + 8) != ppMVar1) {
    *ppMVar1 = (MetaGameAction *)*param_1;
    *(int *)(this + 4) = *(int *)(this + 4) + 4;
    return;
  }
  vector<>::_Emplace_reallocate<>((vector<> *)this,ppMVar1,(MetaGameAction **)param_1);
  return;
}


// public: class cocos2d::Vec2 & __thiscall std::vector<class cocos2d::Vec2,class
// std::allocator<class cocos2d::Vec2> >::operator[](unsigned int)

Vec2 * __thiscall std::vector<>::operator[](vector<> *this,uint param_1)

{
  return (Vec2 *)(*(int *)this + param_1 * 8);
}


// public: unsigned int __thiscall std::vector<class cocos2d::Vec2,class std::allocator<class
// cocos2d::Vec2> >::size(void)const 

uint __thiscall std::vector<>::size(vector<> *this)

{
  return *(int *)(this + 4) - *(int *)this >> 3;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
// __thiscall std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > >::_Unchecked_end(void)

basic_string<> * __thiscall std::vector<>::_Unchecked_end(vector<> *this)

{
  return *(basic_string<> **)(this + 4);
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
// __thiscall std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > >::_Unchecked_begin(void)

basic_string<> * __thiscall std::vector<>::_Unchecked_begin(vector<> *this)

{
  return *(basic_string<> **)this;
}


// public: __thiscall std::vector<class cocos2d::Vec2,class std::allocator<class cocos2d::Vec2>
// >::~vector<class cocos2d::Vec2,class std::allocator<class cocos2d::Vec2> >(void)

void __thiscall std::vector<>::~vector<>(vector<> *this)

{
  void *pvVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    pnVar3 = (nothrow_t *)(*(int *)(this + 8) - (int)pvVar1 & 0xfffffff8);
    pvVar2 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)pvVar1 + -4);
      pnVar3 = pnVar3 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// public: class AnimationFrames * * __thiscall std::vector<class AnimationFrames *,class
// std::allocator<class AnimationFrames *> >::_Emplace_reallocate<class AnimationFrames * const
// &>(class AnimationFrames * * const,class AnimationFrames * const &)

AnimationFrames ** __thiscall
std::vector<>::_Emplace_reallocate<>
          (vector<> *this,AnimationFrames **param_1,AnimationFrames **param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  uint uVar8;
  nothrow_t *pnVar9;
  void *pvVar10;
  
  iVar2 = *(int *)this;
  iVar3 = *(int *)(this + 4) - iVar2 >> 2;
  if (iVar3 == 0x3fffffff) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar1 = iVar3 + 1;
  uVar8 = *(int *)(this + 8) - iVar2 >> 2;
  uVar4 = uVar1;
  if ((uVar8 <= 0x3fffffff - (uVar8 >> 1)) && (uVar4 = (uVar8 >> 1) + uVar8, uVar4 < uVar1)) {
    uVar4 = uVar1;
  }
  uVar8 = uVar4 * 4;
  if (uVar4 < 0x40000000) {
    uVar4 = uVar8;
    if (0xfff < uVar8) goto LAB_0041428f;
    if (uVar8 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      pvVar10 = operator_new(uVar8);
    }
  }
  else {
    uVar4 = 0xffffffff;
LAB_0041428f:
    uVar5 = uVar4 + 0x23;
    if (uVar5 <= uVar4) {
      uVar5 = 0xffffffff;
    }
    pvVar6 = operator_new(uVar5);
    if (pvVar6 == (void *)0x0) goto LAB_0041436f;
    pvVar10 = (void *)((int)pvVar6 + 0x23U & 0xffffffe0);
    *(void **)((int)pvVar10 - 4) = pvVar6;
  }
  iVar2 = ((int)param_1 - iVar2 >> 2) * 4;
  *(AnimationFrames **)(iVar2 + (int)pvVar10) = *param_2;
  pvVar6 = *(void **)this;
  if (param_1 == *(AnimationFrames ***)(this + 4)) {
    memmove(pvVar10,pvVar6,(int)*(AnimationFrames ***)(this + 4) - (int)pvVar6);
  }
  else {
    memmove(pvVar10,pvVar6,(int)param_1 - (int)pvVar6);
    memmove((void *)(iVar2 + 4 + (int)pvVar10),param_1,*(int *)(this + 4) - (int)param_1);
  }
  pvVar6 = *(void **)this;
  if (pvVar6 != (void *)0x0) {
    pnVar9 = (nothrow_t *)(*(int *)(this + 8) - (int)pvVar6 & 0xfffffffc);
    pvVar7 = pvVar6;
    if ((nothrow_t *)0xfff < pnVar9) {
      pvVar7 = *(void **)((int)pvVar6 + -4);
      pnVar9 = pnVar9 + 0x23;
      if (0x1f < (uint)((int)pvVar6 + (-4 - (int)pvVar7))) {
LAB_0041436f:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar9);
  }
  *(void **)this = pvVar10;
  *(void **)(this + 4) = (void *)((int)pvVar10 + uVar1 * 4);
  *(void **)(this + 8) = (void *)(uVar8 + (int)pvVar10);
  return (AnimationFrames **)(*(int *)this + iVar2);
}


// public: class MetaGameAction * * __thiscall std::vector<class MetaGameAction *,class
// std::allocator<class MetaGameAction *> >::_Emplace_reallocate<class MetaGameAction * const
// &>(class MetaGameAction * * const,class MetaGameAction * const &)

MetaGameAction ** __thiscall
std::vector<>::_Emplace_reallocate<>
          (vector<> *this,MetaGameAction **param_1,MetaGameAction **param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  PathNode *pPVar7;
  uint uVar8;
  PathNode **ppPVar9;
  uint uVar10;
  
  iVar2 = *(int *)this;
  iVar4 = (int)param_1 - iVar2 >> 2;
  iVar5 = *(int *)(this + 4) - iVar2 >> 2;
  if (iVar5 == 0x3fffffff) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar1 = iVar5 + 1;
  uVar8 = *(int *)(this + 8) - iVar2 >> 2;
  uVar10 = uVar1;
  if ((uVar8 <= 0x3fffffff - (uVar8 >> 1)) && (uVar10 = (uVar8 >> 1) + uVar8, uVar10 < uVar1)) {
    uVar10 = uVar1;
  }
  uVar8 = uVar10 * 4;
  if (uVar10 < 0x40000000) {
    if (uVar8 < 0x1000) {
      if (uVar8 == 0) {
        ppPVar9 = (PathNode **)0x0;
      }
      else {
        ppPVar9 = operator_new(uVar8);
      }
      goto LAB_0041442c;
    }
  }
  else {
    uVar8 = 0xffffffff;
  }
  uVar6 = uVar8 + 0x23;
  if (uVar6 <= uVar8) {
    uVar6 = 0xffffffff;
  }
  pPVar7 = operator_new(uVar6);
  if (pPVar7 == (PathNode *)0x0) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  ppPVar9 = (PathNode **)((uint)(pPVar7 + 0x23) & 0xffffffe0);
  ppPVar9[-1] = pPVar7;
LAB_0041442c:
  ppPVar9[iVar4] = (PathNode *)*param_2;
  pvVar3 = *(void **)this;
  if (param_1 == *(MetaGameAction ***)(this + 4)) {
    memmove(ppPVar9,pvVar3,(int)*(MetaGameAction ***)(this + 4) - (int)pvVar3);
  }
  else {
    memmove(ppPVar9,pvVar3,(int)param_1 - (int)pvVar3);
    memmove(ppPVar9 + iVar4 + 1,param_1,*(int *)(this + 4) - (int)param_1);
  }
  vector<>::_Change_array((vector<> *)this,ppPVar9,uVar1,uVar10);
  return (MetaGameAction **)(*(int *)this + iVar4 * 4);
}


// private: void __thiscall std::vector<class PathNode *,class std::allocator<class PathNode *>
// >::_Change_array(class PathNode * * const,unsigned int,unsigned int)

void __thiscall
std::vector<>::_Change_array(vector<> *this,PathNode **param_1,uint param_2,uint param_3)

{
  void *pvVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    pnVar3 = (nothrow_t *)(*(int *)(this + 8) - (int)pvVar1 & 0xfffffffc);
    pvVar2 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)pvVar1 + -4);
      pnVar3 = pnVar3 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  *(PathNode ***)this = param_1;
  *(PathNode ***)(this + 4) = param_1 + param_2;
  *(PathNode ***)(this + 8) = param_1 + param_3;
  return;
}


// public: class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > >
// __thiscall std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > >::erase(class
// std::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > >)

void __thiscall std::vector<>::erase(vector<> *this,undefined4 *param_2,basic_string<> *param_3)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  basic_string<> *unaff_ESI;
  basic_string<> *unaff_EDI;
  
  _Move_unchecked<>(param_3,unaff_EDI,unaff_ESI);
  iVar1 = *(int *)(this + 4);
  uVar2 = *(uint *)(iVar1 + -4);
  if (0xf < uVar2) {
    pvVar3 = *(void **)(iVar1 + -0x18);
    pnVar5 = (nothrow_t *)(uVar2 + 1);
    pvVar4 = pvVar3;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)pvVar3 + -4);
      pnVar5 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  *(undefined4 *)(iVar1 + -8) = 0;
  *(undefined4 *)(iVar1 + -4) = 0xf;
  *(undefined1 *)(iVar1 + -0x18) = 0;
  *(int *)(this + 4) = *(int *)(this + 4) + -0x18;
  *param_2 = param_3;
  return;
}


// private: void __thiscall std::vector<struct InputCommand,class std::allocator<struct
// InputCommand> >::_Destroy(struct InputCommand *,struct InputCommand *)

void __thiscall std::vector<>::_Destroy(vector<> *this,InputCommand *param_1,InputCommand *param_2)

{
  InputCommand *unaff_EBP;
  allocator<> *unaff_retaddr;
  
  _Destroy_range<>((InputCommand *)this,unaff_EBP,unaff_retaddr);
  return;
}


// public: struct InputCommand * __thiscall std::vector<struct InputCommand,class
// std::allocator<struct InputCommand> >::_Emplace_reallocate<struct InputCommand>(struct
// InputCommand * const,struct InputCommand &&)

InputCommand * __thiscall
std::vector<>::_Emplace_reallocate<>(vector<> *this,InputCommand *param_1,InputCommand *param_2)

{
  uint uVar1;
  InputCommand *pIVar2;
  int iVar3;
  undefined3 uVar4;
  InputCommand *pIVar5;
  uint uVar6;
  void *pvVar7;
  undefined4 uVar8;
  void *pvVar9;
  uint uVar10;
  int iVar11;
  InputCommand *pIVar12;
  nothrow_t *pnVar13;
  InputCommand *pIVar14;
  uint uVar15;
  InputCommand *pIVar16;
  allocator<> *unaff_EDI;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &DAT_005b2a88;
  local_10 = ExceptionList;
  pIVar5 = (InputCommand *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  iVar11 = *(int *)this;
  iVar3 = (*(int *)(this + 4) - iVar11) / 0x38;
  if (iVar3 == 0x4924924) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar1 = iVar3 + 1;
  uVar10 = (*(int *)(this + 8) - iVar11) / 0x38;
  uVar15 = uVar1;
  if ((uVar10 <= 0x4924924 - (uVar10 >> 1)) && (uVar15 = (uVar10 >> 1) + uVar10, uVar15 < uVar1)) {
    uVar15 = uVar1;
  }
  uVar10 = uVar15 * 0x38;
  if (uVar15 < 0x4924925) {
    if (0xfff < uVar10) goto LAB_00417e8b;
    if (uVar10 == 0) {
      pIVar14 = (InputCommand *)0x0;
    }
    else {
      pIVar14 = operator_new(uVar10);
    }
  }
  else {
    uVar10 = 0xffffffff;
LAB_00417e8b:
    uVar6 = uVar10 + 0x23;
    if (uVar6 <= uVar10) {
      uVar6 = 0xffffffff;
    }
    pvVar7 = operator_new(uVar6);
    if (pvVar7 == (void *)0x0) goto LAB_00417eae;
    pIVar14 = (InputCommand *)((int)pvVar7 + 0x23U & 0xffffffe0);
    *(void **)(pIVar14 + -4) = pvVar7;
  }
  iVar11 = (((int)param_1 - iVar11) / 0x38) * 0x38;
  pIVar12 = pIVar14 + iVar11;
  *(undefined4 *)pIVar12 = *(undefined4 *)param_2;
  *(undefined4 *)(pIVar12 + 0x2c) = 0;
  uStack_7 = 0;
  uVar4 = uStack_7;
  local_8 = 1;
  uStack_7 = 0;
  pIVar2 = *(InputCommand **)(param_2 + 0x2c);
  if (pIVar2 != (InputCommand *)0x0) {
    if (pIVar2 == param_2 + 8) {
      uVar8 = (**(code **)(*(int *)pIVar2 + 4))(pIVar12 + 8);
      *(undefined4 *)(pIVar12 + 0x2c) = uVar8;
      local_8 = 2;
      pIVar2 = *(InputCommand **)(param_2 + 0x2c);
      uVar4 = uStack_7;
      if (pIVar2 != (InputCommand *)0x0) {
        (**(code **)(*(int *)pIVar2 + 0x10))(pIVar2 != param_2 + 8);
        *(undefined4 *)(param_2 + 0x2c) = 0;
        uVar4 = uStack_7;
      }
    }
    else {
      *(InputCommand **)(pIVar12 + 0x2c) = pIVar2;
      *(undefined4 *)(param_2 + 0x2c) = 0;
      uVar4 = uStack_7;
    }
  }
  uStack_7 = uVar4;
  local_8 = 0;
  *(undefined4 *)(pIVar12 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  pIVar2 = *(InputCommand **)(this + 4);
  if (param_1 == pIVar2) {
    pIVar16 = pIVar14;
    for (pIVar12 = *(InputCommand **)this; local_8 = 3, pIVar12 != pIVar2; pIVar12 = pIVar12 + 0x38)
    {
      *(undefined4 *)pIVar16 = *(undefined4 *)pIVar12;
      *(undefined4 *)(pIVar16 + 0x2c) = 0;
      local_8 = 4;
      if (*(undefined4 **)(pIVar12 + 0x2c) != (undefined4 *)0x0) {
        uVar8 = (**(code **)**(undefined4 **)(pIVar12 + 0x2c))(pIVar16 + 8);
        *(undefined4 *)(pIVar16 + 0x2c) = uVar8;
      }
      *(undefined4 *)(pIVar16 + 0x30) = *(undefined4 *)(pIVar12 + 0x30);
      pIVar16 = pIVar16 + 0x38;
    }
    _Destroy_range<>(pIVar2,pIVar5,unaff_EDI);
  }
  else {
    _Umove(this,*(InputCommand **)this,param_1,pIVar14);
    _Umove(this,param_1,*(InputCommand **)(this + 4),pIVar12 + 0x38);
  }
  if (*(InputCommand **)this != (InputCommand *)0x0) {
    _Destroy_range<>(*(InputCommand **)this,pIVar5,unaff_EDI);
    pvVar7 = *(void **)this;
    pnVar13 = (nothrow_t *)(((*(int *)(this + 8) - *(int *)this) / 0x38) * 0x38);
    pvVar9 = pvVar7;
    if ((nothrow_t *)0xfff < pnVar13) {
      pvVar9 = *(void **)((int)pvVar7 + -4);
      pnVar13 = pnVar13 + 0x23;
      if (0x1f < (uint)((int)pvVar7 + (-4 - (int)pvVar9))) {
LAB_00417eae:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar9,pnVar13);
  }
  *(InputCommand **)this = pIVar14;
  *(InputCommand **)(this + 4) = pIVar14 + uVar1 * 0x38;
  *(InputCommand **)(this + 8) = pIVar14 + uVar15 * 0x38;
  ExceptionList = local_10;
  return (InputCommand *)(*(int *)this + iVar11);
}


// private: struct InputCommand * __thiscall std::vector<struct InputCommand,class
// std::allocator<struct InputCommand> >::_Umove(struct InputCommand *,struct InputCommand *,struct
// InputCommand *)

InputCommand * __thiscall
std::vector<>::_Umove
          (vector<> *this,InputCommand *param_1,InputCommand *param_2,InputCommand *param_3)

{
  InputCommand *pIVar1;
  InputCommand *pIVar2;
  undefined4 uVar3;
  InputCommand *extraout_ECX;
  InputCommand *pIVar4;
  allocator<> *unaff_EDI;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005b2ac0;
  local_10 = ExceptionList;
  pIVar2 = (InputCommand *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  uStack_7 = 0;
  if (param_1 != param_2) {
    pIVar4 = param_1 + 0x2c;
    do {
      *(undefined4 *)param_3 = *(undefined4 *)(pIVar4 + -0x2c);
      *(undefined4 *)(param_3 + 0x2c) = 0;
      local_8 = 1;
      this = *(vector<> **)pIVar4;
      if (this != (vector<> *)0x0) {
        if (this == (vector<> *)(pIVar4 + -0x24)) {
          uVar3 = (**(code **)(*(int *)this + 4))(param_3 + 8);
          *(undefined4 *)(param_3 + 0x2c) = uVar3;
          local_8 = 2;
          pIVar1 = *(InputCommand **)pIVar4;
          this = (vector<> *)0x0;
          if (pIVar1 == (InputCommand *)0x0) goto LAB_004181f8;
          (**(code **)(*(int *)pIVar1 + 0x10))(pIVar1 != pIVar4 + -0x24);
          this = (vector<> *)extraout_ECX;
        }
        else {
          *(vector<> **)(param_3 + 0x2c) = this;
        }
        *(undefined4 *)pIVar4 = 0;
      }
LAB_004181f8:
      *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(pIVar4 + 4);
      param_3 = param_3 + 0x38;
      pIVar1 = pIVar4 + 0xc;
      pIVar4 = pIVar4 + 0x38;
    } while (pIVar1 != param_2);
  }
  local_8 = 0;
  _Destroy_range<>((InputCommand *)this,pIVar2,unaff_EDI);
  ExceptionList = local_10;
  return param_3;
}


// public: class Waypoint & __thiscall std::vector<class Waypoint,class std::allocator<class
// Waypoint> >::operator[](unsigned int)

Waypoint * __thiscall std::vector<>::operator[](vector<> *this,uint param_1)

{
  return (Waypoint *)(param_1 * 0x20 + *(int *)this);
}


// public: unsigned int __thiscall std::vector<class Waypoint,class std::allocator<class Waypoint>
// >::size(void)const 

uint __thiscall std::vector<>::size(vector<> *this)

{
  return *(int *)(this + 4) - *(int *)this >> 5;
}


// public: __thiscall std::vector<class ServerShipState *,class std::allocator<class ServerShipState
// *> >::~vector<class ServerShipState *,class std::allocator<class ServerShipState *> >(void)

void __thiscall std::vector<>::~vector<>(vector<> *this)

{
  void *pvVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    pnVar3 = (nothrow_t *)(*(int *)(this + 8) - (int)pvVar1 & 0xfffffffc);
    pvVar2 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)pvVar1 + -4);
      pnVar3 = pnVar3 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// public: void __thiscall std::vector<class WaveformPeak,class std::allocator<class WaveformPeak>
// >::clear(void)

void __thiscall std::vector<>::clear(vector<> *this)

{
  *(undefined4 *)(this + 4) = *(undefined4 *)this;
  return;
}


// public: class Waypoint * __thiscall std::vector<class Waypoint,class std::allocator<class
// Waypoint> >::_Emplace_reallocate<class Waypoint>(class Waypoint * const,class Waypoint &&)

Waypoint * __thiscall
std::vector<>::_Emplace_reallocate<Waypoint>(vector<> *this,Waypoint *param_1,Waypoint *param_2)

{
  uint uVar1;
  vector<> *pvVar2;
  int iVar3;
  vector<> *pvVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  void *pvVar8;
  vector<> *this_00;
  vector<> *this_01;
  nothrow_t *pnVar9;
  uint uVar10;
  Waypoint *pWVar11;
  uint uVar12;
  Waypoint *pWVar13;
  
  iVar3 = *(int *)this;
  iVar5 = *(int *)(this + 4) - iVar3 >> 5;
  if (iVar5 == 0x7ffffff) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar1 = iVar5 + 1;
  uVar10 = *(int *)(this + 8) - iVar3 >> 5;
  uVar12 = uVar1;
  if ((uVar10 <= 0x7ffffff - (uVar10 >> 1)) && (uVar12 = (uVar10 >> 1) + uVar10, uVar12 < uVar1)) {
    uVar12 = uVar1;
  }
  uVar10 = uVar12 * 0x20;
  if (uVar12 < 0x8000000) {
    uVar12 = uVar10;
    if (0xfff < uVar10) goto LAB_004211ed;
    if (uVar10 == 0) {
      pWVar13 = (Waypoint *)0x0;
    }
    else {
      pWVar13 = operator_new(uVar10);
    }
  }
  else {
    uVar12 = 0xffffffff;
LAB_004211ed:
    uVar6 = uVar12 + 0x23;
    if (uVar6 <= uVar12) {
      uVar6 = 0xffffffff;
    }
    pvVar7 = operator_new(uVar6);
    if (pvVar7 == (void *)0x0) goto LAB_00421323;
    pWVar13 = (Waypoint *)((int)pvVar7 + 0x23U & 0xffffffe0);
    *(void **)(pWVar13 + -4) = pvVar7;
  }
  uVar12 = (int)param_1 - iVar3 & 0xffffffe0;
  *(undefined4 *)(pWVar13 + uVar12) = *(undefined4 *)param_2;
  *(undefined4 *)(pWVar13 + uVar12 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(pWVar13 + uVar12 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(pWVar13 + uVar12 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(pWVar13 + uVar12 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(pWVar13 + uVar12 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  pWVar13[uVar12 + 0x18] = param_2[0x18];
  *(undefined4 *)(pWVar13 + uVar12 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  pvVar4 = *(vector<> **)(this + 4);
  this_00 = *(vector<> **)this;
  if (param_1 == (Waypoint *)pvVar4) {
    if (this_00 != pvVar4) {
      pWVar11 = pWVar13 + 4;
      do {
        *(undefined4 *)(pWVar11 + -4) = *(undefined4 *)this_00;
        *(undefined4 *)pWVar11 = *(undefined4 *)(this_00 + 4);
        *(undefined4 *)(pWVar11 + 4) = *(undefined4 *)(this_00 + 8);
        *(undefined4 *)(pWVar11 + 8) = *(undefined4 *)(this_00 + 0xc);
        *(undefined4 *)(pWVar11 + 0xc) = *(undefined4 *)(this_00 + 0x10);
        *(undefined4 *)(pWVar11 + 0x10) = *(undefined4 *)(this_00 + 0x14);
        *(vector<> *)(pWVar11 + 0x14) = this_00[0x18];
        pvVar2 = this_00 + 0x1c;
        this_00 = this_00 + 0x20;
        *(undefined4 *)(pWVar11 + 0x18) = *(undefined4 *)pvVar2;
        pWVar11 = pWVar11 + 0x20;
      } while (this_00 != pvVar4);
    }
  }
  else {
    _Umove(this_00,(Waypoint *)this_00,param_1,pWVar13);
    _Umove(this_01,param_1,*(Waypoint **)(this + 4),pWVar13 + uVar12 + 0x20);
  }
  pvVar7 = *(void **)this;
  if (pvVar7 != (void *)0x0) {
    pnVar9 = (nothrow_t *)(*(int *)(this + 8) - (int)pvVar7 & 0xffffffe0);
    pvVar8 = pvVar7;
    if ((nothrow_t *)0xfff < pnVar9) {
      pvVar8 = *(void **)((int)pvVar7 + -4);
      pnVar9 = pnVar9 + 0x23;
      if (0x1f < (uint)((int)pvVar7 + (-4 - (int)pvVar8))) {
LAB_00421323:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar8,pnVar9);
  }
  *(Waypoint **)this = pWVar13;
  *(Waypoint **)(this + 4) = pWVar13 + uVar1 * 0x20;
  *(Waypoint **)(this + 8) = pWVar13 + uVar10;
  return (Waypoint *)(*(int *)this + uVar12);
}


// public: struct HullDamageChance * __thiscall std::vector<struct HullDamageChance,class
// std::allocator<struct HullDamageChance> >::_Emplace_reallocate<struct HullDamageChance>(struct
// HullDamageChance * const,struct HullDamageChance &&)

HullDamageChance * __thiscall
std::vector<>::_Emplace_reallocate<>
          (vector<> *this,HullDamageChance *param_1,HullDamageChance *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  void *pvVar8;
  uint uVar9;
  HullDamageChance *pHVar10;
  nothrow_t *pnVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  HullDamageChance *pHVar15;
  
  iVar2 = *(int *)this;
  iVar14 = (int)param_1 - iVar2 >> 3;
  iVar3 = *(int *)(this + 4) - iVar2 >> 3;
  if (iVar3 == 0x1fffffff) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar4 = iVar3 + 1;
  uVar9 = *(int *)(this + 8) - iVar2 >> 3;
  uVar5 = uVar4;
  if ((uVar9 <= 0x1fffffff - (uVar9 >> 1)) && (uVar5 = (uVar9 >> 1) + uVar9, uVar5 < uVar4)) {
    uVar5 = uVar4;
  }
  uVar9 = uVar5 * 8;
  if (uVar5 < 0x20000000) {
    if (0xfff < uVar9) goto LAB_004213a2;
    if (uVar9 == 0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      puVar12 = operator_new(uVar9);
    }
  }
  else {
    uVar9 = 0xffffffff;
LAB_004213a2:
    uVar6 = uVar9 + 0x23;
    if (uVar6 <= uVar9) {
      uVar6 = 0xffffffff;
    }
    pvVar7 = operator_new(uVar6);
    if (pvVar7 == (void *)0x0) goto LAB_004214bd;
    puVar12 = (undefined4 *)((int)pvVar7 + 0x23U & 0xffffffe0);
    puVar12[-1] = pvVar7;
  }
  puVar1 = puVar12 + iVar14 * 2;
  *puVar1 = *(undefined4 *)param_2;
  puVar1[1] = *(undefined4 *)(param_2 + 4);
  pHVar15 = *(HullDamageChance **)(this + 4);
  pHVar10 = *(HullDamageChance **)this;
  puVar13 = puVar12;
  if (param_1 == pHVar15) {
    for (; pHVar10 != pHVar15; pHVar10 = pHVar10 + 8) {
      *puVar13 = *(undefined4 *)pHVar10;
      puVar13[1] = *(undefined4 *)(pHVar10 + 4);
      puVar13 = puVar13 + 2;
    }
  }
  else {
    if (pHVar10 != param_1) {
      do {
        *puVar13 = *(undefined4 *)pHVar10;
        pHVar15 = pHVar10 + 4;
        pHVar10 = pHVar10 + 8;
        puVar13[1] = *(undefined4 *)pHVar15;
        puVar13 = puVar13 + 2;
      } while (pHVar10 != param_1);
      pHVar15 = *(HullDamageChance **)(this + 4);
    }
    for (; param_1 != pHVar15; param_1 = param_1 + 8) {
      puVar1[2] = *(undefined4 *)param_1;
      puVar1[3] = *(undefined4 *)(param_1 + 4);
      puVar1 = puVar1 + 2;
    }
  }
  pvVar7 = *(void **)this;
  if (pvVar7 != (void *)0x0) {
    pnVar11 = (nothrow_t *)(*(int *)(this + 8) - (int)pvVar7 & 0xfffffff8);
    pvVar8 = pvVar7;
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar8 = *(void **)((int)pvVar7 + -4);
      pnVar11 = pnVar11 + 0x23;
      if (0x1f < (uint)((int)pvVar7 + (-4 - (int)pvVar8))) {
LAB_004214bd:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar8,pnVar11);
  }
  *(undefined4 **)this = puVar12;
  *(undefined4 **)(this + 4) = puVar12 + uVar4 * 2;
  *(undefined4 **)(this + 8) = puVar12 + uVar5 * 2;
  return (HullDamageChance *)(*(int *)this + iVar14 * 8);
}


// private: class Waypoint * __thiscall std::vector<class Waypoint,class std::allocator<class
// Waypoint> >::_Umove(class Waypoint *,class Waypoint *,class Waypoint *)

Waypoint * __thiscall
std::vector<>::_Umove(vector<> *this,Waypoint *param_1,Waypoint *param_2,Waypoint *param_3)

{
  Waypoint *pWVar1;
  Waypoint *pWVar2;
  Waypoint *pWVar3;
  
  pWVar3 = param_3;
  if (param_1 != param_2) {
    pWVar2 = param_1 + 4;
    do {
      *(undefined4 *)pWVar3 = *(undefined4 *)(pWVar2 + -4);
      *(undefined4 *)(pWVar2 + 0x20 + (int)(param_3 + (-0x20 - (int)param_1))) =
           *(undefined4 *)pWVar2;
      *(undefined4 *)(pWVar3 + 8) = *(undefined4 *)(pWVar2 + 4);
      *(undefined4 *)(pWVar3 + 0xc) = *(undefined4 *)(pWVar2 + 8);
      *(undefined4 *)(pWVar3 + 0x10) = *(undefined4 *)(pWVar2 + 0xc);
      *(undefined4 *)(pWVar3 + 0x14) = *(undefined4 *)(pWVar2 + 0x10);
      pWVar3[0x18] = pWVar2[0x14];
      *(undefined4 *)(pWVar3 + 0x1c) = *(undefined4 *)(pWVar2 + 0x18);
      pWVar1 = pWVar2 + 0x1c;
      pWVar3 = pWVar3 + 0x20;
      pWVar2 = pWVar2 + 0x20;
    } while (pWVar1 != param_2);
  }
  return pWVar3;
}


// public: __thiscall std::vector<class MusicTrack *,class std::allocator<class MusicTrack *>
// >::vector<class MusicTrack *,class std::allocator<class MusicTrack *> >(class std::vector<class
// MusicTrack *,class std::allocator<class MusicTrack *> > const &)

vector<> * __thiscall std::vector<>::vector<>(vector<> *this,vector<> *param_1)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  size_t sVar5;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  uVar1 = *(int *)(param_1 + 4) - *(int *)param_1 >> 2;
  if (uVar1 != 0) {
    if (0x3fffffff < uVar1) {
                    // WARNING: Subroutine does not return
      vector<>::_Xlength();
    }
    uVar1 = uVar1 * 4;
    if (uVar1 < 0x1000) {
      if (uVar1 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = operator_new(uVar1);
      }
    }
    else {
      uVar2 = uVar1 + 0x23;
      if (uVar2 <= uVar1) {
        uVar2 = 0xffffffff;
      }
      pvVar3 = operator_new(uVar2);
      if (pvVar3 == (void *)0x0) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      pvVar4 = (void *)((int)pvVar3 + 0x23U & 0xffffffe0);
      *(void **)((int)pvVar4 - 4) = pvVar3;
    }
    *(void **)this = pvVar4;
    *(void **)(this + 4) = pvVar4;
    *(uint *)(this + 8) = *(int *)this + uVar1;
    pvVar4 = *(void **)this;
    sVar5 = *(int *)(param_1 + 4) - (int)*(void **)param_1;
    memmove(pvVar4,*(void **)param_1,sVar5);
    *(size_t *)(this + 4) = sVar5 + (int)pvVar4;
  }
  return this;
}


// public: struct HullStrength & __thiscall std::vector<struct HullStrength,class
// std::allocator<struct HullStrength> >::operator[](unsigned int)

HullStrength * __thiscall std::vector<>::operator[](vector<> *this,uint param_1)

{
  return (HullStrength *)(*(int *)this + param_1 * 0xc);
}


// public: unsigned int __thiscall std::vector<struct HullStrength,class std::allocator<struct
// HullStrength> >::size(void)const 

uint __thiscall std::vector<>::size(vector<> *this)

{
  return (*(int *)(this + 4) - *(int *)this) / 0xc;
}


// public: void __thiscall std::vector<class cocos2d::Vec2,class std::allocator<class cocos2d::Vec2>
// >::push_back(class cocos2d::Vec2 const &)

void __thiscall std::vector<>::push_back(vector<> *this,Vec2 *param_1)

{
  Vec2 *pVVar1;
  
  pVVar1 = *(Vec2 **)(this + 4);
  if (*(Vec2 **)(this + 8) != pVVar1) {
    *(undefined4 *)pVVar1 = *(undefined4 *)param_1;
    *(undefined4 *)(pVVar1 + 4) = *(undefined4 *)(param_1 + 4);
    *(Vec2 **)(this + 4) = pVVar1 + 8;
    return;
  }
  _Emplace_reallocate<>(this,pVVar1,param_1);
  return;
}


// public: __thiscall std::vector<enum EDifficultyMode::DifficultyMode,class std::allocator<enum
// EDifficultyMode::DifficultyMode> >::vector<enum EDifficultyMode::DifficultyMode,class
// std::allocator<enum EDifficultyMode::DifficultyMode> >(void)

vector<> * __thiscall std::vector<>::vector<>(vector<> *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return this;
}


// public: class cocos2d::Vec2 * __thiscall std::vector<class cocos2d::Vec2,class
// std::allocator<class cocos2d::Vec2> >::_Emplace_reallocate<class cocos2d::Vec2>(class
// cocos2d::Vec2 * const,class cocos2d::Vec2 &&)

Vec2 * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,Vec2 *param_1,Vec2 *param_2)

{
  uint uVar1;
  Vec2 *pVVar2;
  int iVar3;
  Vec2 *pVVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  uint uVar9;
  Vec2 *pVVar10;
  Vec2 *pVVar11;
  Vec2 *pVVar12;
  
  iVar3 = *(int *)this;
  iVar5 = *(int *)(this + 4) - iVar3 >> 3;
  if (iVar5 == 0x1fffffff) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar1 = iVar5 + 1;
  uVar9 = *(int *)(this + 8) - iVar3 >> 3;
  uVar6 = uVar1;
  if ((uVar9 <= 0x1fffffff - (uVar9 >> 1)) && (uVar6 = (uVar9 >> 1) + uVar9, uVar6 < uVar1)) {
    uVar6 = uVar1;
  }
  uVar9 = uVar6 * 8;
  if (uVar6 < 0x20000000) {
    if (uVar9 < 0x1000) {
      if (uVar9 == 0) {
        pVVar12 = (Vec2 *)0x0;
      }
      else {
        pVVar12 = operator_new(uVar9);
      }
      goto LAB_0042b321;
    }
  }
  else {
    uVar9 = 0xffffffff;
  }
  uVar7 = uVar9 + 0x23;
  if (uVar7 <= uVar9) {
    uVar7 = 0xffffffff;
  }
  pvVar8 = operator_new(uVar7);
  if (pvVar8 == (void *)0x0) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  pVVar12 = (Vec2 *)((int)pvVar8 + 0x23U & 0xffffffe0);
  *(void **)(pVVar12 + -4) = pvVar8;
LAB_0042b321:
  iVar3 = ((int)param_1 - iVar3 >> 3) * 8;
  pVVar2 = pVVar12 + iVar3;
  *(undefined4 *)pVVar2 = *(undefined4 *)param_2;
  *(undefined4 *)(pVVar2 + 4) = *(undefined4 *)(param_2 + 4);
  pVVar11 = *(Vec2 **)(this + 4);
  pVVar10 = *(Vec2 **)this;
  if (param_1 == pVVar11) {
    if (pVVar10 != pVVar11) {
      iVar5 = (int)pVVar12 - (int)pVVar10;
      do {
        *(undefined4 *)(pVVar10 + iVar5) = *(undefined4 *)pVVar10;
        *(undefined4 *)(pVVar10 + iVar5 + 4) = *(undefined4 *)(pVVar10 + 4);
        pVVar10 = pVVar10 + 8;
      } while (pVVar10 != pVVar11);
    }
  }
  else {
    pVVar4 = param_1;
    if (pVVar10 != param_1) {
      iVar5 = (int)pVVar12 - (int)pVVar10;
      do {
        *(undefined4 *)(pVVar10 + iVar5) = *(undefined4 *)pVVar10;
        *(undefined4 *)(pVVar10 + iVar5 + 4) = *(undefined4 *)(pVVar10 + 4);
        pVVar10 = pVVar10 + 8;
      } while (pVVar10 != param_1);
      pVVar11 = *(Vec2 **)(this + 4);
    }
    for (; pVVar4 != pVVar11; pVVar4 = pVVar4 + 8) {
      *(undefined4 *)(pVVar4 + (int)(pVVar2 + (8 - (int)param_1))) = *(undefined4 *)pVVar4;
      *(undefined4 *)(pVVar4 + (int)(pVVar2 + (0xc - (int)param_1))) = *(undefined4 *)(pVVar4 + 4);
    }
  }
  _Change_array(this,pVVar12,uVar1,uVar6);
  return (Vec2 *)(*(int *)this + iVar3);
}


// private: void __thiscall std::vector<class cocos2d::Vec2,class std::allocator<class
// cocos2d::Vec2> >::_Change_array(class cocos2d::Vec2 * const,unsigned int,unsigned int)

void __thiscall std::vector<>::_Change_array(vector<> *this,Vec2 *param_1,uint param_2,uint param_3)

{
  void *pvVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    pnVar3 = (nothrow_t *)(*(int *)(this + 8) - (int)pvVar1 & 0xfffffff8);
    pvVar2 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)pvVar1 + -4);
      pnVar3 = pnVar3 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  *(Vec2 **)this = param_1;
  *(Vec2 **)(this + 4) = param_1 + param_2 * 8;
  *(Vec2 **)(this + 8) = param_1 + param_3 * 8;
  return;
}


// public: class std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > & __thiscall std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >::operator=(class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > &&)

vector<> * __thiscall std::vector<>::operator=(vector<> *this,vector<> *param_1)

{
  if (this != (vector<> *)param_1) {
    _Tidy(this);
    *(undefined4 *)this = *(undefined4 *)param_1;
    *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return (vector<> *)this;
}


// public: __thiscall std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > >::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >(class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > const &)

vector<> * __thiscall std::vector<>::vector<>(vector<> *this,vector<> *param_1)

{
  bool bVar1;
  basic_string<> *pbVar2;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b3b20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  bVar1 = _Buy(this,(*(int *)(param_1 + 4) - *(int *)param_1) / 0x18);
  if (bVar1) {
    local_8 = 0;
    pbVar2 = _Ucopy<>(this,*(basic_string<> **)param_1,*(basic_string<> **)(param_1 + 4),
                      *(basic_string<> **)this);
    *(basic_string<> **)(this + 4) = pbVar2;
  }
  ExceptionList = local_10;
  return this;
}


// private: bool __thiscall std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >
// >::_Buy(unsigned int)

bool __thiscall std::vector<>::_Buy(vector<> *this,uint param_1)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  if (param_1 == 0) {
    return false;
  }
  if (0xaaaaaaa < param_1) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar3 = param_1 * 0x18;
  if (uVar3 < 0x1000) {
    if (uVar3 != 0) {
      pvVar2 = operator_new(uVar3);
      *(void **)this = pvVar2;
      *(void **)(this + 4) = pvVar2;
      *(uint *)(this + 8) = *(int *)this + uVar3;
      return true;
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = *(undefined4 *)this;
    return true;
  }
  uVar1 = uVar3 + 0x23;
  if (uVar1 <= uVar3) {
    uVar1 = 0xffffffff;
  }
  pvVar2 = operator_new(uVar1);
  if (pvVar2 != (void *)0x0) {
    uVar1 = (int)pvVar2 + 0x23U & 0xffffffe0;
    *(void **)(uVar1 - 4) = pvVar2;
    *(uint *)this = uVar1;
    *(uint *)(this + 4) = uVar1;
    *(uint *)(this + 8) = *(int *)this + uVar3;
    return true;
  }
                    // WARNING: Subroutine does not return
  _invalid_parameter_noinfo_noreturn();
}


// private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// * __thiscall std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > >::_Ucopy<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *>(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *)

basic_string<> * __thiscall
std::vector<>::_Ucopy<>
          (vector<> *this,basic_string<> *param_1,basic_string<> *param_2,basic_string<> *param_3)

{
  void **ppvVar1;
  basic_string<> *pbVar2;
  basic_string<> *extraout_ECX;
  allocator<> *unaff_EDI;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b3b78;
  pbVar2 = (basic_string<> *)(___security_cookie ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  ppvVar1 = &local_10;
  local_10 = ExceptionList;
  for (; ExceptionList = ppvVar1, param_1 != param_2; param_1 = param_1 + 0x18) {
    basic_string<>::basic_string<>((basic_string<> *)param_3,param_1);
    param_3 = param_3 + 0x18;
    ppvVar1 = ExceptionList;
    this = (vector<> *)extraout_ECX;
  }
  _Destroy_range<>((basic_string<> *)this,pbVar2,unaff_EDI);
  ExceptionList = local_10;
  return (basic_string<> *)param_3;
}


// private: void __thiscall std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >
// >::_Assign_range<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > *>(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > *,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > *,struct std::forward_iterator_tag)

void __thiscall
std::vector<>::_Assign_range<>(vector<> *this,basic_string<> *param_1,basic_string<> *param_2)

{
  basic_string<> *pbVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  basic_string<> *pbVar6;
  nothrow_t *pnVar7;
  allocator<> *unaff_ESI;
  uint uVar8;
  basic_string<> *unaff_EDI;
  basic_string<> *pbVar9;
  
  uVar3 = ((int)param_2 - (int)param_1) / 0x18;
  uVar8 = (*(int *)(this + 4) - *(int *)this) / 0x18;
  uVar4 = (*(int *)(this + 8) - *(int *)this) / 0x18;
  if (uVar3 <= uVar4) {
    pbVar9 = *(basic_string<> **)this;
    if (uVar3 <= uVar8) {
      pbVar1 = pbVar9 + uVar3 * 0x18;
      _Copy_unchecked<>(pbVar9,(basic_string<> *)unaff_EDI,(basic_string<> *)unaff_ESI);
      _Destroy_range<>((basic_string<> *)pbVar9,unaff_EDI,unaff_ESI);
      *(basic_string<> **)(this + 4) = pbVar1;
      return;
    }
    _Copy_unchecked<>(pbVar9,(basic_string<> *)unaff_EDI,(basic_string<> *)unaff_ESI);
    pbVar6 = _Ucopy<>(this,param_1 + uVar8 * 0x18,param_2,*(basic_string<> **)(this + 4));
    *(basic_string<> **)(this + 4) = pbVar6;
    return;
  }
  if (0xaaaaaaa < uVar3) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar8 = uVar3;
  if ((uVar4 <= 0xaaaaaaa - (uVar4 >> 1)) && (uVar8 = (uVar4 >> 1) + uVar4, uVar8 < uVar3)) {
    uVar8 = uVar3;
  }
  if (*(basic_string<> **)this != (basic_string<> *)0x0) {
    _Destroy_range<>(*(basic_string<> **)this,unaff_EDI,unaff_ESI);
    pvVar2 = *(void **)this;
    pnVar7 = (nothrow_t *)(uVar4 * 0x18);
    pvVar5 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar5 = *(void **)((int)pvVar2 + -4);
      pnVar7 = pnVar7 + 0x23;
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar5,pnVar7);
  }
  _Buy(this,uVar8);
  pbVar6 = _Ucopy<>(this,param_1,param_2,*(basic_string<> **)this);
  *(basic_string<> **)(this + 4) = pbVar6;
  return;
}


// public: __thiscall std::vector<class Requirement,class std::allocator<class Requirement>
// >::~vector<class Requirement,class std::allocator<class Requirement> >(void)

void __thiscall std::vector<>::~vector<>(vector<> *this)

{
  nothrow_t *pnVar1;
  Requirement *this_00;
  Requirement *pRVar2;
  
  this_00 = *(Requirement **)this;
  if (this_00 != (Requirement *)0x0) {
    pRVar2 = *(Requirement **)(this + 4);
    if (this_00 != pRVar2) {
      do {
        Requirement::_scalar_deleting_destructor_(this_00,0);
        this_00 = this_00 + 0x40;
      } while (this_00 != pRVar2);
      this_00 = *(Requirement **)this;
    }
    pnVar1 = (nothrow_t *)(*(int *)(this + 8) - (int)this_00 & 0xffffffc0);
    pRVar2 = this_00;
    if ((nothrow_t *)0xfff < pnVar1) {
      pRVar2 = *(Requirement **)(this_00 + -4);
      pnVar1 = pnVar1 + 0x23;
      if ((Requirement *)0x1f < this_00 + (-4 - (int)pRVar2)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pRVar2,pnVar1);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// private: void __thiscall std::vector<class PrivateCommElement,class std::allocator<class
// PrivateCommElement> >::_Destroy(class PrivateCommElement *,class PrivateCommElement *)

void __thiscall
std::vector<>::_Destroy(vector<> *this,PrivateCommElement *param_1,PrivateCommElement *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x38) {
    PrivateCommElement::~PrivateCommElement(param_1);
  }
  return;
}


// private: void __thiscall std::vector<class PrivateCommOption,class std::allocator<class
// PrivateCommOption> >::_Tidy(void)

void __thiscall std::vector<>::_Tidy(vector<> *this)

{
  nothrow_t *pnVar1;
  PrivateCommOption *this_00;
  PrivateCommOption *pPVar2;
  
  this_00 = *(PrivateCommOption **)this;
  if (this_00 != (PrivateCommOption *)0x0) {
    pPVar2 = *(PrivateCommOption **)(this + 4);
    if (this_00 != pPVar2) {
      do {
        PrivateCommOption::~PrivateCommOption(this_00);
        this_00 = this_00 + 0xa8;
      } while (this_00 != pPVar2);
      this_00 = *(PrivateCommOption **)this;
    }
    pnVar1 = (nothrow_t *)(((*(int *)(this + 8) - (int)this_00) / 0xa8) * 0xa8);
    pPVar2 = this_00;
    if ((nothrow_t *)0xfff < pnVar1) {
      pPVar2 = *(PrivateCommOption **)(this_00 + -4);
      pnVar1 = pnVar1 + 0x23;
      if ((PrivateCommOption *)0x1f < this_00 + (-4 - (int)pPVar2)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pPVar2,pnVar1);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// private: void __thiscall std::vector<class Requirement,class std::allocator<class Requirement>
// >::_Tidy(void)

void __thiscall std::vector<>::_Tidy(vector<> *this)

{
  nothrow_t *pnVar1;
  Requirement *this_00;
  Requirement *pRVar2;
  
  this_00 = *(Requirement **)this;
  if (this_00 != (Requirement *)0x0) {
    pRVar2 = *(Requirement **)(this + 4);
    if (this_00 != pRVar2) {
      do {
        Requirement::_scalar_deleting_destructor_(this_00,0);
        this_00 = this_00 + 0x40;
      } while (this_00 != pRVar2);
      this_00 = *(Requirement **)this;
    }
    pnVar1 = (nothrow_t *)(*(int *)(this + 8) - (int)this_00 & 0xffffffc0);
    pRVar2 = this_00;
    if ((nothrow_t *)0xfff < pnVar1) {
      pRVar2 = *(Requirement **)(this_00 + -4);
      pnVar1 = pnVar1 + 0x23;
      if ((Requirement *)0x1f < this_00 + (-4 - (int)pRVar2)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pRVar2,pnVar1);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// private: void __thiscall std::vector<class PrivateCommOption,class std::allocator<class
// PrivateCommOption> >::_Destroy(class PrivateCommOption *,class PrivateCommOption *)

void __thiscall
std::vector<>::_Destroy(vector<> *this,PrivateCommOption *param_1,PrivateCommOption *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xa8) {
    PrivateCommOption::~PrivateCommOption(param_1);
  }
  return;
}


// public: void __thiscall std::vector<class PrivateCommElement,class std::allocator<class
// PrivateCommElement> >::emplace_back<class PrivateCommElement const &>(class PrivateCommElement
// const &)

void __thiscall std::vector<>::emplace_back<>(vector<> *this,PrivateCommElement *param_1)

{
  PrivateCommElement *pPVar1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b49f6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pPVar1 = *(PrivateCommElement **)(this + 4);
  if (*(PrivateCommElement **)(this + 8) != pPVar1) {
    *(undefined4 *)pPVar1 = *(undefined4 *)param_1;
    *(undefined4 *)(pPVar1 + 4) = *(undefined4 *)(param_1 + 4);
    basic_string<>::basic_string<>((basic_string<> *)(pPVar1 + 8),(basic_string<> *)(param_1 + 8));
    local_8 = 0;
    vector<>::vector<>((vector<> *)(pPVar1 + 0x20),(vector<> *)(param_1 + 0x20));
    local_8 = CONCAT31(local_8._1_3_,1);
    vector<>::vector<>((vector<> *)(pPVar1 + 0x2c),(vector<> *)(param_1 + 0x2c));
    *(int *)(this + 4) = *(int *)(this + 4) + 0x38;
    ExceptionList = local_10;
    return;
  }
  _Emplace_reallocate<>(this,pPVar1,param_1);
  ExceptionList = local_10;
  return;
}


// public: void __thiscall std::vector<class PrivateCommOption,class std::allocator<class
// PrivateCommOption> >::clear(void)

void __thiscall std::vector<>::clear(vector<> *this)

{
  PrivateCommOption *pPVar1;
  PrivateCommOption *this_00;
  
  pPVar1 = *(PrivateCommOption **)(this + 4);
  this_00 = *(PrivateCommOption **)this;
  if (this_00 != pPVar1) {
    do {
      PrivateCommOption::~PrivateCommOption(this_00);
      this_00 = this_00 + 0xa8;
    } while (this_00 != pPVar1);
    *(undefined4 *)(this + 4) = *(undefined4 *)this;
    return;
  }
  *(PrivateCommOption **)(this + 4) = this_00;
  return;
}


// public: void __thiscall std::vector<class PrivateCommOption,class std::allocator<class
// PrivateCommOption> >::push_back(class PrivateCommOption &&)

void __thiscall std::vector<>::push_back(vector<> *this,PrivateCommOption *param_1)

{
  PrivateCommOption *this_00;
  
  this_00 = *(PrivateCommOption **)(this + 4);
  if (*(PrivateCommOption **)(this + 8) != this_00) {
    PrivateCommOption::PrivateCommOption(this_00,param_1);
    *(int *)(this + 4) = *(int *)(this + 4) + 0xa8;
    return;
  }
  _Emplace_reallocate<>(this,this_00,param_1);
  return;
}


// public: class PrivateCommElement * __thiscall std::vector<class PrivateCommElement,class
// std::allocator<class PrivateCommElement> >::_Emplace_reallocate<class PrivateCommElement const
// &>(class PrivateCommElement * const,class PrivateCommElement const &)

PrivateCommElement * __thiscall
std::vector<>::_Emplace_reallocate<>
          (vector<> *this,PrivateCommElement *param_1,PrivateCommElement *param_2)

{
  PrivateCommElement *pPVar1;
  int iVar2;
  PrivateCommElement *pPVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  PrivateCommElement *extraout_ECX;
  nothrow_t *pnVar9;
  PrivateCommElement *pPVar10;
  allocator<> *unaff_EDI;
  PrivateCommElement *pPVar11;
  PrivateCommElement *pPVar12;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b4a36;
  local_10 = ExceptionList;
  pPVar3 = (PrivateCommElement *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  iVar7 = *(int *)this;
  iVar2 = (*(int *)(this + 4) - iVar7) / 0x38;
  if (iVar2 == 0x4924924) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar8 = iVar2 + 1;
  uVar5 = (*(int *)(this + 8) - iVar7) / 0x38;
  uVar4 = uVar8;
  if ((uVar5 <= 0x4924924 - (uVar5 >> 1)) && (uVar4 = (uVar5 >> 1) + uVar5, uVar4 < uVar8)) {
    uVar4 = uVar8;
  }
  uVar8 = uVar4 * 0x38;
  if (uVar4 < 0x4924925) {
    uVar4 = uVar8;
    if (0xfff < uVar8) goto LAB_004365af;
    if (uVar8 == 0) {
      pPVar11 = (PrivateCommElement *)0x0;
    }
    else {
      pPVar11 = operator_new(uVar8);
    }
  }
  else {
    uVar4 = 0xffffffff;
LAB_004365af:
    uVar5 = uVar4 + 0x23;
    if (uVar5 <= uVar4) {
      uVar5 = 0xffffffff;
    }
    pvVar6 = operator_new(uVar5);
    if (pvVar6 == (void *)0x0) goto LAB_004365d2;
    pPVar11 = (PrivateCommElement *)((int)pvVar6 + 0x23U & 0xffffffe0);
    *(void **)(pPVar11 + -4) = pvVar6;
  }
  local_8 = 0;
  iVar7 = (((int)param_1 - iVar7) / 0x38) * 0x38;
  pPVar1 = pPVar11 + iVar7;
  *(undefined4 *)pPVar1 = *(undefined4 *)param_2;
  *(undefined4 *)(pPVar1 + 4) = *(undefined4 *)(param_2 + 4);
  basic_string<>::basic_string<>((basic_string<> *)(pPVar1 + 8),(basic_string<> *)(param_2 + 8));
  local_8._0_1_ = 1;
  vector<>::vector<>((vector<> *)(pPVar1 + 0x20),(vector<> *)(param_2 + 0x20));
  local_8 = CONCAT31(local_8._1_3_,2);
  vector<>::vector<>((vector<> *)(pPVar1 + 0x2c),(vector<> *)(param_2 + 0x2c));
  pPVar10 = pPVar11;
  pPVar12 = extraout_ECX;
  if (param_1 != *(PrivateCommElement **)(this + 4)) {
    _Uninitialized_move<>(pPVar11,extraout_ECX,pPVar3,unaff_EDI);
    pPVar10 = pPVar1 + 0x38;
  }
  _Uninitialized_move<>(pPVar10,pPVar12,pPVar3,unaff_EDI);
  pPVar3 = *(PrivateCommElement **)this;
  if (pPVar3 != (PrivateCommElement *)0x0) {
    pPVar10 = *(PrivateCommElement **)(this + 4);
    if (pPVar3 != pPVar10) {
      do {
        PrivateCommElement::~PrivateCommElement(pPVar3);
        pPVar3 = pPVar3 + 0x38;
      } while (pPVar3 != pPVar10);
      pPVar3 = *(PrivateCommElement **)this;
    }
    pnVar9 = (nothrow_t *)(((*(int *)(this + 8) - (int)pPVar3) / 0x38) * 0x38);
    pPVar10 = pPVar3;
    if ((nothrow_t *)0xfff < pnVar9) {
      pPVar10 = *(PrivateCommElement **)(pPVar3 + -4);
      pnVar9 = pnVar9 + 0x23;
      if ((PrivateCommElement *)0x1f < pPVar3 + (-4 - (int)pPVar10)) {
LAB_004365d2:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pPVar10,pnVar9);
  }
  *(PrivateCommElement **)this = pPVar11;
  *(PrivateCommElement **)(this + 4) = pPVar11 + (iVar2 + 1) * 0x38;
  *(PrivateCommElement **)(this + 8) = pPVar11 + uVar8;
  ExceptionList = local_10;
  return (PrivateCommElement *)(*(int *)this + iVar7);
}


// public: class PrivateCommOption * __thiscall std::vector<class PrivateCommOption,class
// std::allocator<class PrivateCommOption> >::_Emplace_reallocate<class PrivateCommOption>(class
// PrivateCommOption * const,class PrivateCommOption &&)

PrivateCommOption * __thiscall
std::vector<>::_Emplace_reallocate<>
          (vector<> *this,PrivateCommOption *param_1,PrivateCommOption *param_2)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  PrivateCommOption *pPVar7;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b4a60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar4 = *(int *)this;
  iVar1 = (*(int *)(this + 4) - iVar4) / 0xa8;
  if (iVar1 == 0x1861861) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar5 = iVar1 + 1;
  uVar2 = (*(int *)(this + 8) - iVar4) / 0xa8;
  uVar6 = uVar5;
  if ((uVar2 <= 0x1861861 - (uVar2 >> 1)) && (uVar6 = (uVar2 >> 1) + uVar2, uVar6 < uVar5)) {
    uVar6 = uVar5;
  }
  uVar5 = uVar6 * 0xa8;
  if (uVar6 < 0x1861862) {
    if (uVar5 < 0x1000) {
      if (uVar5 == 0) {
        pPVar7 = (PrivateCommOption *)0x0;
      }
      else {
        pPVar7 = operator_new(uVar5);
      }
      goto LAB_00436853;
    }
  }
  else {
    uVar5 = 0xffffffff;
  }
  uVar2 = uVar5 + 0x23;
  if (uVar2 <= uVar5) {
    uVar2 = 0xffffffff;
  }
  pvVar3 = operator_new(uVar2);
  if (pvVar3 == (void *)0x0) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  pPVar7 = (PrivateCommOption *)((int)pvVar3 + 0x23U & 0xffffffe0);
  *(void **)(pPVar7 + -4) = pvVar3;
LAB_00436853:
  iVar4 = (((int)param_1 - iVar4) / 0xa8) * 0xa8;
  local_8 = 0;
  PrivateCommOption::PrivateCommOption(pPVar7 + iVar4,param_2);
  if (param_1 == *(PrivateCommOption **)(this + 4)) {
    _Umove_if_noexcept(this,*(PrivateCommOption **)this,*(PrivateCommOption **)(this + 4),pPVar7);
  }
  else {
    _Umove(this,*(PrivateCommOption **)this,param_1,pPVar7);
    _Umove(this,param_1,*(PrivateCommOption **)(this + 4),pPVar7 + iVar4 + 0xa8);
  }
  _Change_array(this,pPVar7,iVar1 + 1,uVar6);
  ExceptionList = local_10;
  return (PrivateCommOption *)(*(int *)this + iVar4);
}


// public: class PrivateCommOption * __thiscall std::vector<class PrivateCommOption,class
// std::allocator<class PrivateCommOption> >::_Emplace_reallocate<class PrivateCommOption const
// &>(class PrivateCommOption * const,class PrivateCommOption const &)

PrivateCommOption * __thiscall
std::vector<>::_Emplace_reallocate<>
          (vector<> *this,PrivateCommOption *param_1,PrivateCommOption *param_2)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  PrivateCommOption *pPVar7;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b4a80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar4 = *(int *)this;
  iVar1 = (*(int *)(this + 4) - iVar4) / 0xa8;
  if (iVar1 == 0x1861861) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar5 = iVar1 + 1;
  uVar2 = (*(int *)(this + 8) - iVar4) / 0xa8;
  uVar6 = uVar5;
  if ((uVar2 <= 0x1861861 - (uVar2 >> 1)) && (uVar6 = (uVar2 >> 1) + uVar2, uVar6 < uVar5)) {
    uVar6 = uVar5;
  }
  uVar5 = uVar6 * 0xa8;
  if (uVar6 < 0x1861862) {
    if (uVar5 < 0x1000) {
      if (uVar5 == 0) {
        pPVar7 = (PrivateCommOption *)0x0;
      }
      else {
        pPVar7 = operator_new(uVar5);
      }
      goto LAB_00436a13;
    }
  }
  else {
    uVar5 = 0xffffffff;
  }
  uVar2 = uVar5 + 0x23;
  if (uVar2 <= uVar5) {
    uVar2 = 0xffffffff;
  }
  pvVar3 = operator_new(uVar2);
  if (pvVar3 == (void *)0x0) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  pPVar7 = (PrivateCommOption *)((int)pvVar3 + 0x23U & 0xffffffe0);
  *(void **)(pPVar7 + -4) = pvVar3;
LAB_00436a13:
  iVar4 = (((int)param_1 - iVar4) / 0xa8) * 0xa8;
  local_8 = 0;
  PrivateCommOption::PrivateCommOption(pPVar7 + iVar4,param_2);
  if (param_1 == *(PrivateCommOption **)(this + 4)) {
    _Umove_if_noexcept(this,*(PrivateCommOption **)this,*(PrivateCommOption **)(this + 4),pPVar7);
  }
  else {
    _Umove(this,*(PrivateCommOption **)this,param_1,pPVar7);
    _Umove(this,param_1,*(PrivateCommOption **)(this + 4),pPVar7 + iVar4 + 0xa8);
  }
  _Change_array(this,pPVar7,iVar1 + 1,uVar6);
  ExceptionList = local_10;
  return (PrivateCommOption *)(*(int *)this + iVar4);
}


// private: void __thiscall std::vector<class PrivateCommOption,class std::allocator<class
// PrivateCommOption> >::_Change_array(class PrivateCommOption * const,unsigned int,unsigned int)

void __thiscall
std::vector<>::_Change_array(vector<> *this,PrivateCommOption *param_1,uint param_2,uint param_3)

{
  nothrow_t *pnVar1;
  PrivateCommOption *this_00;
  PrivateCommOption *pPVar2;
  
  this_00 = *(PrivateCommOption **)this;
  if (this_00 != (PrivateCommOption *)0x0) {
    pPVar2 = *(PrivateCommOption **)(this + 4);
    if (this_00 != pPVar2) {
      do {
        PrivateCommOption::~PrivateCommOption(this_00);
        this_00 = this_00 + 0xa8;
      } while (this_00 != pPVar2);
      this_00 = *(PrivateCommOption **)this;
    }
    pnVar1 = (nothrow_t *)(((*(int *)(this + 8) - (int)this_00) / 0xa8) * 0xa8);
    pPVar2 = this_00;
    if ((nothrow_t *)0xfff < pnVar1) {
      pPVar2 = *(PrivateCommOption **)(this_00 + -4);
      pnVar1 = pnVar1 + 0x23;
      if ((PrivateCommOption *)0x1f < this_00 + (-4 - (int)pPVar2)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pPVar2,pnVar1);
  }
  *(PrivateCommOption **)this = param_1;
  *(PrivateCommOption **)(this + 4) = param_1 + param_2 * 0xa8;
  *(PrivateCommOption **)(this + 8) = param_1 + param_3 * 0xa8;
  return;
}


// private: void __thiscall std::vector<class PrivateCommOption,class std::allocator<class
// PrivateCommOption> >::_Umove_if_noexcept(class PrivateCommOption *,class PrivateCommOption
// *,class PrivateCommOption *)

void __thiscall
std::vector<>::_Umove_if_noexcept
          (vector<> *this,PrivateCommOption *param_1,PrivateCommOption *param_2,
          PrivateCommOption *param_3)

{
  void **ppvVar1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b4b68;
  local_8 = 0;
  ppvVar1 = &local_10;
  local_10 = ExceptionList;
  for (; ExceptionList = ppvVar1, param_1 != param_2; param_1 = param_1 + 0xa8) {
    PrivateCommOption::PrivateCommOption(param_3,param_1);
    param_3 = param_3 + 0xa8;
    ppvVar1 = ExceptionList;
  }
  ExceptionList = local_10;
  return;
}


// private: class PrivateCommOption * __thiscall std::vector<class PrivateCommOption,class
// std::allocator<class PrivateCommOption> >::_Umove(class PrivateCommOption *,class
// PrivateCommOption *,class PrivateCommOption *)

PrivateCommOption * __thiscall
std::vector<>::_Umove
          (vector<> *this,PrivateCommOption *param_1,PrivateCommOption *param_2,
          PrivateCommOption *param_3)

{
  void **ppvVar1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b4b68;
  local_8 = 0;
  ppvVar1 = &local_10;
  local_10 = ExceptionList;
  for (; ExceptionList = ppvVar1, param_1 != param_2; param_1 = param_1 + 0xa8) {
    PrivateCommOption::PrivateCommOption(param_3,param_1);
    param_3 = param_3 + 0xa8;
    ppvVar1 = ExceptionList;
  }
  ExceptionList = local_10;
  return param_3;
}


// public: __thiscall std::vector<class PrivateCommOption,class std::allocator<class
// PrivateCommOption> >::vector<class PrivateCommOption,class std::allocator<class
// PrivateCommOption> >(class std::vector<class PrivateCommOption,class std::allocator<class
// PrivateCommOption> > const &)

vector<> * __thiscall std::vector<>::vector<>(vector<> *this,vector<> *param_1)

{
  PrivateCommOption *pPVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  uint uVar5;
  PrivateCommOption *this_00;
  PrivateCommOption *pPVar6;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b4b98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  uVar5 = (*(int *)(param_1 + 4) - *(int *)param_1) / 0xa8;
  if (uVar5 != 0) {
    if (0x1861861 < uVar5) {
                    // WARNING: Subroutine does not return
      vector<>::_Xlength();
    }
    uVar5 = uVar5 * 0xa8;
    if (uVar5 < 0x1000) {
      if (uVar5 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = operator_new(uVar5);
      }
    }
    else {
      uVar2 = uVar5 + 0x23;
      if (uVar2 <= uVar5) {
        uVar2 = 0xffffffff;
      }
      pvVar3 = operator_new(uVar2);
      if (pvVar3 == (void *)0x0) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      pvVar4 = (void *)((int)pvVar3 + 0x23U & 0xffffffe0);
      *(void **)((int)pvVar4 - 4) = pvVar3;
    }
    *(void **)this = pvVar4;
    *(void **)(this + 4) = pvVar4;
    *(uint *)(this + 8) = *(int *)this + uVar5;
    this_00 = *(PrivateCommOption **)this;
    pPVar1 = *(PrivateCommOption **)(param_1 + 4);
    pPVar6 = *(PrivateCommOption **)param_1;
    local_8 = 1;
    for (; pPVar6 != pPVar1; pPVar6 = pPVar6 + 0xa8) {
      PrivateCommOption::PrivateCommOption(this_00,pPVar6);
      this_00 = this_00 + 0xa8;
    }
    *(PrivateCommOption **)(this + 4) = this_00;
  }
  ExceptionList = local_10;
  return this;
}


// public: __thiscall std::vector<class Requirement,class std::allocator<class Requirement>
// >::vector<class Requirement,class std::allocator<class Requirement> >(class std::vector<class
// Requirement,class std::allocator<class Requirement> > const &)

vector<> * __thiscall std::vector<>::vector<>(vector<> *this,vector<> *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b4bd3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  uVar5 = *(int *)(param_1 + 4) - *(int *)param_1 >> 6;
  if (uVar5 != 0) {
    if (0x3ffffff < uVar5) {
                    // WARNING: Subroutine does not return
      vector<>::_Xlength();
    }
    uVar5 = uVar5 * 0x40;
    if (uVar5 < 0x1000) {
      if (uVar5 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = operator_new(uVar5);
      }
    }
    else {
      uVar2 = uVar5 + 0x23;
      if (uVar2 <= uVar5) {
        uVar2 = 0xffffffff;
      }
      pvVar3 = operator_new(uVar2);
      if (pvVar3 == (void *)0x0) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      pvVar4 = (void *)((int)pvVar3 + 0x23U & 0xffffffe0);
      *(void **)((int)pvVar4 - 4) = pvVar3;
    }
    *(void **)this = pvVar4;
    *(void **)(this + 4) = pvVar4;
    *(uint *)(this + 8) = *(int *)this + uVar5;
    puVar7 = *(undefined4 **)this;
    puVar1 = *(undefined4 **)(param_1 + 4);
    puVar6 = *(undefined4 **)param_1;
    local_8._1_3_ = 0;
    for (; local_8._0_1_ = 1, puVar6 != puVar1; puVar6 = puVar6 + 0x10) {
      *puVar7 = *puVar6;
      puVar7[1] = puVar6[1];
      basic_string<>::basic_string<>((basic_string<> *)(puVar7 + 2),(basic_string<> *)(puVar6 + 2));
      local_8._0_1_ = 2;
      basic_string<>::basic_string<>((basic_string<> *)(puVar7 + 8),(basic_string<> *)(puVar6 + 8));
      puVar7[0xe] = puVar6[0xe];
      puVar7[0xf] = puVar6[0xf];
      puVar7 = puVar7 + 0x10;
    }
    *(undefined4 **)(this + 4) = puVar7;
  }
  ExceptionList = local_10;
  return this;
}


// public: class ListData * __thiscall std::vector<class ListData,class std::allocator<class
// ListData> >::_Emplace_reallocate<class ListData>(class ListData * const,class ListData &&)

ListData * __thiscall
std::vector<>::_Emplace_reallocate<ListData>(vector<> *this,ListData *param_1,ListData *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  ListData *pLVar5;
  uint uVar6;
  int iVar7;
  allocator<ListData> *paVar8;
  ListData *unaff_ESI;
  allocator<ListData> *paVar9;
  ListData *unaff_EDI;
  
  iVar7 = (int)param_1 - *(int *)this;
  iVar1 = (*(int *)(this + 4) - *(int *)this) / 0x60;
  if (iVar1 == 0x2aaaaaa) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar6 = iVar1 + 1;
  uVar3 = (*(int *)(this + 8) - *(int *)this) / 0x60;
  uVar2 = uVar6;
  if ((uVar3 <= 0x2aaaaaa - (uVar3 >> 1)) && (uVar2 = (uVar3 >> 1) + uVar3, uVar2 < uVar6)) {
    uVar2 = uVar6;
  }
  uVar6 = uVar2 * 0x60;
  if (uVar2 < 0x2aaaaab) {
    if (uVar6 < 0x1000) {
      if (uVar6 == 0) {
        pLVar5 = (ListData *)0x0;
      }
      else {
        pLVar5 = operator_new(uVar6);
      }
      goto LAB_0043d0cd;
    }
  }
  else {
    uVar6 = 0xffffffff;
  }
  uVar3 = uVar6 + 0x23;
  if (uVar3 <= uVar6) {
    uVar3 = 0xffffffff;
  }
  pvVar4 = operator_new(uVar3);
  if (pvVar4 == (void *)0x0) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  pLVar5 = (ListData *)((int)pvVar4 + 0x23U & 0xffffffe0);
  *(void **)(pLVar5 + -4) = pvVar4;
LAB_0043d0cd:
  _Default_allocator_traits<>::construct<>((allocator<ListData> *)param_2,unaff_EDI,unaff_ESI);
  paVar8 = *(allocator<ListData> **)(this + 4);
  paVar9 = *(allocator<ListData> **)this;
  if (param_1 == (ListData *)paVar8) {
    for (; paVar9 != paVar8; paVar9 = paVar9 + 0x60) {
      _Default_allocator_traits<>::construct<>(paVar9,unaff_EDI,unaff_ESI);
    }
  }
  else {
    if (paVar9 != (allocator<ListData> *)param_1) {
      do {
        _Default_allocator_traits<>::construct<>(paVar9,unaff_EDI,unaff_ESI);
        paVar9 = paVar9 + 0x60;
      } while (paVar9 != (allocator<ListData> *)param_1);
      paVar8 = *(allocator<ListData> **)(this + 4);
    }
    for (; param_1 != (ListData *)paVar8; param_1 = param_1 + 0x60) {
      _Default_allocator_traits<>::construct<>((allocator<ListData> *)param_1,unaff_EDI,unaff_ESI);
    }
  }
  _Change_array(this,pLVar5,iVar1 + 1,uVar2);
  return (ListData *)(*(int *)this + (iVar7 / 0x60) * 0x60);
}


// private: void __thiscall std::vector<class ListData,class std::allocator<class ListData>
// >::_Change_array(class ListData * const,unsigned int,unsigned int)

void __thiscall
std::vector<>::_Change_array(vector<> *this,ListData *param_1,uint param_2,uint param_3)

{
  nothrow_t *pnVar1;
  ListData *this_00;
  ListData *pLVar2;
  
  this_00 = *(ListData **)this;
  if (this_00 != (ListData *)0x0) {
    pLVar2 = *(ListData **)(this + 4);
    if (this_00 != pLVar2) {
      do {
        ListData::~ListData(this_00);
        this_00 = this_00 + 0x60;
      } while (this_00 != pLVar2);
      this_00 = *(ListData **)this;
    }
    pnVar1 = (nothrow_t *)(((*(int *)(this + 8) - (int)this_00) / 0x60) * 0x60);
    pLVar2 = this_00;
    if ((nothrow_t *)0xfff < pnVar1) {
      pLVar2 = *(ListData **)(this_00 + -4);
      pnVar1 = pnVar1 + 0x23;
      if ((ListData *)0x1f < this_00 + (-4 - (int)pLVar2)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pLVar2,pnVar1);
  }
  *(ListData **)this = param_1;
  *(ListData **)(this + 4) = param_1 + param_2 * 0x60;
  *(ListData **)(this + 8) = param_1 + param_3 * 0x60;
  return;
}


// private: void __thiscall std::vector<class ListData,class std::allocator<class ListData>
// >::_Destroy(class ListData *,class ListData *)

void __thiscall std::vector<>::_Destroy(vector<> *this,ListData *param_1,ListData *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x60) {
    ListData::~ListData(param_1);
  }
  return;
}


// public: void __thiscall std::vector<struct PlayerGuidedToPort,class std::allocator<struct
// PlayerGuidedToPort> >::push_back(struct PlayerGuidedToPort &&)

void __thiscall std::vector<>::push_back(vector<> *this,PlayerGuidedToPort *param_1)

{
  int extraout_ECX;
  PlayerGuidedToPort *unaff_EBP;
  PlayerGuidedToPort *unaff_retaddr;
  
  if (*(PlayerGuidedToPort **)(this + 8) != *(PlayerGuidedToPort **)(this + 4)) {
    _Default_allocator_traits<>::construct<>((allocator<> *)param_1,unaff_EBP,unaff_retaddr);
    *(int *)(extraout_ECX + 4) = *(int *)(extraout_ECX + 4) + 0x30;
    return;
  }
  _Emplace_reallocate<>(this,*(PlayerGuidedToPort **)(this + 4),param_1);
  return;
}


// public: void __thiscall std::vector<struct ScreenData,class std::allocator<struct ScreenData>
// >::push_back(struct ScreenData const &)

void __thiscall std::vector<>::push_back(vector<> *this,ScreenData *param_1)

{
  ScreenData *this_00;
  
  this_00 = *(ScreenData **)(this + 4);
  if (*(ScreenData **)(this + 8) != this_00) {
    ScreenData::ScreenData(this_00,param_1);
    *(int *)(this + 4) = *(int *)(this + 4) + 0x50;
    return;
  }
  _Emplace_reallocate<>(this,this_00,param_1);
  return;
}


// public: void __thiscall std::vector<struct Destination,class std::allocator<struct Destination>
// >::push_back(struct Destination &&)

void __thiscall std::vector<>::push_back(vector<> *this,Destination *param_1)

{
  Destination *pDVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  pDVar1 = *(Destination **)(this + 4);
  if (*(Destination **)(this + 8) != pDVar1) {
    *(undefined4 *)pDVar1 = *(undefined4 *)param_1;
    *(undefined4 *)(pDVar1 + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(pDVar1 + 0x18) = 0;
    *(undefined4 *)(pDVar1 + 0x1c) = 0;
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(pDVar1 + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(pDVar1 + 0xc) = uVar2;
    *(undefined4 *)(pDVar1 + 0x10) = uVar3;
    *(undefined4 *)(pDVar1 + 0x14) = uVar4;
    *(undefined8 *)(pDVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0xf;
    param_1[8] = (Destination)0x0;
    pDVar1[0x20] = param_1[0x20];
    *(int *)(this + 4) = *(int *)(this + 4) + 0x24;
    return;
  }
  _Emplace_reallocate<>(this,pDVar1,param_1);
  return;
}


// public: void __thiscall std::vector<struct EngineeringSlotLocation,class std::allocator<struct
// EngineeringSlotLocation> >::push_back(struct EngineeringSlotLocation &&)

void __thiscall std::vector<>::push_back(vector<> *this,EngineeringSlotLocation *param_1)

{
  EngineeringSlotLocation *pEVar1;
  undefined4 uVar2;
  
  pEVar1 = *(EngineeringSlotLocation **)(this + 4);
  if (*(EngineeringSlotLocation **)(this + 8) != pEVar1) {
    *(undefined4 *)pEVar1 = *(undefined4 *)param_1;
    *(undefined4 *)(pEVar1 + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(pEVar1 + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(pEVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    *(int *)(this + 4) = *(int *)(this + 4) + 0x18;
    *(undefined4 *)(pEVar1 + 0x10) = uVar2;
    *(undefined4 *)(pEVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    return;
  }
  _Emplace_reallocate<>(this,pEVar1,param_1);
  return;
}


// public: __thiscall std::vector<struct MouseCursor,class std::allocator<struct MouseCursor>
// >::~vector<struct MouseCursor,class std::allocator<struct MouseCursor> >(void)

void __thiscall std::vector<>::~vector<>(vector<> *this)

{
  nothrow_t *pnVar1;
  MouseCursor *this_00;
  MouseCursor *pMVar2;
  
  this_00 = *(MouseCursor **)this;
  if (this_00 != (MouseCursor *)0x0) {
    pMVar2 = *(MouseCursor **)(this + 4);
    if (this_00 != pMVar2) {
      do {
        MouseCursor::~MouseCursor(this_00);
        this_00 = this_00 + 0x28;
      } while (this_00 != pMVar2);
      this_00 = *(MouseCursor **)this;
    }
    pnVar1 = (nothrow_t *)(((*(int *)(this + 8) - (int)this_00) / 0x28) * 0x28);
    pMVar2 = this_00;
    if ((nothrow_t *)0xfff < pnVar1) {
      pMVar2 = *(MouseCursor **)(this_00 + -4);
      pnVar1 = pnVar1 + 0x23;
      if ((MouseCursor *)0x1f < this_00 + (-4 - (int)pMVar2)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pMVar2,pnVar1);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// public: __thiscall std::vector<class Widget,class std::allocator<class Widget> >::~vector<class
// Widget,class std::allocator<class Widget> >(void)

void __thiscall std::vector<>::~vector<>(vector<> *this)

{
  nothrow_t *pnVar1;
  Widget *this_00;
  Widget *pWVar2;
  
  this_00 = *(Widget **)this;
  if (this_00 != (Widget *)0x0) {
    pWVar2 = *(Widget **)(this + 4);
    if (this_00 != pWVar2) {
      do {
        Widget::~Widget(this_00);
        this_00 = this_00 + 0x188;
      } while (this_00 != pWVar2);
      this_00 = *(Widget **)this;
    }
    pnVar1 = (nothrow_t *)(((*(int *)(this + 8) - (int)this_00) / 0x188) * 0x188);
    pWVar2 = this_00;
    if ((nothrow_t *)0xfff < pnVar1) {
      pWVar2 = *(Widget **)(this_00 + -4);
      pnVar1 = pnVar1 + 0x23;
      if ((Widget *)0x1f < this_00 + (-4 - (int)pWVar2)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pWVar2,pnVar1);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// private: void __thiscall std::vector<struct MouseCursor,class std::allocator<struct MouseCursor>
// >::_Tidy(void)

void __thiscall std::vector<>::_Tidy(vector<> *this)

{
  nothrow_t *pnVar1;
  MouseCursor *this_00;
  MouseCursor *pMVar2;
  
  this_00 = *(MouseCursor **)this;
  if (this_00 != (MouseCursor *)0x0) {
    pMVar2 = *(MouseCursor **)(this + 4);
    if (this_00 != pMVar2) {
      do {
        MouseCursor::~MouseCursor(this_00);
        this_00 = this_00 + 0x28;
      } while (this_00 != pMVar2);
      this_00 = *(MouseCursor **)this;
    }
    pnVar1 = (nothrow_t *)(((*(int *)(this + 8) - (int)this_00) / 0x28) * 0x28);
    pMVar2 = this_00;
    if ((nothrow_t *)0xfff < pnVar1) {
      pMVar2 = *(MouseCursor **)(this_00 + -4);
      pnVar1 = pnVar1 + 0x23;
      if ((MouseCursor *)0x1f < this_00 + (-4 - (int)pMVar2)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pMVar2,pnVar1);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// private: void __thiscall std::vector<struct MouseCursor,class std::allocator<struct MouseCursor>
// >::_Destroy(struct MouseCursor *,struct MouseCursor *)

void __thiscall std::vector<>::_Destroy(vector<> *this,MouseCursor *param_1,MouseCursor *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x28) {
    MouseCursor::~MouseCursor(param_1);
  }
  return;
}


// private: void __thiscall std::vector<class Widget,class std::allocator<class Widget>
// >::_Destroy(class Widget *,class Widget *)

void __thiscall std::vector<>::_Destroy(vector<> *this,Widget *param_1,Widget *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x188) {
    Widget::~Widget(param_1);
  }
  return;
}


// public: class NavMarker * __thiscall std::vector<class NavMarker,class std::allocator<class
// NavMarker> >::_Emplace_reallocate<class NavMarker const &>(class NavMarker * const,class
// NavMarker const &)

NavMarker * __thiscall
std::vector<>::_Emplace_reallocate<>(vector<> *this,NavMarker *param_1,NavMarker *param_2)

{
  uint uVar1;
  vector<> *this_00;
  int iVar2;
  NavMarker *pNVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  vector<> *this_01;
  nothrow_t *pnVar9;
  NavMarker *pNVar10;
  uint uVar11;
  NavMarker *pNVar12;
  allocator<NavMarker> *unaff_EDI;
  vector<> *pvVar13;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &DAT_005ba6ca;
  local_10 = ExceptionList;
  pNVar3 = (NavMarker *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  iVar6 = *(int *)this;
  iVar2 = (*(int *)(this + 4) - iVar6) / 0x28;
  if (iVar2 == 0x6666666) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar1 = iVar2 + 1;
  uVar8 = (*(int *)(this + 8) - iVar6) / 0x28;
  uVar11 = uVar1;
  if ((uVar8 <= 0x6666666 - (uVar8 >> 1)) && (uVar11 = (uVar8 >> 1) + uVar8, uVar11 < uVar1)) {
    uVar11 = uVar1;
  }
  uVar8 = uVar11 * 0x28;
  if (uVar11 < 0x6666667) {
    if (0xfff < uVar8) goto LAB_0047dc34;
    if (uVar8 == 0) {
      pNVar10 = (NavMarker *)0x0;
    }
    else {
      pNVar10 = operator_new(uVar8);
    }
  }
  else {
    uVar8 = 0xffffffff;
LAB_0047dc34:
    uVar4 = uVar8 + 0x23;
    if (uVar4 <= uVar8) {
      uVar4 = 0xffffffff;
    }
    pvVar5 = operator_new(uVar4);
    if (pvVar5 == (void *)0x0) goto LAB_0047dc57;
    pNVar10 = (NavMarker *)((int)pvVar5 + 0x23U & 0xffffffe0);
    *(void **)(pNVar10 + -4) = pvVar5;
  }
  iVar6 = (((int)param_1 - iVar6) / 0x28) * 0x28;
  pNVar12 = pNVar10 + iVar6;
  *(undefined4 *)pNVar12 = *(undefined4 *)param_2;
  *(undefined4 *)(pNVar12 + 4) = *(undefined4 *)(param_2 + 4);
  local_8 = 1;
  uStack_7 = 0;
  basic_string<>::basic_string<>((basic_string<> *)(pNVar12 + 8),(basic_string<> *)(param_2 + 8));
  *(undefined4 *)(pNVar10 + iVar6 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(pNVar10 + iVar6 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  local_8 = 0;
  this_00 = *(vector<> **)(this + 4);
  if (param_1 == (NavMarker *)this_00) {
    pNVar12 = pNVar10;
    for (pvVar13 = *(vector<> **)this; local_8 = 2, pvVar13 != this_00; pvVar13 = pvVar13 + 0x28) {
      *(undefined4 *)pNVar12 = *(undefined4 *)pvVar13;
      *(undefined4 *)(pNVar12 + 4) = *(undefined4 *)(pvVar13 + 4);
      local_8 = 3;
      basic_string<>::basic_string<>
                ((basic_string<> *)(pNVar12 + 8),(basic_string<> *)(pvVar13 + 8));
      *(undefined4 *)(pNVar12 + 0x20) = *(undefined4 *)(pvVar13 + 0x20);
      *(undefined4 *)(pNVar12 + 0x24) = *(undefined4 *)(pvVar13 + 0x24);
      pNVar12 = pNVar12 + 0x28;
    }
    _Destroy_range<>((NavMarker *)this_00,pNVar3,unaff_EDI);
  }
  else {
    _Umove(this_00,*(NavMarker **)this,param_1,pNVar10);
    _Umove(this_01,param_1,*(NavMarker **)(this + 4),pNVar12 + 0x28);
  }
  if (*(NavMarker **)this != (NavMarker *)0x0) {
    _Destroy_range<>(*(NavMarker **)this,pNVar3,unaff_EDI);
    pvVar5 = *(void **)this;
    pnVar9 = (nothrow_t *)(((*(int *)(this + 8) - *(int *)this) / 0x28) * 0x28);
    pvVar7 = pvVar5;
    if ((nothrow_t *)0xfff < pnVar9) {
      pvVar7 = *(void **)((int)pvVar5 + -4);
      pnVar9 = pnVar9 + 0x23;
      if (0x1f < (uint)((int)pvVar5 + (-4 - (int)pvVar7))) {
LAB_0047dc57:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar9);
  }
  *(NavMarker **)this = pNVar10;
  *(NavMarker **)(this + 4) = pNVar10 + uVar1 * 0x28;
  *(NavMarker **)(this + 8) = pNVar10 + uVar11 * 0x28;
  ExceptionList = local_10;
  return (NavMarker *)(*(int *)this + iVar6);
}


// public: struct PlayerGuidedToPort * __thiscall std::vector<struct PlayerGuidedToPort,class
// std::allocator<struct PlayerGuidedToPort> >::_Emplace_reallocate<struct
// PlayerGuidedToPort>(struct PlayerGuidedToPort * const,struct PlayerGuidedToPort &&)

PlayerGuidedToPort * __thiscall
std::vector<>::_Emplace_reallocate<>
          (vector<> *this,PlayerGuidedToPort *param_1,PlayerGuidedToPort *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  int extraout_ECX;
  allocator<> *paVar8;
  int extraout_ECX_00;
  nothrow_t *pnVar9;
  int iVar10;
  void *pvVar11;
  PlayerGuidedToPort *unaff_ESI;
  pair<> *this_00;
  pair<> *ppVar12;
  PlayerGuidedToPort *unaff_EDI;
  allocator<> *paVar13;
  
  iVar1 = *(int *)this;
  iVar10 = (int)param_1 - iVar1;
  iVar2 = (*(int *)(this + 4) - iVar1) / 0x30;
  if (iVar2 == 0x5555555) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar3 = iVar2 + 1;
  uVar7 = (*(int *)(this + 8) - iVar1) / 0x30;
  uVar4 = uVar3;
  if ((uVar7 <= 0x5555555 - (uVar7 >> 1)) && (uVar4 = (uVar7 >> 1) + uVar7, uVar4 < uVar3)) {
    uVar4 = uVar3;
  }
  uVar7 = uVar4 * 0x30;
  if (uVar4 < 0x5555556) {
    uVar4 = uVar7;
    if (0xfff < uVar7) goto LAB_0047df21;
    if (uVar7 == 0) {
      pvVar11 = (void *)0x0;
    }
    else {
      pvVar11 = operator_new(uVar7);
    }
  }
  else {
    uVar4 = 0xffffffff;
LAB_0047df21:
    uVar5 = uVar4 + 0x23;
    if (uVar5 <= uVar4) {
      uVar5 = 0xffffffff;
    }
    pvVar6 = operator_new(uVar5);
    if (pvVar6 == (void *)0x0) goto LAB_0047e07b;
    pvVar11 = (void *)((int)pvVar6 + 0x23U & 0xffffffe0);
    *(void **)((int)pvVar11 + -4) = pvVar6;
  }
  _Default_allocator_traits<>::construct<>((allocator<> *)param_2,unaff_EDI,unaff_ESI);
  paVar13 = *(allocator<> **)(this + 4);
  paVar8 = *(allocator<> **)this;
  if (param_1 == (PlayerGuidedToPort *)paVar13) {
    while (paVar8 != paVar13) {
      _Default_allocator_traits<>::construct<>(paVar8,unaff_EDI,unaff_ESI);
      paVar8 = (allocator<> *)(extraout_ECX + 0x30);
    }
  }
  else {
    if (paVar8 != (allocator<> *)param_1) {
      do {
        _Default_allocator_traits<>::construct<>(paVar8,unaff_EDI,unaff_ESI);
        paVar8 = (allocator<> *)(extraout_ECX_00 + 0x30);
      } while (paVar8 != (allocator<> *)param_1);
      paVar13 = *(allocator<> **)(this + 4);
    }
    for (; param_1 != (PlayerGuidedToPort *)paVar13; param_1 = param_1 + 0x30) {
      _Default_allocator_traits<>::construct<>((allocator<> *)param_1,unaff_EDI,unaff_ESI);
    }
  }
  this_00 = *(pair<> **)this;
  if (this_00 != (pair<> *)0x0) {
    ppVar12 = *(pair<> **)(this + 4);
    if (this_00 != ppVar12) {
      do {
        pair<>::~pair<>(this_00);
        this_00 = this_00 + 0x30;
      } while (this_00 != ppVar12);
      this_00 = *(pair<> **)this;
    }
    pnVar9 = (nothrow_t *)(((*(int *)(this + 8) - (int)this_00) / 0x30) * 0x30);
    ppVar12 = this_00;
    if ((nothrow_t *)0xfff < pnVar9) {
      ppVar12 = *(pair<> **)(this_00 + -4);
      pnVar9 = pnVar9 + 0x23;
      if ((pair<> *)0x1f < this_00 + (-4 - (int)ppVar12)) {
LAB_0047e07b:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppVar12,pnVar9);
  }
  *(void **)this = pvVar11;
  *(void **)(this + 4) = (void *)(uVar3 * 0x30 + (int)pvVar11);
  *(void **)(this + 8) = (void *)(uVar7 + (int)pvVar11);
  return (PlayerGuidedToPort *)(*(int *)this + (iVar10 / 0x30) * 0x30);
}


// public: struct NSMSectorInfo * __thiscall std::vector<struct NSMSectorInfo,class
// std::allocator<struct NSMSectorInfo> >::_Emplace_reallocate<struct NSMSectorInfo>(struct
// NSMSectorInfo * const,struct NSMSectorInfo &&)

NSMSectorInfo * __thiscall
std::vector<>::_Emplace_reallocate<>(vector<> *this,NSMSectorInfo *param_1,NSMSectorInfo *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  NSMSectorInfo *pNVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  nothrow_t *pnVar10;
  undefined8 *puVar11;
  void *pvVar12;
  NSMSectorInfo *pNVar13;
  
  iVar8 = *(int *)this;
  iVar2 = (*(int *)(this + 4) - *(int *)this) / 0xc;
  if (iVar2 == 0x15555555) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar1 = iVar2 + 1;
  uVar7 = (*(int *)(this + 8) - *(int *)this) / 0xc;
  uVar3 = uVar1;
  if ((uVar7 <= 0x15555555 - (uVar7 >> 1)) && (uVar3 = (uVar7 >> 1) + uVar7, uVar3 < uVar1)) {
    uVar3 = uVar1;
  }
  uVar7 = uVar3 * 0xc;
  if (uVar3 < 0x15555556) {
    uVar3 = uVar7;
    if (0xfff < uVar7) goto LAB_0047e12b;
    if (uVar7 == 0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      puVar11 = operator_new(uVar7);
    }
  }
  else {
    uVar3 = 0xffffffff;
LAB_0047e12b:
    uVar4 = uVar3 + 0x23;
    if (uVar4 <= uVar3) {
      uVar4 = 0xffffffff;
    }
    pvVar5 = operator_new(uVar4);
    if (pvVar5 == (void *)0x0) goto LAB_0047e275;
    puVar11 = (undefined8 *)((int)pvVar5 + 0x23U & 0xffffffe0);
    *(void **)((int)puVar11 + -4) = pvVar5;
  }
  iVar8 = (((int)param_1 - iVar8) / 0xc) * 0xc;
  *(undefined8 *)(iVar8 + (int)puVar11) = *(undefined8 *)param_2;
  *(undefined4 *)(iVar8 + 8 + (int)puVar11) = *(undefined4 *)(param_2 + 8);
  pNVar13 = *(NSMSectorInfo **)(this + 4);
  pNVar6 = *(NSMSectorInfo **)this;
  puVar9 = puVar11;
  if (param_1 == pNVar13) {
    for (; pNVar6 != pNVar13; pNVar6 = pNVar6 + 0xc) {
      *puVar9 = *(undefined8 *)pNVar6;
      *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(pNVar6 + 8);
      puVar9 = (undefined8 *)((int)puVar9 + 0xc);
    }
  }
  else {
    if (pNVar6 != param_1) {
      do {
        *puVar9 = *(undefined8 *)pNVar6;
        pNVar13 = pNVar6 + 8;
        pNVar6 = pNVar6 + 0xc;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)pNVar13;
        puVar9 = (undefined8 *)((int)puVar9 + 0xc);
      } while (pNVar6 != param_1);
      pNVar13 = *(NSMSectorInfo **)(this + 4);
    }
    if (param_1 != pNVar13) {
      puVar9 = (undefined8 *)(iVar8 + 0xc + (int)puVar11);
      do {
        *puVar9 = *(undefined8 *)param_1;
        pNVar6 = param_1 + 8;
        param_1 = param_1 + 0xc;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)pNVar6;
        puVar9 = (undefined8 *)((int)puVar9 + 0xc);
      } while (param_1 != pNVar13);
    }
  }
  pvVar5 = *(void **)this;
  if (pvVar5 != (void *)0x0) {
    pnVar10 = (nothrow_t *)(((*(int *)(this + 8) - (int)pvVar5) / 0xc) * 0xc);
    pvVar12 = pvVar5;
    if ((nothrow_t *)0xfff < pnVar10) {
      pvVar12 = *(void **)((int)pvVar5 + -4);
      pnVar10 = pnVar10 + 0x23;
      if (0x1f < (uint)((int)pvVar5 + (-4 - (int)pvVar12))) {
LAB_0047e275:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar12,pnVar10);
  }
  *(undefined8 **)this = puVar11;
  *(uint *)(this + 4) = (int)puVar11 + uVar1 * 0xc;
  *(uint *)(this + 8) = uVar7 + (int)puVar11;
  return (NSMSectorInfo *)(*(int *)this + iVar8);
}


// public: struct ScreenData * __thiscall std::vector<struct ScreenData,class std::allocator<struct
// ScreenData> >::_Emplace_reallocate<struct ScreenData const &>(struct ScreenData * const,struct
// ScreenData const &)

ScreenData * __thiscall
std::vector<>::_Emplace_reallocate<>(vector<> *this,ScreenData *param_1,ScreenData *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  nothrow_t *pnVar8;
  ScreenData *this_00;
  ScreenData *pSVar9;
  ScreenData *pSVar10;
  ScreenData *pSVar11;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005ba6f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar6 = *(int *)this;
  iVar2 = (*(int *)(this + 4) - iVar6) / 0x50;
  if (iVar2 == 0x3333333) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar1 = iVar2 + 1;
  uVar7 = (*(int *)(this + 8) - iVar6) / 0x50;
  uVar3 = uVar1;
  if ((uVar7 <= 0x3333333 - (uVar7 >> 1)) && (uVar3 = (uVar7 >> 1) + uVar7, uVar3 < uVar1)) {
    uVar3 = uVar1;
  }
  uVar7 = uVar3 * 0x50;
  if (uVar3 < 0x3333334) {
    if (0xfff < uVar7) goto LAB_0047e350;
    if (uVar7 == 0) {
      pSVar10 = (ScreenData *)0x0;
    }
    else {
      pSVar10 = operator_new(uVar7);
    }
  }
  else {
    uVar7 = 0xffffffff;
LAB_0047e350:
    uVar4 = uVar7 + 0x23;
    if (uVar4 <= uVar7) {
      uVar4 = 0xffffffff;
    }
    pvVar5 = operator_new(uVar4);
    if (pvVar5 == (void *)0x0) goto LAB_0047e373;
    pSVar10 = (ScreenData *)((int)pvVar5 + 0x23U & 0xffffffe0);
    *(void **)(pSVar10 + -4) = pvVar5;
  }
  local_8 = 0;
  iVar6 = (((int)param_1 - iVar6) / 0x50) * 0x50;
  ScreenData::ScreenData(pSVar10 + iVar6,param_2);
  pSVar9 = *(ScreenData **)(this + 4);
  if (param_1 == pSVar9) {
    pSVar11 = *(ScreenData **)this;
    local_8 = CONCAT31(local_8._1_3_,1);
    this_00 = pSVar10;
    for (; pSVar11 != pSVar9; pSVar11 = pSVar11 + 0x50) {
      ScreenData::ScreenData(this_00,pSVar11);
      this_00 = this_00 + 0x50;
    }
  }
  else {
    _Umove(this,*(ScreenData **)this,param_1,pSVar10);
    _Umove(this,param_1,*(ScreenData **)(this + 4),pSVar10 + iVar6 + 0x50);
  }
  pSVar9 = *(ScreenData **)this;
  if (pSVar9 != (ScreenData *)0x0) {
    pSVar11 = *(ScreenData **)(this + 4);
    if (pSVar9 != pSVar11) {
      do {
        ScreenData::~ScreenData(pSVar9);
        pSVar9 = pSVar9 + 0x50;
      } while (pSVar9 != pSVar11);
      pSVar9 = *(ScreenData **)this;
    }
    pnVar8 = (nothrow_t *)(((*(int *)(this + 8) - (int)pSVar9) / 0x50) * 0x50);
    pSVar11 = pSVar9;
    if ((nothrow_t *)0xfff < pnVar8) {
      pSVar11 = *(ScreenData **)(pSVar9 + -4);
      pnVar8 = pnVar8 + 0x23;
      if ((ScreenData *)0x1f < pSVar9 + (-4 - (int)pSVar11)) {
LAB_0047e373:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pSVar11,pnVar8);
  }
  *(ScreenData **)this = pSVar10;
  *(ScreenData **)(this + 4) = pSVar10 + uVar1 * 0x50;
  *(ScreenData **)(this + 8) = pSVar10 + uVar3 * 0x50;
  ExceptionList = local_10;
  return (ScreenData *)(*(int *)this + iVar6);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: class ComponentInterface * * __thiscall std::vector<class ComponentInterface *,class
// std::allocator<class ComponentInterface *> >::_Emplace_reallocate<class ComponentInterface *
// const &>(class ComponentInterface * * const,class ComponentInterface * const &)

ComponentInterface ** __thiscall
std::vector<>::_Emplace_reallocate<>
          (vector<> *this,ComponentInterface **param_1,ComponentInterface **param_2)

{
  uint uVar1;
  ComponentInterface **ppCVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  nothrow_t *pnVar8;
  void *pvVar9;
  int iVar10;
  
  iVar3 = (int)DAT_0065d60c - (int)_m_interfaces >> 2;
  iVar10 = (int)param_1 - (int)_m_interfaces;
  if (iVar3 == 0x3fffffff) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar1 = iVar3 + 1;
  uVar7 = (int)DAT_0065d610 - (int)_m_interfaces >> 2;
  uVar4 = uVar1;
  if ((uVar7 <= 0x3fffffff - (uVar7 >> 1)) && (uVar4 = (uVar7 >> 1) + uVar7, uVar4 < uVar1)) {
    uVar4 = uVar1;
  }
  uVar7 = uVar4 * 4;
  if (uVar4 < 0x40000000) {
    uVar4 = uVar7;
    if (0xfff < uVar7) goto LAB_0047e566;
    if (uVar7 == 0) {
      pvVar9 = (void *)0x0;
    }
    else {
      pvVar9 = operator_new(uVar7);
    }
  }
  else {
    uVar4 = 0xffffffff;
LAB_0047e566:
    uVar5 = uVar4 + 0x23;
    if (uVar5 <= uVar4) {
      uVar5 = 0xffffffff;
    }
    pvVar6 = operator_new(uVar5);
    if (pvVar6 == (void *)0x0) goto LAB_0047e64f;
    pvVar9 = (void *)((int)pvVar6 + 0x23U & 0xffffffe0);
    *(void **)((int)pvVar9 - 4) = pvVar6;
  }
  ppCVar2 = (ComponentInterface **)((int)pvVar9 + (iVar10 >> 2) * 4);
  *ppCVar2 = *param_2;
  if (param_1 == DAT_0065d60c) {
    memmove(pvVar9,_m_interfaces,(int)DAT_0065d60c - (int)_m_interfaces);
  }
  else {
    memmove(pvVar9,_m_interfaces,(int)param_1 - (int)_m_interfaces);
    memmove(ppCVar2 + 1,param_1,(int)DAT_0065d60c - (int)param_1);
  }
  if (_m_interfaces != (void *)0x0) {
    pnVar8 = (nothrow_t *)((int)DAT_0065d610 - (int)_m_interfaces & 0xfffffffc);
    pvVar6 = _m_interfaces;
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar6 = *(void **)((int)_m_interfaces + -4);
      pnVar8 = pnVar8 + 0x23;
      if (0x1f < (uint)((int)_m_interfaces + (-4 - (int)pvVar6))) {
LAB_0047e64f:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar6,pnVar8);
  }
  _m_interfaces = pvVar9;
  DAT_0065d60c = (ComponentInterface **)((int)pvVar9 + uVar1 * 4);
  DAT_0065d610 = (void *)(uVar7 + (int)pvVar9);
  return ppCVar2;
}


// public: struct Destination * __thiscall std::vector<struct Destination,class
// std::allocator<struct Destination> >::_Emplace_reallocate<struct Destination>(struct Destination
// * const,struct Destination &&)

Destination * __thiscall
std::vector<>::_Emplace_reallocate<>(vector<> *this,Destination *param_1,Destination *param_2)

{
  Destination *pDVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  void *pvVar7;
  int iVar8;
  uint uVar9;
  vector<> *this_00;
  Destination *pDVar10;
  uint uVar11;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005ba720;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar8 = *(int *)this;
  iVar2 = (*(int *)(this + 4) - *(int *)this) / 0x24;
  if (iVar2 == 0x71c71c7) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar9 = (*(int *)(this + 8) - *(int *)this) / 0x24;
  uVar11 = iVar2 + 1;
  if (uVar9 <= 0x71c71c7 - (uVar9 >> 1)) {
    uVar11 = (uVar9 >> 1) + uVar9;
    if (uVar11 < iVar2 + 1U) {
      uVar11 = iVar2 + 1U;
    }
  }
  uVar9 = uVar11 * 0x24;
  if (uVar11 < 0x71c71c8) {
    if (uVar9 < 0x1000) {
      if (uVar9 == 0) {
        pDVar10 = (Destination *)0x0;
      }
      else {
        pDVar10 = operator_new(uVar9);
      }
      goto LAB_0047e761;
    }
  }
  else {
    uVar9 = 0xffffffff;
  }
  uVar6 = uVar9 + 0x23;
  if (uVar6 <= uVar9) {
    uVar6 = 0xffffffff;
  }
  pvVar7 = operator_new(uVar6);
  if (pvVar7 == (void *)0x0) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  pDVar10 = (Destination *)((int)pvVar7 + 0x23U & 0xffffffe0);
  *(void **)(pDVar10 + -4) = pvVar7;
LAB_0047e761:
  local_8 = 0;
  iVar8 = (((int)param_1 - iVar8) / 0x24) * 0x24;
  pDVar1 = pDVar10 + iVar8;
  *(undefined4 *)pDVar1 = *(undefined4 *)param_2;
  *(undefined4 *)(pDVar1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(pDVar1 + 0x18) = 0;
  *(undefined4 *)(pDVar1 + 0x1c) = 0;
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  uVar5 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(pDVar1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(pDVar1 + 0xc) = uVar3;
  *(undefined4 *)(pDVar1 + 0x10) = uVar4;
  *(undefined4 *)(pDVar1 + 0x14) = uVar5;
  *(undefined8 *)(pDVar1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0xf;
  param_2[8] = (Destination)0x0;
  pDVar1[0x20] = param_2[0x20];
  if (param_1 == *(Destination **)(this + 4)) {
    _Umove_if_noexcept(this,*(Destination **)this,*(Destination **)(this + 4),pDVar10);
  }
  else {
    _Umove((vector<> *)param_1,*(Destination **)this,param_1,pDVar10);
    _Umove(this_00,param_1,*(Destination **)(this + 4),pDVar1 + 0x24);
  }
  _Change_array(this,pDVar10,iVar2 + 1,uVar11);
  ExceptionList = local_10;
  return (Destination *)(*(int *)this + iVar8);
}


// public: struct DockProcessElement * __thiscall std::vector<struct DockProcessElement,class
// std::allocator<struct DockProcessElement> >::_Emplace_reallocate<struct DockProcessElement const
// &>(struct DockProcessElement * const,struct DockProcessElement const &)

DockProcessElement * __thiscall
std::vector<>::_Emplace_reallocate<>
          (vector<> *this,DockProcessElement *param_1,DockProcessElement *param_2)

{
  int iVar1;
  int iVar2;
  DockProcessElement *pDVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  DockProcessElement *pDVar7;
  uint uVar8;
  DockProcessElement *pDVar9;
  nothrow_t *pnVar10;
  void *pvVar11;
  DockProcessElement *pDVar12;
  allocator<> *unaff_EDI;
  DockProcessElement *pDVar13;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005ba740;
  local_10 = ExceptionList;
  pDVar3 = (DockProcessElement *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  iVar1 = *(int *)this;
  iVar2 = (*(int *)(this + 4) - iVar1) / 0x2c;
  if (iVar2 == 0x5d1745d) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar8 = iVar2 + 1;
  uVar5 = (*(int *)(this + 8) - iVar1) / 0x2c;
  uVar4 = uVar8;
  if ((uVar5 <= 0x5d1745d - (uVar5 >> 1)) && (uVar4 = (uVar5 >> 1) + uVar5, uVar4 < uVar8)) {
    uVar4 = uVar8;
  }
  uVar8 = uVar4 * 0x2c;
  if (uVar4 < 0x5d1745e) {
    uVar4 = uVar8;
    if (0xfff < uVar8) goto LAB_0047e910;
    if (uVar8 == 0) {
      pDVar12 = (DockProcessElement *)0x0;
    }
    else {
      pDVar12 = operator_new(uVar8);
    }
  }
  else {
    uVar4 = 0xffffffff;
LAB_0047e910:
    uVar5 = uVar4 + 0x23;
    if (uVar5 <= uVar4) {
      uVar5 = 0xffffffff;
    }
    pvVar6 = operator_new(uVar5);
    if (pvVar6 == (void *)0x0) goto LAB_0047e933;
    pDVar12 = (DockProcessElement *)((int)pvVar6 + 0x23U & 0xffffffe0);
    *(void **)(pDVar12 + -4) = pvVar6;
  }
  pDVar9 = (DockProcessElement *)((((int)param_1 - iVar1) / 0x2c) * 0x2c);
  local_8 = 0;
  *(undefined4 *)(pDVar9 + (int)pDVar12) = *(undefined4 *)param_2;
  *(undefined4 *)(pDVar9 + 4 + (int)pDVar12) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(pDVar9 + 8 + (int)pDVar12) = *(undefined4 *)(param_2 + 8);
  basic_string<>::basic_string<>
            ((basic_string<> *)(pDVar9 + 0xc + (int)pDVar12),(basic_string<> *)(param_2 + 0xc));
  *(undefined4 *)(pDVar9 + 0x24 + (int)pDVar12) = *(undefined4 *)(param_2 + 0x24);
  (pDVar9 + 0x28)[(int)pDVar12] = param_2[0x28];
  pDVar7 = pDVar12;
  pDVar13 = pDVar9;
  if (param_1 != *(DockProcessElement **)(this + 4)) {
    _Uninitialized_move<>(pDVar12,pDVar9,pDVar3,unaff_EDI);
    pDVar7 = pDVar9 + 0x2c + (int)pDVar12;
  }
  _Uninitialized_move<>(pDVar7,pDVar13,pDVar3,unaff_EDI);
  if (*(DockProcessElement **)this != (DockProcessElement *)0x0) {
    _Destroy_range<>(*(DockProcessElement **)this,pDVar3,unaff_EDI);
    pvVar6 = *(void **)this;
    pnVar10 = (nothrow_t *)(((*(int *)(this + 8) - (int)pvVar6) / 0x2c) * 0x2c);
    pvVar11 = pvVar6;
    if ((nothrow_t *)0xfff < pnVar10) {
      pvVar11 = *(void **)((int)pvVar6 + -4);
      pnVar10 = pnVar10 + 0x23;
      if (0x1f < (uint)((int)pvVar6 + (-4 - (int)pvVar11))) {
LAB_0047e933:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar11,pnVar10);
  }
  *(DockProcessElement **)this = pDVar12;
  *(DockProcessElement **)(this + 4) = pDVar12 + (iVar2 + 1) * 0x2c;
  *(DockProcessElement **)(this + 8) = pDVar12 + uVar8;
  ExceptionList = local_10;
  return pDVar9 + *(int *)this;
}


// public: struct EngineeringSlotLocation * __thiscall std::vector<struct
// EngineeringSlotLocation,class std::allocator<struct EngineeringSlotLocation>
// >::_Emplace_reallocate<struct EngineeringSlotLocation>(struct EngineeringSlotLocation *
// const,struct EngineeringSlotLocation &&)

EngineeringSlotLocation * __thiscall
std::vector<>::_Emplace_reallocate<>
          (vector<> *this,EngineeringSlotLocation *param_1,EngineeringSlotLocation *param_2)

{
  vector<> *pvVar1;
  vector<> *pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  vector<> *this_00;
  vector<> *this_01;
  nothrow_t *pnVar8;
  int iVar9;
  EngineeringSlotLocation *pEVar10;
  EngineeringSlotLocation *pEVar11;
  void *pvVar12;
  
  iVar9 = *(int *)this;
  iVar3 = (*(int *)(this + 4) - iVar9) / 0x18;
  if (iVar3 == 0xaaaaaaa) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar7 = iVar3 + 1;
  uVar5 = (*(int *)(this + 8) - iVar9) / 0x18;
  uVar4 = uVar7;
  if ((uVar5 <= 0xaaaaaaa - (uVar5 >> 1)) && (uVar4 = (uVar5 >> 1) + uVar5, uVar4 < uVar7)) {
    uVar4 = uVar7;
  }
  uVar7 = uVar4 * 0x18;
  if (uVar4 < 0xaaaaaab) {
    uVar4 = uVar7;
    if (0xfff < uVar7) goto LAB_0047eb1b;
    if (uVar7 == 0) {
      pEVar11 = (EngineeringSlotLocation *)0x0;
    }
    else {
      pEVar11 = operator_new(uVar7);
    }
  }
  else {
    uVar4 = 0xffffffff;
LAB_0047eb1b:
    uVar5 = uVar4 + 0x23;
    if (uVar5 <= uVar4) {
      uVar5 = 0xffffffff;
    }
    pvVar6 = operator_new(uVar5);
    if (pvVar6 == (void *)0x0) goto LAB_0047ec58;
    pEVar11 = (EngineeringSlotLocation *)((int)pvVar6 + 0x23U & 0xffffffe0);
    *(void **)(pEVar11 + -4) = pvVar6;
  }
  iVar9 = (((int)param_1 - iVar9) / 0x18) * 0x18;
  *(undefined4 *)(pEVar11 + iVar9) = *(undefined4 *)param_2;
  *(undefined4 *)(pEVar11 + iVar9 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(pEVar11 + iVar9 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(pEVar11 + iVar9 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(pEVar11 + iVar9 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  this_00 = *(vector<> **)this;
  *(undefined4 *)(pEVar11 + iVar9 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  pvVar2 = *(vector<> **)(this + 4);
  if (param_1 == (EngineeringSlotLocation *)pvVar2) {
    if (this_00 != pvVar2) {
      pEVar10 = pEVar11 + 4;
      do {
        *(undefined4 *)(pEVar10 + -4) = *(undefined4 *)this_00;
        *(undefined4 *)pEVar10 = *(undefined4 *)(this_00 + 4);
        *(undefined4 *)(pEVar10 + 4) = *(undefined4 *)(this_00 + 8);
        *(undefined4 *)(pEVar10 + 8) = *(undefined4 *)(this_00 + 0xc);
        *(undefined4 *)(pEVar10 + 0xc) = *(undefined4 *)(this_00 + 0x10);
        pvVar1 = this_00 + 0x14;
        this_00 = this_00 + 0x18;
        *(undefined4 *)(pEVar10 + 0x10) = *(undefined4 *)pvVar1;
        pEVar10 = pEVar10 + 0x18;
      } while (this_00 != pvVar2);
    }
  }
  else {
    _Umove(this_00,(EngineeringSlotLocation *)this_00,param_1,pEVar11);
    _Umove(this_01,param_1,*(EngineeringSlotLocation **)(this + 4),pEVar11 + iVar9 + 0x18);
  }
  pvVar6 = *(void **)this;
  if (pvVar6 != (void *)0x0) {
    pnVar8 = (nothrow_t *)(((*(int *)(this + 8) - (int)pvVar6) / 0x18) * 0x18);
    pvVar12 = pvVar6;
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar12 = *(void **)((int)pvVar6 + -4);
      pnVar8 = pnVar8 + 0x23;
      if (0x1f < (uint)((int)pvVar6 + (-4 - (int)pvVar12))) {
LAB_0047ec58:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar12,pnVar8);
  }
  *(EngineeringSlotLocation **)this = pEVar11;
  *(EngineeringSlotLocation **)(this + 4) = pEVar11 + (iVar3 * 3 + 3) * 8;
  *(EngineeringSlotLocation **)(this + 8) = pEVar11 + uVar7;
  return (EngineeringSlotLocation *)(*(int *)this + iVar9);
}


// public: struct MouseCursor * __thiscall std::vector<struct MouseCursor,class
// std::allocator<struct MouseCursor> >::_Emplace_reallocate<struct MouseCursor const &>(struct
// MouseCursor * const,struct MouseCursor const &)

MouseCursor * __thiscall
std::vector<>::_Emplace_reallocate<>(vector<> *this,MouseCursor *param_1,MouseCursor *param_2)

{
  Rect *this_00;
  int iVar1;
  MouseCursor *pMVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  nothrow_t *pnVar8;
  MouseCursor *pMVar9;
  allocator<> *unaff_EDI;
  MouseCursor *pMVar10;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &DAT_005ba769;
  local_10 = ExceptionList;
  pMVar2 = (MouseCursor *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  iVar6 = *(int *)this;
  iVar1 = (*(int *)(this + 4) - iVar6) / 0x28;
  if (iVar1 == 0x6666666) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar7 = iVar1 + 1;
  uVar4 = (*(int *)(this + 8) - iVar6) / 0x28;
  uVar3 = uVar7;
  if ((uVar4 <= 0x6666666 - (uVar4 >> 1)) && (uVar3 = (uVar4 >> 1) + uVar4, uVar3 < uVar7)) {
    uVar3 = uVar7;
  }
  uVar7 = uVar3 * 0x28;
  if (uVar3 < 0x6666667) {
    uVar3 = uVar7;
    if (0xfff < uVar7) goto LAB_0047ed33;
    if (uVar7 == 0) {
      pMVar10 = (MouseCursor *)0x0;
    }
    else {
      pMVar10 = operator_new(uVar7);
    }
  }
  else {
    uVar3 = 0xffffffff;
LAB_0047ed33:
    uVar4 = uVar3 + 0x23;
    if (uVar4 <= uVar3) {
      uVar4 = 0xffffffff;
    }
    pvVar5 = operator_new(uVar4);
    if (pvVar5 == (void *)0x0) goto LAB_0047ed56;
    pMVar10 = (MouseCursor *)((int)pvVar5 + 0x23U & 0xffffffe0);
    *(void **)(pMVar10 + -4) = pvVar5;
  }
  local_8 = 0;
  iVar6 = (((int)param_1 - iVar6) / 0x28) * 0x28;
  this_00 = (Rect *)(pMVar10 + iVar6);
  cocos2d::Rect::Rect(this_00,(Rect *)param_2);
  local_8._0_1_ = 1;
  basic_string<>::basic_string<>
            ((basic_string<> *)(this_00 + 0x10),(basic_string<> *)(param_2 + 0x10));
  local_8 = (uint)local_8._1_3_ << 8;
  if (param_1 == *(MouseCursor **)(this + 4)) {
    _Uninitialized_copy<>(pMVar10,(MouseCursor *)this,pMVar2,unaff_EDI);
  }
  else {
    _Umove(this,*(MouseCursor **)this,param_1,pMVar10);
    _Umove(this,param_1,*(MouseCursor **)(this + 4),(MouseCursor *)(this_00 + 0x28));
  }
  pMVar2 = *(MouseCursor **)this;
  if (pMVar2 != (MouseCursor *)0x0) {
    pMVar9 = *(MouseCursor **)(this + 4);
    if (pMVar2 != pMVar9) {
      do {
        MouseCursor::~MouseCursor(pMVar2);
        pMVar2 = pMVar2 + 0x28;
      } while (pMVar2 != pMVar9);
      pMVar2 = *(MouseCursor **)this;
    }
    pnVar8 = (nothrow_t *)(((*(int *)(this + 8) - (int)pMVar2) / 0x28) * 0x28);
    pMVar9 = pMVar2;
    if ((nothrow_t *)0xfff < pnVar8) {
      pMVar9 = *(MouseCursor **)(pMVar2 + -4);
      pnVar8 = pnVar8 + 0x23;
      if ((MouseCursor *)0x1f < pMVar2 + (-4 - (int)pMVar9)) {
LAB_0047ed56:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pMVar9,pnVar8);
  }
  *(MouseCursor **)this = pMVar10;
  *(MouseCursor **)(this + 4) = pMVar10 + (iVar1 * 5 + 5) * 8;
  *(MouseCursor **)(this + 8) = pMVar10 + uVar7;
  ExceptionList = local_10;
  return (MouseCursor *)(*(int *)this + iVar6);
}


// public: class Widget * __thiscall std::vector<class Widget,class std::allocator<class Widget>
// >::_Emplace_reallocate<class Widget const &>(class Widget * const,class Widget const &)

Widget * __thiscall
std::vector<>::_Emplace_reallocate<>(vector<> *this,Widget *param_1,Widget *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  nothrow_t *pnVar8;
  Widget *this_00;
  Widget *pWVar9;
  Widget *pWVar10;
  Widget *pWVar11;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005ba798;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar6 = *(int *)this;
  iVar2 = (*(int *)(this + 4) - iVar6) / 0x188;
  if (iVar2 == 0xa72f05) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar1 = iVar2 + 1;
  uVar7 = (*(int *)(this + 8) - iVar6) / 0x188;
  uVar3 = uVar1;
  if ((uVar7 <= 0xa72f05 - (uVar7 >> 1)) && (uVar3 = (uVar7 >> 1) + uVar7, uVar3 < uVar1)) {
    uVar3 = uVar1;
  }
  uVar7 = uVar3 * 0x188;
  if (uVar3 < 0xa72f06) {
    if (0xfff < uVar7) goto LAB_0047ef70;
    if (uVar7 == 0) {
      pWVar10 = (Widget *)0x0;
    }
    else {
      pWVar10 = operator_new(uVar7);
    }
  }
  else {
    uVar7 = 0xffffffff;
LAB_0047ef70:
    uVar4 = uVar7 + 0x23;
    if (uVar4 <= uVar7) {
      uVar4 = 0xffffffff;
    }
    pvVar5 = operator_new(uVar4);
    if (pvVar5 == (void *)0x0) goto LAB_0047ef93;
    pWVar10 = (Widget *)((int)pvVar5 + 0x23U & 0xffffffe0);
    *(void **)(pWVar10 + -4) = pvVar5;
  }
  iVar6 = (((int)param_1 - iVar6) / 0x188) * 0x188;
  local_8 = 0;
  Widget::Widget(pWVar10 + iVar6,param_2);
  pWVar9 = *(Widget **)(this + 4);
  if (param_1 == pWVar9) {
    pWVar11 = *(Widget **)this;
    local_8 = CONCAT31(local_8._1_3_,1);
    this_00 = pWVar10;
    for (; pWVar11 != pWVar9; pWVar11 = pWVar11 + 0x188) {
      Widget::Widget(this_00,pWVar11);
      this_00 = this_00 + 0x188;
    }
  }
  else {
    _Umove(this,*(Widget **)this,param_1,pWVar10);
    _Umove(this,param_1,*(Widget **)(this + 4),pWVar10 + iVar6 + 0x188);
  }
  pWVar9 = *(Widget **)this;
  if (pWVar9 != (Widget *)0x0) {
    pWVar11 = *(Widget **)(this + 4);
    if (pWVar9 != pWVar11) {
      do {
        Widget::~Widget(pWVar9);
        pWVar9 = pWVar9 + 0x188;
      } while (pWVar9 != pWVar11);
      pWVar9 = *(Widget **)this;
    }
    pnVar8 = (nothrow_t *)(((*(int *)(this + 8) - (int)pWVar9) / 0x188) * 0x188);
    pWVar11 = pWVar9;
    if ((nothrow_t *)0xfff < pnVar8) {
      pWVar11 = *(Widget **)(pWVar9 + -4);
      pnVar8 = pnVar8 + 0x23;
      if ((Widget *)0x1f < pWVar9 + (-4 - (int)pWVar11)) {
LAB_0047ef93:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pWVar11,pnVar8);
  }
  *(Widget **)this = pWVar10;
  *(Widget **)(this + 4) = pWVar10 + uVar1 * 0x188;
  *(Widget **)(this + 8) = pWVar10 + uVar3 * 0x188;
  ExceptionList = local_10;
  return (Widget *)(*(int *)this + iVar6);
}


// public: struct BootElement * __thiscall std::vector<struct BootElement,class
// std::allocator<struct BootElement> >::_Emplace_reallocate<struct BootElement const &>(struct
// BootElement * const,struct BootElement const &)

BootElement * __thiscall
std::vector<>::_Emplace_reallocate<>(vector<> *this,BootElement *param_1,BootElement *param_2)

{
  uint uVar1;
  int iVar2;
  BootElement *pBVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  BootElement *pBVar7;
  void *pvVar8;
  uint uVar9;
  BootElement *extraout_ECX;
  nothrow_t *pnVar10;
  uint uVar11;
  BootElement *pBVar12;
  allocator<> *unaff_EDI;
  BootElement *pBVar13;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005ba7c0;
  local_10 = ExceptionList;
  pBVar3 = (BootElement *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  iVar2 = *(int *)this;
  iVar4 = *(int *)(this + 4) - iVar2 >> 5;
  if (iVar4 == 0x7ffffff) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar1 = iVar4 + 1;
  uVar9 = *(int *)(this + 8) - iVar2 >> 5;
  uVar11 = uVar1;
  if ((uVar9 <= 0x7ffffff - (uVar9 >> 1)) && (uVar11 = (uVar9 >> 1) + uVar9, uVar11 < uVar1)) {
    uVar11 = uVar1;
  }
  uVar9 = uVar11 * 0x20;
  if (uVar11 < 0x8000000) {
    uVar11 = uVar9;
    if (0xfff < uVar9) goto LAB_0047f1a2;
    if (uVar9 == 0) {
      pBVar12 = (BootElement *)0x0;
    }
    else {
      pBVar12 = operator_new(uVar9);
    }
  }
  else {
    uVar11 = 0xffffffff;
LAB_0047f1a2:
    uVar5 = uVar11 + 0x23;
    if (uVar5 <= uVar11) {
      uVar5 = 0xffffffff;
    }
    pvVar6 = operator_new(uVar5);
    if (pvVar6 == (void *)0x0) goto LAB_0047f1c5;
    pBVar12 = (BootElement *)((int)pvVar6 + 0x23U & 0xffffffe0);
    *(void **)(pBVar12 + -4) = pvVar6;
  }
  uVar11 = (int)param_1 - iVar2 & 0xffffffe0;
  local_8 = 0;
  *(undefined4 *)(pBVar12 + uVar11) = *(undefined4 *)param_2;
  *(undefined4 *)(pBVar12 + uVar11 + 4) = *(undefined4 *)(param_2 + 4);
  basic_string<>::basic_string<>
            ((basic_string<> *)(pBVar12 + uVar11 + 8),(basic_string<> *)(param_2 + 8));
  pBVar7 = pBVar12;
  pBVar13 = extraout_ECX;
  if (param_1 != *(BootElement **)(this + 4)) {
    _Uninitialized_move<>(pBVar12,extraout_ECX,pBVar3,unaff_EDI);
    pBVar7 = pBVar12 + uVar11 + 0x20;
  }
  _Uninitialized_move<>(pBVar7,pBVar13,pBVar3,unaff_EDI);
  if (*(BootElement **)this != (BootElement *)0x0) {
    _Destroy_range<>(*(BootElement **)this,pBVar3,unaff_EDI);
    pvVar6 = *(void **)this;
    pnVar10 = (nothrow_t *)(*(int *)(this + 8) - (int)pvVar6 & 0xffffffe0);
    pvVar8 = pvVar6;
    if ((nothrow_t *)0xfff < pnVar10) {
      pvVar8 = *(void **)((int)pvVar6 + -4);
      pnVar10 = pnVar10 + 0x23;
      if (0x1f < (uint)((int)pvVar6 + (-4 - (int)pvVar8))) {
LAB_0047f1c5:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar8,pnVar10);
  }
  *(BootElement **)this = pBVar12;
  *(BootElement **)(this + 4) = pBVar12 + uVar1 * 0x20;
  *(BootElement **)(this + 8) = pBVar12 + uVar9;
  ExceptionList = local_10;
  return (BootElement *)(*(int *)this + uVar11);
}


// private: void __thiscall std::vector<class NavMarker,class std::allocator<class NavMarker>
// >::_Destroy(class NavMarker *,class NavMarker *)

void __thiscall std::vector<>::_Destroy(vector<> *this,NavMarker *param_1,NavMarker *param_2)

{
  NavMarker *unaff_EBP;
  allocator<NavMarker> *unaff_retaddr;
  
  _Destroy_range<>((NavMarker *)this,unaff_EBP,unaff_retaddr);
  return;
}


// private: class NavMarker * __thiscall std::vector<class NavMarker,class std::allocator<class
// NavMarker> >::_Umove(class NavMarker *,class NavMarker *,class NavMarker *)

NavMarker * __thiscall
std::vector<>::_Umove(vector<> *this,NavMarker *param_1,NavMarker *param_2,NavMarker *param_3)

{
  NavMarker *pNVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  NavMarker *pNVar5;
  int iVar6;
  allocator<NavMarker> *unaff_ESI;
  NavMarker *unaff_EDI;
  
  if (param_1 != param_2) {
    iVar6 = (int)param_3 - (int)param_1;
    pNVar5 = param_1 + 0x1c;
    do {
      *(undefined4 *)param_3 = *(undefined4 *)(pNVar5 + -0x1c);
      *(undefined4 *)(param_3 + 4) = *(undefined4 *)(pNVar5 + -0x18);
      *(undefined4 *)(param_3 + 0x18) = 0;
      *(undefined4 *)(pNVar5 + iVar6) = 0;
      uVar2 = *(undefined4 *)(pNVar5 + -0x10);
      uVar3 = *(undefined4 *)(pNVar5 + -0xc);
      uVar4 = *(undefined4 *)(pNVar5 + -8);
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(pNVar5 + -0x14);
      *(undefined4 *)(param_3 + 0xc) = uVar2;
      *(undefined4 *)(param_3 + 0x10) = uVar3;
      *(undefined4 *)(param_3 + 0x14) = uVar4;
      *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pNVar5 + -4);
      *(undefined4 *)(pNVar5 + -4) = 0;
      *(undefined4 *)pNVar5 = 0xf;
      pNVar5[-0x14] = (NavMarker)0x0;
      *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(pNVar5 + 4);
      this = (vector<> *)(pNVar5 + 0x28);
      *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(pNVar5 + 8);
      param_3 = param_3 + 0x28;
      pNVar1 = pNVar5 + 0xc;
      pNVar5 = (NavMarker *)this;
    } while (pNVar1 != param_2);
  }
  _Destroy_range<>((NavMarker *)this,unaff_EDI,unaff_ESI);
  return param_3;
}


// public: unsigned int __thiscall std::vector<class NavMarker,class std::allocator<class NavMarker>
// >::size(void)const 

uint __thiscall std::vector<>::size(vector<> *this)

{
  return (*(int *)(this + 4) - *(int *)this) / 0x28;
}


// private: void __thiscall std::vector<struct ScreenData,class std::allocator<struct ScreenData>
// >::_Destroy(struct ScreenData *,struct ScreenData *)

void __thiscall std::vector<>::_Destroy(vector<> *this,ScreenData *param_1,ScreenData *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x50) {
    ScreenData::~ScreenData(param_1);
  }
  return;
}


// private: struct ScreenData * __thiscall std::vector<struct ScreenData,class std::allocator<struct
// ScreenData> >::_Umove(struct ScreenData *,struct ScreenData *,struct ScreenData *)

ScreenData * __thiscall
std::vector<>::_Umove(vector<> *this,ScreenData *param_1,ScreenData *param_2,ScreenData *param_3)

{
  ScreenData *pSVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  ScreenData *pSVar6;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005ba8db;
  local_10 = ExceptionList;
  uVar4 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_7 = 0;
  if (param_1 != param_2) {
    pSVar6 = param_1 + 0x4c;
    do {
      *(undefined4 *)param_3 = *(undefined4 *)(pSVar6 + -0x4c);
      param_3[4] = pSVar6[-0x48];
      param_3[5] = pSVar6[-0x47];
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(pSVar6 + -0x44);
      *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(pSVar6 + -0x40);
      *(undefined4 *)(param_3 + 0x20) = 0;
      *(undefined4 *)(param_3 + 0x24) = 0;
      uVar5 = *(undefined4 *)(pSVar6 + -0x38);
      uVar2 = *(undefined4 *)(pSVar6 + -0x34);
      uVar3 = *(undefined4 *)(pSVar6 + -0x30);
      *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(pSVar6 + -0x3c);
      *(undefined4 *)(param_3 + 0x14) = uVar5;
      *(undefined4 *)(param_3 + 0x18) = uVar2;
      *(undefined4 *)(param_3 + 0x1c) = uVar3;
      *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(pSVar6 + -0x2c);
      *(undefined4 *)(pSVar6 + -0x2c) = 0;
      *(undefined4 *)(pSVar6 + -0x28) = 0xf;
      pSVar6[-0x3c] = (ScreenData)0x0;
      *(undefined4 *)(param_3 + 0x4c) = 0;
      local_8 = 2;
      pSVar1 = *(ScreenData **)pSVar6;
      if (pSVar1 != (ScreenData *)0x0) {
        if (pSVar1 == pSVar6 + -0x24) {
          uVar5 = (**(code **)(*(int *)pSVar1 + 4))(param_3 + 0x28,uVar4);
          *(undefined4 *)(param_3 + 0x4c) = uVar5;
          local_8 = 3;
          pSVar1 = *(ScreenData **)pSVar6;
          if (pSVar1 == (ScreenData *)0x0) goto LAB_0047fbd3;
          (**(code **)(*(int *)pSVar1 + 0x10))(pSVar1 != pSVar6 + -0x24);
        }
        else {
          *(ScreenData **)(param_3 + 0x4c) = pSVar1;
        }
        *(undefined4 *)pSVar6 = 0;
      }
LAB_0047fbd3:
      param_3 = param_3 + 0x50;
      pSVar1 = pSVar6 + 4;
      pSVar6 = pSVar6 + 0x50;
    } while (pSVar1 != param_2);
  }
  ExceptionList = local_10;
  return param_3;
}


// private: void __thiscall std::vector<struct Destination,class std::allocator<struct Destination>
// >::_Change_array(struct Destination * const,unsigned int,unsigned int)

void __thiscall
std::vector<>::_Change_array(vector<> *this,Destination *param_1,uint param_2,uint param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  Destination *unaff_ESI;
  void *pvVar3;
  allocator<> *unaff_EDI;
  
  if (*(Destination **)this != (Destination *)0x0) {
    _Destroy_range<>(*(Destination **)this,unaff_ESI,unaff_EDI);
    pvVar1 = *(void **)this;
    pnVar2 = (nothrow_t *)(((*(int *)(this + 8) - (int)pvVar1) / 0x24) * 0x24);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar2 = pnVar2 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar2);
  }
  *(Destination **)this = param_1;
  *(Destination **)(this + 4) = param_1 + param_2 * 0x24;
  *(Destination **)(this + 8) = param_1 + param_3 * 0x24;
  return;
}


// private: void __thiscall std::vector<struct Destination,class std::allocator<struct Destination>
// >::_Destroy(struct Destination *,struct Destination *)

void __thiscall std::vector<>::_Destroy(vector<> *this,Destination *param_1,Destination *param_2)

{
  Destination *unaff_EBP;
  allocator<> *unaff_retaddr;
  
  _Destroy_range<>((Destination *)this,unaff_EBP,unaff_retaddr);
  return;
}


// private: void __thiscall std::vector<struct Destination,class std::allocator<struct Destination>
// >::_Umove_if_noexcept(struct Destination *,struct Destination *,struct Destination *)

void __thiscall
std::vector<>::_Umove_if_noexcept
          (vector<> *this,Destination *param_1,Destination *param_2,Destination *param_3)

{
  basic_string<> *pbVar1;
  Destination *pDVar2;
  Destination *extraout_ECX;
  allocator<> *unaff_EDI;
  basic_string<> *pbVar3;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005ba911;
  local_10 = ExceptionList;
  pDVar2 = (Destination *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  uStack_7 = 0;
  if (param_1 != param_2) {
    pbVar3 = (basic_string<> *)(param_1 + 8);
    do {
      *(undefined4 *)param_3 = *(undefined4 *)(pbVar3 + -8);
      *(undefined4 *)(param_3 + 4) = *(undefined4 *)(pbVar3 + -4);
      local_8 = 1;
      basic_string<>::basic_string<>((basic_string<> *)(param_3 + 8),pbVar3);
      *(basic_string<> *)(param_3 + 0x20) = pbVar3[0x18];
      param_3 = param_3 + 0x24;
      pbVar1 = pbVar3 + 0x1c;
      this = (vector<> *)extraout_ECX;
      pbVar3 = pbVar3 + 0x24;
    } while (pbVar1 != (basic_string<> *)param_2);
  }
  local_8 = 0;
  _Destroy_range<>((Destination *)this,pDVar2,unaff_EDI);
  ExceptionList = local_10;
  return;
}


// private: struct Destination * __thiscall std::vector<struct Destination,class
// std::allocator<struct Destination> >::_Umove(struct Destination *,struct Destination *,struct
// Destination *)

Destination * __thiscall
std::vector<>::_Umove(vector<> *this,Destination *param_1,Destination *param_2,Destination *param_3)

{
  Destination *pDVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Destination *pDVar5;
  int iVar6;
  allocator<> *unaff_ESI;
  Destination *unaff_EDI;
  
  if (param_1 != param_2) {
    iVar6 = (int)param_3 - (int)param_1;
    pDVar5 = param_1 + 0x1c;
    do {
      *(undefined4 *)param_3 = *(undefined4 *)(pDVar5 + -0x1c);
      *(undefined4 *)(param_3 + 4) = *(undefined4 *)(pDVar5 + -0x18);
      *(undefined4 *)(param_3 + 0x18) = 0;
      *(undefined4 *)(pDVar5 + iVar6) = 0;
      uVar2 = *(undefined4 *)(pDVar5 + -0x10);
      uVar3 = *(undefined4 *)(pDVar5 + -0xc);
      uVar4 = *(undefined4 *)(pDVar5 + -8);
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(pDVar5 + -0x14);
      *(undefined4 *)(param_3 + 0xc) = uVar2;
      *(undefined4 *)(param_3 + 0x10) = uVar3;
      *(undefined4 *)(param_3 + 0x14) = uVar4;
      *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pDVar5 + -4);
      *(undefined4 *)(pDVar5 + -4) = 0;
      *(undefined4 *)pDVar5 = 0xf;
      pDVar5[-0x14] = (Destination)0x0;
      this = (vector<> *)(pDVar5 + 0x24);
      param_3[0x20] = pDVar5[4];
      param_3 = param_3 + 0x24;
      pDVar1 = pDVar5 + 8;
      pDVar5 = (Destination *)this;
    } while (pDVar1 != param_2);
  }
  _Destroy_range<>((Destination *)this,unaff_EDI,unaff_ESI);
  return param_3;
}


// private: void __thiscall std::vector<struct DockProcessElement,class std::allocator<struct
// DockProcessElement> >::_Destroy(struct DockProcessElement *,struct DockProcessElement *)

void __thiscall
std::vector<>::_Destroy(vector<> *this,DockProcessElement *param_1,DockProcessElement *param_2)

{
  DockProcessElement *unaff_EBP;
  allocator<> *unaff_retaddr;
  
  _Destroy_range<>((DockProcessElement *)this,unaff_EBP,unaff_retaddr);
  return;
}


// private: struct EngineeringSlotLocation * __thiscall std::vector<struct
// EngineeringSlotLocation,class std::allocator<struct EngineeringSlotLocation> >::_Umove(struct
// EngineeringSlotLocation *,struct EngineeringSlotLocation *,struct EngineeringSlotLocation *)

EngineeringSlotLocation * __thiscall
std::vector<>::_Umove
          (vector<> *this,EngineeringSlotLocation *param_1,EngineeringSlotLocation *param_2,
          EngineeringSlotLocation *param_3)

{
  EngineeringSlotLocation *pEVar1;
  EngineeringSlotLocation *pEVar2;
  EngineeringSlotLocation *pEVar3;
  
  pEVar3 = param_3;
  if (param_1 != param_2) {
    pEVar2 = param_1 + 4;
    do {
      *(undefined4 *)pEVar3 = *(undefined4 *)(pEVar2 + -4);
      *(undefined4 *)(pEVar2 + 0x18 + (int)(param_3 + (-0x18 - (int)param_1))) =
           *(undefined4 *)pEVar2;
      *(undefined4 *)(pEVar3 + 8) = *(undefined4 *)(pEVar2 + 4);
      *(undefined4 *)(pEVar3 + 0xc) = *(undefined4 *)(pEVar2 + 8);
      *(undefined4 *)(pEVar3 + 0x10) = *(undefined4 *)(pEVar2 + 0xc);
      *(undefined4 *)(pEVar3 + 0x14) = *(undefined4 *)(pEVar2 + 0x10);
      pEVar1 = pEVar2 + 0x14;
      pEVar3 = pEVar3 + 0x18;
      pEVar2 = pEVar2 + 0x18;
    } while (pEVar1 != param_2);
  }
  return pEVar3;
}


// private: struct MouseCursor * __thiscall std::vector<struct MouseCursor,class
// std::allocator<struct MouseCursor> >::_Umove(struct MouseCursor *,struct MouseCursor *,struct
// MouseCursor *)

MouseCursor * __thiscall
std::vector<>::_Umove(vector<> *this,MouseCursor *param_1,MouseCursor *param_2,MouseCursor *param_3)

{
  MouseCursor *pMVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  MouseCursor *pMVar5;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005ba938;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != param_2) {
    pMVar5 = param_1 + 0x10;
    do {
      cocos2d::Rect::Rect((Rect *)param_3,(Rect *)(pMVar5 + -0x10));
      *(undefined4 *)(param_3 + 0x20) = 0;
      *(undefined4 *)(param_3 + 0x24) = 0;
      pMVar1 = pMVar5 + 0x18;
      uVar2 = *(undefined4 *)(pMVar5 + 4);
      uVar3 = *(undefined4 *)(pMVar5 + 8);
      uVar4 = *(undefined4 *)(pMVar5 + 0xc);
      *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)pMVar5;
      *(undefined4 *)(param_3 + 0x14) = uVar2;
      *(undefined4 *)(param_3 + 0x18) = uVar3;
      *(undefined4 *)(param_3 + 0x1c) = uVar4;
      *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(pMVar5 + 0x10);
      param_3 = param_3 + 0x28;
      *(undefined4 *)(pMVar5 + 0x10) = 0;
      *(undefined4 *)(pMVar5 + 0x14) = 0xf;
      *pMVar5 = (MouseCursor)0x0;
      pMVar5 = pMVar5 + 0x28;
    } while (pMVar1 != param_2);
  }
  ExceptionList = local_10;
  return param_3;
}


// private: class Widget * __thiscall std::vector<class Widget,class std::allocator<class Widget>
// >::_Umove(class Widget *,class Widget *,class Widget *)

Widget * __thiscall
std::vector<>::_Umove(vector<> *this,Widget *param_1,Widget *param_2,Widget *param_3)

{
  void **ppvVar1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005ba968;
  local_8 = 0;
  ppvVar1 = &local_10;
  local_10 = ExceptionList;
  for (; ExceptionList = ppvVar1, param_1 != param_2; param_1 = param_1 + 0x188) {
    Widget::Widget(param_3,param_1);
    param_3 = param_3 + 0x188;
    ppvVar1 = ExceptionList;
  }
  ExceptionList = local_10;
  return param_3;
}


// private: void __thiscall std::vector<struct BootElement,class std::allocator<struct BootElement>
// >::_Destroy(struct BootElement *,struct BootElement *)

void __thiscall std::vector<>::_Destroy(vector<> *this,BootElement *param_1,BootElement *param_2)

{
  BootElement *unaff_EBP;
  allocator<> *unaff_retaddr;
  
  _Destroy_range<>((BootElement *)this,unaff_EBP,unaff_retaddr);
  return;
}


// public: class BankTransaction * __thiscall std::vector<class BankTransaction,class
// std::allocator<class BankTransaction> >::_Emplace_reallocate<class BankTransaction>(class
// BankTransaction * const,class BankTransaction &&)

BankTransaction * __thiscall
std::vector<>::_Emplace_reallocate<>
          (vector<> *this,BankTransaction *param_1,BankTransaction *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  BankTransaction *pBVar8;
  uint uVar9;
  nothrow_t *pnVar10;
  int iVar11;
  uint uVar12;
  void *pvVar13;
  allocator<> *unaff_ESI;
  BankTransaction *pBVar14;
  BankTransaction *unaff_EDI;
  BankTransaction *pBVar15;
  
  iVar11 = *(int *)this;
  iVar1 = (*(int *)(this + 4) - iVar11) / 0x28;
  if (iVar1 == 0x6666666) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar12 = iVar1 + 1;
  uVar9 = (*(int *)(this + 8) - iVar11) / 0x28;
  uVar5 = uVar12;
  if ((uVar9 <= 0x6666666 - (uVar9 >> 1)) && (uVar5 = (uVar9 >> 1) + uVar9, uVar5 < uVar12)) {
    uVar5 = uVar12;
  }
  uVar9 = uVar5 * 0x28;
  if (uVar5 < 0x6666667) {
    uVar5 = uVar9;
    if (0xfff < uVar9) goto LAB_00481f9a;
    if (uVar9 == 0) {
      pBVar14 = (BankTransaction *)0x0;
    }
    else {
      pBVar14 = operator_new(uVar9);
    }
  }
  else {
    uVar5 = 0xffffffff;
LAB_00481f9a:
    uVar6 = uVar5 + 0x23;
    if (uVar6 <= uVar5) {
      uVar6 = 0xffffffff;
    }
    pvVar7 = operator_new(uVar6);
    if (pvVar7 == (void *)0x0) goto LAB_004820da;
    pBVar14 = (BankTransaction *)((int)pvVar7 + 0x23U & 0xffffffe0);
    *(void **)(pBVar14 + -4) = pvVar7;
  }
  iVar11 = (((int)param_1 - iVar11) / 0x28) * 0x28;
  *(undefined4 *)(pBVar14 + iVar11) = *(undefined4 *)param_2;
  *(undefined4 *)(pBVar14 + iVar11 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(pBVar14 + iVar11 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(pBVar14 + iVar11 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(pBVar14 + iVar11 + 0x20) = 0;
  *(undefined4 *)(pBVar14 + iVar11 + 0x24) = 0;
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  pBVar15 = pBVar14 + iVar11 + 0x10;
  *(undefined4 *)pBVar15 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(pBVar15 + 4) = uVar2;
  *(undefined4 *)(pBVar15 + 8) = uVar3;
  *(undefined4 *)(pBVar15 + 0xc) = uVar4;
  *(undefined8 *)(pBVar14 + iVar11 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0xf;
  param_2[0x10] = (BankTransaction)0x0;
  pBVar15 = *(BankTransaction **)this;
  pBVar8 = pBVar14;
  if (param_1 != *(BankTransaction **)(this + 4)) {
    _Uninitialized_move<>(pBVar14,pBVar15,unaff_EDI,unaff_ESI);
    pBVar8 = pBVar14 + iVar11 + 0x28;
  }
  _Uninitialized_move<>(pBVar8,pBVar15,unaff_EDI,unaff_ESI);
  if (*(BankTransaction **)this != (BankTransaction *)0x0) {
    _Destroy_range<>(*(BankTransaction **)this,unaff_EDI,unaff_ESI);
    pvVar7 = *(void **)this;
    pnVar10 = (nothrow_t *)(((*(int *)(this + 8) - (int)pvVar7) / 0x28) * 0x28);
    pvVar13 = pvVar7;
    if ((nothrow_t *)0xfff < pnVar10) {
      pvVar13 = *(void **)((int)pvVar7 + -4);
      pnVar10 = pnVar10 + 0x23;
      if (0x1f < (uint)((int)pvVar7 + (-4 - (int)pvVar13))) {
LAB_004820da:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar13,pnVar10);
  }
  *(BankTransaction **)this = pBVar14;
  *(BankTransaction **)(this + 4) = pBVar14 + uVar12 * 0x28;
  *(BankTransaction **)(this + 8) = pBVar14 + uVar9;
  return (BankTransaction *)(*(int *)this + iVar11);
}


// public: __thiscall std::vector<class Shop,class std::allocator<class Shop> >::~vector<class
// Shop,class std::allocator<class Shop> >(void)

void __thiscall std::vector<>::~vector<>(vector<> *this)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  allocator<Shop> *unaff_ESI;
  Shop *unaff_EDI;
  void *pvVar3;
  
  if (*(Shop **)this != (Shop *)0x0) {
    _Destroy_range<>(*(Shop **)this,unaff_EDI,unaff_ESI);
    pvVar1 = *(void **)this;
    pnVar2 = (nothrow_t *)(((*(int *)(this + 8) - (int)pvVar1) / 0x44) * 0x44);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar2 = pnVar2 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar2);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// public: class Shop * __thiscall std::vector<class Shop,class std::allocator<class Shop>
// >::_Emplace_reallocate<class Shop>(class Shop * const,class Shop &&)

Shop * __thiscall
std::vector<>::_Emplace_reallocate<Shop>(vector<> *this,Shop *param_1,Shop *param_2)

{
  uint uVar1;
  Shop *pSVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  Shop *extraout_ECX;
  Shop *extraout_ECX_00;
  Shop *extraout_ECX_01;
  Shop *pSVar8;
  nothrow_t *pnVar9;
  int iVar10;
  void *pvVar11;
  Shop *unaff_ESI;
  allocator<Shop> *paVar12;
  void *pvVar13;
  Shop *unaff_EDI;
  
  iVar10 = (int)param_1 - *(int *)this;
  iVar3 = (*(int *)(this + 4) - *(int *)this) / 0x44;
  if (iVar3 == 0x3c3c3c3) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar1 = iVar3 + 1;
  uVar7 = (*(int *)(this + 8) - *(int *)this) / 0x44;
  uVar4 = uVar1;
  if ((uVar7 <= 0x3c3c3c3 - (uVar7 >> 1)) && (uVar4 = (uVar7 >> 1) + uVar7, uVar4 < uVar1)) {
    uVar4 = uVar1;
  }
  uVar7 = uVar4 * 0x44;
  if (uVar4 < 0x3c3c3c4) {
    uVar4 = uVar7;
    if (0xfff < uVar7) goto LAB_0049b9cd;
    if (uVar7 == 0) {
      pvVar11 = (void *)0x0;
    }
    else {
      pvVar11 = operator_new(uVar7);
    }
  }
  else {
    uVar4 = 0xffffffff;
LAB_0049b9cd:
    uVar5 = uVar4 + 0x23;
    if (uVar5 <= uVar4) {
      uVar5 = 0xffffffff;
    }
    pvVar6 = operator_new(uVar5);
    if (pvVar6 == (void *)0x0) goto LAB_0049bb57;
    pvVar11 = (void *)((int)pvVar6 + 0x23U & 0xffffffe0);
    *(void **)((int)pvVar11 + -4) = pvVar6;
  }
  _Default_allocator_traits<>::construct<Shop,Shop>((allocator<Shop> *)param_2,unaff_EDI,unaff_ESI);
  pSVar2 = *(Shop **)(this + 4);
  paVar12 = *(allocator<Shop> **)this;
  pSVar8 = pSVar2;
  if (param_1 == pSVar2) {
    for (; paVar12 != (allocator<Shop> *)pSVar2; paVar12 = paVar12 + 0x44) {
      _Default_allocator_traits<>::construct<Shop,Shop>(paVar12,unaff_EDI,unaff_ESI);
      pSVar8 = extraout_ECX;
    }
  }
  else {
    for (; paVar12 != (allocator<Shop> *)param_1; paVar12 = paVar12 + 0x44) {
      _Default_allocator_traits<>::construct<Shop,Shop>(paVar12,unaff_EDI,unaff_ESI);
      pSVar2 = extraout_ECX_00;
    }
    _Destroy_range<>(pSVar2,unaff_EDI,(allocator<Shop> *)unaff_ESI);
    paVar12 = *(allocator<Shop> **)(this + 4);
    pSVar8 = param_1;
    for (; param_1 != (Shop *)paVar12; param_1 = param_1 + 0x44) {
      _Default_allocator_traits<>::construct<Shop,Shop>
                ((allocator<Shop> *)param_1,unaff_EDI,unaff_ESI);
      pSVar8 = extraout_ECX_01;
    }
  }
  _Destroy_range<>(pSVar8,unaff_EDI,(allocator<Shop> *)unaff_ESI);
  if (*(Shop **)this != (Shop *)0x0) {
    _Destroy_range<>(*(Shop **)this,unaff_EDI,(allocator<Shop> *)unaff_ESI);
    pvVar6 = *(void **)this;
    pnVar9 = (nothrow_t *)(((*(int *)(this + 8) - (int)pvVar6) / 0x44) * 0x44);
    pvVar13 = pvVar6;
    if ((nothrow_t *)0xfff < pnVar9) {
      pvVar13 = *(void **)((int)pvVar6 + -4);
      pnVar9 = pnVar9 + 0x23;
      if (0x1f < (uint)((int)pvVar6 + (-4 - (int)pvVar13))) {
LAB_0049bb57:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar13,pnVar9);
  }
  *(void **)this = pvVar11;
  *(void **)(this + 4) = (void *)((int)pvVar11 + uVar1 * 0x44);
  *(void **)(this + 8) = (void *)(uVar7 + (int)pvVar11);
  return (Shop *)(*(int *)this + (iVar10 / 0x44) * 0x44);
}


// public: __thiscall std::vector<struct NSMSectorInfo,class std::allocator<struct NSMSectorInfo>
// >::~vector<struct NSMSectorInfo,class std::allocator<struct NSMSectorInfo> >(void)

void __thiscall std::vector<>::~vector<>(vector<> *this)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  void *pvVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    pnVar2 = (nothrow_t *)(((*(int *)(this + 8) - (int)pvVar1) / 0xc) * 0xc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar2 = pnVar2 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar2);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// public: class ListData * __thiscall std::vector<class ListData,class std::allocator<class
// ListData> >::_Emplace_reallocate<class ListData const &>(class ListData * const,class ListData
// const &)

ListData * __thiscall
std::vector<>::_Emplace_reallocate<>(vector<> *this,ListData *param_1,ListData *param_2)

{
  int iVar1;
  ListData *pLVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  allocator<ListData> *paVar8;
  allocator<ListData> *paVar9;
  ListData *unaff_EDI;
  ListData *pLVar10;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005be010;
  local_10 = ExceptionList;
  pLVar2 = (ListData *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  iVar7 = (int)param_1 - *(int *)this;
  iVar1 = (*(int *)(this + 4) - *(int *)this) / 0x60;
  if (iVar1 == 0x2aaaaaa) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar6 = iVar1 + 1;
  uVar4 = (*(int *)(this + 8) - *(int *)this) / 0x60;
  uVar3 = uVar6;
  if ((uVar4 <= 0x2aaaaaa - (uVar4 >> 1)) && (uVar3 = (uVar4 >> 1) + uVar4, uVar3 < uVar6)) {
    uVar3 = uVar6;
  }
  uVar6 = uVar3 * 0x60;
  if (uVar3 < 0x2aaaaab) {
    if (uVar6 < 0x1000) {
      if (uVar6 == 0) {
        pLVar10 = (ListData *)0x0;
      }
      else {
        pLVar10 = operator_new(uVar6);
      }
      goto LAB_004adecb;
    }
  }
  else {
    uVar6 = 0xffffffff;
  }
  uVar4 = uVar6 + 0x23;
  if (uVar4 <= uVar6) {
    uVar4 = 0xffffffff;
  }
  pvVar5 = operator_new(uVar4);
  if (pvVar5 == (void *)0x0) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  pLVar10 = (ListData *)((int)pvVar5 + 0x23U & 0xffffffe0);
  *(void **)(pLVar10 + -4) = pvVar5;
LAB_004adecb:
  local_8 = 0;
  _Default_allocator_traits<>::construct<>((allocator<ListData> *)param_2,pLVar2,unaff_EDI);
  paVar8 = *(allocator<ListData> **)(this + 4);
  if (param_1 == (ListData *)paVar8) {
    for (paVar9 = *(allocator<ListData> **)this; paVar9 != paVar8; paVar9 = paVar9 + 0x60) {
      _Default_allocator_traits<>::construct<>(paVar9,pLVar2,unaff_EDI);
    }
  }
  else {
    paVar9 = *(allocator<ListData> **)this;
    if (paVar9 != (allocator<ListData> *)param_1) {
      do {
        _Default_allocator_traits<>::construct<>(paVar9,pLVar2,unaff_EDI);
        paVar9 = paVar9 + 0x60;
      } while (paVar9 != (allocator<ListData> *)param_1);
      paVar8 = *(allocator<ListData> **)(this + 4);
    }
    for (; param_1 != (ListData *)paVar8; param_1 = param_1 + 0x60) {
      _Default_allocator_traits<>::construct<>((allocator<ListData> *)param_1,pLVar2,unaff_EDI);
    }
  }
  _Change_array(this,pLVar10,iVar1 + 1,uVar3);
  ExceptionList = local_10;
  return (ListData *)(*(int *)this + (iVar7 / 0x60) * 0x60);
}


// public: __thiscall std::vector<struct BootElement,class std::allocator<struct BootElement>
// >::~vector<struct BootElement,class std::allocator<struct BootElement> >(void)

void __thiscall std::vector<>::~vector<>(vector<> *this)

{
  void *pvVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  BootElement *unaff_ESI;
  allocator<> *unaff_retaddr;
  
  if (*(BootElement **)this != (BootElement *)0x0) {
    _Destroy_range<>(*(BootElement **)this,unaff_ESI,unaff_retaddr);
    pvVar1 = *(void **)this;
    pnVar3 = (nothrow_t *)(*(int *)(this + 8) - (int)pvVar1 & 0xffffffe0);
    pvVar2 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)pvVar1 + -4);
      pnVar3 = pnVar3 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: class Resolution * __thiscall std::vector<class Resolution,class std::allocator<class
// Resolution> >::_Emplace_reallocate<class Resolution>(class Resolution * const,class Resolution
// &&)

Resolution * __thiscall
std::vector<>::_Emplace_reallocate<Resolution>
          (vector<> *this,Resolution *param_1,Resolution *param_2)

{
  uint uVar1;
  Resolution *pRVar2;
  undefined4 *puVar3;
  Resolution *pRVar4;
  Resolution *pRVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  void *pvVar9;
  Resolution *pRVar10;
  uint uVar11;
  nothrow_t *pnVar12;
  undefined4 *puVar13;
  int iVar14;
  
  iVar6 = (int)DAT_0065d764 - (int)_validResolutions >> 3;
  iVar14 = (int)param_1 - (int)_validResolutions;
  if (iVar6 == 0x1fffffff) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar1 = iVar6 + 1;
  uVar11 = (int)DAT_0065d768 - (int)_validResolutions >> 3;
  uVar7 = uVar1;
  if ((uVar11 <= 0x1fffffff - (uVar11 >> 1)) && (uVar7 = (uVar11 >> 1) + uVar11, uVar7 < uVar1)) {
    uVar7 = uVar1;
  }
  uVar11 = uVar7 * 8;
  if (uVar7 < 0x20000000) {
    if (0xfff < uVar11) goto LAB_004b34c8;
    if (uVar11 == 0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      puVar13 = operator_new(uVar11);
    }
  }
  else {
    uVar11 = 0xffffffff;
LAB_004b34c8:
    uVar8 = uVar11 + 0x23;
    if (uVar8 <= uVar11) {
      uVar8 = 0xffffffff;
    }
    pvVar9 = operator_new(uVar8);
    if (pvVar9 == (void *)0x0) goto LAB_004b35eb;
    puVar13 = (undefined4 *)((int)pvVar9 + 0x23U & 0xffffffe0);
    puVar13[-1] = pvVar9;
  }
  pRVar2 = (Resolution *)(puVar13 + (iVar14 >> 3) * 2);
  *(undefined4 *)pRVar2 = *(undefined4 *)param_2;
  *(undefined4 *)(pRVar2 + 4) = *(undefined4 *)(param_2 + 4);
  pRVar4 = DAT_0065d764;
  puVar3 = puVar13;
  pRVar10 = _validResolutions;
  if (param_1 == DAT_0065d764) {
    for (; pRVar10 != pRVar4; pRVar10 = pRVar10 + 8) {
      *puVar3 = *(undefined4 *)pRVar10;
      puVar3[1] = *(undefined4 *)(pRVar10 + 4);
      puVar3 = puVar3 + 2;
    }
  }
  else {
    for (; pRVar5 = pRVar2, DAT_0065d764 = pRVar4, pRVar10 != param_1; pRVar10 = pRVar10 + 8) {
      *puVar3 = *(undefined4 *)pRVar10;
      puVar3[1] = *(undefined4 *)(pRVar10 + 4);
      puVar3 = puVar3 + 2;
      pRVar4 = DAT_0065d764;
    }
    for (; param_1 != pRVar4; param_1 = param_1 + 8) {
      *(undefined4 *)(pRVar5 + 8) = *(undefined4 *)param_1;
      *(undefined4 *)(pRVar5 + 0xc) = *(undefined4 *)(param_1 + 4);
      pRVar5 = pRVar5 + 8;
    }
  }
  if (_validResolutions != (Resolution *)0x0) {
    pnVar12 = (nothrow_t *)((int)DAT_0065d768 - (int)_validResolutions & 0xfffffff8);
    pRVar10 = _validResolutions;
    if ((nothrow_t *)0xfff < pnVar12) {
      pRVar10 = *(Resolution **)(_validResolutions + -4);
      pnVar12 = pnVar12 + 0x23;
      if ((Resolution *)0x1f < _validResolutions + (-4 - (int)pRVar10)) {
LAB_004b35eb:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pRVar10,pnVar12);
  }
  _validResolutions = (Resolution *)puVar13;
  DAT_0065d764 = (Resolution *)(puVar13 + uVar1 * 2);
  DAT_0065d768 = puVar13 + uVar7 * 2;
  return pRVar2;
}


// public: __thiscall std::vector<struct PlayerGuidedToPort,class std::allocator<struct
// PlayerGuidedToPort> >::~vector<struct PlayerGuidedToPort,class std::allocator<struct
// PlayerGuidedToPort> >(void)

void __thiscall std::vector<>::~vector<>(vector<> *this)

{
  nothrow_t *pnVar1;
  pair<> *this_00;
  pair<> *ppVar2;
  
  this_00 = *(pair<> **)this;
  if (this_00 != (pair<> *)0x0) {
    ppVar2 = *(pair<> **)(this + 4);
    if (this_00 != ppVar2) {
      do {
        pair<>::~pair<>(this_00);
        this_00 = this_00 + 0x30;
      } while (this_00 != ppVar2);
      this_00 = *(pair<> **)this;
    }
    pnVar1 = (nothrow_t *)(((*(int *)(this + 8) - (int)this_00) / 0x30) * 0x30);
    ppVar2 = this_00;
    if ((nothrow_t *)0xfff < pnVar1) {
      ppVar2 = *(pair<> **)(this_00 + -4);
      pnVar1 = pnVar1 + 0x23;
      if ((pair<> *)0x1f < this_00 + (-4 - (int)ppVar2)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppVar2,pnVar1);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// public: __thiscall std::vector<struct Destination,class std::allocator<struct Destination>
// >::~vector<struct Destination,class std::allocator<struct Destination> >(void)

void __thiscall std::vector<>::~vector<>(vector<> *this)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  allocator<> *unaff_ESI;
  Destination *unaff_EDI;
  void *pvVar3;
  
  if (*(Destination **)this != (Destination *)0x0) {
    _Destroy_range<>(*(Destination **)this,unaff_EDI,unaff_ESI);
    pvVar1 = *(void **)this;
    pnVar2 = (nothrow_t *)(((*(int *)(this + 8) - (int)pvVar1) / 0x24) * 0x24);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar2 = pnVar2 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar2);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// public: class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
// Waypoint> > > __thiscall std::vector<class Waypoint,class std::allocator<class Waypoint>
// >::erase(class std::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<class
// Waypoint> > >)

void __thiscall std::vector<>::erase(vector<> *this,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar7 = *(undefined4 **)(this + 4);
  puVar5 = param_3 + 8;
  puVar6 = param_3;
  if (puVar5 != puVar7) {
    do {
      uVar2 = puVar5[1];
      uVar3 = puVar5[2];
      uVar4 = puVar5[3];
      *puVar6 = *puVar5;
      puVar6[1] = uVar2;
      puVar6[2] = uVar3;
      puVar6[3] = uVar4;
      puVar1 = puVar5 + 4;
      uVar2 = puVar5[5];
      uVar3 = puVar5[6];
      uVar4 = puVar5[7];
      puVar5 = puVar5 + 8;
      puVar6[4] = *puVar1;
      puVar6[5] = uVar2;
      puVar6[6] = uVar3;
      puVar6[7] = uVar4;
      puVar6 = puVar6 + 8;
    } while (puVar5 != puVar7);
    puVar7 = *(undefined4 **)(this + 4);
  }
  *(undefined4 **)(this + 4) = puVar7 + -8;
  *param_2 = param_3;
  return;
}


// public: struct Destination * __thiscall std::vector<struct Destination,class
// std::allocator<struct Destination> >::_Emplace_reallocate<struct Destination const &>(struct
// Destination * const,struct Destination const &)

Destination * __thiscall
std::vector<>::_Emplace_reallocate<>(vector<> *this,Destination *param_1,Destination *param_2)

{
  Destination *pDVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  vector<> *this_00;
  Destination *pDVar7;
  uint uVar8;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c2b79;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar5 = *(int *)this;
  iVar2 = (*(int *)(this + 4) - iVar5) / 0x24;
  if (iVar2 == 0x71c71c7) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar6 = iVar2 + 1;
  uVar3 = (*(int *)(this + 8) - iVar5) / 0x24;
  uVar8 = uVar6;
  if ((uVar3 <= 0x71c71c7 - (uVar3 >> 1)) && (uVar8 = (uVar3 >> 1) + uVar3, uVar8 < uVar6)) {
    uVar8 = uVar6;
  }
  uVar6 = uVar8 * 0x24;
  if (uVar8 < 0x71c71c8) {
    if (uVar6 < 0x1000) {
      if (uVar6 == 0) {
        pDVar7 = (Destination *)0x0;
      }
      else {
        pDVar7 = operator_new(uVar6);
      }
      goto LAB_00506e83;
    }
  }
  else {
    uVar6 = 0xffffffff;
  }
  uVar3 = uVar6 + 0x23;
  if (uVar3 <= uVar6) {
    uVar3 = 0xffffffff;
  }
  pvVar4 = operator_new(uVar3);
  if (pvVar4 == (void *)0x0) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  pDVar7 = (Destination *)((int)pvVar4 + 0x23U & 0xffffffe0);
  *(void **)(pDVar7 + -4) = pvVar4;
LAB_00506e83:
  iVar5 = (((int)param_1 - iVar5) / 0x24) * 0x24;
  pDVar1 = pDVar7 + iVar5;
  *(undefined4 *)pDVar1 = *(undefined4 *)param_2;
  *(undefined4 *)(pDVar1 + 4) = *(undefined4 *)(param_2 + 4);
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  basic_string<>::basic_string<>((basic_string<> *)(pDVar1 + 8),(basic_string<> *)(param_2 + 8));
  local_8 = (uint)local_8._1_3_ << 8;
  pDVar7[iVar5 + 0x20] = param_2[0x20];
  if (param_1 == *(Destination **)(this + 4)) {
    _Umove_if_noexcept(this,*(Destination **)this,*(Destination **)(this + 4),pDVar7);
  }
  else {
    _Umove((vector<> *)param_1,*(Destination **)this,param_1,pDVar7);
    _Umove(this_00,param_1,*(Destination **)(this + 4),pDVar1 + 0x24);
  }
  _Change_array(this,pDVar7,iVar2 + 1,uVar8);
  ExceptionList = local_10;
  return (Destination *)(*(int *)this + iVar5);
}


// public: class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
// Waypoint> > > __thiscall std::vector<class Waypoint,class std::allocator<class Waypoint>
// >::insert(class std::_Vector_const_iterator<class std::_Vector_val<struct
// std::_Simple_types<class Waypoint> > >,class Waypoint &&)

undefined4 * __thiscall
std::vector<>::insert(vector<> *this,undefined4 *param_2,Waypoint *param_3,Waypoint *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  Waypoint *pWVar11;
  Waypoint *pWVar12;
  undefined4 uStack_c;
  
  pWVar11 = *(Waypoint **)(this + 4);
  if (*(Waypoint **)(this + 8) == pWVar11) {
    pWVar11 = _Emplace_reallocate<Waypoint>(this,param_3,param_4);
    *param_2 = pWVar11;
    return param_2;
  }
  uVar1 = *(undefined4 *)param_4;
  if (param_3 != pWVar11) {
    uVar3 = *(undefined4 *)(param_4 + 0x14);
    pWVar12 = pWVar11 + -0x20;
    uStack_c = CONCAT31(uStack_c._1_3_,param_4[0x18]);
    uVar4 = *(undefined4 *)(param_4 + 4);
    uVar5 = *(undefined4 *)(param_4 + 8);
    uVar6 = *(undefined4 *)(param_4 + 0xc);
    uVar7 = *(undefined4 *)(param_4 + 0x10);
    uVar2 = *(undefined4 *)(param_4 + 0x1c);
    *(undefined4 *)pWVar11 = *(undefined4 *)pWVar12;
    *(undefined4 *)(pWVar11 + 4) = *(undefined4 *)(pWVar11 + -0x1c);
    *(undefined4 *)(pWVar11 + 8) = *(undefined4 *)(pWVar11 + -0x18);
    *(undefined4 *)(pWVar11 + 0xc) = *(undefined4 *)(pWVar11 + -0x14);
    *(undefined4 *)(pWVar11 + 0x10) = *(undefined4 *)(pWVar11 + -0x10);
    *(undefined4 *)(pWVar11 + 0x14) = *(undefined4 *)(pWVar11 + -0xc);
    pWVar11[0x18] = pWVar11[-8];
    *(undefined4 *)(pWVar11 + 0x1c) = *(undefined4 *)(pWVar11 + -4);
    *(int *)(this + 4) = *(int *)(this + 4) + 0x20;
    for (; pWVar12 != param_3; pWVar12 = pWVar12 + -0x20) {
      uVar8 = *(undefined4 *)(pWVar12 + -0x1c);
      uVar9 = *(undefined4 *)(pWVar12 + -0x18);
      uVar10 = *(undefined4 *)(pWVar12 + -0x14);
      *(undefined4 *)(pWVar11 + -0x20) = *(undefined4 *)(pWVar12 + -0x20);
      *(undefined4 *)(pWVar11 + -0x1c) = uVar8;
      *(undefined4 *)(pWVar11 + -0x18) = uVar9;
      *(undefined4 *)(pWVar11 + -0x14) = uVar10;
      uVar8 = *(undefined4 *)(pWVar12 + -0xc);
      uVar9 = *(undefined4 *)(pWVar12 + -8);
      uVar10 = *(undefined4 *)(pWVar12 + -4);
      *(undefined4 *)(pWVar11 + -0x10) = *(undefined4 *)(pWVar12 + -0x10);
      *(undefined4 *)(pWVar11 + -0xc) = uVar8;
      *(undefined4 *)(pWVar11 + -8) = uVar9;
      *(undefined4 *)(pWVar11 + -4) = uVar10;
      pWVar11 = pWVar11 + -0x20;
    }
    *(undefined4 *)param_3 = uVar1;
    *(undefined4 *)(param_3 + 4) = uVar4;
    *(undefined4 *)(param_3 + 8) = uVar5;
    *(undefined4 *)(param_3 + 0xc) = uVar6;
    *(undefined4 *)(param_3 + 0x10) = uVar7;
    *(undefined4 *)(param_3 + 0x14) = uVar3;
    *(undefined4 *)(param_3 + 0x18) = uStack_c;
    *(undefined4 *)(param_3 + 0x1c) = uVar2;
    *param_2 = param_3;
    return param_2;
  }
  *(undefined4 *)pWVar11 = uVar1;
  *(undefined4 *)(pWVar11 + 4) = *(undefined4 *)(param_4 + 4);
  *(undefined4 *)(pWVar11 + 8) = *(undefined4 *)(param_4 + 8);
  *(undefined4 *)(pWVar11 + 0xc) = *(undefined4 *)(param_4 + 0xc);
  *(undefined4 *)(pWVar11 + 0x10) = *(undefined4 *)(param_4 + 0x10);
  *(undefined4 *)(pWVar11 + 0x14) = *(undefined4 *)(param_4 + 0x14);
  pWVar11[0x18] = param_4[0x18];
  *(undefined4 *)(pWVar11 + 0x1c) = *(undefined4 *)(param_4 + 0x1c);
  *(int *)(this + 4) = *(int *)(this + 4) + 0x20;
  *param_2 = param_3;
  return param_2;
}


// public: __thiscall std::vector<class Waypoint,class std::allocator<class Waypoint>
// >::~vector<class Waypoint,class std::allocator<class Waypoint> >(void)

void __thiscall std::vector<>::~vector<>(vector<> *this)

{
  void *pvVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    pnVar3 = (nothrow_t *)(*(int *)(this + 8) - (int)pvVar1 & 0xffffffe0);
    pvVar2 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)pvVar1 + -4);
      pnVar3 = pnVar3 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// public: class std::vector<class WaveformPeak,class std::allocator<class WaveformPeak> > &
// __thiscall std::vector<class WaveformPeak,class std::allocator<class WaveformPeak>
// >::operator=(class std::vector<class WaveformPeak,class std::allocator<class WaveformPeak> >
// const &)

vector<> * __thiscall std::vector<>::operator=(vector<> *this,vector<> *param_1)

{
  if (this != (vector<> *)param_1) {
    _Assign_range<>(this,*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),param_1);
  }
  return (vector<> *)this;
}


// public: class std::vector<class WaveformPeak,class std::allocator<class WaveformPeak> > &
// __thiscall std::vector<class WaveformPeak,class std::allocator<class WaveformPeak>
// >::operator=(class std::vector<class WaveformPeak,class std::allocator<class WaveformPeak> > &&)

vector<> * __thiscall std::vector<>::operator=(vector<> *this,vector<> *param_1)

{
  if (this != (vector<> *)param_1) {
    vector<>::~vector<>((vector<> *)this);
    *(undefined4 *)this = *(undefined4 *)param_1;
    *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return (vector<> *)this;
}


// private: void __thiscall std::vector<class WaveformPeak,class std::allocator<class WaveformPeak>
// >::_Assign_range<class WaveformPeak *>(class WaveformPeak *,class WaveformPeak *,struct
// std::forward_iterator_tag)

void __thiscall
std::vector<>::_Assign_range<>(vector<> *this,undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 *puVar5;
  uint uVar6;
  nothrow_t *pnVar7;
  
  pvVar4 = *(void **)this;
  uVar6 = (int)param_2 - (int)param_1 >> 3;
  uVar1 = *(int *)(this + 4) - (int)pvVar4 >> 3;
  uVar2 = *(int *)(this + 8) - (int)pvVar4 >> 3;
  if (uVar6 <= uVar2) {
    if (uVar1 < uVar6) {
      memmove(pvVar4,param_1,uVar1 * 8);
      puVar5 = *(undefined4 **)(this + 4);
      for (param_1 = param_1 + uVar1 * 2; param_1 != param_2; param_1 = param_1 + 2) {
        *puVar5 = *param_1;
        puVar5[1] = param_1[1];
        puVar5 = puVar5 + 2;
      }
      *(undefined4 **)(this + 4) = puVar5;
      return;
    }
    memmove(pvVar4,param_1,(int)param_2 - (int)param_1);
    *(void **)(this + 4) = (void *)((int)pvVar4 + uVar6 * 8);
    return;
  }
  if (uVar6 < 0x20000000) {
    uVar1 = uVar6;
    if ((uVar2 <= 0x1fffffff - (uVar2 >> 1)) && (uVar1 = uVar2 + (uVar2 >> 1), uVar1 < uVar6)) {
      uVar1 = uVar6;
    }
    if (pvVar4 != (void *)0x0) {
      pnVar7 = (nothrow_t *)(uVar2 * 8);
      pvVar3 = pvVar4;
      if ((nothrow_t *)0xfff < pnVar7) {
        pvVar3 = *(void **)((int)pvVar4 + -4);
        pnVar7 = pnVar7 + 0x23;
        if (0x1f < (uint)((int)pvVar4 + (-4 - (int)pvVar3))) goto LAB_0051a17f;
      }
      operator_delete(pvVar3,pnVar7);
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
    if (uVar1 != 0) {
      if (0x1fffffff < uVar1) goto LAB_0051a234;
      uVar2 = uVar1 * 8;
      if (uVar2 < 0x1000) {
        if (uVar2 == 0) {
          pvVar4 = (void *)0x0;
        }
        else {
          pvVar4 = operator_new(uVar2);
        }
      }
      else {
        uVar6 = uVar2 + 0x23;
        if (uVar6 <= uVar1 * 8) {
          uVar6 = 0xffffffff;
        }
        pvVar3 = operator_new(uVar6);
        if (pvVar3 == (void *)0x0) {
LAB_0051a17f:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        pvVar4 = (void *)((int)pvVar3 + 0x23U & 0xffffffe0);
        *(void **)((int)pvVar4 - 4) = pvVar3;
      }
      *(void **)this = pvVar4;
      *(void **)(this + 4) = pvVar4;
      *(uint *)(this + 8) = *(int *)this + uVar2;
    }
    puVar5 = *(undefined4 **)this;
    for (; param_1 != param_2; param_1 = param_1 + 2) {
      *puVar5 = *param_1;
      puVar5[1] = param_1[1];
      puVar5 = puVar5 + 2;
    }
    *(undefined4 **)(this + 4) = puVar5;
    return;
  }
LAB_0051a234:
                    // WARNING: Subroutine does not return
  vector<>::_Xlength();
}


// public: class ExtraSpawned * __thiscall std::vector<class ExtraSpawned,class std::allocator<class
// ExtraSpawned> >::_Emplace_reallocate<class ExtraSpawned>(class ExtraSpawned * const,class
// ExtraSpawned &&)

ExtraSpawned * __thiscall
std::vector<>::_Emplace_reallocate<>(vector<> *this,ExtraSpawned *param_1,ExtraSpawned *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  ExtraSpawned *pEVar8;
  uint uVar9;
  nothrow_t *pnVar10;
  int iVar11;
  uint uVar12;
  void *pvVar13;
  allocator<> *unaff_ESI;
  ExtraSpawned *pEVar14;
  ExtraSpawned *unaff_EDI;
  ExtraSpawned *pEVar15;
  
  iVar11 = *(int *)this;
  iVar1 = (*(int *)(this + 4) - *(int *)this) / 0x1c;
  if (iVar1 == 0x9249249) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar12 = iVar1 + 1;
  uVar9 = (*(int *)(this + 8) - *(int *)this) / 0x1c;
  uVar5 = uVar12;
  if ((uVar9 <= 0x9249249 - (uVar9 >> 1)) && (uVar5 = (uVar9 >> 1) + uVar9, uVar5 < uVar12)) {
    uVar5 = uVar12;
  }
  uVar9 = uVar5 * 0x1c;
  if (uVar5 < 0x924924a) {
    uVar5 = uVar9;
    if (0xfff < uVar9) goto LAB_0051cb54;
    if (uVar9 == 0) {
      pEVar14 = (ExtraSpawned *)0x0;
    }
    else {
      pEVar14 = operator_new(uVar9);
    }
  }
  else {
    uVar5 = 0xffffffff;
LAB_0051cb54:
    uVar6 = uVar5 + 0x23;
    if (uVar6 <= uVar5) {
      uVar6 = 0xffffffff;
    }
    pvVar7 = operator_new(uVar6);
    if (pvVar7 == (void *)0x0) goto LAB_0051cc93;
    pEVar14 = (ExtraSpawned *)((int)pvVar7 + 0x23U & 0xffffffe0);
    *(void **)(pEVar14 + -4) = pvVar7;
  }
  iVar11 = (((int)param_1 - iVar11) / 0x1c) * 0x1c;
  *(undefined4 *)(pEVar14 + iVar11) = *(undefined4 *)param_2;
  *(undefined4 *)(pEVar14 + iVar11 + 0x14) = 0;
  *(undefined4 *)(pEVar14 + iVar11 + 0x18) = 0;
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  pEVar15 = pEVar14 + iVar11 + 4;
  *(undefined4 *)pEVar15 = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(pEVar15 + 4) = uVar2;
  *(undefined4 *)(pEVar15 + 8) = uVar3;
  *(undefined4 *)(pEVar15 + 0xc) = uVar4;
  *(undefined8 *)(pEVar14 + iVar11 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xf;
  param_2[4] = (ExtraSpawned)0x0;
  pEVar15 = *(ExtraSpawned **)this;
  pEVar8 = pEVar14;
  if (param_1 != *(ExtraSpawned **)(this + 4)) {
    _Uninitialized_move<>(pEVar14,pEVar15,unaff_EDI,unaff_ESI);
    pEVar8 = pEVar14 + iVar11 + 0x1c;
  }
  _Uninitialized_move<>(pEVar8,pEVar15,unaff_EDI,unaff_ESI);
  if (*(ExtraSpawned **)this != (ExtraSpawned *)0x0) {
    _Destroy_range<>(*(ExtraSpawned **)this,unaff_EDI,unaff_ESI);
    pvVar7 = *(void **)this;
    pnVar10 = (nothrow_t *)(((*(int *)(this + 8) - (int)pvVar7) / 0x1c) * 0x1c);
    pvVar13 = pvVar7;
    if ((nothrow_t *)0xfff < pnVar10) {
      pvVar13 = *(void **)((int)pvVar7 + -4);
      pnVar10 = pnVar10 + 0x23;
      if (0x1f < (uint)((int)pvVar7 + (-4 - (int)pvVar13))) {
LAB_0051cc93:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar13,pnVar10);
  }
  *(ExtraSpawned **)this = pEVar14;
  *(ExtraSpawned **)(this + 4) = pEVar14 + uVar12 * 0x1c;
  *(ExtraSpawned **)(this + 8) = pEVar14 + uVar9;
  return (ExtraSpawned *)(*(int *)this + iVar11);
}


// private: void __thiscall std::vector<struct CameraPos,class std::allocator<struct CameraPos>
// >::_Destroy(struct CameraPos *,struct CameraPos *)

void __thiscall std::vector<>::_Destroy(vector<> *this,CameraPos *param_1,CameraPos *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    cocos2d::Vec3::~Vec3((Vec3 *)(param_1 + 0xc));
    cocos2d::Vec3::~Vec3((Vec3 *)param_1);
  }
  return;
}


// public: struct CameraPos * __thiscall std::vector<struct CameraPos,class std::allocator<struct
// CameraPos> >::_Emplace_reallocate<struct CameraPos>(struct CameraPos * const,struct CameraPos &&)

CameraPos * __thiscall
std::vector<>::_Emplace_reallocate<CameraPos>(vector<> *this,CameraPos *param_1,CameraPos *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  nothrow_t *pnVar8;
  CameraPos *this_00;
  Vec3 *pVVar9;
  CameraPos *pCVar10;
  Vec3 *pVVar11;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &DAT_005c6aba;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar6 = *(int *)this;
  iVar1 = (*(int *)(this + 4) - iVar6) / 0x1c;
  if (iVar1 == 0x9249249) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar2 = iVar1 + 1;
  uVar7 = (*(int *)(this + 8) - iVar6) / 0x1c;
  uVar3 = uVar2;
  if ((uVar7 <= 0x9249249 - (uVar7 >> 1)) && (uVar3 = (uVar7 >> 1) + uVar7, uVar3 < uVar2)) {
    uVar3 = uVar2;
  }
  uVar7 = uVar3 * 0x1c;
  if (uVar3 < 0x924924a) {
    if (0xfff < uVar7) goto LAB_005376dc;
    if (uVar7 == 0) {
      pCVar10 = (CameraPos *)0x0;
    }
    else {
      pCVar10 = operator_new(uVar7);
    }
  }
  else {
    uVar7 = 0xffffffff;
LAB_005376dc:
    uVar4 = uVar7 + 0x23;
    if (uVar4 <= uVar7) {
      uVar4 = 0xffffffff;
    }
    pvVar5 = operator_new(uVar4);
    if (pvVar5 == (void *)0x0) goto LAB_005376ff;
    pCVar10 = (CameraPos *)((int)pvVar5 + 0x23U & 0xffffffe0);
    *(void **)(pCVar10 + -4) = pvVar5;
  }
  local_8 = 0;
  iVar6 = (((int)param_1 - iVar6) / 0x1c) * 0x1c;
  cocos2d::Vec3::Vec3((Vec3 *)(pCVar10 + iVar6),(Vec3 *)param_2);
  local_8._0_1_ = 1;
  cocos2d::Vec3::Vec3((Vec3 *)(pCVar10 + iVar6 + 0xc),(Vec3 *)(param_2 + 0xc));
  local_8._0_1_ = 0;
  *(undefined4 *)(pCVar10 + iVar6 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  pVVar9 = *(Vec3 **)(this + 4);
  if (param_1 == (CameraPos *)pVVar9) {
    this_00 = pCVar10;
    for (pVVar11 = *(Vec3 **)this; local_8._0_1_ = 2, pVVar11 != pVVar9; pVVar11 = pVVar11 + 0x1c) {
      cocos2d::Vec3::Vec3((Vec3 *)this_00,pVVar11);
      local_8._0_1_ = 3;
      cocos2d::Vec3::Vec3((Vec3 *)(this_00 + 0xc),pVVar11 + 0xc);
      *(undefined4 *)(this_00 + 0x18) = *(undefined4 *)(pVVar11 + 0x18);
      this_00 = this_00 + 0x1c;
    }
  }
  else {
    _Umove(this,*(CameraPos **)this,param_1,pCVar10);
    _Umove(this,param_1,*(CameraPos **)(this + 4),(CameraPos *)((Vec3 *)(pCVar10 + iVar6) + 0x1c));
  }
  pVVar9 = *(Vec3 **)this;
  if (pVVar9 != (Vec3 *)0x0) {
    pVVar11 = *(Vec3 **)(this + 4);
    if (pVVar9 != pVVar11) {
      do {
        cocos2d::Vec3::~Vec3(pVVar9 + 0xc);
        cocos2d::Vec3::~Vec3(pVVar9);
        pVVar9 = pVVar9 + 0x1c;
      } while (pVVar9 != pVVar11);
      pVVar9 = *(Vec3 **)this;
    }
    pnVar8 = (nothrow_t *)(((*(int *)(this + 8) - (int)pVVar9) / 0x1c) * 0x1c);
    pVVar11 = pVVar9;
    if ((nothrow_t *)0xfff < pnVar8) {
      pVVar11 = *(Vec3 **)(pVVar9 + -4);
      pnVar8 = pnVar8 + 0x23;
      if ((Vec3 *)0x1f < pVVar9 + (-4 - (int)pVVar11)) {
LAB_005376ff:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pVVar11,pnVar8);
  }
  *(CameraPos **)this = pCVar10;
  *(CameraPos **)(this + 4) = pCVar10 + uVar2 * 0x1c;
  *(CameraPos **)(this + 8) = pCVar10 + uVar3 * 0x1c;
  ExceptionList = local_10;
  return (CameraPos *)(*(int *)this + iVar6);
}


// private: struct CameraPos * __thiscall std::vector<struct CameraPos,class std::allocator<struct
// CameraPos> >::_Umove(struct CameraPos *,struct CameraPos *,struct CameraPos *)

CameraPos * __thiscall
std::vector<>::_Umove(vector<> *this,CameraPos *param_1,CameraPos *param_2,CameraPos *param_3)

{
  void **ppvVar1;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005c6af1;
  uStack_7 = 0;
  ppvVar1 = &local_10;
  local_10 = ExceptionList;
  for (; ExceptionList = ppvVar1, param_1 != param_2; param_1 = param_1 + 0x1c) {
    local_8 = 0;
    cocos2d::Vec3::Vec3((Vec3 *)param_3,(Vec3 *)param_1);
    local_8 = 1;
    cocos2d::Vec3::Vec3((Vec3 *)(param_3 + 0xc),(Vec3 *)(param_1 + 0xc));
    *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    param_3 = param_3 + 0x1c;
    ppvVar1 = ExceptionList;
  }
  ExceptionList = local_10;
  return param_3;
}


// public: __thiscall std::vector<struct ScreenData,class std::allocator<struct ScreenData>
// >::~vector<struct ScreenData,class std::allocator<struct ScreenData> >(void)

void __thiscall std::vector<>::~vector<>(vector<> *this)

{
  nothrow_t *pnVar1;
  ScreenData *this_00;
  ScreenData *pSVar2;
  
  this_00 = *(ScreenData **)this;
  if (this_00 != (ScreenData *)0x0) {
    pSVar2 = *(ScreenData **)(this + 4);
    if (this_00 != pSVar2) {
      do {
        ScreenData::~ScreenData(this_00);
        this_00 = this_00 + 0x50;
      } while (this_00 != pSVar2);
      this_00 = *(ScreenData **)this;
    }
    pnVar1 = (nothrow_t *)(((*(int *)(this + 8) - (int)this_00) / 0x50) * 0x50);
    pSVar2 = this_00;
    if ((nothrow_t *)0xfff < pnVar1) {
      pSVar2 = *(ScreenData **)(this_00 + -4);
      pnVar1 = pnVar1 + 0x23;
      if ((ScreenData *)0x1f < this_00 + (-4 - (int)pSVar2)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pSVar2,pnVar1);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// public: __thiscall std::vector<struct UpgradeCommand,class std::allocator<struct UpgradeCommand>
// >::~vector<struct UpgradeCommand,class std::allocator<struct UpgradeCommand> >(void)

void __thiscall std::vector<>::~vector<>(vector<> *this)

{
  nothrow_t *pnVar1;
  Command *this_00;
  Command *pCVar2;
  
  this_00 = *(Command **)this;
  if (this_00 != (Command *)0x0) {
    pCVar2 = *(Command **)(this + 4);
    if (this_00 != pCVar2) {
      do {
        Command::~Command(this_00);
        this_00 = this_00 + 0x40;
      } while (this_00 != pCVar2);
      this_00 = *(Command **)this;
    }
    pnVar1 = (nothrow_t *)(*(int *)(this + 8) - (int)this_00 & 0xffffffc0);
    pCVar2 = this_00;
    if ((nothrow_t *)0xfff < pnVar1) {
      pCVar2 = *(Command **)(this_00 + -4);
      pnVar1 = pnVar1 + 0x23;
      if ((Command *)0x1f < this_00 + (-4 - (int)pCVar2)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pCVar2,pnVar1);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// private: void __thiscall std::vector<struct ContractCommand,class std::allocator<struct
// ContractCommand> >::_Destroy(struct ContractCommand *,struct ContractCommand *)

void __thiscall
std::vector<>::_Destroy(vector<> *this,ContractCommand *param_1,ContractCommand *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x40) {
    Command::~Command((Command *)param_1);
  }
  return;
}


// public: struct WeaponCommand * __thiscall std::vector<struct WeaponCommand,class
// std::allocator<struct WeaponCommand> >::_Emplace_reallocate<struct WeaponCommand>(struct
// WeaponCommand * const,struct WeaponCommand &&)

WeaponCommand * __thiscall
std::vector<>::_Emplace_reallocate<>(vector<> *this,WeaponCommand *param_1,WeaponCommand *param_2)

{
  uint uVar1;
  basic_string<> *pbVar2;
  Command *pCVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  nothrow_t *pnVar11;
  ContractCommand *this_00;
  Command *pCVar12;
  Command *unaff_EDI;
  ContractCommand *pCVar13;
  basic_string<> *pbVar14;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &DAT_005c7948;
  local_10 = ExceptionList;
  pCVar3 = (Command *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  iVar8 = *(int *)this;
  iVar4 = *(int *)(this + 4) - iVar8 >> 6;
  if (iVar4 == 0x3ffffff) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar1 = iVar4 + 1;
  uVar10 = *(int *)(this + 8) - iVar8 >> 6;
  uVar5 = uVar1;
  if ((uVar10 <= 0x3ffffff - (uVar10 >> 1)) && (uVar5 = (uVar10 >> 1) + uVar10, uVar5 < uVar1)) {
    uVar5 = uVar1;
  }
  uVar10 = uVar5 << 6;
  if (uVar5 < 0x4000000) {
    if (0xfff < uVar10) goto LAB_00541b8a;
    if (uVar10 == 0) {
      pCVar13 = (ContractCommand *)0x0;
    }
    else {
      pCVar13 = operator_new(uVar10);
    }
  }
  else {
    uVar10 = 0xffffffff;
LAB_00541b8a:
    uVar6 = uVar10 + 0x23;
    if (uVar6 <= uVar10) {
      uVar6 = 0xffffffff;
    }
    pvVar7 = operator_new(uVar6);
    if (pvVar7 == (void *)0x0) goto LAB_00541bad;
    pCVar13 = (ContractCommand *)((int)pvVar7 + 0x23U & 0xffffffe0);
    *(void **)(pCVar13 + -4) = pvVar7;
  }
  iVar8 = ((int)param_1 - iVar8 >> 6) * 0x40;
  local_8 = 0;
  uStack_7 = 0;
  _Default_allocator_traits<>::construct<>((allocator<Command> *)param_2,pCVar3,unaff_EDI);
  pbVar2 = *(basic_string<> **)(this + 4);
  if (param_1 == (WeaponCommand *)pbVar2) {
    this_00 = pCVar13;
    for (pbVar14 = *(basic_string<> **)this; local_8 = 1, pbVar14 != pbVar2;
        pbVar14 = pbVar14 + 0x40) {
      basic_string<>::basic_string<>((basic_string<> *)this_00,pbVar14);
      *(undefined4 *)(this_00 + 0x3c) = 0;
      local_8 = 3;
      if (*(undefined4 **)(pbVar14 + 0x3c) != (undefined4 *)0x0) {
        uVar9 = (**(code **)**(undefined4 **)(pbVar14 + 0x3c))((basic_string<> *)(this_00 + 0x18));
        *(undefined4 *)(this_00 + 0x3c) = uVar9;
      }
      this_00 = this_00 + 0x40;
    }
  }
  else {
    vector<>::_Umove((vector<> *)this,*(ContractCommand **)this,(ContractCommand *)param_1,pCVar13);
    vector<>::_Umove((vector<> *)this,(ContractCommand *)param_1,*(ContractCommand **)(this + 4),
                     pCVar13 + iVar8 + 0x40);
  }
  pCVar3 = *(Command **)this;
  if (pCVar3 != (Command *)0x0) {
    pCVar12 = *(Command **)(this + 4);
    if (pCVar3 != pCVar12) {
      do {
        Command::~Command(pCVar3);
        pCVar3 = pCVar3 + 0x40;
      } while (pCVar3 != pCVar12);
      pCVar3 = *(Command **)this;
    }
    pnVar11 = (nothrow_t *)(*(int *)(this + 8) - (int)pCVar3 & 0xffffffc0);
    pCVar12 = pCVar3;
    if ((nothrow_t *)0xfff < pnVar11) {
      pCVar12 = *(Command **)(pCVar3 + -4);
      pnVar11 = pnVar11 + 0x23;
      if ((Command *)0x1f < pCVar3 + (-4 - (int)pCVar12)) {
LAB_00541bad:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pCVar12,pnVar11);
  }
  *(ContractCommand **)this = pCVar13;
  *(ContractCommand **)(this + 4) = pCVar13 + uVar1 * 0x40;
  *(ContractCommand **)(this + 8) = pCVar13 + uVar5 * 0x40;
  ExceptionList = local_10;
  return (WeaponCommand *)(*(int *)this + iVar8);
}


// private: struct ContractCommand * __thiscall std::vector<struct ContractCommand,class
// std::allocator<struct ContractCommand> >::_Umove(struct ContractCommand *,struct ContractCommand
// *,struct ContractCommand *)

ContractCommand * __thiscall
std::vector<>::_Umove
          (vector<> *this,ContractCommand *param_1,ContractCommand *param_2,ContractCommand *param_3
          )

{
  void **ppvVar1;
  Command *pCVar2;
  Command *unaff_EDI;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c7978;
  pCVar2 = (Command *)(___security_cookie ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  ppvVar1 = &local_10;
  local_10 = ExceptionList;
  for (; ExceptionList = ppvVar1, param_1 != param_2; param_1 = param_1 + 0x40) {
    _Default_allocator_traits<>::construct<>((allocator<Command> *)param_1,pCVar2,unaff_EDI);
    param_3 = param_3 + 0x40;
    ppvVar1 = ExceptionList;
  }
  ExceptionList = local_10;
  return param_3;
}


// public: double * __thiscall std::vector<double,class std::allocator<double>
// >::_Emplace_reallocate<double>(double * const,double &&)

double * __thiscall
std::vector<>::_Emplace_reallocate<double>(vector<> *this,double *param_1,double *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  uint uVar8;
  nothrow_t *pnVar9;
  void *pvVar10;
  
  iVar2 = *(int *)this;
  iVar3 = *(int *)(this + 4) - iVar2 >> 3;
  if (iVar3 == 0x1fffffff) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar1 = iVar3 + 1;
  uVar8 = *(int *)(this + 8) - iVar2 >> 3;
  uVar4 = uVar1;
  if ((uVar8 <= 0x1fffffff - (uVar8 >> 1)) && (uVar4 = (uVar8 >> 1) + uVar8, uVar4 < uVar1)) {
    uVar4 = uVar1;
  }
  uVar8 = uVar4 * 8;
  if (uVar4 < 0x20000000) {
    uVar4 = uVar8;
    if (0xfff < uVar8) goto LAB_005468bf;
    if (uVar8 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      pvVar10 = operator_new(uVar8);
    }
  }
  else {
    uVar4 = 0xffffffff;
LAB_005468bf:
    uVar5 = uVar4 + 0x23;
    if (uVar5 <= uVar4) {
      uVar5 = 0xffffffff;
    }
    pvVar6 = operator_new(uVar5);
    if (pvVar6 == (void *)0x0) goto LAB_005469a3;
    pvVar10 = (void *)((int)pvVar6 + 0x23U & 0xffffffe0);
    *(void **)((int)pvVar10 - 4) = pvVar6;
  }
  iVar2 = ((int)param_1 - iVar2 >> 3) * 8;
  *(double *)(iVar2 + (int)pvVar10) = *param_2;
  pvVar6 = *(void **)this;
  if (param_1 == *(double **)(this + 4)) {
    memmove(pvVar10,pvVar6,(int)*(double **)(this + 4) - (int)pvVar6);
  }
  else {
    memmove(pvVar10,pvVar6,(int)param_1 - (int)pvVar6);
    memmove((void *)(iVar2 + 8 + (int)pvVar10),param_1,*(int *)(this + 4) - (int)param_1);
  }
  pvVar6 = *(void **)this;
  if (pvVar6 != (void *)0x0) {
    pnVar9 = (nothrow_t *)(*(int *)(this + 8) - (int)pvVar6 & 0xfffffff8);
    pvVar7 = pvVar6;
    if ((nothrow_t *)0xfff < pnVar9) {
      pvVar7 = *(void **)((int)pvVar6 + -4);
      pnVar9 = pnVar9 + 0x23;
      if (0x1f < (uint)((int)pvVar6 + (-4 - (int)pvVar7))) {
LAB_005469a3:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar9);
  }
  *(void **)this = pvVar10;
  *(void **)(this + 4) = (void *)((int)pvVar10 + uVar1 * 8);
  *(void **)(this + 8) = (void *)(uVar8 + (int)pvVar10);
  return (double *)(*(int *)this + iVar2);
}


// private: void __thiscall std::vector<struct MouseCursor,class std::allocator<struct MouseCursor>
// >::_Assign_range<struct MouseCursor *>(struct MouseCursor *,struct MouseCursor *,struct
// std::forward_iterator_tag)

void __thiscall std::vector<>::_Assign_range<>(vector<> *this,int param_1,int param_2)

{
  uint uVar1;
  nothrow_t *pnVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  MouseCursor *pMVar6;
  MouseCursor *unaff_ESI;
  MouseCursor *this_00;
  uint uVar7;
  MouseCursor *this_01;
  MouseCursor *unaff_EDI;
  
  uVar3 = (param_2 - param_1) / 0x28;
  pMVar6 = *(MouseCursor **)(this + 4);
  this_00 = *(MouseCursor **)this;
  uVar1 = (*(int *)(this + 8) - (int)this_00) / 0x28;
  if (uVar3 <= uVar1) {
    if ((uint)(((int)pMVar6 - (int)this_00) / 0x28) < uVar3) {
      _Copy_unchecked<>(this_00,unaff_EDI,unaff_ESI);
      pMVar6 = _Uninitialized_copy<>
                         (*(MouseCursor **)(this + 4),(MouseCursor *)this,this_00,
                          (allocator<> *)unaff_EDI);
      *(MouseCursor **)(this + 4) = pMVar6;
      return;
    }
    _Copy_unchecked<>(this_00,unaff_EDI,unaff_ESI);
    pMVar6 = *(MouseCursor **)(this + 4);
    for (this_01 = this_00 + uVar3 * 0x28; this_01 != pMVar6; this_01 = this_01 + 0x28) {
      MouseCursor::~MouseCursor(this_01);
    }
    *(MouseCursor **)(this + 4) = this_00 + uVar3 * 0x28;
    return;
  }
  if (uVar3 < 0x6666667) {
    uVar7 = uVar3;
    if ((uVar1 <= 0x6666666 - (uVar1 >> 1)) && (uVar7 = (uVar1 >> 1) + uVar1, uVar7 < uVar3)) {
      uVar7 = uVar3;
    }
    if (this_00 != (MouseCursor *)0x0) {
      if (this_00 != pMVar6) {
        do {
          MouseCursor::~MouseCursor(this_00);
          this_00 = this_00 + 0x28;
        } while (this_00 != pMVar6);
        this_00 = *(MouseCursor **)this;
      }
      pnVar2 = (nothrow_t *)(uVar1 * 0x28);
      pMVar6 = this_00;
      if ((nothrow_t *)0xfff < pnVar2) {
        pMVar6 = *(MouseCursor **)(this_00 + -4);
        pnVar2 = pnVar2 + 0x23;
        if ((MouseCursor *)0x1f < this_00 + (-4 - (int)pMVar6)) goto LAB_00546add;
      }
      operator_delete(pMVar6,pnVar2);
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
    if (uVar7 != 0) {
      if (0x6666666 < uVar7) goto LAB_00546b8f;
      uVar7 = uVar7 * 0x28;
      if (uVar7 < 0x1000) {
        if (uVar7 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          pvVar5 = operator_new(uVar7);
        }
      }
      else {
        uVar3 = uVar7 + 0x23;
        if (uVar3 <= uVar7) {
          uVar3 = 0xffffffff;
        }
        pvVar4 = operator_new(uVar3);
        if (pvVar4 == (void *)0x0) {
LAB_00546add:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        pvVar5 = (void *)((int)pvVar4 + 0x23U & 0xffffffe0);
        *(void **)((int)pvVar5 - 4) = pvVar4;
      }
      *(void **)this = pvVar5;
      *(void **)(this + 4) = pvVar5;
      *(uint *)(this + 8) = *(int *)this + uVar7;
    }
    pMVar6 = _Uninitialized_copy<>
                       (*(MouseCursor **)this,(MouseCursor *)this,unaff_EDI,(allocator<> *)unaff_ESI
                       );
    *(MouseCursor **)(this + 4) = pMVar6;
    return;
  }
LAB_00546b8f:
                    // WARNING: Subroutine does not return
  vector<>::_Xlength();
}


// public: __thiscall std::vector<struct CommsCommand,class std::allocator<struct CommsCommand>
// >::~vector<struct CommsCommand,class std::allocator<struct CommsCommand> >(void)

void __thiscall std::vector<>::~vector<>(vector<> *this)

{
  nothrow_t *pnVar1;
  CommsCommand *this_00;
  CommsCommand *pCVar2;
  
  this_00 = *(CommsCommand **)this;
  if (this_00 != (CommsCommand *)0x0) {
    pCVar2 = *(CommsCommand **)(this + 4);
    if (this_00 != pCVar2) {
      do {
        CommsCommand::~CommsCommand(this_00);
        this_00 = this_00 + 0x78;
      } while (this_00 != pCVar2);
      this_00 = *(CommsCommand **)this;
    }
    pnVar1 = (nothrow_t *)(((*(int *)(this + 8) - (int)this_00) / 0x78) * 0x78);
    pCVar2 = this_00;
    if ((nothrow_t *)0xfff < pnVar1) {
      pCVar2 = *(CommsCommand **)(this_00 + -4);
      pnVar1 = pnVar1 + 0x23;
      if ((CommsCommand *)0x1f < this_00 + (-4 - (int)pCVar2)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pCVar2,pnVar1);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// private: void __thiscall std::vector<struct CommsCommand,class std::allocator<struct
// CommsCommand> >::_Destroy(struct CommsCommand *,struct CommsCommand *)

void __thiscall std::vector<>::_Destroy(vector<> *this,CommsCommand *param_1,CommsCommand *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x78) {
    CommsCommand::~CommsCommand(param_1);
  }
  return;
}


// public: struct CommsCommand * __thiscall std::vector<struct CommsCommand,class
// std::allocator<struct CommsCommand> >::_Emplace_reallocate<struct CommsCommand>(struct
// CommsCommand * const,struct CommsCommand &&)

CommsCommand * __thiscall
std::vector<>::_Emplace_reallocate<>(vector<> *this,CommsCommand *param_1,CommsCommand *param_2)

{
  basic_string<> *pbVar1;
  int iVar2;
  CommsCommand *pCVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  nothrow_t *pnVar11;
  CommsCommand *pCVar12;
  CommsCommand *unaff_EDI;
  CommsCommand *pCVar13;
  basic_string<> *pbVar14;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &DAT_005c87fe;
  local_10 = ExceptionList;
  pCVar3 = (CommsCommand *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  iVar8 = *(int *)this;
  iVar2 = (*(int *)(this + 4) - iVar8) / 0x78;
  if (iVar2 == 0x2222222) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar4 = iVar2 + 1;
  uVar10 = (*(int *)(this + 8) - iVar8) / 0x78;
  uVar5 = uVar4;
  if ((uVar10 <= 0x2222222 - (uVar10 >> 1)) && (uVar5 = (uVar10 >> 1) + uVar10, uVar5 < uVar4)) {
    uVar5 = uVar4;
  }
  uVar10 = uVar5 * 0x78;
  if (uVar5 < 0x2222223) {
    if (0xfff < uVar10) goto LAB_00549a1d;
    if (uVar10 == 0) {
      pCVar13 = (CommsCommand *)0x0;
    }
    else {
      pCVar13 = operator_new(uVar10);
    }
  }
  else {
    uVar10 = 0xffffffff;
LAB_00549a1d:
    uVar6 = uVar10 + 0x23;
    if (uVar6 <= uVar10) {
      uVar6 = 0xffffffff;
    }
    pvVar7 = operator_new(uVar6);
    if (pvVar7 == (void *)0x0) goto LAB_00549a40;
    pCVar13 = (CommsCommand *)((int)pvVar7 + 0x23U & 0xffffffe0);
    *(void **)(pCVar13 + -4) = pvVar7;
  }
  iVar8 = (((int)param_1 - iVar8) / 0x78) * 0x78;
  local_8 = 0;
  uStack_7 = 0;
  _Default_allocator_traits<>::construct<>((allocator<> *)param_2,pCVar3,unaff_EDI);
  pbVar1 = *(basic_string<> **)(this + 4);
  if (param_1 == (CommsCommand *)pbVar1) {
    pCVar3 = pCVar13;
    for (pbVar14 = *(basic_string<> **)this; local_8 = 1, pbVar14 != pbVar1;
        pbVar14 = pbVar14 + 0x78) {
      basic_string<>::basic_string<>((basic_string<> *)pCVar3,pbVar14);
      local_8 = 2;
      basic_string<>::basic_string<>((basic_string<> *)(pCVar3 + 0x18),pbVar14 + 0x18);
      local_8 = 3;
      basic_string<>::basic_string<>((basic_string<> *)(pCVar3 + 0x30),pbVar14 + 0x30);
      *(basic_string<> *)(pCVar3 + 0x48) = *(basic_string<> *)(pbVar14 + 0x48);
      *(undefined4 *)(pCVar3 + 0x74) = 0;
      local_8 = 5;
      if (*(undefined4 **)(pbVar14 + 0x74) != (undefined4 *)0x0) {
        uVar9 = (**(code **)**(undefined4 **)(pbVar14 + 0x74))((basic_string<> *)(pCVar3 + 0x50));
        *(undefined4 *)(pCVar3 + 0x74) = uVar9;
      }
      pCVar3 = pCVar3 + 0x78;
    }
  }
  else {
    _Umove(this,*(CommsCommand **)this,param_1,pCVar13);
    _Umove(this,param_1,*(CommsCommand **)(this + 4),pCVar13 + iVar8 + 0x78);
  }
  pCVar3 = *(CommsCommand **)this;
  if (pCVar3 != (CommsCommand *)0x0) {
    pCVar12 = *(CommsCommand **)(this + 4);
    if (pCVar3 != pCVar12) {
      do {
        CommsCommand::~CommsCommand(pCVar3);
        pCVar3 = pCVar3 + 0x78;
      } while (pCVar3 != pCVar12);
      pCVar3 = *(CommsCommand **)this;
    }
    pnVar11 = (nothrow_t *)(((*(int *)(this + 8) - (int)pCVar3) / 0x78) * 0x78);
    pCVar12 = pCVar3;
    if ((nothrow_t *)0xfff < pnVar11) {
      pCVar12 = *(CommsCommand **)(pCVar3 + -4);
      pnVar11 = pnVar11 + 0x23;
      if ((CommsCommand *)0x1f < pCVar3 + (-4 - (int)pCVar12)) {
LAB_00549a40:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pCVar12,pnVar11);
  }
  *(CommsCommand **)this = pCVar13;
  *(CommsCommand **)(this + 4) = pCVar13 + uVar4 * 0x78;
  *(CommsCommand **)(this + 8) = pCVar13 + uVar5 * 0x78;
  ExceptionList = local_10;
  return (CommsCommand *)(*(int *)this + iVar8);
}


// private: struct CommsCommand * __thiscall std::vector<struct CommsCommand,class
// std::allocator<struct CommsCommand> >::_Umove(struct CommsCommand *,struct CommsCommand *,struct
// CommsCommand *)

CommsCommand * __thiscall
std::vector<>::_Umove
          (vector<> *this,CommsCommand *param_1,CommsCommand *param_2,CommsCommand *param_3)

{
  void **ppvVar1;
  CommsCommand *pCVar2;
  CommsCommand *unaff_EDI;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c8828;
  pCVar2 = (CommsCommand *)(___security_cookie ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  ppvVar1 = &local_10;
  local_10 = ExceptionList;
  for (; ExceptionList = ppvVar1, param_1 != param_2; param_1 = param_1 + 0x78) {
    _Default_allocator_traits<>::construct<>((allocator<> *)param_1,pCVar2,unaff_EDI);
    param_3 = param_3 + 0x78;
    ppvVar1 = ExceptionList;
  }
  ExceptionList = local_10;
  return param_3;
}


// public: __thiscall std::vector<class std::vector<struct word,class std::allocator<struct word>
// >,class std::allocator<class std::vector<struct word,class std::allocator<struct word> > >
// >::~vector<class std::vector<struct word,class std::allocator<struct word> >,class
// std::allocator<class std::vector<struct word,class std::allocator<struct word> > > >(void)

void __thiscall std::vector<>::~vector<>(vector<> *this)

{
  nothrow_t *pnVar1;
  vector<> *this_00;
  vector<> *pvVar2;
  
  this_00 = *(vector<> **)this;
  if (this_00 != (vector<> *)0x0) {
    pvVar2 = *(vector<> **)(this + 4);
    if (this_00 != pvVar2) {
      do {
        vector<>::_Tidy(this_00);
        this_00 = this_00 + 0xc;
      } while (this_00 != pvVar2);
      this_00 = *(vector<> **)this;
    }
    pnVar1 = (nothrow_t *)(((*(int *)(this + 8) - (int)this_00) / 0xc) * 0xc);
    pvVar2 = this_00;
    if ((nothrow_t *)0xfff < pnVar1) {
      pvVar2 = *(vector<> **)(this_00 + -4);
      pnVar1 = pnVar1 + 0x23;
      if ((vector<> *)0x1f < this_00 + (-4 - (int)pvVar2)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar1);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// public: __thiscall std::vector<struct word,class std::allocator<struct word> >::~vector<struct
// word,class std::allocator<struct word> >(void)

void __thiscall std::vector<>::~vector<>(vector<> *this)

{
  void *pvVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  word *unaff_ESI;
  allocator<word> *unaff_retaddr;
  
  if (*(word **)this != (word *)0x0) {
    _Destroy_range<>(*(word **)this,unaff_ESI,unaff_retaddr);
    pvVar1 = *(void **)this;
    pnVar3 = (nothrow_t *)(*(int *)(this + 8) - (int)pvVar1 & 0xffffffe0);
    pvVar2 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)pvVar1 + -4);
      pnVar3 = pnVar3 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// private: void __thiscall std::vector<struct word,class std::allocator<struct word> >::_Tidy(void)

void __thiscall std::vector<>::_Tidy(vector<> *this)

{
  void *pvVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  word *unaff_ESI;
  allocator<word> *unaff_retaddr;
  
  if (*(word **)this != (word *)0x0) {
    _Destroy_range<>(*(word **)this,unaff_ESI,unaff_retaddr);
    pvVar1 = *(void **)this;
    pnVar3 = (nothrow_t *)(*(int *)(this + 8) - (int)pvVar1 & 0xffffffe0);
    pvVar2 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)pvVar1 + -4);
      pnVar3 = pnVar3 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// private: void __thiscall std::vector<struct word,class std::allocator<struct word>
// >::_Destroy(struct word *,struct word *)

void __thiscall std::vector<>::_Destroy(vector<> *this,word *param_1,word *param_2)

{
  word *unaff_EBP;
  allocator<word> *unaff_retaddr;
  
  _Destroy_range<>((word *)this,unaff_EBP,unaff_retaddr);
  return;
}


// private: void __thiscall std::vector<class std::vector<struct word,class std::allocator<struct
// word> >,class std::allocator<class std::vector<struct word,class std::allocator<struct word> > >
// >::_Destroy(class std::vector<struct word,class std::allocator<struct word> > *,class
// std::vector<struct word,class std::allocator<struct word> > *)

void __thiscall std::vector<>::_Destroy(vector<> *this,vector<> *param_1,vector<> *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    vector<>::_Tidy(param_1);
  }
  return;
}


// public: class std::vector<struct word,class std::allocator<struct word> > * __thiscall
// std::vector<class std::vector<struct word,class std::allocator<struct word> >,class
// std::allocator<class std::vector<struct word,class std::allocator<struct word> > >
// >::_Emplace_reallocate<class std::vector<struct word,class std::allocator<struct word> > const
// &>(class std::vector<struct word,class std::allocator<struct word> > * const,class
// std::vector<struct word,class std::allocator<struct word> > const &)

vector<> * __thiscall
std::vector<>::_Emplace_reallocate<>(vector<> *this,vector<> *param_1,vector<> *param_2)

{
  int iVar1;
  vector<> *pvVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  vector<> *extraout_ECX;
  nothrow_t *pnVar8;
  vector<> *this_00;
  vector<> *pvVar9;
  allocator<> *unaff_EDI;
  vector<> *pvVar10;
  vector<> *pvVar11;
  vector<> *pvVar12;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c9c50;
  local_10 = ExceptionList;
  pvVar2 = (vector<> *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  iVar6 = *(int *)this;
  iVar1 = (*(int *)(this + 4) - iVar6) / 0xc;
  if (iVar1 == 0x15555555) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar7 = iVar1 + 1;
  uVar4 = (*(int *)(this + 8) - iVar6) / 0xc;
  uVar3 = uVar7;
  if ((uVar4 <= 0x15555555 - (uVar4 >> 1)) && (uVar3 = (uVar4 >> 1) + uVar4, uVar3 < uVar7)) {
    uVar3 = uVar7;
  }
  uVar7 = uVar3 * 0xc;
  if (uVar3 < 0x15555556) {
    uVar3 = uVar7;
    if (0xfff < uVar7) goto LAB_00560c30;
    if (uVar7 == 0) {
      pvVar10 = (vector<> *)0x0;
    }
    else {
      pvVar10 = operator_new(uVar7);
    }
  }
  else {
    uVar3 = 0xffffffff;
LAB_00560c30:
    uVar4 = uVar3 + 0x23;
    if (uVar4 <= uVar3) {
      uVar4 = 0xffffffff;
    }
    pvVar5 = operator_new(uVar4);
    if (pvVar5 == (void *)0x0) goto LAB_00560c53;
    pvVar10 = (vector<> *)((int)pvVar5 + 0x23U & 0xffffffe0);
    *(void **)(pvVar10 + -4) = pvVar5;
  }
  local_8 = 0;
  iVar6 = (((int)param_1 - iVar6) / 0xc) * 0xc;
  vector<>::vector<>((vector<> *)(pvVar10 + iVar6),param_2);
  pvVar11 = pvVar10;
  pvVar12 = extraout_ECX;
  if (param_1 != *(vector<> **)(this + 4)) {
    _Uninitialized_move<>(pvVar10,extraout_ECX,pvVar2,unaff_EDI);
    pvVar11 = (vector<> *)((vector<> *)(pvVar10 + iVar6) + 0xc);
  }
  _Uninitialized_move<>(pvVar11,pvVar12,pvVar2,unaff_EDI);
  this_00 = *(vector<> **)this;
  if (this_00 != (vector<> *)0x0) {
    pvVar9 = *(vector<> **)(this + 4);
    if (this_00 != pvVar9) {
      do {
        vector<>::_Tidy(this_00);
        this_00 = this_00 + 0xc;
      } while (this_00 != pvVar9);
      this_00 = *(vector<> **)this;
    }
    pnVar8 = (nothrow_t *)(((*(int *)(this + 8) - (int)this_00) / 0xc) * 0xc);
    pvVar9 = this_00;
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar9 = *(vector<> **)(this_00 + -4);
      pnVar8 = pnVar8 + 0x23;
      if ((vector<> *)0x1f < this_00 + (-4 - (int)pvVar9)) {
LAB_00560c53:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar9,pnVar8);
  }
  *(vector<> **)this = pvVar10;
  *(vector<> **)(this + 4) = pvVar10 + (iVar1 * 3 + 3) * 4;
  *(vector<> **)(this + 8) = pvVar10 + uVar7;
  ExceptionList = local_10;
  return (vector<> *)(*(int *)this + iVar6);
}


// public: struct word * __thiscall std::vector<struct word,class std::allocator<struct word>
// >::_Emplace_reallocate<struct word const &>(struct word * const,struct word const &)

word * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,word *param_1,word *param_2)

{
  uint uVar1;
  int iVar2;
  word *pwVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  uint uVar8;
  nothrow_t *pnVar9;
  uint uVar10;
  word *pwVar11;
  allocator<word> *unaff_EDI;
  word *pwVar12;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c9c70;
  local_10 = ExceptionList;
  pwVar3 = (word *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  iVar2 = *(int *)this;
  iVar4 = *(int *)(this + 4) - iVar2 >> 5;
  if (iVar4 == 0x7ffffff) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar1 = iVar4 + 1;
  uVar8 = *(int *)(this + 8) - iVar2 >> 5;
  uVar10 = uVar1;
  if ((uVar8 <= 0x7ffffff - (uVar8 >> 1)) && (uVar10 = (uVar8 >> 1) + uVar8, uVar10 < uVar1)) {
    uVar10 = uVar1;
  }
  uVar8 = uVar10 * 0x20;
  if (uVar10 < 0x8000000) {
    uVar10 = uVar8;
    if (0xfff < uVar8) goto LAB_00560e12;
    if (uVar8 == 0) {
      pwVar11 = (word *)0x0;
    }
    else {
      pwVar11 = operator_new(uVar8);
    }
  }
  else {
    uVar10 = 0xffffffff;
LAB_00560e12:
    uVar5 = uVar10 + 0x23;
    if (uVar5 <= uVar10) {
      uVar5 = 0xffffffff;
    }
    pvVar6 = operator_new(uVar5);
    if (pvVar6 == (void *)0x0) goto LAB_00560e35;
    pwVar11 = (word *)((int)pvVar6 + 0x23U & 0xffffffe0);
    *(void **)(pwVar11 + -4) = pvVar6;
  }
  uVar10 = (int)param_1 - iVar2 & 0xffffffe0;
  local_8 = 0;
  basic_string<>::basic_string<>((basic_string<> *)(pwVar11 + uVar10),(basic_string<> *)param_2);
  pwVar11[uVar10 + 0x18] = param_2[0x18];
  *(undefined4 *)(pwVar11 + uVar10 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  pwVar12 = pwVar11;
  if (param_1 != *(word **)(this + 4)) {
    _Uninitialized_move<>(pwVar11,param_2,pwVar3,unaff_EDI);
    pwVar12 = (word *)((basic_string<> *)(pwVar11 + uVar10) + 0x20);
  }
  _Uninitialized_move<>(pwVar12,param_2,pwVar3,unaff_EDI);
  if (*(word **)this != (word *)0x0) {
    _Destroy_range<>(*(word **)this,pwVar3,unaff_EDI);
    pvVar6 = *(void **)this;
    pnVar9 = (nothrow_t *)(*(int *)(this + 8) - (int)pvVar6 & 0xffffffe0);
    pvVar7 = pvVar6;
    if ((nothrow_t *)0xfff < pnVar9) {
      pvVar7 = *(void **)((int)pvVar6 + -4);
      pnVar9 = pnVar9 + 0x23;
      if (0x1f < (uint)((int)pvVar6 + (-4 - (int)pvVar7))) {
LAB_00560e35:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar9);
  }
  *(word **)this = pwVar11;
  *(word **)(this + 4) = pwVar11 + uVar1 * 0x20;
  *(word **)(this + 8) = pwVar11 + uVar8;
  ExceptionList = local_10;
  return (word *)(*(int *)this + uVar10);
}


// public: __thiscall std::vector<struct word,class std::allocator<struct word> >::vector<struct
// word,class std::allocator<struct word> >(class std::vector<struct word,class
// std::allocator<struct word> > const &)

vector<> * __thiscall std::vector<>::vector<>(vector<> *this,vector<> *param_1)

{
  basic_string<> *pbVar1;
  word *pwVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  word *extraout_ECX;
  uint uVar6;
  basic_string<> *pbVar7;
  allocator<word> *unaff_EDI;
  basic_string<> *this_00;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c9c98;
  local_10 = ExceptionList;
  pwVar2 = (word *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  uVar6 = *(int *)(param_1 + 4) - *(int *)param_1 >> 5;
  if (uVar6 != 0) {
    if (0x7ffffff < uVar6) {
                    // WARNING: Subroutine does not return
      vector<>::_Xlength();
    }
    uVar6 = uVar6 * 0x20;
    if (uVar6 < 0x1000) {
      if (uVar6 == 0) {
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar5 = operator_new(uVar6);
      }
    }
    else {
      uVar3 = uVar6 + 0x23;
      if (uVar3 <= uVar6) {
        uVar3 = 0xffffffff;
      }
      pvVar4 = operator_new(uVar3);
      if (pvVar4 == (void *)0x0) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      pvVar5 = (void *)((int)pvVar4 + 0x23U & 0xffffffe0);
      *(void **)((int)pvVar5 - 4) = pvVar4;
    }
    *(void **)this = pvVar5;
    *(void **)(this + 4) = pvVar5;
    *(uint *)(this + 8) = *(int *)this + uVar6;
    this_00 = *(basic_string<> **)this;
    pbVar1 = *(basic_string<> **)(param_1 + 4);
    pbVar7 = *(basic_string<> **)param_1;
    local_8 = 1;
    for (; pbVar7 != pbVar1; pbVar7 = pbVar7 + 0x20) {
      basic_string<>::basic_string<>(this_00,pbVar7);
      *(basic_string<> *)(this_00 + 0x18) = pbVar7[0x18];
      *(undefined4 *)(this_00 + 0x1c) = *(undefined4 *)(pbVar7 + 0x1c);
      this_00 = this_00 + 0x20;
      param_1 = (vector<> *)extraout_ECX;
    }
    _Destroy_range<>((word *)param_1,pwVar2,unaff_EDI);
    *(basic_string<> **)(this + 4) = this_00;
  }
  ExceptionList = local_10;
  return this;
}


// public: __thiscall std::vector<struct ScreenTab,class std::allocator<struct ScreenTab>
// >::~vector<struct ScreenTab,class std::allocator<struct ScreenTab> >(void)

void __thiscall std::vector<>::~vector<>(vector<> *this)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  allocator<ScreenTab> *unaff_ESI;
  ScreenTab *unaff_EDI;
  void *pvVar3;
  
  if (*(ScreenTab **)this != (ScreenTab *)0x0) {
    _Destroy_range<>(*(ScreenTab **)this,unaff_EDI,unaff_ESI);
    pvVar1 = *(void **)this;
    pnVar2 = (nothrow_t *)(((*(int *)(this + 8) - (int)pvVar1) / 0x2c) * 0x2c);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar2 = pnVar2 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar2);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// private: void __thiscall std::vector<struct ScreenTab,class std::allocator<struct ScreenTab>
// >::_Destroy(struct ScreenTab *,struct ScreenTab *)

void __thiscall std::vector<>::_Destroy(vector<> *this,ScreenTab *param_1,ScreenTab *param_2)

{
  ScreenTab *unaff_EBP;
  allocator<ScreenTab> *unaff_retaddr;
  
  _Destroy_range<>((ScreenTab *)this,unaff_EBP,unaff_retaddr);
  return;
}


// public: struct ScreenTab * __thiscall std::vector<struct ScreenTab,class std::allocator<struct
// ScreenTab> >::_Emplace_reallocate<struct ScreenTab const &>(struct ScreenTab * const,struct
// ScreenTab const &)

ScreenTab * __thiscall
std::vector<>::_Emplace_reallocate<>(vector<> *this,ScreenTab *param_1,ScreenTab *param_2)

{
  basic_string<> *this_00;
  int iVar1;
  ScreenTab *pSVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  nothrow_t *pnVar8;
  void *pvVar9;
  ScreenTab *pSVar10;
  allocator<ScreenTab> *unaff_EDI;
  basic_string<> *pbVar11;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c9f40;
  local_10 = ExceptionList;
  pSVar2 = (ScreenTab *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  iVar6 = *(int *)this;
  iVar1 = (*(int *)(this + 4) - iVar6) / 0x2c;
  if (iVar1 == 0x5d1745d) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar7 = iVar1 + 1;
  uVar4 = (*(int *)(this + 8) - iVar6) / 0x2c;
  uVar3 = uVar7;
  if ((uVar4 <= 0x5d1745d - (uVar4 >> 1)) && (uVar3 = (uVar4 >> 1) + uVar4, uVar3 < uVar7)) {
    uVar3 = uVar7;
  }
  uVar7 = uVar3 * 0x2c;
  if (uVar3 < 0x5d1745e) {
    uVar3 = uVar7;
    if (0xfff < uVar7) goto LAB_00563940;
    if (uVar7 == 0) {
      pSVar10 = (ScreenTab *)0x0;
    }
    else {
      pSVar10 = operator_new(uVar7);
    }
  }
  else {
    uVar3 = 0xffffffff;
LAB_00563940:
    uVar4 = uVar3 + 0x23;
    if (uVar4 <= uVar3) {
      uVar4 = 0xffffffff;
    }
    pvVar5 = operator_new(uVar4);
    if (pvVar5 == (void *)0x0) goto LAB_00563963;
    pSVar10 = (ScreenTab *)((int)pvVar5 + 0x23U & 0xffffffe0);
    *(void **)(pSVar10 + -4) = pvVar5;
  }
  iVar6 = (((int)param_1 - iVar6) / 0x2c) * 0x2c;
  local_8 = 0;
  this_00 = (basic_string<> *)(pSVar10 + iVar6);
  basic_string<>::basic_string<>(this_00,(basic_string<> *)param_2);
  this_00[0x18] = *(basic_string<> *)(param_2 + 0x18);
  this_00[0x19] = *(basic_string<> *)(param_2 + 0x19);
  *(undefined4 *)(this_00 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(this_00 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(this_00 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(this_00 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  pbVar11 = (basic_string<> *)pSVar10;
  if (param_1 != *(ScreenTab **)(this + 4)) {
    _Uninitialized_move<>(pSVar10,param_2,pSVar2,unaff_EDI);
    pbVar11 = this_00 + 0x2c;
  }
  _Uninitialized_move<>((ScreenTab *)pbVar11,param_2,pSVar2,unaff_EDI);
  if (*(ScreenTab **)this != (ScreenTab *)0x0) {
    _Destroy_range<>(*(ScreenTab **)this,pSVar2,unaff_EDI);
    pvVar5 = *(void **)this;
    pnVar8 = (nothrow_t *)(((*(int *)(this + 8) - (int)pvVar5) / 0x2c) * 0x2c);
    pvVar9 = pvVar5;
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar9 = *(void **)((int)pvVar5 + -4);
      pnVar8 = pnVar8 + 0x23;
      if (0x1f < (uint)((int)pvVar5 + (-4 - (int)pvVar9))) {
LAB_00563963:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar9,pnVar8);
  }
  *(ScreenTab **)this = pSVar10;
  *(ScreenTab **)(this + 4) = pSVar10 + (iVar1 + 1) * 0x2c;
  *(ScreenTab **)(this + 8) = pSVar10 + uVar7;
  ExceptionList = local_10;
  return (ScreenTab *)(*(int *)this + iVar6);
}


// private: void __thiscall std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >
// >::_Range_construct_or_tidy<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const *>(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const *,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const *,struct std::forward_iterator_tag)

void __thiscall
std::vector<>::_Range_construct_or_tidy<>
          (vector<> *this,basic_string<> *param_1,basic_string<> *param_2)

{
  bool bVar1;
  basic_string<> *pbVar2;
  basic_string<> *extraout_ECX;
  basic_string<> *pbVar3;
  basic_string<> *extraout_ECX_00;
  allocator<> *unaff_EDI;
  basic_string<> *this_00;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c9f68;
  local_10 = ExceptionList;
  pbVar2 = (basic_string<> *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  bVar1 = _Buy(this,((int)param_2 - (int)param_1) / 0x18);
  if (bVar1) {
    this_00 = *(basic_string<> **)this;
    local_8 = 1;
    pbVar3 = extraout_ECX;
    for (; param_1 != param_2; param_1 = param_1 + 0x18) {
      basic_string<>::basic_string<>(this_00,param_1);
      this_00 = this_00 + 0x18;
      pbVar3 = extraout_ECX_00;
    }
    _Destroy_range<>(pbVar3,pbVar2,unaff_EDI);
    *(basic_string<> **)(this + 4) = this_00;
  }
  ExceptionList = local_10;
  return;
}


// public: __thiscall std::vector<class cocos2d::Rect,class std::allocator<class cocos2d::Rect>
// >::~vector<class cocos2d::Rect,class std::allocator<class cocos2d::Rect> >(void)

void __thiscall std::vector<>::~vector<>(vector<> *this)

{
  nothrow_t *pnVar1;
  Rect *this_00;
  Rect *pRVar2;
  
  this_00 = *(Rect **)this;
  if (this_00 != (Rect *)0x0) {
    pRVar2 = *(Rect **)(this + 4);
    if (this_00 != pRVar2) {
      do {
        cocos2d::Rect::~Rect(this_00);
        this_00 = this_00 + 0x10;
      } while (this_00 != pRVar2);
      this_00 = *(Rect **)this;
    }
    pnVar1 = (nothrow_t *)(*(int *)(this + 8) - (int)this_00 & 0xfffffff0);
    pRVar2 = this_00;
    if ((nothrow_t *)0xfff < pnVar1) {
      pRVar2 = *(Rect **)(this_00 + -4);
      pnVar1 = pnVar1 + 0x23;
      if ((Rect *)0x1f < this_00 + (-4 - (int)pRVar2)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pRVar2,pnVar1);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// public: __thiscall std::vector<class ListData,class std::allocator<class ListData>
// >::~vector<class ListData,class std::allocator<class ListData> >(void)

void __thiscall std::vector<>::~vector<>(vector<> *this)

{
  nothrow_t *pnVar1;
  ListData *this_00;
  ListData *pLVar2;
  
  this_00 = *(ListData **)this;
  if (this_00 != (ListData *)0x0) {
    pLVar2 = *(ListData **)(this + 4);
    if (this_00 != pLVar2) {
      do {
        ListData::~ListData(this_00);
        this_00 = this_00 + 0x60;
      } while (this_00 != pLVar2);
      this_00 = *(ListData **)this;
    }
    pnVar1 = (nothrow_t *)(((*(int *)(this + 8) - (int)this_00) / 0x60) * 0x60);
    pLVar2 = this_00;
    if ((nothrow_t *)0xfff < pnVar1) {
      pLVar2 = *(ListData **)(this_00 + -4);
      pnVar1 = pnVar1 + 0x23;
      if ((ListData *)0x1f < this_00 + (-4 - (int)pLVar2)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pLVar2,pnVar1);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// private: void __thiscall std::vector<class cocos2d::Rect,class std::allocator<class
// cocos2d::Rect> >::_Destroy(class cocos2d::Rect *,class cocos2d::Rect *)

void __thiscall std::vector<>::_Destroy(vector<> *this,Rect *param_1,Rect *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    cocos2d::Rect::~Rect(param_1);
  }
  return;
}


// public: class cocos2d::Rect * __thiscall std::vector<class cocos2d::Rect,class
// std::allocator<class cocos2d::Rect> >::_Emplace_reallocate<class cocos2d::Rect>(class
// cocos2d::Rect * const,class cocos2d::Rect &&)

Rect * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,Rect *param_1,Rect *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  Rect *pRVar6;
  Rect *pRVar7;
  uint uVar8;
  int iVar9;
  nothrow_t *pnVar10;
  Rect *pRVar11;
  Rect *pRVar12;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005ca4a8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar9 = *(int *)this;
  iVar2 = *(int *)(this + 4) - iVar9 >> 4;
  if (iVar2 == 0xfffffff) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar1 = iVar2 + 1;
  uVar8 = *(int *)(this + 8) - iVar9 >> 4;
  uVar3 = uVar1;
  if ((uVar8 <= 0xfffffff - (uVar8 >> 1)) && (uVar3 = (uVar8 >> 1) + uVar8, uVar3 < uVar1)) {
    uVar3 = uVar1;
  }
  uVar8 = uVar3 << 4;
  if (uVar3 < 0x10000000) {
    if (0xfff < uVar8) goto LAB_00568d4a;
    if (uVar8 == 0) {
      pRVar6 = (Rect *)0x0;
    }
    else {
      pRVar6 = operator_new(uVar8);
    }
  }
  else {
    uVar8 = 0xffffffff;
LAB_00568d4a:
    uVar4 = uVar8 + 0x23;
    if (uVar4 <= uVar8) {
      uVar4 = 0xffffffff;
    }
    pvVar5 = operator_new(uVar4);
    if (pvVar5 == (void *)0x0) goto LAB_00568d6f;
    pRVar6 = (Rect *)((int)pvVar5 + 0x23U & 0xffffffe0);
    *(void **)(pRVar6 + -4) = pvVar5;
  }
  iVar9 = ((int)param_1 - iVar9 >> 4) * 0x10;
  pRVar7 = pRVar6 + iVar9;
  local_8 = 0;
  cocos2d::Rect::Rect(pRVar7,param_2);
  pRVar12 = *(Rect **)(this + 4);
  if (param_1 == pRVar12) {
    pRVar7 = *(Rect **)this;
    local_8 = CONCAT31(local_8._1_3_,1);
    pRVar11 = pRVar6;
    for (; pRVar7 != pRVar12; pRVar7 = pRVar7 + 0x10) {
      cocos2d::Rect::Rect(pRVar11,pRVar7);
      pRVar11 = pRVar11 + 0x10;
    }
  }
  else {
    pRVar12 = *(Rect **)this;
    local_8._0_1_ = 2;
    pRVar11 = pRVar6;
    for (; pRVar12 != param_1; pRVar12 = pRVar12 + 0x10) {
      cocos2d::Rect::Rect(pRVar11,pRVar12);
      pRVar11 = pRVar11 + 0x10;
    }
    pRVar12 = *(Rect **)(this + 4);
    local_8 = CONCAT31(local_8._1_3_,3);
    for (; pRVar7 = pRVar7 + 0x10, param_1 != pRVar12; param_1 = param_1 + 0x10) {
      cocos2d::Rect::Rect(pRVar7,param_1);
    }
  }
  pRVar12 = *(Rect **)this;
  if (pRVar12 != (Rect *)0x0) {
    pRVar7 = *(Rect **)(this + 4);
    if (pRVar12 != pRVar7) {
      do {
        cocos2d::Rect::~Rect(pRVar12);
        pRVar12 = pRVar12 + 0x10;
      } while (pRVar12 != pRVar7);
      pRVar12 = *(Rect **)this;
    }
    pnVar10 = (nothrow_t *)(*(int *)(this + 8) - (int)pRVar12 & 0xfffffff0);
    pRVar7 = pRVar12;
    if ((nothrow_t *)0xfff < pnVar10) {
      pRVar7 = *(Rect **)(pRVar12 + -4);
      pnVar10 = pnVar10 + 0x23;
      if ((Rect *)0x1f < pRVar12 + (-4 - (int)pRVar7)) {
LAB_00568d6f:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pRVar7,pnVar10);
  }
  *(Rect **)this = pRVar6;
  *(Rect **)(this + 4) = pRVar6 + uVar1 * 0x10;
  *(Rect **)(this + 8) = pRVar6 + uVar3 * 0x10;
  ExceptionList = local_10;
  return (Rect *)(*(int *)this + iVar9);
}


// public: __thiscall std::vector<struct Selectable,class std::allocator<struct Selectable>
// >::~vector<struct Selectable,class std::allocator<struct Selectable> >(void)

void __thiscall std::vector<>::~vector<>(vector<> *this)

{
  nothrow_t *pnVar1;
  Rect *this_00;
  Rect *pRVar2;
  
  this_00 = *(Rect **)this;
  if (this_00 != (Rect *)0x0) {
    pRVar2 = *(Rect **)(this + 4);
    if (this_00 != pRVar2) {
      do {
        cocos2d::Rect::~Rect(this_00);
        this_00 = this_00 + 0x14;
      } while (this_00 != pRVar2);
      this_00 = *(Rect **)this;
    }
    pnVar1 = (nothrow_t *)(((*(int *)(this + 8) - (int)this_00) / 0x14) * 0x14);
    pRVar2 = this_00;
    if ((nothrow_t *)0xfff < pnVar1) {
      pRVar2 = *(Rect **)(this_00 + -4);
      pnVar1 = pnVar1 + 0x23;
      if ((Rect *)0x1f < this_00 + (-4 - (int)pRVar2)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pRVar2,pnVar1);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// private: void __thiscall std::vector<struct Selectable,class std::allocator<struct Selectable>
// >::_Destroy(struct Selectable *,struct Selectable *)

void __thiscall std::vector<>::_Destroy(vector<> *this,Selectable *param_1,Selectable *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x14) {
    cocos2d::Rect::~Rect((Rect *)param_1);
  }
  return;
}


// public: struct Selectable * __thiscall std::vector<struct Selectable,class std::allocator<struct
// Selectable> >::_Emplace_reallocate<struct Selectable const &>(struct Selectable * const,struct
// Selectable const &)

Selectable * __thiscall
std::vector<>::_Emplace_reallocate<>(vector<> *this,Selectable *param_1,Selectable *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  Rect *pRVar6;
  Rect *pRVar7;
  uint uVar8;
  int iVar9;
  nothrow_t *pnVar10;
  Rect *pRVar11;
  Rect *pRVar12;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cae58;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar9 = *(int *)this;
  iVar1 = (*(int *)(this + 4) - *(int *)this) / 0x14;
  if (iVar1 == 0xccccccc) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar2 = iVar1 + 1;
  uVar8 = (*(int *)(this + 8) - *(int *)this) / 0x14;
  uVar3 = uVar2;
  if ((uVar8 <= 0xccccccc - (uVar8 >> 1)) && (uVar3 = (uVar8 >> 1) + uVar8, uVar3 < uVar2)) {
    uVar3 = uVar2;
  }
  uVar8 = uVar3 * 0x14;
  if (uVar3 < 0xccccccd) {
    if (0xfff < uVar8) goto LAB_00574913;
    if (uVar8 == 0) {
      pRVar6 = (Rect *)0x0;
    }
    else {
      pRVar6 = operator_new(uVar8);
    }
  }
  else {
    uVar8 = 0xffffffff;
LAB_00574913:
    uVar4 = uVar8 + 0x23;
    if (uVar4 <= uVar8) {
      uVar4 = 0xffffffff;
    }
    pvVar5 = operator_new(uVar4);
    if (pvVar5 == (void *)0x0) goto LAB_00574938;
    pRVar6 = (Rect *)((int)pvVar5 + 0x23U & 0xffffffe0);
    *(void **)(pRVar6 + -4) = pvVar5;
  }
  iVar9 = (((int)param_1 - iVar9) / 0x14) * 0x14;
  pRVar7 = pRVar6 + iVar9;
  local_8 = 0;
  cocos2d::Rect::Rect(pRVar7,(Rect *)param_2);
  *(undefined4 *)(pRVar7 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  pRVar12 = *(Rect **)(this + 4);
  if (param_1 == (Selectable *)pRVar12) {
    pRVar7 = *(Rect **)this;
    local_8 = CONCAT31(local_8._1_3_,1);
    pRVar11 = pRVar6;
    for (; pRVar7 != pRVar12; pRVar7 = pRVar7 + 0x14) {
      cocos2d::Rect::Rect(pRVar11,pRVar7);
      *(undefined4 *)(pRVar11 + 0x10) = *(undefined4 *)(pRVar7 + 0x10);
      pRVar11 = pRVar11 + 0x14;
    }
  }
  else {
    pRVar12 = *(Rect **)this;
    local_8._0_1_ = 2;
    pRVar11 = pRVar6;
    for (; pRVar12 != (Rect *)param_1; pRVar12 = pRVar12 + 0x14) {
      cocos2d::Rect::Rect(pRVar11,pRVar12);
      *(undefined4 *)(pRVar11 + 0x10) = *(undefined4 *)(pRVar12 + 0x10);
      pRVar11 = pRVar11 + 0x14;
    }
    pRVar12 = *(Rect **)(this + 4);
    local_8 = CONCAT31(local_8._1_3_,3);
    for (; param_1 != (Selectable *)pRVar12; param_1 = param_1 + 0x14) {
      cocos2d::Rect::Rect(pRVar7 + 0x14,(Rect *)param_1);
      *(undefined4 *)(pRVar7 + 0x24) = *(undefined4 *)(param_1 + 0x10);
      pRVar7 = pRVar7 + 0x14;
    }
  }
  pRVar12 = *(Rect **)this;
  if (pRVar12 != (Rect *)0x0) {
    pRVar7 = *(Rect **)(this + 4);
    if (pRVar12 != pRVar7) {
      do {
        cocos2d::Rect::~Rect(pRVar12);
        pRVar12 = pRVar12 + 0x14;
      } while (pRVar12 != pRVar7);
      pRVar12 = *(Rect **)this;
    }
    pnVar10 = (nothrow_t *)(((*(int *)(this + 8) - (int)pRVar12) / 0x14) * 0x14);
    pRVar7 = pRVar12;
    if ((nothrow_t *)0xfff < pnVar10) {
      pRVar7 = *(Rect **)(pRVar12 + -4);
      pnVar10 = pnVar10 + 0x23;
      if ((Rect *)0x1f < pRVar12 + (-4 - (int)pRVar7)) {
LAB_00574938:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pRVar7,pnVar10);
  }
  *(Rect **)this = pRVar6;
  *(Rect **)(this + 4) = pRVar6 + uVar2 * 0x14;
  *(Rect **)(this + 8) = pRVar6 + uVar3 * 0x14;
  ExceptionList = local_10;
  return (Selectable *)(*(int *)this + iVar9);
}


// public: class NavMarker & __thiscall std::vector<class NavMarker,class std::allocator<class
// NavMarker> >::operator[](unsigned int)

NavMarker * __thiscall std::vector<>::operator[](vector<> *this,uint param_1)

{
  return (NavMarker *)(*(int *)this + param_1 * 0x28);
}


// public: __thiscall std::vector<struct JumpGateRoute,class std::allocator<struct JumpGateRoute>
// >::~vector<struct JumpGateRoute,class std::allocator<struct JumpGateRoute> >(void)

void __thiscall std::vector<>::~vector<>(vector<> *this)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  allocator<> *unaff_ESI;
  JumpGateRoute *unaff_EDI;
  void *pvVar3;
  
  if (*(JumpGateRoute **)this != (JumpGateRoute *)0x0) {
    _Destroy_range<>(*(JumpGateRoute **)this,unaff_EDI,unaff_ESI);
    pvVar1 = *(void **)this;
    pnVar2 = (nothrow_t *)(((*(int *)(this + 8) - (int)pvVar1) / 0x14) * 0x14);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar2 = pnVar2 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar2);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// private: void __thiscall std::vector<struct JumpGateRoute,class std::allocator<struct
// JumpGateRoute> >::_Destroy(struct JumpGateRoute *,struct JumpGateRoute *)

void __thiscall
std::vector<>::_Destroy(vector<> *this,JumpGateRoute *param_1,JumpGateRoute *param_2)

{
  JumpGateRoute *unaff_EBP;
  allocator<> *unaff_retaddr;
  
  _Destroy_range<>((JumpGateRoute *)this,unaff_EBP,unaff_retaddr);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: class UI_NavMap * * __thiscall std::vector<class UI_NavMap *,class std::allocator<class
// UI_NavMap *> >::_Emplace_reallocate<class UI_NavMap *>(class UI_NavMap * * const,class UI_NavMap
// * &&)

UI_NavMap ** __thiscall
std::vector<>::_Emplace_reallocate<UI_NavMap*>
          (vector<> *this,UI_NavMap **param_1,UI_NavMap **param_2)

{
  uint uVar1;
  UI_NavMap **ppUVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  nothrow_t *pnVar8;
  void *pvVar9;
  int iVar10;
  
  iVar3 = (int)DAT_0065dab8 - (int)_s_navMaps >> 2;
  iVar10 = (int)param_1 - (int)_s_navMaps;
  if (iVar3 == 0x3fffffff) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar1 = iVar3 + 1;
  uVar7 = (int)DAT_0065dabc - (int)_s_navMaps >> 2;
  uVar4 = uVar1;
  if ((uVar7 <= 0x3fffffff - (uVar7 >> 1)) && (uVar4 = (uVar7 >> 1) + uVar7, uVar4 < uVar1)) {
    uVar4 = uVar1;
  }
  uVar7 = uVar4 * 4;
  if (uVar4 < 0x40000000) {
    uVar4 = uVar7;
    if (0xfff < uVar7) goto LAB_0057ed36;
    if (uVar7 == 0) {
      pvVar9 = (void *)0x0;
    }
    else {
      pvVar9 = operator_new(uVar7);
    }
  }
  else {
    uVar4 = 0xffffffff;
LAB_0057ed36:
    uVar5 = uVar4 + 0x23;
    if (uVar5 <= uVar4) {
      uVar5 = 0xffffffff;
    }
    pvVar6 = operator_new(uVar5);
    if (pvVar6 == (void *)0x0) goto LAB_0057ee1f;
    pvVar9 = (void *)((int)pvVar6 + 0x23U & 0xffffffe0);
    *(void **)((int)pvVar9 - 4) = pvVar6;
  }
  ppUVar2 = (UI_NavMap **)((int)pvVar9 + (iVar10 >> 2) * 4);
  *ppUVar2 = *param_2;
  if (param_1 == DAT_0065dab8) {
    memmove(pvVar9,_s_navMaps,(int)DAT_0065dab8 - (int)_s_navMaps);
  }
  else {
    memmove(pvVar9,_s_navMaps,(int)param_1 - (int)_s_navMaps);
    memmove(ppUVar2 + 1,param_1,(int)DAT_0065dab8 - (int)param_1);
  }
  if (_s_navMaps != (void *)0x0) {
    pnVar8 = (nothrow_t *)((int)DAT_0065dabc - (int)_s_navMaps & 0xfffffffc);
    pvVar6 = _s_navMaps;
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar6 = *(void **)((int)_s_navMaps + -4);
      pnVar8 = pnVar8 + 0x23;
      if (0x1f < (uint)((int)_s_navMaps + (-4 - (int)pvVar6))) {
LAB_0057ee1f:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar6,pnVar8);
  }
  _s_navMaps = pvVar9;
  DAT_0065dab8 = (UI_NavMap **)((int)pvVar9 + uVar1 * 4);
  DAT_0065dabc = (void *)(uVar7 + (int)pvVar9);
  return ppUVar2;
}


// public: struct JumpGateRoute * __thiscall std::vector<struct JumpGateRoute,class
// std::allocator<struct JumpGateRoute> >::_Emplace_reallocate<struct JumpGateRoute const &>(struct
// JumpGateRoute * const,struct JumpGateRoute const &)

JumpGateRoute * __thiscall
std::vector<>::_Emplace_reallocate<>(vector<> *this,JumpGateRoute *param_1,JumpGateRoute *param_2)

{
  JumpGateRoute *pJVar1;
  int iVar2;
  JumpGateRoute *pJVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  nothrow_t *pnVar9;
  JumpGateRoute *pJVar10;
  JumpGateRoute *pJVar11;
  allocator<> *unaff_EDI;
  uint uVar12;
  JumpGateRoute *pJVar13;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cb7f8;
  local_10 = ExceptionList;
  pJVar3 = (JumpGateRoute *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  iVar6 = *(int *)this;
  iVar2 = (*(int *)(this + 4) - iVar6) / 0x14;
  if (iVar2 == 0xccccccc) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar8 = iVar2 + 1;
  uVar4 = (*(int *)(this + 8) - iVar6) / 0x14;
  uVar12 = uVar8;
  if ((uVar4 <= 0xccccccc - (uVar4 >> 1)) && (uVar12 = (uVar4 >> 1) + uVar4, uVar12 < uVar8)) {
    uVar12 = uVar8;
  }
  uVar8 = uVar12 * 0x14;
  if (uVar12 < 0xccccccd) {
    if (0xfff < uVar8) goto LAB_0057eef4;
    if (uVar8 == 0) {
      pJVar10 = (JumpGateRoute *)0x0;
    }
    else {
      pJVar10 = operator_new(uVar8);
    }
  }
  else {
    uVar8 = 0xffffffff;
LAB_0057eef4:
    uVar4 = uVar8 + 0x23;
    if (uVar4 <= uVar8) {
      uVar4 = 0xffffffff;
    }
    pvVar5 = operator_new(uVar4);
    if (pvVar5 == (void *)0x0) goto LAB_0057ef17;
    pJVar10 = (JumpGateRoute *)((int)pvVar5 + 0x23U & 0xffffffe0);
    *(void **)(pJVar10 + -4) = pvVar5;
  }
  local_8 = 0;
  iVar6 = (((int)param_1 - iVar6) / 0x14) * 0x14;
  _eh_vector_copy_constructor_iterator_(pJVar10 + iVar6,param_2,8,2,Vec2_exref,~Vec2_exref);
  *(undefined4 *)(pJVar10 + iVar6 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  pJVar1 = *(JumpGateRoute **)(this + 4);
  if (param_1 == pJVar1) {
    pJVar13 = *(JumpGateRoute **)this;
    local_8 = CONCAT31(local_8._1_3_,1);
    pJVar11 = pJVar10;
    for (; pJVar13 != pJVar1; pJVar13 = pJVar13 + 0x14) {
      _eh_vector_copy_constructor_iterator_(pJVar11,pJVar13,8,2,Vec2_exref,~Vec2_exref);
      *(undefined4 *)(pJVar11 + 0x10) = *(undefined4 *)(pJVar13 + 0x10);
      pJVar11 = pJVar11 + 0x14;
    }
    _Destroy_range<>(pJVar1,pJVar3,unaff_EDI);
  }
  else {
    _Umove(this,*(JumpGateRoute **)this,param_1,pJVar10);
    _Umove(this,param_1,*(JumpGateRoute **)(this + 4),pJVar10 + iVar6 + 0x14);
  }
  if (*(JumpGateRoute **)this != (JumpGateRoute *)0x0) {
    _Destroy_range<>(*(JumpGateRoute **)this,pJVar3,unaff_EDI);
    pvVar5 = *(void **)this;
    pnVar9 = (nothrow_t *)(((*(int *)(this + 8) - *(int *)this) / 0x14) * 0x14);
    pvVar7 = pvVar5;
    if ((nothrow_t *)0xfff < pnVar9) {
      pvVar7 = *(void **)((int)pvVar5 + -4);
      pnVar9 = pnVar9 + 0x23;
      if (0x1f < (uint)((int)pvVar5 + (-4 - (int)pvVar7))) {
LAB_0057ef17:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar9);
  }
  *(JumpGateRoute **)this = pJVar10;
  *(JumpGateRoute **)(this + 4) = pJVar10 + (iVar2 * 5 + 5) * 4;
  *(JumpGateRoute **)(this + 8) = pJVar10 + uVar12 * 0x14;
  ExceptionList = local_10;
  return (JumpGateRoute *)(*(int *)this + iVar6);
}


// private: struct JumpGateRoute * __thiscall std::vector<struct JumpGateRoute,class
// std::allocator<struct JumpGateRoute> >::_Umove(struct JumpGateRoute *,struct JumpGateRoute
// *,struct JumpGateRoute *)

JumpGateRoute * __thiscall
std::vector<>::_Umove
          (vector<> *this,JumpGateRoute *param_1,JumpGateRoute *param_2,JumpGateRoute *param_3)

{
  void **ppvVar1;
  JumpGateRoute *pJVar2;
  JumpGateRoute *extraout_ECX;
  allocator<> *unaff_EDI;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005cb828;
  pJVar2 = (JumpGateRoute *)(___security_cookie ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  ppvVar1 = &local_10;
  local_10 = ExceptionList;
  for (; ExceptionList = ppvVar1, param_1 != param_2; param_1 = param_1 + 0x14) {
    _eh_vector_copy_constructor_iterator_(param_3,param_1,8,2,Vec2_exref,~Vec2_exref);
    *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    param_3 = param_3 + 0x14;
    ppvVar1 = ExceptionList;
    this = (vector<> *)extraout_ECX;
  }
  _Destroy_range<>((JumpGateRoute *)this,pJVar2,unaff_EDI);
  ExceptionList = local_10;
  return param_3;
}


// private: void __thiscall std::vector<struct ModuleRenderData,class std::allocator<struct
// ModuleRenderData> >::_Destroy(struct ModuleRenderData *,struct ModuleRenderData *)

void __thiscall
std::vector<>::_Destroy(vector<> *this,ModuleRenderData *param_1,ModuleRenderData *param_2)

{
  ModuleRenderData *unaff_EBP;
  allocator<> *unaff_retaddr;
  
  _Destroy_range<>((ModuleRenderData *)this,unaff_EBP,unaff_retaddr);
  return;
}


// public: struct ModuleRenderData * __thiscall std::vector<struct ModuleRenderData,class
// std::allocator<struct ModuleRenderData> >::_Emplace_reallocate<struct ModuleRenderData const
// &>(struct ModuleRenderData * const,struct ModuleRenderData const &)

ModuleRenderData * __thiscall
std::vector<>::_Emplace_reallocate<>
          (vector<> *this,ModuleRenderData *param_1,ModuleRenderData *param_2)

{
  int iVar1;
  int iVar2;
  ModuleRenderData *pMVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  ModuleRenderData *pMVar8;
  nothrow_t *pnVar9;
  void *pvVar10;
  ModuleRenderData *pMVar11;
  allocator<> *unaff_EDI;
  ModuleRenderData *pMVar12;
  ModuleRenderData *pMVar13;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cbb00;
  local_10 = ExceptionList;
  pMVar3 = (ModuleRenderData *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  iVar1 = *(int *)this;
  iVar2 = (*(int *)(this + 4) - *(int *)this) / 0x38;
  if (iVar2 == 0x4924924) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar7 = iVar2 + 1;
  uVar5 = (*(int *)(this + 8) - *(int *)this) / 0x38;
  uVar4 = uVar7;
  if ((uVar5 <= 0x4924924 - (uVar5 >> 1)) && (uVar4 = (uVar5 >> 1) + uVar5, uVar4 < uVar7)) {
    uVar4 = uVar7;
  }
  uVar7 = uVar4 * 0x38;
  if (uVar4 < 0x4924925) {
    uVar4 = uVar7;
    if (0xfff < uVar7) goto LAB_005822ad;
    if (uVar7 == 0) {
      pMVar11 = (ModuleRenderData *)0x0;
    }
    else {
      pMVar11 = operator_new(uVar7);
    }
  }
  else {
    uVar4 = 0xffffffff;
LAB_005822ad:
    uVar5 = uVar4 + 0x23;
    if (uVar5 <= uVar4) {
      uVar5 = 0xffffffff;
    }
    pvVar6 = operator_new(uVar5);
    if (pvVar6 == (void *)0x0) goto LAB_005822d0;
    pMVar11 = (ModuleRenderData *)((int)pvVar6 + 0x23U & 0xffffffe0);
    *(void **)(pMVar11 + -4) = pvVar6;
  }
  local_8 = 0;
  pMVar8 = (ModuleRenderData *)((((int)param_1 - iVar1) / 0x38) * 0x38);
  *(undefined4 *)(pMVar8 + (int)pMVar11) = *(undefined4 *)param_2;
  *(undefined4 *)(pMVar8 + 4 + (int)pMVar11) = *(undefined4 *)(param_2 + 4);
  basic_string<>::basic_string<>
            ((basic_string<> *)(pMVar8 + 8 + (int)pMVar11),(basic_string<> *)(param_2 + 8));
  *(undefined4 *)(pMVar8 + 0x20 + (int)pMVar11) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(pMVar8 + 0x24 + (int)pMVar11) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(pMVar8 + 0x28 + (int)pMVar11) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(pMVar8 + 0x2c + (int)pMVar11) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(pMVar8 + 0x30 + (int)pMVar11) = *(undefined4 *)(param_2 + 0x30);
  (pMVar8 + 0x34)[(int)pMVar11] = param_2[0x34];
  pMVar12 = pMVar11;
  pMVar13 = pMVar8;
  if (param_1 != *(ModuleRenderData **)(this + 4)) {
    _Uninitialized_move<>(pMVar11,pMVar8,pMVar3,unaff_EDI);
    pMVar12 = pMVar8 + 0x38 + (int)pMVar11;
  }
  _Uninitialized_move<>(pMVar12,pMVar13,pMVar3,unaff_EDI);
  if (*(ModuleRenderData **)this != (ModuleRenderData *)0x0) {
    _Destroy_range<>(*(ModuleRenderData **)this,pMVar3,unaff_EDI);
    pvVar6 = *(void **)this;
    pnVar9 = (nothrow_t *)(((*(int *)(this + 8) - (int)pvVar6) / 0x38) * 0x38);
    pvVar10 = pvVar6;
    if ((nothrow_t *)0xfff < pnVar9) {
      pvVar10 = *(void **)((int)pvVar6 + -4);
      pnVar9 = pnVar9 + 0x23;
      if (0x1f < (uint)((int)pvVar6 + (-4 - (int)pvVar10))) {
LAB_005822d0:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar9);
  }
  *(ModuleRenderData **)this = pMVar11;
  *(ModuleRenderData **)(this + 4) = pMVar11 + (iVar2 + 1) * 0x38;
  *(ModuleRenderData **)(this + 8) = pMVar11 + uVar7;
  ExceptionList = local_10;
  return pMVar8 + *(int *)this;
}


// public: __thiscall std::vector<struct SensorSelectionElement,class std::allocator<struct
// SensorSelectionElement> >::~vector<struct SensorSelectionElement,class std::allocator<struct
// SensorSelectionElement> >(void)

void __thiscall std::vector<>::~vector<>(vector<> *this)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  allocator<> *unaff_ESI;
  ExtraSpawned *unaff_EDI;
  void *pvVar3;
  
  if (*(ExtraSpawned **)this != (ExtraSpawned *)0x0) {
    _Destroy_range<>(*(ExtraSpawned **)this,unaff_EDI,unaff_ESI);
    pvVar1 = *(void **)this;
    pnVar2 = (nothrow_t *)(((*(int *)(this + 8) - (int)pvVar1) / 0x1c) * 0x1c);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar2 = pnVar2 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar2);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// private: void __thiscall std::vector<struct SensorSelectionElement,class std::allocator<struct
// SensorSelectionElement> >::_Tidy(void)

void __thiscall std::vector<>::_Tidy(vector<> *this)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  allocator<> *unaff_ESI;
  ExtraSpawned *unaff_EDI;
  void *pvVar3;
  
  if (*(ExtraSpawned **)this != (ExtraSpawned *)0x0) {
    _Destroy_range<>(*(ExtraSpawned **)this,unaff_EDI,unaff_ESI);
    pvVar1 = *(void **)this;
    pnVar2 = (nothrow_t *)(((*(int *)(this + 8) - (int)pvVar1) / 0x1c) * 0x1c);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar2 = pnVar2 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar2);
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


// public: struct SensorSelectionElement * __thiscall std::vector<struct
// SensorSelectionElement,class std::allocator<struct SensorSelectionElement>
// >::_Emplace_reallocate<struct SensorSelectionElement>(struct SensorSelectionElement *
// const,struct SensorSelectionElement &&)

SensorSelectionElement * __thiscall
std::vector<>::_Emplace_reallocate<>
          (vector<> *this,SensorSelectionElement *param_1,SensorSelectionElement *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  SensorSelectionElement *pSVar8;
  uint uVar9;
  nothrow_t *pnVar10;
  int iVar11;
  uint uVar12;
  void *pvVar13;
  allocator<> *unaff_ESI;
  SensorSelectionElement *pSVar14;
  SensorSelectionElement *unaff_EDI;
  SensorSelectionElement *pSVar15;
  
  iVar11 = *(int *)this;
  iVar1 = (*(int *)(this + 4) - *(int *)this) / 0x1c;
  if (iVar1 == 0x9249249) {
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar12 = iVar1 + 1;
  uVar9 = (*(int *)(this + 8) - *(int *)this) / 0x1c;
  uVar5 = uVar12;
  if ((uVar9 <= 0x9249249 - (uVar9 >> 1)) && (uVar5 = (uVar9 >> 1) + uVar9, uVar5 < uVar12)) {
    uVar5 = uVar12;
  }
  uVar9 = uVar5 * 0x1c;
  if (uVar5 < 0x924924a) {
    uVar5 = uVar9;
    if (0xfff < uVar9) goto LAB_00588734;
    if (uVar9 == 0) {
      pSVar14 = (SensorSelectionElement *)0x0;
    }
    else {
      pSVar14 = operator_new(uVar9);
    }
  }
  else {
    uVar5 = 0xffffffff;
LAB_00588734:
    uVar6 = uVar5 + 0x23;
    if (uVar6 <= uVar5) {
      uVar6 = 0xffffffff;
    }
    pvVar7 = operator_new(uVar6);
    if (pvVar7 == (void *)0x0) goto LAB_00588873;
    pSVar14 = (SensorSelectionElement *)((int)pvVar7 + 0x23U & 0xffffffe0);
    *(void **)(pSVar14 + -4) = pvVar7;
  }
  iVar11 = (((int)param_1 - iVar11) / 0x1c) * 0x1c;
  pSVar14[iVar11] = *param_2;
  *(undefined4 *)(pSVar14 + iVar11 + 0x14) = 0;
  *(undefined4 *)(pSVar14 + iVar11 + 0x18) = 0;
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  pSVar15 = pSVar14 + iVar11 + 4;
  *(undefined4 *)pSVar15 = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(pSVar15 + 4) = uVar2;
  *(undefined4 *)(pSVar15 + 8) = uVar3;
  *(undefined4 *)(pSVar15 + 0xc) = uVar4;
  *(undefined8 *)(pSVar14 + iVar11 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xf;
  param_2[4] = (SensorSelectionElement)0x0;
  pSVar15 = *(SensorSelectionElement **)this;
  pSVar8 = pSVar14;
  if (param_1 != *(SensorSelectionElement **)(this + 4)) {
    _Uninitialized_move<>(pSVar14,pSVar15,unaff_EDI,unaff_ESI);
    pSVar8 = pSVar14 + iVar11 + 0x1c;
  }
  _Uninitialized_move<>(pSVar8,pSVar15,unaff_EDI,unaff_ESI);
  if (*(ExtraSpawned **)this != (ExtraSpawned *)0x0) {
    _Destroy_range<>(*(ExtraSpawned **)this,(ExtraSpawned *)unaff_EDI,(allocator<> *)unaff_ESI);
    pvVar7 = *(void **)this;
    pnVar10 = (nothrow_t *)(((*(int *)(this + 8) - (int)pvVar7) / 0x1c) * 0x1c);
    pvVar13 = pvVar7;
    if ((nothrow_t *)0xfff < pnVar10) {
      pvVar13 = *(void **)((int)pvVar7 + -4);
      pnVar10 = pnVar10 + 0x23;
      if (0x1f < (uint)((int)pvVar7 + (-4 - (int)pvVar13))) {
LAB_00588873:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar13,pnVar10);
  }
  *(SensorSelectionElement **)this = pSVar14;
  *(SensorSelectionElement **)(this + 4) = pSVar14 + uVar12 * 0x1c;
  *(SensorSelectionElement **)(this + 8) = pSVar14 + uVar9;
  return (SensorSelectionElement *)(*(int *)this + iVar11);
}


// private: void __thiscall std::vector<struct SensorSelectionElement,class std::allocator<struct
// SensorSelectionElement> >::_Assign_range<struct SensorSelectionElement *>(struct
// SensorSelectionElement *,struct SensorSelectionElement *,struct std::forward_iterator_tag)

void __thiscall
std::vector<>::_Assign_range<>
          (vector<> *this,SensorSelectionElement *param_1,SensorSelectionElement *param_2)

{
  SensorSelectionElement *pSVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  SensorSelectionElement *pSVar6;
  nothrow_t *pnVar7;
  uint uVar8;
  allocator<> *unaff_ESI;
  ExtraSpawned *unaff_EDI;
  
  uVar3 = ((int)param_2 - (int)param_1) / 0x1c;
  uVar8 = (*(int *)(this + 4) - *(int *)this) / 0x1c;
  uVar2 = (*(int *)(this + 8) - *(int *)this) / 0x1c;
  if (uVar3 <= uVar2) {
    pSVar6 = *(SensorSelectionElement **)this;
    if (uVar3 <= uVar8) {
      pSVar1 = pSVar6 + uVar3 * 0x1c;
      _Copy_unchecked<>(pSVar6,(SensorSelectionElement *)unaff_EDI,
                        (SensorSelectionElement *)unaff_ESI);
      _Destroy_range<>((ExtraSpawned *)pSVar6,unaff_EDI,unaff_ESI);
      *(SensorSelectionElement **)(this + 4) = pSVar1;
      return;
    }
    _Copy_unchecked<>(pSVar6,(SensorSelectionElement *)unaff_EDI,(SensorSelectionElement *)unaff_ESI
                     );
    pSVar6 = _Ucopy<>(this,param_1 + uVar8 * 0x1c,param_2,*(SensorSelectionElement **)(this + 4));
    *(SensorSelectionElement **)(this + 4) = pSVar6;
    return;
  }
  if (0x9249249 < uVar3) {
LAB_00588a52:
                    // WARNING: Subroutine does not return
    vector<>::_Xlength();
  }
  uVar8 = uVar3;
  if ((uVar2 <= 0x9249249 - (uVar2 >> 1)) && (uVar8 = (uVar2 >> 1) + uVar2, uVar8 < uVar3)) {
    uVar8 = uVar3;
  }
  if (*(ExtraSpawned **)this != (ExtraSpawned *)0x0) {
    _Destroy_range<>(*(ExtraSpawned **)this,unaff_EDI,unaff_ESI);
    pvVar5 = *(void **)this;
    pnVar7 = (nothrow_t *)(uVar2 * 0x1c);
    pvVar4 = pvVar5;
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar4 = *(void **)((int)pvVar5 + -4);
      pnVar7 = pnVar7 + 0x23;
      if (0x1f < (uint)((int)pvVar5 + (-4 - (int)pvVar4))) goto LAB_005889a3;
    }
    operator_delete(pvVar4,pnVar7);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  if (uVar8 != 0) {
    if (0x9249249 < uVar8) goto LAB_00588a52;
    uVar8 = uVar8 * 0x1c;
    if (uVar8 < 0x1000) {
      if (uVar8 == 0) {
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar5 = operator_new(uVar8);
      }
    }
    else {
      uVar3 = uVar8 + 0x23;
      if (uVar3 <= uVar8) {
        uVar3 = 0xffffffff;
      }
      pvVar4 = operator_new(uVar3);
      if (pvVar4 == (void *)0x0) {
LAB_005889a3:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      pvVar5 = (void *)((int)pvVar4 + 0x23U & 0xffffffe0);
      *(void **)((int)pvVar5 - 4) = pvVar4;
    }
    *(void **)this = pvVar5;
    *(void **)(this + 4) = pvVar5;
    *(uint *)(this + 8) = *(int *)this + uVar8;
  }
  pSVar6 = _Ucopy<>(this,param_1,param_2,*(SensorSelectionElement **)this);
  *(SensorSelectionElement **)(this + 4) = pSVar6;
  return;
}


// private: struct SensorSelectionElement * __thiscall std::vector<struct
// SensorSelectionElement,class std::allocator<struct SensorSelectionElement> >::_Ucopy<struct
// SensorSelectionElement *>(struct SensorSelectionElement *,struct SensorSelectionElement *,struct
// SensorSelectionElement *)

SensorSelectionElement * __thiscall
std::vector<>::_Ucopy<>
          (vector<> *this,SensorSelectionElement *param_1,SensorSelectionElement *param_2,
          SensorSelectionElement *param_3)

{
  void **ppvVar1;
  ExtraSpawned *pEVar2;
  ExtraSpawned *extraout_ECX;
  allocator<> *unaff_EDI;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005cc338;
  pEVar2 = (ExtraSpawned *)(___security_cookie ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  ppvVar1 = &local_10;
  local_10 = ExceptionList;
  for (; ExceptionList = ppvVar1, param_1 != param_2; param_1 = param_1 + 0x1c) {
    *param_3 = *param_1;
    basic_string<>::basic_string<>((basic_string<> *)(param_3 + 4),(basic_string<> *)(param_1 + 4));
    param_3 = param_3 + 0x1c;
    ppvVar1 = ExceptionList;
    this = (vector<> *)extraout_ECX;
  }
  _Destroy_range<>((ExtraSpawned *)this,pEVar2,unaff_EDI);
  ExceptionList = local_10;
  return param_3;
}


// private: void __thiscall std::vector<class PathNode *,class std::allocator<class PathNode *>
// >::_Reallocate_exactly(unsigned int)

void __thiscall std::vector<>::_Reallocate_exactly(vector<> *this,uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  PathNode *pPVar4;
  uint uVar5;
  PathNode **ppPVar6;
  
  uVar5 = param_1 * 4;
  iVar1 = *(int *)(this + 4);
  iVar2 = *(int *)this;
  if (param_1 < 0x40000000) {
    if (uVar5 < 0x1000) {
      if (uVar5 == 0) {
        ppPVar6 = (PathNode **)0x0;
      }
      else {
        ppPVar6 = operator_new(uVar5);
      }
      goto LAB_0059243a;
    }
  }
  else {
    uVar5 = 0xffffffff;
  }
  uVar3 = uVar5 + 0x23;
  if (uVar3 <= uVar5) {
    uVar3 = 0xffffffff;
  }
  pPVar4 = operator_new(uVar3);
  if (pPVar4 == (PathNode *)0x0) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  ppPVar6 = (PathNode **)((uint)(pPVar4 + 0x23) & 0xffffffe0);
  ppPVar6[-1] = pPVar4;
LAB_0059243a:
  memmove(ppPVar6,*(void **)this,*(int *)(this + 4) - (int)*(void **)this);
  _Change_array(this,ppPVar6,iVar1 - iVar2 >> 2,param_1);
  return;
}
