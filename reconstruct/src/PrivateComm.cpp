// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall PrivateComm::reset(PrivateComm *this)
void PrivateComm::reset()

{
  PrivateCommElement *pPVar1;
  PrivateCommElement *this_00;
  
  *(undefined4 *)((char *)this + 0x28) = 0;
  *(undefined4 *)((char *)this + 0x24) = 0;
  *(undefined4 *)((char *)this + 8) = 0;
  ((char *)this)[1] = (byte)0x0;
  pPVar1 = *(PrivateCommElement **)((char *)this + 0x48);
  this_00 = *(PrivateCommElement **)((char *)this + 0x44);
  if (this_00 != pPVar1) {
    do {
      (this_00)->~PrivateCommElement();
      this_00 = this_00 + 0x38;
    } while (this_00 != pPVar1);
    *(undefined4 *)((char *)this + 0x48) = *(undefined4 *)((char *)this + 0x44);
    return;
  }
  *(PrivateCommElement **)((char *)this + 0x48) = this_00;
  return;
}


// Ghidra: basic_string<> * __thiscall PrivateComm::describeSource(PrivateComm *this)
std::string * PrivateComm::describeSource()

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  std::string *in_stack_00000004;
  
  iVar1 = *(int *)((char *)this + 8);
  if (iVar1 != 0) {
    piVar2 = (int *)(iVar1 + 8);
    if (0xf < *(uint *)(iVar1 + 0x1c)) {
      piVar2 = (int *)*piVar2;
    }
    puVar3 = (undefined4 *)(iVar1 + 0x238);
    if (0xf < *(uint *)(iVar1 + 0x24c)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    strUsingArgs((char *)in_stack_00000004,"%s / %s",puVar3,piVar2);
    return in_stack_00000004;
  }
  ghidra::str::ctor(in_stack_00000004,(std::string *)((char *)this + 0xc));
  return in_stack_00000004;
}


// Ghidra: void __thiscall PrivateComm::render(PrivateComm *this,basic_string<> *param_1,basic_string<> *param_2)
void PrivateComm::render(std::string * param_1, std::string * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  char *pcVar2;
  std::string *pbVar3;
  FlagManager *pFVar4;
  char *pcVar5;
  int iVar6;
  std::string *pbVar7;
  uint uVar8;
  void *pvVar9;
  char *pcVar10;
  nothrow_t *pnVar11;
  int iVar12;
  uint unaff_EDI;
  int iVar13;
  std::string local_84 [8];
  undefined4 uStack_7c;
  uint local_48;
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b4160;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  iVar13 = *(int *)((char *)this + 0x44) + *(int *)((char *)this + 0x28) * 0x38;
  pcVar10 = (char *)(iVar13 + 8);
  if (0xf < *(uint *)(*(int *)((char *)this + 0x44) + 0x1c + *(int *)((char *)this + 0x28) * 0x38)) {
    pcVar10 = *(char **)(iVar13 + 8);
  }
  local_14 = pcVar2;
  ghidra::str::append(param_1,pcVar10,*(uint *)(iVar13 + 0x18));
  iVar13 = *(int *)((char *)this + 0x28);
  local_48 = 0;
  iVar6 = *(int *)(*(int *)((char *)this + 0x44) + 0x30 + iVar13 * 0x38) -
          *(int *)(*(int *)((char *)this + 0x44) + 0x2c + iVar13 * 0x38);
  iVar12 = iVar6 >> 0x1f;
  if (iVar6 / 0xa8 + iVar12 != iVar12) {
    iVar12 = 0;
    do {
      if (*(int *)(iVar12 + 100 + *(int *)(*(int *)((char *)this + 0x44) + 0x2c + iVar13 * 0x38)) != 0) {
        local_84[0] = (std::string)0x0;
        ghidra::str::assign(local_84,"",0);
        bVar1 = ghidra::lib::_Func_class__operator_x28_x29
                          ((ghidra::func_class *)
                           (*(int *)(*(int *)((char *)this + 0x44) + 0x2c + *(int *)((char *)this + 0x28) * 0x38) +
                            0x40 + iVar12),*(undefined4 *)(g_gameData + 0xd0),0);
        if (bVar1) goto LAB_0042fc2e;
        goto LAB_0042fe46;
      }
LAB_0042fc2e:
      iVar13 = *(int *)(*(int *)((char *)this + 0x44) + 0x2c + *(int *)((char *)this + 0x28) * 0x38);
      bVar1 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar2,unaff_EDI);
      if (bVar1) {
LAB_0042fd14:
        if (local_48 != 0) {
          ghidra::str::append(param_2,"\n",1);
        }
        if (local_48 == *(uint *)((char *)this + 0x24)) {
          uStack_7c = 0x42fd5e;
          pcVar5 = (char *)strUsingArgs((char *)local_44);
          // [seh] local_8 = 2;
          pcVar10 = pcVar5;
          if (0xf < *(uint *)(pcVar5 + 0x14)) {
            pcVar10 = *(char **)pcVar5;
          }
          ghidra::str::append(param_2,pcVar10,*(uint *)(pcVar5 + 0x10));
          // [seh] local_8 = 0xffffffff;
          if (0xf < local_30) {
            pnVar11 = (nothrow_t *)(local_30 + 1);
            pvVar9 = local_44[0];
            if ((nothrow_t *)0xfff < pnVar11) {
              pvVar9 = *(void **)((int)local_44[0] + -4);
              pnVar11 = (nothrow_t *)(local_30 + 0x24);
              if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9))) {
LAB_0042fead:
                // [seh] local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pvVar9,pnVar11);
          }
        }
        else {
          uStack_7c = 0x42fdd9;
          pcVar5 = (char *)strUsingArgs((char *)local_2c);
          // [seh] local_8 = 3;
          pcVar10 = pcVar5;
          if (0xf < *(uint *)(pcVar5 + 0x14)) {
            pcVar10 = *(char **)pcVar5;
          }
          ghidra::str::append(param_2,pcVar10,*(uint *)(pcVar5 + 0x10));
          // [seh] local_8 = 0xffffffff;
          if (0xf < local_18) {
            pnVar11 = (nothrow_t *)(local_18 + 1);
            pvVar9 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar11) {
              pvVar9 = *(void **)((int)local_2c[0] + -4);
              pnVar11 = (nothrow_t *)(local_18 + 0x24);
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) goto LAB_0042fead;
            }
            operator_delete(pvVar9,pnVar11);
          }
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        }
      }
      else {
        pbVar3 = (std::string *)(iVar13 + 0x68 + iVar12);
        pbVar7 = pbVar3;
        if (0xf < *(uint *)(pbVar3 + 0x14)) {
          pbVar7 = *(std::string **)pbVar3;
        }
        if (*pbVar7 == (std::string)0x21) {
          uVar8 = *(int *)(iVar12 + 0x78 + iVar13) - 1;
          pcVar10 = (char *)(iVar13 + 0x68 + iVar12);
          local_84[0] = (std::string)0x0;
          if (*(uint *)(pcVar10 + 0x10) < uVar8) {
            uVar8 = *(uint *)(pcVar10 + 0x10);
          }
          if (0xf < *(uint *)(pcVar10 + 0x14)) {
            pcVar10 = *(char **)pcVar10;
          }
          ghidra::str::assign(local_84,pcVar10,uVar8);
          // [seh] local_8 = 0;
          pFVar4 = ghidra::any_singleton();
          // [seh] local_8 = 0xffffffff;
          bVar1 = (pFVar4)->flagSet();
          if (!bVar1) goto LAB_0042fd14;
        }
        else {
          ghidra::str::ctor(local_84,pbVar3);
          // [seh] local_8 = 1;
          pFVar4 = ghidra::any_singleton();
          // [seh] local_8 = 0xffffffff;
          bVar1 = (pFVar4)->flagSet();
          if (bVar1) goto LAB_0042fd14;
        }
      }
LAB_0042fe46:
      iVar13 = *(int *)((char *)this + 0x28);
      iVar12 = iVar12 + 0xa8;
      local_48 = local_48 + 1;
    } while (local_48 <
             (uint)((*(int *)(*(int *)((char *)this + 0x44) + 0x30 + iVar13 * 0x38) -
                    *(int *)(*(int *)((char *)this + 0x44) + 0x2c + iVar13 * 0x38)) / 0xa8));
  }
  ghidra::str::append(param_2,"\n\n `2[`$arrows`2/`$enter`2/`$backspace`2]",0x29);
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall PrivateComm::changeElement(PrivateComm *this,int param_1)
void PrivateComm::changeElement(int param_1)

{
  bool bVar1;
  int iVar2;
  std::string local_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  
  if (0 < param_1) {
    local_14 = 0x42fed4;
    iVar2 = getNextValidElement(this);
    *(int *)((char *)this + 0x24) = iVar2;
    return;
  }
  if (param_1 < 0) {
    iVar2 = *(int *)((char *)this + 0x24);
    do {
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) {
        iVar2 = (*(int *)(*(int *)((char *)this + 0x44) + 0x30 + *(int *)((char *)this + 0x28) * 0x38) -
                *(int *)(*(int *)((char *)this + 0x44) + 0x2c + *(int *)((char *)this + 0x28) * 0x38)) / 0xa8 + -1;
      }
      if ((iVar2 == *(int *)((char *)this + 0x24)) ||
         (*(int *)(*(int *)(*(int *)((char *)this + 0x44) + 0x2c + *(int *)((char *)this + 0x28) * 0x38) + 100 +
                  iVar2 * 0xa8) == 0)) break;
      local_18 = 0;
      local_14 = 0xf;
      local_28[0] = (std::string)0x0;
      ghidra::str::assign(local_28,"",0);
      bVar1 = ghidra::lib::_Func_class__operator_x28_x29
                        ((ghidra::func_class *)
                         (*(int *)(*(int *)((char *)this + 0x44) + 0x2c + *(int *)((char *)this + 0x28) * 0x38) +
                          0x40 + iVar2 * 0xa8),*(undefined4 *)(g_gameData + 0xd0),0);
    } while (!bVar1);
    *(int *)((char *)this + 0x24) = iVar2;
  }
  return;
}


// Ghidra: int __thiscall PrivateComm::getNextValidElement(PrivateComm *this)
int PrivateComm::getNextValidElement()

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  std::string local_2c [16];
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar3 = *(uint *)((char *)this + 0x24);
  while( true ) {
    iVar1 = *(int *)(*(int *)((char *)this + 0x44) + 0x2c + *(int *)((char *)this + 0x28) * 0x38);
    uVar3 = -(uint)(uVar3 + 1 <
                   (uint)((*(int *)(*(int *)((char *)this + 0x44) + 0x30 + *(int *)((char *)this + 0x28) * 0x38) -
                          iVar1) / 0xa8)) & uVar3 + 1;
    if (uVar3 == *(uint *)((char *)this + 0x24)) {
      return uVar3;
    }
    if (*(int *)(uVar3 * 0xa8 + 100 + iVar1) == 0) break;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (std::string)0x0;
    ghidra::str::assign(local_2c,"",0);
    bVar2 = ghidra::lib::_Func_class__operator_x28_x29
                      ((ghidra::func_class *)
                       (*(int *)(*(int *)((char *)this + 0x44) + 0x2c + *(int *)((char *)this + 0x28) * 0x38) + 0x40
                       + uVar3 * 0xa8),*(undefined4 *)(g_gameData + 0xd0),0);
    if (bVar2) {
      return uVar3;
    }
  }
  return uVar3;
}


// Ghidra: int __thiscall PrivateComm::getValidatedElement(PrivateComm *this)
int PrivateComm::getValidatedElement()

{
  bool bVar1;
  int iVar2;
  std::string local_2c [16];
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar2 = *(int *)(*(int *)((char *)this + 0x44) + 0x2c + *(int *)((char *)this + 0x28) * 0x38);
  if ((uint)((*(int *)(*(int *)((char *)this + 0x44) + 0x30 + *(int *)((char *)this + 0x28) * 0x38) - iVar2) / 0xa8)
      <= *(uint *)((char *)this + 0x24)) {
    return 0;
  }
  if (*(int *)(*(uint *)((char *)this + 0x24) * 0xa8 + 100 + iVar2) != 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (std::string)0x0;
    ghidra::str::assign(local_2c,"",0);
    bVar1 = ghidra::lib::_Func_class__operator_x28_x29
                      ((ghidra::func_class *)
                       (*(int *)((char *)this + 0x24) * 0xa8 +
                        *(int *)(*(int *)((char *)this + 0x44) + 0x2c + *(int *)((char *)this + 0x28) * 0x38) + 0x40
                       ),*(undefined4 *)(g_gameData + 0xd0),0);
    if (!bVar1) {
      local_18 = 0x43010c;
      iVar2 = getNextValidElement(this);
      return iVar2;
    }
  }
  return *(int *)((char *)this + 0x24);
}


// Ghidra: int __thiscall PrivateComm::selectElement(PrivateComm *this)
int PrivateComm::selectElement()

{
  char cVar1;
  SoundEngine *pSVar2;
  int *piVar3;
  FlagManager *pFVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  std::string abStack_60 [8];
  undefined4 uStack_58;
  PrivateComm *pPStack_54;
  Ship *pSVar8;
  Sound SVar9;
  int iVar10;
  undefined4 local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b41a0;
  // [seh] local_10 = ExceptionList;
  iVar6 = *(int *)((char *)this + 0x24) * 0xa8;
  iVar10 = *(int *)(*(int *)((char *)this + 0x44) + 0x2c + *(int *)((char *)this + 0x28) * 0x38);
  iVar5 = *(int *)(iVar6 + 0x38 + iVar10);
  pPStack_54 = this;
  if (iVar5 == 0) {
    iVar10 = -1;
    SVar9 = 8;
    pSVar8 = *(Ship **)(g_gameData + 0xd0);
    uStack_58 = 0x430181;
    // [seh] ExceptionList = &local_10;
    pSVar2 = ghidra::any_singleton();
    pPStack_54 = (PrivateComm *)0x43018b;
    (pSVar2)->playSound(pSVar8, SVar9, iVar10);
    uVar7 = 0;
    iVar10 = *(int *)((char *)this + 0x48) - *(int *)((char *)this + 0x44) >> 0x1f;
    iVar5 = (*(int *)((char *)this + 0x48) - *(int *)((char *)this + 0x44)) / 0x38 + iVar10;
    if (iVar5 != iVar10) {
      piVar3 = (int *)(*(int *)((char *)this + 0x44) + 4);
      do {
        if (*piVar3 ==
            *(int *)(*(int *)((char *)this + 0x24) * 0xa8 +
                    *(int *)(*(int *)((char *)this + 0x44) + 0x2c + *(int *)((char *)this + 0x28) * 0x38))) {
          // [seh] ExceptionList = local_10;
          return uVar7;
        }
        uVar7 = uVar7 + 1;
        piVar3 = piVar3 + 0xe;
      } while (uVar7 < (uint)(iVar5 - iVar10));
    }
    // [seh] ExceptionList = local_10;
    return 0;
  }
  if (iVar5 == 1) {
    iVar10 = -1;
    SVar9 = 9;
    pSVar8 = *(Ship **)(g_gameData + 0xd0);
    uStack_58 = 0x430204;
    // [seh] ExceptionList = &local_10;
    pSVar2 = ghidra::any_singleton();
    pPStack_54 = (PrivateComm *)0x43020e;
    (pSVar2)->playSound(pSVar8, SVar9, iVar10);
    // [seh] ExceptionList = local_10;
    return -1;
  }
  if (iVar5 == 2) {
    piVar3 = *(int **)(iVar6 + 0xa4 + iVar10);
    local_14 = *(undefined4 *)(g_gameData + 0xd0);
    if (piVar3 == (int *)0x0) {
      // [seh] ExceptionList = &local_10;
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
    pPStack_54 = (PrivateComm *)&local_14;
    uStack_58 = 0x430270;
    // [seh] ExceptionList = &local_10;
    cVar1 = (**(code **)(*piVar3 + 8))();
    iVar10 = *(int *)((char *)this + 0x28);
    if (cVar1 == '\0') {
      // [seh] ExceptionList = local_10;
      return *(int *)(*(int *)(*(int *)((char *)this + 0x44) + 0x2c + iVar10 * 0x38) + 4 +
                     *(int *)((char *)this + 0x24) * 0xa8);
    }
  }
  else {
    if (iVar5 == 3) {
      // [seh] ExceptionList = &local_10;
      ghidra::str::ctor(abStack_60,(std::string *)(iVar6 + 8 + iVar10));
      // [seh] local_8 = 0;
    }
    else {
      if (iVar5 != 4) {
        return -2;
      }
      // [seh] ExceptionList = &local_10;
      ghidra::str::ctor(abStack_60,(std::string *)(iVar6 + 8 + iVar10));
      // [seh] local_8 = 1;
    }
    pFVar4 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    (pFVar4)->setFlag();
    iVar10 = *(int *)((char *)this + 0x28);
  }
  // [seh] ExceptionList = local_10;
  return *(int *)(*(int *)((char *)this + 0x24) * 0xa8 +
                 *(int *)(*(int *)((char *)this + 0x44) + 0x2c + iVar10 * 0x38));
}


// Ghidra: void __thiscall PrivateComm::~PrivateComm(PrivateComm *this)
PrivateComm::~PrivateComm()

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  PrivateCommElement *this_00;
  PrivateCommElement *pPVar5;
  
  this_00 = *(PrivateCommElement **)((char *)this + 0x44);
  if (this_00 != (PrivateCommElement *)0x0) {
    pPVar5 = *(PrivateCommElement **)((char *)this + 0x48);
    if (this_00 != pPVar5) {
      do {
        (this_00)->~PrivateCommElement();
        this_00 = this_00 + 0x38;
      } while (this_00 != pPVar5);
      this_00 = *(PrivateCommElement **)((char *)this + 0x44);
    }
    pnVar4 = (nothrow_t *)(((*(int *)((char *)this + 0x4c) - (int)this_00) / 0x38) * 0x38);
    pPVar5 = this_00;
    if ((nothrow_t *)0xfff < pnVar4) {
      pPVar5 = *(PrivateCommElement **)(this_00 + -4);
      pnVar4 = pnVar4 + 0x23;
      if ((PrivateCommElement *)0x1f < this_00 + (-4 - (int)pPVar5)) goto LAB_0043381d;
    }
    operator_delete(pPVar5,pnVar4);
    *(undefined4 *)((char *)this + 0x44) = 0;
    *(undefined4 *)((char *)this + 0x48) = 0;
    *(undefined4 *)((char *)this + 0x4c) = 0;
  }
  uVar1 = *(uint *)((char *)this + 0x40);
  if (0xf < uVar1) {
    pvVar2 = *(void **)((char *)this + 0x2c);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_0043381d;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)((char *)this + 0x3c) = 0;
  *(undefined4 *)((char *)this + 0x40) = 0xf;
  ((char *)this)[0x2c] = (byte)0x0;
  uVar1 = *(uint *)((char *)this + 0x20);
  if (0xf < uVar1) {
    pvVar2 = *(void **)((char *)this + 0xc);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) {
LAB_0043381d:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)((char *)this + 0x1c) = 0;
  *(undefined4 *)((char *)this + 0x20) = 0xf;
  ((char *)this)[0xc] = (byte)0x0;
  return;
}
