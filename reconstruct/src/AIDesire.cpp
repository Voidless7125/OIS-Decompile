// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall AIDesire::removeDesireTarget(AIDesire *this,GameObject *param_1)
void AIDesire::removeDesireTarget(GameObject * param_1)

{
  if (*(GameObject **)((char *)this + 0x28) == param_1) {
    *(undefined4 *)((char *)this + 0x28) = 0;
  }
  return;
}


// Ghidra: void __thiscall AIDesire::removeSensorObject(AIDesire *this,SensorData *param_1)
void AIDesire::removeSensorObject(SensorData * param_1)

{
  if ((*(int *)((char *)this + 0x28) != 0) &&
     (*(uint *)((char *)this + 0x28) ==
      (-(uint)(*(int *)(param_1 + 0x130) != 0) & *(int *)(param_1 + 0x130) + 8U))) {
    *(undefined4 *)((char *)this + 0x28) = 0;
  }
  return;
}


// Ghidra: void __thiscall AIDesire::~AIDesire(AIDesire *this)
AIDesire::~AIDesire()

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  // [vtable] *(undefined ***)this = vftable;
  uVar1 = *(uint *)((char *)this + 0x1c);
  if (0xf < uVar1) {
    pvVar2 = *(void **)((char *)this + 8);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)((char *)this + 0x18) = 0;
  *(undefined4 *)((char *)this + 0x1c) = 0xf;
  ((char *)this)[8] = (byte)0x0;
  return;
}


// Ghidra: basic_string<> * __thiscall AIDesire::describe(AIDesire *this)
std::string * AIDesire::describe()

{
  std::string *in_stack_00000004;
  
  ghidra::str::ctor(in_stack_00000004,(std::string *)((char *)this + 8));
  return in_stack_00000004;
}


// Ghidra: AIDesire * __thiscall AIDesire::AIDesire(AIDesire *this,undefined4 param_1,void *param_3)
AIDesire::AIDesire(undefined4 param_1, void * param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c2508;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  *(undefined4 *)((char *)this + 4) = param_1;
  // [vtable] *(undefined ***)this = vftable;
  ghidra::str::ctor((std::string *)((char *)this + 8),(std::string *)&param_3);
  *(undefined4 *)((char *)this + 0x24) = in_stack_00000020;
  ((char *)this)[0x2c] = (byte)0x0;
  if (0xf < in_stack_0000001c) {
    pnVar2 = (nothrow_t *)(in_stack_0000001c + 1);
    pvVar1 = param_3;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_3 + -4);
      pnVar2 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  // [seh] ExceptionList = local_10;
  return;
}
