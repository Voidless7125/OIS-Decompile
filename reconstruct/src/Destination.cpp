// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall Destination::Destination(Destination *this,undefined4 param_2,undefined4 param_3,void *param_4)
Destination::Destination(undefined4 param_2, undefined4 param_3, void * param_4)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uVar5;
  std::string *pbVar6;
  void *pvVar7;
  nothrow_t *pnVar8;
  uint in_stack_00000020;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined1 local_8;
  undefined3 uStack_7;
  
  // [seh] puStack_c = &DAT_005c41c5;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar5 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((char *)this + 4) = param_3;
  // [seh] local_8 = 2;
  uStack_7 = 0;
  this_00 = (std::string *)((char *)this + 8);
  local_14 = uVar5;
  ghidra::str::ctor(this_00,(std::string *)&param_4);
  _local_8 = CONCAT31(uStack_7,3);
  ((char *)this)[0x20] = (byte)0x0;
  if ((*(float *)this == -9999.0) && (*(float *)((char *)this + 4) == -9999.0)) {
    bVar4 = cc_assert_script_compatible("Invalid destination for ship.");
    if (!bVar4) {
      cocos2d::log("Assert failed: %s","Invalid destination for ship.",uVar5);
    }
  }
  if (2 < *(uint *)((char *)this + 0x18)) {
    pbVar6 = this_00;
    if (0xf < *(uint *)((char *)this + 0x1c)) {
      pbVar6 = *(std::string **)this_00;
    }
    if (*pbVar6 == (std::string)0x21) {
      ((char *)this)[0x20] = (byte)0x1;
      pbVar6 = (std::string *)ghidra::lib::basic_string__substr(this_00,(uint)local_2c,1);
      if (this_00 != pbVar6) {
        // [mislabelled-dtor] word::~word((word *)this_00);
        uVar1 = *(undefined4 *)(pbVar6 + 4);
        uVar2 = *(undefined4 *)(pbVar6 + 8);
        uVar3 = *(undefined4 *)(pbVar6 + 0xc);
        *(undefined4 *)this_00 = *(undefined4 *)pbVar6;
        *(undefined4 *)((char *)this + 0xc) = uVar1;
        *(undefined4 *)((char *)this + 0x10) = uVar2;
        *(undefined4 *)((char *)this + 0x14) = uVar3;
        *(undefined8 *)((char *)this + 0x18) = *(undefined8 *)(pbVar6 + 0x10);
        *(undefined4 *)(pbVar6 + 0x10) = 0;
        *(undefined4 *)(pbVar6 + 0x14) = 0xf;
        *pbVar6 = (std::string)0x0;
      }
      if (0xf < local_18) {
        pnVar8 = (nothrow_t *)(local_18 + 1);
        pvVar7 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar8) {
          pvVar7 = *(void **)((int)local_2c[0] + -4);
          pnVar8 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar7,pnVar8);
      }
    }
  }
  if (0xf < in_stack_00000020) {
    pnVar8 = (nothrow_t *)(in_stack_00000020 + 1);
    pvVar7 = param_4;
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar7 = *(void **)((int)param_4 + -4);
      pnVar8 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_4 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar8);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
