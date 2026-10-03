// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: PossibleLocation * __thiscall PossibleLocation::PossibleLocation(PossibleLocation *this,void *param_2)
PossibleLocation::PossibleLocation(void * param_2)

{
  char stack0xffffffa8[1] = {0};  // [pseudo] address of an unnamed stack slot
  MetaGameAction **ppMVar1;
  char *pcVar2;
  Requirement *pRVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  int iVar6;
  double dVar7;
  uint in_stack_00000018;
  char *local_24;
  int local_20;
  uint local_18;
  MetaGameAction *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined1 local_8;
  undefined3 uStack_7;
  
  // [seh] puStack_c = &DAT_005b1613;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((char *)this + 4) = 0;
  *(undefined4 *)((char *)this + 8) = 0;
  *(undefined4 *)((char *)this + 0xc) = 0;
  *(undefined4 *)((char *)this + 0x10) = 0;
  // [seh] local_8 = 2;
  uStack_7 = 0;
  local_14 = (MetaGameAction *)this;
  ghidra::str::ctor((std::string *)&stack0xffffffa8,(std::string *)&param_2)
  ;
  splitStringBy();
  _local_8 = CONCAT31(uStack_7,3);
  if (1 < (uint)((local_20 - (int)local_24) / 0x18)) {
    pcVar2 = local_24;
    if (0xf < *(uint *)(local_24 + 0x14)) {
      pcVar2 = *(char **)local_24;
    }
    dVar7 = atof(pcVar2);
    pcVar2 = local_24 + 0x18;
    *(float *)this = (float)dVar7;
    if (0xf < *(uint *)(local_24 + 0x2c)) {
      pcVar2 = *(char **)pcVar2;
    }
    dVar7 = atof(pcVar2);
    *(float *)((char *)this + 4) = (float)dVar7;
    local_18 = 2;
    if (2 < (uint)((local_20 - (int)local_24) / 0x18)) {
      iVar6 = 0x30;
      do {
        pRVar3 = operator_new(0x40);
        // [seh] local_8 = 4;
        ghidra::str::ctor
                  ((std::string *)&stack0xffffffa8,(std::string *)(local_24 + iVar6));
        local_14 = (MetaGameAction *)new ((void *)(pRVar3)) Requirement();
        _local_8 = CONCAT31(uStack_7,3);
        ppMVar1 = *(MetaGameAction ***)((char *)this + 0xc);
        if (*(MetaGameAction ***)((char *)this + 0x10) == ppMVar1) {
          ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)((char *)this + 8),ppMVar1,&local_14);
        }
        else {
          *ppMVar1 = local_14;
          *(int *)((char *)this + 0xc) = *(int *)((char *)this + 0xc) + 4;
        }
        iVar6 = iVar6 + 0x18;
        local_18 = local_18 + 1;
      } while (local_18 < (uint)((local_20 - (int)local_24) / 0x18));
    }
    debugPrint("DETAIL","PossibleLocation() - %f, %f, with %d requirements");
  }
  ghidra::lib::vector___Tidy((ghidra::vector *)&local_24);
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar4 = param_2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)param_2 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  // [seh] ExceptionList = local_10;
  return;
}
