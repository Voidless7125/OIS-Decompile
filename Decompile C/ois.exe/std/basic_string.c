#include "../ois.exe.h"


// public: char const * __thiscall std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >::c_str(void)const 

char * __thiscall std::basic_string<>::c_str(basic_string<> *this)

{
  if (0xf < *(uint *)(this + 0x14)) {
    return *(char **)this;
  }
  return (char *)this;
}


// public: __thiscall std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >(char const * const)

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
  assign(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return this;
}


// public: __thiscall std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const &)

basic_string<> * __thiscall
std::basic_string<>::basic_string<>(basic_string<> *this,basic_string<> *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  void *pvVar7;
  void *pvVar8;
  uint uVar9;
  
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  uVar2 = *(uint *)(param_1 + 0x10);
  if (0xf < *(uint *)(param_1 + 0x14)) {
    param_1 = *(basic_string<> **)param_1;
  }
  if (uVar2 < 0x10) {
    uVar3 = *(undefined4 *)(param_1 + 4);
    uVar4 = *(undefined4 *)(param_1 + 8);
    uVar5 = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)this = *(undefined4 *)param_1;
    *(undefined4 *)(this + 4) = uVar3;
    *(undefined4 *)(this + 8) = uVar4;
    *(undefined4 *)(this + 0xc) = uVar5;
    *(uint *)(this + 0x10) = uVar2;
    *(undefined4 *)(this + 0x14) = 0xf;
    return this;
  }
  uVar9 = uVar2 | 0xf;
  if (0x7fffffff < uVar9) {
    uVar9 = 0x7fffffff;
  }
  uVar1 = uVar9 + 1;
  if (uVar1 < 0x1000) {
    if (uVar1 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      pvVar8 = operator_new(uVar1);
    }
  }
  else {
    uVar6 = uVar9 + 0x24;
    if (uVar6 <= uVar1) {
      uVar6 = 0xffffffff;
    }
    pvVar7 = operator_new(uVar6);
    if (pvVar7 == (void *)0x0) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    pvVar8 = (void *)((int)pvVar7 + 0x23U & 0xffffffe0);
    *(void **)((int)pvVar8 - 4) = pvVar7;
  }
  *(void **)this = pvVar8;
  memcpy(pvVar8,param_1,uVar2 + 1);
  *(uint *)(this + 0x10) = uVar2;
  *(uint *)(this + 0x14) = uVar9;
  return this;
}


// public: void __thiscall std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >::_Tidy_init(void)

void __thiscall std::basic_string<>::_Tidy_init(basic_string<> *this)

{
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0xf;
  *this = (basic_string<>)0x0;
  return;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
// __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >::operator=(char const * const)

basic_string<> * __thiscall std::basic_string<>::operator=(basic_string<> *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  basic_string<> *pbVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pbVar3 = assign(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return pbVar3;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
// __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >::assign(char const * const,unsigned int)

basic_string<> * __thiscall
std::basic_string<>::assign(basic_string<> *this,char *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  nothrow_t *pnVar7;
  basic_string<> *pbVar8;
  uint uVar9;
  
  uVar2 = *(uint *)(this + 0x14);
  if (param_2 <= uVar2) {
    pbVar8 = this;
    if (0xf < uVar2) {
      pbVar8 = *(basic_string<> **)this;
    }
    *(uint *)(this + 0x10) = param_2;
    memmove(pbVar8,param_1,param_2);
    pbVar8[param_2] = (basic_string<>)0x0;
    return (basic_string<> *)this;
  }
  if (0x7fffffff < param_2) {
                    // WARNING: Subroutine does not return
    basic_string<>::_Xlen();
  }
  uVar9 = param_2 | 0xf;
  if (uVar9 < 0x80000000) {
    if (0x7fffffff - (uVar2 >> 1) < uVar2) {
      uVar9 = 0x7fffffff;
    }
    else {
      uVar1 = (uVar2 >> 1) + uVar2;
      if (uVar9 < uVar1) {
        uVar9 = uVar1;
      }
    }
  }
  else {
    uVar9 = 0x7fffffff;
  }
  uVar1 = uVar9 + 1;
  if (uVar1 < 0x1000) {
    if (uVar1 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = operator_new(uVar1);
    }
  }
  else {
    uVar3 = uVar9 + 0x24;
    if (uVar3 <= uVar1) {
      uVar3 = 0xffffffff;
    }
    pvVar4 = operator_new(uVar3);
    if (pvVar4 == (void *)0x0) goto LAB_004029e8;
    pvVar5 = (void *)((int)pvVar4 + 0x23U & 0xffffffe0);
    *(void **)((int)pvVar5 - 4) = pvVar4;
  }
  *(uint *)(this + 0x10) = param_2;
  *(uint *)(this + 0x14) = uVar9;
  memcpy(pvVar5,param_1,param_2);
  *(undefined1 *)((int)pvVar5 + param_2) = 0;
  if (0xf < uVar2) {
    pnVar7 = (nothrow_t *)(uVar2 + 1);
    pvVar4 = *(void **)this;
    pvVar6 = pvVar4;
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)pvVar4 + -4);
      pnVar7 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar4 + (-4 - (int)pvVar6))) {
LAB_004029e8:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar6,pnVar7);
  }
  *(void **)this = pvVar5;
  return (basic_string<> *)this;
}


// public: void __thiscall std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >::_Construct_lv_contents(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const &)

void __thiscall
std::basic_string<>::_Construct_lv_contents(basic_string<> *this,basic_string<> *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  void *pvVar9;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if (0xf < *(uint *)(param_1 + 0x14)) {
    param_1 = *(basic_string<> **)param_1;
  }
  if (uVar2 < 0x10) {
    uVar3 = *(undefined4 *)(param_1 + 4);
    uVar4 = *(undefined4 *)(param_1 + 8);
    uVar5 = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)this = *(undefined4 *)param_1;
    *(undefined4 *)(this + 4) = uVar3;
    *(undefined4 *)(this + 8) = uVar4;
    *(undefined4 *)(this + 0xc) = uVar5;
    *(uint *)(this + 0x10) = uVar2;
    *(undefined4 *)(this + 0x14) = 0xf;
    return;
  }
  uVar6 = uVar2 | 0xf;
  if (0x7fffffff < uVar6) {
    uVar6 = 0x7fffffff;
  }
  uVar1 = uVar6 + 1;
  if (uVar1 < 0x1000) {
    if (uVar1 == 0) {
      pvVar9 = (void *)0x0;
    }
    else {
      pvVar9 = operator_new(uVar1);
    }
  }
  else {
    uVar7 = uVar6 + 0x24;
    if (uVar7 <= uVar1) {
      uVar7 = 0xffffffff;
    }
    pvVar8 = operator_new(uVar7);
    if (pvVar8 == (void *)0x0) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    pvVar9 = (void *)((int)pvVar8 + 0x23U & 0xffffffe0);
    *(void **)((int)pvVar9 - 4) = pvVar8;
  }
  *(void **)this = pvVar9;
  memcpy(pvVar9,param_1,uVar2 + 1);
  *(uint *)(this + 0x10) = uVar2;
  *(uint *)(this + 0x14) = uVar6;
  return;
}


// public: static void __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
// std::allocator<wchar_t> >::_Xlen(void)

void __cdecl std::basic_string<>::_Xlen(void)

{
                    // WARNING: Subroutine does not return
  std::_Xlength_error("string too long");
}


// public: __thiscall std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >(void)

basic_string<> * __thiscall std::basic_string<>::basic_string<>(basic_string<> *this)

{
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0xf;
  *this = (basic_string<>)0x0;
  return this;
}


// public: bool __thiscall std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >::_Equal(char const * const)const 

bool __thiscall std::basic_string<>::_Equal(basic_string<> *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *unaff_EBP;
  uint unaff_retaddr;
  
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  bVar2 = _Traits_equal<>(param_1,(int)pcVar3 - (int)(param_1 + 1),unaff_EBP,unaff_retaddr);
  return bVar2;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >::substr(unsigned int,unsigned int)const 

uint __thiscall std::basic_string<>::substr(basic_string<> *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint in_stack_0000000c;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined1 *)param_1 = 0;
  if (param_2 <= *(uint *)(this + 0x10)) {
    uVar1 = *(uint *)(this + 0x10) - param_2;
    if (uVar1 < in_stack_0000000c) {
      in_stack_0000000c = uVar1;
    }
    if (0xf < *(uint *)(this + 0x14)) {
      this = *(basic_string<> **)this;
    }
    assign((basic_string<> *)param_1,(char *)(this + param_2),in_stack_0000000c);
    return param_1;
  }
                    // WARNING: Subroutine does not return
  _String_val<>::_Xran();
}


// public: char & __thiscall std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >::operator[](unsigned int)

char * __thiscall std::basic_string<>::operator[](basic_string<> *this,uint param_1)

{
  if (0xf < *(uint *)(this + 0x14)) {
    this = *(basic_string<> **)this;
  }
  return (char *)(this + param_1);
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
// __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >::append(char const * const)

basic_string<> * __thiscall std::basic_string<>::append(basic_string<> *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  basic_string<> *pbVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pbVar3 = append(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return pbVar3;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
// __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >::append(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const &)

basic_string<> * __thiscall
std::basic_string<>::append(basic_string<> *this,basic_string<> *param_1)

{
  basic_string<> *pbVar1;
  
  pbVar1 = param_1;
  if (0xf < *(uint *)(param_1 + 0x14)) {
    pbVar1 = *(basic_string<> **)param_1;
  }
  pbVar1 = append(this,(char *)pbVar1,*(uint *)(param_1 + 0x10));
  return pbVar1;
}


// public: __thiscall std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > &&)

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


// public: void __thiscall std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >::push_back(char)

void __thiscall std::basic_string<>::push_back(basic_string<> *this,char param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  nothrow_t *pnVar7;
  uint uVar8;
  void *pvVar9;
  void *pvVar10;
  
  uVar2 = *(uint *)(this + 0x10);
  uVar3 = *(uint *)(this + 0x14);
  if (uVar2 < uVar3) {
    *(uint *)(this + 0x10) = uVar2 + 1;
    if (0xf < uVar3) {
      this = *(basic_string<> **)this;
    }
    this[uVar2] = (basic_string<>)param_1;
    this[uVar2 + 1] = (basic_string<>)0x0;
    return;
  }
  if (uVar2 == 0x7fffffff) {
                    // WARNING: Subroutine does not return
    basic_string<>::_Xlen();
  }
  uVar8 = uVar2 + 1 | 0xf;
  if (uVar8 < 0x80000000) {
    if (0x7fffffff - (uVar3 >> 1) < uVar3) {
      uVar8 = 0x7fffffff;
    }
    else {
      uVar4 = (uVar3 >> 1) + uVar3;
      if (uVar8 < uVar4) {
        uVar8 = uVar4;
      }
    }
  }
  else {
    uVar8 = 0x7fffffff;
  }
  uVar4 = uVar8 + 1;
  if (uVar4 < 0x1000) {
    if (uVar4 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      pvVar10 = operator_new(uVar4);
    }
  }
  else {
    uVar5 = uVar8 + 0x24;
    if (uVar5 <= uVar4) {
      uVar5 = 0xffffffff;
    }
    pvVar6 = operator_new(uVar5);
    if (pvVar6 == (void *)0x0) goto LAB_004038ff;
    pvVar10 = (void *)((int)pvVar6 + 0x23U & 0xffffffe0);
    *(void **)((int)pvVar10 - 4) = pvVar6;
  }
  *(uint *)(this + 0x14) = uVar8;
  pcVar1 = (char *)((int)pvVar10 + uVar2);
  *(uint *)(this + 0x10) = uVar2 + 1;
  if (uVar3 < 0x10) {
    memcpy(pvVar10,this,uVar2);
    *pcVar1 = param_1;
    pcVar1[1] = '\0';
    *(void **)this = pvVar10;
    return;
  }
  pvVar6 = *(void **)this;
  memcpy(pvVar10,pvVar6,uVar2);
  *pcVar1 = param_1;
  pcVar1[1] = '\0';
  pnVar7 = (nothrow_t *)(uVar3 + 1);
  pvVar9 = pvVar6;
  if ((nothrow_t *)0xfff < pnVar7) {
    pvVar9 = *(void **)((int)pvVar6 + -4);
    pnVar7 = (nothrow_t *)(uVar3 + 0x24);
    if (0x1f < (uint)((int)pvVar6 + (-4 - (int)pvVar9))) {
LAB_004038ff:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pvVar9,pnVar7);
  *(void **)this = pvVar10;
  return;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
// __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >::append(char const * const,unsigned int)

basic_string<> * __thiscall
std::basic_string<>::append(basic_string<> *this,char *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  basic_string<> *pbVar3;
  basic_string<> *pbVar4;
  
  uVar2 = param_2;
  iVar1 = *(int *)(this + 0x10);
  if (param_2 <= *(uint *)(this + 0x14) - iVar1) {
    *(uint *)(this + 0x10) = iVar1 + param_2;
    pbVar3 = this;
    if (0xf < *(uint *)(this + 0x14)) {
      pbVar3 = *(basic_string<> **)this;
    }
    memmove(pbVar3 + iVar1,param_1,param_2);
    (pbVar3 + iVar1)[param_2] = (basic_string<>)0x0;
    return (basic_string<> *)this;
  }
  param_2 = param_2 & 0xffffff00;
  pbVar4 = _Reallocate_grow_by<>(this,uVar2,param_2,param_1,uVar2);
  return pbVar4;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
// __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >::_Reallocate_grow_by<class <lambda_ab246b20b9526e2ef7792587e4298a77>,char const *,unsigned
// int>(unsigned int,class <lambda_ab246b20b9526e2ef7792587e4298a77>,char const *,unsigned int)

basic_string<> * __thiscall
std::basic_string<>::_Reallocate_grow_by<>
          (basic_string<> *this,uint param_1,undefined4 param_3,void *param_4,size_t param_5)

{
  size_t sVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  nothrow_t *pnVar7;
  void *pvVar8;
  uint uVar9;
  
  sVar1 = *(size_t *)(this + 0x10);
  if (0x7fffffff - sVar1 < param_1) {
                    // WARNING: Subroutine does not return
    basic_string<>::_Xlen();
  }
  uVar2 = *(uint *)(this + 0x14);
  uVar9 = sVar1 + param_1 | 0xf;
  if (uVar9 < 0x80000000) {
    if (0x7fffffff - (uVar2 >> 1) < uVar2) {
      uVar9 = 0x7fffffff;
    }
    else {
      uVar4 = (uVar2 >> 1) + uVar2;
      if (uVar9 < uVar4) {
        uVar9 = uVar4;
      }
    }
  }
  else {
    uVar9 = 0x7fffffff;
  }
  uVar4 = uVar9 + 1;
  if (uVar4 < 0x1000) {
    if (uVar4 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      pvVar8 = operator_new(uVar4);
    }
  }
  else {
    uVar5 = uVar9 + 0x24;
    if (uVar5 <= uVar4) {
      uVar5 = 0xffffffff;
    }
    pvVar6 = operator_new(uVar5);
    if (pvVar6 == (void *)0x0) goto LAB_00403de4;
    pvVar8 = (void *)((int)pvVar6 + 0x23U & 0xffffffe0);
    *(void **)((int)pvVar8 - 4) = pvVar6;
  }
  *(size_t *)(this + 0x10) = sVar1 + param_1;
  *(uint *)(this + 0x14) = uVar9;
  pvVar6 = (void *)((int)pvVar8 + sVar1);
  if (uVar2 < 0x10) {
    memcpy(pvVar8,this,sVar1);
    memcpy(pvVar6,param_4,param_5);
    *(undefined1 *)(param_5 + (int)pvVar6) = 0;
    *(void **)this = pvVar8;
    return (basic_string<> *)this;
  }
  pvVar3 = *(void **)this;
  memcpy(pvVar8,pvVar3,sVar1);
  memcpy(pvVar6,param_4,param_5);
  pnVar7 = (nothrow_t *)(uVar2 + 1);
  *(undefined1 *)(param_5 + (int)pvVar6) = 0;
  pvVar6 = pvVar3;
  if ((nothrow_t *)0xfff < pnVar7) {
    pvVar6 = *(void **)((int)pvVar3 + -4);
    pnVar7 = (nothrow_t *)(uVar2 + 0x24);
    if (0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar6))) {
LAB_00403de4:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pvVar6,pnVar7);
  *(void **)this = pvVar8;
  return (basic_string<> *)this;
}


// public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > >
// __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >::end(void)

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


// public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > >
// __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >::begin(void)

void __thiscall std::basic_string<>::begin(basic_string<> *this)

{
  undefined4 *in_stack_00000004;
  
  if (0xf < *(uint *)(this + 0x14)) {
    this = *(basic_string<> **)this;
  }
  *in_stack_00000004 = this;
  return;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
// __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >::operator=(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const &)

basic_string<> * __thiscall
std::basic_string<>::operator=(basic_string<> *this,basic_string<> *param_1)

{
  basic_string<> *pbVar1;
  
  if (this != (basic_string<> *)param_1) {
    pbVar1 = param_1;
    if (0xf < *(uint *)(param_1 + 0x14)) {
      pbVar1 = *(basic_string<> **)param_1;
    }
    assign(this,(char *)pbVar1,*(uint *)(param_1 + 0x10));
  }
  return (basic_string<> *)this;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
// __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >::operator=(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > &&)

basic_string<> * __thiscall
std::basic_string<>::operator=(basic_string<> *this,basic_string<> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (this != (basic_string<> *)param_1) {
    word::~word((word *)this);
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
  }
  return (basic_string<> *)this;
}


// public: bool __thiscall std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >::_Equal(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const &)const 

bool __thiscall std::basic_string<>::_Equal(basic_string<> *this,basic_string<> *param_1)

{
  bool bVar1;
  basic_string<> *pbVar2;
  uint unaff_EBP;
  char *unaff_ESI;
  
  pbVar2 = param_1;
  if (0xf < *(uint *)(param_1 + 0x14)) {
    pbVar2 = *(basic_string<> **)param_1;
  }
  bVar1 = _Traits_equal<>((char *)pbVar2,*(uint *)(param_1 + 0x10),unaff_ESI,unaff_EBP);
  return bVar1;
}


// public: __thiscall std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
// std::allocator<wchar_t> >::~basic_string<wchar_t,struct std::char_traits<wchar_t>,class
// std::allocator<wchar_t> >(void)

void __thiscall std::basic_string<>::~basic_string<>(basic_string<> *this)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  if (7 < *(uint *)(this + 0x14)) {
    pvVar2 = *(void **)this;
    iVar1 = *(uint *)(this + 0x14) * 2;
    pnVar4 = (nothrow_t *)(iVar1 + 2);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(iVar1 + 0x25);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 7;
  *(undefined2 *)this = 0;
  return;
}


// public: void __thiscall std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
// std::allocator<wchar_t> >::_Tidy_deallocate(void)

void __thiscall std::basic_string<>::_Tidy_deallocate(basic_string<> *this)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  if (7 < *(uint *)(this + 0x14)) {
    pvVar2 = *(void **)this;
    iVar1 = *(uint *)(this + 0x14) * 2;
    pnVar4 = (nothrow_t *)(iVar1 + 2);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(iVar1 + 0x25);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 7;
  *(undefined2 *)this = 0;
  return;
}


// public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
// std::allocator<wchar_t> > & __thiscall std::basic_string<wchar_t,struct
// std::char_traits<wchar_t>,class std::allocator<wchar_t> >::_Reallocate_grow_by<class
// <lambda_38fb7828f6004e9a4c6a38bfc6df7f44>,wchar_t>(unsigned int,class
// <lambda_38fb7828f6004e9a4c6a38bfc6df7f44>,wchar_t)

basic_string<> * __thiscall
std::basic_string<>::_Reallocate_grow_by<>
          (basic_string<> *this,undefined4 param_1,undefined4 param_3,undefined2 param_4)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  nothrow_t *pnVar7;
  void *pvVar8;
  uint uVar9;
  void *pvVar10;
  
  iVar1 = *(int *)(this + 0x10);
  if (iVar1 == 0x7ffffffe) {
                    // WARNING: Subroutine does not return
    _Xlen();
  }
  uVar2 = *(uint *)(this + 0x14);
  uVar9 = iVar1 + 1U | 7;
  if (uVar9 < 0x7fffffff) {
    if (0x7ffffffe - (uVar2 >> 1) < uVar2) {
      uVar9 = 0x7ffffffe;
    }
    else {
      uVar6 = (uVar2 >> 1) + uVar2;
      if (uVar9 < uVar6) {
        uVar9 = uVar6;
      }
    }
  }
  else {
    uVar9 = 0x7ffffffe;
  }
  uVar6 = (uVar9 + 1) * 2;
  if (uVar9 + 1 < 0x80000000) {
    if (0xfff < uVar6) goto LAB_00419d59;
    if (uVar6 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      pvVar8 = operator_new(uVar6);
    }
  }
  else {
    uVar6 = 0xffffffff;
LAB_00419d59:
    uVar4 = uVar6 + 0x23;
    if (uVar4 <= uVar6) {
      uVar4 = 0xffffffff;
    }
    pvVar5 = operator_new(uVar4);
    if (pvVar5 == (void *)0x0) goto LAB_00419e0b;
    pvVar8 = (void *)((int)pvVar5 + 0x23U & 0xffffffe0);
    *(void **)((int)pvVar8 - 4) = pvVar5;
  }
  *(uint *)(this + 0x14) = uVar9;
  sVar3 = iVar1 * 2;
  *(int *)(this + 0x10) = iVar1 + 1;
  if (uVar2 < 8) {
    memcpy(pvVar8,this,sVar3);
    *(undefined2 *)(sVar3 + (int)pvVar8) = param_4;
    *(undefined2 *)(sVar3 + 2 + (int)pvVar8) = 0;
    *(void **)this = pvVar8;
    return (basic_string<> *)this;
  }
  pvVar5 = *(void **)this;
  memcpy(pvVar8,pvVar5,iVar1 * 2);
  *(undefined2 *)(iVar1 * 2 + (int)pvVar8) = param_4;
  *(undefined2 *)(iVar1 * 2 + 2 + (int)pvVar8) = 0;
  pnVar7 = (nothrow_t *)(uVar2 * 2 + 2);
  pvVar10 = pvVar5;
  if ((nothrow_t *)0xfff < pnVar7) {
    pvVar10 = *(void **)((int)pvVar5 + -4);
    pnVar7 = (nothrow_t *)(uVar2 * 2 + 0x25);
    if (0x1f < (uint)((int)pvVar5 + (-4 - (int)pvVar10))) {
LAB_00419e0b:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pvVar10,pnVar7);
  *(void **)this = pvVar8;
  return (basic_string<> *)this;
}


// public: void __thiscall std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
// std::allocator<wchar_t> >::_Construct<char *>(char *,char * const,struct std::input_iterator_tag)

void __thiscall
std::basic_string<>::_Construct<char*>(basic_string<> *this,char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  basic_string<> *pbVar3;
  char *pcVar4;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2cc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pcVar4 = param_1;
  while (pcVar4 != param_2) {
    cVar1 = *pcVar4;
    uVar2 = *(uint *)(this + 0x10);
    if (uVar2 < *(uint *)(this + 0x14)) {
      *(uint *)(this + 0x10) = uVar2 + 1;
      pbVar3 = this;
      if (7 < *(uint *)(this + 0x14)) {
        pbVar3 = *(basic_string<> **)this;
      }
      *(short *)(pbVar3 + uVar2 * 2) = (short)cVar1;
      *(undefined2 *)(pbVar3 + uVar2 * 2 + 2) = 0;
      pcVar4 = pcVar4 + 1;
    }
    else {
      param_1 = (char *)((uint)param_1 & 0xffffff00);
      _Reallocate_grow_by<>(this,uVar2,param_1,(short)cVar1);
      pcVar4 = pcVar4 + 1;
    }
  }
  ExceptionList = local_10;
  return;
}


// public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
// std::allocator<wchar_t> > & __thiscall std::basic_string<wchar_t,struct
// std::char_traits<wchar_t>,class std::allocator<wchar_t> >::_Reallocate_grow_by<class
// <lambda_4755c59c3a9e60a5b049353a7584df55> >(unsigned int,class
// <lambda_4755c59c3a9e60a5b049353a7584df55>)

basic_string<> * __thiscall
std::basic_string<>::_Reallocate_grow_by<>(basic_string<> *this,uint param_1)

{
  size_t sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  nothrow_t *pnVar7;
  uint uVar8;
  void *pvVar9;
  void *pvVar10;
  
  iVar2 = *(int *)(this + 0x10);
  if (0x7ffffffeU - iVar2 < param_1) {
                    // WARNING: Subroutine does not return
    _Xlen();
  }
  uVar3 = *(uint *)(this + 0x14);
  uVar8 = iVar2 + param_1 | 7;
  if (uVar8 < 0x7fffffff) {
    if (0x7ffffffe - (uVar3 >> 1) < uVar3) {
      uVar8 = 0x7ffffffe;
    }
    else {
      uVar6 = (uVar3 >> 1) + uVar3;
      if (uVar8 < uVar6) {
        uVar8 = uVar6;
      }
    }
  }
  else {
    uVar8 = 0x7ffffffe;
  }
  uVar6 = (uVar8 + 1) * 2;
  if (uVar8 + 1 < 0x80000000) {
    if (0xfff < uVar6) goto LAB_0041a0f0;
    if (uVar6 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      pvVar10 = operator_new(uVar6);
    }
  }
  else {
    uVar6 = 0xffffffff;
LAB_0041a0f0:
    uVar4 = uVar6 + 0x23;
    if (uVar4 <= uVar6) {
      uVar4 = 0xffffffff;
    }
    pvVar5 = operator_new(uVar4);
    if (pvVar5 == (void *)0x0) goto LAB_0041a187;
    pvVar10 = (void *)((int)pvVar5 + 0x23U & 0xffffffe0);
    *(void **)((int)pvVar10 - 4) = pvVar5;
  }
  *(uint *)(this + 0x10) = iVar2 + param_1;
  *(uint *)(this + 0x14) = uVar8;
  sVar1 = iVar2 * 2 + 2;
  if (uVar3 < 8) {
    memcpy(pvVar10,this,sVar1);
    *(void **)this = pvVar10;
    return (basic_string<> *)this;
  }
  pvVar5 = *(void **)this;
  memcpy(pvVar10,pvVar5,sVar1);
  pnVar7 = (nothrow_t *)(uVar3 * 2 + 2);
  pvVar9 = pvVar5;
  if ((nothrow_t *)0xfff < pnVar7) {
    pvVar9 = *(void **)((int)pvVar5 + -4);
    pnVar7 = (nothrow_t *)(uVar3 * 2 + 0x25);
    if (0x1f < (uint)((int)pvVar5 + (-4 - (int)pvVar9))) {
LAB_0041a187:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pvVar9,pnVar7);
  *(void **)this = pvVar10;
  return (basic_string<> *)this;
}


// public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > >
// __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >::erase(class std::_String_const_iterator<class std::_String_val<struct std::_Simple_types<char>
// > >)

void __thiscall std::basic_string<>::erase(basic_string<> *this,int *param_2,int param_3)

{
  uint uVar1;
  basic_string<> *pbVar2;
  int iVar3;
  uint uVar4;
  
  pbVar2 = this;
  if (0xf < *(uint *)(this + 0x14)) {
    pbVar2 = *(basic_string<> **)this;
  }
  uVar1 = *(uint *)(this + 0x10);
  uVar4 = param_3 - (int)pbVar2;
  if (uVar4 <= uVar1) {
    pbVar2 = this;
    if (0xf < *(uint *)(this + 0x14)) {
      pbVar2 = *(basic_string<> **)this;
    }
    iVar3 = uVar1 - (uVar1 != uVar4);
    *(int *)(this + 0x10) = iVar3;
    memmove(pbVar2 + uVar4,pbVar2 + uVar4 + (uVar1 != uVar4),(iVar3 - uVar4) + 1);
    if (0xf < *(uint *)(this + 0x14)) {
      this = *(basic_string<> **)this;
    }
    *param_2 = (int)(this + uVar4);
    return;
  }
                    // WARNING: Subroutine does not return
  _String_val<>::_Xran();
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
// __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >::operator=(char)

basic_string<> * __thiscall std::basic_string<>::operator=(basic_string<> *this,char param_1)

{
  basic_string<> *pbVar1;
  
  *(undefined4 *)(this + 0x10) = 1;
  pbVar1 = this;
  if (0xf < *(uint *)(this + 0x14)) {
    pbVar1 = *(basic_string<> **)this;
  }
  *pbVar1 = (basic_string<>)param_1;
  pbVar1[1] = (basic_string<>)0x0;
  return (basic_string<> *)this;
}


// public: unsigned int __thiscall std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >::find(char const * const,unsigned int)const 

uint __thiscall std::basic_string<>::find(basic_string<> *this,char *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *unaff_EBP;
  uint unaff_retaddr;
  
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar2 = _Traits_find<>((char *)0x0,(uint)param_1,(int)pcVar3 - (int)(param_1 + 1),unaff_EBP,
                         unaff_retaddr);
  return uVar2;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
// __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >::_Reallocate_grow_by<class <lambda_c1b8c41cb4019640539cfd828748c4d4>,unsigned
// int,char>(unsigned int,class <lambda_c1b8c41cb4019640539cfd828748c4d4>,unsigned int,char)

basic_string<> * __thiscall std::basic_string<>::_Reallocate_grow_by<>(basic_string<> *this)

{
  undefined1 *puVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  nothrow_t *pnVar7;
  uint uVar8;
  void *pvVar9;
  void *pvVar10;
  undefined1 in_stack_00000010;
  
  sVar2 = *(size_t *)(this + 0x10);
  if (sVar2 == 0x7fffffff) {
                    // WARNING: Subroutine does not return
    basic_string<>::_Xlen();
  }
  uVar3 = *(uint *)(this + 0x14);
  uVar8 = sVar2 + 1 | 0xf;
  if (uVar8 < 0x80000000) {
    if (0x7fffffff - (uVar3 >> 1) < uVar3) {
      uVar8 = 0x7fffffff;
    }
    else {
      uVar4 = (uVar3 >> 1) + uVar3;
      if (uVar8 < uVar4) {
        uVar8 = uVar4;
      }
    }
  }
  else {
    uVar8 = 0x7fffffff;
  }
  uVar4 = uVar8 + 1;
  if (uVar4 < 0x1000) {
    if (uVar4 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      pvVar10 = operator_new(uVar4);
    }
  }
  else {
    uVar5 = uVar8 + 0x24;
    if (uVar5 <= uVar4) {
      uVar5 = 0xffffffff;
    }
    pvVar6 = operator_new(uVar5);
    if (pvVar6 == (void *)0x0) goto LAB_0047f3ee;
    pvVar10 = (void *)((int)pvVar6 + 0x23U & 0xffffffe0);
    *(void **)((int)pvVar10 - 4) = pvVar6;
  }
  *(size_t *)(this + 0x10) = sVar2 + 1;
  *(uint *)(this + 0x14) = uVar8;
  puVar1 = (undefined1 *)((int)pvVar10 + sVar2);
  if (uVar3 < 0x10) {
    memcpy(pvVar10,this,sVar2);
    *puVar1 = in_stack_00000010;
    puVar1[1] = 0;
    *(void **)this = pvVar10;
    return (basic_string<> *)this;
  }
  pvVar6 = *(void **)this;
  memcpy(pvVar10,pvVar6,sVar2);
  *puVar1 = in_stack_00000010;
  pnVar7 = (nothrow_t *)(uVar3 + 1);
  puVar1[1] = 0;
  pvVar9 = pvVar6;
  if ((nothrow_t *)0xfff < pnVar7) {
    pvVar9 = *(void **)((int)pvVar6 + -4);
    pnVar7 = (nothrow_t *)(uVar3 + 0x24);
    if (0x1f < (uint)((int)pvVar6 + (-4 - (int)pvVar9))) {
LAB_0047f3ee:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pvVar9,pnVar7);
  *(void **)this = pvVar10;
  return (basic_string<> *)this;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
// __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >::replace(unsigned int,unsigned int,char const * const,unsigned int)

basic_string<> * __thiscall
std::basic_string<>::replace
          (basic_string<> *this,uint param_1,uint param_2,char *param_3,uint param_4)

{
  basic_string<> *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  size_t sVar5;
  basic_string<> *pbVar6;
  basic_string<> *pbVar7;
  basic_string<> *pbVar8;
  size_t sVar9;
  
  uVar3 = param_1;
  uVar2 = *(uint *)(this + 0x10);
  if (uVar2 < param_1) {
                    // WARNING: Subroutine does not return
    _String_val<>::_Xran();
  }
  uVar4 = uVar2 - param_1;
  if (uVar4 < param_2) {
    param_2 = uVar4;
  }
  if (param_2 == param_4) {
    pbVar8 = this;
    if (0xf < *(uint *)(this + 0x14)) {
      pbVar8 = *(basic_string<> **)this;
    }
    memmove(pbVar8 + param_1,param_3,param_4);
    return (basic_string<> *)this;
  }
  sVar5 = (uVar4 - param_2) + 1;
  if (param_4 < param_2) {
    *(uint *)(this + 0x10) = (uVar2 - param_2) + param_4;
    pbVar8 = this;
    if (0xf < *(uint *)(this + 0x14)) {
      pbVar8 = *(basic_string<> **)this;
    }
    pbVar8 = pbVar8 + param_1;
    memmove(pbVar8,param_3,param_4);
    memmove(pbVar8 + param_4,pbVar8 + param_2,sVar5);
    return (basic_string<> *)this;
  }
  uVar4 = param_4 - param_2;
  if (*(int *)(this + 0x14) - uVar2 < uVar4) {
    param_1 = param_1 & 0xffffff00;
    pbVar7 = _Reallocate_grow_by<>(this,uVar4,param_1,uVar3,param_2,param_3,param_4);
    return pbVar7;
  }
  *(uint *)(this + 0x10) = uVar4 + uVar2;
  pbVar8 = this;
  if (0xf < *(uint *)(this + 0x14)) {
    pbVar8 = *(basic_string<> **)this;
  }
  pbVar6 = pbVar8 + param_1;
  pbVar1 = pbVar6 + param_2;
  sVar9 = param_4;
  if ((pbVar6 < (basic_string<> *)(param_3 + param_4)) && (param_3 <= pbVar8 + uVar2)) {
    if (param_3 < pbVar1) {
      sVar9 = (int)pbVar1 - (int)param_3;
    }
    else {
      sVar9 = 0;
    }
  }
  memmove(pbVar1 + uVar4,pbVar1,sVar5);
  memmove(pbVar6,param_3,sVar9);
  memcpy(pbVar6 + sVar9,param_3 + uVar4 + sVar9,param_4 - sVar9);
  return (basic_string<> *)this;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
// __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >::_Reallocate_grow_by<class <lambda_f4fd5ca79072ce85a36b5022cfb0e6d1>,unsigned int,unsigned
// int,char const *,unsigned int>(unsigned int,class
// <lambda_f4fd5ca79072ce85a36b5022cfb0e6d1>,unsigned int,unsigned int,char const *,unsigned int)

basic_string<> * __thiscall
std::basic_string<>::_Reallocate_grow_by<>
          (basic_string<> *this,uint param_1,undefined4 param_3,size_t param_4,int param_5,
          void *param_6,size_t param_7)

{
  size_t sVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  nothrow_t *pnVar8;
  uint uVar9;
  void *pvVar10;
  
  iVar2 = *(int *)(this + 0x10);
  if (0x7fffffffU - iVar2 < param_1) {
                    // WARNING: Subroutine does not return
    basic_string<>::_Xlen();
  }
  uVar3 = *(uint *)(this + 0x14);
  uVar9 = iVar2 + param_1 | 0xf;
  if (uVar9 < 0x80000000) {
    if (0x7fffffff - (uVar3 >> 1) < uVar3) {
      uVar9 = 0x7fffffff;
    }
    else {
      uVar5 = (uVar3 >> 1) + uVar3;
      if (uVar9 < uVar5) {
        uVar9 = uVar5;
      }
    }
  }
  else {
    uVar9 = 0x7fffffff;
  }
  uVar5 = uVar9 + 1;
  if (uVar5 < 0x1000) {
    if (uVar5 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      pvVar10 = operator_new(uVar5);
    }
  }
  else {
    uVar6 = uVar9 + 0x24;
    if (uVar6 <= uVar5) {
      uVar6 = 0xffffffff;
    }
    pvVar7 = operator_new(uVar6);
    if (pvVar7 == (void *)0x0) goto LAB_004dcc90;
    pvVar10 = (void *)((int)pvVar7 + 0x23U & 0xffffffe0);
    *(void **)((int)pvVar10 - 4) = pvVar7;
  }
  *(uint *)(this + 0x10) = iVar2 + param_1;
  *(uint *)(this + 0x14) = uVar9;
  pvVar7 = (void *)((int)pvVar10 + param_4);
  sVar1 = ((iVar2 - param_4) - param_5) + 1;
  if (uVar3 < 0x10) {
    memcpy(pvVar10,this,param_4);
    memcpy(pvVar7,param_6,param_7);
    memcpy((void *)(param_7 + (int)pvVar7),this + param_4 + param_5,sVar1);
    *(void **)this = pvVar10;
    return (basic_string<> *)this;
  }
  pvVar4 = *(void **)this;
  memcpy(pvVar10,pvVar4,param_4);
  memcpy(pvVar7,param_6,param_7);
  memcpy((void *)(param_7 + (int)pvVar7),(void *)((int)pvVar4 + param_5 + param_4),sVar1);
  pnVar8 = (nothrow_t *)(uVar3 + 1);
  pvVar7 = pvVar4;
  if ((nothrow_t *)0xfff < pnVar8) {
    pvVar7 = *(void **)((int)pvVar4 + -4);
    pnVar8 = (nothrow_t *)(uVar3 + 0x24);
    if (0x1f < (uint)((int)pvVar4 + (-4 - (int)pvVar7))) {
LAB_004dcc90:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pvVar7,pnVar8);
  *(void **)this = pvVar10;
  return (basic_string<> *)this;
}
