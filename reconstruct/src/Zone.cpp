// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: Zone * __thiscall Zone::Zone(Zone *this)
Zone::Zone()

{
  ghidra::lib::_Tree_node_t *p_Var1;
  ghidra::lib::_Tree_comp_alloc_t *this_00;
  ghidra::lib::_Tree_comp_alloc_t *this_01;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined1 local_8;
  undefined3 uStack_7;
  
  // [seh] puStack_c = &DAT_005b542f;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  *this = (byte)0x0;
  *(undefined4 *)((char *)this + 0x14) = 0;
  *(undefined4 *)((char *)this + 0x18) = 0xf;
  ((char *)this)[4] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x2c) = 0;
  *(undefined4 *)((char *)this + 0x30) = 0xf;
  ((char *)this)[0x1c] = (byte)0x0;
  // [seh] local_8 = 1;
  uStack_7 = 0;
  *(undefined1 **)((char *)this + 0x38) = &DAT_bf800000;
  cocos2d::Size::Size((Size *)((char *)this + 0x3c),0.0,0.0);
  *(undefined4 *)((char *)this + 0x54) = 0;
  *(undefined4 *)((char *)this + 0x58) = 0xf;
  ((char *)this)[0x44] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x6c) = 0;
  *(undefined4 *)((char *)this + 0x70) = 0xf;
  ((char *)this)[0x5c] = (byte)0x0;
  *(undefined2 *)((char *)this + 0x74) = 0;
  *(undefined4 *)((char *)this + 0x88) = 0;
  *(undefined4 *)((char *)this + 0x8c) = 0xf;
  ((char *)this)[0x78] = (byte)0x0;
  *(undefined4 *)((char *)this + 0xa0) = 0;
  *(undefined4 *)((char *)this + 0xa4) = 0xf;
  ((char *)this)[0x90] = (byte)0x0;
  *(undefined4 *)((char *)this + 0xb8) = 0;
  *(undefined4 *)((char *)this + 0xbc) = 0xf;
  ((char *)this)[0xa8] = (byte)0x0;
  *(undefined4 *)((char *)this + 0xd0) = 0;
  *(undefined4 *)((char *)this + 0xd4) = 0xf;
  ((char *)this)[0xc0] = (byte)0x0;
  // [seh] local_8 = 7;
  *(undefined4 *)((char *)this + 0xd8) = 0;
  *(undefined4 *)((char *)this + 0xdc) = 0;
  p_Var1 = ghidra::lib::_Tree_comp_alloc___Buyheadnode(this_00);
  *(ghidra::lib::_Tree_node_t **)((char *)this + 0xd8) = p_Var1;
  _local_8 = CONCAT31(uStack_7,8);
  *(undefined4 *)((char *)this + 0xe0) = 0;
  *(undefined4 *)((char *)this + 0xe4) = 0;
  p_Var1 = ghidra::lib::_Tree_comp_alloc___Buyheadnode(this_01);
  *(ghidra::lib::_Tree_node_t **)((char *)this + 0xe0) = p_Var1;
  *(undefined4 *)((char *)this + 0xe8) = 0;
  *(undefined4 *)((char *)this + 0xec) = 0;
  // [seh] ExceptionList = local_10;
  return;
}
