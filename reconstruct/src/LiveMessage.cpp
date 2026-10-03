// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall LiveMessage::generateRealMessage(LiveMessage *this)
void LiveMessage::generateRealMessage()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  int iVar2;
  std::string *pbVar3;
  char *pcVar4;
  int iVar5;
  std::string *pbVar6;
  LiveMessage *pLVar7;
  char *pcVar8;
  void *pvVar9;
  nothrow_t *pnVar10;
  uint uVar11;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b4030;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  pbVar6 = (std::string *)((char *)this + 0x1c);
  *(undefined4 *)((char *)this + 0x2c) = 0;
  pbVar3 = pbVar6;
  if (0xf < *(uint *)((char *)this + 0x30)) {
    pbVar3 = *(std::string **)pbVar6;
  }
  *pbVar3 = (std::string)0x0;
  pLVar7 = this + 4;
  if (0xf < *(uint *)((char *)this + 0x18)) {
    pLVar7 = *(LiveMessage **)pLVar7;
  }
  pcVar4 = (char *)strUsingArgs((char *)local_2c,"`%c%s: ",(int)(char)(&DAT_005d06c0)[*(int *)this],
                                pLVar7,local_14);
  // [seh] local_8 = 0;
  pcVar8 = pcVar4;
  if (0xf < *(uint *)(pcVar4 + 0x14)) {
    pcVar8 = *(char **)pcVar4;
  }
  ghidra::str::append(pbVar6,pcVar8,*(uint *)(pcVar4 + 0x10));
  // [seh] local_8 = 0xffffffff;
  if (0xf < local_18) {
    pnVar10 = (nothrow_t *)(local_18 + 1);
    pvVar9 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar10) {
      pvVar9 = *(void **)((int)local_2c[0] + -4);
      pnVar10 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
LAB_0042f234:
        // [seh] local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar9,pnVar10);
  }
  if (*(int *)((char *)this + 0x34) == 100) {
    pLVar7 = this + 0x38;
    if (0xf < *(uint *)((char *)this + 0x4c)) {
      pLVar7 = *(LiveMessage **)((char *)this + 0x38);
    }
    ghidra::str::append(pbVar6,(char *)pLVar7,*(uint *)((char *)this + 0x48));
  }
  else {
    uVar11 = 0;
    bVar1 = false;
    if (*(int *)((char *)this + 0x48) != 0) {
      do {
        iVar5 = rand();
        iVar2 = DAT_006576d0;
        if (*(int *)((char *)this + 0x34) < iVar5 % 100 + 1) {
          bVar1 = true;
          iVar5 = rand();
          pbVar6 = &randomChars;
          if (0xf < DAT_006576d4) {
            pbVar6 = _randomChars;
          }
          pcVar4 = (char *)strUsingArgs((char *)local_2c,"`%c%c",
                                        (int)(char)(&DAT_005d06c4)[*(int *)this],
                                        (int)(char)pbVar6[iVar5 % iVar2]);
          // [seh] local_8 = 1;
          pcVar8 = pcVar4;
          if (0xf < *(uint *)(pcVar4 + 0x14)) {
            pcVar8 = *(char **)pcVar4;
          }
          ghidra::str::append
                    ((std::string *)((char *)this + 0x1c),pcVar8,*(uint *)(pcVar4 + 0x10));
          // [seh] local_8 = 0xffffffff;
          if (0xf < local_18) {
            pnVar10 = (nothrow_t *)(local_18 + 1);
            pvVar9 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar10) {
              pvVar9 = *(void **)((int)local_2c[0] + -4);
              pnVar10 = (nothrow_t *)(local_18 + 0x24);
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) goto LAB_0042f234;
            }
            operator_delete(pvVar9,pnVar10);
          }
        }
        else {
          pLVar7 = this + 0x38;
          if (bVar1) {
            bVar1 = false;
            if (0xf < *(uint *)((char *)this + 0x4c)) {
              pLVar7 = *(LiveMessage **)pLVar7;
            }
            pcVar4 = (char *)strUsingArgs((char *)local_2c,"`%c%c",
                                          (int)(char)(&DAT_005d06c0)[*(int *)this],
                                          (int)(char)pLVar7[uVar11]);
            // [seh] local_8 = 2;
            pcVar8 = pcVar4;
            if (0xf < *(uint *)(pcVar4 + 0x14)) {
              pcVar8 = *(char **)pcVar4;
            }
            ghidra::str::append
                      ((std::string *)((char *)this + 0x1c),pcVar8,*(uint *)(pcVar4 + 0x10));
            // [seh] local_8 = 0xffffffff;
            if (0xf < local_18) {
              pnVar10 = (nothrow_t *)(local_18 + 1);
              pvVar9 = local_2c[0];
              if ((nothrow_t *)0xfff < pnVar10) {
                pvVar9 = *(void **)((int)local_2c[0] + -4);
                pnVar10 = (nothrow_t *)(local_18 + 0x24);
                if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) goto LAB_0042f234;
              }
              operator_delete(pvVar9,pnVar10);
            }
          }
          else {
            if (0xf < *(uint *)((char *)this + 0x4c)) {
              pLVar7 = *(LiveMessage **)pLVar7;
            }
            pcVar4 = (char *)strUsingArgs((char *)local_44,"%c",(int)(char)pLVar7[uVar11]);
            // [seh] local_8 = 3;
            pcVar8 = pcVar4;
            if (0xf < *(uint *)(pcVar4 + 0x14)) {
              pcVar8 = *(char **)pcVar4;
            }
            ghidra::str::append
                      ((std::string *)((char *)this + 0x1c),pcVar8,*(uint *)(pcVar4 + 0x10));
            // [seh] local_8 = 0xffffffff;
            if (0xf < local_30) {
              pnVar10 = (nothrow_t *)(local_30 + 1);
              pvVar9 = local_44[0];
              if ((nothrow_t *)0xfff < pnVar10) {
                pvVar9 = *(void **)((int)local_44[0] + -4);
                pnVar10 = (nothrow_t *)(local_30 + 0x24);
                if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9))) goto LAB_0042f234;
              }
              operator_delete(pvVar9,pnVar10);
            }
            local_34 = 0;
            local_30 = 0xf;
            local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)((char *)this + 0x48));
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
