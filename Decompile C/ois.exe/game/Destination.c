#include "../ois.exe.h"


// public: bool __thiscall Destination::operator==(struct Destination)

bool __thiscall Destination::operator==(Destination *this,float param_2,float param_3,char *param_4)

{
  char *pcVar1;
  bool bVar2;
  char *pcVar3;
  nothrow_t *pnVar4;
  uint unaff_ESI;
  char *unaff_EDI;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  Destination in_stack_00000024;
  
  pcVar1 = param_4;
  if ((param_2 == *(float *)this) && (param_3 == *(float *)(this + 4))) {
    pcVar3 = (char *)&param_4;
    if (0xf < in_stack_00000020) {
      pcVar3 = param_4;
    }
    bVar2 = std::_Traits_equal<>(pcVar3,in_stack_0000001c,unaff_EDI,unaff_ESI);
    if ((bVar2) && (this[0x20] == in_stack_00000024)) {
      bVar2 = true;
      goto LAB_005020ff;
    }
  }
  bVar2 = false;
LAB_005020ff:
  if (0xf < in_stack_00000020) {
    pnVar4 = (nothrow_t *)(in_stack_00000020 + 1);
    pcVar3 = pcVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pcVar3 = *(char **)(pcVar1 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if ((char *)0x1f < pcVar1 + (-4 - (int)pcVar3)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar3,pnVar4);
  }
  return bVar2;
}


// public: __thiscall Destination::Destination(class cocos2d::Vec2,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

void __thiscall
Destination::Destination(Destination *this,undefined4 param_2,undefined4 param_3,void *param_4)

{
  basic_string<> *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uVar5;
  basic_string<> *pbVar6;
  void *pvVar7;
  nothrow_t *pnVar8;
  uint in_stack_00000020;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005c41c5;
  local_10 = ExceptionList;
  uVar5 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)this = param_2;
  *(undefined4 *)(this + 4) = param_3;
  local_8 = 2;
  uStack_7 = 0;
  this_00 = (basic_string<> *)(this + 8);
  local_14 = uVar5;
  std::basic_string<>::basic_string<>(this_00,(basic_string<> *)&param_4);
  _local_8 = CONCAT31(uStack_7,3);
  this[0x20] = (Destination)0x0;
  if ((*(float *)this == -9999.0) && (*(float *)(this + 4) == -9999.0)) {
    bVar4 = cc_assert_script_compatible("Invalid destination for ship.");
    if (!bVar4) {
      cocos2d::log("Assert failed: %s","Invalid destination for ship.",uVar5);
    }
  }
  if (2 < *(uint *)(this + 0x18)) {
    pbVar6 = this_00;
    if (0xf < *(uint *)(this + 0x1c)) {
      pbVar6 = *(basic_string<> **)this_00;
    }
    if (*pbVar6 == (basic_string<>)0x21) {
      this[0x20] = (Destination)0x1;
      pbVar6 = (basic_string<> *)std::basic_string<>::substr(this_00,(uint)local_2c,1);
      if (this_00 != pbVar6) {
        word::~word((word *)this_00);
        uVar1 = *(undefined4 *)(pbVar6 + 4);
        uVar2 = *(undefined4 *)(pbVar6 + 8);
        uVar3 = *(undefined4 *)(pbVar6 + 0xc);
        *(undefined4 *)this_00 = *(undefined4 *)pbVar6;
        *(undefined4 *)(this + 0xc) = uVar1;
        *(undefined4 *)(this + 0x10) = uVar2;
        *(undefined4 *)(this + 0x14) = uVar3;
        *(undefined8 *)(this + 0x18) = *(undefined8 *)(pbVar6 + 0x10);
        *(undefined4 *)(pbVar6 + 0x10) = 0;
        *(undefined4 *)(pbVar6 + 0x14) = 0xf;
        *pbVar6 = (basic_string<>)0x0;
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
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
