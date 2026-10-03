#include "../ois.exe.h"


// public: virtual void __thiscall AIDesire::removeDesireTarget(class GameObject *)

void __thiscall AIDesire::removeDesireTarget(AIDesire *this,GameObject *param_1)

{
  if (*(GameObject **)(this + 0x28) == param_1) {
    *(undefined4 *)(this + 0x28) = 0;
  }
  return;
}


// public: virtual void __thiscall AIDesire::removeSensorObject(class SensorData *)

void __thiscall AIDesire::removeSensorObject(AIDesire *this,SensorData *param_1)

{
  if ((*(int *)(this + 0x28) != 0) &&
     (*(uint *)(this + 0x28) ==
      (-(uint)(*(int *)(param_1 + 0x130) != 0) & *(int *)(param_1 + 0x130) + 8U))) {
    *(undefined4 *)(this + 0x28) = 0;
  }
  return;
}


// public: virtual __thiscall AIDesire::~AIDesire(void)

void __thiscall AIDesire::~AIDesire(AIDesire *this)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  *(undefined ***)this = vftable;
  uVar1 = *(uint *)(this + 0x1c);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 8);
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
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0xf;
  this[8] = (AIDesire)0x0;
  return;
}


// public: virtual class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > __thiscall AIDesire::describe(void)

basic_string<> * __thiscall AIDesire::describe(AIDesire *this)

{
  basic_string<> *in_stack_00000004;
  
  std::basic_string<>::basic_string<>(in_stack_00000004,(basic_string<> *)(this + 8));
  return in_stack_00000004;
}


// public: virtual void * __thiscall AIDesire::`vector deleting destructor'(unsigned int)

void * __thiscall AIDesire::_vector_deleting_destructor_(AIDesire *this,uint param_1)

{
  ~AIDesire(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)&DAT_00000030);
  }
  return this;
}


// public: __thiscall AIDesire::AIDesire(int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class Ship *)

AIDesire * __thiscall AIDesire::AIDesire(AIDesire *this,undefined4 param_1,void *param_3)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c2508;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(this + 4) = param_1;
  *(undefined ***)this = vftable;
  std::basic_string<>::basic_string<>((basic_string<> *)(this + 8),(basic_string<> *)&param_3);
  *(undefined4 *)(this + 0x24) = in_stack_00000020;
  this[0x2c] = (AIDesire)0x0;
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
  ExceptionList = local_10;
  return this;
}
