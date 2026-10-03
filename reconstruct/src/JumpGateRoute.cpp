// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall JumpGateRoute::~JumpGateRoute(JumpGateRoute *this)
JumpGateRoute::~JumpGateRoute()

{
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005cb7a0;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  _eh_vector_destructor_iterator_(this,8,2,~Vec2_exref);
  // [seh] ExceptionList = local_10;
  return;
}
