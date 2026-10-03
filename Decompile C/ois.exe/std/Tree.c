#include "../ois.exe.h"


// protected: void __thiscall std::_Tree<class std::_Tmap_traits<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,float,struct std::less<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class
// std::allocator<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,float> >,0> >::_Erase(struct std::_Tree_node<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const
// ,float>,void *> *)

void __thiscall std::_Tree<>::_Erase(_Tree<> *this,_Tree_node<> *param_1)

{
  _Tree_node<> _Var1;
  uint uVar2;
  _Tree_node<> *p_Var3;
  void *pvVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  
  _Var1 = param_1[0xd];
  do {
    if (_Var1 != (_Tree_node<>)0x0) {
      return;
    }
    _Erase(this,*(_Tree_node<> **)(param_1 + 8));
    uVar2 = *(uint *)(param_1 + 0x24);
    p_Var3 = *(_Tree_node<> **)param_1;
    if (0xf < uVar2) {
      pvVar4 = *(void **)(param_1 + 0x10);
      pnVar6 = (nothrow_t *)(uVar2 + 1);
      pvVar5 = pvVar4;
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)pvVar4 + -4);
        pnVar6 = (nothrow_t *)(uVar2 + 0x24);
        if (0x1f < (uint)((int)pvVar4 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
    *(int *)(param_1 + 0x20) = 0;
    *(int *)(param_1 + 0x24) = 0xf;
    param_1[0x10] = (_Tree_node<>)0x0;
    operator_delete(param_1,(nothrow_t *)0x2c);
    _Var1 = p_Var3[0xd];
    param_1 = p_Var3;
  } while( true );
}


// protected: void __thiscall std::_Tree<class std::_Tmap_traits<int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct
// std::less<int>,class std::allocator<struct std::pair<int const ,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >,0>
// >::_Erase(struct std::_Tree_node<struct std::pair<int const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,void *> *)

void __thiscall std::_Tree<>::_Erase(_Tree<> *this,_Tree_node<> *param_1)

{
  _Tree_node<> _Var1;
  uint uVar2;
  _Tree_node<> *p_Var3;
  void *pvVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  
  _Var1 = param_1[0xd];
  do {
    if (_Var1 != (_Tree_node<>)0x0) {
      return;
    }
    _Erase((_Tree<> *)&startStationsPersector,*(_Tree_node<> **)(param_1 + 8));
    uVar2 = *(uint *)(param_1 + 0x28);
    p_Var3 = *(_Tree_node<> **)param_1;
    if (0xf < uVar2) {
      pvVar4 = *(void **)(param_1 + 0x14);
      pnVar6 = (nothrow_t *)(uVar2 + 1);
      pvVar5 = pvVar4;
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)pvVar4 + -4);
        pnVar6 = (nothrow_t *)(uVar2 + 0x24);
        if (0x1f < (uint)((int)pvVar4 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
    *(int *)(param_1 + 0x24) = 0;
    *(int *)(param_1 + 0x28) = 0xf;
    param_1[0x14] = (_Tree_node<>)0x0;
    operator_delete(param_1,(nothrow_t *)0x2c);
    _Var1 = p_Var3[0xd];
    param_1 = p_Var3;
  } while( true );
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
// std::pair<int const ,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > > __thiscall std::_Tree<class std::_Tmap_traits<int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct
// std::less<int>,class std::allocator<struct std::pair<int const ,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >,0>
// >::erase(class std::_Tree_const_iterator<class std::_Tree_val<struct
// std::_Tree_simple_types<struct std::pair<int const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > > >,class std::_Tree_const_iterator<class
// std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<int const ,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > > >)

int * __thiscall
std::_Tree<>::erase(undefined4 param_1,int *param_2,_Tree<> *param_3,_Tree<> *param_4)

{
  _Tree<> _Var1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  void *pvVar5;
  _Tree<> *p_Var6;
  _Tree<> *p_Var7;
  _Tree<> *p_Var8;
  void **ppvVar9;
  _Tree<> *p_Var10;
  _Tree_node<> *p_Var11;
  void *pvVar12;
  nothrow_t *pnVar13;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  p_Var7 = _startStationsPersector;
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b2730;
  local_10 = ExceptionList;
  ppvVar9 = &local_10;
  p_Var6 = param_3;
  if ((param_3 == *(_Tree<> **)_startStationsPersector) && (param_4 == _startStationsPersector)) {
    local_8 = 0;
    ExceptionList = &local_10;
    _Erase(param_4,*(_Tree_node<> **)(_startStationsPersector + 4));
    *(_Tree<> **)(_startStationsPersector + 4) = p_Var7;
    *(_Tree<> **)_startStationsPersector = p_Var7;
    *(_Tree<> **)(_startStationsPersector + 8) = p_Var7;
    DAT_0065d584 = 0;
    *param_2 = *(int *)_startStationsPersector;
    ExceptionList = local_10;
    return param_2;
  }
  do {
    ExceptionList = ppvVar9;
    if (p_Var6 == param_4) {
      *param_2 = (int)p_Var6;
      ExceptionList = local_10;
      return param_2;
    }
    param_3 = *(_Tree<> **)(p_Var6 + 8);
    if (param_3[0xd] == (_Tree<>)0x0) {
      _Var1 = (*(_Tree<> **)param_3)[0xd];
      p_Var7 = *(_Tree<> **)param_3;
      while (_Var1 == (_Tree<>)0x0) {
        _Var1 = (*(_Tree<> **)p_Var7)[0xd];
        param_3 = p_Var7;
        p_Var7 = *(_Tree<> **)p_Var7;
      }
    }
    else {
      _Var1 = (*(_Tree<> **)(p_Var6 + 4))[0xd];
      p_Var10 = *(_Tree<> **)(p_Var6 + 4);
      p_Var7 = p_Var6;
      while ((param_3 = p_Var10, _Var1 == (_Tree<>)0x0 && (p_Var7 == *(_Tree<> **)(param_3 + 8)))) {
        _Var1 = (*(_Tree<> **)(param_3 + 4))[0xd];
        p_Var10 = *(_Tree<> **)(param_3 + 4);
        p_Var7 = param_3;
      }
    }
    if (*(char *)((int)*(int **)(p_Var6 + 8) + 0xd) == '\0') {
      piVar3 = (int *)**(int **)(p_Var6 + 8);
      cVar2 = *(char *)((int)piVar3 + 0xd);
      while (cVar2 == '\0') {
        piVar3 = (int *)*piVar3;
        cVar2 = *(char *)((int)piVar3 + 0xd);
      }
    }
    else {
      _Var1 = (*(_Tree<> **)(p_Var6 + 4))[0xd];
      p_Var10 = *(_Tree<> **)(p_Var6 + 4);
      p_Var7 = p_Var6;
      while ((p_Var8 = p_Var10, _Var1 == (_Tree<>)0x0 && (p_Var7 == *(_Tree<> **)(p_Var8 + 8)))) {
        _Var1 = (*(_Tree<> **)(p_Var8 + 4))[0xd];
        p_Var10 = *(_Tree<> **)(p_Var8 + 4);
        p_Var7 = p_Var8;
      }
    }
    p_Var11 = _Tree_val<>::_Extract((_Tree_val<> *)&startStationsPersector,p_Var6);
    uVar4 = *(uint *)(p_Var11 + 0x28);
    if (0xf < uVar4) {
      pvVar5 = *(void **)(p_Var11 + 0x14);
      pnVar13 = (nothrow_t *)(uVar4 + 1);
      pvVar12 = pvVar5;
      if ((nothrow_t *)0xfff < pnVar13) {
        pvVar12 = *(void **)((int)pvVar5 + -4);
        pnVar13 = (nothrow_t *)(uVar4 + 0x24);
        if (0x1f < (uint)((int)pvVar5 + (-4 - (int)pvVar12))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar12,pnVar13);
    }
    *(undefined4 *)(p_Var11 + 0x24) = 0;
    *(undefined4 *)(p_Var11 + 0x28) = 0xf;
    p_Var11[0x14] = (_Tree_node<>)0x0;
    operator_delete(p_Var11,(nothrow_t *)0x2c);
    ppvVar9 = ExceptionList;
    p_Var6 = param_3;
  } while( true );
}


// public: class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
// std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,float> > > > __thiscall std::_Tree<class std::_Tmap_traits<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,float,struct
// std::less<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// >,class std::allocator<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,float> >,0> >::erase(class
// std::_Tree_const_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
// std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,float> > > >)

void __thiscall std::_Tree<>::erase(_Tree<> *this,int *param_2,int *param_3)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  int *piVar5;
  _Tree_node<> *p_Var6;
  void *pvVar7;
  nothrow_t *pnVar8;
  int *piVar9;
  
  piVar9 = (int *)param_3[2];
  if (*(char *)((int)piVar9 + 0xd) == '\0') {
    cVar1 = *(char *)(*piVar9 + 0xd);
    piVar4 = (int *)*piVar9;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar4 + 0xd);
      piVar9 = piVar4;
      piVar4 = (int *)*piVar4;
    }
  }
  else {
    cVar1 = *(char *)(param_3[1] + 0xd);
    piVar5 = (int *)param_3[1];
    piVar4 = param_3;
    while ((piVar9 = piVar5, cVar1 == '\0' && (piVar4 == (int *)piVar9[2]))) {
      cVar1 = *(char *)(piVar9[1] + 0xd);
      piVar5 = (int *)piVar9[1];
      piVar4 = piVar9;
    }
  }
  p_Var6 = _Tree_val<>::_Extract((_Tree_val<> *)this,param_3);
  uVar2 = *(uint *)(p_Var6 + 0x24);
  if (0xf < uVar2) {
    pvVar3 = *(void **)(p_Var6 + 0x10);
    pnVar8 = (nothrow_t *)(uVar2 + 1);
    pvVar7 = pvVar3;
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar7 = *(void **)((int)pvVar3 + -4);
      pnVar8 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar8);
  }
  *(undefined4 *)(p_Var6 + 0x20) = 0;
  *(undefined4 *)(p_Var6 + 0x24) = 0xf;
  p_Var6[0x10] = (_Tree_node<>)0x0;
  operator_delete(p_Var6,(nothrow_t *)0x2c);
  *param_2 = (int)piVar9;
  return;
}


// protected: struct std::pair<class std::_Tree_const_iterator<class std::_Tree_val<struct
// std::_Tree_simple_types<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,bool> > > >,class
// std::_Tree_const_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
// std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,bool> > > > > __thiscall std::_Tree<class std::_Tmap_traits<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,bool,struct
// std::less<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// >,class std::allocator<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,bool> >,0> >::_Eqrange<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)const 

void __thiscall std::_Tree<>::_Eqrange<>(_Tree<> *this,basic_string<> *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  bool bVar11;
  byte *in_stack_00000008;
  undefined4 *local_18;
  undefined4 *local_8;
  
  local_18 = *(undefined4 **)this;
  puVar6 = local_18 + 1;
  local_8 = local_18;
  if (*(char *)((int)local_18[1] + 0xd) == '\0') {
    uVar1 = *(uint *)(in_stack_00000008 + 0x10);
    puVar8 = (undefined4 *)local_18[1];
    do {
      pbVar7 = (byte *)(puVar8 + 4);
      pbVar5 = in_stack_00000008;
      if (0xf < *(uint *)(in_stack_00000008 + 0x14)) {
        pbVar5 = *(byte **)in_stack_00000008;
      }
      pbVar10 = pbVar7;
      if (0xf < (uint)puVar8[9]) {
        pbVar10 = *(byte **)pbVar7;
      }
      uVar3 = puVar8[8];
      if (*(uint *)(in_stack_00000008 + 0x10) < (uint)puVar8[8]) {
        uVar3 = *(uint *)(in_stack_00000008 + 0x10);
      }
      while (uVar4 = uVar3 - 4, 3 < uVar3) {
        if (*(int *)pbVar10 != *(int *)pbVar5) goto LAB_00414568;
        pbVar10 = pbVar10 + 4;
        pbVar5 = pbVar5 + 4;
        uVar3 = uVar4;
      }
      if (uVar4 == 0xfffffffc) {
LAB_0041459c:
        uVar3 = 0;
      }
      else {
LAB_00414568:
        bVar11 = *pbVar10 < *pbVar5;
        if ((*pbVar10 == *pbVar5) &&
           ((uVar4 == 0xfffffffd ||
            ((bVar11 = pbVar10[1] < pbVar5[1], pbVar10[1] == pbVar5[1] &&
             ((uVar4 == 0xfffffffe ||
              ((bVar11 = pbVar10[2] < pbVar5[2], pbVar10[2] == pbVar5[2] &&
               ((uVar4 == 0xffffffff || (bVar11 = pbVar10[3] < pbVar5[3], pbVar10[3] == pbVar5[3])))
               ))))))))) goto LAB_0041459c;
        uVar3 = -(uint)bVar11 | 1;
      }
      if (uVar3 == 0) {
        uVar3 = puVar8[8];
        if (uVar3 < uVar1) {
          puVar9 = (undefined4 *)puVar8[2];
        }
        else {
LAB_004145c4:
          if (*(char *)((int)local_8 + 0xd) != '\0') {
            if (0xf < (uint)puVar8[9]) {
              pbVar7 = *(byte **)pbVar7;
            }
            pbVar5 = in_stack_00000008;
            if (0xf < *(uint *)(in_stack_00000008 + 0x14)) {
              pbVar5 = *(byte **)in_stack_00000008;
            }
            uVar4 = uVar1;
            if (uVar3 < uVar1) {
              uVar4 = uVar3;
            }
            while (uVar2 = uVar4 - 4, 3 < uVar4) {
              if (*(int *)pbVar5 != *(int *)pbVar7) goto LAB_00414608;
              pbVar5 = pbVar5 + 4;
              pbVar7 = pbVar7 + 4;
              uVar4 = uVar2;
            }
            if (uVar2 == 0xfffffffc) {
LAB_0041463c:
              uVar4 = 0;
            }
            else {
LAB_00414608:
              bVar11 = *pbVar5 < *pbVar7;
              if ((*pbVar5 == *pbVar7) &&
                 ((uVar2 == 0xfffffffd ||
                  ((bVar11 = pbVar5[1] < pbVar7[1], pbVar5[1] == pbVar7[1] &&
                   ((uVar2 == 0xfffffffe ||
                    ((bVar11 = pbVar5[2] < pbVar7[2], pbVar5[2] == pbVar7[2] &&
                     ((uVar2 == 0xffffffff ||
                      (bVar11 = pbVar5[3] < pbVar7[3], pbVar5[3] == pbVar7[3]))))))))))))
              goto LAB_0041463c;
              uVar4 = -(uint)bVar11 | 1;
            }
            if (uVar4 == 0) {
              if (*(uint *)(in_stack_00000008 + 0x10) < uVar3) {
LAB_0041464e:
                local_8 = puVar8;
              }
            }
            else if ((int)uVar4 < 0) goto LAB_0041464e;
          }
          puVar9 = (undefined4 *)*puVar8;
          local_18 = puVar8;
        }
      }
      else {
        if (-1 < (int)uVar3) {
          uVar3 = puVar8[8];
          goto LAB_004145c4;
        }
        puVar9 = (undefined4 *)puVar8[2];
      }
      puVar8 = puVar9;
    } while (*(char *)((int)puVar9 + 0xd) == '\0');
  }
  if (*(char *)((int)local_8 + 0xd) == '\0') {
    puVar6 = local_8;
  }
  if (*(char *)((int)*puVar6 + 0xd) == '\0') {
    puVar6 = (undefined4 *)*puVar6;
    do {
      pbVar7 = (byte *)(puVar6 + 4);
      if (0xf < (uint)puVar6[9]) {
        pbVar7 = (byte *)puVar6[4];
      }
      pbVar5 = in_stack_00000008;
      if (0xf < *(uint *)(in_stack_00000008 + 0x14)) {
        pbVar5 = *(byte **)in_stack_00000008;
      }
      uVar1 = puVar6[8];
      uVar3 = *(uint *)(in_stack_00000008 + 0x10);
      if (uVar1 < *(uint *)(in_stack_00000008 + 0x10)) {
        uVar3 = uVar1;
      }
      while (uVar4 = uVar3 - 4, 3 < uVar3) {
        if (*(int *)pbVar5 != *(int *)pbVar7) goto LAB_004146cd;
        pbVar5 = pbVar5 + 4;
        pbVar7 = pbVar7 + 4;
        uVar3 = uVar4;
      }
      if (uVar4 == 0xfffffffc) {
LAB_00414701:
        uVar3 = 0;
      }
      else {
LAB_004146cd:
        bVar11 = *pbVar5 < *pbVar7;
        if ((*pbVar5 == *pbVar7) &&
           ((uVar4 == 0xfffffffd ||
            ((bVar11 = pbVar5[1] < pbVar7[1], pbVar5[1] == pbVar7[1] &&
             ((uVar4 == 0xfffffffe ||
              ((bVar11 = pbVar5[2] < pbVar7[2], pbVar5[2] == pbVar7[2] &&
               ((uVar4 == 0xffffffff || (bVar11 = pbVar5[3] < pbVar7[3], pbVar5[3] == pbVar7[3])))))
              ))))))) goto LAB_00414701;
        uVar3 = -(uint)bVar11 | 1;
      }
      if (uVar3 == 0) {
        if (uVar1 <= *(uint *)(in_stack_00000008 + 0x10)) goto LAB_0041470e;
LAB_00414737:
        puVar8 = (undefined4 *)*puVar6;
        local_8 = puVar6;
      }
      else {
        if ((int)uVar3 < 0) goto LAB_00414737;
LAB_0041470e:
        puVar8 = (undefined4 *)puVar6[2];
      }
      puVar6 = puVar8;
    } while (*(char *)((int)puVar8 + 0xd) == '\0');
  }
  *(undefined4 **)param_1 = local_18;
  *(undefined4 **)(param_1 + 4) = local_8;
  return;
}


// public: class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
// std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,int> > > > __thiscall std::_Tree<class std::_Tmap_traits<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,int,struct
// std::less<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// >,class std::allocator<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,int> >,0> >::lower_bound(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)

void __thiscall std::_Tree<>::lower_bound(_Tree<> *this,basic_string<> *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  byte *in_stack_00000008;
  undefined4 *local_c;
  
  local_c = *(undefined4 **)this;
  if (*(char *)((int)local_c[1] + 0xd) == '\0') {
    uVar1 = *(uint *)(in_stack_00000008 + 0x10);
    puVar7 = (undefined4 *)local_c[1];
    do {
      pbVar6 = in_stack_00000008;
      if (0xf < *(uint *)(in_stack_00000008 + 0x14)) {
        pbVar6 = *(byte **)in_stack_00000008;
      }
      pbVar4 = (byte *)(puVar7 + 4);
      if (0xf < (uint)puVar7[9]) {
        pbVar4 = (byte *)puVar7[4];
      }
      uVar2 = puVar7[8];
      uVar5 = uVar2;
      if (uVar1 < uVar2) {
        uVar5 = uVar1;
      }
      while (uVar3 = uVar5 - 4, 3 < uVar5) {
        if (*(int *)pbVar4 != *(int *)pbVar6) goto LAB_00414896;
        pbVar4 = pbVar4 + 4;
        pbVar6 = pbVar6 + 4;
        uVar5 = uVar3;
      }
      if (uVar3 == 0xfffffffc) {
LAB_004148ca:
        uVar5 = 0;
      }
      else {
LAB_00414896:
        bVar9 = *pbVar4 < *pbVar6;
        if ((*pbVar4 == *pbVar6) &&
           ((uVar3 == 0xfffffffd ||
            ((bVar9 = pbVar4[1] < pbVar6[1], pbVar4[1] == pbVar6[1] &&
             ((uVar3 == 0xfffffffe ||
              ((bVar9 = pbVar4[2] < pbVar6[2], pbVar4[2] == pbVar6[2] &&
               ((uVar3 == 0xffffffff || (bVar9 = pbVar4[3] < pbVar6[3], pbVar4[3] == pbVar6[3]))))))
             )))))) goto LAB_004148ca;
        uVar5 = -(uint)bVar9 | 1;
      }
      if (uVar5 == 0) {
        if (uVar2 < uVar1) goto LAB_004148f9;
LAB_004148d5:
        puVar8 = (undefined4 *)*puVar7;
        local_c = puVar7;
      }
      else {
        if (-1 < (int)uVar5) goto LAB_004148d5;
LAB_004148f9:
        puVar8 = (undefined4 *)puVar7[2];
      }
      puVar7 = puVar8;
    } while (*(char *)((int)puVar8 + 0xd) == '\0');
  }
  *(undefined4 **)param_1 = local_c;
  return;
}


// protected: class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
// std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,bool> > > > __thiscall std::_Tree<class std::_Tmap_traits<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,bool,struct
// std::less<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// >,class std::allocator<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,bool> >,0> >::_Insert_hint<struct
// std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,bool> &,struct std::_Tree_node<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,bool>,void *> *>(class
// std::_Tree_const_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
// std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,bool> > > >,struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,bool> &,struct std::_Tree_node<struct
// std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,bool>,void *> *)

undefined4 * __thiscall
std::_Tree<>::_Insert_hint<>
          (_Tree<> *this,undefined4 *param_2,pair<> *param_3,_Tree_node<> *param_4)

{
  pair<> pVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  pair<> *ppVar9;
  pair<> *ppVar10;
  _Tree_node<> *p_Var11;
  pair<> *ppVar12;
  pair<> *ppVar13;
  pair<> *ppVar14;
  _Tree_node<> *p_Var15;
  _Tree_node<> *p_Var16;
  bool bVar17;
  bool bVar18;
  uint uStack_38;
  undefined1 local_28 [4];
  pair<> *local_24;
  pair<> *local_20;
  uint local_1c;
  _Tree<> *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2770;
  local_10 = ExceptionList;
  uStack_38 = ___security_cookie ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  bVar18 = SUB41(param_2,0);
  local_18 = this;
  if (*(int *)(this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_38;
    _Tree<>::_Insert_at<>
              ((_Tree<> *)this,bVar18,(_Tree_node<> *)&DAT_00000001,*(pair<> **)this,
               (_Tree_node<> *)this);
    ExceptionList = local_10;
    return param_2;
  }
  local_24 = *(pair<> **)this;
  if (param_3 != *(pair<> **)local_24) {
    if (param_3 != local_24) {
      ppVar10 = param_3 + 0x10;
      if (0xf < *(uint *)(param_3 + 0x24)) {
        ppVar10 = *(pair<> **)(param_3 + 0x10);
      }
      ppVar12 = (pair<> *)param_4;
      if (0xf < *(uint *)(param_4 + 0x14)) {
        ppVar12 = *(pair<> **)param_4;
      }
      local_1c = *(uint *)(param_4 + 0x10);
      uVar7 = local_1c;
      if (*(uint *)(param_3 + 0x20) < local_1c) {
        uVar7 = *(uint *)(param_3 + 0x20);
      }
      while (uVar5 = uVar7 - 4, 3 < uVar7) {
        if (*(int *)ppVar12 != *(int *)ppVar10) goto LAB_00414bd7;
        ppVar12 = ppVar12 + 4;
        ppVar10 = ppVar10 + 4;
        uVar7 = uVar5;
      }
      if (uVar5 == 0xfffffffc) {
LAB_00414c0b:
        uVar7 = 0;
      }
      else {
LAB_00414bd7:
        bVar17 = (byte)*ppVar12 < (byte)*ppVar10;
        if ((*ppVar12 == *ppVar10) &&
           ((uVar5 == 0xfffffffd ||
            ((bVar17 = (byte)ppVar12[1] < (byte)ppVar10[1], ppVar12[1] == ppVar10[1] &&
             ((uVar5 == 0xfffffffe ||
              ((bVar17 = (byte)ppVar12[2] < (byte)ppVar10[2], ppVar12[2] == ppVar10[2] &&
               ((uVar5 == 0xffffffff ||
                (bVar17 = (byte)ppVar12[3] < (byte)ppVar10[3], ppVar12[3] == ppVar10[3]))))))))))))
        goto LAB_00414c0b;
        uVar7 = -(uint)bVar17 | 1;
      }
      if (uVar7 == 0) {
        if (*(uint *)(param_4 + 0x10) < *(uint *)(param_3 + 0x20)) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)(*(uint *)(param_3 + 0x20) < *(uint *)(param_4 + 0x10));
        }
      }
      if ((int)uVar7 < 0) {
        if (param_3[0xd] == (pair<>)0x0) {
          ppVar10 = *(pair<> **)param_3;
          if (ppVar10[0xd] == (pair<>)0x0) {
            pVar1 = (*(pair<> **)(ppVar10 + 8))[0xd];
            ppVar12 = *(pair<> **)(ppVar10 + 8);
            while (pVar1 == (pair<>)0x0) {
              pVar1 = (*(pair<> **)(ppVar12 + 8))[0xd];
              ppVar10 = ppVar12;
              ppVar12 = *(pair<> **)(ppVar12 + 8);
            }
          }
          else {
            pVar1 = (*(pair<> **)(param_3 + 4))[0xd];
            ppVar12 = *(pair<> **)(param_3 + 4);
            ppVar10 = param_3;
            while ((ppVar13 = ppVar12, pVar1 == (pair<>)0x0 && (ppVar10 == *(pair<> **)ppVar13))) {
              pVar1 = (*(pair<> **)(ppVar13 + 4))[0xd];
              ppVar12 = *(pair<> **)(ppVar13 + 4);
              ppVar10 = ppVar13;
            }
            if (ppVar10[0xd] == (pair<>)0x0) {
              ppVar10 = ppVar13;
            }
          }
        }
        else {
          ppVar10 = *(pair<> **)(param_3 + 8);
        }
        ppVar12 = (pair<> *)param_4;
        if (0xf < *(uint *)(param_4 + 0x14)) {
          ppVar12 = *(pair<> **)param_4;
        }
        ppVar13 = ppVar10 + 0x10;
        if (0xf < *(uint *)(ppVar10 + 0x24)) {
          ppVar13 = *(pair<> **)(ppVar10 + 0x10);
        }
        uVar7 = *(uint *)(ppVar10 + 0x20);
        if (local_1c < *(uint *)(ppVar10 + 0x20)) {
          uVar7 = local_1c;
        }
        while (uVar5 = uVar7 - 4, 3 < uVar7) {
          if (*(int *)ppVar13 != *(int *)ppVar12) goto LAB_00414cc8;
          ppVar13 = ppVar13 + 4;
          ppVar12 = ppVar12 + 4;
          uVar7 = uVar5;
        }
        if (uVar5 == 0xfffffffc) {
LAB_00414cfc:
          uVar7 = 0;
        }
        else {
LAB_00414cc8:
          bVar17 = (byte)*ppVar13 < (byte)*ppVar12;
          if ((*ppVar13 == *ppVar12) &&
             ((uVar5 == 0xfffffffd ||
              ((bVar17 = (byte)ppVar13[1] < (byte)ppVar12[1], ppVar13[1] == ppVar12[1] &&
               ((uVar5 == 0xfffffffe ||
                ((bVar17 = (byte)ppVar13[2] < (byte)ppVar12[2], ppVar13[2] == ppVar12[2] &&
                 ((uVar5 == 0xffffffff ||
                  (bVar17 = (byte)ppVar13[3] < (byte)ppVar12[3], ppVar13[3] == ppVar12[3])))))))))))
             ) goto LAB_00414cfc;
          uVar7 = -(uint)bVar17 | 1;
        }
        if (uVar7 == 0) {
          if (*(uint *)(ppVar10 + 0x20) < local_1c) {
            uVar7 = 0xffffffff;
          }
          else {
            uVar7 = (uint)(local_1c < *(uint *)(ppVar10 + 0x20));
          }
        }
        if ((int)uVar7 < 0) {
          p_Var11 = *(_Tree_node<> **)(ppVar10 + 8);
          if (p_Var11[0xd] != (_Tree_node<>)0x0) {
            local_14 = (undefined1 *)&uStack_38;
            _Tree<>::_Insert_at<>((_Tree<> *)this,bVar18,(_Tree_node<> *)0x0,ppVar10,p_Var11);
            ExceptionList = local_10;
            return param_2;
          }
          local_14 = (undefined1 *)&uStack_38;
          _Tree<>::_Insert_at<>
                    ((_Tree<> *)this,bVar18,(_Tree_node<> *)&DAT_00000001,param_3,p_Var11);
          ExceptionList = local_10;
          return param_2;
        }
      }
      ppVar14 = (pair<> *)param_4;
      if (0xf < *(uint *)(param_4 + 0x14)) {
        ppVar14 = *(pair<> **)param_4;
      }
      ppVar9 = (pair<> *)(param_3 + 0x10);
      if (0xf < *(uint *)(param_3 + 0x24)) {
        ppVar9 = *(pair<> **)(param_3 + 0x10);
      }
      uVar7 = *(uint *)(param_3 + 0x20);
      if (*(uint *)(param_4 + 0x10) < *(uint *)(param_3 + 0x20)) {
        uVar7 = *(uint *)(param_4 + 0x10);
      }
      while (uVar5 = uVar7 - 4, 3 < uVar7) {
        if (*(int *)ppVar9 != *(int *)ppVar14) goto LAB_00414db6;
        ppVar9 = ppVar9 + 4;
        ppVar14 = ppVar14 + 4;
        uVar7 = uVar5;
      }
      if (uVar5 == 0xfffffffc) {
LAB_00414dea:
        uVar7 = 0;
      }
      else {
LAB_00414db6:
        bVar17 = (byte)*ppVar9 < (byte)*ppVar14;
        if ((*ppVar9 == *ppVar14) &&
           ((uVar5 == 0xfffffffd ||
            ((bVar17 = (byte)ppVar9[1] < (byte)ppVar14[1], ppVar9[1] == ppVar14[1] &&
             ((uVar5 == 0xfffffffe ||
              ((bVar17 = (byte)ppVar9[2] < (byte)ppVar14[2], ppVar9[2] == ppVar14[2] &&
               ((uVar5 == 0xffffffff ||
                (bVar17 = (byte)ppVar9[3] < (byte)ppVar14[3], ppVar9[3] == ppVar14[3]))))))))))))
        goto LAB_00414dea;
        uVar7 = -(uint)bVar17 | 1;
      }
      if (uVar7 == 0) {
        ppVar9 = (pair<> *)(param_3 + 0x10);
        if (*(uint *)(param_3 + 0x20) < *(uint *)(param_4 + 0x10)) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)(*(uint *)(param_4 + 0x10) < *(uint *)(param_3 + 0x20));
        }
      }
      puVar4 = &uStack_38;
      if (-1 < (int)uVar7) goto LAB_00414f11;
      local_20 = param_3;
      _Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_20);
      if (local_20 == local_24) goto LAB_00414eba;
      p_Var16 = (_Tree_node<> *)(local_20 + 0x10);
      if (0xf < *(uint *)(local_20 + 0x24)) {
        p_Var16 = *(_Tree_node<> **)(local_20 + 0x10);
      }
      p_Var15 = param_4;
      if (0xf < *(uint *)(param_4 + 0x14)) {
        p_Var15 = *(_Tree_node<> **)param_4;
      }
      uVar7 = local_1c;
      if (*(uint *)(local_20 + 0x20) < local_1c) {
        uVar7 = *(uint *)(local_20 + 0x20);
      }
      while (uVar5 = uVar7 - 4, 3 < uVar7) {
        if (*(int *)p_Var15 != *(int *)p_Var16) goto LAB_00414e66;
        p_Var15 = p_Var15 + 4;
        p_Var16 = p_Var16 + 4;
        uVar7 = uVar5;
      }
      if (uVar5 == 0xfffffffc) {
LAB_00414e9a:
        uVar7 = 0;
      }
      else {
LAB_00414e66:
        bVar17 = (byte)*p_Var15 < (byte)*p_Var16;
        if ((*p_Var15 == *p_Var16) &&
           ((uVar5 == 0xfffffffd ||
            ((bVar17 = (byte)p_Var15[1] < (byte)p_Var16[1], p_Var15[1] == p_Var16[1] &&
             ((uVar5 == 0xfffffffe ||
              ((bVar17 = (byte)p_Var15[2] < (byte)p_Var16[2], p_Var15[2] == p_Var16[2] &&
               ((uVar5 == 0xffffffff ||
                (bVar17 = (byte)p_Var15[3] < (byte)p_Var16[3], p_Var15[3] == p_Var16[3]))))))))))))
        goto LAB_00414e9a;
        uVar7 = -(uint)bVar17 | 1;
      }
      if (uVar7 == 0) {
        if (local_1c < *(uint *)(local_20 + 0x20)) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)(*(uint *)(local_20 + 0x20) < local_1c);
        }
      }
      ppVar9 = (pair<> *)(uVar7 >> 0x1f);
      puVar4 = (uint *)local_14;
      if ((int)uVar7 < 0) {
LAB_00414eba:
        p_Var11 = *(_Tree_node<> **)(param_3 + 8);
        if (p_Var11[0xd] != (_Tree_node<>)0x0) {
          _Tree<>::_Insert_at<>((_Tree<> *)local_18,bVar18,(_Tree_node<> *)0x0,param_3,p_Var11);
          ExceptionList = local_10;
          return param_2;
        }
        _Tree<>::_Insert_at<>
                  ((_Tree<> *)local_18,bVar18,(_Tree_node<> *)&DAT_00000001,local_20,p_Var11);
        ExceptionList = local_10;
        return param_2;
      }
      goto LAB_00414f11;
    }
    iVar2 = *(int *)(local_24 + 8);
    p_Var11 = (_Tree_node<> *)param_4;
    if (0xf < *(uint *)(param_4 + 0x14)) {
      p_Var11 = *(_Tree_node<> **)param_4;
    }
    ppVar9 = (pair<> *)(iVar2 + 0x10);
    if (0xf < *(uint *)(iVar2 + 0x24)) {
      ppVar9 = *(pair<> **)(iVar2 + 0x10);
    }
    uVar7 = *(uint *)(param_4 + 0x10);
    uVar5 = *(uint *)(iVar2 + 0x20);
    uVar6 = uVar5;
    if (uVar7 < uVar5) {
      uVar6 = uVar7;
    }
    while (uVar3 = uVar6 - 4, 3 < uVar6) {
      if (*(int *)ppVar9 != *(int *)p_Var11) goto LAB_00414b16;
      ppVar9 = ppVar9 + 4;
      p_Var11 = p_Var11 + 4;
      uVar6 = uVar3;
    }
    if (uVar3 == 0xfffffffc) {
LAB_00414b4a:
      uVar6 = 0;
    }
    else {
LAB_00414b16:
      bVar17 = (byte)*(_Tree_node<> *)ppVar9 < (byte)*p_Var11;
      if ((*(_Tree_node<> *)ppVar9 == *p_Var11) &&
         ((uVar3 == 0xfffffffd ||
          ((bVar17 = (byte)*(_Tree_node<> *)(ppVar9 + 1) < (byte)p_Var11[1],
           *(_Tree_node<> *)(ppVar9 + 1) == p_Var11[1] &&
           ((uVar3 == 0xfffffffe ||
            ((bVar17 = (byte)*(_Tree_node<> *)(ppVar9 + 2) < (byte)p_Var11[2],
             *(_Tree_node<> *)(ppVar9 + 2) == p_Var11[2] &&
             ((uVar3 == 0xffffffff ||
              (bVar17 = (byte)*(_Tree_node<> *)(ppVar9 + 3) < (byte)p_Var11[3],
              *(_Tree_node<> *)(ppVar9 + 3) == p_Var11[3])))))))))))) goto LAB_00414b4a;
      uVar6 = -(uint)bVar17 | 1;
    }
    if (uVar6 == 0) {
      if (uVar5 < uVar7) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = (uint)(uVar7 < uVar5);
      }
    }
    puVar4 = &uStack_38;
    if ((int)uVar6 < 0) {
      local_14 = (undefined1 *)&uStack_38;
      _Tree<>::_Insert_at<>
                ((_Tree<> *)this,bVar18,(_Tree_node<> *)0x0,*(pair<> **)(local_24 + 8),
                 (_Tree_node<> *)ppVar9);
      ExceptionList = local_10;
      return param_2;
    }
    goto LAB_00414f11;
  }
  ppVar9 = (pair<> *)(param_3 + 0x10);
  if (0xf < *(uint *)(param_3 + 0x24)) {
    ppVar9 = *(pair<> **)(param_3 + 0x10);
  }
  p_Var11 = (_Tree_node<> *)param_4;
  if (0xf < *(uint *)(param_4 + 0x14)) {
    p_Var11 = *(_Tree_node<> **)param_4;
  }
  uVar7 = *(uint *)(param_3 + 0x20);
  uVar5 = *(uint *)(param_4 + 0x10);
  if (uVar7 < *(uint *)(param_4 + 0x10)) {
    uVar5 = uVar7;
  }
  while (uVar6 = uVar5 - 4, 3 < uVar5) {
    if (*(int *)p_Var11 != *(int *)ppVar9) goto LAB_00414a46;
    p_Var11 = p_Var11 + 4;
    ppVar9 = ppVar9 + 4;
    uVar5 = uVar6;
  }
  if (uVar6 == 0xfffffffc) {
LAB_00414a7a:
    uVar5 = 0;
  }
  else {
LAB_00414a46:
    bVar17 = (byte)*p_Var11 < (byte)*(_Tree_node<> *)ppVar9;
    if ((*p_Var11 == *(_Tree_node<> *)ppVar9) &&
       ((uVar6 == 0xfffffffd ||
        ((bVar17 = (byte)p_Var11[1] < (byte)*(_Tree_node<> *)(ppVar9 + 1),
         p_Var11[1] == *(_Tree_node<> *)(ppVar9 + 1) &&
         ((uVar6 == 0xfffffffe ||
          ((bVar17 = (byte)p_Var11[2] < (byte)*(_Tree_node<> *)(ppVar9 + 2),
           p_Var11[2] == *(_Tree_node<> *)(ppVar9 + 2) &&
           ((uVar6 == 0xffffffff ||
            (bVar17 = (byte)p_Var11[3] < (byte)*(_Tree_node<> *)(ppVar9 + 3),
            p_Var11[3] == *(_Tree_node<> *)(ppVar9 + 3))))))))))))) goto LAB_00414a7a;
    uVar5 = -(uint)bVar17 | 1;
  }
  if (uVar5 == 0) {
    ppVar9 = (pair<> *)param_4;
    if (*(uint *)(param_4 + 0x10) < uVar7) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = (uint)(uVar7 < *(uint *)(param_4 + 0x10));
    }
  }
  puVar4 = &uStack_38;
  if ((int)uVar5 < 0) {
    local_14 = (undefined1 *)&uStack_38;
    _Tree<>::_Insert_at<>
              ((_Tree<> *)this,bVar18,(_Tree_node<> *)&DAT_00000001,param_3,(_Tree_node<> *)ppVar9);
    ExceptionList = local_10;
    return param_2;
  }
LAB_00414f11:
  local_14 = (undefined1 *)puVar4;
  local_8 = 0xffffffff;
  puVar8 = (undefined4 *)_Insert_nohint<>(local_18,SUB41(local_28,0),ppVar9,param_4);
  *param_2 = *puVar8;
  ExceptionList = local_10;
  return param_2;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// protected: class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
// std::pair<int const ,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > > __thiscall std::_Tree<class std::_Tmap_traits<int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct
// std::less<int>,class std::allocator<struct std::pair<int const ,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >,0>
// >::_Insert_hint<struct std::pair<int const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > &,struct std::_Tree_node<struct
// std::pair<int const ,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > >,void *> *>(class std::_Tree_const_iterator<class std::_Tree_val<struct
// std::_Tree_simple_types<struct std::pair<int const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > > >,struct std::pair<int const ,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > &,struct
// std::_Tree_node<struct std::pair<int const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,void *> *)

undefined4 * __thiscall
std::_Tree<>::_Insert_hint<>
          (_Tree<> *this,undefined4 *param_2,_Tree<> *param_3,_Tree_node<> *param_4)

{
  pair<> pVar1;
  int iVar2;
  pair<> *ppVar3;
  pair<> *ppVar4;
  pair<> *ppVar5;
  pair<> *ppVar6;
  undefined4 *puVar7;
  bool bVar8;
  uint uStack_2c;
  undefined1 local_1c [8];
  undefined1 *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2790;
  local_10 = ExceptionList;
  uStack_2c = ___security_cookie ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_2c;
  ExceptionList = &local_10;
  local_8 = 0;
  bVar8 = SUB41(param_2,0);
  if (DAT_0065d584 == 0) {
    local_14 = (undefined1 *)&uStack_2c;
    _Insert_at<>(this,bVar8,(_Tree_node<> *)&DAT_00000001,_startStationsPersector,
                 (_Tree_node<> *)this);
    ExceptionList = local_10;
    return param_2;
  }
  if (param_3 == *(_Tree<> **)_startStationsPersector) {
    if (*(int *)param_4 < *(int *)(param_3 + 0x10)) {
      local_14 = (undefined1 *)&uStack_2c;
      _Insert_at<>(param_3,bVar8,(_Tree_node<> *)&DAT_00000001,(pair<> *)param_3,
                   (_Tree_node<> *)param_3);
      ExceptionList = local_10;
      return param_2;
    }
  }
  else if (param_3 == (_Tree<> *)_startStationsPersector) {
    param_3 = *(_Tree<> **)(_startStationsPersector + 8);
    if (*(int *)(param_3 + 0x10) < *(int *)param_4) {
      local_14 = (undefined1 *)&uStack_2c;
      _Insert_at<>(param_3,bVar8,(_Tree_node<> *)0x0,(pair<> *)param_3,(_Tree_node<> *)param_3);
      ExceptionList = local_10;
      return param_2;
    }
  }
  else {
    iVar2 = *(int *)param_4;
    if (iVar2 < *(int *)(param_3 + 0x10)) {
      if (param_3[0xd] == (_Tree<>)0x0) {
        ppVar5 = *(pair<> **)param_3;
        if (ppVar5[0xd] == (pair<>)0x0) {
          pVar1 = (*(pair<> **)(ppVar5 + 8))[0xd];
          ppVar6 = *(pair<> **)(ppVar5 + 8);
          while (pVar1 == (pair<>)0x0) {
            pVar1 = (*(pair<> **)(ppVar6 + 8))[0xd];
            ppVar5 = ppVar6;
            ppVar6 = *(pair<> **)(ppVar6 + 8);
          }
        }
        else {
          pVar1 = (*(pair<> **)(param_3 + 4))[0xd];
          ppVar3 = *(pair<> **)(param_3 + 4);
          ppVar6 = (pair<> *)param_3;
          while ((ppVar5 = ppVar3, pVar1 == (pair<>)0x0 && (ppVar6 == *(pair<> **)ppVar5))) {
            pVar1 = (*(pair<> **)(ppVar5 + 4))[0xd];
            ppVar3 = *(pair<> **)(ppVar5 + 4);
            ppVar6 = ppVar5;
          }
          if (ppVar6[0xd] != (pair<>)0x0) {
            ppVar5 = ppVar6;
          }
        }
      }
      else {
        ppVar5 = *(pair<> **)(param_3 + 8);
      }
      iVar2 = *(int *)param_4;
      if (*(int *)(ppVar5 + 0x10) < iVar2) {
        if (*(char *)(*(int *)(ppVar5 + 8) + 0xd) == '\0') {
          local_14 = (undefined1 *)&uStack_2c;
          _Insert_at<>(param_3,bVar8,(_Tree_node<> *)&DAT_00000001,(pair<> *)param_3,
                       (_Tree_node<> *)param_3);
          ExceptionList = local_10;
          return param_2;
        }
        local_14 = (undefined1 *)&uStack_2c;
        _Insert_at<>(param_3,bVar8,(_Tree_node<> *)0x0,ppVar5,(_Tree_node<> *)param_3);
        ExceptionList = local_10;
        return param_2;
      }
    }
    if (*(int *)(param_3 + 0x10) < iVar2) {
      ppVar5 = *(pair<> **)(param_3 + 8);
      if (ppVar5[0xd] == (pair<>)0x0) {
        pVar1 = (*(pair<> **)ppVar5)[0xd];
        ppVar6 = ppVar5;
        ppVar3 = *(pair<> **)ppVar5;
        while (pVar1 == (pair<>)0x0) {
          pVar1 = (*(pair<> **)ppVar3)[0xd];
          ppVar6 = ppVar3;
          ppVar3 = *(pair<> **)ppVar3;
        }
      }
      else {
        pVar1 = (*(pair<> **)(param_3 + 4))[0xd];
        ppVar4 = *(pair<> **)(param_3 + 4);
        ppVar3 = (pair<> *)param_3;
        while ((ppVar6 = ppVar4, pVar1 == (pair<>)0x0 && (ppVar3 == *(pair<> **)(ppVar6 + 8)))) {
          pVar1 = (*(pair<> **)(ppVar6 + 4))[0xd];
          ppVar4 = *(pair<> **)(ppVar6 + 4);
          ppVar3 = ppVar6;
        }
      }
      if ((ppVar6 == _startStationsPersector) || (*(int *)param_4 < *(int *)(ppVar6 + 0x10))) {
        if (ppVar5[0xd] == (pair<>)0x0) {
          _Insert_at<>(param_3,bVar8,(_Tree_node<> *)&DAT_00000001,ppVar6,(_Tree_node<> *)param_3);
          ExceptionList = local_10;
          return param_2;
        }
        local_14 = (undefined1 *)&uStack_2c;
        _Insert_at<>(param_3,bVar8,(_Tree_node<> *)0x0,(pair<> *)param_3,(_Tree_node<> *)param_3);
        ExceptionList = local_10;
        return param_2;
      }
    }
  }
  local_8 = 0xffffffff;
  local_14 = (undefined1 *)&uStack_2c;
  puVar7 = (undefined4 *)_Insert_nohint<>(param_3,SUB41(local_1c,0),(pair<> *)param_3,param_4);
  *param_2 = *puVar7;
  ExceptionList = local_10;
  return param_2;
}


// protected: void __thiscall std::_Tree<class std::_Tmap_traits<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,int,struct std::less<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class
// std::allocator<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,int> >,0> >::_Destroy_if_node(struct std::_Tree_node<struct
// std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,int>,void *> *)

void __thiscall std::_Tree<>::_Destroy_if_node(_Tree<> *this,_Tree_node<> *param_1)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(param_1 + 0x10);
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
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xf;
  param_1[0x10] = (_Tree_node<>)0x0;
  operator_delete(param_1,(nothrow_t *)0x2c);
  return;
}


// protected: void __thiscall std::_Tree<class std::_Tmap_traits<int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct
// std::less<int>,class std::allocator<struct std::pair<int const ,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >,0>
// >::_Destroy_if_node(struct std::_Tree_node<struct std::pair<int const ,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,void *> *)

void __thiscall std::_Tree<>::_Destroy_if_node(_Tree<> *this,_Tree_node<> *param_1)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(param_1 + 0x14);
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
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xf;
  param_1[0x14] = (_Tree_node<>)0x0;
  operator_delete(param_1,(nothrow_t *)0x2c);
  return;
}


// protected: class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
// std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,int> > > > __thiscall std::_Tree<class std::_Tmap_traits<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,int,struct
// std::less<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// >,class std::allocator<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,int> >,0> >::_Insert_at<struct
// std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,int> &,struct std::_Tree_node<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,int>,void *> *>(bool,struct
// std::_Tree_node<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,int>,void *> *,struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,int> &,struct std::_Tree_node<struct
// std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,int>,void *> *)

void __thiscall
std::_Tree<>::_Insert_at<>
          (_Tree<> *this,bool param_1,_Tree_node<> *param_2,pair<> *param_3,_Tree_node<> *param_4)

{
  _Tree_node<> *p_Var1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  _Tree_node<> *p_Var5;
  _Tree_node<> *p_Var6;
  int *piVar7;
  _Tree_node<> *p_Var8;
  _Tree_node<> *p_Var9;
  int *piVar10;
  _Tree_node<> *p_Var11;
  undefined3 in_stack_00000005;
  _Tree_node<> *in_stack_00000014;
  
  if (0x5d1745b < *(uint *)(this + 4)) {
    _Destroy_if_node(this,in_stack_00000014);
                    // WARNING: Subroutine does not return
    std::_Xlength_error("map/set<T> too long");
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) + 1;
  *(pair<> **)(in_stack_00000014 + 4) = param_3;
  if (param_3 == *(pair<> **)this) {
    *(_Tree_node<> **)(*(pair<> **)this + 4) = in_stack_00000014;
    **(undefined4 **)this = in_stack_00000014;
    *(_Tree_node<> **)(*(int *)this + 8) = in_stack_00000014;
  }
  else if ((char)param_2 == '\0') {
    *(_Tree_node<> **)(param_3 + 8) = in_stack_00000014;
    if (param_3 == *(pair<> **)(*(int *)this + 8)) {
      *(_Tree_node<> **)(*(int *)this + 8) = in_stack_00000014;
    }
  }
  else {
    *(_Tree_node<> **)param_3 = in_stack_00000014;
    if (param_3 == (pair<> *)**(int **)this) {
      **(int **)this = (int)in_stack_00000014;
    }
  }
  cVar2 = *(char *)(*(int *)(in_stack_00000014 + 4) + 0xc);
  p_Var8 = in_stack_00000014;
  do {
    if (cVar2 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)this + 4) + 0xc) = 1;
      *_param_1 = in_stack_00000014;
      return;
    }
    p_Var9 = *(_Tree_node<> **)(p_Var8 + 4);
    p_Var11 = p_Var8 + 4;
    p_Var1 = p_Var9 + 4;
    p_Var5 = (_Tree_node<> *)**(int **)(p_Var9 + 4);
    if (p_Var9 == p_Var5) {
      p_Var5 = (_Tree_node<> *)(*(int **)(p_Var9 + 4))[2];
      if (p_Var5[0xc] != (_Tree_node<>)0x0) {
        p_Var5 = *(_Tree_node<> **)(p_Var9 + 8);
        if (p_Var8 == p_Var5) {
          *(int *)(p_Var9 + 8) = *(int *)p_Var5;
          if (*(char *)(*(int *)p_Var5 + 0xd) == '\0') {
            *(_Tree_node<> **)(*(int *)p_Var5 + 4) = p_Var9;
          }
          *(int *)(p_Var5 + 4) = *(int *)p_Var1;
          if (p_Var9 == *(_Tree_node<> **)(*(int *)this + 4)) {
            *(_Tree_node<> **)(*(int *)this + 4) = p_Var5;
            *(_Tree_node<> **)p_Var5 = p_Var9;
            *(_Tree_node<> **)p_Var1 = p_Var5;
            p_Var8 = p_Var9;
            p_Var9 = p_Var5;
            p_Var11 = p_Var1;
          }
          else {
            piVar7 = *(int **)p_Var1;
            if (p_Var9 == (_Tree_node<> *)*piVar7) {
              *piVar7 = (int)p_Var5;
              *(_Tree_node<> **)p_Var5 = p_Var9;
              *(_Tree_node<> **)p_Var1 = p_Var5;
              p_Var8 = p_Var9;
              p_Var9 = p_Var5;
              p_Var11 = p_Var1;
            }
            else {
              piVar7[2] = (int)p_Var5;
              *(_Tree_node<> **)p_Var5 = p_Var9;
              *(_Tree_node<> **)p_Var1 = p_Var5;
              p_Var8 = p_Var9;
              p_Var9 = p_Var5;
              p_Var11 = p_Var1;
            }
          }
        }
        p_Var9[0xc] = (_Tree_node<>)0x1;
        *(undefined1 *)(*(int *)(*(int *)p_Var11 + 4) + 0xc) = 0;
        piVar7 = *(int **)(*(int *)p_Var11 + 4);
        piVar10 = (int *)*piVar7;
        *piVar7 = piVar10[2];
        if (*(char *)(piVar10[2] + 0xd) == '\0') {
          *(int **)(piVar10[2] + 4) = piVar7;
        }
        piVar10[1] = piVar7[1];
        if (piVar7 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar10;
          piVar10[2] = (int)piVar7;
        }
        else {
          piVar3 = (int *)piVar7[1];
          if (piVar7 == (int *)piVar3[2]) {
            piVar3[2] = (int)piVar10;
            piVar10[2] = (int)piVar7;
          }
          else {
            *piVar3 = (int)piVar10;
            piVar10[2] = (int)piVar7;
          }
        }
        goto LAB_00415535;
      }
LAB_0041548c:
      p_Var9[0xc] = (_Tree_node<>)0x1;
      p_Var5[0xc] = (_Tree_node<>)0x1;
      *(undefined1 *)(*(int *)(*(int *)p_Var11 + 4) + 0xc) = 0;
      p_Var8 = *(_Tree_node<> **)(*(int *)p_Var11 + 4);
    }
    else {
      if (p_Var5[0xc] == (_Tree_node<>)0x0) goto LAB_0041548c;
      p_Var5 = *(_Tree_node<> **)p_Var9;
      p_Var6 = p_Var9;
      if (p_Var8 == p_Var5) {
        *(int *)p_Var9 = *(int *)(p_Var5 + 8);
        if (*(char *)(*(int *)(p_Var5 + 8) + 0xd) == '\0') {
          *(_Tree_node<> **)(*(int *)(p_Var5 + 8) + 4) = p_Var9;
        }
        *(int *)(p_Var5 + 4) = *(int *)p_Var1;
        if (p_Var9 == *(_Tree_node<> **)(*(int *)this + 4)) {
          *(_Tree_node<> **)(*(int *)this + 4) = p_Var5;
        }
        else {
          puVar4 = *(undefined4 **)p_Var1;
          if (p_Var9 == (_Tree_node<> *)puVar4[2]) {
            puVar4[2] = p_Var5;
          }
          else {
            *puVar4 = p_Var5;
          }
        }
        *(_Tree_node<> **)(p_Var5 + 8) = p_Var9;
        *(_Tree_node<> **)p_Var1 = p_Var5;
        p_Var6 = p_Var5;
        p_Var8 = p_Var9;
        p_Var11 = p_Var1;
      }
      p_Var6[0xc] = (_Tree_node<>)0x1;
      *(undefined1 *)(*(int *)(*(int *)p_Var11 + 4) + 0xc) = 0;
      piVar7 = *(int **)(*(int *)p_Var11 + 4);
      piVar10 = (int *)piVar7[2];
      piVar7[2] = *piVar10;
      if (*(char *)(*piVar10 + 0xd) == '\0') {
        *(int **)(*piVar10 + 4) = piVar7;
      }
      piVar10[1] = piVar7[1];
      if (piVar7 == *(int **)(*(int *)this + 4)) {
        *(int **)(*(int *)this + 4) = piVar10;
      }
      else {
        piVar3 = (int *)piVar7[1];
        if (piVar7 == (int *)*piVar3) {
          *piVar3 = (int)piVar10;
        }
        else {
          piVar3[2] = (int)piVar10;
        }
      }
      *piVar10 = (int)piVar7;
LAB_00415535:
      piVar7[1] = (int)piVar10;
    }
    cVar2 = *(char *)(*(int *)(p_Var8 + 4) + 0xc);
  } while( true );
}


// protected: struct std::pair<class std::_Tree_iterator<class std::_Tree_val<struct
// std::_Tree_simple_types<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,bool> > > >,bool> __thiscall
// std::_Tree<class std::_Tmap_traits<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,bool,struct std::less<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class
// std::allocator<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,bool> >,0> >::_Insert_nohint<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,bool>
// &,struct std::_Tree_node<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,bool>,void *> *>(bool,struct
// std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,bool> &,struct std::_Tree_node<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,bool>,void *> *)

void __thiscall
std::_Tree<>::_Insert_nohint<>(_Tree<> *this,bool param_1,pair<> *param_2,_Tree_node<> *param_3)

{
  pair<> pVar1;
  pair<> *ppVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  pair<> *ppVar10;
  pair<> *ppVar11;
  _Tree<> *this_00;
  pair<> *ppVar12;
  _Tree<> *p_Var13;
  bool bVar14;
  undefined3 in_stack_00000005;
  _Tree_node<> *in_stack_00000010;
  _Tree_node<> *local_20;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b27b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  bVar6 = 1;
  ppVar2 = *(pair<> **)this;
  local_20 = (_Tree_node<> *)CONCAT31(local_20._1_3_,1);
  ppVar11 = ppVar2;
  if ((*(pair<> **)(ppVar2 + 4))[0xd] == (pair<>)0x0) {
    uVar3 = *(uint *)(param_3 + 0x10);
    ppVar12 = *(pair<> **)(ppVar2 + 4);
    do {
      ppVar11 = ppVar12;
      ppVar12 = ppVar11 + 0x10;
      if (0xf < *(uint *)(ppVar11 + 0x24)) {
        ppVar12 = *(pair<> **)(ppVar11 + 0x10);
      }
      ppVar10 = (pair<> *)param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        ppVar10 = *(pair<> **)param_3;
      }
      uVar9 = *(uint *)(ppVar11 + 0x20);
      uVar7 = uVar3;
      if (uVar9 < uVar3) {
        uVar7 = uVar9;
      }
      while (uVar5 = uVar7 - 4, 3 < uVar7) {
        if (*(int *)ppVar10 != *(int *)ppVar12) goto LAB_0041560d;
        ppVar10 = ppVar10 + 4;
        ppVar12 = ppVar12 + 4;
        uVar7 = uVar5;
      }
      if (uVar5 == 0xfffffffc) {
LAB_00415641:
        uVar7 = 0;
      }
      else {
LAB_0041560d:
        bVar14 = (byte)*ppVar10 < (byte)*ppVar12;
        if ((*ppVar10 == *ppVar12) &&
           ((uVar5 == 0xfffffffd ||
            ((bVar14 = (byte)ppVar10[1] < (byte)ppVar12[1], ppVar10[1] == ppVar12[1] &&
             ((uVar5 == 0xfffffffe ||
              ((bVar14 = (byte)ppVar10[2] < (byte)ppVar12[2], ppVar10[2] == ppVar12[2] &&
               ((uVar5 == 0xffffffff ||
                (bVar14 = (byte)ppVar10[3] < (byte)ppVar12[3], ppVar10[3] == ppVar12[3]))))))))))))
        goto LAB_00415641;
        uVar7 = -(uint)bVar14 | 1;
      }
      if (uVar7 == 0) {
        if (uVar3 < uVar9) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)(uVar9 < uVar3);
        }
      }
      bVar4 = (byte)(uVar7 >> 0x18);
      bVar6 = bVar4 >> 7;
      local_20 = (_Tree_node<> *)CONCAT31(local_20._1_3_,bVar4 >> 7);
      if ((int)uVar7 < 0) {
        ppVar12 = *(pair<> **)ppVar11;
      }
      else {
        ppVar12 = *(pair<> **)(ppVar11 + 8);
      }
    } while (ppVar12[0xd] == (pair<>)0x0);
  }
  ppVar12 = ppVar11;
  if (bVar6 != 0) {
    if (ppVar11 == *(pair<> **)ppVar2) {
      local_20 = (_Tree_node<> *)&DAT_00000001;
      this_00 = (_Tree<> *)ppVar11;
      goto LAB_00415695;
    }
    if (ppVar11[0xd] == (pair<>)0x0) {
      ppVar12 = *(pair<> **)ppVar11;
      if (ppVar12[0xd] == (pair<>)0x0) {
        pVar1 = (*(pair<> **)(ppVar12 + 8))[0xd];
        ppVar2 = *(pair<> **)(ppVar12 + 8);
        while (pVar1 == (pair<>)0x0) {
          pVar1 = (*(pair<> **)(ppVar2 + 8))[0xd];
          ppVar12 = ppVar2;
          ppVar2 = *(pair<> **)(ppVar2 + 8);
        }
      }
      else {
        pVar1 = (*(pair<> **)(ppVar11 + 4))[0xd];
        ppVar2 = *(pair<> **)(ppVar11 + 4);
        ppVar12 = ppVar11;
        while ((ppVar10 = ppVar2, pVar1 == (pair<>)0x0 && (ppVar12 == *(pair<> **)ppVar10))) {
          pVar1 = (*(pair<> **)(ppVar10 + 4))[0xd];
          ppVar2 = *(pair<> **)(ppVar10 + 4);
          ppVar12 = ppVar10;
        }
        if (ppVar12[0xd] == (pair<>)0x0) {
          ppVar12 = ppVar10;
        }
      }
    }
    else {
      ppVar12 = *(pair<> **)(ppVar11 + 8);
    }
  }
  p_Var13 = (_Tree<> *)param_3;
  if (0xf < *(uint *)(param_3 + 0x14)) {
    p_Var13 = *(_Tree<> **)param_3;
  }
  this_00 = (_Tree<> *)(ppVar12 + 0x10);
  if (0xf < *(uint *)(ppVar12 + 0x24)) {
    this_00 = *(_Tree<> **)(ppVar12 + 0x10);
  }
  uVar3 = *(uint *)(param_3 + 0x10);
  uVar9 = *(uint *)(ppVar12 + 0x20);
  if (uVar3 < *(uint *)(ppVar12 + 0x20)) {
    uVar9 = uVar3;
  }
  while (uVar7 = uVar9 - 4, 3 < uVar9) {
    if (*(int *)this_00 != *(int *)p_Var13) goto LAB_0041575a;
    this_00 = this_00 + 4;
    p_Var13 = p_Var13 + 4;
    uVar9 = uVar7;
  }
  if (uVar7 == 0xfffffffc) {
LAB_0041578e:
    uVar9 = 0;
  }
  else {
LAB_0041575a:
    bVar14 = (byte)*this_00 < (byte)*p_Var13;
    if ((*this_00 == *p_Var13) &&
       ((uVar7 == 0xfffffffd ||
        ((bVar14 = (byte)this_00[1] < (byte)p_Var13[1], this_00[1] == p_Var13[1] &&
         ((uVar7 == 0xfffffffe ||
          ((bVar14 = (byte)this_00[2] < (byte)p_Var13[2], this_00[2] == p_Var13[2] &&
           ((uVar7 == 0xffffffff ||
            (bVar14 = (byte)this_00[3] < (byte)p_Var13[3], this_00[3] == p_Var13[3]))))))))))))
    goto LAB_0041578e;
    uVar9 = -(uint)bVar14 | 1;
  }
  if (uVar9 == 0) {
    if (*(uint *)(ppVar12 + 0x20) < uVar3) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar9 = (uint)(uVar3 < *(uint *)(ppVar12 + 0x20));
    }
  }
  if (-1 < (int)uVar9) {
    _Tree<>::_Destroy_if_node(this_00,in_stack_00000010);
    *_param_1 = ppVar12;
    *(undefined1 *)(_param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
LAB_00415695:
  puVar8 = (undefined4 *)
           _Tree<>::_Insert_at<>
                     ((_Tree<> *)this,SUB41(&param_3,0),local_20,ppVar11,(_Tree_node<> *)this_00);
  *_param_1 = *puVar8;
  *(undefined1 *)(_param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// protected: class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
// std::pair<int const ,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > > __thiscall std::_Tree<class std::_Tmap_traits<int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct
// std::less<int>,class std::allocator<struct std::pair<int const ,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >,0>
// >::_Insert_at<struct std::pair<int const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > &,struct std::_Tree_node<struct
// std::pair<int const ,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > >,void *> *>(bool,struct std::_Tree_node<struct std::pair<int const ,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,void *>
// *,struct std::pair<int const ,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > &,struct std::_Tree_node<struct std::pair<int const ,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,void *> *)

void __thiscall
std::_Tree<>::_Insert_at<>
          (_Tree<> *this,bool param_1,_Tree_node<> *param_2,pair<> *param_3,_Tree_node<> *param_4)

{
  _Tree_node<> *p_Var1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  _Tree_node<> *p_Var5;
  _Tree_node<> *p_Var6;
  int *piVar7;
  _Tree_node<> *p_Var8;
  _Tree_node<> *p_Var9;
  int *piVar10;
  _Tree_node<> *p_Var11;
  undefined3 in_stack_00000005;
  _Tree_node<> *in_stack_00000014;
  
  if (0x5d1745b < DAT_0065d584) {
    _Destroy_if_node(this,in_stack_00000014);
                    // WARNING: Subroutine does not return
    std::_Xlength_error("map/set<T> too long");
  }
  DAT_0065d584 = DAT_0065d584 + 1;
  *(pair<> **)(in_stack_00000014 + 4) = param_3;
  if (param_3 == _startStationsPersector) {
    *(_Tree_node<> **)(_startStationsPersector + 4) = in_stack_00000014;
    *(_Tree_node<> **)_startStationsPersector = in_stack_00000014;
    *(_Tree_node<> **)(_startStationsPersector + 8) = in_stack_00000014;
  }
  else if ((char)param_2 == '\0') {
    *(_Tree_node<> **)(param_3 + 8) = in_stack_00000014;
    if (param_3 == *(pair<> **)(_startStationsPersector + 8)) {
      *(_Tree_node<> **)(_startStationsPersector + 8) = in_stack_00000014;
    }
  }
  else {
    *(_Tree_node<> **)param_3 = in_stack_00000014;
    if (param_3 == *(pair<> **)_startStationsPersector) {
      *(_Tree_node<> **)_startStationsPersector = in_stack_00000014;
    }
  }
  cVar2 = *(char *)(*(int *)(in_stack_00000014 + 4) + 0xc);
  p_Var8 = in_stack_00000014;
  do {
    if (cVar2 != '\0') {
      *(undefined1 *)(*(int *)(_startStationsPersector + 4) + 0xc) = 1;
      *_param_1 = in_stack_00000014;
      return;
    }
    p_Var9 = *(_Tree_node<> **)(p_Var8 + 4);
    p_Var11 = p_Var8 + 4;
    p_Var1 = p_Var9 + 4;
    p_Var5 = (_Tree_node<> *)**(int **)(p_Var9 + 4);
    if (p_Var9 == p_Var5) {
      p_Var5 = (_Tree_node<> *)(*(int **)(p_Var9 + 4))[2];
      if (p_Var5[0xc] != (_Tree_node<>)0x0) {
        p_Var5 = *(_Tree_node<> **)(p_Var9 + 8);
        if (p_Var8 == p_Var5) {
          *(int *)(p_Var9 + 8) = *(int *)p_Var5;
          if (*(char *)(*(int *)p_Var5 + 0xd) == '\0') {
            *(_Tree_node<> **)(*(int *)p_Var5 + 4) = p_Var9;
          }
          *(int *)(p_Var5 + 4) = *(int *)p_Var1;
          if (p_Var9 == *(_Tree_node<> **)(_startStationsPersector + 4)) {
            *(_Tree_node<> **)(_startStationsPersector + 4) = p_Var5;
            *(_Tree_node<> **)p_Var5 = p_Var9;
            *(_Tree_node<> **)p_Var1 = p_Var5;
            p_Var8 = p_Var9;
            p_Var9 = p_Var5;
            p_Var11 = p_Var1;
          }
          else {
            piVar7 = *(int **)p_Var1;
            if (p_Var9 == (_Tree_node<> *)*piVar7) {
              *piVar7 = (int)p_Var5;
              *(_Tree_node<> **)p_Var5 = p_Var9;
              *(_Tree_node<> **)p_Var1 = p_Var5;
              p_Var8 = p_Var9;
              p_Var9 = p_Var5;
              p_Var11 = p_Var1;
            }
            else {
              piVar7[2] = (int)p_Var5;
              *(_Tree_node<> **)p_Var5 = p_Var9;
              *(_Tree_node<> **)p_Var1 = p_Var5;
              p_Var8 = p_Var9;
              p_Var9 = p_Var5;
              p_Var11 = p_Var1;
            }
          }
        }
        p_Var9[0xc] = (_Tree_node<>)0x1;
        *(undefined1 *)(*(int *)(*(int *)p_Var11 + 4) + 0xc) = 0;
        piVar7 = *(int **)(*(int *)p_Var11 + 4);
        piVar10 = (int *)*piVar7;
        *piVar7 = piVar10[2];
        if (*(char *)(piVar10[2] + 0xd) == '\0') {
          *(int **)(piVar10[2] + 4) = piVar7;
        }
        piVar10[1] = piVar7[1];
        if (piVar7 == *(int **)(_startStationsPersector + 4)) {
          *(int **)(_startStationsPersector + 4) = piVar10;
          piVar10[2] = (int)piVar7;
        }
        else {
          piVar3 = (int *)piVar7[1];
          if (piVar7 == (int *)piVar3[2]) {
            piVar3[2] = (int)piVar10;
            piVar10[2] = (int)piVar7;
          }
          else {
            *piVar3 = (int)piVar10;
            piVar10[2] = (int)piVar7;
          }
        }
        goto LAB_00415a0f;
      }
LAB_00415966:
      p_Var9[0xc] = (_Tree_node<>)0x1;
      p_Var5[0xc] = (_Tree_node<>)0x1;
      *(undefined1 *)(*(int *)(*(int *)p_Var11 + 4) + 0xc) = 0;
      p_Var8 = *(_Tree_node<> **)(*(int *)p_Var11 + 4);
    }
    else {
      if (p_Var5[0xc] == (_Tree_node<>)0x0) goto LAB_00415966;
      p_Var5 = *(_Tree_node<> **)p_Var9;
      p_Var6 = p_Var9;
      if (p_Var8 == p_Var5) {
        *(int *)p_Var9 = *(int *)(p_Var5 + 8);
        if (*(char *)(*(int *)(p_Var5 + 8) + 0xd) == '\0') {
          *(_Tree_node<> **)(*(int *)(p_Var5 + 8) + 4) = p_Var9;
        }
        *(int *)(p_Var5 + 4) = *(int *)p_Var1;
        if (p_Var9 == *(_Tree_node<> **)(_startStationsPersector + 4)) {
          *(_Tree_node<> **)(_startStationsPersector + 4) = p_Var5;
        }
        else {
          puVar4 = *(undefined4 **)p_Var1;
          if (p_Var9 == (_Tree_node<> *)puVar4[2]) {
            puVar4[2] = p_Var5;
          }
          else {
            *puVar4 = p_Var5;
          }
        }
        *(_Tree_node<> **)(p_Var5 + 8) = p_Var9;
        *(_Tree_node<> **)p_Var1 = p_Var5;
        p_Var6 = p_Var5;
        p_Var8 = p_Var9;
        p_Var11 = p_Var1;
      }
      p_Var6[0xc] = (_Tree_node<>)0x1;
      *(undefined1 *)(*(int *)(*(int *)p_Var11 + 4) + 0xc) = 0;
      piVar7 = *(int **)(*(int *)p_Var11 + 4);
      piVar10 = (int *)piVar7[2];
      piVar7[2] = *piVar10;
      if (*(char *)(*piVar10 + 0xd) == '\0') {
        *(int **)(*piVar10 + 4) = piVar7;
      }
      piVar10[1] = piVar7[1];
      if (piVar7 == *(int **)(_startStationsPersector + 4)) {
        *(int **)(_startStationsPersector + 4) = piVar10;
      }
      else {
        piVar3 = (int *)piVar7[1];
        if (piVar7 == (int *)*piVar3) {
          *piVar3 = (int)piVar10;
        }
        else {
          piVar3[2] = (int)piVar10;
        }
      }
      *piVar10 = (int)piVar7;
LAB_00415a0f:
      piVar7[1] = (int)piVar10;
    }
    cVar2 = *(char *)(*(int *)(p_Var8 + 4) + 0xc);
  } while( true );
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// protected: struct std::pair<class std::_Tree_iterator<class std::_Tree_val<struct
// std::_Tree_simple_types<struct std::pair<int const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > > >,bool> __thiscall std::_Tree<class
// std::_Tmap_traits<int,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,struct std::less<int>,class std::allocator<struct std::pair<int const
// ,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >,0>
// >::_Insert_nohint<struct std::pair<int const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > &,struct std::_Tree_node<struct
// std::pair<int const ,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > >,void *> *>(bool,struct std::pair<int const ,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > &,struct
// std::_Tree_node<struct std::pair<int const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,void *> *)

void __thiscall
std::_Tree<>::_Insert_nohint<>(_Tree<> *this,bool param_1,pair<> *param_2,_Tree_node<> *param_3)

{
  pair<> pVar1;
  bool bVar2;
  pair<> *ppVar3;
  pair<> *ppVar4;
  undefined4 *puVar5;
  _Tree<> *this_00;
  pair<> *ppVar6;
  pair<> *ppVar7;
  undefined3 in_stack_00000005;
  _Tree_node<> *in_stack_00000010;
  _Tree_node<> *local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b27d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  bVar2 = true;
  local_18 = (_Tree_node<> *)CONCAT31(local_18._1_3_,1);
  this_00 = *(_Tree<> **)(_startStationsPersector + 4);
  ppVar6 = _startStationsPersector;
  if (this_00[0xd] == (_Tree<>)0x0) {
    do {
      ppVar6 = (pair<> *)this_00;
      bVar2 = *(int *)param_3 < *(int *)(ppVar6 + 0x10);
      local_18 = (_Tree_node<> *)CONCAT31(local_18._1_3_,bVar2);
      if (*(int *)param_3 < *(int *)(ppVar6 + 0x10)) {
        this_00 = *(_Tree<> **)ppVar6;
      }
      else {
        this_00 = *(_Tree<> **)(ppVar6 + 8);
      }
    } while (this_00[0xd] == (_Tree<>)0x0);
  }
  ppVar7 = ppVar6;
  if (bVar2) {
    if (ppVar6 == *(pair<> **)_startStationsPersector) {
      puVar5 = (undefined4 *)
               _Insert_at<>(this_00,SUB41(&param_3,0),(_Tree_node<> *)&DAT_00000001,ppVar6,
                            (_Tree_node<> *)this_00);
      *_param_1 = *puVar5;
      *(undefined1 *)(_param_1 + 1) = 1;
      ExceptionList = local_10;
      return;
    }
    if (ppVar6[0xd] == (pair<>)0x0) {
      ppVar7 = *(pair<> **)ppVar6;
      if (ppVar7[0xd] == (pair<>)0x0) {
        pVar1 = (*(pair<> **)(ppVar7 + 8))[0xd];
        ppVar3 = *(pair<> **)(ppVar7 + 8);
        while (pVar1 == (pair<>)0x0) {
          pVar1 = (*(pair<> **)(ppVar3 + 8))[0xd];
          ppVar7 = ppVar3;
          ppVar3 = *(pair<> **)(ppVar3 + 8);
        }
      }
      else {
        pVar1 = (*(pair<> **)(ppVar6 + 4))[0xd];
        ppVar3 = *(pair<> **)(ppVar6 + 4);
        ppVar7 = ppVar6;
        while ((ppVar4 = ppVar3, pVar1 == (pair<>)0x0 && (ppVar7 == *(pair<> **)ppVar4))) {
          pVar1 = (*(pair<> **)(ppVar4 + 4))[0xd];
          ppVar3 = *(pair<> **)(ppVar4 + 4);
          ppVar7 = ppVar4;
        }
        if (ppVar7[0xd] == (pair<>)0x0) {
          ppVar7 = ppVar4;
        }
      }
    }
    else {
      ppVar7 = *(pair<> **)(ppVar6 + 8);
    }
  }
  if (*(int *)param_3 <= *(int *)(ppVar7 + 0x10)) {
    _Destroy_if_node((_Tree<> *)param_3,in_stack_00000010);
    *_param_1 = ppVar7;
    *(undefined1 *)(_param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
  puVar5 = (undefined4 *)_Insert_at<>((_Tree<> *)param_3,SUB41(&param_3,0),local_18,ppVar6,param_3);
  *_param_1 = *puVar5;
  *(undefined1 *)(_param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


// public: unsigned int __thiscall std::_Tree<class std::_Tmap_traits<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct
// std::less<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// >,class std::allocator<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > >,0> >::count(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)const 

uint __thiscall std::_Tree<>::count(_Tree<> *this,basic_string<> *param_1)

{
  uint uVar1;
  basic_string<> *local_c;
  basic_string<> *local_8;
  
  _Tree<>::_Eqrange<>((_Tree<> *)this,(basic_string<> *)&local_c);
  uVar1 = 0;
  param_1 = local_c;
  while (param_1 != local_8) {
    uVar1 = uVar1 + 1;
    _Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&param_1);
  }
  return uVar1;
}


// protected: void __thiscall std::_Tree<class std::_Tmap_traits<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,struct std::less<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class
// std::allocator<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >,0> >::_Tidy(void)

void __thiscall std::_Tree<>::_Tidy(_Tree<> *this)

{
  _Tree<> *local_8;
  
  local_8 = this;
  erase(this,&local_8,**(undefined4 **)this,*(undefined4 **)this);
  return;
}


// public: class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
// std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >
// > > > __thiscall std::_Tree<class std::_Tmap_traits<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,struct std::less<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class
// std::allocator<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >,0> >::erase(class std::_Tree_const_iterator<class
// std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > > >,class
// std::_Tree_const_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
// std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >
// > > >)

void __thiscall
std::_Tree<>::erase(_Tree<> *this,undefined4 *param_2,_Tree<> *param_3,_Tree<> *param_4)

{
  _Tree<> *p_Var1;
  _Tree_node<> *p_Var2;
  _Tree<> *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b18f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  p_Var1 = *(_Tree<> **)this;
  local_14 = this;
  if ((param_3 == *(_Tree<> **)p_Var1) && (param_4 == p_Var1)) {
    local_8 = 0;
    _Erase(this,*(_Tree_node<> **)(p_Var1 + 4));
    *(_Tree<> **)(*(int *)this + 4) = p_Var1;
    **(undefined4 **)this = p_Var1;
    *(_Tree<> **)(*(int *)this + 8) = p_Var1;
    *(undefined4 *)(this + 4) = 0;
    *param_2 = **(undefined4 **)this;
    ExceptionList = local_10;
    return;
  }
  if (param_3 != param_4) {
    do {
      p_Var1 = param_3;
      _Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&param_3);
      local_14 = p_Var1;
      _Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_14);
      p_Var2 = _Tree_val<>::_Extract((_Tree_val<> *)this,p_Var1);
      pair<>::~pair<>((pair<> *)(p_Var2 + 0x10));
      operator_delete(p_Var2,(nothrow_t *)&DAT_00000040);
    } while (param_3 != param_4);
  }
  *param_2 = param_3;
  ExceptionList = local_10;
  return;
}


// protected: void __thiscall std::_Tree<class std::_Tmap_traits<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,struct std::less<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class
// std::allocator<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >,0> >::_Erase(struct std::_Tree_node<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,void *> *)

void __thiscall std::_Tree<>::_Erase(_Tree<> *this,_Tree_node<> *param_1)

{
  _Tree_node<> _Var1;
  _Tree_node<> *p_Var2;
  
  _Var1 = param_1[0xd];
  while (_Var1 == (_Tree_node<>)0x0) {
    _Erase(this,*(_Tree_node<> **)(param_1 + 8));
    p_Var2 = *(_Tree_node<> **)param_1;
    pair<>::~pair<>((pair<> *)(param_1 + 0x10));
    operator_delete(param_1,(nothrow_t *)&DAT_00000040);
    param_1 = p_Var2;
    _Var1 = p_Var2[0xd];
  }
  return;
}


// protected: class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
// std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >
// > > > __thiscall std::_Tree<class std::_Tmap_traits<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,struct std::less<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class
// std::allocator<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >,0> >::_Insert_hint<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > &,struct
// std::_Tree_node<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > >,void *> *>(class std::_Tree_const_iterator<class std::_Tree_val<struct
// std::_Tree_simple_types<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > > >,struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > &,struct
// std::_Tree_node<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > >,void *> *)

undefined4 * __thiscall
std::_Tree<>::_Insert_hint<>
          (_Tree<> *this,undefined4 *param_2,pair<> *param_3,_Tree_node<> *param_4)

{
  pair<> pVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  pair<> *ppVar9;
  pair<> *ppVar10;
  _Tree_node<> *p_Var11;
  pair<> *ppVar12;
  _Tree_node<> *p_Var13;
  bool bVar14;
  bool bVar15;
  uint uStack_38;
  undefined1 local_28 [4];
  pair<> *local_24;
  pair<> *local_20;
  uint local_1c;
  _Tree<> *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2ce0;
  local_10 = ExceptionList;
  uStack_38 = ___security_cookie ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  bVar15 = SUB41(param_2,0);
  local_18 = this;
  if (*(int *)(this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_38;
    _Insert_at<>(this,bVar15,(_Tree_node<> *)&DAT_00000001,*(pair<> **)this,(_Tree_node<> *)this);
    ExceptionList = local_10;
    return param_2;
  }
  local_24 = *(pair<> **)this;
  if (param_3 != *(pair<> **)local_24) {
    if (param_3 != local_24) {
      ppVar10 = param_3 + 0x10;
      if (0xf < *(uint *)(param_3 + 0x24)) {
        ppVar10 = *(pair<> **)(param_3 + 0x10);
      }
      ppVar9 = (pair<> *)param_4;
      if (0xf < *(uint *)(param_4 + 0x14)) {
        ppVar9 = *(pair<> **)param_4;
      }
      local_1c = *(uint *)(param_4 + 0x10);
      uVar7 = local_1c;
      if (*(uint *)(param_3 + 0x20) < local_1c) {
        uVar7 = *(uint *)(param_3 + 0x20);
      }
      while (uVar5 = uVar7 - 4, 3 < uVar7) {
        if (*(int *)ppVar9 != *(int *)ppVar10) goto LAB_0041a457;
        ppVar9 = ppVar9 + 4;
        ppVar10 = ppVar10 + 4;
        uVar7 = uVar5;
      }
      if (uVar5 == 0xfffffffc) {
LAB_0041a48b:
        uVar7 = 0;
      }
      else {
LAB_0041a457:
        bVar14 = (byte)*ppVar9 < (byte)*ppVar10;
        if ((*ppVar9 == *ppVar10) &&
           ((uVar5 == 0xfffffffd ||
            ((bVar14 = (byte)ppVar9[1] < (byte)ppVar10[1], ppVar9[1] == ppVar10[1] &&
             ((uVar5 == 0xfffffffe ||
              ((bVar14 = (byte)ppVar9[2] < (byte)ppVar10[2], ppVar9[2] == ppVar10[2] &&
               ((uVar5 == 0xffffffff ||
                (bVar14 = (byte)ppVar9[3] < (byte)ppVar10[3], ppVar9[3] == ppVar10[3]))))))))))))
        goto LAB_0041a48b;
        uVar7 = -(uint)bVar14 | 1;
      }
      if (uVar7 == 0) {
        if (*(uint *)(param_4 + 0x10) < *(uint *)(param_3 + 0x20)) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)(*(uint *)(param_3 + 0x20) < *(uint *)(param_4 + 0x10));
        }
      }
      if ((int)uVar7 < 0) {
        if (param_3[0xd] == (pair<>)0x0) {
          ppVar10 = *(pair<> **)param_3;
          if (ppVar10[0xd] == (pair<>)0x0) {
            pVar1 = (*(pair<> **)(ppVar10 + 8))[0xd];
            ppVar9 = *(pair<> **)(ppVar10 + 8);
            while (pVar1 == (pair<>)0x0) {
              pVar1 = (*(pair<> **)(ppVar9 + 8))[0xd];
              ppVar10 = ppVar9;
              ppVar9 = *(pair<> **)(ppVar9 + 8);
            }
          }
          else {
            pVar1 = (*(pair<> **)(param_3 + 4))[0xd];
            ppVar9 = *(pair<> **)(param_3 + 4);
            ppVar10 = param_3;
            while ((ppVar12 = ppVar9, pVar1 == (pair<>)0x0 && (ppVar10 == *(pair<> **)ppVar12))) {
              pVar1 = (*(pair<> **)(ppVar12 + 4))[0xd];
              ppVar9 = *(pair<> **)(ppVar12 + 4);
              ppVar10 = ppVar12;
            }
            if (ppVar10[0xd] == (pair<>)0x0) {
              ppVar10 = ppVar12;
            }
          }
        }
        else {
          ppVar10 = *(pair<> **)(param_3 + 8);
        }
        ppVar9 = (pair<> *)param_4;
        if (0xf < *(uint *)(param_4 + 0x14)) {
          ppVar9 = *(pair<> **)param_4;
        }
        ppVar12 = ppVar10 + 0x10;
        if (0xf < *(uint *)(ppVar10 + 0x24)) {
          ppVar12 = *(pair<> **)(ppVar10 + 0x10);
        }
        uVar7 = *(uint *)(ppVar10 + 0x20);
        if (local_1c < *(uint *)(ppVar10 + 0x20)) {
          uVar7 = local_1c;
        }
        while (uVar5 = uVar7 - 4, 3 < uVar7) {
          if (*(int *)ppVar12 != *(int *)ppVar9) goto LAB_0041a548;
          ppVar12 = ppVar12 + 4;
          ppVar9 = ppVar9 + 4;
          uVar7 = uVar5;
        }
        if (uVar5 == 0xfffffffc) {
LAB_0041a57c:
          uVar7 = 0;
        }
        else {
LAB_0041a548:
          bVar14 = (byte)*ppVar12 < (byte)*ppVar9;
          if ((*ppVar12 == *ppVar9) &&
             ((uVar5 == 0xfffffffd ||
              ((bVar14 = (byte)ppVar12[1] < (byte)ppVar9[1], ppVar12[1] == ppVar9[1] &&
               ((uVar5 == 0xfffffffe ||
                ((bVar14 = (byte)ppVar12[2] < (byte)ppVar9[2], ppVar12[2] == ppVar9[2] &&
                 ((uVar5 == 0xffffffff ||
                  (bVar14 = (byte)ppVar12[3] < (byte)ppVar9[3], ppVar12[3] == ppVar9[3]))))))))))))
          goto LAB_0041a57c;
          uVar7 = -(uint)bVar14 | 1;
        }
        if (uVar7 == 0) {
          if (*(uint *)(ppVar10 + 0x20) < local_1c) {
            uVar7 = 0xffffffff;
          }
          else {
            uVar7 = (uint)(local_1c < *(uint *)(ppVar10 + 0x20));
          }
        }
        if ((int)uVar7 < 0) {
          p_Var11 = *(_Tree_node<> **)(ppVar10 + 8);
          if (p_Var11[0xd] != (_Tree_node<>)0x0) {
            local_14 = (undefined1 *)&uStack_38;
            _Insert_at<>(this,bVar15,(_Tree_node<> *)0x0,ppVar10,p_Var11);
            ExceptionList = local_10;
            return param_2;
          }
          local_14 = (undefined1 *)&uStack_38;
          _Insert_at<>(this,bVar15,(_Tree_node<> *)&DAT_00000001,param_3,p_Var11);
          ExceptionList = local_10;
          return param_2;
        }
      }
      ppVar10 = (pair<> *)param_4;
      if (0xf < *(uint *)(param_4 + 0x14)) {
        ppVar10 = *(pair<> **)param_4;
      }
      ppVar9 = param_3 + 0x10;
      if (0xf < *(uint *)(param_3 + 0x24)) {
        ppVar9 = *(pair<> **)(param_3 + 0x10);
      }
      uVar7 = *(uint *)(param_3 + 0x20);
      if (*(uint *)(param_4 + 0x10) < *(uint *)(param_3 + 0x20)) {
        uVar7 = *(uint *)(param_4 + 0x10);
      }
      while (uVar5 = uVar7 - 4, 3 < uVar7) {
        if (*(int *)ppVar9 != *(int *)ppVar10) goto LAB_0041a636;
        ppVar9 = ppVar9 + 4;
        ppVar10 = ppVar10 + 4;
        uVar7 = uVar5;
      }
      if (uVar5 == 0xfffffffc) {
LAB_0041a66a:
        uVar7 = 0;
      }
      else {
LAB_0041a636:
        bVar14 = (byte)*ppVar9 < (byte)*ppVar10;
        if ((*ppVar9 == *ppVar10) &&
           ((uVar5 == 0xfffffffd ||
            ((bVar14 = (byte)ppVar9[1] < (byte)ppVar10[1], ppVar9[1] == ppVar10[1] &&
             ((uVar5 == 0xfffffffe ||
              ((bVar14 = (byte)ppVar9[2] < (byte)ppVar10[2], ppVar9[2] == ppVar10[2] &&
               ((uVar5 == 0xffffffff ||
                (bVar14 = (byte)ppVar9[3] < (byte)ppVar10[3], ppVar9[3] == ppVar10[3]))))))))))))
        goto LAB_0041a66a;
        uVar7 = -(uint)bVar14 | 1;
      }
      if (uVar7 == 0) {
        ppVar9 = param_3 + 0x10;
        if (*(uint *)(param_3 + 0x20) < *(uint *)(param_4 + 0x10)) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)(*(uint *)(param_4 + 0x10) < *(uint *)(param_3 + 0x20));
        }
      }
      puVar4 = &uStack_38;
      if (-1 < (int)uVar7) goto LAB_0041a791;
      local_20 = param_3;
      _Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_20);
      if (local_20 == local_24) goto LAB_0041a73a;
      p_Var11 = (_Tree_node<> *)(local_20 + 0x10);
      if (0xf < *(uint *)(local_20 + 0x24)) {
        p_Var11 = *(_Tree_node<> **)(local_20 + 0x10);
      }
      p_Var13 = param_4;
      if (0xf < *(uint *)(param_4 + 0x14)) {
        p_Var13 = *(_Tree_node<> **)param_4;
      }
      uVar7 = local_1c;
      if (*(uint *)(local_20 + 0x20) < local_1c) {
        uVar7 = *(uint *)(local_20 + 0x20);
      }
      while (uVar5 = uVar7 - 4, 3 < uVar7) {
        if (*(int *)p_Var13 != *(int *)p_Var11) goto LAB_0041a6e6;
        p_Var13 = p_Var13 + 4;
        p_Var11 = p_Var11 + 4;
        uVar7 = uVar5;
      }
      if (uVar5 == 0xfffffffc) {
LAB_0041a71a:
        uVar7 = 0;
      }
      else {
LAB_0041a6e6:
        bVar14 = (byte)*p_Var13 < (byte)*p_Var11;
        if ((*p_Var13 == *p_Var11) &&
           ((uVar5 == 0xfffffffd ||
            ((bVar14 = (byte)p_Var13[1] < (byte)p_Var11[1], p_Var13[1] == p_Var11[1] &&
             ((uVar5 == 0xfffffffe ||
              ((bVar14 = (byte)p_Var13[2] < (byte)p_Var11[2], p_Var13[2] == p_Var11[2] &&
               ((uVar5 == 0xffffffff ||
                (bVar14 = (byte)p_Var13[3] < (byte)p_Var11[3], p_Var13[3] == p_Var11[3]))))))))))))
        goto LAB_0041a71a;
        uVar7 = -(uint)bVar14 | 1;
      }
      if (uVar7 == 0) {
        if (local_1c < *(uint *)(local_20 + 0x20)) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)(*(uint *)(local_20 + 0x20) < local_1c);
        }
      }
      ppVar9 = (pair<> *)(uVar7 >> 0x1f);
      puVar4 = (uint *)local_14;
      if ((int)uVar7 < 0) {
LAB_0041a73a:
        p_Var11 = *(_Tree_node<> **)(param_3 + 8);
        if (p_Var11[0xd] != (_Tree_node<>)0x0) {
          _Insert_at<>(local_18,bVar15,(_Tree_node<> *)0x0,param_3,p_Var11);
          ExceptionList = local_10;
          return param_2;
        }
        _Insert_at<>(local_18,bVar15,(_Tree_node<> *)&DAT_00000001,local_20,p_Var11);
        ExceptionList = local_10;
        return param_2;
      }
      goto LAB_0041a791;
    }
    iVar2 = *(int *)(local_24 + 8);
    p_Var11 = param_4;
    if (0xf < *(uint *)(param_4 + 0x14)) {
      p_Var11 = *(_Tree_node<> **)param_4;
    }
    ppVar9 = (pair<> *)(iVar2 + 0x10);
    if (0xf < *(uint *)(iVar2 + 0x24)) {
      ppVar9 = *(pair<> **)(iVar2 + 0x10);
    }
    uVar7 = *(uint *)(param_4 + 0x10);
    uVar5 = *(uint *)(iVar2 + 0x20);
    uVar6 = uVar5;
    if (uVar7 < uVar5) {
      uVar6 = uVar7;
    }
    while (uVar3 = uVar6 - 4, 3 < uVar6) {
      if (*(int *)ppVar9 != *(int *)p_Var11) goto LAB_0041a396;
      ppVar9 = ppVar9 + 4;
      p_Var11 = p_Var11 + 4;
      uVar6 = uVar3;
    }
    if (uVar3 == 0xfffffffc) {
LAB_0041a3ca:
      uVar6 = 0;
    }
    else {
LAB_0041a396:
      bVar14 = (byte)*(_Tree_node<> *)ppVar9 < (byte)*p_Var11;
      if ((*(_Tree_node<> *)ppVar9 == *p_Var11) &&
         ((uVar3 == 0xfffffffd ||
          ((bVar14 = (byte)*(_Tree_node<> *)(ppVar9 + 1) < (byte)p_Var11[1],
           *(_Tree_node<> *)(ppVar9 + 1) == p_Var11[1] &&
           ((uVar3 == 0xfffffffe ||
            ((bVar14 = (byte)*(_Tree_node<> *)(ppVar9 + 2) < (byte)p_Var11[2],
             *(_Tree_node<> *)(ppVar9 + 2) == p_Var11[2] &&
             ((uVar3 == 0xffffffff ||
              (bVar14 = (byte)*(_Tree_node<> *)(ppVar9 + 3) < (byte)p_Var11[3],
              *(_Tree_node<> *)(ppVar9 + 3) == p_Var11[3])))))))))))) goto LAB_0041a3ca;
      uVar6 = -(uint)bVar14 | 1;
    }
    if (uVar6 == 0) {
      if (uVar5 < uVar7) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = (uint)(uVar7 < uVar5);
      }
    }
    puVar4 = &uStack_38;
    if ((int)uVar6 < 0) {
      local_14 = (undefined1 *)&uStack_38;
      _Insert_at<>(this,bVar15,(_Tree_node<> *)0x0,*(pair<> **)(local_24 + 8),(_Tree_node<> *)ppVar9
                  );
      ExceptionList = local_10;
      return param_2;
    }
    goto LAB_0041a791;
  }
  ppVar9 = param_3 + 0x10;
  if (0xf < *(uint *)(param_3 + 0x24)) {
    ppVar9 = *(pair<> **)(param_3 + 0x10);
  }
  p_Var11 = param_4;
  if (0xf < *(uint *)(param_4 + 0x14)) {
    p_Var11 = *(_Tree_node<> **)param_4;
  }
  uVar7 = *(uint *)(param_3 + 0x20);
  uVar5 = *(uint *)(param_4 + 0x10);
  if (uVar7 < *(uint *)(param_4 + 0x10)) {
    uVar5 = uVar7;
  }
  while (uVar6 = uVar5 - 4, 3 < uVar5) {
    if (*(int *)p_Var11 != *(int *)ppVar9) goto LAB_0041a2c6;
    p_Var11 = p_Var11 + 4;
    ppVar9 = ppVar9 + 4;
    uVar5 = uVar6;
  }
  if (uVar6 == 0xfffffffc) {
LAB_0041a2fa:
    uVar5 = 0;
  }
  else {
LAB_0041a2c6:
    bVar14 = (byte)*p_Var11 < (byte)*(_Tree_node<> *)ppVar9;
    if ((*p_Var11 == *(_Tree_node<> *)ppVar9) &&
       ((uVar6 == 0xfffffffd ||
        ((bVar14 = (byte)p_Var11[1] < (byte)*(_Tree_node<> *)(ppVar9 + 1),
         p_Var11[1] == *(_Tree_node<> *)(ppVar9 + 1) &&
         ((uVar6 == 0xfffffffe ||
          ((bVar14 = (byte)p_Var11[2] < (byte)*(_Tree_node<> *)(ppVar9 + 2),
           p_Var11[2] == *(_Tree_node<> *)(ppVar9 + 2) &&
           ((uVar6 == 0xffffffff ||
            (bVar14 = (byte)p_Var11[3] < (byte)*(_Tree_node<> *)(ppVar9 + 3),
            p_Var11[3] == *(_Tree_node<> *)(ppVar9 + 3))))))))))))) goto LAB_0041a2fa;
    uVar5 = -(uint)bVar14 | 1;
  }
  if (uVar5 == 0) {
    ppVar9 = (pair<> *)param_4;
    if (*(uint *)(param_4 + 0x10) < uVar7) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = (uint)(uVar7 < *(uint *)(param_4 + 0x10));
    }
  }
  puVar4 = &uStack_38;
  if ((int)uVar5 < 0) {
    local_14 = (undefined1 *)&uStack_38;
    _Insert_at<>(this,bVar15,(_Tree_node<> *)&DAT_00000001,param_3,(_Tree_node<> *)ppVar9);
    ExceptionList = local_10;
    return param_2;
  }
LAB_0041a791:
  local_14 = (undefined1 *)puVar4;
  local_8 = 0xffffffff;
  puVar8 = (undefined4 *)_Insert_nohint<>(local_18,SUB41(local_28,0),ppVar9,param_4);
  *param_2 = *puVar8;
  ExceptionList = local_10;
  return param_2;
}


// protected: void __thiscall std::_Tree<class std::_Tmap_traits<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,struct std::less<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class
// std::allocator<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >,0> >::_Destroy_if_node(struct std::_Tree_node<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,void *> *)

void __thiscall std::_Tree<>::_Destroy_if_node(_Tree<> *this,_Tree_node<> *param_1)

{
  pair<>::~pair<>((pair<> *)(param_1 + 0x10));
  operator_delete(param_1,(nothrow_t *)&DAT_00000040);
  return;
}


// protected: class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
// std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >
// > > > __thiscall std::_Tree<class std::_Tmap_traits<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,struct std::less<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class
// std::allocator<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >,0> >::_Insert_at<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > &,struct std::_Tree_node<struct
// std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// >,void *> *>(bool,struct std::_Tree_node<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,void *> *,struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > &,struct
// std::_Tree_node<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > >,void *> *)

void __thiscall
std::_Tree<>::_Insert_at<>
          (_Tree<> *this,bool param_1,_Tree_node<> *param_2,pair<> *param_3,_Tree_node<> *param_4)

{
  _Tree_node<> *p_Var1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  _Tree_node<> *p_Var5;
  _Tree_node<> *p_Var6;
  int *piVar7;
  _Tree_node<> *p_Var8;
  _Tree_node<> *p_Var9;
  int *piVar10;
  _Tree_node<> *p_Var11;
  undefined3 in_stack_00000005;
  _Tree_node<> *in_stack_00000014;
  
  if (0x3fffffd < *(uint *)(this + 4)) {
    _Destroy_if_node(this,in_stack_00000014);
                    // WARNING: Subroutine does not return
    std::_Xlength_error("map/set<T> too long");
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) + 1;
  *(pair<> **)(in_stack_00000014 + 4) = param_3;
  if (param_3 == *(pair<> **)this) {
    *(_Tree_node<> **)(*(pair<> **)this + 4) = in_stack_00000014;
    **(undefined4 **)this = in_stack_00000014;
    *(_Tree_node<> **)(*(int *)this + 8) = in_stack_00000014;
  }
  else if ((char)param_2 == '\0') {
    *(_Tree_node<> **)(param_3 + 8) = in_stack_00000014;
    if (param_3 == *(pair<> **)(*(int *)this + 8)) {
      *(_Tree_node<> **)(*(int *)this + 8) = in_stack_00000014;
    }
  }
  else {
    *(_Tree_node<> **)param_3 = in_stack_00000014;
    if (param_3 == (pair<> *)**(int **)this) {
      **(int **)this = (int)in_stack_00000014;
    }
  }
  cVar2 = *(char *)(*(int *)(in_stack_00000014 + 4) + 0xc);
  p_Var8 = in_stack_00000014;
  do {
    if (cVar2 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)this + 4) + 0xc) = 1;
      *_param_1 = in_stack_00000014;
      return;
    }
    p_Var9 = *(_Tree_node<> **)(p_Var8 + 4);
    p_Var11 = p_Var8 + 4;
    p_Var1 = p_Var9 + 4;
    p_Var5 = (_Tree_node<> *)**(int **)(p_Var9 + 4);
    if (p_Var9 == p_Var5) {
      p_Var5 = (_Tree_node<> *)(*(int **)(p_Var9 + 4))[2];
      if (p_Var5[0xc] != (_Tree_node<>)0x0) {
        p_Var5 = *(_Tree_node<> **)(p_Var9 + 8);
        if (p_Var8 == p_Var5) {
          *(int *)(p_Var9 + 8) = *(int *)p_Var5;
          if (*(char *)(*(int *)p_Var5 + 0xd) == '\0') {
            *(_Tree_node<> **)(*(int *)p_Var5 + 4) = p_Var9;
          }
          *(int *)(p_Var5 + 4) = *(int *)p_Var1;
          if (p_Var9 == *(_Tree_node<> **)(*(int *)this + 4)) {
            *(_Tree_node<> **)(*(int *)this + 4) = p_Var5;
            *(_Tree_node<> **)p_Var5 = p_Var9;
            *(_Tree_node<> **)p_Var1 = p_Var5;
            p_Var8 = p_Var9;
            p_Var9 = p_Var5;
            p_Var11 = p_Var1;
          }
          else {
            piVar7 = *(int **)p_Var1;
            if (p_Var9 == (_Tree_node<> *)*piVar7) {
              *piVar7 = (int)p_Var5;
              *(_Tree_node<> **)p_Var5 = p_Var9;
              *(_Tree_node<> **)p_Var1 = p_Var5;
              p_Var8 = p_Var9;
              p_Var9 = p_Var5;
              p_Var11 = p_Var1;
            }
            else {
              piVar7[2] = (int)p_Var5;
              *(_Tree_node<> **)p_Var5 = p_Var9;
              *(_Tree_node<> **)p_Var1 = p_Var5;
              p_Var8 = p_Var9;
              p_Var9 = p_Var5;
              p_Var11 = p_Var1;
            }
          }
        }
        p_Var9[0xc] = (_Tree_node<>)0x1;
        *(undefined1 *)(*(int *)(*(int *)p_Var11 + 4) + 0xc) = 0;
        piVar7 = *(int **)(*(int *)p_Var11 + 4);
        piVar10 = (int *)*piVar7;
        *piVar7 = piVar10[2];
        if (*(char *)(piVar10[2] + 0xd) == '\0') {
          *(int **)(piVar10[2] + 4) = piVar7;
        }
        piVar10[1] = piVar7[1];
        if (piVar7 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar10;
          piVar10[2] = (int)piVar7;
        }
        else {
          piVar3 = (int *)piVar7[1];
          if (piVar7 == (int *)piVar3[2]) {
            piVar3[2] = (int)piVar10;
            piVar10[2] = (int)piVar7;
          }
          else {
            *piVar3 = (int)piVar10;
            piVar10[2] = (int)piVar7;
          }
        }
        goto LAB_0041aa35;
      }
LAB_0041a98c:
      p_Var9[0xc] = (_Tree_node<>)0x1;
      p_Var5[0xc] = (_Tree_node<>)0x1;
      *(undefined1 *)(*(int *)(*(int *)p_Var11 + 4) + 0xc) = 0;
      p_Var8 = *(_Tree_node<> **)(*(int *)p_Var11 + 4);
    }
    else {
      if (p_Var5[0xc] == (_Tree_node<>)0x0) goto LAB_0041a98c;
      p_Var5 = *(_Tree_node<> **)p_Var9;
      p_Var6 = p_Var9;
      if (p_Var8 == p_Var5) {
        *(int *)p_Var9 = *(int *)(p_Var5 + 8);
        if (*(char *)(*(int *)(p_Var5 + 8) + 0xd) == '\0') {
          *(_Tree_node<> **)(*(int *)(p_Var5 + 8) + 4) = p_Var9;
        }
        *(int *)(p_Var5 + 4) = *(int *)p_Var1;
        if (p_Var9 == *(_Tree_node<> **)(*(int *)this + 4)) {
          *(_Tree_node<> **)(*(int *)this + 4) = p_Var5;
        }
        else {
          puVar4 = *(undefined4 **)p_Var1;
          if (p_Var9 == (_Tree_node<> *)puVar4[2]) {
            puVar4[2] = p_Var5;
          }
          else {
            *puVar4 = p_Var5;
          }
        }
        *(_Tree_node<> **)(p_Var5 + 8) = p_Var9;
        *(_Tree_node<> **)p_Var1 = p_Var5;
        p_Var6 = p_Var5;
        p_Var8 = p_Var9;
        p_Var11 = p_Var1;
      }
      p_Var6[0xc] = (_Tree_node<>)0x1;
      *(undefined1 *)(*(int *)(*(int *)p_Var11 + 4) + 0xc) = 0;
      piVar7 = *(int **)(*(int *)p_Var11 + 4);
      piVar10 = (int *)piVar7[2];
      piVar7[2] = *piVar10;
      if (*(char *)(*piVar10 + 0xd) == '\0') {
        *(int **)(*piVar10 + 4) = piVar7;
      }
      piVar10[1] = piVar7[1];
      if (piVar7 == *(int **)(*(int *)this + 4)) {
        *(int **)(*(int *)this + 4) = piVar10;
      }
      else {
        piVar3 = (int *)piVar7[1];
        if (piVar7 == (int *)*piVar3) {
          *piVar3 = (int)piVar10;
        }
        else {
          piVar3[2] = (int)piVar10;
        }
      }
      *piVar10 = (int)piVar7;
LAB_0041aa35:
      piVar7[1] = (int)piVar10;
    }
    cVar2 = *(char *)(*(int *)(p_Var8 + 4) + 0xc);
  } while( true );
}


// protected: struct std::pair<class std::_Tree_iterator<class std::_Tree_val<struct
// std::_Tree_simple_types<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > > >,bool> __thiscall std::_Tree<class
// std::_Tmap_traits<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,struct std::less<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,class std::allocator<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >,0>
// >::_Insert_nohint<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > &,struct std::_Tree_node<struct
// std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// >,void *> *>(bool,struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > &,struct std::_Tree_node<struct
// std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// >,void *> *)

void __thiscall
std::_Tree<>::_Insert_nohint<>(_Tree<> *this,bool param_1,pair<> *param_2,_Tree_node<> *param_3)

{
  pair<> pVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  pair<> *ppVar9;
  pair<> *ppVar10;
  pair<> *ppVar11;
  pair<> *ppVar12;
  bool bVar13;
  undefined3 in_stack_00000005;
  void *in_stack_00000010;
  _Tree_node<> *local_20;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2d00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  bVar5 = 1;
  ppVar11 = *(pair<> **)this;
  local_20 = (_Tree_node<> *)CONCAT31(local_20._1_3_,1);
  ppVar10 = ppVar11;
  if ((*(pair<> **)(ppVar11 + 4))[0xd] == (pair<>)0x0) {
    uVar2 = *(uint *)(param_3 + 0x10);
    ppVar12 = *(pair<> **)(ppVar11 + 4);
    do {
      ppVar10 = ppVar12;
      ppVar12 = ppVar10 + 0x10;
      if (0xf < *(uint *)(ppVar10 + 0x24)) {
        ppVar12 = *(pair<> **)(ppVar10 + 0x10);
      }
      ppVar9 = (pair<> *)param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        ppVar9 = *(pair<> **)param_3;
      }
      uVar8 = *(uint *)(ppVar10 + 0x20);
      uVar6 = uVar2;
      if (uVar8 < uVar2) {
        uVar6 = uVar8;
      }
      while (uVar4 = uVar6 - 4, 3 < uVar6) {
        if (*(int *)ppVar9 != *(int *)ppVar12) goto LAB_0041ab0d;
        ppVar9 = ppVar9 + 4;
        ppVar12 = ppVar12 + 4;
        uVar6 = uVar4;
      }
      if (uVar4 == 0xfffffffc) {
LAB_0041ab41:
        uVar6 = 0;
      }
      else {
LAB_0041ab0d:
        bVar13 = (byte)*ppVar9 < (byte)*ppVar12;
        if ((*ppVar9 == *ppVar12) &&
           ((uVar4 == 0xfffffffd ||
            ((bVar13 = (byte)ppVar9[1] < (byte)ppVar12[1], ppVar9[1] == ppVar12[1] &&
             ((uVar4 == 0xfffffffe ||
              ((bVar13 = (byte)ppVar9[2] < (byte)ppVar12[2], ppVar9[2] == ppVar12[2] &&
               ((uVar4 == 0xffffffff ||
                (bVar13 = (byte)ppVar9[3] < (byte)ppVar12[3], ppVar9[3] == ppVar12[3]))))))))))))
        goto LAB_0041ab41;
        uVar6 = -(uint)bVar13 | 1;
      }
      if (uVar6 == 0) {
        if (uVar2 < uVar8) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(uVar8 < uVar2);
        }
      }
      bVar3 = (byte)(uVar6 >> 0x18);
      bVar5 = bVar3 >> 7;
      local_20 = (_Tree_node<> *)CONCAT31(local_20._1_3_,bVar3 >> 7);
      if ((int)uVar6 < 0) {
        ppVar12 = *(pair<> **)ppVar10;
      }
      else {
        ppVar12 = *(pair<> **)(ppVar10 + 8);
      }
    } while (ppVar12[0xd] == (pair<>)0x0);
  }
  ppVar12 = ppVar10;
  if (bVar5 != 0) {
    if (ppVar10 == *(pair<> **)ppVar11) {
      local_20 = (_Tree_node<> *)&DAT_00000001;
      ppVar11 = ppVar10;
      goto LAB_0041ab95;
    }
    if (ppVar10[0xd] == (pair<>)0x0) {
      ppVar12 = *(pair<> **)ppVar10;
      if (ppVar12[0xd] == (pair<>)0x0) {
        pVar1 = (*(pair<> **)(ppVar12 + 8))[0xd];
        ppVar11 = *(pair<> **)(ppVar12 + 8);
        while (pVar1 == (pair<>)0x0) {
          pVar1 = (*(pair<> **)(ppVar11 + 8))[0xd];
          ppVar12 = ppVar11;
          ppVar11 = *(pair<> **)(ppVar11 + 8);
        }
      }
      else {
        pVar1 = (*(pair<> **)(ppVar10 + 4))[0xd];
        ppVar11 = *(pair<> **)(ppVar10 + 4);
        ppVar12 = ppVar10;
        while ((ppVar9 = ppVar11, pVar1 == (pair<>)0x0 && (ppVar12 == *(pair<> **)ppVar9))) {
          pVar1 = (*(pair<> **)(ppVar9 + 4))[0xd];
          ppVar11 = *(pair<> **)(ppVar9 + 4);
          ppVar12 = ppVar9;
        }
        if (ppVar12[0xd] == (pair<>)0x0) {
          ppVar12 = ppVar9;
        }
      }
    }
    else {
      ppVar12 = *(pair<> **)(ppVar10 + 8);
    }
  }
  ppVar9 = (pair<> *)param_3;
  if (0xf < *(uint *)(param_3 + 0x14)) {
    ppVar9 = *(pair<> **)param_3;
  }
  ppVar11 = ppVar12 + 0x10;
  if (0xf < *(uint *)(ppVar12 + 0x24)) {
    ppVar11 = *(pair<> **)(ppVar12 + 0x10);
  }
  uVar2 = *(uint *)(param_3 + 0x10);
  uVar8 = *(uint *)(ppVar12 + 0x20);
  if (uVar2 < *(uint *)(ppVar12 + 0x20)) {
    uVar8 = uVar2;
  }
  while (uVar6 = uVar8 - 4, 3 < uVar8) {
    if (*(int *)ppVar11 != *(int *)ppVar9) goto LAB_0041ac5a;
    ppVar11 = ppVar11 + 4;
    ppVar9 = ppVar9 + 4;
    uVar8 = uVar6;
  }
  if (uVar6 == 0xfffffffc) {
LAB_0041ac8e:
    uVar8 = 0;
  }
  else {
LAB_0041ac5a:
    bVar13 = (byte)*ppVar11 < (byte)*ppVar9;
    if ((*ppVar11 == *ppVar9) &&
       ((uVar6 == 0xfffffffd ||
        ((bVar13 = (byte)ppVar11[1] < (byte)ppVar9[1], ppVar11[1] == ppVar9[1] &&
         ((uVar6 == 0xfffffffe ||
          ((bVar13 = (byte)ppVar11[2] < (byte)ppVar9[2], ppVar11[2] == ppVar9[2] &&
           ((uVar6 == 0xffffffff ||
            (bVar13 = (byte)ppVar11[3] < (byte)ppVar9[3], ppVar11[3] == ppVar9[3]))))))))))))
    goto LAB_0041ac8e;
    uVar8 = -(uint)bVar13 | 1;
  }
  if (uVar8 == 0) {
    if (*(uint *)(ppVar12 + 0x20) < uVar2) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = (uint)(uVar2 < *(uint *)(ppVar12 + 0x20));
    }
  }
  if (-1 < (int)uVar8) {
    pair<>::~pair<>((pair<> *)((int)in_stack_00000010 + 0x10));
    operator_delete(in_stack_00000010,(nothrow_t *)&DAT_00000040);
    *_param_1 = ppVar12;
    *(undefined1 *)(_param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
LAB_0041ab95:
  puVar7 = (undefined4 *)
           _Insert_at<>(this,SUB41(&param_3,0),local_20,ppVar10,(_Tree_node<> *)ppVar11);
  *_param_1 = *puVar7;
  *(undefined1 *)(_param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


// protected: class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
// std::pair<int const ,int> > > > __thiscall std::_Tree<class std::_Tmap_traits<int,int,struct
// std::less<int>,class std::allocator<struct std::pair<int const ,int> >,0> >::_Insert_hint<struct
// std::pair<int const ,int> &,struct std::_Tree_node<struct std::pair<int const ,int>,void *>
// *>(class std::_Tree_const_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
// std::pair<int const ,int> > > >,struct std::pair<int const ,int> &,struct std::_Tree_node<struct
// std::pair<int const ,int>,void *> *)

undefined4 * __thiscall
std::_Tree<>::_Insert_hint<>
          (_Tree<> *this,undefined4 *param_2,pair<> *param_3,_Tree_node<> *param_4)

{
  pair<> pVar1;
  _Tree_node<> *p_Var2;
  int iVar3;
  uint *puVar4;
  pair<> *ppVar5;
  undefined4 *puVar6;
  pair<> *ppVar7;
  pair<> *ppVar8;
  bool bVar9;
  uint uStack_30;
  undefined1 local_20 [4];
  pair<> *local_1c;
  pair<> *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b31c0;
  local_10 = ExceptionList;
  uStack_30 = ___security_cookie ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  bVar9 = SUB41(param_2,0);
  if (*(int *)(this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_30;
    _Insert_at<>(this,bVar9,(_Tree_node<> *)&DAT_00000001,*(pair<> **)this,(_Tree_node<> *)this);
    ExceptionList = local_10;
    return param_2;
  }
  ppVar8 = *(pair<> **)this;
  ppVar7 = (pair<> *)param_4;
  if (param_3 == *(pair<> **)ppVar8) {
    puVar4 = &uStack_30;
    if (*(int *)param_4 < *(int *)(param_3 + 0x10)) {
      local_14 = (undefined1 *)&uStack_30;
      _Insert_at<>(this,bVar9,(_Tree_node<> *)&DAT_00000001,param_3,param_4);
      ExceptionList = local_10;
      return param_2;
    }
  }
  else if (param_3 == ppVar8) {
    puVar4 = &uStack_30;
    if (*(int *)(*(pair<> **)(ppVar8 + 8) + 0x10) < *(int *)param_4) {
      local_14 = (undefined1 *)&uStack_30;
      _Insert_at<>(this,bVar9,(_Tree_node<> *)0x0,*(pair<> **)(ppVar8 + 8),param_4);
      ExceptionList = local_10;
      return param_2;
    }
  }
  else {
    local_18 = *(pair<> **)param_4;
    ppVar7 = *(pair<> **)(param_3 + 0x10);
    iVar3 = (int)ppVar7 - (int)local_18;
    if ((int)local_18 < (int)ppVar7) {
      if (param_3[0xd] == (pair<>)0x0) {
        ppVar5 = *(pair<> **)param_3;
        if (ppVar5[0xd] == (pair<>)0x0) {
          pVar1 = (*(pair<> **)(ppVar5 + 8))[0xd];
          ppVar7 = *(pair<> **)(ppVar5 + 8);
          while (pVar1 == (pair<>)0x0) {
            pVar1 = (*(pair<> **)(ppVar7 + 8))[0xd];
            ppVar5 = ppVar7;
            ppVar7 = *(pair<> **)(ppVar7 + 8);
          }
        }
        else {
          ppVar7 = *(pair<> **)(param_3 + 4);
          ppVar5 = param_3;
          if (ppVar7[0xd] == (pair<>)0x0) {
            do {
              ppVar8 = ppVar7;
              ppVar7 = ppVar8;
              if (ppVar5 != *(pair<> **)ppVar8) break;
              ppVar7 = *(pair<> **)(ppVar8 + 4);
              ppVar5 = ppVar8;
            } while (ppVar7[0xd] == (pair<>)0x0);
            ppVar8 = *(pair<> **)this;
          }
          if (ppVar5[0xd] == (pair<>)0x0) {
            ppVar5 = ppVar7;
          }
        }
        ppVar7 = *(pair<> **)(param_3 + 0x10);
      }
      else {
        ppVar5 = *(pair<> **)(param_3 + 8);
      }
      if (*(int *)(ppVar5 + 0x10) < (int)local_18) {
        p_Var2 = *(_Tree_node<> **)(ppVar5 + 8);
        if (p_Var2[0xd] != (_Tree_node<>)0x0) {
          local_14 = (undefined1 *)&uStack_30;
          _Insert_at<>(this,bVar9,(_Tree_node<> *)0x0,ppVar5,p_Var2);
          ExceptionList = local_10;
          return param_2;
        }
        local_14 = (undefined1 *)&uStack_30;
        _Insert_at<>(this,bVar9,(_Tree_node<> *)&DAT_00000001,param_3,p_Var2);
        ExceptionList = local_10;
        return param_2;
      }
      iVar3 = (int)ppVar7 - (int)local_18;
    }
    puVar4 = &uStack_30;
    if (SBORROW4((int)ppVar7,(int)local_18) != iVar3 < 0) {
      local_1c = param_3;
      _Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_1c);
      if ((local_1c == ppVar8) ||
         (ppVar7 = local_18, puVar4 = (uint *)local_14, (int)local_18 < *(int *)(local_1c + 0x10)))
      {
        p_Var2 = *(_Tree_node<> **)(param_3 + 8);
        if (p_Var2[0xd] != (_Tree_node<>)0x0) {
          _Insert_at<>(this,bVar9,(_Tree_node<> *)0x0,param_3,p_Var2);
          ExceptionList = local_10;
          return param_2;
        }
        _Insert_at<>(this,bVar9,(_Tree_node<> *)&DAT_00000001,local_1c,p_Var2);
        ExceptionList = local_10;
        return param_2;
      }
    }
  }
  local_14 = (undefined1 *)puVar4;
  local_8 = 0xffffffff;
  puVar6 = (undefined4 *)_Insert_nohint<>(this,SUB41(local_20,0),ppVar7,param_4);
  *param_2 = *puVar6;
  ExceptionList = local_10;
  return param_2;
}


// protected: void __thiscall std::_Tree<class std::_Tmap_traits<enum
// cocos2d::EventKeyboard::KeyCode,char,struct std::less<enum cocos2d::EventKeyboard::KeyCode>,class
// std::allocator<struct std::pair<enum cocos2d::EventKeyboard::KeyCode const ,char> >,0>
// >::_Destroy_if_node(struct std::_Tree_node<struct std::pair<enum cocos2d::EventKeyboard::KeyCode
// const ,char>,void *> *)

void __thiscall std::_Tree<>::_Destroy_if_node(_Tree<> *this,_Tree_node<> *param_1)

{
  operator_delete(param_1,(nothrow_t *)0x18);
  return;
}


// protected: class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
// std::pair<int const ,int> > > > __thiscall std::_Tree<class std::_Tmap_traits<int,int,struct
// std::less<int>,class std::allocator<struct std::pair<int const ,int> >,0> >::_Insert_at<struct
// std::pair<int const ,int> &,struct std::_Tree_node<struct std::pair<int const ,int>,void *>
// *>(bool,struct std::_Tree_node<struct std::pair<int const ,int>,void *> *,struct std::pair<int
// const ,int> &,struct std::_Tree_node<struct std::pair<int const ,int>,void *> *)

void __thiscall
std::_Tree<>::_Insert_at<>
          (_Tree<> *this,bool param_1,_Tree_node<> *param_2,pair<> *param_3,_Tree_node<> *param_4)

{
  _Tree_node<> *p_Var1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  _Tree_node<> *p_Var5;
  _Tree_node<> *p_Var6;
  int *piVar7;
  _Tree_node<> *p_Var8;
  _Tree_node<> *p_Var9;
  int *piVar10;
  _Tree_node<> *p_Var11;
  undefined3 in_stack_00000005;
  _Tree_node<> *in_stack_00000014;
  
  if (0xaaaaaa8 < *(uint *)(this + 4)) {
    _Tree<>::_Destroy_if_node((_Tree<> *)this,in_stack_00000014);
                    // WARNING: Subroutine does not return
    std::_Xlength_error("map/set<T> too long");
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) + 1;
  *(pair<> **)(in_stack_00000014 + 4) = param_3;
  if (param_3 == *(pair<> **)this) {
    *(_Tree_node<> **)(*(pair<> **)this + 4) = in_stack_00000014;
    **(undefined4 **)this = in_stack_00000014;
    *(_Tree_node<> **)(*(int *)this + 8) = in_stack_00000014;
  }
  else if ((char)param_2 == '\0') {
    *(_Tree_node<> **)(param_3 + 8) = in_stack_00000014;
    if (param_3 == *(pair<> **)(*(int *)this + 8)) {
      *(_Tree_node<> **)(*(int *)this + 8) = in_stack_00000014;
    }
  }
  else {
    *(_Tree_node<> **)param_3 = in_stack_00000014;
    if (param_3 == (pair<> *)**(int **)this) {
      **(int **)this = (int)in_stack_00000014;
    }
  }
  cVar2 = *(char *)(*(int *)(in_stack_00000014 + 4) + 0xc);
  p_Var8 = in_stack_00000014;
  do {
    if (cVar2 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)this + 4) + 0xc) = 1;
      *_param_1 = in_stack_00000014;
      return;
    }
    p_Var9 = *(_Tree_node<> **)(p_Var8 + 4);
    p_Var11 = p_Var8 + 4;
    p_Var1 = p_Var9 + 4;
    p_Var5 = (_Tree_node<> *)**(int **)(p_Var9 + 4);
    if (p_Var9 == p_Var5) {
      p_Var5 = (_Tree_node<> *)(*(int **)(p_Var9 + 4))[2];
      if (p_Var5[0xc] != (_Tree_node<>)0x0) {
        p_Var5 = *(_Tree_node<> **)(p_Var9 + 8);
        if (p_Var8 == p_Var5) {
          *(int *)(p_Var9 + 8) = *(int *)p_Var5;
          if (*(char *)(*(int *)p_Var5 + 0xd) == '\0') {
            *(_Tree_node<> **)(*(int *)p_Var5 + 4) = p_Var9;
          }
          *(int *)(p_Var5 + 4) = *(int *)p_Var1;
          if (p_Var9 == *(_Tree_node<> **)(*(int *)this + 4)) {
            *(_Tree_node<> **)(*(int *)this + 4) = p_Var5;
            *(_Tree_node<> **)p_Var5 = p_Var9;
            *(_Tree_node<> **)p_Var1 = p_Var5;
            p_Var8 = p_Var9;
            p_Var9 = p_Var5;
            p_Var11 = p_Var1;
          }
          else {
            piVar7 = *(int **)p_Var1;
            if (p_Var9 == (_Tree_node<> *)*piVar7) {
              *piVar7 = (int)p_Var5;
              *(_Tree_node<> **)p_Var5 = p_Var9;
              *(_Tree_node<> **)p_Var1 = p_Var5;
              p_Var8 = p_Var9;
              p_Var9 = p_Var5;
              p_Var11 = p_Var1;
            }
            else {
              piVar7[2] = (int)p_Var5;
              *(_Tree_node<> **)p_Var5 = p_Var9;
              *(_Tree_node<> **)p_Var1 = p_Var5;
              p_Var8 = p_Var9;
              p_Var9 = p_Var5;
              p_Var11 = p_Var1;
            }
          }
        }
        p_Var9[0xc] = (_Tree_node<>)0x1;
        *(undefined1 *)(*(int *)(*(int *)p_Var11 + 4) + 0xc) = 0;
        piVar7 = *(int **)(*(int *)p_Var11 + 4);
        piVar10 = (int *)*piVar7;
        *piVar7 = piVar10[2];
        if (*(char *)(piVar10[2] + 0xd) == '\0') {
          *(int **)(piVar10[2] + 4) = piVar7;
        }
        piVar10[1] = piVar7[1];
        if (piVar7 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar10;
          piVar10[2] = (int)piVar7;
        }
        else {
          piVar3 = (int *)piVar7[1];
          if (piVar7 == (int *)piVar3[2]) {
            piVar3[2] = (int)piVar10;
            piVar10[2] = (int)piVar7;
          }
          else {
            *piVar3 = (int)piVar10;
            piVar10[2] = (int)piVar7;
          }
        }
        goto LAB_00421a05;
      }
LAB_0042195c:
      p_Var9[0xc] = (_Tree_node<>)0x1;
      p_Var5[0xc] = (_Tree_node<>)0x1;
      *(undefined1 *)(*(int *)(*(int *)p_Var11 + 4) + 0xc) = 0;
      p_Var8 = *(_Tree_node<> **)(*(int *)p_Var11 + 4);
    }
    else {
      if (p_Var5[0xc] == (_Tree_node<>)0x0) goto LAB_0042195c;
      p_Var5 = *(_Tree_node<> **)p_Var9;
      p_Var6 = p_Var9;
      if (p_Var8 == p_Var5) {
        *(int *)p_Var9 = *(int *)(p_Var5 + 8);
        if (*(char *)(*(int *)(p_Var5 + 8) + 0xd) == '\0') {
          *(_Tree_node<> **)(*(int *)(p_Var5 + 8) + 4) = p_Var9;
        }
        *(int *)(p_Var5 + 4) = *(int *)p_Var1;
        if (p_Var9 == *(_Tree_node<> **)(*(int *)this + 4)) {
          *(_Tree_node<> **)(*(int *)this + 4) = p_Var5;
        }
        else {
          puVar4 = *(undefined4 **)p_Var1;
          if (p_Var9 == (_Tree_node<> *)puVar4[2]) {
            puVar4[2] = p_Var5;
          }
          else {
            *puVar4 = p_Var5;
          }
        }
        *(_Tree_node<> **)(p_Var5 + 8) = p_Var9;
        *(_Tree_node<> **)p_Var1 = p_Var5;
        p_Var6 = p_Var5;
        p_Var8 = p_Var9;
        p_Var11 = p_Var1;
      }
      p_Var6[0xc] = (_Tree_node<>)0x1;
      *(undefined1 *)(*(int *)(*(int *)p_Var11 + 4) + 0xc) = 0;
      piVar7 = *(int **)(*(int *)p_Var11 + 4);
      piVar10 = (int *)piVar7[2];
      piVar7[2] = *piVar10;
      if (*(char *)(*piVar10 + 0xd) == '\0') {
        *(int **)(*piVar10 + 4) = piVar7;
      }
      piVar10[1] = piVar7[1];
      if (piVar7 == *(int **)(*(int *)this + 4)) {
        *(int **)(*(int *)this + 4) = piVar10;
      }
      else {
        piVar3 = (int *)piVar7[1];
        if (piVar7 == (int *)*piVar3) {
          *piVar3 = (int)piVar10;
        }
        else {
          piVar3[2] = (int)piVar10;
        }
      }
      *piVar10 = (int)piVar7;
LAB_00421a05:
      piVar7[1] = (int)piVar10;
    }
    cVar2 = *(char *)(*(int *)(p_Var8 + 4) + 0xc);
  } while( true );
}


// protected: struct std::pair<class std::_Tree_iterator<class std::_Tree_val<struct
// std::_Tree_simple_types<struct std::pair<int const ,int> > > >,bool> __thiscall std::_Tree<class
// std::_Tmap_traits<int,int,struct std::less<int>,class std::allocator<struct std::pair<int const
// ,int> >,0> >::_Insert_nohint<struct std::pair<int const ,int> &,struct std::_Tree_node<struct
// std::pair<int const ,int>,void *> *>(bool,struct std::pair<int const ,int> &,struct
// std::_Tree_node<struct std::pair<int const ,int>,void *> *)

void __thiscall
std::_Tree<>::_Insert_nohint<>(_Tree<> *this,bool param_1,pair<> *param_2,_Tree_node<> *param_3)

{
  pair<> pVar1;
  pair<> *ppVar2;
  bool bVar3;
  pair<> *ppVar4;
  undefined4 *puVar5;
  pair<> *ppVar6;
  pair<> *ppVar7;
  undefined3 in_stack_00000005;
  void *in_stack_00000010;
  _Tree_node<> *p_Var8;
  _Tree_node<> *local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b31e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  bVar3 = true;
  ppVar2 = *(pair<> **)this;
  local_18 = (_Tree_node<> *)CONCAT31(local_18._1_3_,1);
  ppVar7 = ppVar2;
  if ((*(pair<> **)(ppVar2 + 4))[0xd] == (pair<>)0x0) {
    ppVar6 = *(pair<> **)(ppVar2 + 4);
    do {
      ppVar7 = ppVar6;
      bVar3 = *(int *)param_3 < *(int *)(ppVar7 + 0x10);
      local_18 = (_Tree_node<> *)CONCAT31(local_18._1_3_,bVar3);
      if (*(int *)param_3 < *(int *)(ppVar7 + 0x10)) {
        ppVar6 = *(pair<> **)ppVar7;
      }
      else {
        ppVar6 = *(pair<> **)(ppVar7 + 8);
      }
    } while (ppVar6[0xd] == (pair<>)0x0);
  }
  ppVar6 = ppVar7;
  if (bVar3) {
    if (ppVar7 == *(pair<> **)ppVar2) {
      local_18 = (_Tree_node<> *)&DAT_00000001;
      p_Var8 = (_Tree_node<> *)this;
      goto LAB_00421ac5;
    }
    if (ppVar7[0xd] == (pair<>)0x0) {
      ppVar6 = *(pair<> **)ppVar7;
      if (ppVar6[0xd] == (pair<>)0x0) {
        pVar1 = (*(pair<> **)(ppVar6 + 8))[0xd];
        ppVar2 = *(pair<> **)(ppVar6 + 8);
        while (pVar1 == (pair<>)0x0) {
          pVar1 = (*(pair<> **)(ppVar2 + 8))[0xd];
          ppVar6 = ppVar2;
          ppVar2 = *(pair<> **)(ppVar2 + 8);
        }
      }
      else {
        pVar1 = (*(pair<> **)(ppVar7 + 4))[0xd];
        ppVar2 = *(pair<> **)(ppVar7 + 4);
        ppVar6 = ppVar7;
        while ((ppVar4 = ppVar2, pVar1 == (pair<>)0x0 && (ppVar6 == *(pair<> **)ppVar4))) {
          pVar1 = (*(pair<> **)(ppVar4 + 4))[0xd];
          ppVar2 = *(pair<> **)(ppVar4 + 4);
          ppVar6 = ppVar4;
        }
        if (ppVar6[0xd] == (pair<>)0x0) {
          ppVar6 = ppVar4;
        }
      }
    }
    else {
      ppVar6 = *(pair<> **)(ppVar7 + 8);
    }
  }
  p_Var8 = param_3;
  if (*(int *)param_3 <= *(int *)(ppVar6 + 0x10)) {
    operator_delete(in_stack_00000010,(nothrow_t *)0x18);
    *_param_1 = ppVar6;
    *(undefined1 *)(_param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
LAB_00421ac5:
  puVar5 = (undefined4 *)_Insert_at<>(this,SUB41(&param_3,0),local_18,ppVar7,p_Var8);
  *_param_1 = *puVar5;
  *(undefined1 *)(_param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


// public: unsigned int __thiscall std::_Tree<class std::_Tmap_traits<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >,struct std::less<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,class std::allocator<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > >,0> >::count(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const &)const 

uint __thiscall std::_Tree<>::count(_Tree<> *this,basic_string<> *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int *local_c;
  int *local_8;
  
  _Eqrange<>(this,(basic_string<> *)&local_c);
  uVar4 = 0;
  while (local_c != local_8) {
    piVar2 = (int *)local_c[2];
    uVar4 = uVar4 + 1;
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      cVar1 = *(char *)(*piVar2 + 0xd);
      local_c = piVar2;
      piVar2 = (int *)*piVar2;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar2 + 0xd);
        local_c = piVar2;
        piVar2 = (int *)*piVar2;
      }
    }
    else {
      cVar1 = *(char *)(local_c[1] + 0xd);
      piVar3 = (int *)local_c[1];
      piVar2 = local_c;
      while ((local_c = piVar3, cVar1 == '\0' && (piVar2 == (int *)local_c[2]))) {
        cVar1 = *(char *)(local_c[1] + 0xd);
        piVar3 = (int *)local_c[1];
        piVar2 = local_c;
      }
    }
  }
  return uVar4;
}


// protected: void __thiscall std::_Tree<class std::_Tmap_traits<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >,struct std::less<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,class std::allocator<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > >,0> >::_Erase(struct std::_Tree_node<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > >,void *> *)

void __thiscall std::_Tree<>::_Erase(_Tree<> *this,_Tree_node<> *param_1)

{
  _Tree_node<> _Var1;
  _Tree_node<> *p_Var2;
  
  _Var1 = param_1[0xd];
  while (_Var1 == (_Tree_node<>)0x0) {
    _Erase((_Tree<> *)&DataLoader::multiData,*(_Tree_node<> **)(param_1 + 8));
    p_Var2 = *(_Tree_node<> **)param_1;
    pair<>::~pair<>((pair<> *)(param_1 + 0x10));
    operator_delete(param_1,(nothrow_t *)0x34);
    param_1 = p_Var2;
    _Var1 = p_Var2[0xd];
  }
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// protected: struct std::pair<class std::_Tree_const_iterator<class std::_Tree_val<struct
// std::_Tree_simple_types<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > > > >,class std::_Tree_const_iterator<class std::_Tree_val<struct
// std::_Tree_simple_types<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > > > > > __thiscall std::_Tree<class std::_Tmap_traits<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >,struct std::less<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,class std::allocator<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > >,0> >::_Eqrange<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const &)const 

void __thiscall std::_Tree<>::_Eqrange<>(_Tree<> *this,basic_string<> *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  bool bVar10;
  byte *in_stack_00000008;
  undefined4 *local_18;
  undefined4 *local_8;
  
  local_18 = _multiData;
  local_8 = _multiData;
  if (*(char *)((int)_multiData[1] + 0xd) == '\0') {
    uVar1 = *(uint *)(in_stack_00000008 + 0x10);
    puVar7 = (undefined4 *)_multiData[1];
    do {
      pbVar6 = (byte *)(puVar7 + 4);
      pbVar5 = in_stack_00000008;
      if (0xf < *(uint *)(in_stack_00000008 + 0x14)) {
        pbVar5 = *(byte **)in_stack_00000008;
      }
      pbVar9 = pbVar6;
      if (0xf < (uint)puVar7[9]) {
        pbVar9 = *(byte **)pbVar6;
      }
      uVar3 = puVar7[8];
      if (*(uint *)(in_stack_00000008 + 0x10) < (uint)puVar7[8]) {
        uVar3 = *(uint *)(in_stack_00000008 + 0x10);
      }
      while (uVar4 = uVar3 - 4, 3 < uVar3) {
        if (*(int *)pbVar9 != *(int *)pbVar5) goto LAB_0047f4a6;
        pbVar9 = pbVar9 + 4;
        pbVar5 = pbVar5 + 4;
        uVar3 = uVar4;
      }
      if (uVar4 == 0xfffffffc) {
LAB_0047f4da:
        uVar3 = 0;
      }
      else {
LAB_0047f4a6:
        bVar10 = *pbVar9 < *pbVar5;
        if ((*pbVar9 == *pbVar5) &&
           ((uVar4 == 0xfffffffd ||
            ((bVar10 = pbVar9[1] < pbVar5[1], pbVar9[1] == pbVar5[1] &&
             ((uVar4 == 0xfffffffe ||
              ((bVar10 = pbVar9[2] < pbVar5[2], pbVar9[2] == pbVar5[2] &&
               ((uVar4 == 0xffffffff || (bVar10 = pbVar9[3] < pbVar5[3], pbVar9[3] == pbVar5[3])))))
              ))))))) goto LAB_0047f4da;
        uVar3 = -(uint)bVar10 | 1;
      }
      if (uVar3 == 0) {
        uVar3 = puVar7[8];
        if (uVar3 < uVar1) {
          puVar8 = (undefined4 *)puVar7[2];
        }
        else {
LAB_0047f502:
          if (*(char *)((int)local_8 + 0xd) != '\0') {
            if (0xf < (uint)puVar7[9]) {
              pbVar6 = *(byte **)pbVar6;
            }
            pbVar5 = in_stack_00000008;
            if (0xf < *(uint *)(in_stack_00000008 + 0x14)) {
              pbVar5 = *(byte **)in_stack_00000008;
            }
            uVar4 = uVar1;
            if (uVar3 < uVar1) {
              uVar4 = uVar3;
            }
            while (uVar2 = uVar4 - 4, 3 < uVar4) {
              if (*(int *)pbVar5 != *(int *)pbVar6) goto LAB_0047f546;
              pbVar5 = pbVar5 + 4;
              pbVar6 = pbVar6 + 4;
              uVar4 = uVar2;
            }
            if (uVar2 == 0xfffffffc) {
LAB_0047f57a:
              uVar4 = 0;
            }
            else {
LAB_0047f546:
              bVar10 = *pbVar5 < *pbVar6;
              if ((*pbVar5 == *pbVar6) &&
                 ((uVar2 == 0xfffffffd ||
                  ((bVar10 = pbVar5[1] < pbVar6[1], pbVar5[1] == pbVar6[1] &&
                   ((uVar2 == 0xfffffffe ||
                    ((bVar10 = pbVar5[2] < pbVar6[2], pbVar5[2] == pbVar6[2] &&
                     ((uVar2 == 0xffffffff ||
                      (bVar10 = pbVar5[3] < pbVar6[3], pbVar5[3] == pbVar6[3]))))))))))))
              goto LAB_0047f57a;
              uVar4 = -(uint)bVar10 | 1;
            }
            if (uVar4 == 0) {
              if (*(uint *)(in_stack_00000008 + 0x10) < uVar3) {
LAB_0047f58c:
                local_8 = puVar7;
              }
            }
            else if ((int)uVar4 < 0) goto LAB_0047f58c;
          }
          puVar8 = (undefined4 *)*puVar7;
          local_18 = puVar7;
        }
      }
      else {
        if (-1 < (int)uVar3) {
          uVar3 = puVar7[8];
          goto LAB_0047f502;
        }
        puVar8 = (undefined4 *)puVar7[2];
      }
      puVar7 = puVar8;
    } while (*(char *)((int)puVar8 + 0xd) == '\0');
  }
  puVar7 = _multiData + 1;
  if (*(char *)((int)local_8 + 0xd) == '\0') {
    puVar7 = local_8;
  }
  if (*(char *)((int)*puVar7 + 0xd) == '\0') {
    puVar7 = (undefined4 *)*puVar7;
    do {
      pbVar6 = (byte *)(puVar7 + 4);
      if (0xf < (uint)puVar7[9]) {
        pbVar6 = (byte *)puVar7[4];
      }
      pbVar5 = in_stack_00000008;
      if (0xf < *(uint *)(in_stack_00000008 + 0x14)) {
        pbVar5 = *(byte **)in_stack_00000008;
      }
      uVar1 = puVar7[8];
      uVar3 = *(uint *)(in_stack_00000008 + 0x10);
      if (uVar1 < *(uint *)(in_stack_00000008 + 0x10)) {
        uVar3 = uVar1;
      }
      while (uVar4 = uVar3 - 4, 3 < uVar3) {
        if (*(int *)pbVar5 != *(int *)pbVar6) goto LAB_0047f60d;
        pbVar5 = pbVar5 + 4;
        pbVar6 = pbVar6 + 4;
        uVar3 = uVar4;
      }
      if (uVar4 == 0xfffffffc) {
LAB_0047f641:
        uVar3 = 0;
      }
      else {
LAB_0047f60d:
        bVar10 = *pbVar5 < *pbVar6;
        if ((*pbVar5 == *pbVar6) &&
           ((uVar4 == 0xfffffffd ||
            ((bVar10 = pbVar5[1] < pbVar6[1], pbVar5[1] == pbVar6[1] &&
             ((uVar4 == 0xfffffffe ||
              ((bVar10 = pbVar5[2] < pbVar6[2], pbVar5[2] == pbVar6[2] &&
               ((uVar4 == 0xffffffff || (bVar10 = pbVar5[3] < pbVar6[3], pbVar5[3] == pbVar6[3])))))
              ))))))) goto LAB_0047f641;
        uVar3 = -(uint)bVar10 | 1;
      }
      if (uVar3 == 0) {
        if (uVar1 <= *(uint *)(in_stack_00000008 + 0x10)) goto LAB_0047f64e;
LAB_0047f677:
        puVar8 = (undefined4 *)*puVar7;
        local_8 = puVar7;
      }
      else {
        if ((int)uVar3 < 0) goto LAB_0047f677;
LAB_0047f64e:
        puVar8 = (undefined4 *)puVar7[2];
      }
      puVar7 = puVar8;
    } while (*(char *)((int)puVar8 + 0xd) == '\0');
  }
  *(undefined4 **)param_1 = local_18;
  *(undefined4 **)(param_1 + 4) = local_8;
  return;
}


// public: __thiscall std::_Tree<class std::_Tmap_traits<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,struct std::less<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class
// std::allocator<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >,0> >::_Tree<class std::_Tmap_traits<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct
// std::less<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// >,class std::allocator<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > >,0> ><class std::allocator<struct
// std::_Tree_node<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > >,void *> > >(class std::_Tree<class std::_Tmap_traits<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct
// std::less<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// >,class std::allocator<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > >,0> > const &,class std::allocator<struct
// std::_Tree_node<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > >,void *> > &&)

_Tree<> * __thiscall std::_Tree<>::_Tree<><>(_Tree<> *this,_Tree<> *param_1,allocator<> *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  _Tree_node<> *p_Var7;
  _Tree_node<> *p_Var8;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005ba998;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  p_Var7 = _Tree_comp_alloc<>::_Buyheadnode((_Tree_comp_alloc<> *)this);
  *(_Tree_node<> **)this = p_Var7;
  local_8 = 1;
  p_Var8 = _Copy_nodes<>(this,*(undefined4 *)(*(int *)param_1 + 4),p_Var7,param_1);
  *(_Tree_node<> **)(p_Var7 + 4) = p_Var8;
  piVar2 = *(int **)this;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  piVar3 = (int *)piVar2[1];
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    cVar1 = *(char *)(*piVar3 + 0xd);
    piVar6 = (int *)*piVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar6 + 0xd);
      piVar3 = piVar6;
      piVar6 = (int *)*piVar6;
    }
    *piVar2 = (int)piVar3;
    iVar4 = *(int *)(*(int *)this + 4);
    iVar5 = *(int *)(iVar4 + 8);
    cVar1 = *(char *)(iVar5 + 0xd);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0xd);
      iVar4 = iVar5;
      iVar5 = *(int *)(iVar5 + 8);
    }
    *(int *)(*(int *)this + 8) = iVar4;
  }
  else {
    *piVar2 = (int)piVar2;
    *(int *)(*(int *)this + 8) = *(int *)this;
  }
  ExceptionList = local_10;
  return this;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
// std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,class std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > > > > > __thiscall std::_Tree<class
// std::_Tmap_traits<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >,struct
// std::less<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// >,class std::allocator<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > >,0> >::lower_bound(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const &)

void __thiscall std::_Tree<>::lower_bound(_Tree<> *this,basic_string<> *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  byte *in_stack_00000008;
  undefined4 *local_c;
  
  local_c = _multiData;
  if (*(char *)((int)_multiData[1] + 0xd) == '\0') {
    uVar1 = *(uint *)(in_stack_00000008 + 0x10);
    puVar7 = (undefined4 *)_multiData[1];
    do {
      pbVar6 = in_stack_00000008;
      if (0xf < *(uint *)(in_stack_00000008 + 0x14)) {
        pbVar6 = *(byte **)in_stack_00000008;
      }
      pbVar4 = (byte *)(puVar7 + 4);
      if (0xf < (uint)puVar7[9]) {
        pbVar4 = (byte *)puVar7[4];
      }
      uVar2 = puVar7[8];
      uVar5 = uVar2;
      if (uVar1 < uVar2) {
        uVar5 = uVar1;
      }
      while (uVar3 = uVar5 - 4, 3 < uVar5) {
        if (*(int *)pbVar4 != *(int *)pbVar6) goto LAB_00480656;
        pbVar4 = pbVar4 + 4;
        pbVar6 = pbVar6 + 4;
        uVar5 = uVar3;
      }
      if (uVar3 == 0xfffffffc) {
LAB_0048068a:
        uVar5 = 0;
      }
      else {
LAB_00480656:
        bVar9 = *pbVar4 < *pbVar6;
        if ((*pbVar4 == *pbVar6) &&
           ((uVar3 == 0xfffffffd ||
            ((bVar9 = pbVar4[1] < pbVar6[1], pbVar4[1] == pbVar6[1] &&
             ((uVar3 == 0xfffffffe ||
              ((bVar9 = pbVar4[2] < pbVar6[2], pbVar4[2] == pbVar6[2] &&
               ((uVar3 == 0xffffffff || (bVar9 = pbVar4[3] < pbVar6[3], pbVar4[3] == pbVar6[3]))))))
             )))))) goto LAB_0048068a;
        uVar5 = -(uint)bVar9 | 1;
      }
      if (uVar5 == 0) {
        if (uVar1 <= uVar2) goto LAB_00480695;
LAB_004806b9:
        puVar8 = (undefined4 *)puVar7[2];
      }
      else {
        if ((int)uVar5 < 0) goto LAB_004806b9;
LAB_00480695:
        puVar8 = (undefined4 *)*puVar7;
        local_c = puVar7;
      }
      puVar7 = puVar8;
    } while (*(char *)((int)puVar8 + 0xd) == '\0');
  }
  *(undefined4 **)param_1 = local_c;
  return;
}


// protected: struct std::_Tree_node<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,void *> * __thiscall std::_Tree<class
// std::_Tmap_traits<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,struct std::less<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,class std::allocator<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >,0>
// >::_Copy_nodes<struct std::_Tree<class std::_Tmap_traits<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,struct std::less<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class
// std::allocator<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >,0> >::_Copy_tag>(struct std::_Tree_node<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,void *>
// *,struct std::_Tree_node<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,void *> *,struct std::_Tree<class
// std::_Tmap_traits<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,struct std::less<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,class std::allocator<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >,0>
// >::_Copy_tag)

_Tree_node<> * __thiscall
std::_Tree<>::_Copy_nodes<>(_Tree<> *this,undefined4 *param_1,undefined4 param_2,undefined4 param_4)

{
  _Tree_node<> *p_Var1;
  _Tree_node<> *p_Var2;
  _Tree_node<> *p_Var3;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005baa50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  p_Var3 = *(_Tree_node<> **)this;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    p_Var1 = _Tree_comp_alloc<>::_Buynode<>((_Tree_comp_alloc<> *)this,(pair<> *)(param_1 + 4));
    *(undefined4 *)(p_Var1 + 4) = param_2;
    p_Var1[0xc] = *(_Tree_node<> *)(param_1 + 3);
    local_8 = 0;
    if (p_Var3[0xd] != (_Tree_node<>)0x0) {
      p_Var3 = p_Var1;
    }
    p_Var2 = _Copy_nodes<>(this,*param_1,p_Var1,param_4);
    *(_Tree_node<> **)p_Var1 = p_Var2;
    p_Var2 = _Copy_nodes<>(this,param_1[2],p_Var1,param_4);
    *(_Tree_node<> **)(p_Var1 + 8) = p_Var2;
  }
  ExceptionList = local_10;
  return p_Var3;
}


// protected: void __thiscall std::_Tree<class std::_Tmap_traits<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >,struct std::less<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,class std::allocator<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > >,0> >::_Destroy_if_node(struct std::_Tree_node<struct
// std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,class std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > >,void *> *)

void __thiscall std::_Tree<>::_Destroy_if_node(_Tree<> *this,_Tree_node<> *param_1)

{
  pair<>::~pair<>((pair<> *)(param_1 + 0x10));
  operator_delete(param_1,(nothrow_t *)0x34);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// protected: class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
// std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,class std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > > > > > __thiscall std::_Tree<class
// std::_Tmap_traits<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::vector<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >,struct
// std::less<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// >,class std::allocator<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > >,0> >::_Insert_at<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > &,struct std::_Tree_node<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > >,void *> *>(bool,struct std::_Tree_node<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > >,void *> *,struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > &,struct std::_Tree_node<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > >,void *> *)

void __thiscall
std::_Tree<>::_Insert_at<>
          (_Tree<> *this,bool param_1,_Tree_node<> *param_2,pair<> *param_3,_Tree_node<> *param_4)

{
  _Tree_node<> *p_Var1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  _Tree_node<> *p_Var5;
  _Tree_node<> *p_Var6;
  int *piVar7;
  _Tree_node<> *p_Var8;
  _Tree_node<> *p_Var9;
  int *piVar10;
  _Tree_node<> *p_Var11;
  undefined3 in_stack_00000005;
  _Tree_node<> *in_stack_00000014;
  
  if (0x4ec4ec2 < DAT_0065d680) {
    _Destroy_if_node(this,in_stack_00000014);
                    // WARNING: Subroutine does not return
    std::_Xlength_error("map/set<T> too long");
  }
  DAT_0065d680 = DAT_0065d680 + 1;
  *(pair<> **)(in_stack_00000014 + 4) = param_3;
  if (param_3 == _multiData) {
    *(_Tree_node<> **)(_multiData + 4) = in_stack_00000014;
    *(_Tree_node<> **)_multiData = in_stack_00000014;
    *(_Tree_node<> **)(_multiData + 8) = in_stack_00000014;
  }
  else if ((char)param_2 == '\0') {
    *(_Tree_node<> **)(param_3 + 8) = in_stack_00000014;
    if (param_3 == *(pair<> **)(_multiData + 8)) {
      *(_Tree_node<> **)(_multiData + 8) = in_stack_00000014;
    }
  }
  else {
    *(_Tree_node<> **)param_3 = in_stack_00000014;
    if (param_3 == *(pair<> **)_multiData) {
      *(_Tree_node<> **)_multiData = in_stack_00000014;
    }
  }
  cVar2 = *(char *)(*(int *)(in_stack_00000014 + 4) + 0xc);
  p_Var8 = in_stack_00000014;
  do {
    if (cVar2 != '\0') {
      *(undefined1 *)(*(int *)(_multiData + 4) + 0xc) = 1;
      *_param_1 = in_stack_00000014;
      return;
    }
    p_Var9 = *(_Tree_node<> **)(p_Var8 + 4);
    p_Var11 = p_Var8 + 4;
    p_Var1 = p_Var9 + 4;
    p_Var5 = (_Tree_node<> *)**(int **)(p_Var9 + 4);
    if (p_Var9 == p_Var5) {
      p_Var5 = (_Tree_node<> *)(*(int **)(p_Var9 + 4))[2];
      if (p_Var5[0xc] != (_Tree_node<>)0x0) {
        p_Var5 = *(_Tree_node<> **)(p_Var9 + 8);
        if (p_Var8 == p_Var5) {
          *(int *)(p_Var9 + 8) = *(int *)p_Var5;
          if (*(char *)(*(int *)p_Var5 + 0xd) == '\0') {
            *(_Tree_node<> **)(*(int *)p_Var5 + 4) = p_Var9;
          }
          *(int *)(p_Var5 + 4) = *(int *)p_Var1;
          if (p_Var9 == *(_Tree_node<> **)(_multiData + 4)) {
            *(_Tree_node<> **)(_multiData + 4) = p_Var5;
            *(_Tree_node<> **)p_Var5 = p_Var9;
            *(_Tree_node<> **)p_Var1 = p_Var5;
            p_Var8 = p_Var9;
            p_Var9 = p_Var5;
            p_Var11 = p_Var1;
          }
          else {
            piVar7 = *(int **)p_Var1;
            if (p_Var9 == (_Tree_node<> *)*piVar7) {
              *piVar7 = (int)p_Var5;
              *(_Tree_node<> **)p_Var5 = p_Var9;
              *(_Tree_node<> **)p_Var1 = p_Var5;
              p_Var8 = p_Var9;
              p_Var9 = p_Var5;
              p_Var11 = p_Var1;
            }
            else {
              piVar7[2] = (int)p_Var5;
              *(_Tree_node<> **)p_Var5 = p_Var9;
              *(_Tree_node<> **)p_Var1 = p_Var5;
              p_Var8 = p_Var9;
              p_Var9 = p_Var5;
              p_Var11 = p_Var1;
            }
          }
        }
        p_Var9[0xc] = (_Tree_node<>)0x1;
        *(undefined1 *)(*(int *)(*(int *)p_Var11 + 4) + 0xc) = 0;
        piVar7 = *(int **)(*(int *)p_Var11 + 4);
        piVar10 = (int *)*piVar7;
        *piVar7 = piVar10[2];
        if (*(char *)(piVar10[2] + 0xd) == '\0') {
          *(int **)(piVar10[2] + 4) = piVar7;
        }
        piVar10[1] = piVar7[1];
        if (piVar7 == *(int **)(_multiData + 4)) {
          *(int **)(_multiData + 4) = piVar10;
          piVar10[2] = (int)piVar7;
        }
        else {
          piVar3 = (int *)piVar7[1];
          if (piVar7 == (int *)piVar3[2]) {
            piVar3[2] = (int)piVar10;
            piVar10[2] = (int)piVar7;
          }
          else {
            *piVar3 = (int)piVar10;
            piVar10[2] = (int)piVar7;
          }
        }
        goto LAB_0048121f;
      }
LAB_00481176:
      p_Var9[0xc] = (_Tree_node<>)0x1;
      p_Var5[0xc] = (_Tree_node<>)0x1;
      *(undefined1 *)(*(int *)(*(int *)p_Var11 + 4) + 0xc) = 0;
      p_Var8 = *(_Tree_node<> **)(*(int *)p_Var11 + 4);
    }
    else {
      if (p_Var5[0xc] == (_Tree_node<>)0x0) goto LAB_00481176;
      p_Var5 = *(_Tree_node<> **)p_Var9;
      p_Var6 = p_Var9;
      if (p_Var8 == p_Var5) {
        *(int *)p_Var9 = *(int *)(p_Var5 + 8);
        if (*(char *)(*(int *)(p_Var5 + 8) + 0xd) == '\0') {
          *(_Tree_node<> **)(*(int *)(p_Var5 + 8) + 4) = p_Var9;
        }
        *(int *)(p_Var5 + 4) = *(int *)p_Var1;
        if (p_Var9 == *(_Tree_node<> **)(_multiData + 4)) {
          *(_Tree_node<> **)(_multiData + 4) = p_Var5;
        }
        else {
          puVar4 = *(undefined4 **)p_Var1;
          if (p_Var9 == (_Tree_node<> *)puVar4[2]) {
            puVar4[2] = p_Var5;
          }
          else {
            *puVar4 = p_Var5;
          }
        }
        *(_Tree_node<> **)(p_Var5 + 8) = p_Var9;
        *(_Tree_node<> **)p_Var1 = p_Var5;
        p_Var6 = p_Var5;
        p_Var8 = p_Var9;
        p_Var11 = p_Var1;
      }
      p_Var6[0xc] = (_Tree_node<>)0x1;
      *(undefined1 *)(*(int *)(*(int *)p_Var11 + 4) + 0xc) = 0;
      piVar7 = *(int **)(*(int *)p_Var11 + 4);
      piVar10 = (int *)piVar7[2];
      piVar7[2] = *piVar10;
      if (*(char *)(*piVar10 + 0xd) == '\0') {
        *(int **)(*piVar10 + 4) = piVar7;
      }
      piVar10[1] = piVar7[1];
      if (piVar7 == *(int **)(_multiData + 4)) {
        *(int **)(_multiData + 4) = piVar10;
      }
      else {
        piVar3 = (int *)piVar7[1];
        if (piVar7 == (int *)*piVar3) {
          *piVar3 = (int)piVar10;
        }
        else {
          piVar3[2] = (int)piVar10;
        }
      }
      *piVar10 = (int)piVar7;
LAB_0048121f:
      piVar7[1] = (int)piVar10;
    }
    cVar2 = *(char *)(*(int *)(p_Var8 + 4) + 0xc);
  } while( true );
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// protected: struct std::pair<class std::_Tree_iterator<class std::_Tree_val<struct
// std::_Tree_simple_types<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > > > >,bool> __thiscall std::_Tree<class std::_Tmap_traits<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >,struct std::less<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,class std::allocator<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > >,0> >::_Insert_nohint<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > &,struct std::_Tree_node<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > >,void *> *>(bool,struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > &,struct std::_Tree_node<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > >,void *> *)

void __thiscall
std::_Tree<>::_Insert_nohint<>(_Tree<> *this,bool param_1,pair<> *param_2,_Tree_node<> *param_3)

{
  pair<> pVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  pair<> *ppVar5;
  pair<> *ppVar6;
  byte bVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  _Tree_node<> *p_Var11;
  _Tree<> *this_00;
  _Tree_node<> *p_Var12;
  _Tree<> *p_Var13;
  pair<> *ppVar14;
  bool bVar15;
  undefined3 in_stack_00000005;
  void *in_stack_00000010;
  _Tree_node<> *local_20;
  pair<> *local_1c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005baa70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  bVar7 = 1;
  local_1c = _multiData;
  local_20 = (_Tree_node<> *)CONCAT31(local_20._1_3_,1);
  if ((*(pair<> **)(_multiData + 4))[0xd] == (pair<>)0x0) {
    uVar2 = *(uint *)(param_3 + 0x10);
    ppVar14 = *(pair<> **)(_multiData + 4);
    do {
      local_1c = ppVar14;
      p_Var12 = (_Tree_node<> *)(local_1c + 0x10);
      if (0xf < *(uint *)(local_1c + 0x24)) {
        p_Var12 = *(_Tree_node<> **)(local_1c + 0x10);
      }
      p_Var11 = param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        p_Var11 = *(_Tree_node<> **)param_3;
      }
      uVar10 = *(uint *)(local_1c + 0x20);
      uVar8 = uVar2;
      if (uVar10 < uVar2) {
        uVar8 = uVar10;
      }
      while (uVar4 = uVar8 - 4, 3 < uVar8) {
        if (*(int *)p_Var11 != *(int *)p_Var12) goto LAB_004812ed;
        p_Var11 = p_Var11 + 4;
        p_Var12 = p_Var12 + 4;
        uVar8 = uVar4;
      }
      if (uVar4 == 0xfffffffc) {
LAB_00481321:
        uVar8 = 0;
      }
      else {
LAB_004812ed:
        bVar15 = (byte)*p_Var11 < (byte)*p_Var12;
        if ((*p_Var11 == *p_Var12) &&
           ((uVar4 == 0xfffffffd ||
            ((bVar15 = (byte)p_Var11[1] < (byte)p_Var12[1], p_Var11[1] == p_Var12[1] &&
             ((uVar4 == 0xfffffffe ||
              ((bVar15 = (byte)p_Var11[2] < (byte)p_Var12[2], p_Var11[2] == p_Var12[2] &&
               ((uVar4 == 0xffffffff ||
                (bVar15 = (byte)p_Var11[3] < (byte)p_Var12[3], p_Var11[3] == p_Var12[3]))))))))))))
        goto LAB_00481321;
        uVar8 = -(uint)bVar15 | 1;
      }
      if (uVar8 == 0) {
        if (uVar2 < uVar10) {
          uVar8 = 0xffffffff;
        }
        else {
          uVar8 = (uint)(uVar10 < uVar2);
        }
      }
      bVar3 = (byte)(uVar8 >> 0x18);
      bVar7 = bVar3 >> 7;
      local_20 = (_Tree_node<> *)CONCAT31(local_20._1_3_,bVar3 >> 7);
      if ((int)uVar8 < 0) {
        ppVar14 = *(pair<> **)local_1c;
      }
      else {
        ppVar14 = *(pair<> **)(local_1c + 8);
      }
    } while (ppVar14[0xd] == (pair<>)0x0);
  }
  ppVar14 = local_1c;
  if (bVar7 != 0) {
    if (local_1c == *(pair<> **)_multiData) {
      puVar9 = (undefined4 *)
               _Insert_at<>((_Tree<> *)local_1c,SUB41(&param_3,0),(_Tree_node<> *)&DAT_00000001,
                            local_1c,(_Tree_node<> *)local_1c);
      *_param_1 = *puVar9;
      *(undefined1 *)(_param_1 + 1) = 1;
      ExceptionList = local_10;
      return;
    }
    if (local_1c[0xd] == (pair<>)0x0) {
      ppVar14 = *(pair<> **)local_1c;
      if (ppVar14[0xd] == (pair<>)0x0) {
        pVar1 = (*(pair<> **)(ppVar14 + 8))[0xd];
        ppVar5 = *(pair<> **)(ppVar14 + 8);
        while (pVar1 == (pair<>)0x0) {
          pVar1 = (*(pair<> **)(ppVar5 + 8))[0xd];
          ppVar14 = ppVar5;
          ppVar5 = *(pair<> **)(ppVar5 + 8);
        }
      }
      else {
        pVar1 = (*(pair<> **)(local_1c + 4))[0xd];
        ppVar5 = *(pair<> **)(local_1c + 4);
        ppVar14 = local_1c;
        while ((ppVar6 = ppVar5, pVar1 == (pair<>)0x0 && (ppVar14 == *(pair<> **)ppVar6))) {
          pVar1 = (*(pair<> **)(ppVar6 + 4))[0xd];
          ppVar5 = *(pair<> **)(ppVar6 + 4);
          ppVar14 = ppVar6;
        }
        if (ppVar14[0xd] == (pair<>)0x0) {
          ppVar14 = ppVar6;
        }
      }
    }
    else {
      ppVar14 = *(pair<> **)(local_1c + 8);
    }
  }
  p_Var13 = (_Tree<> *)param_3;
  if (0xf < *(uint *)(param_3 + 0x14)) {
    p_Var13 = *(_Tree<> **)param_3;
  }
  this_00 = (_Tree<> *)(ppVar14 + 0x10);
  if (0xf < *(uint *)(ppVar14 + 0x24)) {
    this_00 = *(_Tree<> **)(ppVar14 + 0x10);
  }
  uVar2 = *(uint *)(param_3 + 0x10);
  uVar10 = *(uint *)(ppVar14 + 0x20);
  if (uVar2 < *(uint *)(ppVar14 + 0x20)) {
    uVar10 = uVar2;
  }
  while (uVar8 = uVar10 - 4, 3 < uVar10) {
    if (*(int *)this_00 != *(int *)p_Var13) goto LAB_0048142a;
    this_00 = this_00 + 4;
    p_Var13 = p_Var13 + 4;
    uVar10 = uVar8;
  }
  if (uVar8 != 0xfffffffc) {
LAB_0048142a:
    bVar15 = (byte)*this_00 < (byte)*p_Var13;
    if ((*this_00 != *p_Var13) ||
       ((uVar8 != 0xfffffffd &&
        ((bVar15 = (byte)this_00[1] < (byte)p_Var13[1], this_00[1] != p_Var13[1] ||
         ((uVar8 != 0xfffffffe &&
          ((bVar15 = (byte)this_00[2] < (byte)p_Var13[2], this_00[2] != p_Var13[2] ||
           ((uVar8 != 0xffffffff &&
            (bVar15 = (byte)this_00[3] < (byte)p_Var13[3], this_00[3] != p_Var13[3])))))))))))) {
      uVar10 = -(uint)bVar15 | 1;
      goto LAB_00481460;
    }
  }
  uVar10 = 0;
LAB_00481460:
  if (uVar10 == 0) {
    if (*(uint *)(ppVar14 + 0x20) < uVar2) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = (uint)(uVar2 < *(uint *)(ppVar14 + 0x20));
    }
  }
  if ((int)uVar10 < 0) {
    puVar9 = (undefined4 *)
             _Insert_at<>(this_00,SUB41(&param_3,0),local_20,local_1c,(_Tree_node<> *)this_00);
    *_param_1 = *puVar9;
    *(undefined1 *)(_param_1 + 1) = 1;
    ExceptionList = local_10;
    return;
  }
  pair<>::~pair<>((pair<> *)((int)in_stack_00000010 + 0x10));
  operator_delete(in_stack_00000010,(nothrow_t *)0x34);
  *_param_1 = ppVar14;
  *(undefined1 *)(_param_1 + 1) = 0;
  ExceptionList = local_10;
  return;
}


// protected: class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
// std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,float> > > > __thiscall std::_Tree<class std::_Tmap_traits<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,float,struct
// std::less<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// >,class std::allocator<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,float> >,0> >::_Insert_hint<struct
// std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,float> &,struct std::_Tree_node<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,float>,void *> *>(class
// std::_Tree_const_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
// std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,float> > > >,struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,float> &,struct std::_Tree_node<struct
// std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,float>,void *> *)

undefined4 * __thiscall
std::_Tree<>::_Insert_hint<>
          (_Tree<> *this,undefined4 *param_2,pair<> *param_3,_Tree_node<> *param_4)

{
  pair<> pVar1;
  pair<> *ppVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  pair<> *ppVar8;
  pair<> *ppVar9;
  pair<> *ppVar10;
  _Tree_node<> *p_Var11;
  pair<> *ppVar12;
  bool bVar13;
  bool bVar14;
  uint uStack_40;
  undefined1 local_30 [4];
  pair<> *local_2c;
  pair<> *local_28;
  pair<> *local_24;
  _Tree<> *local_20;
  pair<> *local_1c;
  pair<> local_15;
  undefined1 *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bd290;
  local_10 = ExceptionList;
  uStack_40 = ___security_cookie ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  bVar14 = SUB41(param_2,0);
  local_20 = this;
  if (*(int *)(this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_40;
    _Insert_at<>(this,bVar14,(_Tree_node<> *)&DAT_00000001,*(pair<> **)this,(_Tree_node<> *)this);
    ExceptionList = local_10;
    return param_2;
  }
  local_28 = *(pair<> **)this;
  if (param_3 != *(pair<> **)local_28) {
    if (param_3 != local_28) {
      local_2c = param_3 + 0x10;
      ppVar9 = local_2c;
      if (0xf < *(uint *)(param_3 + 0x24)) {
        ppVar9 = *(pair<> **)local_2c;
      }
      ppVar8 = (pair<> *)param_4;
      if (0xf < *(uint *)(param_4 + 0x14)) {
        ppVar8 = *(pair<> **)param_4;
      }
      local_1c = *(pair<> **)(param_4 + 0x10);
      ppVar12 = local_1c;
      if (*(pair<> **)(param_3 + 0x20) < local_1c) {
        ppVar12 = *(pair<> **)(param_3 + 0x20);
      }
      while (ppVar10 = ppVar12 + -4, (pair<> *)0x3 < ppVar12) {
        if (*(int *)ppVar8 != *(int *)ppVar9) goto LAB_004a3126;
        ppVar8 = ppVar8 + 4;
        ppVar9 = ppVar9 + 4;
        ppVar12 = ppVar10;
      }
      if (ppVar10 == (pair<> *)0xfffffffc) {
LAB_004a315a:
        uVar6 = 0;
      }
      else {
LAB_004a3126:
        bVar13 = (byte)*ppVar8 < (byte)*ppVar9;
        if ((*ppVar8 == *ppVar9) &&
           ((ppVar10 == (pair<> *)0xfffffffd ||
            ((bVar13 = (byte)ppVar8[1] < (byte)ppVar9[1], ppVar8[1] == ppVar9[1] &&
             ((ppVar10 == (pair<> *)0xfffffffe ||
              ((bVar13 = (byte)ppVar8[2] < (byte)ppVar9[2], ppVar8[2] == ppVar9[2] &&
               ((ppVar10 == (pair<> *)0xffffffff ||
                (bVar13 = (byte)ppVar8[3] < (byte)ppVar9[3], ppVar8[3] == ppVar9[3]))))))))))))
        goto LAB_004a315a;
        uVar6 = -(uint)bVar13 | 1;
      }
      if (uVar6 == 0) {
        if (local_1c < *(pair<> **)(param_3 + 0x20)) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(*(pair<> **)(param_3 + 0x20) < local_1c);
        }
      }
      if ((int)uVar6 < 0) {
        if (param_3[0xd] == (pair<>)0x0) {
          ppVar9 = *(pair<> **)param_3;
          if (ppVar9[0xd] == (pair<>)0x0) {
            pVar1 = (*(pair<> **)(ppVar9 + 8))[0xd];
            ppVar8 = *(pair<> **)(ppVar9 + 8);
            while (pVar1 == (pair<>)0x0) {
              pVar1 = (*(pair<> **)(ppVar8 + 8))[0xd];
              ppVar9 = ppVar8;
              ppVar8 = *(pair<> **)(ppVar8 + 8);
            }
          }
          else {
            pVar1 = (*(pair<> **)(param_3 + 4))[0xd];
            ppVar12 = *(pair<> **)(param_3 + 4);
            ppVar8 = param_3;
            while ((ppVar9 = ppVar12, pVar1 == (pair<>)0x0 && (ppVar8 == *(pair<> **)ppVar9))) {
              pVar1 = (*(pair<> **)(ppVar9 + 4))[0xd];
              ppVar12 = *(pair<> **)(ppVar9 + 4);
              ppVar8 = ppVar9;
            }
            if (ppVar8[0xd] != (pair<>)0x0) {
              ppVar9 = ppVar8;
            }
          }
        }
        else {
          ppVar9 = *(pair<> **)(param_3 + 8);
        }
        ppVar8 = (pair<> *)param_4;
        if (0xf < *(uint *)(param_4 + 0x14)) {
          ppVar8 = *(pair<> **)param_4;
        }
        ppVar12 = ppVar9 + 0x10;
        if (0xf < *(uint *)(ppVar9 + 0x24)) {
          ppVar12 = *(pair<> **)(ppVar9 + 0x10);
        }
        local_2c = *(pair<> **)(ppVar9 + 0x20);
        ppVar10 = local_2c;
        if (local_1c < local_2c) {
          ppVar10 = local_1c;
        }
        while (local_24 = ppVar10 + -4, (pair<> *)0x3 < ppVar10) {
          if (*(int *)ppVar12 != *(int *)ppVar8) goto LAB_004a321c;
          ppVar12 = ppVar12 + 4;
          ppVar8 = ppVar8 + 4;
          ppVar10 = local_24;
        }
        if (local_24 == (pair<> *)0xfffffffc) {
LAB_004a3253:
          uVar6 = 0;
        }
        else {
LAB_004a321c:
          bVar13 = (byte)*ppVar12 < (byte)*ppVar8;
          if ((*ppVar12 == *ppVar8) &&
             ((local_24 == (pair<> *)0xfffffffd ||
              ((bVar13 = (byte)ppVar12[1] < (byte)ppVar8[1], ppVar12[1] == ppVar8[1] &&
               ((local_24 == (pair<> *)0xfffffffe ||
                ((bVar13 = (byte)ppVar12[2] < (byte)ppVar8[2], ppVar12[2] == ppVar8[2] &&
                 ((local_24 == (pair<> *)0xffffffff ||
                  (bVar13 = (byte)ppVar12[3] < (byte)ppVar8[3], ppVar12[3] == ppVar8[3]))))))))))))
          goto LAB_004a3253;
          uVar6 = -(uint)bVar13 | 1;
        }
        if (uVar6 == 0) {
          if (local_2c < local_1c) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = (uint)(local_1c < local_2c);
          }
        }
        if ((int)uVar6 < 0) {
          p_Var11 = *(_Tree_node<> **)(ppVar9 + 8);
          if (p_Var11[0xd] == (_Tree_node<>)0x0) {
            local_14 = (undefined1 *)&uStack_40;
            _Insert_at<>(this,bVar14,(_Tree_node<> *)&DAT_00000001,param_3,p_Var11);
            ExceptionList = local_10;
            return param_2;
          }
          local_14 = (undefined1 *)&uStack_40;
          _Insert_at<>(this,bVar14,(_Tree_node<> *)0x0,ppVar9,p_Var11);
          ExceptionList = local_10;
          return param_2;
        }
      }
      ppVar9 = (pair<> *)param_4;
      if (0xf < *(uint *)(param_4 + 0x14)) {
        ppVar9 = *(pair<> **)param_4;
      }
      ppVar8 = param_3 + 0x10;
      if (0xf < *(uint *)(param_3 + 0x24)) {
        ppVar8 = *(pair<> **)(param_3 + 0x10);
      }
      ppVar12 = *(pair<> **)(param_3 + 0x20);
      if (local_1c < *(pair<> **)(param_3 + 0x20)) {
        ppVar12 = local_1c;
      }
      while (ppVar10 = ppVar12 + -4, (pair<> *)0x3 < ppVar12) {
        if (*(int *)ppVar8 != *(int *)ppVar9) goto LAB_004a3306;
        ppVar8 = ppVar8 + 4;
        ppVar9 = ppVar9 + 4;
        ppVar12 = ppVar10;
      }
      if (ppVar10 == (pair<> *)0xfffffffc) {
LAB_004a333a:
        uVar6 = 0;
      }
      else {
LAB_004a3306:
        bVar13 = (byte)*ppVar8 < (byte)*ppVar9;
        if ((*ppVar8 == *ppVar9) &&
           ((ppVar10 == (pair<> *)0xfffffffd ||
            ((bVar13 = (byte)ppVar8[1] < (byte)ppVar9[1], ppVar8[1] == ppVar9[1] &&
             ((ppVar10 == (pair<> *)0xfffffffe ||
              ((bVar13 = (byte)ppVar8[2] < (byte)ppVar9[2], ppVar8[2] == ppVar9[2] &&
               ((ppVar10 == (pair<> *)0xffffffff ||
                (bVar13 = (byte)ppVar8[3] < (byte)ppVar9[3], ppVar8[3] == ppVar9[3]))))))))))))
        goto LAB_004a333a;
        uVar6 = -(uint)bVar13 | 1;
      }
      if (uVar6 == 0) {
        ppVar8 = param_3 + 0x10;
        if (*(pair<> **)(param_3 + 0x20) < local_1c) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(local_1c < *(pair<> **)(param_3 + 0x20));
        }
      }
      if (-1 < (int)uVar6) goto LAB_004a349c;
      ppVar9 = *(pair<> **)(param_3 + 8);
      local_15 = ppVar9[0xd];
      ppVar8 = param_3;
      if (local_15 == (pair<>)0x0) {
        pVar1 = (*(pair<> **)ppVar9)[0xd];
        ppVar12 = *(pair<> **)ppVar9;
        while (pVar1 == (pair<>)0x0) {
          ppVar8 = *(pair<> **)ppVar12;
          ppVar9 = ppVar12;
          ppVar12 = ppVar8;
          pVar1 = ppVar8[0xd];
        }
      }
      else {
        pVar1 = (*(pair<> **)(param_3 + 4))[0xd];
        ppVar12 = *(pair<> **)(param_3 + 4);
        while ((ppVar9 = ppVar12, pVar1 == (pair<>)0x0 && (ppVar8 == *(pair<> **)(ppVar9 + 8)))) {
          pVar1 = (*(pair<> **)(ppVar9 + 4))[0xd];
          ppVar12 = *(pair<> **)(ppVar9 + 4);
          ppVar8 = ppVar9;
        }
      }
      if (ppVar9 == local_28) goto LAB_004a344d;
      ppVar8 = ppVar9 + 0x10;
      if (0xf < *(uint *)(ppVar9 + 0x24)) {
        ppVar8 = *(pair<> **)(ppVar9 + 0x10);
      }
      ppVar12 = (pair<> *)param_4;
      if (0xf < *(uint *)(param_4 + 0x14)) {
        ppVar12 = *(pair<> **)param_4;
      }
      ppVar10 = local_1c;
      if (*(pair<> **)(ppVar9 + 0x20) < local_1c) {
        ppVar10 = *(pair<> **)(ppVar9 + 0x20);
      }
      while (ppVar2 = ppVar10 + -4, (pair<> *)0x3 < ppVar10) {
        if (*(int *)ppVar12 != *(int *)ppVar8) goto LAB_004a33f6;
        ppVar12 = ppVar12 + 4;
        ppVar8 = ppVar8 + 4;
        ppVar10 = ppVar2;
      }
      if (ppVar2 == (pair<> *)0xfffffffc) {
LAB_004a342a:
        uVar6 = 0;
      }
      else {
LAB_004a33f6:
        bVar13 = (byte)*ppVar12 < (byte)*ppVar8;
        if ((*ppVar12 == *ppVar8) &&
           ((ppVar2 == (pair<> *)0xfffffffd ||
            ((bVar13 = (byte)ppVar12[1] < (byte)ppVar8[1], ppVar12[1] == ppVar8[1] &&
             ((ppVar2 == (pair<> *)0xfffffffe ||
              ((bVar13 = (byte)ppVar12[2] < (byte)ppVar8[2], ppVar12[2] == ppVar8[2] &&
               ((ppVar2 == (pair<> *)0xffffffff ||
                (bVar13 = (byte)ppVar12[3] < (byte)ppVar8[3], ppVar12[3] == ppVar8[3]))))))))))))
        goto LAB_004a342a;
        uVar6 = -(uint)bVar13 | 1;
      }
      if (uVar6 == 0) {
        if (local_1c < *(pair<> **)(ppVar9 + 0x20)) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(*(pair<> **)(ppVar9 + 0x20) < local_1c);
        }
      }
      ppVar8 = (pair<> *)(uVar6 >> 0x1f);
      if ((int)uVar6 < 0) {
LAB_004a344d:
        if (local_15 == (pair<>)0x0) {
          _Insert_at<>(this,bVar14,(_Tree_node<> *)&DAT_00000001,ppVar9,(_Tree_node<> *)ppVar8);
          ExceptionList = local_10;
          return param_2;
        }
        local_14 = (undefined1 *)&uStack_40;
        _Insert_at<>(this,bVar14,(_Tree_node<> *)0x0,param_3,(_Tree_node<> *)ppVar8);
        ExceptionList = local_10;
        return param_2;
      }
      goto LAB_004a349c;
    }
    local_2c = *(pair<> **)(local_28 + 8);
    p_Var11 = param_4;
    if (0xf < *(uint *)(param_4 + 0x14)) {
      p_Var11 = *(_Tree_node<> **)param_4;
    }
    ppVar8 = local_2c + 0x10;
    if (0xf < *(uint *)(local_2c + 0x24)) {
      ppVar8 = *(pair<> **)(local_2c + 0x10);
    }
    uVar6 = *(uint *)(param_4 + 0x10);
    uVar4 = *(uint *)(local_2c + 0x20);
    uVar5 = uVar4;
    if (uVar6 < uVar4) {
      uVar5 = uVar6;
    }
    while (uVar3 = uVar5 - 4, 3 < uVar5) {
      if (*(int *)ppVar8 != *(int *)p_Var11) goto LAB_004a3056;
      ppVar8 = ppVar8 + 4;
      p_Var11 = p_Var11 + 4;
      uVar5 = uVar3;
    }
    if (uVar3 == 0xfffffffc) {
LAB_004a308a:
      uVar5 = 0;
    }
    else {
LAB_004a3056:
      bVar13 = (byte)*(_Tree_node<> *)ppVar8 < (byte)*p_Var11;
      if ((*(_Tree_node<> *)ppVar8 == *p_Var11) &&
         ((uVar3 == 0xfffffffd ||
          ((bVar13 = (byte)*(_Tree_node<> *)(ppVar8 + 1) < (byte)p_Var11[1],
           *(_Tree_node<> *)(ppVar8 + 1) == p_Var11[1] &&
           ((uVar3 == 0xfffffffe ||
            ((bVar13 = (byte)*(_Tree_node<> *)(ppVar8 + 2) < (byte)p_Var11[2],
             *(_Tree_node<> *)(ppVar8 + 2) == p_Var11[2] &&
             ((uVar3 == 0xffffffff ||
              (bVar13 = (byte)*(_Tree_node<> *)(ppVar8 + 3) < (byte)p_Var11[3],
              *(_Tree_node<> *)(ppVar8 + 3) == p_Var11[3])))))))))))) goto LAB_004a308a;
      uVar5 = -(uint)bVar13 | 1;
    }
    if (uVar5 == 0) {
      if (uVar4 < uVar6) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (uint)(uVar6 < uVar4);
      }
    }
    if ((int)uVar5 < 0) {
      local_14 = (undefined1 *)&uStack_40;
      _Insert_at<>(this,bVar14,(_Tree_node<> *)0x0,local_2c,(_Tree_node<> *)ppVar8);
      ExceptionList = local_10;
      return param_2;
    }
    goto LAB_004a349c;
  }
  ppVar8 = param_3 + 0x10;
  if (0xf < *(uint *)(param_3 + 0x24)) {
    ppVar8 = *(pair<> **)(param_3 + 0x10);
  }
  p_Var11 = param_4;
  if (0xf < *(uint *)(param_4 + 0x14)) {
    p_Var11 = *(_Tree_node<> **)param_4;
  }
  uVar6 = *(uint *)(param_3 + 0x20);
  uVar4 = *(uint *)(param_4 + 0x10);
  if (uVar6 < *(uint *)(param_4 + 0x10)) {
    uVar4 = uVar6;
  }
  while (uVar5 = uVar4 - 4, 3 < uVar4) {
    if (*(int *)p_Var11 != *(int *)ppVar8) goto LAB_004a2f86;
    p_Var11 = p_Var11 + 4;
    ppVar8 = ppVar8 + 4;
    uVar4 = uVar5;
  }
  if (uVar5 == 0xfffffffc) {
LAB_004a2fba:
    uVar4 = 0;
  }
  else {
LAB_004a2f86:
    bVar13 = (byte)*p_Var11 < (byte)*(_Tree_node<> *)ppVar8;
    if ((*p_Var11 == *(_Tree_node<> *)ppVar8) &&
       ((uVar5 == 0xfffffffd ||
        ((bVar13 = (byte)p_Var11[1] < (byte)*(_Tree_node<> *)(ppVar8 + 1),
         p_Var11[1] == *(_Tree_node<> *)(ppVar8 + 1) &&
         ((uVar5 == 0xfffffffe ||
          ((bVar13 = (byte)p_Var11[2] < (byte)*(_Tree_node<> *)(ppVar8 + 2),
           p_Var11[2] == *(_Tree_node<> *)(ppVar8 + 2) &&
           ((uVar5 == 0xffffffff ||
            (bVar13 = (byte)p_Var11[3] < (byte)*(_Tree_node<> *)(ppVar8 + 3),
            p_Var11[3] == *(_Tree_node<> *)(ppVar8 + 3))))))))))))) goto LAB_004a2fba;
    uVar4 = -(uint)bVar13 | 1;
  }
  if (uVar4 == 0) {
    if (*(uint *)(param_4 + 0x10) < uVar6) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = (uint)(uVar6 < *(uint *)(param_4 + 0x10));
    }
  }
  if ((int)uVar4 < 0) {
    local_14 = (undefined1 *)&uStack_40;
    _Insert_at<>(this,bVar14,(_Tree_node<> *)&DAT_00000001,param_3,(_Tree_node<> *)ppVar8);
    ExceptionList = local_10;
    return param_2;
  }
LAB_004a349c:
  local_8 = 0xffffffff;
  local_14 = (undefined1 *)&uStack_40;
  puVar7 = (undefined4 *)_Insert_nohint<>(this,SUB41(local_30,0),ppVar8,param_4);
  *param_2 = *puVar7;
  ExceptionList = local_10;
  return param_2;
}


// protected: class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
// std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,float> > > > __thiscall std::_Tree<class std::_Tmap_traits<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,float,struct
// std::less<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// >,class std::allocator<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,float> >,0> >::_Insert_at<struct
// std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,float> &,struct std::_Tree_node<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,float>,void *> *>(bool,struct
// std::_Tree_node<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,float>,void *> *,struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,float>
// &,struct std::_Tree_node<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,float>,void *> *)

void __thiscall
std::_Tree<>::_Insert_at<>
          (_Tree<> *this,bool param_1,_Tree_node<> *param_2,pair<> *param_3,_Tree_node<> *param_4)

{
  char cVar1;
  _Tree_node<> *p_Var2;
  _Tree_val<> *extraout_ECX;
  _Tree_val<> *extraout_ECX_00;
  _Tree_val<> *extraout_ECX_01;
  _Tree_val<> *extraout_ECX_02;
  _Tree_node<> *p_Var3;
  _Tree_node<> *p_Var4;
  undefined3 in_stack_00000005;
  _Tree_node<> *in_stack_00000014;
  
  if (0x5d1745b < *(uint *)(this + 4)) {
    _Tree<>::_Destroy_if_node((_Tree<> *)this,in_stack_00000014);
                    // WARNING: Subroutine does not return
    std::_Xlength_error("map/set<T> too long");
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) + 1;
  *(pair<> **)(in_stack_00000014 + 4) = param_3;
  if (param_3 == *(pair<> **)this) {
    *(_Tree_node<> **)(*(pair<> **)this + 4) = in_stack_00000014;
    **(undefined4 **)this = in_stack_00000014;
    *(_Tree_node<> **)(*(int *)this + 8) = in_stack_00000014;
  }
  else if ((char)param_2 == '\0') {
    *(_Tree_node<> **)(param_3 + 8) = in_stack_00000014;
    if (param_3 == *(pair<> **)(*(int *)this + 8)) {
      *(_Tree_node<> **)(*(int *)this + 8) = in_stack_00000014;
    }
  }
  else {
    *(_Tree_node<> **)param_3 = in_stack_00000014;
    if (param_3 == (pair<> *)**(int **)this) {
      **(int **)this = (int)in_stack_00000014;
    }
  }
  cVar1 = *(char *)(*(int *)(in_stack_00000014 + 4) + 0xc);
  p_Var4 = (_Tree_node<> *)in_stack_00000014;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)this + 4) + 0xc) = 1;
      *_param_1 = in_stack_00000014;
      return;
    }
    p_Var2 = *(_Tree_node<> **)(p_Var4 + 4);
    p_Var3 = (_Tree_node<> *)**(undefined4 **)(p_Var2 + 4);
    if (p_Var2 == p_Var3) {
      p_Var3 = (_Tree_node<> *)(*(undefined4 **)(p_Var2 + 4))[2];
      if (p_Var3[0xc] == (_Tree_node<>)0x0) {
LAB_004a3628:
        p_Var2[0xc] = (_Tree_node<>)0x1;
        p_Var3[0xc] = (_Tree_node<>)0x1;
        *(undefined1 *)(*(int *)(*(int *)(p_Var4 + 4) + 4) + 0xc) = 0;
        p_Var4 = *(_Tree_node<> **)(*(int *)(p_Var4 + 4) + 4);
      }
      else {
        if (p_Var4 == *(_Tree_node<> **)(p_Var2 + 8)) {
          _Tree_val<>::_Lrotate((_Tree_val<> *)this,p_Var2);
          this = (_Tree<> *)extraout_ECX;
          p_Var4 = p_Var2;
        }
        *(undefined1 *)(*(int *)(p_Var4 + 4) + 0xc) = 1;
        *(undefined1 *)(*(int *)(*(int *)(p_Var4 + 4) + 4) + 0xc) = 0;
        _Tree_val<>::_Rrotate((_Tree_val<> *)this,*(_Tree_node<> **)(*(int *)(p_Var4 + 4) + 4));
        this = (_Tree<> *)extraout_ECX_00;
      }
    }
    else {
      if (p_Var3[0xc] == (_Tree_node<>)0x0) goto LAB_004a3628;
      if (p_Var4 == *(_Tree_node<> **)p_Var2) {
        _Tree_val<>::_Rrotate((_Tree_val<> *)this,p_Var2);
        this = (_Tree<> *)extraout_ECX_01;
        p_Var4 = p_Var2;
      }
      *(undefined1 *)(*(int *)(p_Var4 + 4) + 0xc) = 1;
      *(undefined1 *)(*(int *)(*(int *)(p_Var4 + 4) + 4) + 0xc) = 0;
      _Tree_val<>::_Lrotate((_Tree_val<> *)this,*(_Tree_node<> **)(*(int *)(p_Var4 + 4) + 4));
      this = (_Tree<> *)extraout_ECX_02;
    }
    cVar1 = *(char *)(*(int *)(p_Var4 + 4) + 0xc);
  } while( true );
}


// protected: struct std::pair<class std::_Tree_iterator<class std::_Tree_val<struct
// std::_Tree_simple_types<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,float> > > >,bool> __thiscall
// std::_Tree<class std::_Tmap_traits<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,float,struct std::less<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class
// std::allocator<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > const ,float> >,0> >::_Insert_nohint<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,float>
// &,struct std::_Tree_node<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,float>,void *> *>(bool,struct
// std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,float> &,struct std::_Tree_node<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,float>,void *> *)

void __thiscall
std::_Tree<>::_Insert_nohint<>(_Tree<> *this,bool param_1,pair<> *param_2,_Tree_node<> *param_3)

{
  pair<> pVar1;
  pair<> *ppVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  pair<> *ppVar10;
  pair<> *ppVar11;
  _Tree<> *this_00;
  pair<> *ppVar12;
  _Tree<> *p_Var13;
  bool bVar14;
  undefined3 in_stack_00000005;
  _Tree_node<> *in_stack_00000010;
  _Tree_node<> *local_20;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bd2d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  bVar6 = 1;
  ppVar2 = *(pair<> **)this;
  local_20 = (_Tree_node<> *)CONCAT31(local_20._1_3_,1);
  ppVar11 = ppVar2;
  if ((*(pair<> **)(ppVar2 + 4))[0xd] == (pair<>)0x0) {
    uVar3 = *(uint *)(param_3 + 0x10);
    ppVar12 = *(pair<> **)(ppVar2 + 4);
    do {
      ppVar11 = ppVar12;
      ppVar12 = ppVar11 + 0x10;
      if (0xf < *(uint *)(ppVar11 + 0x24)) {
        ppVar12 = *(pair<> **)(ppVar11 + 0x10);
      }
      ppVar10 = (pair<> *)param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        ppVar10 = *(pair<> **)param_3;
      }
      uVar9 = *(uint *)(ppVar11 + 0x20);
      uVar7 = uVar3;
      if (uVar9 < uVar3) {
        uVar7 = uVar9;
      }
      while (uVar5 = uVar7 - 4, 3 < uVar7) {
        if (*(int *)ppVar10 != *(int *)ppVar12) goto LAB_004a372d;
        ppVar10 = ppVar10 + 4;
        ppVar12 = ppVar12 + 4;
        uVar7 = uVar5;
      }
      if (uVar5 == 0xfffffffc) {
LAB_004a3761:
        uVar7 = 0;
      }
      else {
LAB_004a372d:
        bVar14 = (byte)*ppVar10 < (byte)*ppVar12;
        if ((*ppVar10 == *ppVar12) &&
           ((uVar5 == 0xfffffffd ||
            ((bVar14 = (byte)ppVar10[1] < (byte)ppVar12[1], ppVar10[1] == ppVar12[1] &&
             ((uVar5 == 0xfffffffe ||
              ((bVar14 = (byte)ppVar10[2] < (byte)ppVar12[2], ppVar10[2] == ppVar12[2] &&
               ((uVar5 == 0xffffffff ||
                (bVar14 = (byte)ppVar10[3] < (byte)ppVar12[3], ppVar10[3] == ppVar12[3]))))))))))))
        goto LAB_004a3761;
        uVar7 = -(uint)bVar14 | 1;
      }
      if (uVar7 == 0) {
        if (uVar3 < uVar9) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)(uVar9 < uVar3);
        }
      }
      bVar4 = (byte)(uVar7 >> 0x18);
      bVar6 = bVar4 >> 7;
      local_20 = (_Tree_node<> *)CONCAT31(local_20._1_3_,bVar4 >> 7);
      if ((int)uVar7 < 0) {
        ppVar12 = *(pair<> **)ppVar11;
      }
      else {
        ppVar12 = *(pair<> **)(ppVar11 + 8);
      }
    } while (ppVar12[0xd] == (pair<>)0x0);
  }
  ppVar12 = ppVar11;
  if (bVar6 != 0) {
    if (ppVar11 == *(pair<> **)ppVar2) {
      local_20 = (_Tree_node<> *)&DAT_00000001;
      this_00 = (_Tree<> *)ppVar11;
      goto LAB_004a37b5;
    }
    if (ppVar11[0xd] == (pair<>)0x0) {
      ppVar12 = *(pair<> **)ppVar11;
      if (ppVar12[0xd] == (pair<>)0x0) {
        pVar1 = (*(pair<> **)(ppVar12 + 8))[0xd];
        ppVar2 = *(pair<> **)(ppVar12 + 8);
        while (pVar1 == (pair<>)0x0) {
          pVar1 = (*(pair<> **)(ppVar2 + 8))[0xd];
          ppVar12 = ppVar2;
          ppVar2 = *(pair<> **)(ppVar2 + 8);
        }
      }
      else {
        pVar1 = (*(pair<> **)(ppVar11 + 4))[0xd];
        ppVar2 = *(pair<> **)(ppVar11 + 4);
        ppVar12 = ppVar11;
        while ((ppVar10 = ppVar2, pVar1 == (pair<>)0x0 && (ppVar12 == *(pair<> **)ppVar10))) {
          pVar1 = (*(pair<> **)(ppVar10 + 4))[0xd];
          ppVar2 = *(pair<> **)(ppVar10 + 4);
          ppVar12 = ppVar10;
        }
        if (ppVar12[0xd] == (pair<>)0x0) {
          ppVar12 = ppVar10;
        }
      }
    }
    else {
      ppVar12 = *(pair<> **)(ppVar11 + 8);
    }
  }
  p_Var13 = (_Tree<> *)param_3;
  if (0xf < *(uint *)(param_3 + 0x14)) {
    p_Var13 = *(_Tree<> **)param_3;
  }
  this_00 = (_Tree<> *)(ppVar12 + 0x10);
  if (0xf < *(uint *)(ppVar12 + 0x24)) {
    this_00 = *(_Tree<> **)(ppVar12 + 0x10);
  }
  uVar3 = *(uint *)(param_3 + 0x10);
  uVar9 = *(uint *)(ppVar12 + 0x20);
  if (uVar3 < *(uint *)(ppVar12 + 0x20)) {
    uVar9 = uVar3;
  }
  while (uVar7 = uVar9 - 4, 3 < uVar9) {
    if (*(int *)this_00 != *(int *)p_Var13) goto LAB_004a387a;
    this_00 = this_00 + 4;
    p_Var13 = p_Var13 + 4;
    uVar9 = uVar7;
  }
  if (uVar7 == 0xfffffffc) {
LAB_004a38ae:
    uVar9 = 0;
  }
  else {
LAB_004a387a:
    bVar14 = (byte)*this_00 < (byte)*p_Var13;
    if ((*this_00 == *p_Var13) &&
       ((uVar7 == 0xfffffffd ||
        ((bVar14 = (byte)this_00[1] < (byte)p_Var13[1], this_00[1] == p_Var13[1] &&
         ((uVar7 == 0xfffffffe ||
          ((bVar14 = (byte)this_00[2] < (byte)p_Var13[2], this_00[2] == p_Var13[2] &&
           ((uVar7 == 0xffffffff ||
            (bVar14 = (byte)this_00[3] < (byte)p_Var13[3], this_00[3] == p_Var13[3]))))))))))))
    goto LAB_004a38ae;
    uVar9 = -(uint)bVar14 | 1;
  }
  if (uVar9 == 0) {
    if (*(uint *)(ppVar12 + 0x20) < uVar3) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar9 = (uint)(uVar3 < *(uint *)(ppVar12 + 0x20));
    }
  }
  if (-1 < (int)uVar9) {
    _Tree<>::_Destroy_if_node(this_00,in_stack_00000010);
    *_param_1 = ppVar12;
    *(undefined1 *)(_param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
LAB_004a37b5:
  puVar8 = (undefined4 *)
           _Insert_at<>(this,SUB41(&param_3,0),local_20,ppVar11,(_Tree_node<> *)this_00);
  *_param_1 = *puVar8;
  *(undefined1 *)(_param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


// public: unsigned int __thiscall std::_Tree<class std::_Tmap_traits<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,float,struct
// std::less<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// >,class std::allocator<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,float> >,0> >::count(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)const 

uint __thiscall std::_Tree<>::count(_Tree<> *this,basic_string<> *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int *local_c;
  int *local_8;
  
  _Tree<>::_Eqrange<>((_Tree<> *)this,(basic_string<> *)&local_c);
  uVar4 = 0;
  while (local_c != local_8) {
    piVar2 = (int *)local_c[2];
    uVar4 = uVar4 + 1;
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      cVar1 = *(char *)(*piVar2 + 0xd);
      local_c = piVar2;
      piVar2 = (int *)*piVar2;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar2 + 0xd);
        local_c = piVar2;
        piVar2 = (int *)*piVar2;
      }
    }
    else {
      cVar1 = *(char *)(local_c[1] + 0xd);
      piVar3 = (int *)local_c[1];
      piVar2 = local_c;
      while ((local_c = piVar3, cVar1 == '\0' && (piVar2 == (int *)local_c[2]))) {
        cVar1 = *(char *)(local_c[1] + 0xd);
        piVar3 = (int *)local_c[1];
        piVar2 = local_c;
      }
    }
  }
  return uVar4;
}


// protected: void __thiscall std::_Tree<class std::_Tmap_traits<int,class FogInstance *,struct
// std::less<int>,class std::allocator<struct std::pair<int const ,class FogInstance *> >,0>
// >::_Erase(struct std::_Tree_node<struct std::pair<int const ,class FogInstance *>,void *> *)

void __thiscall std::_Tree<>::_Erase(_Tree<> *this,_Tree_node<> *param_1)

{
  _Tree_node<> _Var1;
  _Tree_node<> *p_Var2;
  
  _Var1 = param_1[0xd];
  while (_Var1 == (_Tree_node<>)0x0) {
    _Erase(this,*(_Tree_node<> **)(param_1 + 8));
    p_Var2 = *(_Tree_node<> **)param_1;
    operator_delete(param_1,(nothrow_t *)0x18);
    param_1 = p_Var2;
    _Var1 = p_Var2[0xd];
  }
  return;
}


// public: class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
// std::pair<int const ,class FogInstance *> > > > __thiscall std::_Tree<class
// std::_Tmap_traits<int,class FogInstance *,struct std::less<int>,class std::allocator<struct
// std::pair<int const ,class FogInstance *> >,0> >::erase(class std::_Tree_const_iterator<class
// std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<int const ,class FogInstance *> >
// > >,class std::_Tree_const_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
// std::pair<int const ,class FogInstance *> > > >)

void __thiscall std::_Tree<>::erase(_Tree<> *this,undefined4 *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  _Tree_node<> *p_Var2;
  int *piVar3;
  int *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b18f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = *(int **)this;
  local_14 = piVar1;
  if ((param_3 == (int *)*piVar1) && (param_4 == piVar1)) {
    local_8 = 0;
    piVar3 = (int *)piVar1[1];
    if (*(char *)(piVar1[1] + 0xd) == '\0') {
      do {
        _Erase(this,(_Tree_node<> *)piVar3[2]);
        piVar1 = (int *)*piVar3;
        operator_delete(piVar3,(nothrow_t *)0x18);
        piVar3 = piVar1;
      } while (*(char *)((int)piVar1 + 0xd) == '\0');
      piVar1 = *(int **)this;
    }
    piVar1[1] = (int)local_14;
    **(int **)this = (int)local_14;
    *(int **)(*(int *)this + 8) = local_14;
    *(undefined4 *)(this + 4) = 0;
    *param_2 = **(undefined4 **)this;
    ExceptionList = local_10;
    return;
  }
  if (param_3 != param_4) {
    do {
      piVar1 = param_3;
      _Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&param_3);
      local_14 = piVar1;
      _Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_14);
      p_Var2 = _Tree_val<>::_Extract((_Tree_val<> *)this,piVar1);
      operator_delete(p_Var2,(nothrow_t *)0x18);
    } while (param_3 != param_4);
  }
  *param_2 = param_3;
  ExceptionList = local_10;
  return;
}


// protected: struct std::pair<class std::_Tree_const_iterator<class std::_Tree_val<struct
// std::_Tree_simple_types<struct std::pair<int const ,class FogInstance *> > > >,class
// std::_Tree_const_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
// std::pair<int const ,class FogInstance *> > > > > __thiscall std::_Tree<class
// std::_Tmap_traits<int,class FogInstance *,struct std::less<int>,class std::allocator<struct
// std::pair<int const ,class FogInstance *> >,0> >::_Eqrange<int>(int const &)const 

void __thiscall std::_Tree<>::_Eqrange<int>(_Tree<> *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *in_stack_00000008;
  
  puVar4 = *(undefined4 **)this;
  puVar1 = (undefined4 *)puVar4[1];
  puVar5 = puVar4;
  if (*(char *)((int)puVar1 + 0xd) == '\0') {
    puVar2 = puVar1;
    do {
      if ((int)puVar2[4] < *in_stack_00000008) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        if ((*(char *)((int)puVar4 + 0xd) != '\0') && (*in_stack_00000008 < (int)puVar2[4])) {
          puVar4 = puVar2;
        }
        puVar3 = (undefined4 *)*puVar2;
        puVar5 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  if (*(char *)((int)puVar4 + 0xd) == '\0') {
    puVar1 = (undefined4 *)*puVar4;
  }
  if (*(char *)((int)puVar1 + 0xd) == '\0') {
    do {
      if (*in_stack_00000008 < (int)puVar1[4]) {
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      else {
        puVar2 = (undefined4 *)puVar1[2];
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  *param_1 = (int)puVar5;
  param_1[1] = (int)puVar4;
  return;
}


// protected: class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
// std::pair<enum cocos2d::EventKeyboard::KeyCode const ,char> > > > __thiscall std::_Tree<class
// std::_Tmap_traits<enum cocos2d::EventKeyboard::KeyCode,char,struct std::less<enum
// cocos2d::EventKeyboard::KeyCode>,class std::allocator<struct std::pair<enum
// cocos2d::EventKeyboard::KeyCode const ,char> >,0> >::_Insert_hint<struct std::pair<enum
// cocos2d::EventKeyboard::KeyCode const ,char> &,struct std::_Tree_node<struct std::pair<enum
// cocos2d::EventKeyboard::KeyCode const ,char>,void *> *>(class std::_Tree_const_iterator<class
// std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<enum
// cocos2d::EventKeyboard::KeyCode const ,char> > > >,struct std::pair<enum
// cocos2d::EventKeyboard::KeyCode const ,char> &,struct std::_Tree_node<struct std::pair<enum
// cocos2d::EventKeyboard::KeyCode const ,char>,void *> *)

undefined4 * __thiscall
std::_Tree<>::_Insert_hint<>
          (_Tree<> *this,undefined4 *param_2,pair<> *param_3,_Tree_node<> *param_4)

{
  pair<> pVar1;
  pair<> *ppVar2;
  pair<> *ppVar3;
  pair<> *ppVar4;
  pair<> *ppVar5;
  undefined4 *puVar6;
  bool bVar7;
  uint uStack_30;
  undefined1 local_20 [4];
  int local_1c;
  pair<> local_15;
  undefined1 *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c68d0;
  local_10 = ExceptionList;
  uStack_30 = ___security_cookie ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  bVar7 = SUB41(param_2,0);
  if (*(int *)(this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_30;
    _Tree<>::_Insert_at<>
              ((_Tree<> *)this,bVar7,(_Tree_node<> *)&DAT_00000001,*(pair<> **)this,
               (_Tree_node<> *)this);
    ExceptionList = local_10;
    return param_2;
  }
  ppVar2 = *(pair<> **)this;
  if (param_3 == *(pair<> **)ppVar2) {
    if (*(int *)param_4 < *(int *)(param_3 + 0x10)) {
      local_14 = (undefined1 *)&uStack_30;
      _Tree<>::_Insert_at<>
                ((_Tree<> *)this,bVar7,(_Tree_node<> *)&DAT_00000001,param_3,(_Tree_node<> *)param_3
                );
      ExceptionList = local_10;
      return param_2;
    }
  }
  else if (param_3 == ppVar2) {
    param_3 = *(pair<> **)(ppVar2 + 8);
    if (*(int *)(param_3 + 0x10) < *(int *)param_4) {
      local_14 = (undefined1 *)&uStack_30;
      _Tree<>::_Insert_at<>
                ((_Tree<> *)this,bVar7,(_Tree_node<> *)0x0,param_3,(_Tree_node<> *)param_3);
      ExceptionList = local_10;
      return param_2;
    }
  }
  else {
    local_1c = *(int *)param_4;
    if (local_1c < *(int *)(param_3 + 0x10)) {
      if (param_3[0xd] == (pair<>)0x0) {
        ppVar5 = *(pair<> **)param_3;
        if (ppVar5[0xd] == (pair<>)0x0) {
          pVar1 = (*(pair<> **)(ppVar5 + 8))[0xd];
          ppVar3 = *(pair<> **)(ppVar5 + 8);
          while (pVar1 == (pair<>)0x0) {
            pVar1 = (*(pair<> **)(ppVar3 + 8))[0xd];
            ppVar5 = ppVar3;
            ppVar3 = *(pair<> **)(ppVar3 + 8);
          }
        }
        else {
          pVar1 = (*(pair<> **)(param_3 + 4))[0xd];
          ppVar4 = *(pair<> **)(param_3 + 4);
          ppVar3 = param_3;
          while ((ppVar5 = ppVar4, pVar1 == (pair<>)0x0 && (ppVar3 == *(pair<> **)ppVar5))) {
            pVar1 = (*(pair<> **)(ppVar5 + 4))[0xd];
            ppVar4 = *(pair<> **)(ppVar5 + 4);
            ppVar3 = ppVar5;
          }
          if (ppVar3[0xd] != (pair<>)0x0) {
            ppVar5 = ppVar3;
          }
        }
      }
      else {
        ppVar5 = *(pair<> **)(param_3 + 8);
      }
      if (*(int *)(ppVar5 + 0x10) < local_1c) {
        if (*(char *)(*(int *)(ppVar5 + 8) + 0xd) == '\0') {
          local_14 = (undefined1 *)&uStack_30;
          _Tree<>::_Insert_at<>
                    ((_Tree<> *)this,bVar7,(_Tree_node<> *)&DAT_00000001,param_3,
                     (_Tree_node<> *)param_3);
          ExceptionList = local_10;
          return param_2;
        }
        local_14 = (undefined1 *)&uStack_30;
        _Tree<>::_Insert_at<>
                  ((_Tree<> *)this,bVar7,(_Tree_node<> *)0x0,ppVar5,(_Tree_node<> *)param_3);
        ExceptionList = local_10;
        return param_2;
      }
    }
    if (*(int *)(param_3 + 0x10) < local_1c) {
      ppVar5 = *(pair<> **)(param_3 + 8);
      local_15 = ppVar5[0xd];
      if (local_15 == (pair<>)0x0) {
        pVar1 = (*(pair<> **)ppVar5)[0xd];
        ppVar3 = *(pair<> **)ppVar5;
        while (pVar1 == (pair<>)0x0) {
          pVar1 = (*(pair<> **)ppVar3)[0xd];
          ppVar5 = ppVar3;
          ppVar3 = *(pair<> **)ppVar3;
        }
      }
      else {
        pVar1 = (*(pair<> **)(param_3 + 4))[0xd];
        ppVar4 = *(pair<> **)(param_3 + 4);
        ppVar3 = param_3;
        while ((ppVar5 = ppVar4, pVar1 == (pair<>)0x0 && (ppVar3 == *(pair<> **)(ppVar5 + 8)))) {
          pVar1 = (*(pair<> **)(ppVar5 + 4))[0xd];
          ppVar4 = *(pair<> **)(ppVar5 + 4);
          ppVar3 = ppVar5;
        }
      }
      if ((ppVar5 == ppVar2) || (local_1c < *(int *)(ppVar5 + 0x10))) {
        if (local_15 == (pair<>)0x0) {
          _Tree<>::_Insert_at<>
                    ((_Tree<> *)this,bVar7,(_Tree_node<> *)&DAT_00000001,ppVar5,
                     (_Tree_node<> *)param_3);
          ExceptionList = local_10;
          return param_2;
        }
        local_14 = (undefined1 *)&uStack_30;
        _Tree<>::_Insert_at<>
                  ((_Tree<> *)this,bVar7,(_Tree_node<> *)0x0,param_3,(_Tree_node<> *)param_3);
        ExceptionList = local_10;
        return param_2;
      }
    }
  }
  local_8 = 0xffffffff;
  local_14 = (undefined1 *)&uStack_30;
  puVar6 = (undefined4 *)
           _Tree<>::_Insert_nohint<>((_Tree<> *)this,SUB41(local_20,0),param_3,param_4);
  *param_2 = *puVar6;
  ExceptionList = local_10;
  return param_2;
}


// public: void __thiscall std::_Tree<class std::_Tset_traits<class PathNode *,struct
// PathContext::NodeTotalWeightCompare,class std::allocator<class PathNode *>,1> >::clear(void)

void __thiscall std::_Tree<>::clear(_Tree<> *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  void *local_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_005caa20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *(int *)this;
  piVar4 = *(int **)(iVar1 + 4);
  iVar3 = iVar1;
  if (*(char *)((int)piVar4 + 0xd) == '\0') {
    do {
      _Erase(this,(_Tree_node<> *)piVar4[2]);
      piVar2 = (int *)*piVar4;
      operator_delete(piVar4,(nothrow_t *)0x14);
      piVar4 = piVar2;
    } while (*(char *)((int)piVar2 + 0xd) == '\0');
    iVar3 = *(int *)this;
  }
  *(int *)(iVar3 + 4) = iVar1;
  **(int **)this = iVar1;
  *(int *)(*(int *)this + 8) = iVar1;
  *(undefined4 *)(this + 4) = 0;
  ExceptionList = local_10;
  return;
}


// protected: void __thiscall std::_Tree<class std::_Tset_traits<class PathNode *,struct
// PathContext::NodeTotalWeightCompare,class std::allocator<class PathNode *>,1> >::_Erase(struct
// std::_Tree_node<class PathNode *,void *> *)

void __thiscall std::_Tree<>::_Erase(_Tree<> *this,_Tree_node<> *param_1)

{
  _Tree_node<> _Var1;
  _Tree_node<> *p_Var2;
  
  _Var1 = param_1[0xd];
  while (_Var1 == (_Tree_node<>)0x0) {
    _Erase(this,*(_Tree_node<> **)(param_1 + 8));
    p_Var2 = *(_Tree_node<> **)param_1;
    operator_delete(param_1,(nothrow_t *)0x14);
    param_1 = p_Var2;
    _Var1 = p_Var2[0xd];
  }
  return;
}


// public: class std::_Tree_const_iterator<class std::_Tree_val<struct std::_Tree_simple_types<class
// PathNode *> > > __thiscall std::_Tree<class std::_Tset_traits<class PathNode *,struct
// PathContext::NodeTotalWeightCompare,class std::allocator<class PathNode *>,1> >::erase(class
// std::_Tree_const_iterator<class std::_Tree_val<struct std::_Tree_simple_types<class PathNode *> >
// >,class std::_Tree_const_iterator<class std::_Tree_val<struct std::_Tree_simple_types<class
// PathNode *> > >)

undefined4 * __thiscall
std::_Tree<>::erase(_Tree<> *this,undefined4 *param_2,int *param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  _Tree_node<> *p_Var6;
  
  piVar3 = param_3;
  if ((param_3 == (int *)**(int **)this) && (param_4 == *(int **)this)) {
    clear(this);
    *param_2 = **(undefined4 **)this;
    return param_2;
  }
  while (piVar3 != param_4) {
    param_3 = (int *)piVar3[2];
    if (*(char *)((int)param_3 + 0xd) == '\0') {
      cVar1 = *(char *)(*param_3 + 0xd);
      piVar2 = (int *)*param_3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar2 + 0xd);
        param_3 = piVar2;
        piVar2 = (int *)*piVar2;
      }
    }
    else {
      cVar1 = *(char *)(piVar3[1] + 0xd);
      piVar5 = (int *)piVar3[1];
      piVar2 = piVar3;
      while ((param_3 = piVar5, cVar1 == '\0' && (piVar2 == (int *)param_3[2]))) {
        cVar1 = *(char *)(param_3[1] + 0xd);
        piVar5 = (int *)param_3[1];
        piVar2 = param_3;
      }
    }
    if (*(char *)(piVar3[2] + 0xd) == '\0') {
      piVar2 = *(int **)piVar3[2];
      cVar1 = *(char *)((int)piVar2 + 0xd);
      while (cVar1 == '\0') {
        piVar2 = (int *)*piVar2;
        cVar1 = *(char *)((int)piVar2 + 0xd);
      }
    }
    else {
      cVar1 = *(char *)(piVar3[1] + 0xd);
      piVar5 = (int *)piVar3[1];
      piVar2 = piVar3;
      while ((piVar4 = piVar5, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
        cVar1 = *(char *)(piVar4[1] + 0xd);
        piVar5 = (int *)piVar4[1];
        piVar2 = piVar4;
      }
    }
    p_Var6 = _Tree_val<>::_Extract((_Tree_val<> *)this,piVar3);
    operator_delete(p_Var6,(nothrow_t *)0x14);
    piVar3 = param_3;
  }
  *param_2 = piVar3;
  return param_2;
}


// protected: class std::_Tree_const_iterator<class std::_Tree_val<struct
// std::_Tree_simple_types<class PathNode *> > > __thiscall std::_Tree<class std::_Tset_traits<class
// PathNode *,struct PathContext::NodeTotalWeightCompare,class std::allocator<class PathNode *>,1>
// >::_Insert_hint<class PathNode * const &,struct std::_Not_a_node_tag>(class
// std::_Tree_const_iterator<class std::_Tree_val<struct std::_Tree_simple_types<class PathNode *> >
// >,class PathNode * const &,struct std::_Not_a_node_tag)

undefined4 * __thiscall
std::_Tree<>::_Insert_hint<>
          (_Tree<> *this,undefined4 *param_2,int *param_3,int *param_4,undefined4 param_5)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uStack_30;
  undefined1 local_20 [4];
  uint local_1c;
  char local_15;
  undefined1 *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005ccd20;
  local_10 = ExceptionList;
  uStack_30 = ___security_cookie ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar5 = local_1c >> 8;
  local_1c = local_1c & 0xffffff00;
  if (*(int *)(this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_30;
    _Insert_at<>(this,param_2,1,*(undefined4 *)this,param_4,param_5);
    ExceptionList = local_10;
    return param_2;
  }
  piVar3 = *(int **)this;
  if (param_3 == (int *)*piVar3) {
    if (*(float *)(*param_4 + 0x10) < *(float *)(param_3[4] + 0x10) ||
        *(float *)(*param_4 + 0x10) == *(float *)(param_3[4] + 0x10)) {
      local_14 = (undefined1 *)&uStack_30;
      _Insert_at<>(this,param_2,1,param_3,param_4,param_5);
      ExceptionList = local_10;
      return param_2;
    }
  }
  else {
    if (param_3 == piVar3) {
      fVar1 = *(float *)(*(int *)(piVar3[2] + 0x10) + 0x10);
      if (fVar1 < *(float *)(*param_4 + 0x10) || fVar1 == *(float *)(*param_4 + 0x10)) {
        local_14 = (undefined1 *)&uStack_30;
        _Insert_at<>(this,param_2,0,piVar3[2],param_4,param_5);
        ExceptionList = local_10;
        return param_2;
      }
      goto LAB_005929af;
    }
    fVar1 = *(float *)(*param_4 + 0x10);
    if (fVar1 <= *(float *)(param_3[4] + 0x10)) {
      if (*(char *)((int)param_3 + 0xd) == '\0') {
        piVar7 = (int *)*param_3;
        if (*(char *)((int)piVar7 + 0xd) == '\0') {
          cVar2 = *(char *)(piVar7[2] + 0xd);
          piVar4 = (int *)piVar7[2];
          while (cVar2 == '\0') {
            cVar2 = *(char *)(piVar4[2] + 0xd);
            piVar7 = piVar4;
            piVar4 = (int *)piVar4[2];
          }
        }
        else {
          cVar2 = *(char *)(param_3[1] + 0xd);
          piVar6 = (int *)param_3[1];
          piVar4 = param_3;
          while ((piVar7 = piVar6, cVar2 == '\0' && (piVar4 == (int *)*piVar7))) {
            cVar2 = *(char *)(piVar7[1] + 0xd);
            piVar6 = (int *)piVar7[1];
            piVar4 = piVar7;
          }
          if (*(char *)((int)piVar4 + 0xd) != '\0') {
            piVar7 = piVar4;
          }
        }
      }
      else {
        piVar7 = (int *)param_3[2];
      }
      if (*(float *)(piVar7[4] + 0x10) <= fVar1) {
        if (*(char *)(piVar7[2] + 0xd) == '\0') {
          local_14 = (undefined1 *)&uStack_30;
          _Insert_at<>(this,param_2,1,param_3,param_4,param_5);
          ExceptionList = local_10;
          return param_2;
        }
        local_14 = (undefined1 *)&uStack_30;
        _Insert_at<>(this,param_2,0,piVar7,param_4,param_5);
        ExceptionList = local_10;
        return param_2;
      }
    }
    if (*(float *)(param_3[4] + 0x10) <= fVar1) {
      piVar7 = (int *)param_3[2];
      local_15 = *(char *)((int)piVar7 + 0xd);
      if (local_15 == '\0') {
        cVar2 = *(char *)(*piVar7 + 0xd);
        piVar4 = (int *)*piVar7;
        while (cVar2 == '\0') {
          cVar2 = *(char *)(*piVar4 + 0xd);
          piVar7 = piVar4;
          piVar4 = (int *)*piVar4;
        }
      }
      else {
        cVar2 = *(char *)(param_3[1] + 0xd);
        piVar6 = (int *)param_3[1];
        piVar4 = param_3;
        while ((piVar7 = piVar6, cVar2 == '\0' && (piVar4 == (int *)piVar7[2]))) {
          cVar2 = *(char *)(piVar7[1] + 0xd);
          piVar6 = (int *)piVar7[1];
          piVar4 = piVar7;
        }
      }
      if ((piVar7 == piVar3) ||
         (fVar1 < *(float *)(piVar7[4] + 0x10) || fVar1 == *(float *)(piVar7[4] + 0x10))) {
        if (local_15 == '\0') {
          _Insert_at<>(this,param_2,1,piVar7,param_4,param_5);
          ExceptionList = local_10;
          return param_2;
        }
        local_14 = (undefined1 *)&uStack_30;
        _Insert_at<>(this,param_2,0,param_3,param_4,param_5);
        ExceptionList = local_10;
        return param_2;
      }
    }
  }
  local_1c = CONCAT31((int3)uVar5,1);
LAB_005929af:
  local_8 = 0xffffffff;
  local_14 = (undefined1 *)&uStack_30;
  puVar8 = (undefined4 *)_Insert_nohint<>(this,local_20,local_1c,param_4,param_5);
  *param_2 = *puVar8;
  ExceptionList = local_10;
  return param_2;
}


// protected: struct std::pair<class std::_Tree_const_iterator<class std::_Tree_val<struct
// std::_Tree_simple_types<class PathNode *> > >,bool> __thiscall std::_Tree<class
// std::_Tset_traits<class PathNode *,struct PathContext::NodeTotalWeightCompare,class
// std::allocator<class PathNode *>,1> >::_Insert_nohint<class PathNode * const &,struct
// std::_Not_a_node_tag>(bool,class PathNode * const &,struct std::_Not_a_node_tag)

void __thiscall
std::_Tree<>::_Insert_nohint<>
          (_Tree<> *this,undefined4 *param_1,char param_2,int *param_4,undefined4 param_5)

{
  float *pfVar1;
  float fVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005ccd40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar4 = *(undefined4 **)this;
  bVar3 = true;
  if (*(char *)((int)puVar4[1] + 0xd) == '\0') {
    fVar2 = *(float *)(*param_4 + 0x10);
    puVar5 = (undefined4 *)puVar4[1];
    do {
      puVar4 = puVar5;
      if (param_2 == '\0') {
        bVar3 = fVar2 < *(float *)(puVar4[4] + 0x10);
      }
      else {
        pfVar1 = (float *)(puVar4[4] + 0x10);
        bVar3 = fVar2 < *pfVar1 || fVar2 == *pfVar1;
      }
      if (bVar3 == false) {
        puVar5 = (undefined4 *)puVar4[2];
      }
      else {
        puVar5 = (undefined4 *)*puVar4;
      }
    } while (*(char *)((int)puVar5 + 0xd) == '\0');
  }
  puVar4 = (undefined4 *)_Insert_at<>(this,&param_2,bVar3,puVar4,param_4,param_5);
  *param_1 = *puVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


// protected: class std::_Tree_const_iterator<class std::_Tree_val<struct
// std::_Tree_simple_types<class PathNode *> > > __thiscall std::_Tree<class std::_Tset_traits<class
// PathNode *,struct PathContext::NodeTotalWeightCompare,class std::allocator<class PathNode *>,1>
// >::_Insert_at<class PathNode * const &,struct std::_Not_a_node_tag>(bool,struct
// std::_Tree_node<class PathNode *,void *> *,class PathNode * const &,struct std::_Not_a_node_tag)

void __thiscall
std::_Tree<>::_Insert_at<>
          (_Tree<> *this,undefined4 *param_1,char param_2,undefined4 *param_3,PathNode **param_5)

{
  _Tree_node<> *p_Var1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  _Tree_node<> *p_Var5;
  int iVar6;
  _Tree_node<> *p_Var7;
  _Tree_node<> *p_Var8;
  int *piVar9;
  _Tree_node<> *p_Var10;
  _Tree_node<> *p_Var11;
  int *piVar12;
  _Tree_node<> *p_Var13;
  
  if (0xcccccca < *(uint *)(this + 4)) {
                    // WARNING: Subroutine does not return
    std::_Xlength_error("map/set<T> too long");
  }
  p_Var5 = _Tree_comp_alloc<>::_Buynode<>((_Tree_comp_alloc<> *)this,param_5);
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  *(undefined4 **)(p_Var5 + 4) = param_3;
  if (param_3 == *(undefined4 **)this) {
    (*(undefined4 **)this)[1] = p_Var5;
    **(undefined4 **)this = p_Var5;
    iVar6 = *(int *)this;
  }
  else {
    if (param_2 != '\0') {
      *param_3 = p_Var5;
      if (param_3 == (undefined4 *)**(int **)this) {
        **(int **)this = (int)p_Var5;
      }
      goto LAB_00592b15;
    }
    param_3[2] = p_Var5;
    iVar6 = *(int *)this;
    if (param_3 != *(undefined4 **)(iVar6 + 8)) goto LAB_00592b15;
  }
  *(_Tree_node<> **)(iVar6 + 8) = p_Var5;
LAB_00592b15:
  cVar2 = *(char *)(*(int *)(p_Var5 + 4) + 0xc);
  p_Var10 = p_Var5;
  do {
    if (cVar2 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)this + 4) + 0xc) = 1;
      *param_1 = p_Var5;
      return;
    }
    p_Var11 = *(_Tree_node<> **)(p_Var10 + 4);
    p_Var13 = p_Var10 + 4;
    p_Var1 = p_Var11 + 4;
    p_Var7 = (_Tree_node<> *)**(int **)(p_Var11 + 4);
    if (p_Var11 == p_Var7) {
      p_Var7 = (_Tree_node<> *)(*(int **)(p_Var11 + 4))[2];
      if (p_Var7[0xc] != (_Tree_node<>)0x0) {
        p_Var7 = *(_Tree_node<> **)(p_Var11 + 8);
        if (p_Var10 == p_Var7) {
          *(int *)(p_Var11 + 8) = *(int *)p_Var7;
          if (*(char *)(*(int *)p_Var7 + 0xd) == '\0') {
            *(_Tree_node<> **)(*(int *)p_Var7 + 4) = p_Var11;
          }
          *(int *)(p_Var7 + 4) = *(int *)p_Var1;
          if (p_Var11 == *(_Tree_node<> **)(*(int *)this + 4)) {
            *(_Tree_node<> **)(*(int *)this + 4) = p_Var7;
            *(_Tree_node<> **)p_Var7 = p_Var11;
            *(_Tree_node<> **)p_Var1 = p_Var7;
            p_Var10 = p_Var11;
            p_Var11 = p_Var7;
            p_Var13 = p_Var1;
          }
          else {
            piVar9 = *(int **)p_Var1;
            if (p_Var11 == (_Tree_node<> *)*piVar9) {
              *piVar9 = (int)p_Var7;
              *(_Tree_node<> **)p_Var7 = p_Var11;
              *(_Tree_node<> **)p_Var1 = p_Var7;
              p_Var10 = p_Var11;
              p_Var11 = p_Var7;
              p_Var13 = p_Var1;
            }
            else {
              piVar9[2] = (int)p_Var7;
              *(_Tree_node<> **)p_Var7 = p_Var11;
              *(_Tree_node<> **)p_Var1 = p_Var7;
              p_Var10 = p_Var11;
              p_Var11 = p_Var7;
              p_Var13 = p_Var1;
            }
          }
        }
        p_Var11[0xc] = (_Tree_node<>)0x1;
        *(undefined1 *)(*(int *)(*(int *)p_Var13 + 4) + 0xc) = 0;
        piVar9 = *(int **)(*(int *)p_Var13 + 4);
        piVar12 = (int *)*piVar9;
        *piVar9 = piVar12[2];
        if (*(char *)(piVar12[2] + 0xd) == '\0') {
          *(int **)(piVar12[2] + 4) = piVar9;
        }
        piVar12[1] = piVar9[1];
        if (piVar9 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar12;
          piVar12[2] = (int)piVar9;
        }
        else {
          piVar3 = (int *)piVar9[1];
          if (piVar9 == (int *)piVar3[2]) {
            piVar3[2] = (int)piVar12;
            piVar12[2] = (int)piVar9;
          }
          else {
            *piVar3 = (int)piVar12;
            piVar12[2] = (int)piVar9;
          }
        }
        goto LAB_00592ca7;
      }
LAB_00592bfb:
      p_Var11[0xc] = (_Tree_node<>)0x1;
      p_Var7[0xc] = (_Tree_node<>)0x1;
      *(undefined1 *)(*(int *)(*(int *)p_Var13 + 4) + 0xc) = 0;
      p_Var10 = *(_Tree_node<> **)(*(int *)p_Var13 + 4);
    }
    else {
      if (p_Var7[0xc] == (_Tree_node<>)0x0) goto LAB_00592bfb;
      p_Var7 = *(_Tree_node<> **)p_Var11;
      p_Var8 = p_Var11;
      if (p_Var10 == p_Var7) {
        *(int *)p_Var11 = *(int *)(p_Var7 + 8);
        if (*(char *)(*(int *)(p_Var7 + 8) + 0xd) == '\0') {
          *(_Tree_node<> **)(*(int *)(p_Var7 + 8) + 4) = p_Var11;
        }
        *(int *)(p_Var7 + 4) = *(int *)p_Var1;
        if (p_Var11 == *(_Tree_node<> **)(*(int *)this + 4)) {
          *(_Tree_node<> **)(*(int *)this + 4) = p_Var7;
        }
        else {
          puVar4 = *(undefined4 **)p_Var1;
          if (p_Var11 == (_Tree_node<> *)puVar4[2]) {
            puVar4[2] = p_Var7;
          }
          else {
            *puVar4 = p_Var7;
          }
        }
        *(_Tree_node<> **)(p_Var7 + 8) = p_Var11;
        *(_Tree_node<> **)p_Var1 = p_Var7;
        p_Var8 = p_Var7;
        p_Var10 = p_Var11;
        p_Var13 = p_Var1;
      }
      p_Var8[0xc] = (_Tree_node<>)0x1;
      *(undefined1 *)(*(int *)(*(int *)p_Var13 + 4) + 0xc) = 0;
      piVar9 = *(int **)(*(int *)p_Var13 + 4);
      piVar12 = (int *)piVar9[2];
      piVar9[2] = *piVar12;
      if (*(char *)(*piVar12 + 0xd) == '\0') {
        *(int **)(*piVar12 + 4) = piVar9;
      }
      piVar12[1] = piVar9[1];
      if (piVar9 == *(int **)(*(int *)this + 4)) {
        *(int **)(*(int *)this + 4) = piVar12;
      }
      else {
        piVar3 = (int *)piVar9[1];
        if (piVar9 == (int *)*piVar3) {
          *piVar3 = (int)piVar12;
        }
        else {
          piVar3[2] = (int)piVar12;
        }
      }
      *piVar12 = (int)piVar9;
LAB_00592ca7:
      piVar9[1] = (int)piVar12;
    }
    cVar2 = *(char *)(*(int *)(p_Var10 + 4) + 0xc);
  } while( true );
}
