#include "../ois.exe.h"


// public: __thiscall TextEngine::TextEngine(class TextField *,int,int,int,class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > > *)

TextEngine * __thiscall
TextEngine::TextEngine
          (TextEngine *this,TextField *param_1,int param_2,int param_3,int param_4,vector<> *param_5
          )

{
  undefined4 *puVar1;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005b3c2e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(TextField **)this = param_1;
  this[4] = (TextEngine)(param_5 == (vector<> *)0x0);
  *(vector<> **)(this + 8) = param_5;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(int *)(this + 0x20) = param_3;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 100;
  *(int *)(this + 0x24) = param_4;
  *(undefined2 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0xf;
  this[0x2c] = (TextEngine)0x0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0xf;
  this[0x44] = (TextEngine)0x0;
  local_8 = 2;
  uStack_7 = 0;
  cocos2d::Color3B::Color3B((Color3B *)(this + 0x5c),'\0','\0','\0');
  cocos2d::Color3B::Color3B((Color3B *)(this + 0x5f),'\0','\0','\0');
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0xf;
  this[0x98] = (TextEngine)0x0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0xf;
  this[0xc4] = (TextEngine)0x0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0xf;
  this[0xe8] = (TextEngine)0x0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  _local_8 = CONCAT31(uStack_7,10);
  if (*(int *)(this + 8) == 0) {
    puVar1 = operator_new(0xc);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined4 **)(this + 8) = puVar1;
  }
  ExceptionList = local_10;
  return this;
}


// public: void __thiscall TextEngine::showDocument(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::function<void __cdecl(void)>)

void __thiscall TextEngine::showDocument(TextEngine *this,undefined4 *param_2)

{
  vector<> *this_00;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  basic_string<> *pbVar4;
  basic_string<> *pbVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 ****ppppuVar8;
  char ****ppppcVar9;
  basic_string<> *extraout_ECX;
  basic_string<> *this_01;
  char *pcVar10;
  void *pvVar11;
  int iVar12;
  nothrow_t *pnVar13;
  int iVar14;
  allocator<> *unaff_EDI;
  uint uVar15;
  uint in_stack_00000014;
  uint in_stack_00000018;
  basic_string<> *in_stack_0000001c;
  uint in_stack_0000002c;
  uint in_stack_00000030;
  int *in_stack_00000058;
  basic_string<> abStack_cc [8];
  undefined4 uStack_c4;
  int local_94;
  void *local_8c [5];
  uint local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  char ***local_5c [4];
  uint local_4c;
  uint local_48;
  char ***local_44 [4];
  uint local_34;
  uint local_30;
  undefined4 ***local_2c [4];
  int local_1c;
  uint local_18;
  basic_string<> *local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005b3c9e;
  local_10 = ExceptionList;
  pbVar4 = (basic_string<> *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 2;
  local_14 = pbVar4;
  if (this + 0xc != *(TextEngine **)(this + 8)) {
    uStack_c4 = 0x42c017;
    std::vector<>::_Assign_range<>();
  }
  std::function<>::operator=((function<> *)(this + 0x70),(function<> *)&stack0x00000034);
  this_01 = (basic_string<> *)(this + 0x98);
  if (this_01 != (basic_string<> *)&stack0x0000001c) {
    pbVar5 = (basic_string<> *)&stack0x0000001c;
    if (0xf < in_stack_00000030) {
      pbVar5 = in_stack_0000001c;
    }
    std::basic_string<>::assign(this_01,(char *)pbVar5,in_stack_0000002c);
    this_01 = extraout_ECX;
  }
  *(undefined4 *)(this + 100) = 1;
  this_00 = (vector<> *)(this + 0xb0);
  *(undefined4 *)(this + 0x68) = 0;
  std::_Destroy_range<>(this_01,pbVar4,unaff_EDI);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)this_00;
  bVar1 = false;
  bVar2 = false;
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (char ***)((uint)local_5c[0] & 0xffffff00);
  local_18 = 0xf;
  iVar12 = 0;
  local_1c = 0;
  local_94 = 0;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  iVar14 = 0;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (char ***)((uint)local_44[0] & 0xffffff00);
  uVar15 = 0;
  local_8._0_1_ = 5;
  if (in_stack_00000014 != 0) {
    do {
      puVar7 = &param_2;
      if (0xf < in_stack_00000018) {
        puVar7 = param_2;
      }
      if (*(char *)((int)puVar7 + uVar15) == '\n') {
LAB_0042c505:
        if (bVar1) {
          local_4c = 0;
          ppppcVar9 = local_5c;
          if (0xf < local_48) {
            ppppcVar9 = (char ****)local_5c[0];
          }
          bVar1 = false;
          *(char *)ppppcVar9 = '\0';
        }
        bVar3 = false;
        if ((uint)(iVar14 + 1 + local_1c) < *(uint *)(this + 0x20)) {
          ppppuVar8 = local_2c;
          if (0xf < local_18) {
            ppppuVar8 = (undefined4 ****)local_2c[0];
          }
          if (*(char *)((int)ppppuVar8 + local_1c + -1) != ' ') {
            std::basic_string<>::append((basic_string<> *)local_2c," ",1);
          }
          ppppcVar9 = local_44;
          if (0xf < local_30) {
            ppppcVar9 = (char ****)local_44[0];
          }
          std::basic_string<>::append((basic_string<> *)local_2c,(char *)ppppcVar9,local_34);
        }
        else {
          bVar3 = true;
        }
        pbVar4 = *(basic_string<> **)(this + 0xb4);
        if (*(basic_string<> **)(this + 0xb8) == pbVar4) {
          std::vector<>::_Emplace_reallocate<>
                    (this_00,(basic_string<> *)pbVar4,(basic_string<> *)local_2c);
        }
        else {
          std::basic_string<>::basic_string<>(pbVar4,(basic_string<> *)local_2c);
          *(int *)(this + 0xb4) = *(int *)(this + 0xb4) + 0x18;
        }
        local_1c = 0;
        ppppuVar8 = local_2c;
        if (0xf < local_18) {
          ppppuVar8 = (undefined4 ****)local_2c[0];
        }
        local_94 = 0;
        *(undefined1 *)ppppuVar8 = 0;
        if (local_4c == 2) {
          ppppcVar9 = local_5c;
          if (0xf < local_48) {
            ppppcVar9 = (char ****)local_5c[0];
          }
          std::basic_string<>::append((basic_string<> *)local_2c,(char *)ppppcVar9,2);
        }
        if (bVar3) {
          ppppcVar9 = local_44;
          if (0xf < local_30) {
            ppppcVar9 = (char ****)local_44[0];
          }
          std::basic_string<>::append((basic_string<> *)local_2c,(char *)ppppcVar9,local_34);
          local_94 = iVar14;
        }
        local_34 = 0;
        ppppcVar9 = local_44;
        if (0xf < local_30) {
          ppppcVar9 = (char ****)local_44[0];
        }
        iVar14 = 0;
        *(char *)ppppcVar9 = '\0';
        iVar12 = local_94;
      }
      else {
        puVar7 = &param_2;
        if (0xf < in_stack_00000018) {
          puVar7 = param_2;
        }
        if (*(char *)((int)puVar7 + uVar15) == '^') goto LAB_0042c505;
        if (bVar1) {
          uStack_c4 = 0x42c118;
          pcVar6 = (char *)strUsingArgs((char *)local_8c);
          local_8._0_1_ = 6;
          pcVar10 = pcVar6;
          if (0xf < *(uint *)(pcVar6 + 0x14)) {
            pcVar10 = *(char **)pcVar6;
          }
          std::basic_string<>::append((basic_string<> *)local_5c,pcVar10,*(uint *)(pcVar6 + 0x10));
          local_8._0_1_ = 5;
          if (0xf < local_78) {
            pnVar13 = (nothrow_t *)(local_78 + 1);
            pvVar11 = local_8c[0];
            if ((nothrow_t *)0xfff < pnVar13) {
              pvVar11 = *(void **)((int)local_8c[0] + -4);
              pnVar13 = (nothrow_t *)(local_78 + 0x24);
              if (0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar11))) goto LAB_0042c6c6;
            }
            operator_delete(pvVar11,pnVar13);
          }
          puVar7 = &param_2;
          if (0xf < in_stack_00000018) {
            puVar7 = param_2;
          }
          iVar12 = local_94;
          if ((*(char *)((int)puVar7 + uVar15) != 'a') && (local_4c != 0)) {
            uStack_c4 = 0x42c1aa;
            debugPrint("DETAIL","Macro complete: `%s");
            ppppcVar9 = local_5c;
            if (0xf < local_48) {
              ppppcVar9 = (char ****)local_5c[0];
            }
            std::basic_string<>::append((basic_string<> *)local_44,(char *)ppppcVar9,local_4c);
            bVar1 = false;
          }
        }
        else {
          puVar7 = &param_2;
          if (0xf < in_stack_00000018) {
            puVar7 = param_2;
          }
          if (*(char *)((int)puVar7 + uVar15) == '`') {
            local_4c = 1;
            ppppcVar9 = local_5c;
            if (0xf < local_48) {
              ppppcVar9 = (char ****)local_5c[0];
            }
            bVar1 = true;
            *(undefined2 *)ppppcVar9 = 0x60;
          }
          else {
            puVar7 = &param_2;
            if (0xf < in_stack_00000018) {
              puVar7 = param_2;
            }
            if (*(char *)((int)puVar7 + uVar15) == '\"') {
              if (bVar2) {
                std::basic_string<>::append((basic_string<> *)local_44,"\"",1);
                bVar2 = false;
                std::basic_string<>::append((basic_string<> *)local_44,"`2",2);
                std::basic_string<>::assign((basic_string<> *)local_5c,"`2",2);
              }
              else {
                bVar2 = true;
                std::basic_string<>::append((basic_string<> *)local_44,"`0",2);
                std::basic_string<>::assign((basic_string<> *)local_5c,"`0",2);
                std::basic_string<>::append((basic_string<> *)local_44,"\"",1);
              }
LAB_0042c250:
              iVar14 = iVar14 + 1;
              iVar12 = local_94;
            }
            else {
              puVar7 = &param_2;
              if (0xf < in_stack_00000018) {
                puVar7 = param_2;
              }
              if (*(char *)((int)puVar7 + uVar15) == ' ') {
                if (*(int *)(this + 0x20) <= iVar14 + iVar12) {
                  pbVar4 = *(basic_string<> **)(this + 0xb4);
                  if (*(basic_string<> **)(this + 0xb8) == pbVar4) {
                    std::vector<>::_Emplace_reallocate<>
                              (this_00,(basic_string<> *)pbVar4,(basic_string<> *)local_2c);
                  }
                  else {
                    std::basic_string<>::basic_string<>(pbVar4,(basic_string<> *)local_2c);
                    *(int *)(this + 0xb4) = *(int *)(this + 0xb4) + 0x18;
                  }
                  local_1c = 0;
                  ppppuVar8 = local_2c;
                  if (0xf < local_18) {
                    ppppuVar8 = (undefined4 ****)local_2c[0];
                  }
                  *(undefined1 *)ppppuVar8 = 0;
                  if (local_4c == 2) {
                    ppppcVar9 = local_5c;
                    if (0xf < local_48) {
                      ppppcVar9 = (char ****)local_5c[0];
                    }
                    std::basic_string<>::append((basic_string<> *)local_2c,(char *)ppppcVar9,2);
                  }
                  local_94 = 0;
                }
                std::basic_string<>::basic_string<>(abStack_cc,(basic_string<> *)local_2c);
                bVar3 = lineEndsWithSpace();
                if (!bVar3) {
                  std::basic_string<>::basic_string<>(abStack_cc,(basic_string<> *)local_2c);
                  bVar3 = lineIsNull();
                  if (!bVar3) {
                    std::basic_string<>::append((basic_string<> *)local_2c," ",1);
                  }
                }
                ppppcVar9 = local_44;
                if (0xf < local_30) {
                  ppppcVar9 = (char ****)local_44[0];
                }
                std::basic_string<>::append((basic_string<> *)local_2c,(char *)ppppcVar9,local_34);
                local_94 = local_94 + 1 + iVar14;
                iVar14 = 0;
                local_34 = 0;
                ppppcVar9 = local_44;
                if (0xf < local_30) {
                  ppppcVar9 = (char ****)local_44[0];
                }
                *(char *)ppppcVar9 = '\0';
                iVar12 = local_94;
              }
              else {
                if (iVar12 + 1 + iVar14 < *(int *)(this + 0x20)) {
                  uStack_c4 = 0x42c499;
                  pcVar6 = (char *)strUsingArgs((char *)local_74);
                  local_8._0_1_ = 8;
                  pcVar10 = pcVar6;
                  if (0xf < *(uint *)(pcVar6 + 0x14)) {
                    pcVar10 = *(char **)pcVar6;
                  }
                  std::basic_string<>::append
                            ((basic_string<> *)local_44,pcVar10,*(uint *)(pcVar6 + 0x10));
                  local_8._0_1_ = 5;
                  if (0xf < local_60) {
                    pnVar13 = (nothrow_t *)(local_60 + 1);
                    pvVar11 = local_74[0];
                    if ((nothrow_t *)0xfff < pnVar13) {
                      pvVar11 = *(void **)((int)local_74[0] + -4);
                      pnVar13 = (nothrow_t *)(local_60 + 0x24);
                      if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar11))) goto LAB_0042c6c6;
                    }
                    operator_delete(pvVar11,pnVar13);
                  }
                  local_64 = 0;
                  local_60 = 0xf;
                  local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
                  goto LAB_0042c250;
                }
                pbVar4 = *(basic_string<> **)(this + 0xb4);
                if (*(basic_string<> **)(this + 0xb8) == pbVar4) {
                  std::vector<>::_Emplace_reallocate<>
                            (this_00,(basic_string<> *)pbVar4,(basic_string<> *)local_2c);
                }
                else {
                  std::basic_string<>::basic_string<>(pbVar4,(basic_string<> *)local_2c);
                  *(int *)(this + 0xb4) = *(int *)(this + 0xb4) + 0x18;
                }
                local_1c = 0;
                ppppuVar8 = local_2c;
                if (0xf < local_18) {
                  ppppuVar8 = (undefined4 ****)local_2c[0];
                }
                *(undefined1 *)ppppuVar8 = 0;
                if (local_4c == 2) {
                  ppppcVar9 = local_5c;
                  if (0xf < local_48) {
                    ppppcVar9 = (char ****)local_5c[0];
                  }
                  std::basic_string<>::append((basic_string<> *)local_2c,(char *)ppppcVar9,2);
                }
                uStack_c4 = 0x42c416;
                pcVar6 = (char *)strUsingArgs((char *)local_8c);
                local_8._0_1_ = 7;
                pcVar10 = pcVar6;
                if (0xf < *(uint *)(pcVar6 + 0x14)) {
                  pcVar10 = *(char **)pcVar6;
                }
                std::basic_string<>::append
                          ((basic_string<> *)local_44,pcVar10,*(uint *)(pcVar6 + 0x10));
                local_8._0_1_ = 5;
                if (0xf < local_78) {
                  pnVar13 = (nothrow_t *)(local_78 + 1);
                  pvVar11 = local_8c[0];
                  if ((nothrow_t *)0xfff < pnVar13) {
                    pvVar11 = *(void **)((int)local_8c[0] + -4);
                    pnVar13 = (nothrow_t *)(local_78 + 0x24);
                    if (0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar11))) goto LAB_0042c6c6;
                  }
                  operator_delete(pvVar11,pnVar13);
                }
                local_94 = 0;
                iVar12 = 0;
              }
            }
          }
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < in_stack_00000014);
    if (local_34 != 0) {
      std::basic_string<>::append((basic_string<> *)local_2c," ",1);
      ppppcVar9 = local_44;
      if (0xf < local_30) {
        ppppcVar9 = (char ****)local_44[0];
      }
      std::basic_string<>::append((basic_string<> *)local_2c,(char *)ppppcVar9,local_34);
    }
    if (local_1c != 0) {
      pbVar4 = *(basic_string<> **)(this + 0xb4);
      if (*(basic_string<> **)(this + 0xb8) == pbVar4) {
        std::vector<>::_Emplace_reallocate<>
                  (this_00,(basic_string<> *)pbVar4,(basic_string<> *)local_2c);
      }
      else {
        std::basic_string<>::basic_string<>(pbVar4,(basic_string<> *)local_2c);
        *(int *)(this + 0xb4) = *(int *)(this + 0xb4) + 0x18;
      }
      local_1c = 0;
      ppppuVar8 = local_2c;
      if (0xf < local_18) {
        ppppuVar8 = (undefined4 ****)local_2c[0];
      }
      *(undefined1 *)ppppuVar8 = 0;
    }
  }
  renderDocument(this);
  local_8._0_1_ = 4;
  if (0xf < local_30) {
    pnVar13 = (nothrow_t *)(local_30 + 1);
    ppppcVar9 = (char ****)local_44[0];
    if ((nothrow_t *)0xfff < pnVar13) {
      ppppcVar9 = (char ****)local_44[0][-1];
      pnVar13 = (nothrow_t *)(local_30 + 0x24);
      if ((char *)0x1f < (char *)((int)local_44[0] + (-4 - (int)ppppcVar9))) {
LAB_0042c6c6:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppcVar9,pnVar13);
  }
  local_8._0_1_ = 3;
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (char ***)((uint)local_44[0] & 0xffffff00);
  if (0xf < local_18) {
    pnVar13 = (nothrow_t *)(local_18 + 1);
    ppppuVar8 = (undefined4 ****)local_2c[0];
    if ((nothrow_t *)0xfff < pnVar13) {
      ppppuVar8 = (undefined4 ****)local_2c[0][-1];
      pnVar13 = (nothrow_t *)(local_18 + 0x24);
      if ((undefined1 *)0x1f < (undefined1 *)((int)local_2c[0] + (-4 - (int)ppppuVar8))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppuVar8,pnVar13);
  }
  local_8._0_1_ = 2;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  if (0xf < local_48) {
    pnVar13 = (nothrow_t *)(local_48 + 1);
    ppppcVar9 = (char ****)local_5c[0];
    if ((nothrow_t *)0xfff < pnVar13) {
      ppppcVar9 = (char ****)local_5c[0][-1];
      pnVar13 = (nothrow_t *)(local_48 + 0x24);
      if ((char *)0x1f < (char *)((int)local_5c[0] + (-4 - (int)ppppcVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppcVar9,pnVar13);
  }
  local_8._0_1_ = 1;
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (char ***)((uint)local_5c[0] & 0xffffff00);
  if (0xf < in_stack_00000018) {
    pnVar13 = (nothrow_t *)(in_stack_00000018 + 1);
    puVar7 = param_2;
    if ((nothrow_t *)0xfff < pnVar13) {
      puVar7 = (undefined4 *)param_2[-1];
      pnVar13 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)puVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(puVar7,pnVar13);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_2 = (undefined4 *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_00000030) {
    pnVar13 = (nothrow_t *)(in_stack_00000030 + 1);
    pbVar4 = in_stack_0000001c;
    if ((nothrow_t *)0xfff < pnVar13) {
      pbVar4 = *(basic_string<> **)(in_stack_0000001c + -4);
      pnVar13 = (nothrow_t *)(in_stack_00000030 + 0x24);
      if ((basic_string<> *)0x1f < in_stack_0000001c + (-4 - (int)pbVar4)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar4,pnVar13);
  }
  in_stack_0000002c = 0;
  in_stack_00000030 = 0xf;
  in_stack_0000001c = (basic_string<> *)((uint)in_stack_0000001c & 0xffffff00);
  local_8 = 9;
  if (in_stack_00000058 != (int *)0x0) {
    (**(code **)(*in_stack_00000058 + 0x10))();
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall TextEngine::finishShowingDocument(void)

void __thiscall TextEngine::finishShowingDocument(TextEngine *this)

{
  vector<> *pvVar1;
  undefined4 *puVar2;
  TextEngine *pTVar3;
  basic_string<> *pbVar4;
  basic_string<> *extraout_ECX;
  basic_string<> *extraout_ECX_00;
  vector<> *pvVar5;
  allocator<> *unaff_EDI;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b3cd0;
  local_10 = ExceptionList;
  pbVar4 = (basic_string<> *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  std::_Destroy_range<>((basic_string<> *)this,pbVar4,unaff_EDI);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(this + 0xb0);
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  std::basic_string<>::assign((basic_string<> *)(this + 0x98),"",0);
  puVar2 = *(undefined4 **)(this + 8);
  std::_Destroy_range<>(extraout_ECX,pbVar4,unaff_EDI);
  puVar2[1] = *puVar2;
  render(this);
  pvVar5 = *(vector<> **)(this + 8);
  pvVar1 = (vector<> *)(this + 0xc);
  if (pvVar5 != pvVar1) {
    std::vector<>::_Assign_range<>(pvVar5,*(undefined4 *)pvVar1,*(undefined4 *)(this + 0x10),this);
    pvVar5 = (vector<> *)extraout_ECX_00;
  }
  std::_Destroy_range<>((basic_string<> *)pvVar5,pbVar4,unaff_EDI);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)pvVar1;
  if (*(int **)(this + 0x14c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x14c) + 8))();
  }
  render(this);
  if (*(int **)(this + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x94) + 8))();
  }
  local_8 = 0;
  pTVar3 = *(TextEngine **)(this + 0x94);
  if (pTVar3 != (TextEngine *)0x0) {
    (**(code **)(*(int *)pTVar3 + 0x10))(pTVar3 != this + 0x70);
    *(undefined4 *)(this + 0x94) = 0;
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall TextEngine::renderDocument(void)

void __thiscall TextEngine::renderDocument(TextEngine *this)

{
  undefined4 *puVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  int iVar4;
  int iVar5;
  allocator<> *unaff_EDI;
  basic_string<> abStack_64 [12];
  undefined4 uStack_58;
  void *local_3c [5];
  uint local_28;
  uint local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b3cf8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = *(undefined4 **)(this + 8);
  std::_Destroy_range<>
            ((basic_string<> *)this,(basic_string<> *)(___security_cookie ^ (uint)&stack0xfffffffc),
             unaff_EDI);
  puVar1[1] = *puVar1;
  render(this);
  iVar5 = *(int *)(this + 0x68);
  iVar4 = *(int *)(this + 0x24) + -1;
  local_1c = (*(int *)(this + 0xb4) - *(int *)(this + 0xb0)) / 0x18;
  if ((uint)(iVar5 + iVar4) <= local_1c) {
    local_1c = iVar5 + iVar4;
  }
  local_14 = 0;
  local_18 = iVar5;
  if (iVar5 < (int)local_1c) {
    local_18 = iVar5 * 0x18;
    do {
      std::basic_string<>::basic_string<>
                ((basic_string<> *)local_3c,(basic_string<> *)(*(int *)(this + 0xb0) + local_18));
      local_8 = 0;
      std::basic_string<>::basic_string<>(abStack_64,(basic_string<> *)local_3c);
      addLineWithWrap(this,*(undefined4 *)(this + 0x20));
      local_8 = 0xffffffff;
      if (0xf < local_28) {
        pnVar3 = (nothrow_t *)(local_28 + 1);
        pvVar2 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar3) {
          pvVar2 = *(void **)((int)local_3c[0] + -4);
          pnVar3 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        uStack_58 = 0x42ca66;
        operator_delete(pvVar2,pnVar3);
      }
      iVar5 = iVar5 + 1;
      local_14 = local_14 + 1;
      local_18 = local_18 + 0x18;
    } while (iVar5 < (int)local_1c);
  }
  if ((local_14 < iVar4) && (iVar4 = iVar4 - local_14, 0 < iVar4)) {
    do {
      addBlankLine(this);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  renderDocumentFooter(this);
  render(this);
  ExceptionList = local_10;
  return;
}


// public: void __thiscall TextEngine::renderDocumentFooter(void)

void __thiscall TextEngine::renderDocumentFooter(TextEngine *this)

{
  word *pwVar1;
  word *pwVar2;
  char *pcVar3;
  char *pcVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  basic_string<> abStack_88 [4];
  undefined4 uStack_84;
  Color3B local_57 [3];
  void *local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 local_44;
  void *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint uStack_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  int local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &DAT_005b3d30;
  local_1c = ExceptionList;
  local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  pwVar2 = (word *)(this + 0x98);
  strUsingArgs((char *)&local_54);
  local_14 = 0;
  if (*(int *)(this + 0x24) - 1U < (uint)((*(int *)(this + 0xb4) - *(int *)(this + 0xb0)) / 0x18)) {
    if (0xf < *(uint *)(this + 0xa8)) {
      local_2c = 0;
      uStack_28 = 0xf;
      local_3c = (void *)((uint)local_3c & 0xffffff00);
      pwVar1 = pwVar2;
      if (0xf < *(uint *)(this + 0xac)) {
        pwVar1 = *(word **)pwVar2;
      }
      std::basic_string<>::assign((basic_string<> *)&local_3c,(char *)pwVar1,0xf);
      if (pwVar2 == (word *)&local_3c) {
        if (0xf < uStack_28) {
          pnVar6 = (nothrow_t *)(uStack_28 + 1);
          pvVar5 = local_3c;
          if ((nothrow_t *)0xfff < pnVar6) {
            pvVar5 = *(void **)((int)local_3c + -4);
            pnVar6 = (nothrow_t *)(uStack_28 + 0x24);
            if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar5,pnVar6);
        }
      }
      else {
        word::~word(pwVar2);
        *(void **)pwVar2 = local_3c;
        *(undefined4 *)(this + 0x9c) = uStack_38;
        *(undefined4 *)(this + 0xa0) = uStack_34;
        *(undefined4 *)(this + 0xa4) = uStack_30;
        *(ulonglong *)(this + 0xa8) = CONCAT44(uStack_28,local_2c);
      }
    }
    pwVar2 = (word *)strUsingArgs((char *)&local_3c);
    if ((word *)&local_54 != pwVar2) {
      word::~word((word *)&local_54);
      local_54 = *(void **)pwVar2;
      uStack_50 = *(undefined4 *)(pwVar2 + 4);
      uStack_4c = *(undefined4 *)(pwVar2 + 8);
      uStack_48 = *(undefined4 *)(pwVar2 + 0xc);
      local_44 = *(undefined8 *)(pwVar2 + 0x10);
      *(undefined4 *)(pwVar2 + 0x10) = 0;
      *(undefined4 *)(pwVar2 + 0x14) = 0xf;
      *pwVar2 = (word)0x0;
    }
    if (0xf < uStack_28) {
      pnVar6 = (nothrow_t *)(uStack_28 + 1);
      pvVar5 = local_3c;
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_3c + -4);
        pnVar6 = (nothrow_t *)(uStack_28 + 0x24);
        if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
    uStack_84 = 0x42ccb1;
    pcVar3 = (char *)strUsingArgs((char *)&local_3c);
    local_14._0_1_ = 1;
    pcVar4 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar4 = *(char **)pcVar3;
    }
    std::basic_string<>::append((basic_string<> *)&local_54,pcVar4,*(uint *)(pcVar3 + 0x10));
    local_14 = (uint)local_14._1_3_ << 8;
    if (0xf < uStack_28) {
      pnVar6 = (nothrow_t *)(uStack_28 + 1);
      pvVar5 = local_3c;
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_3c + -4);
        pnVar6 = (nothrow_t *)(uStack_28 + 0x24);
        if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
    std::basic_string<>::append((basic_string<> *)&local_54," `%[`$up`%/`$down`%] [`$ent`%]",0x1e);
  }
  cocos2d::Color3B::Color3B(local_57,'\0','\0',0x80);
  std::basic_string<>::basic_string<>(abStack_88,(basic_string<> *)&local_54);
  setBottomText(this);
  if (0xf < local_44._4_4_) {
    pnVar6 = (nothrow_t *)(local_44._4_4_ + 1);
    pvVar5 = local_54;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)local_54 + -4);
      pnVar6 = (nothrow_t *)(local_44._4_4_ + 0x24);
      if (0x1f < (uint)((int)local_54 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar5,pnVar6);
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// public: void __thiscall TextEngine::showList(class std::vector<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
// std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > > >,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::function<void __cdecl(int)>,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

void __thiscall
TextEngine::showList
          (TextEngine *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
          basic_string<> *param_6)

{
  vector<> *pvVar1;
  basic_string<> *pbVar2;
  basic_string<> *pbVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  void *pvVar7;
  basic_string<> *extraout_ECX;
  TextEngine *pTVar8;
  uint uVar9;
  nothrow_t *pnVar10;
  word *this_00;
  TextEngine *pTVar11;
  allocator<> *unaff_EDI;
  uint in_stack_00000024;
  uint in_stack_00000028;
  int *in_stack_00000050;
  basic_string<> *in_stack_00000054;
  uint in_stack_00000064;
  uint in_stack_00000068;
  basic_string<> abStack_74 [8];
  undefined4 uStack_6c;
  uint local_44;
  int local_40;
  void *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint uStack_28;
  basic_string<> *local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined1 local_14;
  undefined3 uStack_13;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_005b3d8c;
  local_1c = ExceptionList;
  pbVar2 = (basic_string<> *)(___security_cookie ^ (uint)&stack0xfffffff0);
  ExceptionList = &local_1c;
  local_14 = 3;
  uStack_13 = 0;
  local_24 = pbVar2;
  std::function<>::operator=((function<> *)(this + 0x100),(function<> *)&stack0x0000002c);
  pvVar1 = (vector<> *)(this + 0xdc);
  if (pvVar1 != (vector<> *)&param_2) {
    uStack_6c = 0x42ce26;
    std::vector<>::_Assign_range<>(pvVar1);
  }
  if ((basic_string<> *)(this + 0xe8) != (basic_string<> *)&param_6) {
    pbVar3 = (basic_string<> *)&param_6;
    if (0xf < in_stack_00000028) {
      pbVar3 = param_6;
    }
    std::basic_string<>::assign((basic_string<> *)(this + 0xe8),(char *)pbVar3,in_stack_00000024);
  }
  if (param_5 != -1) {
    *(int *)(this + 0xbc) = param_5;
  }
  *(undefined4 *)(this + 100) = 2;
  iVar5 = *(int *)(this + 0xe0) - *(int *)pvVar1 >> 0x1f;
  if ((*(int *)(this + 0xe0) - *(int *)pvVar1) / 0x18 + iVar5 == iVar5) {
    this[0xc0] = (TextEngine)0x1;
    if ((basic_string<> *)(this + 0xc4) != (basic_string<> *)&stack0x00000054) {
      pbVar3 = (basic_string<> *)&stack0x00000054;
      if (0xf < in_stack_00000068) {
        pbVar3 = in_stack_00000054;
      }
      std::basic_string<>::assign((basic_string<> *)(this + 0xc4),(char *)pbVar3,in_stack_00000064);
    }
  }
  else {
    this[0xc0] = (TextEngine)0x0;
  }
  uVar4 = *(int *)(this + 0x20) - 7;
  local_44 = 0;
  iVar5 = *(int *)(this + 0xe0) - *(int *)pvVar1 >> 0x1f;
  if ((*(int *)(this + 0xe0) - *(int *)pvVar1) / 0x18 + iVar5 != iVar5) {
    local_40 = 0;
    do {
      std::basic_string<>::basic_string<>(abStack_74,(basic_string<> *)(*(int *)pvVar1 + local_40));
      iVar5 = UIText::getRealWidthWithoutMacros();
      if ((int)uVar4 <= iVar5) {
        uStack_6c = 0x42cf0c;
        debugPrint("DETAIL","Cropping line from \'%s\'...");
        pcVar6 = (char *)(*(int *)pvVar1 + local_40);
        local_2c = 0;
        uStack_28 = 0xf;
        local_3c = (void *)((uint)local_3c & 0xffffff00);
        uVar9 = uVar4;
        if (*(uint *)(pcVar6 + 0x10) < uVar4) {
          uVar9 = *(uint *)(pcVar6 + 0x10);
        }
        if (0xf < *(uint *)(pcVar6 + 0x14)) {
          pcVar6 = *(char **)pcVar6;
        }
        std::basic_string<>::assign((basic_string<> *)&local_3c,pcVar6,uVar9);
        this_00 = (word *)(*(int *)pvVar1 + local_40);
        if (this_00 == (word *)&local_3c) {
          if (0xf < uStack_28) {
            pnVar10 = (nothrow_t *)(uStack_28 + 1);
            pvVar7 = local_3c;
            if ((nothrow_t *)0xfff < pnVar10) {
              pvVar7 = *(void **)((int)local_3c + -4);
              pnVar10 = (nothrow_t *)(uStack_28 + 0x24);
              if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar7))) goto LAB_0042d069;
            }
            operator_delete(pvVar7,pnVar10);
          }
        }
        else {
          word::~word(this_00);
          *(void **)this_00 = local_3c;
          *(undefined4 *)(this_00 + 4) = uStack_38;
          *(undefined4 *)(this_00 + 8) = uStack_34;
          *(undefined4 *)(this_00 + 0xc) = uStack_30;
          *(undefined4 *)(this_00 + 0x10) = local_2c;
          *(uint *)(this_00 + 0x14) = uStack_28;
        }
        std::basic_string<>::append((basic_string<> *)(*(int *)pvVar1 + local_40),"...",3);
        uStack_6c = 0x42cfcb;
        debugPrint("DETAIL","...to this: \'%s\'");
      }
      local_40 = local_40 + 0x18;
      local_44 = local_44 + 1;
    } while (local_44 < (uint)((*(int *)(this + 0xe0) - *(int *)pvVar1) / 0x18));
  }
  pTVar11 = *(TextEngine **)(this + 8);
  pTVar8 = this + 0xc;
  if (pTVar8 != pTVar11) {
    uStack_6c = 0x42d013;
    std::vector<>::_Assign_range<>();
    pTVar11 = *(TextEngine **)(this + 8);
    pTVar8 = (TextEngine *)extraout_ECX;
  }
  std::_Destroy_range<>((basic_string<> *)pTVar8,pbVar2,unaff_EDI);
  *(undefined4 *)(pTVar11 + 4) = *(undefined4 *)pTVar11;
  render(this);
  renderList(this);
  std::vector<>::_Tidy((vector<> *)&param_2);
  local_14 = 1;
  if (0xf < in_stack_00000028) {
    pnVar10 = (nothrow_t *)(in_stack_00000028 + 1);
    pbVar2 = param_6;
    if ((nothrow_t *)0xfff < pnVar10) {
      pbVar2 = *(basic_string<> **)(param_6 + -4);
      pnVar10 = (nothrow_t *)(in_stack_00000028 + 0x24);
      if ((basic_string<> *)0x1f < param_6 + (-4 - (int)pbVar2)) {
LAB_0042d069:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar2,pnVar10);
  }
  in_stack_00000024 = 0;
  in_stack_00000028 = 0xf;
  param_6 = (basic_string<> *)((uint)param_6 & 0xffffff00);
  _local_14 = CONCAT31(uStack_13,4);
  if (in_stack_00000050 != (int *)0x0) {
    (**(code **)(*in_stack_00000050 + 0x10))();
    in_stack_00000050 = (int *)0x0;
  }
  if (0xf < in_stack_00000068) {
    pnVar10 = (nothrow_t *)(in_stack_00000068 + 1);
    pbVar2 = in_stack_00000054;
    if ((nothrow_t *)0xfff < pnVar10) {
      pbVar2 = *(basic_string<> **)(in_stack_00000054 + -4);
      pnVar10 = (nothrow_t *)(in_stack_00000068 + 0x24);
      if ((basic_string<> *)0x1f < in_stack_00000054 + (-4 - (int)pbVar2)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar2,pnVar10);
  }
  ExceptionList = local_1c;
  __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// public: void __thiscall TextEngine::renderList(void)

void __thiscall TextEngine::renderList(TextEngine *this)

{
  uint uVar1;
  TextEngine TVar2;
  TextEngine *this_00;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  basic_string<> abStack_60 [8];
  undefined4 uStack_58;
  undefined4 local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b3dc8;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_00 = (TextEngine *)(*(int *)(this + 0xe0) - *(int *)(this + 0xdc));
  uVar7 = 0;
  uVar5 = *(int *)(this + 0x24) - 1;
  if (uVar5 < (uint)((int)this_00 / 0x18)) {
    this_00 = *(TextEngine **)(this + 0xbc);
    uVar1 = uVar5;
    while ((int)uVar1 <= (int)this_00) {
      uVar1 = uVar7 + uVar5 * 2;
      uVar7 = uVar7 + uVar5;
    }
  }
  iVar6 = uVar5 + uVar7;
  TVar2 = (TextEngine)0x0;
  local_30 = iVar6;
  if (this[0xc0] != (TextEngine)0x0) {
    addLinef(this_00,(char *)this);
    TVar2 = this[0xc0];
  }
  if ((int)uVar7 < (int)(iVar6 - (uint)(TVar2 != (TextEngine)0x0))) {
    do {
      if (uVar7 < (uint)((*(int *)(this + 0xe0) - *(int *)(this + 0xdc)) / 0x18)) {
        uStack_58 = 0x42d21d;
        addLinef((TextEngine *)" ",(char *)this);
      }
      else {
        addBlankLine(this);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)(local_30 - (uint)(this[0xc0] != (TextEngine)0x0)));
  }
  strUsingArgs((char *)local_2c);
  local_8 = 0;
  cocos2d::Color3B::Color3B((Color3B *)((int)&local_30 + 1),0x80,'\0',0x80);
  std::basic_string<>::basic_string<>(abStack_60,(basic_string<> *)local_2c);
  setBottomText(this);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pnVar4 = (nothrow_t *)(local_18 + 1);
    pvVar3 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)local_2c[0] + -4);
      pnVar4 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  render(this);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall TextEngine::finishShowingList(bool)

void __thiscall TextEngine::finishShowingList(TextEngine *this,bool param_1)

{
  vector<> *pvVar1;
  undefined4 *puVar2;
  basic_string<> *pbVar3;
  basic_string<> *extraout_ECX;
  vector<> *pvVar4;
  allocator<> *unaff_EDI;
  undefined3 in_stack_00000005;
  TextEngine *pTVar5;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b2730;
  local_10 = ExceptionList;
  pbVar3 = (basic_string<> *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  pTVar5 = this;
  std::_Destroy_range<>((basic_string<> *)this,pbVar3,unaff_EDI);
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(this + 0xdc);
  puVar2 = *(undefined4 **)(this + 8);
  std::_Destroy_range<>((basic_string<> *)pTVar5,pbVar3,unaff_EDI);
  puVar2[1] = *puVar2;
  render(this);
  pvVar4 = *(vector<> **)(this + 8);
  pvVar1 = (vector<> *)(this + 0xc);
  if (pvVar4 != pvVar1) {
    std::vector<>::_Assign_range<>
              (pvVar4,*(undefined4 *)pvVar1,*(undefined4 *)(this + 0x10),_param_1);
    pvVar4 = (vector<> *)extraout_ECX;
  }
  std::_Destroy_range<>((basic_string<> *)pvVar4,pbVar3,unaff_EDI);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)pvVar1;
  *(undefined4 *)(this + 100) = 0;
  if (this[0xc0] != (TextEngine)0x0) {
    *(undefined4 *)(this + 0xbc) = 0xffffffff;
  }
  if (param_1 != false) {
    _param_1 = *(undefined4 *)(this + 0xbc);
    if (*(int **)(this + 0x124) == (int *)0x0) {
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
    (**(code **)(**(int **)(this + 0x124) + 8))(&param_1);
    local_8 = 0;
    pTVar5 = *(TextEngine **)(this + 0x124);
    if (pTVar5 != (TextEngine *)0x0) {
      (**(code **)(*(int *)pTVar5 + 0x10))(pTVar5 != this + 0x100);
      *(undefined4 *)(this + 0x124) = 0;
    }
    local_8 = 0xffffffff;
  }
  *(undefined4 *)(this + 0xbc) = 0;
  std::basic_string<>::assign((basic_string<> *)(this + 0xe8),"",0);
  if (*(int **)(this + 0x14c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x14c) + 8))();
  }
  render(this);
  ExceptionList = local_10;
  return;
}


// public: void __thiscall TextEngine::render(void)

void __thiscall TextEngine::render(TextEngine *this)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uStack_34;
  undefined2 local_30;
  TextEngine local_2e;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  
  iVar5 = 0x50;
  iVar6 = *(int *)this;
  puVar4 = (undefined1 *)(iVar6 + 0x43c);
  do {
    iVar3 = 0x32;
    puVar2 = puVar4;
    do {
      puVar2[28000] = 0x20;
      *puVar2 = 0x20;
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + 0x230;
    } while (iVar3 != 0);
    puVar4 = puVar4 + 7;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(undefined1 *)(iVar6 + 0x428) = 1;
  iStack_20 = *(int *)(this + 0x24) + -1;
  if (this[0x28] == (TextEngine)0x0) {
    iStack_20 = *(int *)(this + 0x24);
  }
  iVar6 = iStack_20 + -1;
  if (this[0x29] == (TextEngine)0x0) {
    iVar6 = iStack_20;
  }
  if (this[0x28] != (TextEngine)0x0) {
    std::basic_string<>::basic_string<>
              ((basic_string<> *)&uStack_34,(basic_string<> *)(this + 0x2c));
    TextField::setText(*(TextField **)this,extraout_ECX,0);
    iStack_20 = extraout_ECX_00;
  }
  iStack_24 = *(int *)(this + 0x20) + -1;
  local_30 = *(undefined2 *)(this + 0x5c);
  iStack_28 = 0;
  local_2e = this[0x5e];
  uStack_34 = 0x42d500;
  TextField::paintBackground(*(TextField **)this);
  if (this[0x29] != (TextEngine)0x0) {
    std::basic_string<>::basic_string<>
              ((basic_string<> *)&uStack_34,(basic_string<> *)(this + 0x44));
    TextField::setText(*(TextField **)this,extraout_ECX_01,iVar6);
  }
  iStack_24 = *(int *)(this + 0x20) + -1;
  local_30 = *(undefined2 *)(this + 0x5f);
  local_2e = this[0x61];
  uStack_34 = 0x42d53d;
  iStack_28 = iVar6;
  TextField::paintBackground(*(TextField **)this);
  uVar8 = 0;
  if (0 < iVar6) {
    do {
      iVar5 = **(int **)(this + 8);
      uVar1 = ((*(int **)(this + 8))[1] - iVar5) / 0x18;
      if (uVar8 < uVar1) {
        uVar7 = uVar8 + 1;
        if (this[0x29] == (TextEngine)0x0) {
          uVar7 = uVar8;
        }
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)&uStack_34,
                   (basic_string<> *)(iVar5 + ((uVar1 - uVar8) + -1) * 0x18));
        TextField::setText(*(TextField **)this,extraout_ECX_02,iVar6 - uVar7);
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar6);
  }
  iStack_20 = 0x42d5a3;
  TextField::update(*(TextField **)this);
  return;
}


// public: bool __thiscall TextEngine::lineIsNull(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __thiscall TextEngine::lineIsNull(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  bool bVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  bVar3 = true;
  if ((in_stack_00000014 != 0) && (uVar2 = 0, in_stack_00000014 != 0)) {
    do {
      puVar1 = &param_2;
      if (0xf < in_stack_00000018) {
        puVar1 = param_2;
      }
      if (*(char *)((int)puVar1 + uVar2) != ' ') {
        puVar1 = &param_2;
        if (0xf < in_stack_00000018) {
          puVar1 = param_2;
        }
        if (*(char *)((int)puVar1 + uVar2) != '`') {
LAB_0042d60c:
          bVar3 = false;
          break;
        }
        if (uVar2 != in_stack_00000014 - 1) {
          uVar2 = uVar2 + 1;
          puVar1 = &param_2;
          if (0xf < in_stack_00000018) {
            puVar1 = param_2;
          }
          if (*(char *)((int)puVar1 + uVar2) == '`') goto LAB_0042d60c;
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < in_stack_00000014);
  }
  if (0xf < in_stack_00000018) {
    pnVar4 = (nothrow_t *)(in_stack_00000018 + 1);
    puVar1 = param_2;
    if ((nothrow_t *)0xfff < pnVar4) {
      puVar1 = (undefined4 *)param_2[-1];
      pnVar4 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)puVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(puVar1,pnVar4);
  }
  return bVar3;
}


// public: bool __thiscall TextEngine::lineEndsWithSpace(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __thiscall TextEngine::lineEndsWithSpace(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  if (in_stack_00000014 == 0) {
    bVar5 = true;
  }
  else {
    cVar3 = '\0';
    uVar2 = 0;
    if (in_stack_00000014 != 0) {
      do {
        puVar1 = &param_2;
        if (0xf < in_stack_00000018) {
          puVar1 = param_2;
        }
        if (*(char *)((int)puVar1 + uVar2) == ' ') {
          cVar3 = ' ';
        }
        else {
          puVar1 = &param_2;
          if (0xf < in_stack_00000018) {
            puVar1 = param_2;
          }
          if (*(char *)((int)puVar1 + uVar2) == '`') {
            if (uVar2 != in_stack_00000014 - 1) {
              uVar2 = uVar2 + 1;
              puVar1 = &param_2;
              if (0xf < in_stack_00000018) {
                puVar1 = param_2;
              }
              if (*(char *)((int)puVar1 + uVar2) == '`') goto LAB_0042d6ad;
              cVar3 = '`';
            }
          }
          else {
LAB_0042d6ad:
            puVar1 = &param_2;
            if (0xf < in_stack_00000018) {
              puVar1 = param_2;
            }
            cVar3 = *(char *)((int)puVar1 + uVar2);
          }
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < in_stack_00000014);
    }
    bVar5 = cVar3 == ' ';
  }
  if (0xf < in_stack_00000018) {
    pnVar4 = (nothrow_t *)(in_stack_00000018 + 1);
    puVar1 = param_2;
    if ((nothrow_t *)0xfff < pnVar4) {
      puVar1 = (undefined4 *)param_2[-1];
      pnVar4 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)puVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(puVar1,pnVar4);
  }
  return bVar5;
}


// public: void __thiscall TextEngine::addLineWithWrap(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,int)

void __thiscall TextEngine::addLineWithWrap(TextEngine *this,uint param_2,undefined4 *param_3)

{
  vector<> *pvVar1;
  void *pvVar2;
  int iVar3;
  undefined1 uVar4;
  bool bVar5;
  basic_string<> *pbVar6;
  basic_string<> *pbVar7;
  undefined4 ****ppppuVar8;
  char ****ppppcVar9;
  undefined4 *puVar10;
  void *pvVar11;
  uint uVar12;
  nothrow_t *pnVar13;
  uint uVar14;
  basic_string<> *pbVar15;
  basic_string<> *unaff_EDI;
  int iVar16;
  int *piVar17;
  bool bVar18;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  basic_string<> abStack_a8 [12];
  undefined4 uStack_9c;
  int local_70;
  int local_68;
  char local_62;
  undefined4 ***local_60 [4];
  uint local_50;
  uint local_4c;
  undefined4 ***local_48 [4];
  int local_38;
  uint local_34;
  char ***local_30 [4];
  uint local_20;
  uint local_1c;
  basic_string<> *local_18;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005b3e30;
  local_10 = ExceptionList;
  pbVar6 = (basic_string<> *)(___security_cookie ^ (uint)&stack0xfffffffc);
  local_18 = pbVar6;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_7 = 0;
  if (param_2 < in_stack_00000018) {
    local_20 = 0;
    local_1c = 0xf;
    local_30[0] = (char ***)((uint)local_30[0] & 0xffffff00);
    local_38 = 0;
    local_34 = 0xf;
    local_48[0] = (undefined4 ***)((uint)local_48[0] & 0xffffff00);
    iVar16 = 0;
    local_8 = 2;
    uStack_7 = 0;
    local_70 = 0;
    uVar14 = 0;
    local_68 = 0;
    bVar18 = false;
    if (in_stack_00000018 != 0) {
      do {
        iVar3 = local_68;
        puVar10 = &param_3;
        if (0xf < in_stack_0000001c) {
          puVar10 = param_3;
        }
        if (*(char *)((int)puVar10 + uVar14) == ' ') {
          if (bVar18) {
            std::basic_string<>::basic_string<>(abStack_a8,(basic_string<> *)local_48);
            bVar5 = lineIsNull();
            if (bVar5) {
              std::basic_string<>::basic_string<>(abStack_a8,(basic_string<> *)local_30);
              bVar5 = lineIsNull();
              if (bVar5) goto LAB_0042dc2e;
            }
          }
          if ((int)param_2 < local_68 + 1 + iVar16) {
            pbVar7 = (basic_string<> *)
                     std::basic_string<>::basic_string<>
                               ((basic_string<> *)local_60,(basic_string<> *)local_48);
            local_8 = 3;
            std::vector<>::push_back(*(vector<> **)(this + 8),pbVar7);
            local_8 = 2;
            uVar4 = local_8;
            local_8 = 2;
            if (0xf < local_4c) {
              pnVar13 = (nothrow_t *)(local_4c + 1);
              ppppuVar8 = (undefined4 ****)local_60[0];
              if ((nothrow_t *)0xfff < pnVar13) {
                ppppuVar8 = (undefined4 ****)local_60[0][-1];
                pnVar13 = (nothrow_t *)(local_4c + 0x24);
                if (0x1f < (uint)((int)local_60[0] + (-4 - (int)ppppuVar8))) goto LAB_0042dc94;
              }
              uStack_9c = 0x42d82f;
              operator_delete(ppppuVar8,pnVar13);
            }
            uVar12 = local_20;
            ppppuVar8 = local_48;
            if (0xf < local_34) {
              ppppuVar8 = (undefined4 ****)local_48[0];
            }
            bVar18 = 0xf < local_1c;
            local_38 = 0;
            *(undefined1 *)ppppuVar8 = 0;
            ppppcVar9 = local_30;
            if (bVar18) {
              ppppcVar9 = (char ****)local_30[0];
            }
            uStack_9c = 0x42d85e;
            std::basic_string<>::append((basic_string<> *)local_48,(char *)ppppcVar9,uVar12);
            local_20 = 0;
            ppppcVar9 = local_30;
            if (0xf < local_1c) {
              ppppcVar9 = (char ****)local_30[0];
            }
            local_70 = local_68;
            local_68 = 0;
            bVar18 = true;
            *(char *)ppppcVar9 = '\0';
            iVar16 = iVar3;
          }
          else {
            bVar18 = false;
            std::basic_string<>::basic_string<>(abStack_a8,(basic_string<> *)local_48);
            bVar5 = lineEndsWithSpace();
            if (!bVar5) {
              std::basic_string<>::basic_string<>
                        ((basic_string<> *)local_60,(basic_string<> *)local_30);
              uVar4 = local_8;
              if (local_50 == 0) {
                if (0xf < local_4c) {
                  pnVar13 = (nothrow_t *)(local_4c + 1);
                  ppppuVar8 = (undefined4 ****)local_60[0];
                  if ((nothrow_t *)0xfff < pnVar13) {
                    ppppuVar8 = (undefined4 ****)local_60[0][-1];
                    pnVar13 = (nothrow_t *)(local_4c + 0x24);
                    if (0x1f < (uint)((int)local_60[0] + (-4 - (int)ppppuVar8))) goto LAB_0042dc94;
                  }
                  uStack_9c = 0x42d8f1;
                  operator_delete(ppppuVar8,pnVar13);
                }
              }
              else {
                uVar12 = 0;
                local_62 = '\0';
                if (local_50 != 0) {
                  do {
                    ppppuVar8 = local_60;
                    if (0xf < local_4c) {
                      ppppuVar8 = (undefined4 ****)local_60[0];
                    }
                    if (*(char *)((int)ppppuVar8 + uVar12) == ' ') {
                      local_62 = ' ';
                      break;
                    }
                    ppppuVar8 = local_60;
                    if (0xf < local_4c) {
                      ppppuVar8 = (undefined4 ****)local_60[0];
                    }
                    if (*(char *)((int)ppppuVar8 + uVar12) != '`') {
LAB_0042d952:
                      ppppuVar8 = local_60;
                      if (0xf < local_4c) {
                        ppppuVar8 = (undefined4 ****)local_60[0];
                      }
                      local_62 = *(char *)((int)ppppuVar8 + uVar12);
                      break;
                    }
                    if (uVar12 != local_50 - 1) {
                      uVar12 = uVar12 + 1;
                      ppppuVar8 = local_60;
                      if (0xf < local_4c) {
                        ppppuVar8 = (undefined4 ****)local_60[0];
                      }
                      if (*(char *)((int)ppppuVar8 + uVar12) == '`') goto LAB_0042d952;
                      local_62 = '`';
                      break;
                    }
                    uVar12 = uVar12 + 1;
                  } while (uVar12 < local_50);
                }
                if (0xf < local_4c) {
                  pnVar13 = (nothrow_t *)(local_4c + 1);
                  ppppuVar8 = (undefined4 ****)local_60[0];
                  if ((nothrow_t *)0xfff < pnVar13) {
                    ppppuVar8 = (undefined4 ****)local_60[0][-1];
                    pnVar13 = (nothrow_t *)(local_4c + 0x24);
                    if (0x1f < (uint)((int)local_60[0] + (-4 - (int)ppppuVar8))) goto LAB_0042dc94;
                  }
                  uStack_9c = 0x42d992;
                  operator_delete(ppppuVar8,pnVar13);
                }
                iVar16 = local_70;
                if (local_62 != ' ') {
                  std::basic_string<>::push_back((basic_string<> *)local_48,' ');
                  iVar16 = local_70 + 1;
                }
              }
            }
            ppppcVar9 = local_30;
            if (0xf < local_1c) {
              ppppcVar9 = (char ****)local_30[0];
            }
            uStack_9c = 0x42d9c5;
            std::basic_string<>::append((basic_string<> *)local_48,(char *)ppppcVar9,local_20);
            std::basic_string<>::push_back((basic_string<> *)local_48,' ');
            local_20 = 0;
            iVar16 = iVar16 + local_68 + 1;
            local_68 = 0;
            ppppcVar9 = local_30;
            if (0xf < local_1c) {
              ppppcVar9 = (char ****)local_30[0];
            }
            *(char *)ppppcVar9 = '\0';
            local_70 = iVar16;
          }
        }
        else {
          puVar10 = &param_3;
          if (0xf < in_stack_0000001c) {
            puVar10 = param_3;
          }
          if (*(char *)((int)puVar10 + uVar14) == '`') {
            uVar12 = uVar14 + 1;
            if (in_stack_00000018 <= uVar12) break;
            puVar10 = &param_3;
            if (0xf < in_stack_0000001c) {
              puVar10 = param_3;
            }
            std::basic_string<>::push_back
                      ((basic_string<> *)local_30,*(char *)((int)puVar10 + uVar14));
            puVar10 = &param_3;
            if (0xf < in_stack_0000001c) {
              puVar10 = param_3;
            }
            std::basic_string<>::push_back
                      ((basic_string<> *)local_30,*(char *)((int)puVar10 + uVar12));
            uVar14 = uVar12;
          }
          else {
            puVar10 = &param_3;
            if (0xf < in_stack_0000001c) {
              puVar10 = param_3;
            }
            if (*(char *)((int)puVar10 + uVar14) == '\n') {
              bVar18 = false;
              if (local_20 == 0) {
                local_50 = 0;
                local_4c = 0xf;
                local_60[0] = (undefined4 ***)((uint)local_60[0] & 0xffffff00);
                uStack_9c = 0x42dbba;
                std::basic_string<>::assign((basic_string<> *)local_60,"",0);
                local_8 = 6;
                std::vector<>::push_back(*(vector<> **)(this + 8),(basic_string<> *)local_60);
                local_8 = 2;
                if (0xf < local_4c) {
                  pnVar13 = (nothrow_t *)(local_4c + 1);
                  ppppuVar8 = (undefined4 ****)local_60[0];
                  if ((nothrow_t *)0xfff < pnVar13) {
                    ppppuVar8 = (undefined4 ****)local_60[0][-1];
                    pnVar13 = (nothrow_t *)(local_4c + 0x24);
                    uVar4 = local_8;
                    if (0x1f < (uint)((int)local_60[0] + (-4 - (int)ppppuVar8))) goto LAB_0042dc94;
                  }
                  uStack_9c = 0x42dc02;
                  operator_delete(ppppuVar8,pnVar13);
                }
              }
              else {
                if ((int)param_2 < local_68 + 1 + iVar16) {
                  pbVar7 = (basic_string<> *)
                           std::basic_string<>::basic_string<>
                                     ((basic_string<> *)local_60,(basic_string<> *)local_48);
                  local_8 = 4;
                  std::vector<>::push_back(*(vector<> **)(this + 8),pbVar7);
                  local_8 = 2;
                  if (0xf < local_4c) {
                    pnVar13 = (nothrow_t *)(local_4c + 1);
                    ppppuVar8 = (undefined4 ****)local_60[0];
                    if ((nothrow_t *)0xfff < pnVar13) {
                      ppppuVar8 = (undefined4 ****)local_60[0][-1];
                      pnVar13 = (nothrow_t *)(local_4c + 0x24);
                      uVar4 = local_8;
                      if (0x1f < (uint)((int)local_60[0] + (-4 - (int)ppppuVar8)))
                      goto LAB_0042dc94;
                    }
                    uStack_9c = 0x42dad3;
                    operator_delete(ppppuVar8,pnVar13);
                  }
                  pvVar1 = *(vector<> **)(this + 8);
                  pbVar7 = *(basic_string<> **)(pvVar1 + 4);
                  if (*(basic_string<> **)(pvVar1 + 8) == pbVar7) {
                    uStack_9c = 0x42dafa;
                    std::vector<>::_Emplace_reallocate<>
                              (pvVar1,(basic_string<> *)pbVar7,(basic_string<> *)local_30);
                  }
                  else {
                    std::basic_string<>::basic_string<>(pbVar7,(basic_string<> *)local_30);
                    *(int *)(pvVar1 + 4) = *(int *)(pvVar1 + 4) + 0x18;
                  }
                }
                else {
                  ppppcVar9 = local_30;
                  if (0xf < local_1c) {
                    ppppcVar9 = (char ****)local_30[0];
                  }
                  uStack_9c = 0x42db13;
                  std::basic_string<>::append((basic_string<> *)local_48,(char *)ppppcVar9,local_20)
                  ;
                  pbVar7 = (basic_string<> *)
                           std::basic_string<>::basic_string<>
                                     ((basic_string<> *)local_60,(basic_string<> *)local_48);
                  local_8 = 5;
                  std::vector<>::push_back(*(vector<> **)(this + 8),pbVar7);
                  local_8 = 2;
                  if (0xf < local_4c) {
                    pnVar13 = (nothrow_t *)(local_4c + 1);
                    ppppuVar8 = (undefined4 ****)local_60[0];
                    if ((nothrow_t *)0xfff < pnVar13) {
                      ppppuVar8 = (undefined4 ****)local_60[0][-1];
                      pnVar13 = (nothrow_t *)(local_4c + 0x24);
                      uVar4 = local_8;
                      if (0x1f < (uint)((int)local_60[0] + (-4 - (int)ppppuVar8)))
                      goto LAB_0042dc94;
                    }
                    uStack_9c = 0x42db64;
                    operator_delete(ppppuVar8,pnVar13);
                  }
                }
                local_38 = 0;
                ppppuVar8 = local_48;
                if (0xf < local_34) {
                  ppppuVar8 = (undefined4 ****)local_48[0];
                }
                iVar16 = 0;
                bVar5 = 0xf < local_1c;
                local_20 = 0;
                local_70 = 0;
                *(undefined1 *)ppppuVar8 = 0;
                ppppcVar9 = local_30;
                if (bVar5) {
                  ppppcVar9 = (char ****)local_30[0];
                }
                local_68 = 0;
                *(char *)ppppcVar9 = '\0';
              }
            }
            else {
              bVar18 = false;
              puVar10 = &param_3;
              if (0xf < in_stack_0000001c) {
                puVar10 = param_3;
              }
              std::basic_string<>::push_back
                        ((basic_string<> *)local_30,*(char *)((int)puVar10 + uVar14));
              local_68 = local_68 + 1;
            }
          }
        }
LAB_0042dc2e:
        uVar14 = uVar14 + 1;
      } while (uVar14 < in_stack_00000018);
      if (local_20 != 0) {
        if ((int)param_2 < local_68 + iVar16) {
          pbVar7 = (basic_string<> *)
                   std::basic_string<>::basic_string<>
                             ((basic_string<> *)local_60,(basic_string<> *)local_48);
          local_8 = 7;
          std::vector<>::push_back(*(vector<> **)(this + 8),pbVar7);
          local_8 = 2;
          if (0xf < local_4c) {
            pnVar13 = (nothrow_t *)(local_4c + 1);
            ppppuVar8 = (undefined4 ****)local_60[0];
            if ((nothrow_t *)0xfff < pnVar13) {
              ppppuVar8 = (undefined4 ****)local_60[0][-1];
              pnVar13 = (nothrow_t *)(local_4c + 0x24);
              uVar4 = local_8;
              if (0x1f < (uint)((int)local_60[0] + (-4 - (int)ppppuVar8))) {
LAB_0042dc94:
                local_8 = uVar4;
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            uStack_9c = 0x42dca1;
            operator_delete(ppppuVar8,pnVar13);
          }
          ppppcVar9 = local_30;
          if (0xf < local_1c) {
            ppppcVar9 = (char ****)local_30[0];
          }
          uStack_9c = 0x42dcbb;
          std::basic_string<>::assign((basic_string<> *)local_48,(char *)ppppcVar9,local_20);
        }
        else {
          ppppcVar9 = local_30;
          if (0xf < local_1c) {
            ppppcVar9 = (char ****)local_30[0];
          }
          uStack_9c = 0x42dcd4;
          std::basic_string<>::append((basic_string<> *)local_48,(char *)ppppcVar9,local_20);
        }
      }
      if (local_38 != 0) {
        pvVar1 = *(vector<> **)(this + 8);
        pbVar7 = *(basic_string<> **)(pvVar1 + 4);
        if (*(basic_string<> **)(pvVar1 + 8) == pbVar7) {
          uStack_9c = 0x42dd01;
          std::vector<>::_Emplace_reallocate<>
                    (pvVar1,(basic_string<> *)pbVar7,(basic_string<> *)local_48);
        }
        else {
          std::basic_string<>::basic_string<>(pbVar7,(basic_string<> *)local_48);
          *(int *)(pvVar1 + 4) = *(int *)(pvVar1 + 4) + 0x18;
        }
      }
      if (0xf < local_34) {
        pnVar13 = (nothrow_t *)(local_34 + 1);
        ppppuVar8 = (undefined4 ****)local_48[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          ppppuVar8 = (undefined4 ****)local_48[0][-1];
          pnVar13 = (nothrow_t *)(local_34 + 0x24);
          if ((undefined1 *)0x1f < (undefined1 *)((int)local_48[0] + (-4 - (int)ppppuVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        uStack_9c = 0x42dd34;
        operator_delete(ppppuVar8,pnVar13);
      }
    }
    local_38 = 0;
    local_34 = 0xf;
    local_48[0] = (undefined4 ***)((uint)local_48[0] & 0xffffff00);
    if (0xf < local_1c) {
      pnVar13 = (nothrow_t *)(local_1c + 1);
      ppppcVar9 = (char ****)local_30[0];
      if ((nothrow_t *)0xfff < pnVar13) {
        ppppcVar9 = (char ****)local_30[0][-1];
        pnVar13 = (nothrow_t *)(local_1c + 0x24);
        if ((char *)0x1f < (char *)((int)local_30[0] + (-4 - (int)ppppcVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      uStack_9c = 0x42dd7c;
      operator_delete(ppppcVar9,pnVar13);
    }
  }
  else {
    pvVar1 = *(vector<> **)(this + 8);
    pbVar7 = *(basic_string<> **)(pvVar1 + 4);
    if (*(basic_string<> **)(pvVar1 + 8) == pbVar7) {
      uStack_9c = 0x42de71;
      std::vector<>::_Emplace_reallocate<>
                (pvVar1,(basic_string<> *)pbVar7,(basic_string<> *)&param_3);
    }
    else {
      std::basic_string<>::basic_string<>(pbVar7,(basic_string<> *)&param_3);
      *(int *)(pvVar1 + 4) = *(int *)(pvVar1 + 4) + 0x18;
    }
  }
  piVar17 = *(int **)(this + 8);
  pbVar15 = (basic_string<> *)*piVar17;
  if (*(uint *)(this + 0x1c) < (uint)((piVar17[1] - (int)pbVar15) / 0x18)) {
    do {
      std::_Move_unchecked<>(pbVar15,pbVar6,unaff_EDI);
      iVar16 = piVar17[1];
      uVar14 = *(uint *)(iVar16 + -4);
      if (0xf < uVar14) {
        pvVar2 = *(void **)(iVar16 + -0x18);
        pnVar13 = (nothrow_t *)(uVar14 + 1);
        pvVar11 = pvVar2;
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar11 = *(void **)((int)pvVar2 + -4);
          pnVar13 = (nothrow_t *)(uVar14 + 0x24);
          uVar4 = local_8;
          if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar11))) goto LAB_0042dc94;
        }
        uStack_9c = 0x42dde5;
        operator_delete(pvVar11,pnVar13);
      }
      *(undefined4 *)(iVar16 + -8) = 0;
      *(undefined4 *)(iVar16 + -4) = 0xf;
      *(undefined1 *)(iVar16 + -0x18) = 0;
      piVar17[1] = piVar17[1] + -0x18;
      piVar17 = *(int **)(this + 8);
      pbVar15 = (basic_string<> *)*piVar17;
    } while (*(uint *)(this + 0x1c) < (uint)((piVar17[1] - (int)pbVar15) / 0x18));
  }
  if (0xf < in_stack_0000001c) {
    pnVar13 = (nothrow_t *)(in_stack_0000001c + 1);
    puVar10 = param_3;
    if ((nothrow_t *)0xfff < pnVar13) {
      puVar10 = (undefined4 *)param_3[-1];
      pnVar13 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)puVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_9c = 0x42de7d;
    operator_delete(puVar10,pnVar13);
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall TextEngine::addBlankLine(void)

void __thiscall TextEngine::addBlankLine(TextEngine *this)

{
  vector<> *this_00;
  basic_string<> *pbVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  void *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint uStack_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_005b3e68;
  local_1c = ExceptionList;
  local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_2c = 0;
  uStack_28 = 0xf;
  local_3c = (void *)((uint)local_3c & 0xffffff00);
  local_14 = 0;
  this_00 = *(vector<> **)(this + 8);
  pbVar1 = *(basic_string<> **)(this_00 + 4);
  if (*(basic_string<> **)(this_00 + 8) == pbVar1) {
    std::vector<>::_Emplace_reallocate<>(this_00,pbVar1,(basic_string<> *)&local_3c);
    if (0xf < uStack_28) {
      pnVar3 = (nothrow_t *)(uStack_28 + 1);
      pvVar2 = local_3c;
      if ((nothrow_t *)0xfff < pnVar3) {
        pvVar2 = *(void **)((int)local_3c + -4);
        pnVar3 = (nothrow_t *)(uStack_28 + 0x24);
        if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar2,pnVar3);
    }
  }
  else {
    *(void **)pbVar1 = local_3c;
    *(undefined4 *)(pbVar1 + 4) = uStack_38;
    *(undefined4 *)(pbVar1 + 8) = uStack_34;
    *(undefined4 *)(pbVar1 + 0xc) = uStack_30;
    *(undefined8 *)(pbVar1 + 0x10) = 0xf00000000;
    *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 0x18;
    puStack_20 = &stack0xfffffffc;
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// public: void __thiscall TextEngine::addLine(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __thiscall TextEngine::addLine(TextEngine *this,void *param_2)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  uint in_stack_00000018;
  basic_string<> abStack_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2dc8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  std::basic_string<>::basic_string<>(abStack_34,(basic_string<> *)&param_2);
  addLineWithWrap(this,*(undefined4 *)(this + 0x20));
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
    uStack_28 = 0x42dff8;
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return;
}


// WARNING: Function: __alloca_probe replaced with injection: alloca_probe
// public: void __cdecl TextEngine::addLinef(char const *,...)

void __thiscall TextEngine::addLinef(TextEngine *this,char *param_1,...)

{
  char cVar1;
  char *pcVar2;
  char *unaff_ESI;
  char *in_stack_00000008;
  basic_string<> local_402c [12];
  undefined4 uStack_4020;
  va_list in_stack_ffffbff0;
  char local_400c [16388];
  uint local_8;
  
  local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  uStack_4020 = 0x42e03a;
  _vsnprintf(in_stack_00000008,(size_t)&stack0x0000000c,unaff_ESI,in_stack_ffffbff0);
  pcVar2 = local_400c;
  local_402c[0] = (basic_string<>)0x0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  std::basic_string<>::assign(local_402c,local_400c,(int)pcVar2 - (int)(local_400c + 1));
  addLine((TextEngine *)param_1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall TextEngine::setBottomText(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,struct cocos2d::Color3B)

void __thiscall TextEngine::setBottomText(TextEngine *this,basic_string<> *param_2)

{
  bool bVar1;
  char *pcVar2;
  basic_string<> *pbVar3;
  nothrow_t *pnVar4;
  uint uVar5;
  basic_string<> *pbVar6;
  basic_string<> *pbVar7;
  uint unaff_EDI;
  uint in_stack_00000014;
  uint in_stack_00000018;
  undefined2 uStack0000001c;
  TextEngine TStack0000001e;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  uVar5 = in_stack_00000018;
  pbVar6 = param_2;
  puStack_c = &DAT_005b3e98;
  local_10 = ExceptionList;
  pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined2 *)(this + 0x5f) = uStack0000001c;
  this[0x61] = TStack0000001e;
  bVar1 = std::_Traits_equal<>("",0,pcVar2,unaff_EDI);
  pbVar7 = (basic_string<> *)(this + 0x44);
  if (bVar1) {
    std::basic_string<>::assign(pbVar7,"",0);
    this[0x29] = (TextEngine)0x0;
    uVar5 = in_stack_00000018;
    pbVar6 = param_2;
  }
  else {
    if (pbVar7 != (basic_string<> *)&param_2) {
      pbVar3 = (basic_string<> *)&param_2;
      if (0xf < uVar5) {
        pbVar3 = pbVar6;
      }
      std::basic_string<>::assign(pbVar7,(char *)pbVar3,in_stack_00000014);
      uVar5 = in_stack_00000018;
      pbVar6 = param_2;
    }
    this[0x29] = (TextEngine)0x1;
  }
  if (0xf < uVar5) {
    pnVar4 = (nothrow_t *)(uVar5 + 1);
    pbVar7 = pbVar6;
    if ((nothrow_t *)0xfff < pnVar4) {
      pbVar7 = *(basic_string<> **)(pbVar6 + -4);
      pnVar4 = (nothrow_t *)(uVar5 + 0x24);
      if ((basic_string<> *)0x1f < pbVar6 + (-4 - (int)pbVar7)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar7,pnVar4);
  }
  ExceptionList = local_10;
  return;
}
