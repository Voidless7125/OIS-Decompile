// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: ServerMenu * __thiscall ServerMenu::ServerMenu(ServerMenu *this,void *param_2)
ServerMenu::ServerMenu(void * param_2)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  uint in_stack_00000018;
  undefined4 in_stack_0000001c;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b2dc8;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  ghidra::str::ctor((std::string *)this,(std::string *)&param_2);
  *(undefined4 *)((char *)this + 0x18) = in_stack_0000001c;
  *(undefined4 *)((char *)this + 0x1c) = 0;
  *(undefined4 *)((char *)this + 0x20) = 0;
  *(undefined4 *)((char *)this + 0x24) = 0;
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
    operator_delete(pvVar1,pnVar2);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall ServerMenu::~ServerMenu(ServerMenu *this)
ServerMenu::~ServerMenu()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  void *pvVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  void *pvVar6;
  int iVar7;
  nothrow_t *pnVar8;
  uint uVar9;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c6880;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar4 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  uVar9 = 0;
  iVar7 = *(int *)((char *)this + 0x1c);
  if (*(int *)((char *)this + 0x20) - iVar7 >> 2 != 0) {
    do {
      pvVar1 = *(void **)(iVar7 + uVar9 * 4);
      if (pvVar1 != (void *)0x0) {
        // [seh] local_8 = 0;
        piVar2 = *(int **)((int)pvVar1 + 0x6c);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x10))(piVar2 != (int *)((int)pvVar1 + 0x48),uVar4);
          *(undefined4 *)((int)pvVar1 + 0x6c) = 0;
        }
        // [seh] local_8 = 1;
        piVar2 = *(int **)((int)pvVar1 + 0x44);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x10))(piVar2 != (int *)((int)pvVar1 + 0x20));
          *(undefined4 *)((int)pvVar1 + 0x44) = 0;
        }
        // [seh] local_8 = 0xffffffff;
        uVar3 = *(uint *)((int)pvVar1 + 0x18);
        if (0xf < uVar3) {
          pvVar6 = *(void **)((int)pvVar1 + 4);
          pnVar8 = (nothrow_t *)(uVar3 + 1);
          pvVar5 = pvVar6;
          if ((nothrow_t *)0xfff < pnVar8) {
            pvVar5 = *(void **)((int)pvVar6 + -4);
            pnVar8 = (nothrow_t *)(uVar3 + 0x24);
            if (0x1f < (uint)((int)pvVar6 + (-4 - (int)pvVar5))) goto LAB_00536060;
          }
          operator_delete(pvVar5,pnVar8);
        }
        *(undefined4 *)((int)pvVar1 + 0x14) = 0;
        *(undefined4 *)((int)pvVar1 + 0x18) = 0xf;
        *(undefined1 *)((int)pvVar1 + 4) = 0;
        operator_delete(pvVar1,(nothrow_t *)0x78);
      }
      uVar9 = uVar9 + 1;
      iVar7 = *(int *)((char *)this + 0x1c);
    } while (uVar9 < (uint)(*(int *)((char *)this + 0x20) - iVar7 >> 2));
  }
  *(int *)((char *)this + 0x20) = iVar7;
  pvVar1 = *(void **)((char *)this + 0x1c);
  if (pvVar1 != (void *)0x0) {
    pnVar8 = (nothrow_t *)(*(int *)((char *)this + 0x24) - (int)pvVar1 & 0xfffffffc);
    pvVar6 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar6 = *(void **)((int)pvVar1 + -4);
      pnVar8 = pnVar8 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar6))) goto LAB_00536060;
    }
    operator_delete(pvVar6,pnVar8);
    *(undefined4 *)((char *)this + 0x1c) = 0;
    *(undefined4 *)((char *)this + 0x20) = 0;
    *(undefined4 *)((char *)this + 0x24) = 0;
  }
  uVar4 = *(uint *)((char *)this + 0x14);
  if (0xf < uVar4) {
    pvVar1 = *(void **)this;
    pnVar8 = (nothrow_t *)(uVar4 + 1);
    pvVar6 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar6 = *(void **)((int)pvVar1 + -4);
      pnVar8 = (nothrow_t *)(uVar4 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar6))) {
LAB_00536060:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar6,pnVar8);
  }
  *(undefined4 *)((char *)this + 0x10) = 0;
  *(undefined4 *)((char *)this + 0x14) = 0xf;
  *this = (byte)0x0;
  // [seh] ExceptionList = local_10;
  return;
}
