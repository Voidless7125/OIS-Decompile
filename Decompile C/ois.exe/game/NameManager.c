#include "../ois.exe.h"


// public: void __thiscall NameManager::loadNames(void)

void __thiscall NameManager::loadNames(NameManager *this)

{
  basic_string<> *pbVar1;
  bool bVar2;
  char *pcVar3;
  vector<> *pvVar4;
  int iVar5;
  NameManager *pNVar6;
  NameManager *pNVar7;
  basic_string<> *pbVar8;
  uint unaff_EDI;
  int iVar9;
  basic_string<> local_5c [12];
  undefined4 uStack_50;
  vector<> local_30 [12];
  int local_24;
  int local_20;
  undefined4 local_1c;
  NameManager *local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005bd408;
  local_10 = ExceptionList;
  pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_5c[0] = (basic_string<>)0x0;
  local_18 = this;
  std::basic_string<>::assign(local_5c,"freighter_names.txt",0x13);
  loadLinesFromFile();
  local_8 = 0;
  local_14 = 0;
  iVar5 = local_20 - local_24 >> 0x1f;
  if ((local_20 - local_24) / 0x18 + iVar5 != iVar5) {
    iVar9 = 0;
    iVar5 = local_24;
    do {
      if (*(int *)(iVar9 + 0x10 + iVar5) != 0) {
        pbVar1 = *(basic_string<> **)(this + 4);
        if (*(basic_string<> **)(this + 8) == pbVar1) {
          uStack_50 = 0x4a4d27;
          std::vector<>::_Emplace_reallocate<>
                    ((vector<> *)this,(basic_string<> *)pbVar1,(basic_string<> *)(iVar9 + iVar5));
          iVar5 = local_24;
        }
        else {
          std::basic_string<>::basic_string<>(pbVar1,(basic_string<> *)(iVar9 + iVar5));
          *(int *)(this + 4) = *(int *)(this + 4) + 0x18;
          iVar5 = local_24;
        }
      }
      local_14 = local_14 + 1;
      iVar9 = iVar9 + 0x18;
    } while (local_14 < (uint)((local_20 - iVar5) / 0x18));
  }
  local_5c[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_5c,"pirate_names.txt",0x10);
  pvVar4 = (vector<> *)loadLinesFromFile();
  if ((vector<> *)&local_24 != pvVar4) {
    std::vector<>::_Tidy((vector<> *)&local_24);
    local_24 = *(int *)pvVar4;
    local_20 = *(int *)(pvVar4 + 4);
    local_1c = *(undefined4 *)(pvVar4 + 8);
    *(undefined4 *)pvVar4 = 0;
    *(undefined4 *)(pvVar4 + 4) = 0;
    *(undefined4 *)(pvVar4 + 8) = 0;
  }
  std::vector<>::_Tidy(local_30);
  local_14 = 0;
  iVar5 = local_20 - local_24 >> 0x1f;
  if ((local_20 - local_24) / 0x18 + iVar5 != iVar5) {
    iVar9 = 0;
    iVar5 = local_24;
    do {
      if (*(int *)(iVar9 + 0x10 + iVar5) != 0) {
        pbVar1 = *(basic_string<> **)(this + 0x1c);
        if (*(basic_string<> **)(this + 0x20) == pbVar1) {
          uStack_50 = 0x4a4dfc;
          std::vector<>::_Emplace_reallocate<>
                    ((vector<> *)(this + 0x18),(basic_string<> *)pbVar1,
                     (basic_string<> *)(iVar9 + iVar5));
          iVar5 = local_24;
        }
        else {
          std::basic_string<>::basic_string<>(pbVar1,(basic_string<> *)(iVar9 + iVar5));
          *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 0x18;
          iVar5 = local_24;
        }
      }
      local_14 = local_14 + 1;
      iVar9 = iVar9 + 0x18;
    } while (local_14 < (uint)((local_20 - iVar5) / 0x18));
  }
  local_5c[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_5c,"police_names.txt",0x10);
  pvVar4 = (vector<> *)loadLinesFromFile();
  if ((vector<> *)&local_24 != pvVar4) {
    std::vector<>::_Tidy((vector<> *)&local_24);
    local_24 = *(int *)pvVar4;
    local_20 = *(int *)(pvVar4 + 4);
    local_1c = *(undefined4 *)(pvVar4 + 8);
    *(undefined4 *)pvVar4 = 0;
    *(undefined4 *)(pvVar4 + 4) = 0;
    *(undefined4 *)(pvVar4 + 8) = 0;
  }
  std::vector<>::_Tidy(local_30);
  local_14 = 0;
  iVar5 = local_20 - local_24 >> 0x1f;
  pNVar6 = this;
  if ((local_20 - local_24) / 0x18 + iVar5 != iVar5) {
    iVar5 = 0;
    do {
      pbVar1 = *(basic_string<> **)(this + 0x34);
      if (*(basic_string<> **)(this + 0x38) == pbVar1) {
        uStack_50 = 0x4a4ed1;
        std::vector<>::_Emplace_reallocate<>
                  ((vector<> *)(this + 0x30),(basic_string<> *)pbVar1,
                   (basic_string<> *)(iVar5 + local_24));
      }
      else {
        std::basic_string<>::basic_string<>(pbVar1,(basic_string<> *)(iVar5 + local_24));
        *(int *)(this + 0x34) = *(int *)(this + 0x34) + 0x18;
      }
      iVar5 = iVar5 + 0x18;
      local_14 = local_14 + 1;
      pNVar6 = local_18;
    } while (local_14 < (uint)((local_20 - local_24) / 0x18));
  }
  local_5c[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_5c,"military_names.txt",0x12);
  pvVar4 = (vector<> *)loadLinesFromFile();
  if ((vector<> *)&local_24 != pvVar4) {
    std::vector<>::_Tidy((vector<> *)&local_24);
    local_24 = *(int *)pvVar4;
    local_20 = *(int *)(pvVar4 + 4);
    local_1c = *(undefined4 *)(pvVar4 + 8);
    *(undefined4 *)pvVar4 = 0;
    *(undefined4 *)(pvVar4 + 4) = 0;
    *(undefined4 *)(pvVar4 + 8) = 0;
  }
  std::vector<>::_Tidy(local_30);
  local_14 = 0;
  iVar5 = local_20 - local_24 >> 0x1f;
  pNVar7 = pNVar6;
  if ((local_20 - local_24) / 0x18 + iVar5 != iVar5) {
    iVar5 = 0;
    do {
      pbVar1 = *(basic_string<> **)(pNVar6 + 0x4c);
      if (*(basic_string<> **)(pNVar6 + 0x50) == pbVar1) {
        uStack_50 = 0x4a4fa6;
        std::vector<>::_Emplace_reallocate<>
                  ((vector<> *)(pNVar6 + 0x48),(basic_string<> *)pbVar1,
                   (basic_string<> *)(local_24 + iVar5));
      }
      else {
        std::basic_string<>::basic_string<>(pbVar1,(basic_string<> *)(local_24 + iVar5));
        *(int *)(pNVar6 + 0x4c) = *(int *)(pNVar6 + 0x4c) + 0x18;
      }
      iVar5 = iVar5 + 0x18;
      local_14 = local_14 + 1;
      pNVar7 = local_18;
    } while (local_14 < (uint)((local_20 - local_24) / 0x18));
  }
  local_5c[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_5c,"buyable_names.txt",0x11);
  pvVar4 = (vector<> *)loadLinesFromFile();
  if ((vector<> *)&local_24 != pvVar4) {
    std::vector<>::_Tidy((vector<> *)&local_24);
    local_24 = *(int *)pvVar4;
    local_20 = *(int *)(pvVar4 + 4);
    local_1c = *(undefined4 *)(pvVar4 + 8);
    *(undefined4 *)pvVar4 = 0;
    *(undefined4 *)(pvVar4 + 4) = 0;
    *(undefined4 *)(pvVar4 + 8) = 0;
  }
  std::vector<>::_Tidy(local_30);
  local_14 = 0;
  iVar5 = local_20 - local_24 >> 0x1f;
  if ((local_20 - local_24) / 0x18 + iVar5 != iVar5) {
    local_18 = (NameManager *)0x0;
    iVar5 = local_24;
    do {
      pbVar8 = (basic_string<> *)(local_18 + iVar5);
      uStack_50 = 0x4a507b;
      bVar2 = std::_Traits_equal<>("",0,pcVar3,unaff_EDI);
      if (!bVar2) {
        pbVar1 = *(basic_string<> **)(pNVar7 + 0x7c);
        if (*(basic_string<> **)(pNVar7 + 0x80) == pbVar1) {
          uStack_50 = 0x4a50a4;
          std::vector<>::_Emplace_reallocate<>
                    ((vector<> *)(pNVar7 + 0x78),(basic_string<> *)pbVar1,pbVar8);
          iVar5 = local_24;
        }
        else {
          std::basic_string<>::basic_string<>(pbVar1,pbVar8);
          *(int *)(pNVar7 + 0x7c) = *(int *)(pNVar7 + 0x7c) + 0x18;
          iVar5 = local_24;
        }
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + 0x18;
    } while (local_14 < (uint)((local_20 - iVar5) / 0x18));
  }
  std::vector<>::_Tidy((vector<> *)&local_24);
  ExceptionList = local_10;
  return;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// __thiscall NameManager::generateFreighterName(void)

void __thiscall NameManager::generateFreighterName(NameManager *this)

{
  int iVar1;
  int iVar2;
  basic_string<> *this_00;
  bool bVar3;
  char ***pppcVar4;
  bool bVar5;
  char *pcVar6;
  int iVar7;
  char ****ppppcVar8;
  nothrow_t *pnVar9;
  uint uVar10;
  uint unaff_EDI;
  uint uVar11;
  word *in_stack_00000004;
  char ***local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint local_30;
  uint uStack_2c;
  char *local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_005bd449;
  local_1c = ExceptionList;
  pcVar6 = (char *)(___security_cookie ^ (uint)&stack0xfffffff0);
  ExceptionList = &local_1c;
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  bVar3 = false;
  *in_stack_00000004 = (word)0x0;
  local_14 = 0;
  local_24 = pcVar6;
  do {
    iVar1 = *(int *)(this + 4);
    iVar2 = *(int *)this;
    iVar7 = rand();
    uVar10 = iVar7 % ((iVar1 - iVar2) / 0x18);
    if (((int)uVar10 < 0) || ((uint)((*(int *)(this + 4) - *(int *)this) / 0x18) <= uVar10)) {
      local_30 = 0;
      uStack_2c = 0xf;
      local_40 = (char ***)((uint)local_40 & 0xffffff00);
      std::basic_string<>::assign((basic_string<> *)&local_40,"ERROR",5);
    }
    else {
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&local_40,(basic_string<> *)(*(int *)this + uVar10 * 0x18));
    }
    if (in_stack_00000004 == (word *)&local_40) {
      if (0xf < uStack_2c) {
        pnVar9 = (nothrow_t *)(uStack_2c + 1);
        ppppcVar8 = (char ****)local_40;
        if ((nothrow_t *)0xfff < pnVar9) {
          ppppcVar8 = (char ****)local_40[-1];
          pnVar9 = (nothrow_t *)(uStack_2c + 0x24);
          if ((char *)0x1f < (char *)((int)local_40 + (-4 - (int)ppppcVar8))) goto LAB_004a5338;
        }
        operator_delete(ppppcVar8,pnVar9);
      }
    }
    else {
      word::~word(in_stack_00000004);
      *(char ****)in_stack_00000004 = local_40;
      *(undefined4 *)(in_stack_00000004 + 4) = uStack_3c;
      *(undefined4 *)(in_stack_00000004 + 8) = uStack_38;
      *(undefined4 *)(in_stack_00000004 + 0xc) = uStack_34;
      *(uint *)(in_stack_00000004 + 0x10) = local_30;
      *(uint *)(in_stack_00000004 + 0x14) = uStack_2c;
    }
    std::basic_string<>::basic_string<>
              ((basic_string<> *)&local_40,(basic_string<> *)in_stack_00000004);
    pppcVar4 = local_40;
    uVar11 = 0;
    uVar10 = (*(int *)(this + 0x10) - *(int *)(this + 0xc)) / 0x18;
    if (uVar10 != 0) {
      do {
        ppppcVar8 = &local_40;
        if (0xf < uStack_2c) {
          ppppcVar8 = (char ****)pppcVar4;
        }
        bVar5 = std::_Traits_equal<>((char *)ppppcVar8,local_30,pcVar6,unaff_EDI);
        if (bVar5) {
          if (uStack_2c < 0x10) goto LAB_004a5326;
          pnVar9 = (nothrow_t *)(uStack_2c + 1);
          ppppcVar8 = (char ****)pppcVar4;
          if ((nothrow_t *)0xfff < pnVar9) {
            ppppcVar8 = (char ****)pppcVar4[-1];
            pnVar9 = (nothrow_t *)(uStack_2c + 0x24);
            if ((char *)0x1f < (char *)((int)pppcVar4 + (-4 - (int)ppppcVar8))) goto LAB_004a5338;
          }
          operator_delete(ppppcVar8,pnVar9);
          goto LAB_004a5326;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar10);
    }
    if (0xf < uStack_2c) {
      pnVar9 = (nothrow_t *)(uStack_2c + 1);
      ppppcVar8 = (char ****)pppcVar4;
      if ((nothrow_t *)0xfff < pnVar9) {
        ppppcVar8 = (char ****)pppcVar4[-1];
        pnVar9 = (nothrow_t *)(uStack_2c + 0x24);
        if ((char *)0x1f < (char *)((int)pppcVar4 + (-4 - (int)ppppcVar8))) {
LAB_004a5338:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(ppppcVar8,pnVar9);
    }
    bVar3 = true;
LAB_004a5326:
    if (bVar3) {
      this_00 = *(basic_string<> **)(this + 0x10);
      if (*(basic_string<> **)(this + 0x14) == this_00) {
        std::vector<>::_Emplace_reallocate<>
                  ((vector<> *)(this + 0xc),(basic_string<> *)this_00,
                   (basic_string<> *)in_stack_00000004);
      }
      else {
        std::basic_string<>::basic_string<>(this_00,(basic_string<> *)in_stack_00000004);
        *(int *)(this + 0x10) = *(int *)(this + 0x10) + 0x18;
      }
      ExceptionList = local_1c;
      __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
      return;
    }
  } while( true );
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// __thiscall NameManager::generatePirateName(void)

void __thiscall NameManager::generatePirateName(NameManager *this)

{
  int iVar1;
  int iVar2;
  basic_string<> *this_00;
  char ***pppcVar3;
  bool bVar4;
  bool bVar5;
  char *pcVar6;
  int iVar7;
  char ****ppppcVar8;
  nothrow_t *pnVar9;
  uint uVar10;
  uint unaff_EDI;
  uint uVar11;
  word *in_stack_00000004;
  int local_40;
  char ***local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint local_1c;
  uint uStack_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bd489;
  local_10 = ExceptionList;
  pcVar6 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  bVar5 = false;
  local_40 = 0;
  *in_stack_00000004 = (word)0x0;
  local_8 = 0;
  local_14 = pcVar6;
  do {
    if (99 < local_40) break;
    iVar1 = *(int *)(this + 0x1c);
    iVar2 = *(int *)(this + 0x18);
    iVar7 = rand();
    uVar10 = iVar7 % ((iVar1 - iVar2) / 0x18);
    if (((int)uVar10 < 0) ||
       ((uint)((*(int *)(this + 0x1c) - *(int *)(this + 0x18)) / 0x18) <= uVar10)) {
      local_1c = 0;
      uStack_18 = 0xf;
      local_2c = (char ***)((uint)local_2c & 0xffffff00);
      std::basic_string<>::assign((basic_string<> *)&local_2c,"ERROR",5);
    }
    else {
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&local_2c,
                 (basic_string<> *)(*(int *)(this + 0x18) + uVar10 * 0x18));
    }
    if (in_stack_00000004 == (word *)&local_2c) {
      if (0xf < uStack_18) {
        pnVar9 = (nothrow_t *)(uStack_18 + 1);
        ppppcVar8 = (char ****)local_2c;
        if ((nothrow_t *)0xfff < pnVar9) {
          ppppcVar8 = (char ****)local_2c[-1];
          pnVar9 = (nothrow_t *)(uStack_18 + 0x24);
          if ((char *)0x1f < (char *)((int)local_2c + (-4 - (int)ppppcVar8))) goto LAB_004a55cd;
        }
        operator_delete(ppppcVar8,pnVar9);
      }
    }
    else {
      word::~word(in_stack_00000004);
      *(char ****)in_stack_00000004 = local_2c;
      *(undefined4 *)(in_stack_00000004 + 4) = uStack_28;
      *(undefined4 *)(in_stack_00000004 + 8) = uStack_24;
      *(undefined4 *)(in_stack_00000004 + 0xc) = uStack_20;
      *(uint *)(in_stack_00000004 + 0x10) = local_1c;
      *(uint *)(in_stack_00000004 + 0x14) = uStack_18;
    }
    std::basic_string<>::basic_string<>
              ((basic_string<> *)&local_2c,(basic_string<> *)in_stack_00000004);
    pppcVar3 = local_2c;
    uVar11 = 0;
    uVar10 = (*(int *)(this + 0x28) - *(int *)(this + 0x24)) / 0x18;
    if (uVar10 != 0) {
      do {
        ppppcVar8 = &local_2c;
        if (0xf < uStack_18) {
          ppppcVar8 = (char ****)pppcVar3;
        }
        bVar4 = std::_Traits_equal<>((char *)ppppcVar8,local_1c,pcVar6,unaff_EDI);
        if (bVar4) {
          if (uStack_18 < 0x10) goto LAB_004a5581;
          pnVar9 = (nothrow_t *)(uStack_18 + 1);
          ppppcVar8 = (char ****)pppcVar3;
          if ((nothrow_t *)0xfff < pnVar9) {
            ppppcVar8 = (char ****)pppcVar3[-1];
            pnVar9 = (nothrow_t *)(uStack_18 + 0x24);
            if ((char *)0x1f < (char *)((int)pppcVar3 + (-4 - (int)ppppcVar8))) goto LAB_004a55cd;
          }
          operator_delete(ppppcVar8,pnVar9);
          goto LAB_004a5581;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar10);
    }
    if (0xf < uStack_18) {
      pnVar9 = (nothrow_t *)(uStack_18 + 1);
      ppppcVar8 = (char ****)pppcVar3;
      if ((nothrow_t *)0xfff < pnVar9) {
        ppppcVar8 = (char ****)pppcVar3[-1];
        pnVar9 = (nothrow_t *)(uStack_18 + 0x24);
        if ((char *)0x1f < (char *)((int)pppcVar3 + (-4 - (int)ppppcVar8))) {
LAB_004a55cd:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(ppppcVar8,pnVar9);
    }
    bVar5 = true;
LAB_004a5581:
    local_40 = local_40 + 1;
  } while (!bVar5);
  bVar5 = std::_Traits_equal<>("",0,pcVar6,unaff_EDI);
  if (!bVar5) {
    this_00 = *(basic_string<> **)(this + 0x28);
    if (*(basic_string<> **)(this + 0x2c) == this_00) {
      std::vector<>::_Emplace_reallocate<>
                ((vector<> *)(this + 0x24),(basic_string<> *)this_00,
                 (basic_string<> *)in_stack_00000004);
    }
    else {
      std::basic_string<>::basic_string<>(this_00,(basic_string<> *)in_stack_00000004);
      *(int *)(this + 0x28) = *(int *)(this + 0x28) + 0x18;
    }
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// __thiscall NameManager::generatePoliceName(void)

void __thiscall NameManager::generatePoliceName(NameManager *this)

{
  int iVar1;
  int iVar2;
  basic_string<> *this_00;
  bool bVar3;
  char ***pppcVar4;
  bool bVar5;
  char *pcVar6;
  int iVar7;
  char ****ppppcVar8;
  nothrow_t *pnVar9;
  uint uVar10;
  uint unaff_EDI;
  uint uVar11;
  word *in_stack_00000004;
  char ***local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint local_30;
  uint uStack_2c;
  char *local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_005bd449;
  local_1c = ExceptionList;
  pcVar6 = (char *)(___security_cookie ^ (uint)&stack0xfffffff0);
  ExceptionList = &local_1c;
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  bVar3 = false;
  *in_stack_00000004 = (word)0x0;
  local_14 = 0;
  local_24 = pcVar6;
  do {
    iVar1 = *(int *)(this + 0x34);
    iVar2 = *(int *)(this + 0x30);
    iVar7 = rand();
    uVar10 = iVar7 % ((iVar1 - iVar2) / 0x18);
    if (((int)uVar10 < 0) ||
       ((uint)((*(int *)(this + 0x34) - *(int *)(this + 0x30)) / 0x18) <= uVar10)) {
      local_30 = 0;
      uStack_2c = 0xf;
      local_40 = (char ***)((uint)local_40 & 0xffffff00);
      std::basic_string<>::assign((basic_string<> *)&local_40,"ERROR",5);
    }
    else {
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&local_40,
                 (basic_string<> *)(*(int *)(this + 0x30) + uVar10 * 0x18));
    }
    if (in_stack_00000004 == (word *)&local_40) {
      if (0xf < uStack_2c) {
        pnVar9 = (nothrow_t *)(uStack_2c + 1);
        ppppcVar8 = (char ****)local_40;
        if ((nothrow_t *)0xfff < pnVar9) {
          ppppcVar8 = (char ****)local_40[-1];
          pnVar9 = (nothrow_t *)(uStack_2c + 0x24);
          if ((char *)0x1f < (char *)((int)local_40 + (-4 - (int)ppppcVar8))) goto LAB_004a588b;
        }
        operator_delete(ppppcVar8,pnVar9);
      }
    }
    else {
      word::~word(in_stack_00000004);
      *(char ****)in_stack_00000004 = local_40;
      *(undefined4 *)(in_stack_00000004 + 4) = uStack_3c;
      *(undefined4 *)(in_stack_00000004 + 8) = uStack_38;
      *(undefined4 *)(in_stack_00000004 + 0xc) = uStack_34;
      *(uint *)(in_stack_00000004 + 0x10) = local_30;
      *(uint *)(in_stack_00000004 + 0x14) = uStack_2c;
    }
    std::basic_string<>::basic_string<>
              ((basic_string<> *)&local_40,(basic_string<> *)in_stack_00000004);
    pppcVar4 = local_40;
    uVar11 = 0;
    uVar10 = (*(int *)(this + 0x10) - *(int *)(this + 0xc)) / 0x18;
    if (uVar10 != 0) {
      do {
        ppppcVar8 = &local_40;
        if (0xf < uStack_2c) {
          ppppcVar8 = (char ****)pppcVar4;
        }
        bVar5 = std::_Traits_equal<>((char *)ppppcVar8,local_30,pcVar6,unaff_EDI);
        if (bVar5) {
          if (uStack_2c < 0x10) goto LAB_004a5879;
          pnVar9 = (nothrow_t *)(uStack_2c + 1);
          ppppcVar8 = (char ****)pppcVar4;
          if ((nothrow_t *)0xfff < pnVar9) {
            ppppcVar8 = (char ****)pppcVar4[-1];
            pnVar9 = (nothrow_t *)(uStack_2c + 0x24);
            if ((char *)0x1f < (char *)((int)pppcVar4 + (-4 - (int)ppppcVar8))) goto LAB_004a588b;
          }
          operator_delete(ppppcVar8,pnVar9);
          goto LAB_004a5879;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar10);
    }
    if (0xf < uStack_2c) {
      pnVar9 = (nothrow_t *)(uStack_2c + 1);
      ppppcVar8 = (char ****)pppcVar4;
      if ((nothrow_t *)0xfff < pnVar9) {
        ppppcVar8 = (char ****)pppcVar4[-1];
        pnVar9 = (nothrow_t *)(uStack_2c + 0x24);
        if ((char *)0x1f < (char *)((int)pppcVar4 + (-4 - (int)ppppcVar8))) {
LAB_004a588b:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(ppppcVar8,pnVar9);
    }
    bVar3 = true;
LAB_004a5879:
    if (bVar3) {
      this_00 = *(basic_string<> **)(this + 0x40);
      if (*(basic_string<> **)(this + 0x44) == this_00) {
        std::vector<>::_Emplace_reallocate<>
                  ((vector<> *)(this + 0x3c),(basic_string<> *)this_00,
                   (basic_string<> *)in_stack_00000004);
      }
      else {
        std::basic_string<>::basic_string<>(this_00,(basic_string<> *)in_stack_00000004);
        *(int *)(this + 0x40) = *(int *)(this + 0x40) + 0x18;
      }
      ExceptionList = local_1c;
      __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
      return;
    }
  } while( true );
}


// WARNING: Removing unreachable block (ram,0x004a5af3)
// WARNING: Removing unreachable block (ram,0x004a5b17)
// WARNING: Removing unreachable block (ram,0x004a5b20)
// WARNING: Removing unreachable block (ram,0x004a5b2b)
// WARNING: Removing unreachable block (ram,0x004a5b6c)
// WARNING: Removing unreachable block (ram,0x004a5b8d)
// WARNING: Removing unreachable block (ram,0x004a5b8f)
// WARNING: Removing unreachable block (ram,0x004a5ba7)
// WARNING: Removing unreachable block (ram,0x004a5bb5)
// WARNING: Removing unreachable block (ram,0x004a5bc9)
// WARNING: Removing unreachable block (ram,0x004a5b2f)
// WARNING: Removing unreachable block (ram,0x004a5b46)
// WARNING: Removing unreachable block (ram,0x004a5b37)
// WARNING: Removing unreachable block (ram,0x004a5b55)
// WARNING: Removing unreachable block (ram,0x004a5b63)
// WARNING: Removing unreachable block (ram,0x004a5b67)
// WARNING: Removing unreachable block (ram,0x004a5bd3)
// WARNING: Removing unreachable block (ram,0x004a5be7)
// WARNING: Removing unreachable block (ram,0x004a5bed)
// WARNING: Removing unreachable block (ram,0x004a5c01)
// WARNING: Removing unreachable block (ram,0x004a5bf5)
// WARNING: Removing unreachable block (ram,0x004a5c10)
// WARNING: Removing unreachable block (ram,0x004a5c3e)
// WARNING: Removing unreachable block (ram,0x004a5c4c)
// WARNING: Removing unreachable block (ram,0x004a5c5c)
// WARNING: Removing unreachable block (ram,0x004a5c62)
// WARNING: Removing unreachable block (ram,0x004a5c6c)
// WARNING: Removing unreachable block (ram,0x004a5c92)
// WARNING: Removing unreachable block (ram,0x004a5ca4)
// WARNING: Removing unreachable block (ram,0x004a5cb8)
// WARNING: Removing unreachable block (ram,0x004a5bdc)
// public: class std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > __thiscall
// NameManager::loadLinesFromFile(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >)

void __thiscall NameManager::loadLinesFromFile(undefined4 param_1,undefined4 *param_2,void *param_3)

{
  char cVar1;
  bool bVar2;
  FileUtils *pFVar3;
  char ****ppppcVar4;
  char ****ppppcVar5;
  void *pvVar6;
  nothrow_t *pnVar7;
  uint in_stack_0000001c;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  void *local_60 [4];
  undefined4 local_50;
  uint local_4c;
  char ***local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bd4e0;
  local_10 = ExceptionList;
  local_18 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff48,(basic_string<> *)&param_3)
  ;
  OSInterface::getLocationForAsset();
  local_8._0_1_ = 1;
  local_50 = 0;
  ppppcVar5 = local_48;
  if (0xf < local_34) {
    ppppcVar5 = (char ****)local_48[0];
  }
  local_4c = 0xf;
  local_60[0] = (void *)((uint)local_60[0] & 0xffffff00);
  ppppcVar4 = ppppcVar5;
  do {
    cVar1 = *(char *)ppppcVar4;
    ppppcVar4 = (char ****)((int)ppppcVar4 + 1);
  } while (cVar1 != '\0');
  std::basic_string<>::assign
            ((basic_string<> *)local_60,(char *)ppppcVar5,(int)ppppcVar4 - (int)((int)ppppcVar5 + 1)
            );
  local_8._0_1_ = 2;
  pFVar3 = cocos2d::FileUtils::getInstance();
  (**(code **)(*(int *)pFVar3 + 0x1c))();
  local_8._0_1_ = 1;
  if (0xf < local_4c) {
    pnVar7 = (nothrow_t *)(local_4c + 1);
    pvVar6 = local_60[0];
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)local_60[0] + -4);
      pnVar7 = (nothrow_t *)(local_4c + 0x24);
      if (0x1f < (uint)((int)local_60[0] + (-4 - (int)pvVar6))) {
        local_8._0_1_ = 1;
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar6,pnVar7);
  }
  local_50 = 0;
  local_4c = 0xf;
  local_60[0] = (void *)((uint)local_60[0] & 0xffffff00);
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_8._0_1_ = 3;
  bVar2 = cc_assert_script_compatible("Error loading files.");
  if (!bVar2) {
    cocos2d::log("Assert failed: %s");
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  std::vector<>::_Tidy((vector<> *)&local_84);
  if (0xf < local_34) {
    pnVar7 = (nothrow_t *)(local_34 + 1);
    ppppcVar5 = (char ****)local_48[0];
    if ((nothrow_t *)0xfff < pnVar7) {
      ppppcVar5 = (char ****)local_48[0][-1];
      pnVar7 = (nothrow_t *)(local_34 + 0x24);
      if ((char *)0x1f < (char *)((int)local_48[0] + (-4 - (int)ppppcVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppcVar5,pnVar7);
  }
  local_38 = 0;
  local_34 = 0xf;
  local_48[0] = (char ***)((uint)local_48[0] & 0xffffff00);
  if (0xf < in_stack_0000001c) {
    pnVar7 = (nothrow_t *)(in_stack_0000001c + 1);
    pvVar6 = param_3;
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)param_3 + -4);
      pnVar7 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar6,pnVar7);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// __thiscall NameManager::generateBuyableName(void)

void __thiscall NameManager::generateBuyableName(NameManager *this)

{
  int iVar1;
  int iVar2;
  basic_string<> *this_00;
  bool bVar3;
  char ***pppcVar4;
  bool bVar5;
  char *pcVar6;
  int iVar7;
  char ****ppppcVar8;
  int iVar9;
  nothrow_t *pnVar10;
  uint uVar11;
  uint unaff_EDI;
  uint uVar12;
  word *in_stack_00000004;
  char ***local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint local_30;
  uint uStack_2c;
  char *local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_005bd529;
  local_1c = ExceptionList;
  pcVar6 = (char *)(___security_cookie ^ (uint)&stack0xfffffff0);
  ExceptionList = &local_1c;
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  bVar3 = false;
  *in_stack_00000004 = (word)0x0;
  local_14 = 0;
  iVar9 = 0;
  local_24 = pcVar6;
  do {
    iVar1 = *(int *)(this + 0x7c);
    iVar2 = *(int *)(this + 0x78);
    iVar7 = rand();
    uVar11 = iVar7 % ((iVar1 - iVar2) / 0x18);
    if (((int)uVar11 < 0) ||
       ((uint)((*(int *)(this + 0x7c) - *(int *)(this + 0x78)) / 0x18) <= uVar11)) {
      local_30 = 0;
      uStack_2c = 0xf;
      local_40 = (char ***)((uint)local_40 & 0xffffff00);
      std::basic_string<>::assign((basic_string<> *)&local_40,"ERROR",5);
    }
    else {
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&local_40,
                 (basic_string<> *)(*(int *)(this + 0x78) + uVar11 * 0x18));
    }
    if (in_stack_00000004 == (word *)&local_40) {
      if (0xf < uStack_2c) {
        pnVar10 = (nothrow_t *)(uStack_2c + 1);
        ppppcVar8 = (char ****)local_40;
        if ((nothrow_t *)0xfff < pnVar10) {
          ppppcVar8 = (char ****)local_40[-1];
          pnVar10 = (nothrow_t *)(uStack_2c + 0x24);
          if ((char *)0x1f < (char *)((int)local_40 + (-4 - (int)ppppcVar8))) goto LAB_004a5f61;
        }
        operator_delete(ppppcVar8,pnVar10);
      }
    }
    else {
      word::~word(in_stack_00000004);
      *(char ****)in_stack_00000004 = local_40;
      *(undefined4 *)(in_stack_00000004 + 4) = uStack_3c;
      *(undefined4 *)(in_stack_00000004 + 8) = uStack_38;
      *(undefined4 *)(in_stack_00000004 + 0xc) = uStack_34;
      *(uint *)(in_stack_00000004 + 0x10) = local_30;
      *(uint *)(in_stack_00000004 + 0x14) = uStack_2c;
    }
    if (iVar9 < 100) {
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&local_40,(basic_string<> *)in_stack_00000004);
      pppcVar4 = local_40;
      uVar12 = 0;
      uVar11 = (*(int *)(this + 0x88) - *(int *)(this + 0x84)) / 0x18;
      if (uVar11 != 0) {
        do {
          ppppcVar8 = &local_40;
          if (0xf < uStack_2c) {
            ppppcVar8 = (char ****)pppcVar4;
          }
          bVar5 = std::_Traits_equal<>((char *)ppppcVar8,local_30,pcVar6,unaff_EDI);
          if (bVar5) {
            if (uStack_2c < 0x10) goto LAB_004a5f4f;
            pnVar10 = (nothrow_t *)(uStack_2c + 1);
            ppppcVar8 = (char ****)pppcVar4;
            if ((nothrow_t *)0xfff < pnVar10) {
              ppppcVar8 = (char ****)pppcVar4[-1];
              pnVar10 = (nothrow_t *)(uStack_2c + 0x24);
              if ((char *)0x1f < (char *)((int)pppcVar4 + (-4 - (int)ppppcVar8))) goto LAB_004a5f61;
            }
            operator_delete(ppppcVar8,pnVar10);
            goto LAB_004a5f4f;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar11);
      }
      if (0xf < uStack_2c) {
        pnVar10 = (nothrow_t *)(uStack_2c + 1);
        ppppcVar8 = (char ****)pppcVar4;
        if ((nothrow_t *)0xfff < pnVar10) {
          ppppcVar8 = (char ****)pppcVar4[-1];
          pnVar10 = (nothrow_t *)(uStack_2c + 0x24);
          if ((char *)0x1f < (char *)((int)pppcVar4 + (-4 - (int)ppppcVar8))) {
LAB_004a5f61:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppcVar8,pnVar10);
      }
    }
    bVar3 = true;
LAB_004a5f4f:
    iVar9 = iVar9 + 1;
    if (bVar3) {
      this_00 = *(basic_string<> **)(this + 0x88);
      if (*(basic_string<> **)(this + 0x8c) == this_00) {
        std::vector<>::_Emplace_reallocate<>
                  ((vector<> *)(this + 0x84),(basic_string<> *)this_00,
                   (basic_string<> *)in_stack_00000004);
      }
      else {
        std::basic_string<>::basic_string<>(this_00,(basic_string<> *)in_stack_00000004);
        *(int *)(this + 0x88) = *(int *)(this + 0x88) + 0x18;
      }
      ExceptionList = local_1c;
      __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
      return;
    }
  } while( true );
}


// public: void __thiscall NameManager::addRego(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __thiscall NameManager::addRego(NameManager *this,void *param_2)

{
  basic_string<> *this_00;
  bool bVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
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
  bVar1 = regoExists(this);
  if (!bVar1) {
    this_00 = *(basic_string<> **)(this + 0x94);
    if (*(basic_string<> **)(this + 0x98) == this_00) {
      uStack_28 = 0x4a6034;
      std::vector<>::_Emplace_reallocate<>
                ((vector<> *)(this + 0x90),(basic_string<> *)this_00,(basic_string<> *)&param_2);
    }
    else {
      std::basic_string<>::basic_string<>(this_00,(basic_string<> *)&param_2);
      *(int *)(this + 0x94) = *(int *)(this + 0x94) + 0x18;
    }
  }
  if (0xf < in_stack_00000018) {
    pnVar3 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar2 = param_2;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_2 + -4);
      pnVar3 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4a6067;
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// __thiscall NameManager::generateGeneralRego(void)

void __thiscall NameManager::generateGeneralRego(NameManager *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  word *pwVar5;
  void *pvVar6;
  nothrow_t *pnVar7;
  word *in_stack_00000004;
  basic_string<> abStack_74 [4];
  undefined4 uStack_70;
  void *local_3c [5];
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_005bd569;
  local_1c = ExceptionList;
  local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (word)0x0;
  local_14 = 0;
  do {
    rand();
    rand();
    uStack_70 = 0x4a6127;
    pwVar5 = (word *)strUsingArgs((char *)local_3c);
    if (in_stack_00000004 != pwVar5) {
      word::~word(in_stack_00000004);
      uVar1 = *(undefined4 *)(pwVar5 + 4);
      uVar2 = *(undefined4 *)(pwVar5 + 8);
      uVar3 = *(undefined4 *)(pwVar5 + 0xc);
      *(undefined4 *)in_stack_00000004 = *(undefined4 *)pwVar5;
      *(undefined4 *)(in_stack_00000004 + 4) = uVar1;
      *(undefined4 *)(in_stack_00000004 + 8) = uVar2;
      *(undefined4 *)(in_stack_00000004 + 0xc) = uVar3;
      uVar1 = *(undefined4 *)(pwVar5 + 0x14);
      *(undefined4 *)(in_stack_00000004 + 0x10) = *(undefined4 *)(pwVar5 + 0x10);
      *(undefined4 *)(in_stack_00000004 + 0x14) = uVar1;
      *(undefined4 *)(pwVar5 + 0x10) = 0;
      *(undefined4 *)(pwVar5 + 0x14) = 0xf;
      *pwVar5 = (word)0x0;
    }
    if (0xf < local_28) {
      pnVar7 = (nothrow_t *)(local_28 + 1);
      pvVar6 = local_3c[0];
      if ((nothrow_t *)0xfff < pnVar7) {
        pvVar6 = *(void **)((int)local_3c[0] + -4);
        pnVar7 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar6,pnVar7);
    }
    std::basic_string<>::basic_string<>(abStack_74,(basic_string<> *)in_stack_00000004);
    bVar4 = regoExists(this);
  } while (bVar4);
  std::basic_string<>::basic_string<>(abStack_74,(basic_string<> *)in_stack_00000004);
  addRego(this);
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// __thiscall NameManager::getLocationForRego(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __thiscall
NameManager::getLocationForRego(undefined4 param_1,basic_string<> *param_2,char *param_3)

{
  char cVar1;
  void *pvVar2;
  bool bVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  nothrow_t *pnVar9;
  uint unaff_EDI;
  void *pvVar10;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  uint uVar11;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bd5a0;
  local_10 = ExceptionList;
  pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = 0;
  local_18 = 0xf;
  uVar5 = 2;
  if (in_stack_00000018 < 2) {
    uVar5 = in_stack_00000018;
  }
  pcVar6 = (char *)&param_3;
  if (0xf < in_stack_0000001c) {
    pcVar6 = param_3;
  }
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_14 = pcVar4;
  std::basic_string<>::assign((basic_string<> *)local_2c,pcVar6,uVar5);
  pvVar10 = local_2c[0];
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar8 = 0;
LAB_004a6254:
  pcVar7 = (&PTR_s_SL_005dfba0)[iVar8];
  pcVar6 = pcVar7 + 1;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  bVar3 = std::_Traits_equal<>
                    ((&PTR_s_SL_005dfba0)[iVar8],(int)pcVar7 - (int)pcVar6,pcVar4,unaff_EDI);
  uVar5 = local_18;
  if (!bVar3) goto code_r0x004a628e;
  pcVar4 = (&PTR_s_Ulence_Federation_005dfb88)[iVar8];
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *param_2 = (basic_string<>)0x0;
  pcVar6 = pcVar4;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  std::basic_string<>::assign(param_2,pcVar4,(int)pcVar6 - (int)(pcVar4 + 1));
  if (local_18 < 0x10) goto LAB_004a6305;
  pnVar9 = (nothrow_t *)(local_18 + 1);
  if ((nothrow_t *)0xfff < pnVar9) {
    pvVar2 = *(void **)((int)pvVar10 + -4);
    uVar5 = local_18;
    goto joined_r0x004a62f3;
  }
  goto LAB_004a62fc;
code_r0x004a628e:
  iVar8 = iVar8 + 1;
  if (5 < iVar8) {
    bVar3 = std::_Traits_equal<>("CU",2,pcVar4,unaff_EDI);
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *param_2 = (basic_string<>)0x0;
    if (bVar3) {
      uVar11 = 0x17;
      pcVar4 = "Cassandra Utility Fleet";
    }
    else {
      uVar11 = 7;
      pcVar4 = "Unknown";
    }
    std::basic_string<>::assign(param_2,pcVar4,uVar11);
    if (0xf < uVar5) {
      pnVar9 = (nothrow_t *)(uVar5 + 1);
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar2 = *(void **)((int)pvVar10 + -4);
joined_r0x004a62f3:
        uVar11 = (int)pvVar10 + (-4 - (int)pvVar2);
        pnVar9 = (nothrow_t *)(uVar5 + 0x24);
        pvVar10 = pvVar2;
        if (0x1f < uVar11) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
LAB_004a62fc:
      operator_delete(pvVar10,pnVar9);
    }
LAB_004a6305:
    if (0xf < in_stack_0000001c) {
      pnVar9 = (nothrow_t *)(in_stack_0000001c + 1);
      pcVar4 = param_3;
      if ((nothrow_t *)0xfff < pnVar9) {
        pcVar4 = *(char **)(param_3 + -4);
        pnVar9 = (nothrow_t *)(in_stack_0000001c + 0x24);
        if ((char *)0x1f < param_3 + (-4 - (int)pcVar4)) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pcVar4,pnVar9);
    }
    ExceptionList = local_10;
    __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
  goto LAB_004a6254;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// __thiscall NameManager::generatePoliceRego(void)

void __thiscall NameManager::generatePoliceRego(NameManager *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  word *pwVar5;
  void *pvVar6;
  nothrow_t *pnVar7;
  word *in_stack_00000004;
  basic_string<> abStack_74 [4];
  undefined4 uStack_70;
  void *local_3c [5];
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_005bd569;
  local_1c = ExceptionList;
  local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (word)0x0;
  local_14 = 0;
  do {
    rand();
    rand();
    uStack_70 = 0x4a646e;
    pwVar5 = (word *)strUsingArgs((char *)local_3c);
    if (in_stack_00000004 != pwVar5) {
      word::~word(in_stack_00000004);
      uVar1 = *(undefined4 *)(pwVar5 + 4);
      uVar2 = *(undefined4 *)(pwVar5 + 8);
      uVar3 = *(undefined4 *)(pwVar5 + 0xc);
      *(undefined4 *)in_stack_00000004 = *(undefined4 *)pwVar5;
      *(undefined4 *)(in_stack_00000004 + 4) = uVar1;
      *(undefined4 *)(in_stack_00000004 + 8) = uVar2;
      *(undefined4 *)(in_stack_00000004 + 0xc) = uVar3;
      uVar1 = *(undefined4 *)(pwVar5 + 0x14);
      *(undefined4 *)(in_stack_00000004 + 0x10) = *(undefined4 *)(pwVar5 + 0x10);
      *(undefined4 *)(in_stack_00000004 + 0x14) = uVar1;
      *(undefined4 *)(pwVar5 + 0x10) = 0;
      *(undefined4 *)(pwVar5 + 0x14) = 0xf;
      *pwVar5 = (word)0x0;
    }
    if (0xf < local_28) {
      pnVar7 = (nothrow_t *)(local_28 + 1);
      pvVar6 = local_3c[0];
      if ((nothrow_t *)0xfff < pnVar7) {
        pvVar6 = *(void **)((int)local_3c[0] + -4);
        pnVar7 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar6,pnVar7);
    }
    std::basic_string<>::basic_string<>(abStack_74,(basic_string<> *)in_stack_00000004);
    bVar4 = regoExists(this);
  } while (bVar4);
  std::basic_string<>::basic_string<>(abStack_74,(basic_string<> *)in_stack_00000004);
  addRego(this);
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// public: bool __thiscall NameManager::regoExists(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __thiscall NameManager::regoExists(NameManager *this,char *param_2)

{
  uint uVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  uint uVar6;
  char *unaff_EDI;
  uint in_stack_00000014;
  uint in_stack_00000018;
  bool local_5;
  
  pcVar2 = param_2;
  uVar1 = (*(int *)(this + 0x94) - *(int *)(this + 0x90)) / 0x18;
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      pcVar4 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar4 = pcVar2;
      }
      bVar3 = std::_Traits_equal<>(pcVar4,in_stack_00000014,unaff_EDI,unaff_ESI);
      if (bVar3) {
        local_5 = true;
        goto LAB_004a65a0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  local_5 = false;
LAB_004a65a0:
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar4 = pcVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pcVar4 = *(char **)(pcVar2 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < pcVar2 + (-4 - (int)pcVar4)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar4,pnVar5);
  }
  return local_5;
}
