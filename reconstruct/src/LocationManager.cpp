// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall LocationManager::getNewLocation(LocationManager *this)
void LocationManager::getNewLocation()

{
  MetaGameAction **ppMVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  MetaGameAction **ppMVar8;
  uint uVar9;
  nothrow_t *pnVar10;
  undefined4 *local_30;
  MetaGameAction **local_2c;
  MetaGameAction **local_28;
  MetaGameAction **local_24;
  undefined4 *local_20;
  MetaGameAction **local_1c;
  uint local_18;
  byte local_11;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b1638;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  local_20 = (undefined4 *)0x0;
  ppMVar8 = (MetaGameAction **)0x0;
  local_30 = (undefined4 *)0x0;
  local_1c = (MetaGameAction **)0x0;
  local_2c = (MetaGameAction **)0x0;
  local_24 = (MetaGameAction **)0x0;
  local_28 = (MetaGameAction **)0x0;
  // [seh] local_8 = 0;
  iVar7 = *(int *)((char *)this + 4);
  local_18 = 0;
  if (*(int *)((char *)this + 8) - iVar7 >> 2 != 0) {
    do {
      uVar2 = local_18;
      iVar4 = *(int *)(iVar7 + local_18 * 4);
      local_11 = 1;
      local_20 = (undefined4 *)0x0;
      if (*(int *)(iVar4 + 0xc) - *(int *)(iVar4 + 8) >> 2 == 0) {
LAB_00404470:
        ppMVar1 = (MetaGameAction **)(iVar7 + local_18 * 4);
        if (ppMVar8 == local_1c) {
          ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)&local_30,local_1c,ppMVar1);
          local_24 = local_28;
          ppMVar8 = local_28;
          local_1c = local_2c;
        }
        else {
          *local_1c = *ppMVar1;
          local_2c = local_1c + 1;
          local_1c = local_2c;
        }
      }
      else {
        uVar9 = 0;
        do {
          bVar3 = Requirement::checkReq
                            (*(Requirement **)
                              (*(int *)(*(int *)(iVar7 + uVar2 * 4) + 8) + uVar9 * 4),
                             *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                             *(BankAccount **)(g_gameData + 0x124));
          uVar9 = uVar9 + 1;
          local_11 = local_11 & -bVar3;
          iVar7 = *(int *)((char *)this + 4);
          iVar4 = *(int *)(iVar7 + uVar2 * 4);
        } while (uVar9 < (uint)(*(int *)(iVar4 + 0xc) - *(int *)(iVar4 + 8) >> 2));
        ppMVar8 = local_24;
        if (local_11 != 0) goto LAB_00404470;
      }
      iVar7 = *(int *)((char *)this + 4);
      local_18 = local_18 + 1;
    } while (local_18 < (uint)(*(int *)((char *)this + 8) - iVar7 >> 2));
    local_20 = local_30;
  }
  iVar7 = (int)local_1c - (int)local_20 >> 2;
  local_30 = local_20;
  if (iVar7 == 1) {
    uVar5 = *local_20;
  }
  else {
    iVar4 = rand();
    uVar5 = local_20[iVar4 % iVar7];
  }
  *(undefined4 *)this = uVar5;
  if (local_20 != (undefined4 *)0x0) {
    pnVar10 = (nothrow_t *)((int)ppMVar8 - (int)local_20 & 0xfffffffc);
    puVar6 = local_20;
    if ((nothrow_t *)0xfff < pnVar10) {
      puVar6 = (undefined4 *)local_20[-1];
      pnVar10 = pnVar10 + 0x23;
      if (0x1f < (uint)((int)local_20 + (-4 - (int)puVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(puVar6,pnVar10);
  }
  // [seh] ExceptionList = local_10;
  return;
}
