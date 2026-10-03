// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall UI_Text::setValue(UI_Text *this,double param_1)
void UI_Text::setValue(double param_1)

{
  *(double *)((char *)this + 0x468) = param_1;
  (**(code **)(*(int *)this + 0x294))();
  return;
}


// Ghidra: void __thiscall UI_Text::cleanupRender(UI_Text *this)
void UI_Text::cleanupRender()

{
  if (*(int **)((char *)this + 0x470) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x470) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x470) = 0;
  }
  return;
}


// Ghidra: void __thiscall UI_Text::render(UI_Text *this)
void UI_Text::render()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff90[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  word *pwVar2;
  UIText *pUVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  void *local_44 [5];
  uint local_30;
  void *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 local_1c;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005cc781;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  (**(code **)(*(int *)this + 0x290))();
  ghidra::str::ctor((std::string *)&local_2c,(std::string *)((char *)this + 0x434));
  // [seh] local_8 = 0;
  if (((char *)this)[0x428] == (byte)0x0) {
    pwVar2 = (word *)strUsingArgs((char *)local_44);
    if ((word *)&local_2c != pwVar2) {
      // [mislabelled-dtor] word::~word((word *)&local_2c);
      local_2c = *(void **)pwVar2;
      uStack_28 = *(undefined4 *)(pwVar2 + 4);
      uStack_24 = *(undefined4 *)(pwVar2 + 8);
      uStack_20 = *(undefined4 *)(pwVar2 + 0xc);
      local_1c = *(undefined8 *)(pwVar2 + 0x10);
      *(undefined4 *)(pwVar2 + 0x10) = 0;
      *(undefined4 *)(pwVar2 + 0x14) = 0xf;
      *pwVar2 = (word)0x0;
    }
    if (0xf < local_30) {
      pnVar5 = (nothrow_t *)(local_30 + 1);
      pvVar4 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar5) {
        pvVar4 = *(void **)((int)local_44[0] + -4);
        pnVar5 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar4,pnVar5);
    }
  }
  ghidra::str::ctor
            ((std::string *)&stack0xffffff90,(std::string *)&local_2c);
  pUVar3 = UIText::create(0);
  *(UIText **)((char *)this + 0x470) = pUVar3;
  // [seh] local_8._0_1_ = 1;
  (**(code **)(*(int *)pUVar3 + 0xa0))();
  // [seh] local_8 = (uint)local_8._1_3_ << 8;
  (**(code **)(**(int **)((char *)this + 0x470) + 0x48))();
  (**(code **)(*(int *)this + 0x10c))();
  iVar1 = *(int *)this;
  (**(code **)(**(int **)((char *)this + 0x470) + 0xb0))();
  (**(code **)(iVar1 + 0xac))();
  **(undefined1 **)((char *)this + 0x288) = 1;
  if (0xf < local_1c._4_4_) {
    pnVar5 = (nothrow_t *)(local_1c._4_4_ + 1);
    pvVar4 = local_2c;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)local_2c + -4);
      pnVar5 = (nothrow_t *)(local_1c._4_4_ + 0x24);
      if (0x1f < (uint)((int)local_2c + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
