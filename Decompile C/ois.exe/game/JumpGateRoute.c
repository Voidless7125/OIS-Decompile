#include "../ois.exe.h"


// public: __thiscall JumpGateRoute::~JumpGateRoute(void)

void __thiscall JumpGateRoute::~JumpGateRoute(JumpGateRoute *this)

{
  void *local_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_005cb7a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  _eh_vector_destructor_iterator_(this,8,2,~Vec2_exref);
  ExceptionList = local_10;
  return;
}
