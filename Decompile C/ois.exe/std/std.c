#include "../ois.exe.h"


// void __cdecl std::_Adjust_manually_vector_aligned(void * &,unsigned int &)

void __cdecl std::_Adjust_manually_vector_aligned(void **param_1,uint *param_2)

{
  int iVar1;
  int *in_ECX;
  int *in_EDX;
  
  *in_EDX = *in_EDX + 0x23;
  iVar1 = *(int *)(*in_ECX + -4);
  if ((*in_ECX - iVar1) - 4U < 0x20) {
    *in_ECX = iVar1;
    return;
  }
                    // WARNING: Could not recover jumptable at 0x00401a45. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _invalid_parameter_noinfo_noreturn();
  return;
}


// void __cdecl std::_Deallocate<8,0>(void *,unsigned int)

void __cdecl std::_Deallocate<8,0>(void *param_1,uint param_2)

{
  void *in_ECX;
  void *pvVar1;
  nothrow_t *in_EDX;
  
  pvVar1 = in_ECX;
  if ((nothrow_t *)0xfff < in_EDX) {
    pvVar1 = *(void **)((int)in_ECX + -4);
    in_EDX = in_EDX + 0x23;
    if (0x1f < (uint)((int)in_ECX + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pvVar1,in_EDX);
  return;
}


// void __cdecl std::_Destroy_range<class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > >(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > *,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > *,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > &)

void __cdecl
std::_Destroy_range<>(basic_string<> *param_1,basic_string<> *param_2,allocator<> *param_3)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  int *in_ECX;
  nothrow_t *pnVar4;
  int *in_EDX;
  
  do {
    if (in_ECX == in_EDX) {
      return;
    }
    uVar1 = in_ECX[5];
    if (0xf < uVar1) {
      pvVar2 = (void *)*in_ECX;
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
    in_ECX[4] = 0;
    in_ECX[5] = 0xf;
    *(undefined1 *)in_ECX = 0;
    in_ECX = in_ECX + 6;
  } while( true );
}


// bool __cdecl std::operator!=<char,struct std::char_traits<char>,class std::allocator<char>
// >(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const
// &,char const * const)

bool __cdecl std::operator!=<>(basic_string<> *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *in_EDX;
  uint unaff_ESI;
  char *unaff_EDI;
  
  pcVar3 = in_EDX;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  bVar2 = _Traits_equal<>(in_EDX,(int)pcVar3 - (int)(in_EDX + 1),unaff_EDI,unaff_ESI);
  return !bVar2;
}


// bool __cdecl std::operator==<char,struct std::char_traits<char>,class std::allocator<char>
// >(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const
// &,char const * const)

bool __cdecl std::operator==<>(basic_string<> *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  char *in_EDX;
  uint unaff_ESI;
  char *pcVar3;
  char *unaff_EDI;
  
  pcVar3 = in_EDX;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  bVar2 = _Traits_equal<>(in_EDX,(int)pcVar3 - (int)(in_EDX + 1),unaff_EDI,unaff_ESI);
  return bVar2;
}


// bool __cdecl std::_Traits_equal<struct std::char_traits<char> >(char const * const,unsigned
// int,char const * const,unsigned int)

bool __cdecl std::_Traits_equal<>(char *param_1,uint param_2,char *param_3,uint param_4)

{
  uint uVar1;
  byte *in_ECX;
  uint in_EDX;
  bool bVar2;
  
  if (in_EDX != param_2) {
    return false;
  }
  while (uVar1 = in_EDX - 4, 3 < in_EDX) {
    if (*(int *)in_ECX != *(int *)param_1) goto LAB_00403507;
    in_ECX = in_ECX + 4;
    param_1 = param_1 + 4;
    in_EDX = uVar1;
  }
  if (uVar1 != 0xfffffffc) {
LAB_00403507:
    bVar2 = *in_ECX < (byte)*param_1;
    if ((*in_ECX != *param_1) ||
       ((uVar1 != 0xfffffffd &&
        ((bVar2 = in_ECX[1] < (byte)param_1[1], in_ECX[1] != param_1[1] ||
         ((uVar1 != 0xfffffffe &&
          ((bVar2 = in_ECX[2] < (byte)param_1[2], in_ECX[2] != param_1[2] ||
           ((uVar1 != 0xffffffff && (bVar2 = in_ECX[3] < (byte)param_1[3], in_ECX[3] != param_1[3]))
           )))))))))) {
      uVar1 = -(uint)bVar2 | 1;
      goto LAB_0040353d;
    }
  }
  uVar1 = 0;
LAB_0040353d:
  if (uVar1 != 0) {
    return false;
  }
  return true;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __cdecl
// std::_Uninitialized_move<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > *,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > *,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > >(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > * const,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > * const,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > *,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > &)

basic_string<> * __cdecl
std::_Uninitialized_move<>
          (basic_string<> *param_1,basic_string<> *param_2,basic_string<> *param_3,
          allocator<> *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  basic_string<> *in_ECX;
  basic_string<> *pbVar4;
  basic_string<> *in_EDX;
  allocator<> *unaff_EBP;
  basic_string<> *unaff_ESI;
  basic_string<> *pbVar5;
  
  pbVar4 = in_ECX;
  pbVar5 = param_1;
  if (in_ECX != in_EDX) {
    do {
      *(undefined4 *)(pbVar5 + 0x10) = 0;
      *(undefined4 *)(pbVar4 + (int)(param_1 + (0x14 - (int)in_ECX))) = 0;
      uVar1 = *(undefined4 *)(pbVar4 + 4);
      uVar2 = *(undefined4 *)(pbVar4 + 8);
      uVar3 = *(undefined4 *)(pbVar4 + 0xc);
      *(undefined4 *)pbVar5 = *(undefined4 *)pbVar4;
      *(undefined4 *)(pbVar5 + 4) = uVar1;
      *(undefined4 *)(pbVar5 + 8) = uVar2;
      *(undefined4 *)(pbVar5 + 0xc) = uVar3;
      *(undefined8 *)(pbVar5 + 0x10) = *(undefined8 *)(pbVar4 + 0x10);
      pbVar5 = pbVar5 + 0x18;
      *(undefined4 *)(pbVar4 + 0x10) = 0;
      *(undefined4 *)(pbVar4 + 0x14) = 0xf;
      *pbVar4 = (basic_string<>)0x0;
      pbVar4 = pbVar4 + 0x18;
    } while (pbVar4 != in_EDX);
  }
  _Destroy_range<>(pbVar4,unaff_ESI,unaff_EBP);
  return (basic_string<> *)pbVar5;
}


// bool __cdecl std::operator!=<char,struct std::char_traits<char>,class std::allocator<char>
// >(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const
// &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const
// &)

bool __cdecl std::operator!=<>(basic_string<> *param_1,basic_string<> *param_2)

{
  bool bVar1;
  char *in_EDX;
  char *unaff_ESI;
  char *pcVar2;
  uint unaff_retaddr;
  
  pcVar2 = in_EDX;
  if (0xf < *(uint *)(in_EDX + 0x14)) {
    pcVar2 = *(char **)in_EDX;
  }
  bVar1 = _Traits_equal<>(pcVar2,*(uint *)(in_EDX + 0x10),unaff_ESI,unaff_retaddr);
  return !bVar1;
}


// class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > > __cdecl
// std::transform<class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char>
// > >,class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > >,int
// (__cdecl*)(int)>(class std::_String_iterator<class std::_String_val<struct
// std::_Simple_types<char> > >,class std::_String_iterator<class std::_String_val<struct
// std::_Simple_types<char> > >,class std::_String_iterator<class std::_String_val<struct
// std::_Simple_types<char> > >,int (__cdecl*)(int))

void __cdecl std::transform<>(char *param_1,char *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *in_ECX;
  int iVar2;
  code *in_EDX;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = (int)param_2 - (int)param_1;
  if (param_2 < param_1) {
    iVar2 = 0;
  }
  if (iVar2 == 0) {
    *in_ECX = param_3;
    return;
  }
  do {
    uVar1 = (*in_EDX)((int)*param_1);
    *param_3 = uVar1;
    param_1 = param_1 + 1;
    iVar3 = iVar3 + 1;
    param_3 = param_3 + 1;
  } while (iVar3 != iVar2);
  *in_ECX = param_3;
  return;
}


// class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > > __cdecl
// std::remove<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > >,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >(class
// std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > >,class
// std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > >,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)

void __cdecl std::remove<>(undefined4 param_1,word *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  word *pwVar4;
  word *pwVar5;
  bool bVar6;
  word *this;
  basic_string<> *pbVar7;
  undefined4 *in_ECX;
  basic_string<> *in_EDX;
  basic_string<> *unaff_ESI;
  basic_string<> *unaff_EDI;
  
  this = (word *)_Find_unchecked<>(in_EDX,unaff_EDI,unaff_ESI);
  pwVar4 = this;
  if (this != param_2) {
    while (pwVar5 = pwVar4, pwVar4 = pwVar5 + 0x18, pwVar4 != param_2) {
      pbVar7 = in_EDX;
      if (0xf < *(uint *)(in_EDX + 0x14)) {
        pbVar7 = *(basic_string<> **)in_EDX;
      }
      bVar6 = _Traits_equal<>((char *)pbVar7,*(uint *)(in_EDX + 0x10),(char *)unaff_EDI,
                              (uint)unaff_ESI);
      if (!bVar6) {
        if (this != pwVar4) {
          word::~word(this);
          uVar1 = *(undefined4 *)(pwVar5 + 0x1c);
          uVar2 = *(undefined4 *)(pwVar5 + 0x20);
          uVar3 = *(undefined4 *)(pwVar5 + 0x24);
          *(undefined4 *)this = *(undefined4 *)pwVar4;
          *(undefined4 *)(this + 4) = uVar1;
          *(undefined4 *)(this + 8) = uVar2;
          *(undefined4 *)(this + 0xc) = uVar3;
          uVar1 = *(undefined4 *)(pwVar5 + 0x2c);
          *(undefined4 *)(this + 0x10) = *(undefined4 *)(pwVar5 + 0x28);
          *(undefined4 *)(this + 0x14) = uVar1;
          *(undefined4 *)(pwVar5 + 0x28) = 0;
          *(undefined4 *)(pwVar5 + 0x2c) = 0xf;
          *pwVar4 = (word)0x0;
        }
        this = this + 0x18;
      }
    }
  }
  *in_ECX = this;
  return;
}


// bool __cdecl std::operator==<char,struct std::char_traits<char>,class std::allocator<char> >(char
// const * const,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const &)

bool __cdecl std::operator==<>(char *param_1,basic_string<> *param_2)

{
  char cVar1;
  bool bVar2;
  char *in_ECX;
  uint unaff_ESI;
  char *pcVar3;
  char *unaff_EDI;
  
  pcVar3 = in_ECX;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  bVar2 = _Traits_equal<>(in_ECX,(int)pcVar3 - (int)(in_ECX + 1),unaff_EDI,unaff_ESI);
  return bVar2;
}


// class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class SoundLet *> >
// > __cdecl std::remove<class std::_Vector_iterator<class std::_Vector_val<struct
// std::_Simple_types<class SoundLet *> > >,class SoundLet *>(class std::_Vector_iterator<class
// std::_Vector_val<struct std::_Simple_types<class SoundLet *> > >,class
// std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class SoundLet *> >
// >,class SoundLet * const &)

undefined4 * __cdecl std::remove<>(int *param_1,int *param_2)

{
  undefined4 *in_ECX;
  int *piVar1;
  int *in_EDX;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != param_2) {
    do {
      if (*param_1 == *in_EDX) break;
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
    if (param_1 != param_2) {
      piVar1 = param_1 + 1;
      uVar2 = 0;
      uVar3 = (uint)((int)param_2 + (3 - (int)piVar1)) >> 2;
      if (param_2 < piVar1) {
        uVar3 = 0;
      }
      if (uVar3 != 0) {
        do {
          if (*piVar1 != *in_EDX) {
            *param_1 = *piVar1;
            param_1 = param_1 + 1;
          }
          uVar2 = uVar2 + 1;
          piVar1 = piVar1 + 1;
        } while (uVar2 != uVar3);
      }
      *in_ECX = param_1;
      return in_ECX;
    }
  }
  *in_ECX = param_1;
  return in_ECX;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __cdecl
// std::_Move_unchecked<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > *,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > *>(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > *,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > *,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > *)

basic_string<> * __cdecl
std::_Move_unchecked<>(basic_string<> *param_1,basic_string<> *param_2,basic_string<> *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  word *in_ECX;
  word *in_EDX;
  
  for (; in_ECX != in_EDX; in_ECX = in_ECX + 0x18) {
    if (param_1 != (basic_string<> *)in_ECX) {
      word::~word((word *)param_1);
      uVar1 = *(undefined4 *)(in_ECX + 4);
      uVar2 = *(undefined4 *)(in_ECX + 8);
      uVar3 = *(undefined4 *)(in_ECX + 0xc);
      *(undefined4 *)param_1 = *(undefined4 *)in_ECX;
      *(undefined4 *)(param_1 + 4) = uVar1;
      *(undefined4 *)(param_1 + 8) = uVar2;
      *(undefined4 *)(param_1 + 0xc) = uVar3;
      uVar1 = *(undefined4 *)(in_ECX + 0x14);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(in_ECX + 0x10);
      *(undefined4 *)(param_1 + 0x14) = uVar1;
      *(undefined4 *)(in_ECX + 0x10) = 0;
      *(undefined4 *)(in_ECX + 0x14) = 0xf;
      *in_ECX = (word)0x0;
    }
    param_1 = param_1 + 0x18;
  }
  return (basic_string<> *)param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __cdecl
// std::_Find_unchecked<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > *,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > >(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > * const,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > * const,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const &)

basic_string<> * __cdecl
std::_Find_unchecked<>(basic_string<> *param_1,basic_string<> *param_2,basic_string<> *param_3)

{
  bool bVar1;
  basic_string<> *pbVar2;
  basic_string<> *in_ECX;
  basic_string<> *in_EDX;
  uint unaff_ESI;
  char *unaff_EDI;
  
  if (in_ECX != in_EDX) {
    do {
      pbVar2 = param_1;
      if (0xf < *(uint *)(param_1 + 0x14)) {
        pbVar2 = *(basic_string<> **)param_1;
      }
      bVar1 = _Traits_equal<>((char *)pbVar2,*(uint *)(param_1 + 0x10),unaff_EDI,unaff_ESI);
    } while ((!bVar1) && (in_ECX = in_ECX + 0x18, in_ECX != in_EDX));
    return in_ECX;
  }
  return in_ECX;
}


// void __cdecl std::_Destroy_range<class std::allocator<struct InputCommand> >(struct InputCommand
// *,struct InputCommand *,class std::allocator<struct InputCommand> &)

void __cdecl std::_Destroy_range<>(InputCommand *param_1,InputCommand *param_2,allocator<> *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  undefined4 *puVar4;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2730;
  local_10 = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (in_ECX != in_EDX) {
    puVar4 = in_ECX + 0xb;
    do {
      local_8 = 0;
      piVar2 = (int *)*puVar4;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x10))(piVar2 != puVar4 + -9,uVar3);
        *puVar4 = 0;
      }
      puVar1 = puVar4 + 3;
      puVar4 = puVar4 + 0xe;
    } while (puVar1 != in_EDX);
  }
  ExceptionList = local_10;
  return;
}


// class std::_Func_impl_no_alloc<class std::function<bool __cdecl(class Ship
// *,int,int,int)>,bool,class Ship *,double,double,double> * __cdecl std::_Global_new<class
// std::_Func_impl_no_alloc<class std::function<bool __cdecl(class Ship *,int,int,int)>,bool,class
// Ship *,double,double,double>,class std::function<bool __cdecl(class Ship *,int,int,int)> const
// &>(class std::function<bool __cdecl(class Ship *,int,int,int)> const &)

_Func_impl_no_alloc<> * __cdecl std::_Global_new<>(function<> *param_1)

{
  _Func_impl_no_alloc<> *p_Var1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b2b18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  p_Var1 = operator_new(0x30);
  *(undefined ***)p_Var1 = _Func_impl_no_alloc<>::vftable;
  *(undefined4 *)(p_Var1 + 0x2c) = 0;
  local_8 = 1;
  if (*(undefined4 **)(in_ECX + 0x24) != (undefined4 *)0x0) {
    uVar2 = (**(code **)**(undefined4 **)(in_ECX + 0x24))(p_Var1 + 8);
    *(undefined4 *)(p_Var1 + 0x2c) = uVar2;
  }
  ExceptionList = local_10;
  return p_Var1;
}


// class std::_Func_impl_no_alloc<class std::function<bool __cdecl(class Ship
// *,int,int,int)>,bool,class Ship *,double,double,double> * __cdecl std::_Global_new<class
// std::_Func_impl_no_alloc<class std::function<bool __cdecl(class Ship *,int,int,int)>,bool,class
// Ship *,double,double,double>,class std::function<bool __cdecl(class Ship *,int,int,int)> >(class
// std::function<bool __cdecl(class Ship *,int,int,int)> &&)

_Func_impl_no_alloc<> * __cdecl std::_Global_new<>(function<> *param_1)

{
  _Func_impl_no_alloc<> *this;
  function<> *in_ECX;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b2b40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = operator_new(0x30);
  local_8 = 0;
  _Func_impl_no_alloc<>::_Func_impl_no_alloc<><>(this,in_ECX);
  ExceptionList = local_10;
  return this;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __cdecl
// std::_Copy_unchecked<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > *,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > *>(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > *,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > *,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > *)

basic_string<> * __cdecl
std::_Copy_unchecked<>(basic_string<> *param_1,basic_string<> *param_2,basic_string<> *param_3)

{
  basic_string<> *pbVar1;
  basic_string<> *in_ECX;
  basic_string<> *in_EDX;
  
  for (; in_ECX != in_EDX; in_ECX = in_ECX + 0x18) {
    if (param_1 != (basic_string<> *)in_ECX) {
      pbVar1 = in_ECX;
      if (0xf < *(uint *)(in_ECX + 0x14)) {
        pbVar1 = *(basic_string<> **)in_ECX;
      }
      basic_string<>::assign((basic_string<> *)param_1,(char *)pbVar1,*(uint *)(in_ECX + 0x10));
    }
    param_1 = param_1 + 0x18;
  }
  return (basic_string<> *)param_1;
}


// unsigned int __cdecl std::_Traits_find<struct std::char_traits<char> >(char const *
// const,unsigned int,unsigned int,char const * const,unsigned int)

uint __cdecl std::_Traits_find<>(char *param_1,uint param_2,uint param_3,char *param_4,uint param_5)

{
  char cVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int in_ECX;
  uint in_EDX;
  bool bVar8;
  
  if ((param_3 <= in_EDX) && (param_1 <= (char *)(in_EDX - param_3))) {
    if (param_3 == 0) {
      return (uint)param_1;
    }
    iVar5 = (in_ECX - param_3) + in_EDX + 1;
    cVar1 = *(char *)param_2;
    for (pbVar6 = (byte *)memchr(param_1 + in_ECX,(int)cVar1,iVar5 - (int)(param_1 + in_ECX));
        pbVar3 = (byte *)param_2, pbVar4 = pbVar6, uVar7 = param_3, pbVar6 != (byte *)0x0;
        pbVar6 = (byte *)memchr(pbVar6 + 1,(int)cVar1,iVar5 - (int)(pbVar6 + 1))) {
      while (uVar2 = uVar7 - 4, 3 < uVar7) {
        if (*(int *)pbVar4 != *(int *)pbVar3) goto LAB_0042f106;
        pbVar3 = pbVar3 + 4;
        pbVar4 = pbVar4 + 4;
        uVar7 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_0042f13a:
        uVar7 = 0;
      }
      else {
LAB_0042f106:
        bVar8 = *pbVar4 < *pbVar3;
        if ((*pbVar4 == *pbVar3) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar8 = pbVar4[1] < pbVar3[1], pbVar4[1] == pbVar3[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar8 = pbVar4[2] < pbVar3[2], pbVar4[2] == pbVar3[2] &&
               ((uVar2 == 0xffffffff || (bVar8 = pbVar4[3] < pbVar3[3], pbVar4[3] == pbVar3[3]))))))
             )))))) goto LAB_0042f13a;
        uVar7 = -(uint)bVar8 | 1;
      }
      if (uVar7 == 0) {
        return (uint)(pbVar6 + -in_ECX);
      }
    }
  }
  return 0xffffffff;
}


// class PrivateCommElement * __cdecl std::_Uninitialized_move<class PrivateCommElement *,class
// PrivateCommElement *,class std::allocator<class PrivateCommElement> >(class PrivateCommElement *
// const,class PrivateCommElement * const,class PrivateCommElement *,class std::allocator<class
// PrivateCommElement> &)

PrivateCommElement * __cdecl
std::_Uninitialized_move<>
          (PrivateCommElement *param_1,PrivateCommElement *param_2,PrivateCommElement *param_3,
          allocator<> *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  undefined4 *puVar6;
  PrivateCommElement *pPVar7;
  PrivateCommElement *pPVar8;
  
  pPVar8 = param_1;
  if (in_ECX != in_EDX) {
    puVar6 = in_ECX + 9;
    pPVar7 = param_1 + 0x28;
    do {
      puVar1 = puVar6 + 0xe;
      *(undefined4 *)pPVar8 = puVar6[-9];
      puVar2 = puVar6 + 5;
      *(undefined4 *)(pPVar7 + -0x24) = puVar6[-8];
      pPVar8 = pPVar8 + 0x38;
      *(undefined4 *)(pPVar7 + -0x10) = 0;
      *(undefined4 *)(pPVar7 + -0xc) = 0;
      uVar3 = puVar6[-6];
      uVar4 = puVar6[-5];
      uVar5 = puVar6[-4];
      *(undefined4 *)(pPVar7 + -0x20) = puVar6[-7];
      *(undefined4 *)(pPVar7 + -0x1c) = uVar3;
      *(undefined4 *)(pPVar7 + -0x18) = uVar4;
      *(undefined4 *)(pPVar7 + -0x14) = uVar5;
      *(undefined8 *)(pPVar7 + -0x10) = *(undefined8 *)(puVar6 + -3);
      puVar6[-3] = 0;
      puVar6[-2] = 0xf;
      *(undefined1 *)(puVar6 + -7) = 0;
      *(undefined4 *)(pPVar7 + -8) = 0;
      *(undefined4 *)(param_1 + (-0x38 - (int)in_ECX) + (int)puVar1) = 0;
      *(undefined4 *)pPVar7 = 0;
      *(undefined4 *)(pPVar7 + -8) = puVar6[-1];
      *(undefined4 *)(param_1 + (-0x38 - (int)in_ECX) + (int)puVar1) = *puVar6;
      *(undefined4 *)pPVar7 = puVar6[1];
      puVar6[-1] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      *(undefined4 *)(pPVar7 + 4) = 0;
      *(undefined4 *)(pPVar7 + 8) = 0;
      *(undefined4 *)(pPVar7 + 0xc) = 0;
      *(undefined4 *)(pPVar7 + 4) = puVar6[2];
      *(undefined4 *)(pPVar7 + 8) = puVar6[3];
      *(undefined4 *)(pPVar7 + 0xc) = puVar6[4];
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6 = puVar1;
      pPVar7 = pPVar7 + 0x38;
    } while (puVar2 != in_EDX);
  }
  return pPVar8;
}


// void __cdecl std::_Destroy_range<class std::allocator<class NavMarker> >(class NavMarker *,class
// NavMarker *,class std::allocator<class NavMarker> &)

void __cdecl
std::_Destroy_range<>(NavMarker *param_1,NavMarker *param_2,allocator<NavMarker> *param_3)

{
  uint *puVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  uint *in_ECX;
  nothrow_t *pnVar5;
  uint *in_EDX;
  uint *puVar6;
  
  if (in_ECX != in_EDX) {
    puVar6 = in_ECX + 7;
    do {
      uVar2 = *puVar6;
      if (0xf < uVar2) {
        pvVar3 = (void *)puVar6[-5];
        pnVar5 = (nothrow_t *)(uVar2 + 1);
        pvVar4 = pvVar3;
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)pvVar3 - 4);
          pnVar5 = (nothrow_t *)(uVar2 + 0x24);
          if (0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      puVar6[-1] = 0;
      *puVar6 = 0xf;
      *(undefined1 *)(puVar6 + -5) = 0;
      puVar1 = puVar6 + 3;
      puVar6 = puVar6 + 10;
    } while (puVar1 != in_EDX);
  }
  return;
}


// void __cdecl std::_Destroy_range<class std::allocator<struct Destination> >(struct Destination
// *,struct Destination *,class std::allocator<struct Destination> &)

void __cdecl std::_Destroy_range<>(Destination *param_1,Destination *param_2,allocator<> *param_3)

{
  uint *puVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  uint *in_ECX;
  nothrow_t *pnVar5;
  uint *in_EDX;
  uint *puVar6;
  
  if (in_ECX != in_EDX) {
    puVar6 = in_ECX + 7;
    do {
      uVar2 = *puVar6;
      if (0xf < uVar2) {
        pvVar3 = (void *)puVar6[-5];
        pnVar5 = (nothrow_t *)(uVar2 + 1);
        pvVar4 = pvVar3;
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)pvVar3 - 4);
          pnVar5 = (nothrow_t *)(uVar2 + 0x24);
          if (0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      puVar6[-1] = 0;
      *puVar6 = 0xf;
      *(undefined1 *)(puVar6 + -5) = 0;
      puVar1 = puVar6 + 2;
      puVar6 = puVar6 + 9;
    } while (puVar1 != in_EDX);
  }
  return;
}


// void __cdecl std::_Destroy_range<class std::allocator<struct DockProcessElement> >(struct
// DockProcessElement *,struct DockProcessElement *,class std::allocator<struct DockProcessElement>
// &)

void __cdecl
std::_Destroy_range<>(DockProcessElement *param_1,DockProcessElement *param_2,allocator<> *param_3)

{
  uint *puVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  uint *in_ECX;
  nothrow_t *pnVar5;
  uint *in_EDX;
  uint *puVar6;
  
  if (in_ECX != in_EDX) {
    puVar6 = in_ECX + 8;
    do {
      uVar2 = *puVar6;
      if (0xf < uVar2) {
        pvVar3 = (void *)puVar6[-5];
        pnVar5 = (nothrow_t *)(uVar2 + 1);
        pvVar4 = pvVar3;
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)pvVar3 - 4);
          pnVar5 = (nothrow_t *)(uVar2 + 0x24);
          if (0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      puVar6[-1] = 0;
      *puVar6 = 0xf;
      *(undefined1 *)(puVar6 + -5) = 0;
      puVar1 = puVar6 + 3;
      puVar6 = puVar6 + 0xb;
    } while (puVar1 != in_EDX);
  }
  return;
}


// struct DockProcessElement * __cdecl std::_Uninitialized_move<struct DockProcessElement *,struct
// DockProcessElement *,class std::allocator<struct DockProcessElement> >(struct DockProcessElement
// * const,struct DockProcessElement * const,struct DockProcessElement *,class std::allocator<struct
// DockProcessElement> &)

DockProcessElement * __cdecl
std::_Uninitialized_move<>
          (DockProcessElement *param_1,DockProcessElement *param_2,DockProcessElement *param_3,
          allocator<> *param_4)

{
  DockProcessElement *pDVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  DockProcessElement *in_ECX;
  DockProcessElement *in_EDX;
  allocator<> *unaff_ESI;
  DockProcessElement *pDVar5;
  DockProcessElement *unaff_EDI;
  DockProcessElement *pDVar6;
  
  pDVar6 = param_1;
  if (in_ECX != in_EDX) {
    pDVar5 = in_ECX + 0x20;
    do {
      *(undefined4 *)pDVar6 = *(undefined4 *)(pDVar5 + -0x20);
      *(undefined4 *)(pDVar6 + 4) = *(undefined4 *)(pDVar5 + -0x1c);
      *(undefined4 *)(pDVar6 + 8) = *(undefined4 *)(pDVar5 + -0x18);
      *(undefined4 *)(pDVar6 + 0x1c) = 0;
      *(undefined4 *)(pDVar5 + 0x2c + (int)(param_1 + (-0x2c - (int)in_ECX))) = 0;
      uVar2 = *(undefined4 *)(pDVar5 + -0x10);
      uVar3 = *(undefined4 *)(pDVar5 + -0xc);
      uVar4 = *(undefined4 *)(pDVar5 + -8);
      *(undefined4 *)(pDVar6 + 0xc) = *(undefined4 *)(pDVar5 + -0x14);
      *(undefined4 *)(pDVar6 + 0x10) = uVar2;
      *(undefined4 *)(pDVar6 + 0x14) = uVar3;
      *(undefined4 *)(pDVar6 + 0x18) = uVar4;
      *(undefined8 *)(pDVar6 + 0x1c) = *(undefined8 *)(pDVar5 + -4);
      *(undefined4 *)(pDVar5 + -4) = 0;
      *(undefined4 *)pDVar5 = 0xf;
      pDVar5[-0x14] = (DockProcessElement)0x0;
      *(undefined4 *)(pDVar6 + 0x24) = *(undefined4 *)(pDVar5 + 4);
      pDVar6[0x28] = pDVar5[8];
      pDVar1 = pDVar5 + 0xc;
      pDVar6 = pDVar6 + 0x2c;
      pDVar5 = pDVar5 + 0x2c;
    } while (pDVar1 != in_EDX);
  }
  _Destroy_range<>(in_ECX,unaff_EDI,unaff_ESI);
  return pDVar6;
}


// void __cdecl std::_Destroy_range<class std::allocator<struct BootElement> >(struct BootElement
// *,struct BootElement *,class std::allocator<struct BootElement> &)

void __cdecl std::_Destroy_range<>(BootElement *param_1,BootElement *param_2,allocator<> *param_3)

{
  uint *puVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  uint *in_ECX;
  nothrow_t *pnVar5;
  uint *in_EDX;
  uint *puVar6;
  
  if (in_ECX != in_EDX) {
    puVar6 = in_ECX + 7;
    do {
      uVar2 = *puVar6;
      if (0xf < uVar2) {
        pvVar3 = (void *)puVar6[-5];
        pnVar5 = (nothrow_t *)(uVar2 + 1);
        pvVar4 = pvVar3;
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)pvVar3 - 4);
          pnVar5 = (nothrow_t *)(uVar2 + 0x24);
          if (0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      puVar6[-1] = 0;
      *puVar6 = 0xf;
      *(undefined1 *)(puVar6 + -5) = 0;
      puVar1 = puVar6 + 1;
      puVar6 = puVar6 + 8;
    } while (puVar1 != in_EDX);
  }
  return;
}


// struct BootElement * __cdecl std::_Uninitialized_move<struct BootElement *,struct BootElement
// *,class std::allocator<struct BootElement> >(struct BootElement * const,struct BootElement *
// const,struct BootElement *,class std::allocator<struct BootElement> &)

BootElement * __cdecl
std::_Uninitialized_move<>
          (BootElement *param_1,BootElement *param_2,BootElement *param_3,allocator<> *param_4)

{
  BootElement *pBVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  BootElement *in_ECX;
  BootElement *in_EDX;
  allocator<> *unaff_ESI;
  BootElement *pBVar5;
  BootElement *unaff_EDI;
  BootElement *pBVar6;
  
  pBVar6 = param_1;
  if (in_ECX != in_EDX) {
    pBVar5 = in_ECX + 0x1c;
    do {
      *(undefined4 *)pBVar6 = *(undefined4 *)(pBVar5 + -0x1c);
      *(undefined4 *)(pBVar6 + 4) = *(undefined4 *)(pBVar5 + -0x18);
      pBVar1 = pBVar5 + 4;
      *(undefined4 *)(pBVar6 + 0x18) = 0;
      *(undefined4 *)(pBVar5 + 0x20 + (int)(param_1 + (-0x20 - (int)in_ECX))) = 0;
      uVar2 = *(undefined4 *)(pBVar5 + -0x10);
      uVar3 = *(undefined4 *)(pBVar5 + -0xc);
      uVar4 = *(undefined4 *)(pBVar5 + -8);
      *(undefined4 *)(pBVar6 + 8) = *(undefined4 *)(pBVar5 + -0x14);
      *(undefined4 *)(pBVar6 + 0xc) = uVar2;
      *(undefined4 *)(pBVar6 + 0x10) = uVar3;
      *(undefined4 *)(pBVar6 + 0x14) = uVar4;
      *(undefined8 *)(pBVar6 + 0x18) = *(undefined8 *)(pBVar5 + -4);
      pBVar6 = pBVar6 + 0x20;
      *(undefined4 *)(pBVar5 + -4) = 0;
      *(undefined4 *)pBVar5 = 0xf;
      pBVar5[-0x14] = (BootElement)0x0;
      pBVar5 = pBVar5 + 0x20;
    } while (pBVar1 != in_EDX);
  }
  _Destroy_range<>(in_ECX,unaff_EDI,unaff_ESI);
  return pBVar6;
}


// struct MouseCursor * __cdecl std::_Uninitialized_copy<struct MouseCursor *,struct MouseCursor
// *,class std::allocator<struct MouseCursor> >(struct MouseCursor * const,struct MouseCursor *
// const,struct MouseCursor *,class std::allocator<struct MouseCursor> &)

MouseCursor * __cdecl
std::_Uninitialized_copy<>
          (MouseCursor *param_1,MouseCursor *param_2,MouseCursor *param_3,allocator<> *param_4)

{
  void **ppvVar1;
  Rect *in_ECX;
  Rect *in_EDX;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005ba9d1;
  uStack_7 = 0;
  ppvVar1 = &local_10;
  local_10 = ExceptionList;
  for (; ExceptionList = ppvVar1, in_ECX != in_EDX; in_ECX = in_ECX + 0x28) {
    local_8 = 0;
    cocos2d::Rect::Rect((Rect *)param_1,in_ECX);
    local_8 = 1;
    basic_string<>::basic_string<>
              ((basic_string<> *)(param_1 + 0x10),(basic_string<> *)(in_ECX + 0x10));
    param_1 = param_1 + 0x28;
    ppvVar1 = ExceptionList;
  }
  ExceptionList = local_10;
  return param_1;
}


// void __cdecl std::_Destroy_range<class std::allocator<class BankTransaction> >(class
// BankTransaction *,class BankTransaction *,class std::allocator<class BankTransaction> &)

void __cdecl
std::_Destroy_range<>(BankTransaction *param_1,BankTransaction *param_2,allocator<> *param_3)

{
  uint *puVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  uint *in_ECX;
  nothrow_t *pnVar5;
  uint *in_EDX;
  uint *puVar6;
  
  if (in_ECX != in_EDX) {
    puVar6 = in_ECX + 9;
    do {
      uVar2 = *puVar6;
      if (0xf < uVar2) {
        pvVar3 = (void *)puVar6[-5];
        pnVar5 = (nothrow_t *)(uVar2 + 1);
        pvVar4 = pvVar3;
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)pvVar3 - 4);
          pnVar5 = (nothrow_t *)(uVar2 + 0x24);
          if (0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      puVar6[-1] = 0;
      *puVar6 = 0xf;
      *(undefined1 *)(puVar6 + -5) = 0;
      puVar1 = puVar6 + 1;
      puVar6 = puVar6 + 10;
    } while (puVar1 != in_EDX);
  }
  return;
}


// class BankTransaction * __cdecl std::_Uninitialized_move<class BankTransaction *,class
// BankTransaction *,class std::allocator<class BankTransaction> >(class BankTransaction *
// const,class BankTransaction * const,class BankTransaction *,class std::allocator<class
// BankTransaction> &)

BankTransaction * __cdecl
std::_Uninitialized_move<>
          (BankTransaction *param_1,BankTransaction *param_2,BankTransaction *param_3,
          allocator<> *param_4)

{
  BankTransaction *pBVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  BankTransaction *in_ECX;
  BankTransaction *in_EDX;
  allocator<> *unaff_ESI;
  BankTransaction *pBVar5;
  BankTransaction *unaff_EDI;
  BankTransaction *pBVar6;
  
  pBVar6 = param_1;
  if (in_ECX != in_EDX) {
    pBVar5 = in_ECX + 0x24;
    do {
      *(undefined4 *)pBVar6 = *(undefined4 *)(pBVar5 + -0x24);
      *(undefined4 *)(pBVar6 + 4) = *(undefined4 *)(pBVar5 + -0x20);
      *(undefined4 *)(pBVar6 + 8) = *(undefined4 *)(pBVar5 + -0x1c);
      *(undefined4 *)(pBVar6 + 0xc) = *(undefined4 *)(pBVar5 + -0x18);
      pBVar1 = pBVar5 + 4;
      *(undefined4 *)(pBVar6 + 0x20) = 0;
      *(undefined4 *)(pBVar5 + 0x28 + (int)(param_1 + (-0x28 - (int)in_ECX))) = 0;
      uVar2 = *(undefined4 *)(pBVar5 + -0x10);
      uVar3 = *(undefined4 *)(pBVar5 + -0xc);
      uVar4 = *(undefined4 *)(pBVar5 + -8);
      *(undefined4 *)(pBVar6 + 0x10) = *(undefined4 *)(pBVar5 + -0x14);
      *(undefined4 *)(pBVar6 + 0x14) = uVar2;
      *(undefined4 *)(pBVar6 + 0x18) = uVar3;
      *(undefined4 *)(pBVar6 + 0x1c) = uVar4;
      *(undefined8 *)(pBVar6 + 0x20) = *(undefined8 *)(pBVar5 + -4);
      pBVar6 = pBVar6 + 0x28;
      *(undefined4 *)(pBVar5 + -4) = 0;
      *(undefined4 *)pBVar5 = 0xf;
      pBVar5[-0x14] = (BankTransaction)0x0;
      pBVar5 = pBVar5 + 0x28;
    } while (pBVar1 != in_EDX);
  }
  _Destroy_range<>(in_ECX,unaff_EDI,unaff_ESI);
  return pBVar6;
}


// void __cdecl std::_Destroy_range<class std::allocator<class Shop> >(class Shop *,class Shop
// *,class std::allocator<class Shop> &)

void __cdecl std::_Destroy_range<>(Shop *param_1,Shop *param_2,allocator<Shop> *param_3)

{
  uint *puVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  uint *in_ECX;
  nothrow_t *pnVar5;
  uint *in_EDX;
  uint *puVar6;
  
  if (in_ECX != in_EDX) {
    puVar6 = in_ECX + 0xf;
    do {
      uVar2 = *puVar6;
      if (0xf < uVar2) {
        pvVar3 = (void *)puVar6[-5];
        pnVar5 = (nothrow_t *)(uVar2 + 1);
        pvVar4 = pvVar3;
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)pvVar3 - 4);
          pnVar5 = (nothrow_t *)(uVar2 + 0x24);
          if (0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      puVar6[-1] = 0;
      *puVar6 = 0xf;
      *(undefined1 *)(puVar6 + -5) = 0;
      puVar1 = puVar6 + 2;
      puVar6 = puVar6 + 0x11;
    } while (puVar1 != in_EDX);
  }
  return;
}


// bool (__cdecl*&& __cdecl std::move<bool (__cdecl*&)(class Ship *,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)>(bool
// (__cdecl*&)(class Ship *,int,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >)))(class Ship *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool____cdecl_____Ship__int_std__basic_string<>_ * __cdecl
std::move<>(_func_bool_Ship_ptr_int_basic_string<> **param_1)

{
  bool____cdecl_____Ship__int_std__basic_string<>_ *in_ECX;
  
  return in_ECX;
}


// class std::_Func_impl_no_alloc<class std::function<bool __cdecl(class Ship
// *,double,double,double)>,bool,class Ship *,int,int,int> * __cdecl std::_Global_new<class
// std::_Func_impl_no_alloc<class std::function<bool __cdecl(class Ship
// *,double,double,double)>,bool,class Ship *,int,int,int>,class std::function<bool __cdecl(class
// Ship *,double,double,double)> const &>(class std::function<bool __cdecl(class Ship
// *,double,double,double)> const &)

_Func_impl_no_alloc<> * __cdecl std::_Global_new<>(function<> *param_1)

{
  _Func_impl_no_alloc<> *p_Var1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c0b08;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  p_Var1 = operator_new(0x30);
  *(undefined ***)p_Var1 = _Func_impl_no_alloc<>::vftable;
  *(undefined4 *)(p_Var1 + 0x2c) = 0;
  local_8 = 1;
  if (*(undefined4 **)(in_ECX + 0x24) != (undefined4 *)0x0) {
    uVar2 = (**(code **)**(undefined4 **)(in_ECX + 0x24))(p_Var1 + 8);
    *(undefined4 *)(p_Var1 + 0x2c) = uVar2;
  }
  ExceptionList = local_10;
  return p_Var1;
}


// class std::_Func_impl_no_alloc<class std::function<bool __cdecl(class Ship
// *,double,double,double)>,bool,class Ship *,int,int,int> * __cdecl std::_Global_new<class
// std::_Func_impl_no_alloc<class std::function<bool __cdecl(class Ship
// *,double,double,double)>,bool,class Ship *,int,int,int>,class std::function<bool __cdecl(class
// Ship *,double,double,double)> >(class std::function<bool __cdecl(class Ship
// *,double,double,double)> &&)

_Func_impl_no_alloc<> * __cdecl std::_Global_new<>(function<> *param_1)

{
  _Func_impl_no_alloc<> *this;
  function<> *in_ECX;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c0b30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = operator_new(0x30);
  local_8 = 0;
  _Func_impl_no_alloc<>::_Func_impl_no_alloc<><>(this,in_ECX);
  ExceptionList = local_10;
  return this;
}


// void __cdecl std::_Destroy_range<class std::allocator<class ExtraSpawned> >(class ExtraSpawned
// *,class ExtraSpawned *,class std::allocator<class ExtraSpawned> &)

void __cdecl std::_Destroy_range<>(ExtraSpawned *param_1,ExtraSpawned *param_2,allocator<> *param_3)

{
  uint *puVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  uint *in_ECX;
  nothrow_t *pnVar5;
  uint *in_EDX;
  uint *puVar6;
  
  if (in_ECX != in_EDX) {
    puVar6 = in_ECX + 6;
    do {
      uVar2 = *puVar6;
      if (0xf < uVar2) {
        pvVar3 = (void *)puVar6[-5];
        pnVar5 = (nothrow_t *)(uVar2 + 1);
        pvVar4 = pvVar3;
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)pvVar3 - 4);
          pnVar5 = (nothrow_t *)(uVar2 + 0x24);
          if (0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      puVar6[-1] = 0;
      *puVar6 = 0xf;
      *(undefined1 *)(puVar6 + -5) = 0;
      puVar1 = puVar6 + 1;
      puVar6 = puVar6 + 7;
    } while (puVar1 != in_EDX);
  }
  return;
}


// class ExtraSpawned * __cdecl std::_Uninitialized_move<class ExtraSpawned *,class ExtraSpawned
// *,class std::allocator<class ExtraSpawned> >(class ExtraSpawned * const,class ExtraSpawned *
// const,class ExtraSpawned *,class std::allocator<class ExtraSpawned> &)

ExtraSpawned * __cdecl
std::_Uninitialized_move<>
          (ExtraSpawned *param_1,ExtraSpawned *param_2,ExtraSpawned *param_3,allocator<> *param_4)

{
  ExtraSpawned *pEVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ExtraSpawned *in_ECX;
  ExtraSpawned *in_EDX;
  ExtraSpawned *pEVar5;
  allocator<> *unaff_ESI;
  ExtraSpawned *unaff_EDI;
  ExtraSpawned *pEVar6;
  
  if (in_ECX != in_EDX) {
    pEVar5 = in_ECX + 0x18;
    in_ECX = param_1 + -(int)in_ECX;
    pEVar6 = param_1 + 4;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(pEVar5 + -0x18);
      *(undefined4 *)(pEVar6 + 0x10) = 0;
      pEVar1 = pEVar5 + 4;
      *(undefined4 *)(in_ECX + -0x1c + (int)(pEVar5 + 0x1c)) = 0;
      param_1 = param_1 + 0x1c;
      uVar2 = *(undefined4 *)(pEVar5 + -0x10);
      uVar3 = *(undefined4 *)(pEVar5 + -0xc);
      uVar4 = *(undefined4 *)(pEVar5 + -8);
      *(undefined4 *)pEVar6 = *(undefined4 *)(pEVar5 + -0x14);
      *(undefined4 *)(pEVar6 + 4) = uVar2;
      *(undefined4 *)(pEVar6 + 8) = uVar3;
      *(undefined4 *)(pEVar6 + 0xc) = uVar4;
      *(undefined8 *)(pEVar6 + 0x10) = *(undefined8 *)(pEVar5 + -4);
      *(undefined4 *)(pEVar5 + -4) = 0;
      *(undefined4 *)pEVar5 = 0xf;
      pEVar5[-0x14] = (ExtraSpawned)0x0;
      pEVar5 = pEVar5 + 0x1c;
      pEVar6 = pEVar6 + 0x1c;
    } while (pEVar1 != in_EDX);
  }
  _Destroy_range<>(in_ECX,unaff_EDI,unaff_ESI);
  return param_1;
}


// struct MouseCursor * __cdecl std::_Copy_unchecked<struct MouseCursor *,struct MouseCursor
// *>(struct MouseCursor *,struct MouseCursor *,struct MouseCursor *)

MouseCursor * __cdecl
std::_Copy_unchecked<>(MouseCursor *param_1,MouseCursor *param_2,MouseCursor *param_3)

{
  int iVar1;
  basic_string<> *pbVar2;
  basic_string<> *in_ECX;
  basic_string<> *in_EDX;
  basic_string<> *pbVar3;
  
  if (in_ECX != in_EDX) {
    iVar1 = (int)param_1 - (int)in_ECX;
    pbVar3 = in_ECX + 0x10;
    do {
      cocos2d::Rect::operator=((Rect *)param_1,(Rect *)(pbVar3 + -0x10));
      if (pbVar3 + iVar1 != pbVar3) {
        pbVar2 = pbVar3;
        if (0xf < *(uint *)(pbVar3 + 0x14)) {
          pbVar2 = *(basic_string<> **)pbVar3;
        }
        basic_string<>::assign(pbVar3 + iVar1,(char *)pbVar2,*(uint *)(pbVar3 + 0x10));
      }
      param_1 = param_1 + 0x28;
      pbVar2 = pbVar3 + 0x18;
      pbVar3 = pbVar3 + 0x28;
    } while (pbVar2 != in_EDX);
  }
  return param_1;
}


// void __cdecl std::_Destroy_range<class std::allocator<struct word> >(struct word *,struct word
// *,class std::allocator<struct word> &)

void __cdecl std::_Destroy_range<>(word *param_1,word *param_2,allocator<word> *param_3)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  int *in_ECX;
  nothrow_t *pnVar4;
  int *in_EDX;
  
  do {
    if (in_ECX == in_EDX) {
      return;
    }
    uVar1 = in_ECX[5];
    if (0xf < uVar1) {
      pvVar2 = (void *)*in_ECX;
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
    in_ECX[4] = 0;
    in_ECX[5] = 0xf;
    *(undefined1 *)in_ECX = 0;
    in_ECX = in_ECX + 8;
  } while( true );
}


// class std::vector<struct word,class std::allocator<struct word> > * __cdecl
// std::_Uninitialized_move<class std::vector<struct word,class std::allocator<struct word> >
// *,class std::vector<struct word,class std::allocator<struct word> > *,class std::allocator<class
// std::vector<struct word,class std::allocator<struct word> > > >(class std::vector<struct
// word,class std::allocator<struct word> > * const,class std::vector<struct word,class
// std::allocator<struct word> > * const,class std::vector<struct word,class std::allocator<struct
// word> > *,class std::allocator<class std::vector<struct word,class std::allocator<struct word> >
// > &)

vector<> * __cdecl
std::_Uninitialized_move<>
          (vector<> *param_1,vector<> *param_2,vector<> *param_3,allocator<> *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  undefined4 *puVar3;
  vector<> *pvVar4;
  
  pvVar4 = param_1;
  if (in_ECX != in_EDX) {
    puVar3 = in_ECX + 2;
    do {
      *(undefined4 *)pvVar4 = 0;
      puVar1 = puVar3 + 3;
      *(undefined4 *)(pvVar4 + 4) = 0;
      puVar2 = puVar3 + 1;
      *(undefined4 *)(param_1 + (-0xc - (int)in_ECX) + (int)puVar1) = 0;
      *(undefined4 *)pvVar4 = puVar3[-2];
      *(undefined4 *)(pvVar4 + 4) = puVar3[-1];
      pvVar4 = pvVar4 + 0xc;
      *(undefined4 *)(param_1 + (-0xc - (int)in_ECX) + (int)puVar1) = *puVar3;
      puVar3[-2] = 0;
      puVar3[-1] = 0;
      *puVar3 = 0;
      puVar3 = puVar1;
    } while (puVar2 != in_EDX);
  }
  return (vector<> *)pvVar4;
}


// struct word * __cdecl std::_Uninitialized_move<struct word *,struct word *,class
// std::allocator<struct word> >(struct word * const,struct word * const,struct word *,class
// std::allocator<struct word> &)

word * __cdecl
std::_Uninitialized_move<>(word *param_1,word *param_2,word *param_3,allocator<word> *param_4)

{
  word *pwVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  word *in_ECX;
  word *in_EDX;
  allocator<word> *unaff_ESI;
  word *pwVar5;
  word *unaff_EDI;
  word *pwVar6;
  
  pwVar6 = param_1;
  if (in_ECX != in_EDX) {
    pwVar5 = in_ECX + 0x14;
    do {
      *(undefined4 *)(pwVar6 + 0x10) = 0;
      *(undefined4 *)(pwVar5 + 0x20 + (int)(param_1 + (-0x20 - (int)in_ECX))) = 0;
      uVar2 = *(undefined4 *)(pwVar5 + -0x10);
      uVar3 = *(undefined4 *)(pwVar5 + -0xc);
      uVar4 = *(undefined4 *)(pwVar5 + -8);
      *(undefined4 *)pwVar6 = *(undefined4 *)(pwVar5 + -0x14);
      *(undefined4 *)(pwVar6 + 4) = uVar2;
      *(undefined4 *)(pwVar6 + 8) = uVar3;
      *(undefined4 *)(pwVar6 + 0xc) = uVar4;
      *(undefined8 *)(pwVar6 + 0x10) = *(undefined8 *)(pwVar5 + -4);
      *(undefined4 *)(pwVar5 + -4) = 0;
      *(undefined4 *)pwVar5 = 0xf;
      pwVar5[-0x14] = (word)0x0;
      pwVar6[0x18] = pwVar5[4];
      *(undefined4 *)(pwVar6 + 0x1c) = *(undefined4 *)(pwVar5 + 8);
      pwVar1 = pwVar5 + 0xc;
      pwVar6 = pwVar6 + 0x20;
      pwVar5 = pwVar5 + 0x20;
    } while (pwVar1 != in_EDX);
  }
  _Destroy_range<>(in_ECX,unaff_EDI,unaff_ESI);
  return pwVar6;
}


// void __cdecl std::_Destroy_range<class std::allocator<struct ScreenTab> >(struct ScreenTab
// *,struct ScreenTab *,class std::allocator<struct ScreenTab> &)

void __cdecl
std::_Destroy_range<>(ScreenTab *param_1,ScreenTab *param_2,allocator<ScreenTab> *param_3)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  int *in_ECX;
  nothrow_t *pnVar4;
  int *in_EDX;
  
  do {
    if (in_ECX == in_EDX) {
      return;
    }
    uVar1 = in_ECX[5];
    if (0xf < uVar1) {
      pvVar2 = (void *)*in_ECX;
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
    in_ECX[4] = 0;
    in_ECX[5] = 0xf;
    *(undefined1 *)in_ECX = 0;
    in_ECX = in_ECX + 0xb;
  } while( true );
}


// struct ScreenTab * __cdecl std::_Uninitialized_move<struct ScreenTab *,struct ScreenTab *,class
// std::allocator<struct ScreenTab> >(struct ScreenTab * const,struct ScreenTab * const,struct
// ScreenTab *,class std::allocator<struct ScreenTab> &)

ScreenTab * __cdecl
std::_Uninitialized_move<>
          (ScreenTab *param_1,ScreenTab *param_2,ScreenTab *param_3,allocator<ScreenTab> *param_4)

{
  ScreenTab *pSVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ScreenTab *in_ECX;
  ScreenTab *in_EDX;
  allocator<ScreenTab> *unaff_ESI;
  ScreenTab *pSVar5;
  ScreenTab *unaff_EDI;
  ScreenTab *pSVar6;
  
  pSVar6 = param_1;
  if (in_ECX != in_EDX) {
    pSVar5 = in_ECX + 0x14;
    do {
      *(undefined4 *)(pSVar6 + 0x10) = 0;
      *(undefined4 *)(pSVar5 + 0x2c + (int)(param_1 + (-0x2c - (int)in_ECX))) = 0;
      uVar2 = *(undefined4 *)(pSVar5 + -0x10);
      uVar3 = *(undefined4 *)(pSVar5 + -0xc);
      uVar4 = *(undefined4 *)(pSVar5 + -8);
      *(undefined4 *)pSVar6 = *(undefined4 *)(pSVar5 + -0x14);
      *(undefined4 *)(pSVar6 + 4) = uVar2;
      *(undefined4 *)(pSVar6 + 8) = uVar3;
      *(undefined4 *)(pSVar6 + 0xc) = uVar4;
      *(undefined8 *)(pSVar6 + 0x10) = *(undefined8 *)(pSVar5 + -4);
      *(undefined4 *)(pSVar5 + -4) = 0;
      *(undefined4 *)pSVar5 = 0xf;
      pSVar5[-0x14] = (ScreenTab)0x0;
      pSVar6[0x18] = pSVar5[4];
      pSVar6[0x19] = pSVar5[5];
      *(undefined4 *)(pSVar6 + 0x1c) = *(undefined4 *)(pSVar5 + 8);
      *(undefined4 *)(pSVar6 + 0x20) = *(undefined4 *)(pSVar5 + 0xc);
      *(undefined4 *)(pSVar6 + 0x24) = *(undefined4 *)(pSVar5 + 0x10);
      *(undefined4 *)(pSVar6 + 0x28) = *(undefined4 *)(pSVar5 + 0x14);
      pSVar1 = pSVar5 + 0x18;
      pSVar6 = pSVar6 + 0x2c;
      pSVar5 = pSVar5 + 0x2c;
    } while (pSVar1 != in_EDX);
  }
  _Destroy_range<>(in_ECX,unaff_EDI,unaff_ESI);
  return pSVar6;
}


// void __cdecl std::_Destroy_range<class std::allocator<struct JumpGateRoute> >(struct
// JumpGateRoute *,struct JumpGateRoute *,class std::allocator<struct JumpGateRoute> &)

void __cdecl
std::_Destroy_range<>(JumpGateRoute *param_1,JumpGateRoute *param_2,allocator<> *param_3)

{
  void **ppvVar1;
  void *in_ECX;
  void *in_EDX;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2730;
  ppvVar1 = &local_10;
  local_10 = ExceptionList;
  for (; ExceptionList = ppvVar1, in_ECX != in_EDX; in_ECX = (void *)((int)in_ECX + 0x14)) {
    local_8 = 0;
    _eh_vector_destructor_iterator_(in_ECX,8,2,~Vec2_exref);
    ppvVar1 = ExceptionList;
  }
  ExceptionList = local_10;
  return;
}


// void __cdecl std::_Destroy_range<class std::allocator<struct ModuleRenderData> >(struct
// ModuleRenderData *,struct ModuleRenderData *,class std::allocator<struct ModuleRenderData> &)

void __cdecl
std::_Destroy_range<>(ModuleRenderData *param_1,ModuleRenderData *param_2,allocator<> *param_3)

{
  uint *puVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  uint *in_ECX;
  nothrow_t *pnVar5;
  uint *in_EDX;
  uint *puVar6;
  
  if (in_ECX != in_EDX) {
    puVar6 = in_ECX + 7;
    do {
      uVar2 = *puVar6;
      if (0xf < uVar2) {
        pvVar3 = (void *)puVar6[-5];
        pnVar5 = (nothrow_t *)(uVar2 + 1);
        pvVar4 = pvVar3;
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)pvVar3 - 4);
          pnVar5 = (nothrow_t *)(uVar2 + 0x24);
          if (0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      puVar6[-1] = 0;
      *puVar6 = 0xf;
      *(undefined1 *)(puVar6 + -5) = 0;
      puVar1 = puVar6 + 7;
      puVar6 = puVar6 + 0xe;
    } while (puVar1 != in_EDX);
  }
  return;
}


// struct ModuleRenderData * __cdecl std::_Uninitialized_move<struct ModuleRenderData *,struct
// ModuleRenderData *,class std::allocator<struct ModuleRenderData> >(struct ModuleRenderData *
// const,struct ModuleRenderData * const,struct ModuleRenderData *,class std::allocator<struct
// ModuleRenderData> &)

ModuleRenderData * __cdecl
std::_Uninitialized_move<>
          (ModuleRenderData *param_1,ModuleRenderData *param_2,ModuleRenderData *param_3,
          allocator<> *param_4)

{
  ModuleRenderData *pMVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ModuleRenderData *in_ECX;
  ModuleRenderData *in_EDX;
  allocator<> *unaff_ESI;
  ModuleRenderData *pMVar5;
  ModuleRenderData *unaff_EDI;
  ModuleRenderData *pMVar6;
  
  pMVar5 = param_1;
  if (in_ECX != in_EDX) {
    pMVar6 = in_ECX + 0x1c;
    do {
      *(undefined4 *)pMVar5 = *(undefined4 *)(pMVar6 + -0x1c);
      *(undefined4 *)(pMVar5 + 4) = *(undefined4 *)(pMVar6 + -0x18);
      *(undefined4 *)(pMVar5 + 0x18) = 0;
      *(undefined4 *)(pMVar6 + 0x38 + (int)(param_1 + (-0x38 - (int)in_ECX))) = 0;
      uVar2 = *(undefined4 *)(pMVar6 + -0x10);
      uVar3 = *(undefined4 *)(pMVar6 + -0xc);
      uVar4 = *(undefined4 *)(pMVar6 + -8);
      *(undefined4 *)(pMVar5 + 8) = *(undefined4 *)(pMVar6 + -0x14);
      *(undefined4 *)(pMVar5 + 0xc) = uVar2;
      *(undefined4 *)(pMVar5 + 0x10) = uVar3;
      *(undefined4 *)(pMVar5 + 0x14) = uVar4;
      *(undefined8 *)(pMVar5 + 0x18) = *(undefined8 *)(pMVar6 + -4);
      *(undefined4 *)(pMVar6 + -4) = 0;
      *(undefined4 *)pMVar6 = 0xf;
      pMVar6[-0x14] = (ModuleRenderData)0x0;
      *(undefined4 *)(pMVar5 + 0x20) = *(undefined4 *)(pMVar6 + 4);
      *(undefined4 *)(pMVar5 + 0x24) = *(undefined4 *)(pMVar6 + 8);
      *(undefined4 *)(pMVar5 + 0x28) = *(undefined4 *)(pMVar6 + 0xc);
      *(undefined4 *)(pMVar5 + 0x2c) = *(undefined4 *)(pMVar6 + 0x10);
      *(undefined4 *)(pMVar5 + 0x30) = *(undefined4 *)(pMVar6 + 0x14);
      pMVar5[0x34] = pMVar6[0x18];
      pMVar1 = pMVar6 + 0x1c;
      pMVar5 = pMVar5 + 0x38;
      pMVar6 = pMVar6 + 0x38;
    } while (pMVar1 != in_EDX);
  }
  _Destroy_range<>(in_ECX,unaff_EDI,unaff_ESI);
  return pMVar5;
}


// struct SensorSelectionElement * __cdecl std::_Uninitialized_move<struct SensorSelectionElement
// *,struct SensorSelectionElement *,class std::allocator<struct SensorSelectionElement> >(struct
// SensorSelectionElement * const,struct SensorSelectionElement * const,struct
// SensorSelectionElement *,class std::allocator<struct SensorSelectionElement> &)

SensorSelectionElement * __cdecl
std::_Uninitialized_move<>
          (SensorSelectionElement *param_1,SensorSelectionElement *param_2,
          SensorSelectionElement *param_3,allocator<> *param_4)

{
  ExtraSpawned *pEVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ExtraSpawned *in_ECX;
  ExtraSpawned *in_EDX;
  ExtraSpawned *pEVar5;
  allocator<> *unaff_ESI;
  ExtraSpawned *unaff_EDI;
  SensorSelectionElement *pSVar6;
  
  if (in_ECX != in_EDX) {
    pEVar5 = in_ECX + 0x18;
    in_ECX = (ExtraSpawned *)(param_1 + -(int)in_ECX);
    pSVar6 = param_1 + 4;
    do {
      *param_1 = *(SensorSelectionElement *)(pEVar5 + -0x18);
      *(undefined4 *)(pSVar6 + 0x10) = 0;
      pEVar1 = pEVar5 + 4;
      *(undefined4 *)(in_ECX + -0x1c + (int)(pEVar5 + 0x1c)) = 0;
      param_1 = param_1 + 0x1c;
      uVar2 = *(undefined4 *)(pEVar5 + -0x10);
      uVar3 = *(undefined4 *)(pEVar5 + -0xc);
      uVar4 = *(undefined4 *)(pEVar5 + -8);
      *(undefined4 *)pSVar6 = *(undefined4 *)(pEVar5 + -0x14);
      *(undefined4 *)(pSVar6 + 4) = uVar2;
      *(undefined4 *)(pSVar6 + 8) = uVar3;
      *(undefined4 *)(pSVar6 + 0xc) = uVar4;
      *(undefined8 *)(pSVar6 + 0x10) = *(undefined8 *)(pEVar5 + -4);
      *(undefined4 *)(pEVar5 + -4) = 0;
      *(undefined4 *)pEVar5 = 0xf;
      pEVar5[-0x14] = (ExtraSpawned)0x0;
      pEVar5 = pEVar5 + 0x1c;
      pSVar6 = pSVar6 + 0x1c;
    } while (pEVar1 != in_EDX);
  }
  _Destroy_range<>(in_ECX,unaff_EDI,unaff_ESI);
  return param_1;
}


// struct SensorSelectionElement * __cdecl std::_Copy_unchecked<struct SensorSelectionElement
// *,struct SensorSelectionElement *>(struct SensorSelectionElement *,struct SensorSelectionElement
// *,struct SensorSelectionElement *)

SensorSelectionElement * __cdecl
std::_Copy_unchecked<>
          (SensorSelectionElement *param_1,SensorSelectionElement *param_2,
          SensorSelectionElement *param_3)

{
  basic_string<> *pbVar1;
  basic_string<> *in_ECX;
  basic_string<> *in_EDX;
  int iVar2;
  basic_string<> *pbVar3;
  
  if (in_ECX != in_EDX) {
    iVar2 = (int)param_1 - (int)in_ECX;
    pbVar3 = in_ECX + 4;
    do {
      *param_1 = (SensorSelectionElement)pbVar3[-4];
      if (pbVar3 + iVar2 != pbVar3) {
        pbVar1 = pbVar3;
        if (0xf < *(uint *)(pbVar3 + 0x14)) {
          pbVar1 = *(basic_string<> **)pbVar3;
        }
        basic_string<>::assign(pbVar3 + iVar2,(char *)pbVar1,*(uint *)(pbVar3 + 0x10));
      }
      param_1 = param_1 + 0x1c;
      pbVar1 = pbVar3 + 0x18;
      pbVar3 = pbVar3 + 0x1c;
    } while (pbVar1 != in_EDX);
  }
  return param_1;
}
