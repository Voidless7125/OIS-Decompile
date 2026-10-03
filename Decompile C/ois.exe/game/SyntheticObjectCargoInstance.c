#include "../ois.exe.h"


// public: __thiscall SyntheticObjectCargoInstance::SyntheticObjectCargoInstance(int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

SyntheticObjectCargoInstance * __thiscall
SyntheticObjectCargoInstance::SyntheticObjectCargoInstance
          (SyntheticObjectCargoInstance *this,undefined4 param_1,void *param_3)

{
  Good *pGVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  uint in_stack_0000001c;
  basic_string<> abStack_38 [8];
  undefined4 uStack_30;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c4ac8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(this + 4) = param_1;
  std::basic_string<>::basic_string<>(abStack_38,(basic_string<> *)&param_3);
  pGVar1 = GameData::getGoodWithShortName();
  if (pGVar1 == (Good *)0x0) {
    uStack_30 = 0x522f48;
    debugPrint("ERROR","invalid good \'%s\'");
  }
  *(undefined4 *)this = *(undefined4 *)pGVar1;
  if (0xf < in_stack_0000001c) {
    pnVar3 = (nothrow_t *)(in_stack_0000001c + 1);
    pvVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)param_3 + -4);
      pnVar3 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ExceptionList = local_10;
  return this;
}
