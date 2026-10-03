// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall TextEngine::showDocument(TextEngine *this,undefined4 *param_2)
void TextEngine::showDocument(undefined4 * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x00000034[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x0000001c[1] = {0};  // [pseudo] address of an unnamed stack slot
  ghidra::vector *this_00;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  std::string *pbVar4;
  std::string *pbVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 ****ppppuVar8;
  char ****ppppcVar9;
  std::string *extraout_ECX;
  std::string *this_01;
  char *pcVar10;
  void *pvVar11;
  int iVar12;
  nothrow_t *pnVar13;
  int iVar14;
  ghidra::lib::allocator_t *unaff_EDI;
  uint uVar15;
  uint in_stack_00000014;
  uint in_stack_00000018;
  std::string *in_stack_0000001c;
  uint in_stack_0000002c;
  uint in_stack_00000030;
  int *in_stack_00000058;
  std::string abStack_cc [8];
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
  std::string *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] puStack_c = &DAT_005b3c9e;
  // [seh] local_10 = ExceptionList;
  // [cookie] pbVar4 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 2;
  local_14 = pbVar4;
  if (this + 0xc != *(TextEngine **)((char *)this + 8)) {
    uStack_c4 = 0x42c017;
    ghidra::lib::vector___Assign_range();
  }
  ghidra::lib::function__operator_x3d((ghidra::lib::function_t *)((char *)this + 0x70),(ghidra::lib::function_t *)&stack0x00000034);
  this_01 = (std::string *)((char *)this + 0x98);
  if (this_01 != (std::string *)&stack0x0000001c) {
    pbVar5 = (std::string *)&stack0x0000001c;
    if (0xf < in_stack_00000030) {
      pbVar5 = in_stack_0000001c;
    }
    ghidra::str::assign(this_01,(char *)pbVar5,in_stack_0000002c);
    this_01 = extraout_ECX;
  }
  *(undefined4 *)((char *)this + 100) = 1;
  this_00 = (ghidra::vector *)((char *)this + 0xb0);
  *(undefined4 *)((char *)this + 0x68) = 0;
  ghidra::lib::_Destroy_range___x28_x29(this_01,pbVar4,unaff_EDI);
  *(undefined4 *)((char *)this + 0xb4) = *(undefined4 *)this_00;
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
  // [seh] local_8._0_1_ = 5;
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
        if ((uint)(iVar14 + 1 + local_1c) < *(uint *)((char *)this + 0x20)) {
          ppppuVar8 = local_2c;
          if (0xf < local_18) {
            ppppuVar8 = (undefined4 ****)local_2c[0];
          }
          if (*(char *)((int)ppppuVar8 + local_1c + -1) != ' ') {
            ghidra::str::append((std::string *)local_2c," ",1);
          }
          ppppcVar9 = local_44;
          if (0xf < local_30) {
            ppppcVar9 = (char ****)local_44[0];
          }
          ghidra::str::append((std::string *)local_2c,(char *)ppppcVar9,local_34);
        }
        else {
          bVar3 = true;
        }
        pbVar4 = *(std::string **)((char *)this + 0xb4);
        if (*(std::string **)((char *)this + 0xb8) == pbVar4) {
          ghidra::lib::vector___Emplace_reallocate
                    (this_00,(std::string *)pbVar4,(std::string *)local_2c);
        }
        else {
          ghidra::str::ctor(pbVar4,(std::string *)local_2c);
          *(int *)((char *)this + 0xb4) = *(int *)((char *)this + 0xb4) + 0x18;
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
          ghidra::str::append((std::string *)local_2c,(char *)ppppcVar9,2);
        }
        if (bVar3) {
          ppppcVar9 = local_44;
          if (0xf < local_30) {
            ppppcVar9 = (char ****)local_44[0];
          }
          ghidra::str::append((std::string *)local_2c,(char *)ppppcVar9,local_34);
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
          // [seh] local_8._0_1_ = 6;
          pcVar10 = pcVar6;
          if (0xf < *(uint *)(pcVar6 + 0x14)) {
            pcVar10 = *(char **)pcVar6;
          }
          ghidra::str::append((std::string *)local_5c,pcVar10,*(uint *)(pcVar6 + 0x10));
          // [seh] local_8._0_1_ = 5;
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
            ghidra::str::append((std::string *)local_44,(char *)ppppcVar9,local_4c);
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
                ghidra::str::append((std::string *)local_44,"\"",1);
                bVar2 = false;
                ghidra::str::append((std::string *)local_44,"`2",2);
                ghidra::str::assign((std::string *)local_5c,"`2",2);
              }
              else {
                bVar2 = true;
                ghidra::str::append((std::string *)local_44,"`0",2);
                ghidra::str::assign((std::string *)local_5c,"`0",2);
                ghidra::str::append((std::string *)local_44,"\"",1);
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
                if (*(int *)((char *)this + 0x20) <= iVar14 + iVar12) {
                  pbVar4 = *(std::string **)((char *)this + 0xb4);
                  if (*(std::string **)((char *)this + 0xb8) == pbVar4) {
                    ghidra::lib::vector___Emplace_reallocate
                              (this_00,(std::string *)pbVar4,(std::string *)local_2c);
                  }
                  else {
                    ghidra::str::ctor(pbVar4,(std::string *)local_2c);
                    *(int *)((char *)this + 0xb4) = *(int *)((char *)this + 0xb4) + 0x18;
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
                    ghidra::str::append((std::string *)local_2c,(char *)ppppcVar9,2);
                  }
                  local_94 = 0;
                }
                ghidra::str::ctor(abStack_cc,(std::string *)local_2c);
                bVar3 = lineEndsWithSpace();
                if (!bVar3) {
                  ghidra::str::ctor(abStack_cc,(std::string *)local_2c);
                  bVar3 = lineIsNull();
                  if (!bVar3) {
                    ghidra::str::append((std::string *)local_2c," ",1);
                  }
                }
                ppppcVar9 = local_44;
                if (0xf < local_30) {
                  ppppcVar9 = (char ****)local_44[0];
                }
                ghidra::str::append((std::string *)local_2c,(char *)ppppcVar9,local_34);
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
                if (iVar12 + 1 + iVar14 < *(int *)((char *)this + 0x20)) {
                  uStack_c4 = 0x42c499;
                  pcVar6 = (char *)strUsingArgs((char *)local_74);
                  // [seh] local_8._0_1_ = 8;
                  pcVar10 = pcVar6;
                  if (0xf < *(uint *)(pcVar6 + 0x14)) {
                    pcVar10 = *(char **)pcVar6;
                  }
                  ghidra::str::append
                            ((std::string *)local_44,pcVar10,*(uint *)(pcVar6 + 0x10));
                  // [seh] local_8._0_1_ = 5;
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
                pbVar4 = *(std::string **)((char *)this + 0xb4);
                if (*(std::string **)((char *)this + 0xb8) == pbVar4) {
                  ghidra::lib::vector___Emplace_reallocate
                            (this_00,(std::string *)pbVar4,(std::string *)local_2c);
                }
                else {
                  ghidra::str::ctor(pbVar4,(std::string *)local_2c);
                  *(int *)((char *)this + 0xb4) = *(int *)((char *)this + 0xb4) + 0x18;
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
                  ghidra::str::append((std::string *)local_2c,(char *)ppppcVar9,2);
                }
                uStack_c4 = 0x42c416;
                pcVar6 = (char *)strUsingArgs((char *)local_8c);
                // [seh] local_8._0_1_ = 7;
                pcVar10 = pcVar6;
                if (0xf < *(uint *)(pcVar6 + 0x14)) {
                  pcVar10 = *(char **)pcVar6;
                }
                ghidra::str::append
                          ((std::string *)local_44,pcVar10,*(uint *)(pcVar6 + 0x10));
                // [seh] local_8._0_1_ = 5;
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
      ghidra::str::append((std::string *)local_2c," ",1);
      ppppcVar9 = local_44;
      if (0xf < local_30) {
        ppppcVar9 = (char ****)local_44[0];
      }
      ghidra::str::append((std::string *)local_2c,(char *)ppppcVar9,local_34);
    }
    if (local_1c != 0) {
      pbVar4 = *(std::string **)((char *)this + 0xb4);
      if (*(std::string **)((char *)this + 0xb8) == pbVar4) {
        ghidra::lib::vector___Emplace_reallocate
                  (this_00,(std::string *)pbVar4,(std::string *)local_2c);
      }
      else {
        ghidra::str::ctor(pbVar4,(std::string *)local_2c);
        *(int *)((char *)this + 0xb4) = *(int *)((char *)this + 0xb4) + 0x18;
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
  // [seh] local_8._0_1_ = 4;
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
  // [seh] local_8._0_1_ = 3;
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
  // [seh] local_8._0_1_ = 2;
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
  // [seh] local_8._0_1_ = 1;
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
  // [seh] local_8 = (uint)local_8._1_3_ << 8;
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_2 = (undefined4 *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_00000030) {
    pnVar13 = (nothrow_t *)(in_stack_00000030 + 1);
    pbVar4 = in_stack_0000001c;
    if ((nothrow_t *)0xfff < pnVar13) {
      pbVar4 = *(std::string **)(in_stack_0000001c + -4);
      pnVar13 = (nothrow_t *)(in_stack_00000030 + 0x24);
      if ((std::string *)0x1f < in_stack_0000001c + (-4 - (int)pbVar4)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar4,pnVar13);
  }
  in_stack_0000002c = 0;
  in_stack_00000030 = 0xf;
  in_stack_0000001c = (std::string *)((uint)in_stack_0000001c & 0xffffff00);
  // [seh] local_8 = 9;
  if (in_stack_00000058 != (int *)0x0) {
    (**(code **)(*in_stack_00000058 + 0x10))();
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall TextEngine::finishShowingDocument(TextEngine *this)
void TextEngine::finishShowingDocument()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  ghidra::vector *pvVar1;
  undefined4 *puVar2;
  TextEngine *pTVar3;
  std::string *pbVar4;
  std::string *extraout_ECX;
  std::string *extraout_ECX_00;
  ghidra::vector *pvVar5;
  ghidra::lib::allocator_t *unaff_EDI;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b3cd0;
  // [seh] local_10 = ExceptionList;
  // [cookie] pbVar4 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  ghidra::lib::_Destroy_range___x28_x29((std::string *)this,pbVar4,unaff_EDI);
  *(undefined4 *)((char *)this + 0xb4) = *(undefined4 *)((char *)this + 0xb0);
  *(undefined4 *)((char *)this + 100) = 0;
  *(undefined4 *)((char *)this + 0x68) = 0;
  ghidra::str::assign((std::string *)((char *)this + 0x98),"",0);
  puVar2 = *(undefined4 **)((char *)this + 8);
  ghidra::lib::_Destroy_range___x28_x29(extraout_ECX,pbVar4,unaff_EDI);
  puVar2[1] = *puVar2;
  render(this);
  pvVar5 = *(ghidra::vector **)((char *)this + 8);
  pvVar1 = (ghidra::vector *)((char *)this + 0xc);
  if (pvVar5 != pvVar1) {
    ghidra::lib::vector___Assign_range(pvVar5,*(undefined4 *)pvVar1,*(undefined4 *)((char *)this + 0x10),this);
    pvVar5 = (ghidra::vector *)extraout_ECX_00;
  }
  ghidra::lib::_Destroy_range___x28_x29((std::string *)pvVar5,pbVar4,unaff_EDI);
  *(undefined4 *)((char *)this + 0x10) = *(undefined4 *)pvVar1;
  if (*(int **)((char *)this + 0x14c) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x14c) + 8))();
  }
  render(this);
  if (*(int **)((char *)this + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x94) + 8))();
  }
  // [seh] local_8 = 0;
  pTVar3 = *(TextEngine **)((char *)this + 0x94);
  if (pTVar3 != (TextEngine *)0x0) {
    (**(code **)(*(int *)pTVar3 + 0x10))(pTVar3 != this + 0x70);
    *(undefined4 *)((char *)this + 0x94) = 0;
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall TextEngine::renderDocument(TextEngine *this)
void TextEngine::renderDocument()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  undefined4 *puVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  int iVar4;
  int iVar5;
  ghidra::lib::allocator_t *unaff_EDI;
  std::string abStack_64 [12];
  undefined4 uStack_58;
  void *local_3c [5];
  uint local_28;
  uint local_1c;
  int local_18;
  int local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b3cf8;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  puVar1 = *(undefined4 **)((char *)this + 8);
  ghidra::lib::_Destroy_range_t
            // [cookie] ((std::string *)this,(std::string *)(___security_cookie ^ (uint)&stack0xfffffffc),
             unaff_EDI);
  puVar1[1] = *puVar1;
  render(this);
  iVar5 = *(int *)((char *)this + 0x68);
  iVar4 = *(int *)((char *)this + 0x24) + -1;
  local_1c = (*(int *)((char *)this + 0xb4) - *(int *)((char *)this + 0xb0)) / 0x18;
  if ((uint)(iVar5 + iVar4) <= local_1c) {
    local_1c = iVar5 + iVar4;
  }
  local_14 = 0;
  local_18 = iVar5;
  if (iVar5 < (int)local_1c) {
    local_18 = iVar5 * 0x18;
    do {
      ghidra::str::ctor
                ((std::string *)local_3c,(std::string *)(*(int *)((char *)this + 0xb0) + local_18));
      // [seh] local_8 = 0;
      ghidra::str::ctor(abStack_64,(std::string *)local_3c);
      addLineWithWrap(this,*(undefined4 *)((char *)this + 0x20));
      // [seh] local_8 = 0xffffffff;
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
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall TextEngine::renderDocumentFooter(TextEngine *this)
void TextEngine::renderDocumentFooter()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  word *pwVar1;
  word *pwVar2;
  char *pcVar3;
  char *pcVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  std::string abStack_88 [4];
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
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  int local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005b3d30;
  // [seh] local_1c = ExceptionList;
  // [cookie] local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  // [seh] ExceptionList = &local_1c;
  pwVar2 = (word *)((char *)this + 0x98);
  strUsingArgs((char *)&local_54);
  local_14 = 0;
  if (*(int *)((char *)this + 0x24) - 1U < (uint)((*(int *)((char *)this + 0xb4) - *(int *)((char *)this + 0xb0)) / 0x18)) {
    if (0xf < *(uint *)((char *)this + 0xa8)) {
      local_2c = 0;
      uStack_28 = 0xf;
      local_3c = (void *)((uint)local_3c & 0xffffff00);
      pwVar1 = pwVar2;
      if (0xf < *(uint *)((char *)this + 0xac)) {
        pwVar1 = *(word **)pwVar2;
      }
      ghidra::str::assign((std::string *)&local_3c,(char *)pwVar1,0xf);
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
        // [mislabelled-dtor] word::~word(pwVar2);
        *(void **)pwVar2 = local_3c;
        *(undefined4 *)((char *)this + 0x9c) = uStack_38;
        *(undefined4 *)((char *)this + 0xa0) = uStack_34;
        *(undefined4 *)((char *)this + 0xa4) = uStack_30;
        *(ulonglong *)((char *)this + 0xa8) = CONCAT44(uStack_28,local_2c);
      }
    }
    pwVar2 = (word *)strUsingArgs((char *)&local_3c);
    if ((word *)&local_54 != pwVar2) {
      // [mislabelled-dtor] word::~word((word *)&local_54);
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
    ghidra::str::append((std::string *)&local_54,pcVar4,*(uint *)(pcVar3 + 0x10));
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
    ghidra::str::append((std::string *)&local_54," `%[`$up`%/`$down`%] [`$ent`%]",0x1e);
  }
  cocos2d::Color3B::Color3B(local_57,'\0','\0',0x80);
  ghidra::str::ctor(abStack_88,(std::string *)&local_54);
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
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// Ghidra: void __thiscall TextEngine::renderList(TextEngine *this)
void TextEngine::renderList()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  uint uVar1;
  TextEngine TVar2;
  TextEngine *this_00;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  std::string abStack_60 [8];
  undefined4 uStack_58;
  undefined4 local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b3dc8;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  this_00 = (TextEngine *)(*(int *)((char *)this + 0xe0) - *(int *)((char *)this + 0xdc));
  uVar7 = 0;
  uVar5 = *(int *)((char *)this + 0x24) - 1;
  if (uVar5 < (uint)((int)this_00 / 0x18)) {
    this_00 = *(TextEngine **)((char *)this + 0xbc);
    uVar1 = uVar5;
    while ((int)uVar1 <= (int)this_00) {
      uVar1 = uVar7 + uVar5 * 2;
      uVar7 = uVar7 + uVar5;
    }
  }
  iVar6 = uVar5 + uVar7;
  TVar2 = (byte)0x0;
  local_30 = iVar6;
  if (((char *)this)[0xc0] != (byte)0x0) {
    addLinef(this_00,(char *)this);
    TVar2 = ((char *)this)[0xc0];
  }
  if ((int)uVar7 < (int)(iVar6 - (uint)(TVar2 != (byte)0x0))) {
    do {
      if (uVar7 < (uint)((*(int *)((char *)this + 0xe0) - *(int *)((char *)this + 0xdc)) / 0x18)) {
        uStack_58 = 0x42d21d;
        addLinef((TextEngine *)" ",(char *)this);
      }
      else {
        addBlankLine(this);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)(local_30 - (uint)(((char *)this)[0xc0] != (byte)0x0)));
  }
  strUsingArgs((char *)local_2c);
  // [seh] local_8 = 0;
  cocos2d::Color3B::Color3B((Color3B *)((int)&local_30 + 1),0x80,'\0',0x80);
  ghidra::str::ctor(abStack_60,(std::string *)local_2c);
  setBottomText(this);
  // [seh] local_8 = 0xffffffff;
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
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall TextEngine::finishShowingList(TextEngine *this,bool param_1)
void TextEngine::finishShowingList(bool param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  ghidra::vector *pvVar1;
  undefined4 *puVar2;
  std::string *pbVar3;
  std::string *extraout_ECX;
  ghidra::vector *pvVar4;
  ghidra::lib::allocator_t *unaff_EDI;
  undefined3 in_stack_00000005;
  TextEngine *pTVar5;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b2730;
  // [seh] local_10 = ExceptionList;
  // [cookie] pbVar3 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  pTVar5 = this;
  ghidra::lib::_Destroy_range___x28_x29((std::string *)this,pbVar3,unaff_EDI);
  *(undefined4 *)((char *)this + 0xe0) = *(undefined4 *)((char *)this + 0xdc);
  puVar2 = *(undefined4 **)((char *)this + 8);
  ghidra::lib::_Destroy_range___x28_x29((std::string *)pTVar5,pbVar3,unaff_EDI);
  puVar2[1] = *puVar2;
  render(this);
  pvVar4 = *(ghidra::vector **)((char *)this + 8);
  pvVar1 = (ghidra::vector *)((char *)this + 0xc);
  if (pvVar4 != pvVar1) {
    ghidra::lib::vector___Assign_range
              (pvVar4,*(undefined4 *)pvVar1,*(undefined4 *)((char *)this + 0x10),_param_1);
    pvVar4 = (ghidra::vector *)extraout_ECX;
  }
  ghidra::lib::_Destroy_range___x28_x29((std::string *)pvVar4,pbVar3,unaff_EDI);
  *(undefined4 *)((char *)this + 0x10) = *(undefined4 *)pvVar1;
  *(undefined4 *)((char *)this + 100) = 0;
  if (((char *)this)[0xc0] != (byte)0x0) {
    *(undefined4 *)((char *)this + 0xbc) = 0xffffffff;
  }
  if (param_1 != false) {
    _param_1 = *(undefined4 *)((char *)this + 0xbc);
    if (*(int **)((char *)this + 0x124) == (int *)0x0) {
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
    (**(code **)(**(int **)((char *)this + 0x124) + 8))(&param_1);
    // [seh] local_8 = 0;
    pTVar5 = *(TextEngine **)((char *)this + 0x124);
    if (pTVar5 != (TextEngine *)0x0) {
      (**(code **)(*(int *)pTVar5 + 0x10))(pTVar5 != this + 0x100);
      *(undefined4 *)((char *)this + 0x124) = 0;
    }
    // [seh] local_8 = 0xffffffff;
  }
  *(undefined4 *)((char *)this + 0xbc) = 0;
  ghidra::str::assign((std::string *)((char *)this + 0xe8),"",0);
  if (*(int **)((char *)this + 0x14c) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x14c) + 8))();
  }
  render(this);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall TextEngine::render(TextEngine *this)
void TextEngine::render()

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
  iStack_20 = *(int *)((char *)this + 0x24) + -1;
  if (((char *)this)[0x28] == (byte)0x0) {
    iStack_20 = *(int *)((char *)this + 0x24);
  }
  iVar6 = iStack_20 + -1;
  if (((char *)this)[0x29] == (byte)0x0) {
    iVar6 = iStack_20;
  }
  if (((char *)this)[0x28] != (byte)0x0) {
    ghidra::str::ctor
              ((std::string *)&uStack_34,(std::string *)((char *)this + 0x2c));
    (*(TextField **)this)->setText(extraout_ECX, 0);
    iStack_20 = extraout_ECX_00;
  }
  iStack_24 = *(int *)((char *)this + 0x20) + -1;
  local_30 = *(undefined2 *)((char *)this + 0x5c);
  iStack_28 = 0;
  local_2e = ((char *)this)[0x5e];
  uStack_34 = 0x42d500;
  (*(TextField **)this)->paintBackground();
  if (((char *)this)[0x29] != (byte)0x0) {
    ghidra::str::ctor
              ((std::string *)&uStack_34,(std::string *)((char *)this + 0x44));
    (*(TextField **)this)->setText(extraout_ECX_01, iVar6);
  }
  iStack_24 = *(int *)((char *)this + 0x20) + -1;
  local_30 = *(undefined2 *)((char *)this + 0x5f);
  local_2e = ((char *)this)[0x61];
  uStack_34 = 0x42d53d;
  iStack_28 = iVar6;
  (*(TextField **)this)->paintBackground();
  uVar8 = 0;
  if (0 < iVar6) {
    do {
      iVar5 = **(int **)((char *)this + 8);
      uVar1 = ((*(int **)((char *)this + 8))[1] - iVar5) / 0x18;
      if (uVar8 < uVar1) {
        uVar7 = uVar8 + 1;
        if (((char *)this)[0x29] == (byte)0x0) {
          uVar7 = uVar8;
        }
        ghidra::str::ctor
                  ((std::string *)&uStack_34,
                   (std::string *)(iVar5 + ((uVar1 - uVar8) + -1) * 0x18));
        (*(TextField **)this)->setText(extraout_ECX_02, iVar6 - uVar7);
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar6);
  }
  iStack_20 = 0x42d5a3;
  (*(TextField **)this)->update();
  return;
}


// Ghidra: bool __thiscall TextEngine::lineIsNull(undefined4 param_1,undefined4 *param_2)
bool TextEngine::lineIsNull(undefined4 param_1, undefined4 * param_2)

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


// Ghidra: bool __thiscall TextEngine::lineEndsWithSpace(undefined4 param_1,undefined4 *param_2)
bool TextEngine::lineEndsWithSpace(undefined4 param_1, undefined4 * param_2)

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


// Ghidra: void __thiscall TextEngine::addLineWithWrap(TextEngine *this,uint param_2,undefined4 *param_3)
void TextEngine::addLineWithWrap(uint param_2, undefined4 * param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  ghidra::vector *pvVar1;
  void *pvVar2;
  int iVar3;
  undefined1 uVar4;
  bool bVar5;
  std::string *pbVar6;
  std::string *pbVar7;
  undefined4 ****ppppuVar8;
  char ****ppppcVar9;
  undefined4 *puVar10;
  void *pvVar11;
  uint uVar12;
  nothrow_t *pnVar13;
  uint uVar14;
  std::string *pbVar15;
  std::string *unaff_EDI;
  int iVar16;
  int *piVar17;
  bool bVar18;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  std::string abStack_a8 [12];
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
  std::string *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined1 local_8;
  undefined3 uStack_7;
  
  // [seh] puStack_c = &DAT_005b3e30;
  // [seh] local_10 = ExceptionList;
  // [cookie] pbVar6 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffffc);
  local_18 = pbVar6;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  uStack_7 = 0;
  if (param_2 < in_stack_00000018) {
    local_20 = 0;
    local_1c = 0xf;
    local_30[0] = (char ***)((uint)local_30[0] & 0xffffff00);
    local_38 = 0;
    local_34 = 0xf;
    local_48[0] = (undefined4 ***)((uint)local_48[0] & 0xffffff00);
    iVar16 = 0;
    // [seh] local_8 = 2;
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
            ghidra::str::ctor(abStack_a8,(std::string *)local_48);
            bVar5 = lineIsNull();
            if (bVar5) {
              ghidra::str::ctor(abStack_a8,(std::string *)local_30);
              bVar5 = lineIsNull();
              if (bVar5) goto LAB_0042dc2e;
            }
          }
          if ((int)param_2 < local_68 + 1 + iVar16) {
            pbVar7 = (std::string *)
                     ghidra::str::ctor
                               ((std::string *)local_60,(std::string *)local_48);
            // [seh] local_8 = 3;
            ghidra::lib::vector__push_back(*(ghidra::vector **)((char *)this + 8),pbVar7);
            // [seh] local_8 = 2;
            uVar4 = local_8;
            // [seh] local_8 = 2;
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
            ghidra::str::append((std::string *)local_48,(char *)ppppcVar9,uVar12);
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
            ghidra::str::ctor(abStack_a8,(std::string *)local_48);
            bVar5 = lineEndsWithSpace();
            if (!bVar5) {
              ghidra::str::ctor
                        ((std::string *)local_60,(std::string *)local_30);
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
                  ghidra::lib::basic_string__push_back((std::string *)local_48,' ');
                  iVar16 = local_70 + 1;
                }
              }
            }
            ppppcVar9 = local_30;
            if (0xf < local_1c) {
              ppppcVar9 = (char ****)local_30[0];
            }
            uStack_9c = 0x42d9c5;
            ghidra::str::append((std::string *)local_48,(char *)ppppcVar9,local_20);
            ghidra::lib::basic_string__push_back((std::string *)local_48,' ');
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
            ghidra::lib::basic_string__push_back
                      ((std::string *)local_30,*(char *)((int)puVar10 + uVar14));
            puVar10 = &param_3;
            if (0xf < in_stack_0000001c) {
              puVar10 = param_3;
            }
            ghidra::lib::basic_string__push_back
                      ((std::string *)local_30,*(char *)((int)puVar10 + uVar12));
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
                ghidra::str::assign((std::string *)local_60,"",0);
                // [seh] local_8 = 6;
                ghidra::lib::vector__push_back(*(ghidra::vector **)((char *)this + 8),(std::string *)local_60);
                // [seh] local_8 = 2;
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
                  pbVar7 = (std::string *)
                           ghidra::str::ctor
                                     ((std::string *)local_60,(std::string *)local_48);
                  // [seh] local_8 = 4;
                  ghidra::lib::vector__push_back(*(ghidra::vector **)((char *)this + 8),pbVar7);
                  // [seh] local_8 = 2;
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
                  pvVar1 = *(ghidra::vector **)((char *)this + 8);
                  pbVar7 = *(std::string **)(pvVar1 + 4);
                  if (*(std::string **)(pvVar1 + 8) == pbVar7) {
                    uStack_9c = 0x42dafa;
                    ghidra::lib::vector___Emplace_reallocate
                              (pvVar1,(std::string *)pbVar7,(std::string *)local_30);
                  }
                  else {
                    ghidra::str::ctor(pbVar7,(std::string *)local_30);
                    *(int *)(pvVar1 + 4) = *(int *)(pvVar1 + 4) + 0x18;
                  }
                }
                else {
                  ppppcVar9 = local_30;
                  if (0xf < local_1c) {
                    ppppcVar9 = (char ****)local_30[0];
                  }
                  uStack_9c = 0x42db13;
                  ghidra::str::append((std::string *)local_48,(char *)ppppcVar9,local_20)
                  ;
                  pbVar7 = (std::string *)
                           ghidra::str::ctor
                                     ((std::string *)local_60,(std::string *)local_48);
                  // [seh] local_8 = 5;
                  ghidra::lib::vector__push_back(*(ghidra::vector **)((char *)this + 8),pbVar7);
                  // [seh] local_8 = 2;
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
              ghidra::lib::basic_string__push_back
                        ((std::string *)local_30,*(char *)((int)puVar10 + uVar14));
              local_68 = local_68 + 1;
            }
          }
        }
LAB_0042dc2e:
        uVar14 = uVar14 + 1;
      } while (uVar14 < in_stack_00000018);
      if (local_20 != 0) {
        if ((int)param_2 < local_68 + iVar16) {
          pbVar7 = (std::string *)
                   ghidra::str::ctor
                             ((std::string *)local_60,(std::string *)local_48);
          // [seh] local_8 = 7;
          ghidra::lib::vector__push_back(*(ghidra::vector **)((char *)this + 8),pbVar7);
          // [seh] local_8 = 2;
          if (0xf < local_4c) {
            pnVar13 = (nothrow_t *)(local_4c + 1);
            ppppuVar8 = (undefined4 ****)local_60[0];
            if ((nothrow_t *)0xfff < pnVar13) {
              ppppuVar8 = (undefined4 ****)local_60[0][-1];
              pnVar13 = (nothrow_t *)(local_4c + 0x24);
              uVar4 = local_8;
              if (0x1f < (uint)((int)local_60[0] + (-4 - (int)ppppuVar8))) {
LAB_0042dc94:
                // [seh] local_8 = uVar4;
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
          ghidra::str::assign((std::string *)local_48,(char *)ppppcVar9,local_20);
        }
        else {
          ppppcVar9 = local_30;
          if (0xf < local_1c) {
            ppppcVar9 = (char ****)local_30[0];
          }
          uStack_9c = 0x42dcd4;
          ghidra::str::append((std::string *)local_48,(char *)ppppcVar9,local_20);
        }
      }
      if (local_38 != 0) {
        pvVar1 = *(ghidra::vector **)((char *)this + 8);
        pbVar7 = *(std::string **)(pvVar1 + 4);
        if (*(std::string **)(pvVar1 + 8) == pbVar7) {
          uStack_9c = 0x42dd01;
          ghidra::lib::vector___Emplace_reallocate
                    (pvVar1,(std::string *)pbVar7,(std::string *)local_48);
        }
        else {
          ghidra::str::ctor(pbVar7,(std::string *)local_48);
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
    pvVar1 = *(ghidra::vector **)((char *)this + 8);
    pbVar7 = *(std::string **)(pvVar1 + 4);
    if (*(std::string **)(pvVar1 + 8) == pbVar7) {
      uStack_9c = 0x42de71;
      ghidra::lib::vector___Emplace_reallocate
                (pvVar1,(std::string *)pbVar7,(std::string *)&param_3);
    }
    else {
      ghidra::str::ctor(pbVar7,(std::string *)&param_3);
      *(int *)(pvVar1 + 4) = *(int *)(pvVar1 + 4) + 0x18;
    }
  }
  piVar17 = *(int **)((char *)this + 8);
  pbVar15 = (std::string *)*piVar17;
  if (*(uint *)((char *)this + 0x1c) < (uint)((piVar17[1] - (int)pbVar15) / 0x18)) {
    do {
      ghidra::lib::_Move_unchecked___x28_x29(pbVar15,pbVar6,unaff_EDI);
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
      piVar17 = *(int **)((char *)this + 8);
      pbVar15 = (std::string *)*piVar17;
    } while (*(uint *)((char *)this + 0x1c) < (uint)((piVar17[1] - (int)pbVar15) / 0x18));
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
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall TextEngine::addBlankLine(TextEngine *this)
void TextEngine::addBlankLine()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  ghidra::vector *this_00;
  std::string *pbVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  void *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint uStack_28;
  uint local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  // [seh] puStack_18 = &DAT_005b3e68;
  // [seh] local_1c = ExceptionList;
  // [cookie] local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  // [seh] ExceptionList = &local_1c;
  local_2c = 0;
  uStack_28 = 0xf;
  local_3c = (void *)((uint)local_3c & 0xffffff00);
  local_14 = 0;
  this_00 = *(ghidra::vector **)((char *)this + 8);
  pbVar1 = *(std::string **)(this_00 + 4);
  if (*(std::string **)(this_00 + 8) == pbVar1) {
    ghidra::lib::vector___Emplace_reallocate(this_00,pbVar1,(std::string *)&local_3c);
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
    // [seh] puStack_20 = &stack0xfffffffc;
  }
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// Ghidra: void __thiscall TextEngine::addLine(TextEngine *this,void *param_2)
void TextEngine::addLine(void * param_2)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  uint in_stack_00000018;
  std::string abStack_34 [12];
  undefined4 uStack_28;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b2dc8;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  ghidra::str::ctor(abStack_34,(std::string *)&param_2);
  addLineWithWrap(this,*(undefined4 *)((char *)this + 0x20));
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
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall TextEngine::addLinef(TextEngine *this,char *param_1,...)
void TextEngine::addLinef(char * param_1, ...)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x0000000c[1] = {0};  // [pseudo] address of an unnamed stack slot
  char cVar1;
  char *pcVar2;
  char *unaff_ESI;
  char *in_stack_00000008;
  std::string local_402c [12];
  undefined4 uStack_4020;
  va_list in_stack_ffffbff0;
  char local_400c [16388];
  uint local_8;
  
  // [cookie] local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  uStack_4020 = 0x42e03a;
  _vsnprintf(in_stack_00000008,(size_t)&stack0x0000000c,unaff_ESI,in_stack_ffffbff0);
  pcVar2 = local_400c;
  local_402c[0] = (std::string)0x0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ghidra::str::assign(local_402c,local_400c,(int)pcVar2 - (int)(local_400c + 1));
  addLine((TextEngine *)param_1);
  // [cookie] __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall TextEngine::setBottomText(TextEngine *this,basic_string<> *param_2)
void TextEngine::setBottomText(std::string * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  char *pcVar2;
  std::string *pbVar3;
  nothrow_t *pnVar4;
  uint uVar5;
  std::string *pbVar6;
  std::string *pbVar7;
  uint unaff_EDI;
  uint in_stack_00000014;
  uint in_stack_00000018;
  undefined2 uStack0000001c;
  TextEngine TStack0000001e;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  uVar5 = in_stack_00000018;
  pbVar6 = param_2;
  // [seh] puStack_c = &DAT_005b3e98;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  *(undefined2 *)((char *)this + 0x5f) = uStack0000001c;
  ((char *)this)[0x61] = TStack0000001e;
  bVar1 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar2,unaff_EDI);
  pbVar7 = (std::string *)((char *)this + 0x44);
  if (bVar1) {
    ghidra::str::assign(pbVar7,"",0);
    ((char *)this)[0x29] = (byte)0x0;
    uVar5 = in_stack_00000018;
    pbVar6 = param_2;
  }
  else {
    if (pbVar7 != (std::string *)&param_2) {
      pbVar3 = (std::string *)&param_2;
      if (0xf < uVar5) {
        pbVar3 = pbVar6;
      }
      ghidra::str::assign(pbVar7,(char *)pbVar3,in_stack_00000014);
      uVar5 = in_stack_00000018;
      pbVar6 = param_2;
    }
    ((char *)this)[0x29] = (byte)0x1;
  }
  if (0xf < uVar5) {
    pnVar4 = (nothrow_t *)(uVar5 + 1);
    pbVar7 = pbVar6;
    if ((nothrow_t *)0xfff < pnVar4) {
      pbVar7 = *(std::string **)(pbVar6 + -4);
      pnVar4 = (nothrow_t *)(uVar5 + 0x24);
      if ((std::string *)0x1f < pbVar6 + (-4 - (int)pbVar7)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar7,pnVar4);
  }
  // [seh] ExceptionList = local_10;
  return;
}
