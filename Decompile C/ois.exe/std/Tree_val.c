#include "../ois.exe.h"


// public: struct std::_Tree_node<struct std::pair<int const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,void *> * __thiscall std::_Tree_val<struct
// std::_Tree_simple_types<struct std::pair<int const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > >::_Extract(class
// std::_Tree_const_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
// std::pair<int const ,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > > >)

_Tree_node<> * __thiscall std::_Tree_val<>::_Extract(_Tree_val<> *this,_Tree_node<> *param_2)

{
  _Tree_node<> _Var1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  _Tree_node<> *p_Var6;
  _Tree_node<> *p_Var7;
  _Tree_node<> *p_Var8;
  _Tree_node<> *extraout_EDX;
  _Tree_node<> *p_Var9;
  _Tree_node<> *p_Var10;
  _Tree_node<> *unaff_EDI;
  _Tree_node<> *p_Var11;
  
  p_Var10 = param_2 + 8;
  p_Var8 = *(_Tree_node<> **)p_Var10;
  if (p_Var8[0xd] == (_Tree_node<>)0x0) {
    _Var1 = (*(_Tree_node<> **)p_Var8)[0xd];
    p_Var9 = *(_Tree_node<> **)p_Var8;
    while (_Var1 == (_Tree_node<>)0x0) {
      _Var1 = (*(_Tree_node<> **)p_Var9)[0xd];
      p_Var8 = p_Var9;
      p_Var9 = *(_Tree_node<> **)p_Var9;
    }
  }
  else {
    _Var1 = (*(_Tree_node<> **)(param_2 + 4))[0xd];
    p_Var11 = *(_Tree_node<> **)(param_2 + 4);
    p_Var9 = param_2;
    while ((p_Var8 = p_Var11, _Var1 == (_Tree_node<>)0x0 &&
           (p_Var9 == *(_Tree_node<> **)(p_Var8 + 8)))) {
      _Var1 = (*(_Tree_node<> **)(p_Var8 + 4))[0xd];
      p_Var11 = *(_Tree_node<> **)(p_Var8 + 4);
      p_Var9 = p_Var8;
    }
  }
  p_Var9 = *(_Tree_node<> **)param_2;
  p_Var11 = *(_Tree_node<> **)p_Var10;
  if (((p_Var9[0xd] == (_Tree_node<>)0x0) &&
      (p_Var11 = p_Var9, (*(_Tree_node<> **)p_Var10)[0xd] == (_Tree_node<>)0x0)) &&
     (p_Var11 = *(_Tree_node<> **)(p_Var8 + 8), p_Var8 != param_2)) {
    *(_Tree_node<> **)(p_Var9 + 4) = p_Var8;
    *(int *)p_Var8 = *(int *)param_2;
    p_Var9 = p_Var8;
    if (p_Var8 != *(_Tree_node<> **)p_Var10) {
      p_Var9 = *(_Tree_node<> **)(p_Var8 + 4);
      if (p_Var11[0xd] == (_Tree_node<>)0x0) {
        *(_Tree_node<> **)(p_Var11 + 4) = p_Var9;
      }
      *(_Tree_node<> **)p_Var9 = p_Var11;
      *(int *)(p_Var8 + 8) = *(int *)p_Var10;
      *(_Tree_node<> **)(*(int *)p_Var10 + 4) = p_Var8;
    }
    if (*(_Tree_node<> **)(*(int *)this + 4) == param_2) {
      *(_Tree_node<> **)(*(int *)this + 4) = p_Var8;
    }
    else {
      puVar3 = *(undefined4 **)(param_2 + 4);
      if ((_Tree_node<> *)*puVar3 == param_2) {
        *puVar3 = p_Var8;
      }
      else {
        puVar3[2] = p_Var8;
      }
    }
    *(int *)(p_Var8 + 4) = *(int *)(param_2 + 4);
    _Var1 = p_Var8[0xc];
    p_Var8[0xc] = param_2[0xc];
    param_2[0xc] = _Var1;
  }
  else {
    p_Var9 = *(_Tree_node<> **)(param_2 + 4);
    if (p_Var11[0xd] == (_Tree_node<>)0x0) {
      *(_Tree_node<> **)(p_Var11 + 4) = p_Var9;
    }
    if (*(_Tree_node<> **)(*(int *)this + 4) == param_2) {
      *(_Tree_node<> **)(*(int *)this + 4) = p_Var11;
    }
    else if (*(_Tree_node<> **)p_Var9 == param_2) {
      *(_Tree_node<> **)p_Var9 = p_Var11;
    }
    else {
      *(_Tree_node<> **)(p_Var9 + 8) = p_Var11;
    }
    if ((_Tree_node<> *)**(undefined4 **)this == param_2) {
      p_Var10 = p_Var9;
      if (p_Var11[0xd] == (_Tree_node<>)0x0) {
        _Var1 = (*(_Tree_node<> **)p_Var11)[0xd];
        p_Var8 = *(_Tree_node<> **)p_Var11;
        p_Var10 = p_Var11;
        while (p_Var6 = p_Var8, _Var1 == (_Tree_node<>)0x0) {
          p_Var8 = *(_Tree_node<> **)p_Var6;
          _Var1 = p_Var8[0xd];
          p_Var10 = p_Var6;
        }
      }
      **(undefined4 **)this = p_Var10;
    }
    iVar2 = *(int *)this;
    if (*(_Tree_node<> **)(iVar2 + 8) == param_2) {
      if (p_Var11[0xd] == (_Tree_node<>)0x0) {
        p_Var7 = _Tree_val<>::_Max(unaff_EDI);
        *(_Tree_node<> **)(iVar2 + 8) = p_Var7;
        p_Var9 = extraout_EDX;
      }
      else {
        *(_Tree_node<> **)(iVar2 + 8) = p_Var9;
      }
    }
  }
  if (param_2[0xc] == (_Tree_node<>)0x1) {
    if (p_Var11 == *(_Tree_node<> **)(*(int *)this + 4)) {
      p_Var11[0xc] = (_Tree_node<>)0x1;
    }
    else {
      do {
        p_Var10 = p_Var9;
        if (p_Var11[0xc] != (_Tree_node<>)0x1) break;
        p_Var8 = *(_Tree_node<> **)p_Var10;
        if (p_Var11 == p_Var8) {
          p_Var8 = *(_Tree_node<> **)(p_Var10 + 8);
          if (p_Var8[0xc] == (_Tree_node<>)0x0) {
            p_Var8[0xc] = (_Tree_node<>)0x1;
            piVar4 = *(int **)(p_Var10 + 8);
            p_Var10[0xc] = (_Tree_node<>)0x0;
            *(int *)(p_Var10 + 8) = *piVar4;
            if (*(char *)(*piVar4 + 0xd) == '\0') {
              *(_Tree_node<> **)(*piVar4 + 4) = p_Var10;
            }
            piVar4[1] = *(int *)(p_Var10 + 4);
            if (p_Var10 == *(_Tree_node<> **)(*(int *)this + 4)) {
              *(int **)(*(int *)this + 4) = piVar4;
            }
            else {
              piVar5 = *(int **)(p_Var10 + 4);
              if (p_Var10 == (_Tree_node<> *)*piVar5) {
                *piVar5 = (int)piVar4;
              }
              else {
                piVar5[2] = (int)piVar4;
              }
            }
            *piVar4 = (int)p_Var10;
            *(int **)(p_Var10 + 4) = piVar4;
            p_Var8 = *(_Tree_node<> **)(p_Var10 + 8);
          }
          if (p_Var8[0xd] == (_Tree_node<>)0x0) {
            if ((*(char *)(*(int *)p_Var8 + 0xc) != '\x01') ||
               (*(char *)(*(int *)(p_Var8 + 8) + 0xc) != '\x01')) {
              if (*(char *)(*(int *)(p_Var8 + 8) + 0xc) == '\x01') {
                *(undefined1 *)(*(int *)p_Var8 + 0xc) = 1;
                iVar2 = *(int *)p_Var8;
                p_Var8[0xc] = (_Tree_node<>)0x0;
                *(int *)p_Var8 = *(int *)(iVar2 + 8);
                if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
                  *(_Tree_node<> **)(*(int *)(iVar2 + 8) + 4) = p_Var8;
                }
                *(int *)(iVar2 + 4) = *(int *)(p_Var8 + 4);
                if (p_Var8 == *(_Tree_node<> **)(*(int *)this + 4)) {
                  *(int *)(*(int *)this + 4) = iVar2;
                  *(_Tree_node<> **)(iVar2 + 8) = p_Var8;
                  *(int *)(p_Var8 + 4) = iVar2;
                  p_Var8 = *(_Tree_node<> **)(p_Var10 + 8);
                }
                else {
                  piVar4 = *(int **)(p_Var8 + 4);
                  if (p_Var8 == (_Tree_node<> *)piVar4[2]) {
                    piVar4[2] = iVar2;
                    *(_Tree_node<> **)(iVar2 + 8) = p_Var8;
                    *(int *)(p_Var8 + 4) = iVar2;
                    p_Var8 = *(_Tree_node<> **)(p_Var10 + 8);
                  }
                  else {
                    *piVar4 = iVar2;
                    *(_Tree_node<> **)(iVar2 + 8) = p_Var8;
                    *(int *)(p_Var8 + 4) = iVar2;
                    p_Var8 = *(_Tree_node<> **)(p_Var10 + 8);
                  }
                }
              }
              p_Var8[0xc] = p_Var10[0xc];
              p_Var10[0xc] = (_Tree_node<>)0x1;
              *(undefined1 *)(*(int *)(p_Var8 + 8) + 0xc) = 1;
              piVar4 = *(int **)(p_Var10 + 8);
              *(int *)(p_Var10 + 8) = *piVar4;
              if (*(char *)(*piVar4 + 0xd) == '\0') {
                *(_Tree_node<> **)(*piVar4 + 4) = p_Var10;
              }
              piVar4[1] = *(int *)(p_Var10 + 4);
              if (p_Var10 == *(_Tree_node<> **)(*(int *)this + 4)) {
                *(int **)(*(int *)this + 4) = piVar4;
                *piVar4 = (int)p_Var10;
                *(int **)(p_Var10 + 4) = piVar4;
                p_Var11[0xc] = (_Tree_node<>)0x1;
              }
              else {
                piVar5 = *(int **)(p_Var10 + 4);
                if (p_Var10 == (_Tree_node<> *)*piVar5) {
                  *piVar5 = (int)piVar4;
                  *piVar4 = (int)p_Var10;
                  *(int **)(p_Var10 + 4) = piVar4;
                  p_Var11[0xc] = (_Tree_node<>)0x1;
                }
                else {
                  piVar5[2] = (int)piVar4;
                  *piVar4 = (int)p_Var10;
                  *(int **)(p_Var10 + 4) = piVar4;
                  p_Var11[0xc] = (_Tree_node<>)0x1;
                }
              }
              goto LAB_00413c8d;
            }
LAB_00413b0b:
            p_Var8[0xc] = (_Tree_node<>)0x0;
          }
        }
        else {
          if (p_Var8[0xc] == (_Tree_node<>)0x0) {
            p_Var8[0xc] = (_Tree_node<>)0x1;
            iVar2 = *(int *)p_Var10;
            p_Var10[0xc] = (_Tree_node<>)0x0;
            *(int *)p_Var10 = *(int *)(iVar2 + 8);
            if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
              *(_Tree_node<> **)(*(int *)(iVar2 + 8) + 4) = p_Var10;
            }
            *(int *)(iVar2 + 4) = *(int *)(p_Var10 + 4);
            if (p_Var10 == *(_Tree_node<> **)(*(int *)this + 4)) {
              *(int *)(*(int *)this + 4) = iVar2;
            }
            else {
              piVar4 = *(int **)(p_Var10 + 4);
              if (p_Var10 == (_Tree_node<> *)piVar4[2]) {
                piVar4[2] = iVar2;
              }
              else {
                *piVar4 = iVar2;
              }
            }
            *(_Tree_node<> **)(iVar2 + 8) = p_Var10;
            *(int *)(p_Var10 + 4) = iVar2;
            p_Var8 = *(_Tree_node<> **)p_Var10;
          }
          if (p_Var8[0xd] == (_Tree_node<>)0x0) {
            if ((*(char *)(*(int *)(p_Var8 + 8) + 0xc) == '\x01') &&
               (*(char *)(*(int *)p_Var8 + 0xc) == '\x01')) goto LAB_00413b0b;
            if (*(char *)(*(int *)p_Var8 + 0xc) == '\x01') {
              *(undefined1 *)(*(int *)(p_Var8 + 8) + 0xc) = 1;
              piVar4 = *(int **)(p_Var8 + 8);
              p_Var8[0xc] = (_Tree_node<>)0x0;
              *(int *)(p_Var8 + 8) = *piVar4;
              if (*(char *)(*piVar4 + 0xd) == '\0') {
                *(_Tree_node<> **)(*piVar4 + 4) = p_Var8;
              }
              piVar4[1] = *(int *)(p_Var8 + 4);
              if (p_Var8 == *(_Tree_node<> **)(*(int *)this + 4)) {
                *(int **)(*(int *)this + 4) = piVar4;
                *piVar4 = (int)p_Var8;
                *(int **)(p_Var8 + 4) = piVar4;
                p_Var8 = *(_Tree_node<> **)p_Var10;
              }
              else {
                piVar5 = *(int **)(p_Var8 + 4);
                if (p_Var8 == (_Tree_node<> *)*piVar5) {
                  *piVar5 = (int)piVar4;
                  *piVar4 = (int)p_Var8;
                  *(int **)(p_Var8 + 4) = piVar4;
                  p_Var8 = *(_Tree_node<> **)p_Var10;
                }
                else {
                  piVar5[2] = (int)piVar4;
                  *piVar4 = (int)p_Var8;
                  *(int **)(p_Var8 + 4) = piVar4;
                  p_Var8 = *(_Tree_node<> **)p_Var10;
                }
              }
            }
            p_Var8[0xc] = p_Var10[0xc];
            p_Var10[0xc] = (_Tree_node<>)0x1;
            *(undefined1 *)(*(int *)p_Var8 + 0xc) = 1;
            iVar2 = *(int *)p_Var10;
            *(int *)p_Var10 = *(int *)(iVar2 + 8);
            if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
              *(_Tree_node<> **)(*(int *)(iVar2 + 8) + 4) = p_Var10;
            }
            *(int *)(iVar2 + 4) = *(int *)(p_Var10 + 4);
            if (p_Var10 == *(_Tree_node<> **)(*(int *)this + 4)) {
              *(int *)(*(int *)this + 4) = iVar2;
              *(_Tree_node<> **)(iVar2 + 8) = p_Var10;
              *(int *)(p_Var10 + 4) = iVar2;
              p_Var11[0xc] = (_Tree_node<>)0x1;
            }
            else {
              piVar4 = *(int **)(p_Var10 + 4);
              if (p_Var10 == (_Tree_node<> *)piVar4[2]) {
                piVar4[2] = iVar2;
                *(_Tree_node<> **)(iVar2 + 8) = p_Var10;
                *(int *)(p_Var10 + 4) = iVar2;
                p_Var11[0xc] = (_Tree_node<>)0x1;
              }
              else {
                *piVar4 = iVar2;
                *(_Tree_node<> **)(iVar2 + 8) = p_Var10;
                *(int *)(p_Var10 + 4) = iVar2;
                p_Var11[0xc] = (_Tree_node<>)0x1;
              }
            }
            goto LAB_00413c8d;
          }
        }
        p_Var9 = *(_Tree_node<> **)(p_Var10 + 4);
        p_Var11 = p_Var10;
      } while (p_Var10 != *(_Tree_node<> **)(*(int *)this + 4));
      p_Var11[0xc] = (_Tree_node<>)0x1;
    }
  }
LAB_00413c8d:
  if (*(int *)(this + 4) != 0) {
    *(int *)(this + 4) = *(int *)(this + 4) + -1;
  }
  return param_2;
}


// public: struct std::_Tree_node<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,float>,void *> * __thiscall
// std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,float> >
// >::_Extract(class std::_Tree_const_iterator<class std::_Tree_val<struct
// std::_Tree_simple_types<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,float> > > >)

_Tree_node<> * __thiscall std::_Tree_val<>::_Extract(_Tree_val<> *this,_Tree_node<> *param_2)

{
  _Tree_node<> _Var1;
  _Tree_node<> *p_Var2;
  int *piVar3;
  _Tree_node<> *p_Var4;
  _Tree_node<> *p_Var5;
  int extraout_EDX;
  int iVar6;
  _Tree_node<> *p_Var7;
  _Tree_node<> *p_Var8;
  _Tree_node<> *unaff_EDI;
  _Tree_node<> *p_Var9;
  
  p_Var4 = *(_Tree_node<> **)(param_2 + 8);
  p_Var7 = param_2 + 8;
  if (p_Var4[0xd] == (_Tree_node<>)0x0) {
    _Var1 = (*(_Tree_node<> **)p_Var4)[0xd];
    p_Var8 = *(_Tree_node<> **)p_Var4;
    while (_Var1 == (_Tree_node<>)0x0) {
      _Var1 = (*(_Tree_node<> **)p_Var8)[0xd];
      p_Var4 = p_Var8;
      p_Var8 = *(_Tree_node<> **)p_Var8;
    }
  }
  else {
    _Var1 = (*(_Tree_node<> **)(param_2 + 4))[0xd];
    p_Var9 = *(_Tree_node<> **)(param_2 + 4);
    p_Var8 = (_Tree_node<> *)param_2;
    while ((p_Var4 = p_Var9, _Var1 == (_Tree_node<>)0x0 &&
           (p_Var8 == *(_Tree_node<> **)(p_Var4 + 8)))) {
      _Var1 = (*(_Tree_node<> **)(p_Var4 + 4))[0xd];
      p_Var9 = *(_Tree_node<> **)(p_Var4 + 4);
      p_Var8 = p_Var4;
    }
  }
  p_Var8 = *(_Tree_node<> **)param_2;
  p_Var9 = *(_Tree_node<> **)p_Var7;
  if (((p_Var8[0xd] == (_Tree_node<>)0x0) &&
      (p_Var9 = p_Var8, (*(_Tree_node<> **)p_Var7)[0xd] == (_Tree_node<>)0x0)) &&
     (p_Var9 = *(_Tree_node<> **)(p_Var4 + 8), p_Var4 != (_Tree_node<> *)param_2)) {
    *(_Tree_node<> **)(p_Var8 + 4) = p_Var4;
    *(int *)p_Var4 = *(int *)param_2;
    p_Var8 = p_Var4;
    if (p_Var4 != *(_Tree_node<> **)p_Var7) {
      p_Var8 = *(_Tree_node<> **)(p_Var4 + 4);
      if (p_Var9[0xd] == (_Tree_node<>)0x0) {
        *(_Tree_node<> **)(p_Var9 + 4) = p_Var8;
      }
      *(_Tree_node<> **)p_Var8 = p_Var9;
      *(int *)(p_Var4 + 8) = *(int *)p_Var7;
      *(_Tree_node<> **)(*(int *)p_Var7 + 4) = p_Var4;
    }
    if (*(_Tree_node<> **)(*(int *)this + 4) == param_2) {
      *(_Tree_node<> **)(*(int *)this + 4) = p_Var4;
    }
    else {
      piVar3 = *(int **)(param_2 + 4);
      if ((_Tree_node<> *)*piVar3 == param_2) {
        *piVar3 = (int)p_Var4;
      }
      else {
        piVar3[2] = (int)p_Var4;
      }
    }
    *(int *)(p_Var4 + 4) = *(int *)(param_2 + 4);
    _Var1 = p_Var4[0xc];
    p_Var4[0xc] = *(_Tree_node<> *)(param_2 + 0xc);
    *(_Tree_node<> *)(param_2 + 0xc) = _Var1;
  }
  else {
    p_Var8 = *(_Tree_node<> **)(param_2 + 4);
    if (p_Var9[0xd] == (_Tree_node<>)0x0) {
      *(_Tree_node<> **)(p_Var9 + 4) = p_Var8;
    }
    if (*(_Tree_node<> **)(*(int *)this + 4) == param_2) {
      *(_Tree_node<> **)(*(int *)this + 4) = p_Var9;
    }
    else if (*(_Tree_node<> **)p_Var8 == param_2) {
      *(_Tree_node<> **)p_Var8 = p_Var9;
    }
    else {
      *(_Tree_node<> **)(p_Var8 + 8) = p_Var9;
    }
    piVar3 = *(int **)this;
    if ((_Tree_node<> *)*piVar3 == param_2) {
      p_Var4 = p_Var8;
      if ((p_Var9[0xd] == (_Tree_node<>)0x0) &&
         (p_Var2 = *(_Tree_node<> **)p_Var9, p_Var4 = p_Var9,
         (*(_Tree_node<> **)p_Var9)[0xd] == (_Tree_node<>)0x0)) {
        do {
          p_Var4 = p_Var2;
          p_Var2 = *(_Tree_node<> **)p_Var4;
        } while (p_Var2[0xd] == (_Tree_node<>)0x0);
        piVar3 = *(int **)this;
      }
      *piVar3 = (int)p_Var4;
    }
    iVar6 = *(int *)this;
    if (*(_Tree_node<> **)(iVar6 + 8) == param_2) {
      p_Var4 = p_Var8;
      if (p_Var9[0xd] == (_Tree_node<>)0x0) {
        p_Var4 = _Tree_val<>::_Max(unaff_EDI);
        iVar6 = extraout_EDX;
      }
      *(_Tree_node<> **)(iVar6 + 8) = p_Var4;
    }
  }
  if (param_2[0xc] == (_Tree_node<>)0x1) {
    if (p_Var9 != *(_Tree_node<> **)(*(int *)this + 4)) {
      do {
        p_Var7 = (_Tree_node<> *)p_Var8;
        if (p_Var9[0xc] != (_Tree_node<>)0x1) break;
        p_Var5 = *(_Tree_node<> **)p_Var7;
        if (p_Var9 == (_Tree_node<> *)p_Var5) {
          p_Var5 = *(_Tree_node<> **)(p_Var7 + 8);
          if (p_Var5[0xc] == (_Tree_node<>)0x0) {
            p_Var5[0xc] = (_Tree_node<>)0x1;
            p_Var7[0xc] = (_Tree_node<>)0x0;
            _Lrotate(this,p_Var7);
            p_Var5 = *(_Tree_node<> **)(p_Var7 + 8);
          }
          if (p_Var5[0xd] == (_Tree_node<>)0x0) {
            if ((*(char *)(*(int *)p_Var5 + 0xc) != '\x01') ||
               (*(char *)(*(int *)(p_Var5 + 8) + 0xc) != '\x01')) {
              if (*(char *)(*(int *)(p_Var5 + 8) + 0xc) == '\x01') {
                *(undefined1 *)(*(int *)p_Var5 + 0xc) = 1;
                p_Var5[0xc] = (_Tree_node<>)0x0;
                _Rrotate(this,p_Var5);
                p_Var5 = *(_Tree_node<> **)(p_Var7 + 8);
              }
              p_Var5[0xc] = p_Var7[0xc];
              p_Var7[0xc] = (_Tree_node<>)0x1;
              *(undefined1 *)(*(int *)(p_Var5 + 8) + 0xc) = 1;
              _Lrotate(this,p_Var7);
              break;
            }
LAB_00413ede:
            p_Var5[0xc] = (_Tree_node<>)0x0;
          }
        }
        else {
          if (*(_Tree_node<> *)(p_Var5 + 0xc) == (_Tree_node<>)0x0) {
            *(_Tree_node<> *)(p_Var5 + 0xc) = (_Tree_node<>)0x1;
            p_Var7[0xc] = (_Tree_node<>)0x0;
            _Rrotate(this,p_Var7);
            p_Var5 = *(_Tree_node<> **)p_Var7;
          }
          if (p_Var5[0xd] == (_Tree_node<>)0x0) {
            if ((*(char *)(*(int *)(p_Var5 + 8) + 0xc) == '\x01') &&
               (*(char *)(*(int *)p_Var5 + 0xc) == '\x01')) goto LAB_00413ede;
            if (*(char *)(*(int *)p_Var5 + 0xc) == '\x01') {
              *(undefined1 *)(*(int *)(p_Var5 + 8) + 0xc) = 1;
              p_Var5[0xc] = (_Tree_node<>)0x0;
              _Lrotate(this,p_Var5);
              p_Var5 = *(_Tree_node<> **)p_Var7;
            }
            p_Var5[0xc] = p_Var7[0xc];
            p_Var7[0xc] = (_Tree_node<>)0x1;
            *(undefined1 *)(*(int *)p_Var5 + 0xc) = 1;
            _Rrotate(this,p_Var7);
            break;
          }
        }
        p_Var8 = (_Tree_node<> *)*(_Tree_node<> **)(p_Var7 + 4);
        p_Var9 = (_Tree_node<> *)p_Var7;
      } while (p_Var7 != *(_Tree_node<> **)(*(int *)this + 4));
    }
    p_Var9[0xc] = (_Tree_node<>)0x1;
  }
  if (*(int *)(this + 4) != 0) {
    *(int *)(this + 4) = *(int *)(this + 4) + -1;
  }
  return param_2;
}


// public: static struct std::_Tree_node<class PathNode *,void *> * __cdecl std::_Tree_val<struct
// std::_Tree_simple_types<class PathNode *> >::_Max(struct std::_Tree_node<class PathNode *,void *>
// *)

_Tree_node<> * __cdecl std::_Tree_val<>::_Max(_Tree_node<> *param_1)

{
  _Tree_node<> _Var1;
  _Tree_node<> *p_Var2;
  _Tree_node<> *p_Var3;
  _Tree_node<> *in_ECX;
  
  _Var1 = (*(_Tree_node<> **)(in_ECX + 8))[0xd];
  p_Var2 = *(_Tree_node<> **)(in_ECX + 8);
  while (p_Var3 = p_Var2, _Var1 == (_Tree_node<>)0x0) {
    p_Var2 = *(_Tree_node<> **)(p_Var3 + 8);
    _Var1 = p_Var2[0xd];
    in_ECX = p_Var3;
  }
  return in_ECX;
}


// public: void __thiscall std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,float> >
// >::_Rrotate(struct std::_Tree_node<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,float>,void *> *)

void __thiscall std::_Tree_val<>::_Rrotate(_Tree_val<> *this,_Tree_node<> *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)param_1;
  *(undefined4 *)param_1 = *(undefined4 *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(_Tree_node<> **)(*(int *)(iVar1 + 8) + 4) = param_1;
  }
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 4);
  if (param_1 == *(_Tree_node<> **)(*(int *)this + 4)) {
    *(int *)(*(int *)this + 4) = iVar1;
    *(_Tree_node<> **)(iVar1 + 8) = param_1;
    *(int *)(param_1 + 4) = iVar1;
    return;
  }
  piVar2 = *(int **)(param_1 + 4);
  if (param_1 == (_Tree_node<> *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(_Tree_node<> **)(iVar1 + 8) = param_1;
    *(int *)(param_1 + 4) = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(_Tree_node<> **)(iVar1 + 8) = param_1;
  *(int *)(param_1 + 4) = iVar1;
  return;
}


// public: void __thiscall std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,float> >
// >::_Lrotate(struct std::_Tree_node<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,float>,void *> *)

void __thiscall std::_Tree_val<>::_Lrotate(_Tree_val<> *this,_Tree_node<> *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(_Tree_node<> **)(*piVar1 + 4) = param_1;
  }
  piVar1[1] = *(int *)(param_1 + 4);
  if (param_1 == *(_Tree_node<> **)(*(int *)this + 4)) {
    *(int **)(*(int *)this + 4) = piVar1;
    *piVar1 = (int)param_1;
    *(int **)(param_1 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_1 + 4);
  if (param_1 == (_Tree_node<> *)*piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = (int)param_1;
    *(int **)(param_1 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = (int)param_1;
  *(int **)(param_1 + 4) = piVar1;
  return;
}


// public: struct std::_Tree_node<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,void *> * __thiscall std::_Tree_val<struct
// std::_Tree_simple_types<struct std::pair<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const ,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > >::_Extract(class
// std::_Tree_const_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
// std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const ,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >
// > > >)

_Tree_node<> * __thiscall std::_Tree_val<>::_Extract(_Tree_val<> *this,_Tree_node<> *param_2)

{
  _Tree_node<> _Var1;
  _Tree_node<> *p_Var2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  _Tree_node<> *p_Var7;
  _Tree_node<> *p_Var8;
  _Tree_node<> *p_Var9;
  _Tree_node<> *p_Var10;
  _Tree_node<> *extraout_EDX;
  _Tree_node<> *p_Var11;
  _Tree_node<> *unaff_EDI;
  
  p_Var8 = param_2;
  _Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&param_2);
  p_Var10 = *(_Tree_node<> **)p_Var8;
  p_Var11 = *(_Tree_node<> **)(p_Var8 + 8);
  if (((p_Var10[0xd] == (_Tree_node<>)0x0) &&
      (p_Var11 = p_Var10, (*(_Tree_node<> **)(p_Var8 + 8))[0xd] == (_Tree_node<>)0x0)) &&
     (p_Var11 = *(_Tree_node<> **)(param_2 + 8), param_2 != p_Var8)) {
    *(_Tree_node<> **)(p_Var10 + 4) = param_2;
    *(int *)param_2 = *(int *)p_Var8;
    p_Var10 = param_2;
    if (param_2 != *(_Tree_node<> **)(p_Var8 + 8)) {
      p_Var10 = *(_Tree_node<> **)(param_2 + 4);
      if (p_Var11[0xd] == (_Tree_node<>)0x0) {
        *(_Tree_node<> **)(p_Var11 + 4) = p_Var10;
      }
      *(_Tree_node<> **)p_Var10 = p_Var11;
      *(int *)(param_2 + 8) = *(int *)(p_Var8 + 8);
      *(_Tree_node<> **)(*(int *)(p_Var8 + 8) + 4) = param_2;
    }
    if (*(_Tree_node<> **)(*(int *)this + 4) == p_Var8) {
      *(_Tree_node<> **)(*(int *)this + 4) = param_2;
    }
    else {
      puVar5 = *(undefined4 **)(p_Var8 + 4);
      if ((_Tree_node<> *)*puVar5 == p_Var8) {
        *puVar5 = param_2;
      }
      else {
        puVar5[2] = param_2;
      }
    }
    *(int *)(param_2 + 4) = *(int *)(p_Var8 + 4);
    _Var1 = param_2[0xc];
    param_2[0xc] = p_Var8[0xc];
    p_Var8[0xc] = _Var1;
  }
  else {
    p_Var9 = *(_Tree_node<> **)(p_Var8 + 4);
    if (p_Var11[0xd] == (_Tree_node<>)0x0) {
      *(_Tree_node<> **)(p_Var11 + 4) = p_Var9;
    }
    if (*(_Tree_node<> **)(*(int *)this + 4) == p_Var8) {
      *(_Tree_node<> **)(*(int *)this + 4) = p_Var11;
    }
    else if (*(_Tree_node<> **)p_Var9 == p_Var8) {
      *(_Tree_node<> **)p_Var9 = p_Var11;
    }
    else {
      *(_Tree_node<> **)(p_Var9 + 8) = p_Var11;
    }
    if ((_Tree_node<> *)**(undefined4 **)this == p_Var8) {
      p_Var10 = p_Var9;
      if (p_Var11[0xd] == (_Tree_node<>)0x0) {
        _Var1 = (*(_Tree_node<> **)p_Var11)[0xd];
        p_Var2 = *(_Tree_node<> **)p_Var11;
        p_Var10 = p_Var11;
        while (p_Var7 = p_Var2, _Var1 == (_Tree_node<>)0x0) {
          p_Var2 = *(_Tree_node<> **)p_Var7;
          _Var1 = p_Var2[0xd];
          p_Var10 = p_Var7;
        }
      }
      **(undefined4 **)this = p_Var10;
    }
    iVar3 = *(int *)this;
    p_Var10 = p_Var9;
    if (*(_Tree_node<> **)(iVar3 + 8) == p_Var8) {
      if (p_Var11[0xd] == (_Tree_node<>)0x0) {
        p_Var9 = _Tree_val<>::_Max(unaff_EDI);
        p_Var10 = extraout_EDX;
      }
      *(_Tree_node<> **)(iVar3 + 8) = p_Var9;
    }
  }
  if (p_Var8[0xc] == (_Tree_node<>)0x1) {
    if (p_Var11 != *(_Tree_node<> **)(*(int *)this + 4)) {
      while (p_Var9 = p_Var10, p_Var11[0xc] == (_Tree_node<>)0x1) {
        p_Var10 = *(_Tree_node<> **)p_Var9;
        if (p_Var11 == p_Var10) {
          p_Var10 = *(_Tree_node<> **)(p_Var9 + 8);
          if (p_Var10[0xc] == (_Tree_node<>)0x0) {
            p_Var10[0xc] = (_Tree_node<>)0x1;
            piVar4 = *(int **)(p_Var9 + 8);
            p_Var9[0xc] = (_Tree_node<>)0x0;
            *(int *)(p_Var9 + 8) = *piVar4;
            if (*(char *)(*piVar4 + 0xd) == '\0') {
              *(_Tree_node<> **)(*piVar4 + 4) = p_Var9;
            }
            piVar4[1] = *(int *)(p_Var9 + 4);
            if (p_Var9 == *(_Tree_node<> **)(*(int *)this + 4)) {
              *(int **)(*(int *)this + 4) = piVar4;
            }
            else {
              piVar6 = *(int **)(p_Var9 + 4);
              if (p_Var9 == (_Tree_node<> *)*piVar6) {
                *piVar6 = (int)piVar4;
              }
              else {
                piVar6[2] = (int)piVar4;
              }
            }
            *piVar4 = (int)p_Var9;
            *(int **)(p_Var9 + 4) = piVar4;
            p_Var10 = *(_Tree_node<> **)(p_Var9 + 8);
          }
          if (p_Var10[0xd] == (_Tree_node<>)0x0) {
            if ((*(char *)(*(int *)p_Var10 + 0xc) != '\x01') ||
               (*(char *)(*(int *)(p_Var10 + 8) + 0xc) != '\x01')) {
              if (*(char *)(*(int *)(p_Var10 + 8) + 0xc) == '\x01') {
                *(undefined1 *)(*(int *)p_Var10 + 0xc) = 1;
                iVar3 = *(int *)p_Var10;
                p_Var10[0xc] = (_Tree_node<>)0x0;
                *(int *)p_Var10 = *(int *)(iVar3 + 8);
                if (*(char *)(*(int *)(iVar3 + 8) + 0xd) == '\0') {
                  *(_Tree_node<> **)(*(int *)(iVar3 + 8) + 4) = p_Var10;
                }
                *(int *)(iVar3 + 4) = *(int *)(p_Var10 + 4);
                if (p_Var10 == *(_Tree_node<> **)(*(int *)this + 4)) {
                  *(int *)(*(int *)this + 4) = iVar3;
                  *(_Tree_node<> **)(iVar3 + 8) = p_Var10;
                  *(int *)(p_Var10 + 4) = iVar3;
                  p_Var10 = *(_Tree_node<> **)(p_Var9 + 8);
                }
                else {
                  piVar4 = *(int **)(p_Var10 + 4);
                  if (p_Var10 == (_Tree_node<> *)piVar4[2]) {
                    piVar4[2] = iVar3;
                    *(_Tree_node<> **)(iVar3 + 8) = p_Var10;
                    *(int *)(p_Var10 + 4) = iVar3;
                    p_Var10 = *(_Tree_node<> **)(p_Var9 + 8);
                  }
                  else {
                    *piVar4 = iVar3;
                    *(_Tree_node<> **)(iVar3 + 8) = p_Var10;
                    *(int *)(p_Var10 + 4) = iVar3;
                    p_Var10 = *(_Tree_node<> **)(p_Var9 + 8);
                  }
                }
              }
              p_Var10[0xc] = p_Var9[0xc];
              p_Var9[0xc] = (_Tree_node<>)0x1;
              *(undefined1 *)(*(int *)(p_Var10 + 8) + 0xc) = 1;
              piVar4 = *(int **)(p_Var9 + 8);
              *(int *)(p_Var9 + 8) = *piVar4;
              if (*(char *)(*piVar4 + 0xd) == '\0') {
                *(_Tree_node<> **)(*piVar4 + 4) = p_Var9;
              }
              piVar4[1] = *(int *)(p_Var9 + 4);
              if (p_Var9 == *(_Tree_node<> **)(*(int *)this + 4)) {
                *(int **)(*(int *)this + 4) = piVar4;
                *piVar4 = (int)p_Var9;
                *(int **)(p_Var9 + 4) = piVar4;
              }
              else {
                piVar6 = *(int **)(p_Var9 + 4);
                if (p_Var9 == (_Tree_node<> *)*piVar6) {
                  *piVar6 = (int)piVar4;
                  *piVar4 = (int)p_Var9;
                  *(int **)(p_Var9 + 4) = piVar4;
                }
                else {
                  piVar6[2] = (int)piVar4;
                  *piVar4 = (int)p_Var9;
                  *(int **)(p_Var9 + 4) = piVar4;
                }
              }
              break;
            }
LAB_00419b22:
            p_Var10[0xc] = (_Tree_node<>)0x0;
          }
        }
        else {
          if (p_Var10[0xc] == (_Tree_node<>)0x0) {
            p_Var10[0xc] = (_Tree_node<>)0x1;
            iVar3 = *(int *)p_Var9;
            p_Var9[0xc] = (_Tree_node<>)0x0;
            *(int *)p_Var9 = *(int *)(iVar3 + 8);
            if (*(char *)(*(int *)(iVar3 + 8) + 0xd) == '\0') {
              *(_Tree_node<> **)(*(int *)(iVar3 + 8) + 4) = p_Var9;
            }
            *(int *)(iVar3 + 4) = *(int *)(p_Var9 + 4);
            if (p_Var9 == *(_Tree_node<> **)(*(int *)this + 4)) {
              *(int *)(*(int *)this + 4) = iVar3;
            }
            else {
              piVar4 = *(int **)(p_Var9 + 4);
              if (p_Var9 == (_Tree_node<> *)piVar4[2]) {
                piVar4[2] = iVar3;
              }
              else {
                *piVar4 = iVar3;
              }
            }
            *(_Tree_node<> **)(iVar3 + 8) = p_Var9;
            *(int *)(p_Var9 + 4) = iVar3;
            p_Var10 = *(_Tree_node<> **)p_Var9;
          }
          if (p_Var10[0xd] == (_Tree_node<>)0x0) {
            if ((*(char *)(*(int *)(p_Var10 + 8) + 0xc) == '\x01') &&
               (*(char *)(*(int *)p_Var10 + 0xc) == '\x01')) goto LAB_00419b22;
            if (*(char *)(*(int *)p_Var10 + 0xc) == '\x01') {
              *(undefined1 *)(*(int *)(p_Var10 + 8) + 0xc) = 1;
              piVar4 = *(int **)(p_Var10 + 8);
              p_Var10[0xc] = (_Tree_node<>)0x0;
              *(int *)(p_Var10 + 8) = *piVar4;
              if (*(char *)(*piVar4 + 0xd) == '\0') {
                *(_Tree_node<> **)(*piVar4 + 4) = p_Var10;
              }
              piVar4[1] = *(int *)(p_Var10 + 4);
              if (p_Var10 == *(_Tree_node<> **)(*(int *)this + 4)) {
                *(int **)(*(int *)this + 4) = piVar4;
                *piVar4 = (int)p_Var10;
                *(int **)(p_Var10 + 4) = piVar4;
                p_Var10 = *(_Tree_node<> **)p_Var9;
              }
              else {
                piVar6 = *(int **)(p_Var10 + 4);
                if (p_Var10 == (_Tree_node<> *)*piVar6) {
                  *piVar6 = (int)piVar4;
                  *piVar4 = (int)p_Var10;
                  *(int **)(p_Var10 + 4) = piVar4;
                  p_Var10 = *(_Tree_node<> **)p_Var9;
                }
                else {
                  piVar6[2] = (int)piVar4;
                  *piVar4 = (int)p_Var10;
                  *(int **)(p_Var10 + 4) = piVar4;
                  p_Var10 = *(_Tree_node<> **)p_Var9;
                }
              }
            }
            p_Var10[0xc] = p_Var9[0xc];
            p_Var9[0xc] = (_Tree_node<>)0x1;
            *(undefined1 *)(*(int *)p_Var10 + 0xc) = 1;
            iVar3 = *(int *)p_Var9;
            *(int *)p_Var9 = *(int *)(iVar3 + 8);
            if (*(char *)(*(int *)(iVar3 + 8) + 0xd) == '\0') {
              *(_Tree_node<> **)(*(int *)(iVar3 + 8) + 4) = p_Var9;
            }
            *(int *)(iVar3 + 4) = *(int *)(p_Var9 + 4);
            if (p_Var9 == *(_Tree_node<> **)(*(int *)this + 4)) {
              *(int *)(*(int *)this + 4) = iVar3;
              *(_Tree_node<> **)(iVar3 + 8) = p_Var9;
              *(int *)(p_Var9 + 4) = iVar3;
            }
            else {
              piVar4 = *(int **)(p_Var9 + 4);
              if (p_Var9 == (_Tree_node<> *)piVar4[2]) {
                piVar4[2] = iVar3;
                *(_Tree_node<> **)(iVar3 + 8) = p_Var9;
                *(int *)(p_Var9 + 4) = iVar3;
              }
              else {
                *piVar4 = iVar3;
                *(_Tree_node<> **)(iVar3 + 8) = p_Var9;
                *(int *)(p_Var9 + 4) = iVar3;
              }
            }
            break;
          }
        }
        p_Var10 = *(_Tree_node<> **)(p_Var9 + 4);
        p_Var11 = p_Var9;
        if (p_Var9 == *(_Tree_node<> **)(*(int *)this + 4)) break;
      }
    }
    p_Var11[0xc] = (_Tree_node<>)0x1;
  }
  if (*(int *)(this + 4) != 0) {
    *(int *)(this + 4) = *(int *)(this + 4) + -1;
  }
  return (_Tree_node<> *)p_Var8;
}
