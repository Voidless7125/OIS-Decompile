// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: bool __thiscall BankAccount::addTransaction(BankAccount *this,undefined4 param_1,int param_2,void *param_4)
bool BankAccount::addTransaction(undefined4 param_1, int param_2, void * param_4)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff60[1] = {0};  // [pseudo] address of an unnamed stack slot
  BankTransaction *pBVar1;
  undefined1 uVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000020;
  std::string local_d0 [12];
  undefined4 uStack_c4;
  std::string local_b8 [12];
  undefined4 uStack_ac;
  std::string local_9c [12];
  undefined4 local_90;
  void *local_78 [4];
  undefined4 local_68;
  uint local_64;
  undefined1 *local_5c;
  undefined1 *local_58;
  Stats *local_54;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
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
  // [seh] puStack_18 = &DAT_005babd9;
  // [seh] local_1c = ExceptionList;
  // [cookie] local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  // [seh] ExceptionList = &local_1c;
  local_14 = 0;
  if (*(int *)((char *)this + 0x1c) + param_2 < 0) {
    local_4d = 0;
    // [seh] puStack_20 = &stack0xfffffffc;
  }
  else {
    ghidra::str::ctor((std::string *)local_78,(std::string *)&param_4);
    if (0xf < local_64) {
      pnVar4 = (nothrow_t *)(local_64 + 1);
      pvVar3 = local_78[0];
      if ((nothrow_t *)0xfff < pnVar4) {
        pvVar3 = *(void **)((int)local_78[0] + -4);
        pnVar4 = (nothrow_t *)(local_64 + 0x24);
        if (0x1f < (uint)((int)local_78[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      local_90 = 0x481a49;
      operator_delete(pvVar3,pnVar4);
    }
    local_9c[0] = (std::string)0x0;
    if (param_2 < 1) {
      local_5c = local_9c;
      ghidra::str::assign(local_9c,"money_spent",0xb);
      local_14._0_1_ = 5;
      if (Singleton<Stats>::instance == (Stats *)0x0) {
        local_54 = operator_new(0x58);
        local_14._0_1_ = 6;
        Singleton<Stats>::instance = (Stats *)new ((void *)(local_54)) Stats();
      }
      local_14._0_1_ = 0;
      Stats::addStat();
      local_5c = &stack0xffffff60;
      local_90 = 0;
      uStack_ac = 0x481b7e;
      ghidra::str::assign((std::string *)&stack0xffffff60,"",0);
      local_54 = (Stats *)local_b8;
      local_14._0_1_ = 7;
      local_b8[0] = (std::string)0x0;
      uStack_c4 = 0x481ba7;
      ghidra::str::assign(local_b8,"money_spent",0xb);
      local_14._0_1_ = 8;
    }
    else {
      local_58 = local_9c;
      ghidra::str::assign(local_9c,"money_made",10);
      local_14._0_1_ = 1;
      if (Singleton<Stats>::instance == (Stats *)0x0) {
        local_54 = operator_new(0x58);
        local_14._0_1_ = 2;
        Singleton<Stats>::instance = (Stats *)new ((void *)(local_54)) Stats();
      }
      local_14._0_1_ = 0;
      (Singleton<Stats>::instance)->addStat();
      local_54 = (Stats *)&stack0xffffff60;
      local_90 = 0;
      uStack_ac = 0x481ad8;
      ghidra::str::assign((std::string *)&stack0xffffff60,"",0);
      local_58 = local_b8;
      local_14._0_1_ = 3;
      local_b8[0] = (std::string)0x0;
      uStack_c4 = 0x481b01;
      ghidra::str::assign(local_b8,"money_made",10);
      local_14._0_1_ = 4;
    }
    local_d0[0] = (std::string)0x0;
    ghidra::str::assign(local_d0,"commerce",8);
    local_14._0_1_ = 0;
    Analytics::logEvent();
    *(int *)((char *)this + 0x1c) = *(int *)((char *)this + 0x1c) + param_2;
    ghidra::str::ctor((std::string *)local_78,(std::string *)&param_4);
    local_40 = *(undefined4 *)((char *)this + 0x1c);
    local_48 = *(undefined4 *)this;
    local_14._0_1_ = 9;
    local_4c = 0xffffffff;
    local_44 = param_2;
    ghidra::str::ctor((std::string *)&local_3c,(std::string *)local_78);
    local_14._0_1_ = 0;
    if (0xf < local_64) {
      pnVar4 = (nothrow_t *)(local_64 + 1);
      pvVar3 = local_78[0];
      if ((nothrow_t *)0xfff < pnVar4) {
        pvVar3 = *(void **)((int)local_78[0] + -4);
        pnVar4 = (nothrow_t *)(local_64 + 0x24);
        if (0x1f < (uint)((int)local_78[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      local_90 = 0x481c41;
      operator_delete(pvVar3,pnVar4);
    }
    local_68 = 0;
    local_64 = 0xf;
    local_78[0] = (void *)((uint)local_78[0] & 0xffffff00);
    local_14 = CONCAT31(local_14._1_3_,10);
    pBVar1 = *(BankTransaction **)((char *)this + 0x24);
    if (*(BankTransaction **)((char *)this + 0x28) == pBVar1) {
      local_90 = 0x481cac;
      ghidra::lib::vector___Emplace_reallocate
                ((ghidra::vector *)((char *)this + 0x20),pBVar1,(BankTransaction *)&local_4c);
      if (0xf < uStack_28) {
        pnVar4 = (nothrow_t *)(uStack_28 + 1);
        pvVar3 = local_3c;
        if ((nothrow_t *)0xfff < pnVar4) {
          pvVar3 = *(void **)((int)local_3c + -4);
          pnVar4 = (nothrow_t *)(uStack_28 + 0x24);
          if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        local_90 = 0x481cdf;
        operator_delete(pvVar3,pnVar4);
      }
    }
    else {
      *(undefined4 *)pBVar1 = local_4c;
      *(undefined4 *)(pBVar1 + 4) = local_48;
      *(int *)(pBVar1 + 8) = local_44;
      *(undefined4 *)(pBVar1 + 0xc) = local_40;
      *(undefined4 *)(pBVar1 + 0x20) = 0;
      *(undefined4 *)(pBVar1 + 0x24) = 0;
      *(void **)(pBVar1 + 0x10) = local_3c;
      *(undefined4 *)(pBVar1 + 0x14) = uStack_38;
      *(undefined4 *)(pBVar1 + 0x18) = uStack_34;
      *(undefined4 *)(pBVar1 + 0x1c) = uStack_30;
      *(ulonglong *)(pBVar1 + 0x20) = CONCAT44(uStack_28,local_2c);
      *(int *)((char *)this + 0x24) = *(int *)((char *)this + 0x24) + 0x28;
    }
    local_4d = 1;
  }
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar3 = param_4;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_4 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_4 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    local_90 = 0x481d19;
    operator_delete(pvVar3,pnVar4);
  }
  // [seh] ExceptionList = local_1c;
  // [cookie] uVar2 = __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return (bool)uVar2;
}
