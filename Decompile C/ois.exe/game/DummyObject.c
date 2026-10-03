#include "../ois.exe.h"


// public: virtual void * __thiscall DummyObject::`vector deleting destructor'(unsigned int)

void * __thiscall DummyObject::_vector_deleting_destructor_(DummyObject *this,uint param_1)

{
  bool bVar1;
  uint uVar2;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b27f0;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = vftable_for_cocos2d__Node_;
  *(undefined ***)(this + 0x278) = vftable_for_cocos2d__TextureProtocol_;
  bVar1 = cc_assert_script_compatible("This should never be hit until the program closes.");
  if (!bVar1) {
    cocos2d::log("Assert failed: %s","This should never be hit until the program closes.",uVar2);
  }
  cocos2d::log("Destructor called.");
  cocos2d::Sprite::~Sprite((Sprite *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x468);
  }
  ExceptionList = local_10;
  return this;
}


// [thunk]:public: virtual void * __thiscall DummyObject::`vector deleting
// destructor'`adjustor{632}' (unsigned int)

void * __thiscall
DummyObject::_vector_deleting_destructor__adjustor_632__(DummyObject *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _vector_deleting_destructor_(this + -0x278,param_1);
  return pvVar1;
}
