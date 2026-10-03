#include "../ois.exe.h"


// public: static void __cdecl std::_Default_allocator_traits<class std::allocator<class ListData>
// >::construct<class ListData,class ListData>(class std::allocator<class ListData> &,class ListData
// * const,class ListData &&)

void __cdecl
std::_Default_allocator_traits<>::construct<>
          (allocator<ListData> *param_1,ListData *param_2,ListData *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_EDX;
  
  *in_EDX = *(undefined4 *)param_1;
  in_EDX[5] = 0;
  in_EDX[6] = 0;
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  in_EDX[1] = *(undefined4 *)(param_1 + 4);
  in_EDX[2] = uVar1;
  in_EDX[3] = uVar2;
  in_EDX[4] = uVar3;
  *(undefined8 *)(in_EDX + 5) = *(undefined8 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  param_1[4] = (allocator<ListData>)0x0;
  in_EDX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_EDX[0xc] = 0;
  in_EDX[0xd] = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  in_EDX[8] = *(undefined4 *)(param_1 + 0x20);
  in_EDX[9] = uVar1;
  in_EDX[10] = uVar2;
  in_EDX[0xb] = uVar3;
  *(undefined8 *)(in_EDX + 0xc) = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xf;
  param_1[0x20] = (allocator<ListData>)0x0;
  in_EDX[0x12] = 0;
  in_EDX[0x13] = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  uVar2 = *(undefined4 *)(param_1 + 0x40);
  uVar3 = *(undefined4 *)(param_1 + 0x44);
  in_EDX[0xe] = *(undefined4 *)(param_1 + 0x38);
  in_EDX[0xf] = uVar1;
  in_EDX[0x10] = uVar2;
  in_EDX[0x11] = uVar3;
  *(undefined8 *)(in_EDX + 0x12) = *(undefined8 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xf;
  param_1[0x38] = (allocator<ListData>)0x0;
  in_EDX[0x14] = *(undefined4 *)(param_1 + 0x50);
  in_EDX[0x15] = *(undefined4 *)(param_1 + 0x54);
  *(undefined2 *)(in_EDX + 0x16) = *(undefined2 *)(param_1 + 0x58);
  *(allocator<ListData> *)((int)in_EDX + 0x5a) = param_1[0x5a];
  *(undefined2 *)((int)in_EDX + 0x5b) = *(undefined2 *)(param_1 + 0x5b);
  *(allocator<ListData> *)((int)in_EDX + 0x5d) = param_1[0x5d];
  *(allocator<ListData> *)((int)in_EDX + 0x5e) = param_1[0x5e];
  return;
}


// public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
// PlayerGuidedToPort> >::construct<struct PlayerGuidedToPort,struct PlayerGuidedToPort>(class
// std::allocator<struct PlayerGuidedToPort> &,struct PlayerGuidedToPort * const,struct
// PlayerGuidedToPort &&)

void __cdecl
std::_Default_allocator_traits<>::construct<>
          (allocator<> *param_1,PlayerGuidedToPort *param_2,PlayerGuidedToPort *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_EDX;
  
  in_EDX[4] = 0;
  in_EDX[5] = 0;
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *in_EDX = *(undefined4 *)param_1;
  in_EDX[1] = uVar1;
  in_EDX[2] = uVar2;
  in_EDX[3] = uVar3;
  *(undefined8 *)(in_EDX + 4) = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (allocator<>)0x0;
  in_EDX[10] = 0;
  in_EDX[0xb] = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  in_EDX[6] = *(undefined4 *)(param_1 + 0x18);
  in_EDX[7] = uVar1;
  in_EDX[8] = uVar2;
  in_EDX[9] = uVar3;
  *(undefined8 *)(in_EDX + 10) = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xf;
  param_1[0x18] = (allocator<>)0x0;
  return;
}


// public: static void __cdecl std::_Default_allocator_traits<class std::allocator<class Shop>
// >::construct<class Shop,class Shop>(class std::allocator<class Shop> &,class Shop * const,class
// Shop &&)

void __cdecl
std::_Default_allocator_traits<>::construct<Shop,Shop>
          (allocator<Shop> *param_1,Shop *param_2,Shop *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  allocator<Shop> *in_EDX;
  
  *in_EDX = *param_1;
  *(undefined4 *)(in_EDX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_EDX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_EDX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_EDX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_EDX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_EDX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_EDX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_EDX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_EDX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_EDX + 0x38) = 0;
  *(undefined4 *)(in_EDX + 0x3c) = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  uVar3 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_EDX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(in_EDX + 0x2c) = uVar1;
  *(undefined4 *)(in_EDX + 0x30) = uVar2;
  *(undefined4 *)(in_EDX + 0x34) = uVar3;
  *(undefined8 *)(in_EDX + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xf;
  param_1[0x28] = (allocator<Shop>)0x0;
  *(undefined4 *)(in_EDX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  return;
}


// public: static void __cdecl std::_Default_allocator_traits<class std::allocator<class ListData>
// >::construct<class ListData,class ListData const &>(class std::allocator<class ListData> &,class
// ListData * const,class ListData const &)

void __cdecl
std::_Default_allocator_traits<>::construct<>
          (allocator<ListData> *param_1,ListData *param_2,ListData *param_3)

{
  undefined4 *in_EDX;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005bdfe6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_EDX = *(undefined4 *)param_1;
  basic_string<>::basic_string<>((basic_string<> *)(in_EDX + 1),(basic_string<> *)(param_1 + 4));
  local_8 = 0;
  in_EDX[7] = *(undefined4 *)(param_1 + 0x1c);
  basic_string<>::basic_string<>((basic_string<> *)(in_EDX + 8),(basic_string<> *)(param_1 + 0x20));
  local_8 = CONCAT31(local_8._1_3_,1);
  basic_string<>::basic_string<>
            ((basic_string<> *)(in_EDX + 0xe),(basic_string<> *)(param_1 + 0x38));
  in_EDX[0x14] = *(undefined4 *)(param_1 + 0x50);
  in_EDX[0x15] = *(undefined4 *)(param_1 + 0x54);
  *(undefined2 *)(in_EDX + 0x16) = *(undefined2 *)(param_1 + 0x58);
  *(allocator<ListData> *)((int)in_EDX + 0x5a) = param_1[0x5a];
  *(undefined2 *)((int)in_EDX + 0x5b) = *(undefined2 *)(param_1 + 0x5b);
  *(allocator<ListData> *)((int)in_EDX + 0x5d) = param_1[0x5d];
  *(allocator<ListData> *)((int)in_EDX + 0x5e) = param_1[0x5e];
  ExceptionList = local_10;
  return;
}


// public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct Command>
// >::construct<struct Command,struct Command>(class std::allocator<struct Command> &,struct Command
// * const,struct Command &&)

void __cdecl
std::_Default_allocator_traits<>::construct<>
          (allocator<Command> *param_1,Command *param_2,Command *param_3)

{
  allocator<Command> *paVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *in_EDX;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005c7910;
  local_10 = ExceptionList;
  uVar4 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  in_EDX[4] = 0;
  in_EDX[5] = 0;
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *in_EDX = *(undefined4 *)param_1;
  in_EDX[1] = uVar5;
  in_EDX[2] = uVar2;
  in_EDX[3] = uVar3;
  *(undefined8 *)(in_EDX + 4) = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (allocator<Command>)0x0;
  in_EDX[0xf] = 0;
  local_8 = 1;
  uStack_7 = 0;
  paVar1 = *(allocator<Command> **)(param_1 + 0x3c);
  if (paVar1 != (allocator<Command> *)0x0) {
    if (paVar1 == param_1 + 0x18) {
      uVar5 = (**(code **)(*(int *)paVar1 + 4))(in_EDX + 6,uVar4);
      in_EDX[0xf] = uVar5;
      _local_8 = CONCAT31(uStack_7,2);
      paVar1 = *(allocator<Command> **)(param_1 + 0x3c);
      if (paVar1 == (allocator<Command> *)0x0) {
        ExceptionList = local_10;
        return;
      }
      (**(code **)(*(int *)paVar1 + 0x10))(paVar1 != param_1 + 0x18);
    }
    else {
      in_EDX[0xf] = paVar1;
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  ExceptionList = local_10;
  return;
}


// public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
// CommsCommand> >::construct<struct CommsCommand,struct CommsCommand>(class std::allocator<struct
// CommsCommand> &,struct CommsCommand * const,struct CommsCommand &&)

void __cdecl
std::_Default_allocator_traits<>::construct<>
          (allocator<> *param_1,CommsCommand *param_2,CommsCommand *param_3)

{
  allocator<> *paVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *in_EDX;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005c87a6;
  local_10 = ExceptionList;
  uVar4 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  in_EDX[4] = 0;
  in_EDX[5] = 0;
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *in_EDX = *(undefined4 *)param_1;
  in_EDX[1] = uVar5;
  in_EDX[2] = uVar2;
  in_EDX[3] = uVar3;
  *(undefined8 *)(in_EDX + 4) = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (allocator<>)0x0;
  in_EDX[10] = 0;
  in_EDX[0xb] = 0;
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  in_EDX[6] = *(undefined4 *)(param_1 + 0x18);
  in_EDX[7] = uVar5;
  in_EDX[8] = uVar2;
  in_EDX[9] = uVar3;
  *(undefined8 *)(in_EDX + 10) = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xf;
  param_1[0x18] = (allocator<>)0x0;
  in_EDX[0x10] = 0;
  in_EDX[0x11] = 0;
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  in_EDX[0xc] = *(undefined4 *)(param_1 + 0x30);
  in_EDX[0xd] = uVar5;
  in_EDX[0xe] = uVar2;
  in_EDX[0xf] = uVar3;
  *(undefined8 *)(in_EDX + 0x10) = *(undefined8 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xf;
  param_1[0x30] = (allocator<>)0x0;
  *(allocator<> *)(in_EDX + 0x12) = param_1[0x48];
  in_EDX[0x1d] = 0;
  local_8 = 3;
  uStack_7 = 0;
  paVar1 = *(allocator<> **)(param_1 + 0x74);
  if (paVar1 != (allocator<> *)0x0) {
    if (paVar1 == param_1 + 0x50) {
      uVar5 = (**(code **)(*(int *)paVar1 + 4))(in_EDX + 0x14,uVar4);
      in_EDX[0x1d] = uVar5;
      _local_8 = CONCAT31(uStack_7,4);
      paVar1 = *(allocator<> **)(param_1 + 0x74);
      if (paVar1 == (allocator<> *)0x0) {
        ExceptionList = local_10;
        return;
      }
      (**(code **)(*(int *)paVar1 + 0x10))(paVar1 != param_1 + 0x50);
    }
    else {
      in_EDX[0x1d] = paVar1;
    }
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  ExceptionList = local_10;
  return;
}
