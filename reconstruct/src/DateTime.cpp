// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall DateTime::setFromString(DateTime *this,void *param_2)
void DateTime::setFromString(void * param_2)

{
  int iVar1;
  char *pcVar2;
  void *pvVar3;
  int iVar4;
  nothrow_t *pnVar5;
  uint in_stack_00000018;
  std::string abStack_6c [12];
  undefined4 uStack_60;
  void *local_44 [5];
  uint local_30;
  std::string *local_2c;
  int local_28;
  char *local_20;
  int local_1c;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005be500;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  ghidra::str::ctor(abStack_6c,(std::string *)&param_2);
  splitStringBy();
  // [seh] local_8._0_1_ = 1;
  iVar1 = local_28 - (int)local_2c >> 0x1f;
  iVar4 = (local_28 - (int)local_2c) / 0x18 + iVar1;
  if (iVar4 == iVar1) {
    uStack_60 = 0x4b3679;
    debugPrint("DETAIL","Warning: null data attempting to be parsed as DateTime");
  }
  else if (iVar4 - iVar1 == 1) {
    ghidra::str::ctor(abStack_6c,local_2c);
    parseDate(this);
  }
  else {
    ghidra::str::ctor(abStack_6c,local_2c);
    parseDate(this);
    ghidra::str::ctor((std::string *)local_44,local_2c + 0x18);
    // [seh] local_8._0_1_ = 2;
    ghidra::str::ctor(abStack_6c,(std::string *)local_44);
    splitStringBy();
    // [seh] local_8._0_1_ = 3;
    if ((uint)((local_1c - (int)local_20) / 0x18) < 2) {
      uStack_60 = 0x4b3705;
      debugPrint("DETAIL","Warning: bad data attempting to be parsed as date in DateTime");
      ghidra::lib::vector___Tidy((ghidra::vector *)&local_20);
      if (local_30 < 0x10) goto LAB_004b37ac;
      pnVar5 = (nothrow_t *)(local_30 + 1);
      pvVar3 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar5) {
        pnVar5 = (nothrow_t *)(local_30 + 0x24);
        pvVar3 = *(void **)((int)local_44[0] + -4);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)*(void **)((int)local_44[0] + -4)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
    }
    else {
      pcVar2 = local_20;
      if (0xf < *(uint *)(local_20 + 0x14)) {
        pcVar2 = *(char **)local_20;
      }
      iVar1 = atoi(pcVar2);
      *(int *)((char *)this + 8) = iVar1;
      pcVar2 = local_20 + 0x18;
      if (0xf < *(uint *)(local_20 + 0x2c)) {
        pcVar2 = *(char **)pcVar2;
      }
      iVar1 = atoi(pcVar2);
      *(int *)((char *)this + 4) = iVar1;
      ghidra::lib::vector___Tidy((ghidra::vector *)&local_20);
      if (local_30 < 0x10) goto LAB_004b37ac;
      pnVar5 = (nothrow_t *)(local_30 + 1);
      pvVar3 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar5) {
        pvVar3 = *(void **)((int)local_44[0] + -4);
        pnVar5 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
    }
    uStack_60 = 0x4b37a9;
    operator_delete(pvVar3,pnVar5);
  }
LAB_004b37ac:
  ghidra::lib::vector___Tidy((ghidra::vector *)&local_2c);
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar3 = param_2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar3 = *(void **)((int)param_2 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_60 = 0x4b37e7;
    operator_delete(pvVar3,pnVar5);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall DateTime::parseDate(DateTime *this,void *param_2)
void DateTime::parseDate(void * param_2)

{
  int iVar1;
  char *pcVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000018;
  std::string abStack_44 [12];
  undefined4 uStack_38;
  char *local_1c;
  int local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005be530;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  ghidra::str::ctor(abStack_44,(std::string *)&param_2);
  splitStringBy();
  // [seh] local_8 = CONCAT31(local_8._1_3_,1);
  if ((uint)((local_18 - (int)local_1c) / 0x18) < 3) {
    uStack_38 = 0x4b387c;
    debugPrint("DETAIL","Warning: bad data attempting to be parsed as date in DateTime");
  }
  else {
    pcVar2 = local_1c;
    if (0xf < *(uint *)(local_1c + 0x14)) {
      pcVar2 = *(char **)local_1c;
    }
    iVar1 = atoi(pcVar2);
    *(int *)((char *)this + 0x14) = iVar1;
    pcVar2 = local_1c + 0x18;
    if (0xf < *(uint *)(local_1c + 0x2c)) {
      pcVar2 = *(char **)pcVar2;
    }
    iVar1 = atoi(pcVar2);
    *(int *)((char *)this + 0x10) = iVar1 + -1;
    pcVar2 = local_1c + 0x30;
    if (0xf < *(uint *)(local_1c + 0x44)) {
      pcVar2 = *(char **)pcVar2;
    }
    iVar1 = atoi(pcVar2);
    *(int *)((char *)this + 0xc) = iVar1;
  }
  ghidra::lib::vector___Tidy((ghidra::vector *)&local_1c);
  if (0xf < in_stack_00000018) {
    pnVar4 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar3 = param_2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_2 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_38 = 0x4b3902;
    operator_delete(pvVar3,pnVar4);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall DateTime::decrement(DateTime *this,int param_1)
void DateTime::decrement(int param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  uint uVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  int iVar4;
  nothrow_t *pnVar5;
  undefined4 ***local_48 [5];
  uint local_34;
  undefined4 ***local_30 [5];
  uint local_1c;
  uint local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005be560;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_18 = uVar1;
  debugPrint("DETAIL","Decrementing date/time by %d hours",param_1,uVar1);
  strUsingArgs((char *)local_30,"%02d-%02d-%02d %d:%d",*(undefined4 *)((char *)this + 0x14),
               *(undefined4 *)((char *)this + 0x10),*(undefined4 *)((char *)this + 0xc),*(undefined4 *)((char *)this + 8),
               *(undefined4 *)((char *)this + 4));
  // [seh] local_8 = 0;
  ppppuVar3 = local_30;
  if (0xf < local_1c) {
    ppppuVar3 = (undefined4 ****)local_30[0];
  }
  debugPrint("DETAIL","Beginning date - %s",ppppuVar3,uVar1);
  // [seh] local_8 = 0xffffffff;
  if (0xf < local_1c) {
    pnVar5 = (nothrow_t *)(local_1c + 1);
    ppppuVar3 = (undefined4 ****)local_30[0];
    if ((nothrow_t *)0xfff < pnVar5) {
      ppppuVar3 = (undefined4 ****)local_30[0][-1];
      pnVar5 = (nothrow_t *)(local_1c + 0x24);
      if (0x1f < (uint)((int)local_30[0] + (-4 - (int)ppppuVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppuVar3,pnVar5);
  }
  iVar4 = *(int *)((char *)this + 8);
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      iVar4 = iVar4 + -1;
      if (iVar4 < 0) {
        *(int *)((char *)this + 0xc) = *(int *)((char *)this + 0xc) + -1;
        iVar4 = 0x17;
        if (*(int *)((char *)this + 0xc) < 1) {
          iVar2 = *(int *)((char *)this + 0x10) + -1;
          *(int *)((char *)this + 0x10) = iVar2;
          if (iVar2 < 0) {
            *(int *)((char *)this + 0x14) = *(int *)((char *)this + 0x14) + -1;
            iVar2 = 0xb;
            *(undefined4 *)((char *)this + 0x10) = 0xb;
          }
          *(undefined4 *)((char *)this + 0xc) = *(undefined4 *)(&DAT_005e00e4 + iVar2 * 4);
        }
      }
    } while (0 < param_1);
    *(int *)((char *)this + 8) = iVar4;
  }
  strUsingArgs((char *)local_48,"%02d-%02d-%02d %d:%d",*(undefined4 *)((char *)this + 0x14),
               *(undefined4 *)((char *)this + 0x10),*(undefined4 *)((char *)this + 0xc),iVar4,
               *(undefined4 *)((char *)this + 4));
  // [seh] local_8 = 1;
  ppppuVar3 = local_48;
  if (0xf < local_34) {
    ppppuVar3 = (undefined4 ****)local_48[0];
  }
  debugPrint("DETAIL","New date - %s",ppppuVar3);
  if (0xf < local_34) {
    pnVar5 = (nothrow_t *)(local_34 + 1);
    ppppuVar3 = (undefined4 ****)local_48[0];
    if ((nothrow_t *)0xfff < pnVar5) {
      ppppuVar3 = (undefined4 ****)local_48[0][-1];
      pnVar5 = (nothrow_t *)(local_34 + 0x24);
      if (0x1f < (uint)((int)local_48[0] + (-4 - (int)ppppuVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppuVar3,pnVar5);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}
