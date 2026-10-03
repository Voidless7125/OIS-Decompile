#include "../ois.exe.h"


// public: __thiscall Zone::Zone(void)

Zone * __thiscall Zone::Zone(Zone *this)

{
  _Tree_node<> *p_Var1;
  _Tree_comp_alloc<> *this_00;
  _Tree_comp_alloc<> *this_01;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005b542f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *this = (Zone)0x0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0xf;
  this[4] = (Zone)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0xf;
  this[0x1c] = (Zone)0x0;
  local_8 = 1;
  uStack_7 = 0;
  *(undefined1 **)(this + 0x38) = &DAT_bf800000;
  cocos2d::Size::Size((Size *)(this + 0x3c),0.0,0.0);
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0xf;
  this[0x44] = (Zone)0x0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0xf;
  this[0x5c] = (Zone)0x0;
  *(undefined2 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0xf;
  this[0x78] = (Zone)0x0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0xf;
  this[0x90] = (Zone)0x0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0xf;
  this[0xa8] = (Zone)0x0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0xf;
  this[0xc0] = (Zone)0x0;
  local_8 = 7;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  p_Var1 = std::_Tree_comp_alloc<>::_Buyheadnode(this_00);
  *(_Tree_node<> **)(this + 0xd8) = p_Var1;
  _local_8 = CONCAT31(uStack_7,8);
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  p_Var1 = std::_Tree_comp_alloc<>::_Buyheadnode(this_01);
  *(_Tree_node<> **)(this + 0xe0) = p_Var1;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  ExceptionList = local_10;
  return this;
}
