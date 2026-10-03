// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: TerminalEngine * __thiscall TerminalEngine::TerminalEngine(TerminalEngine *this)
TerminalEngine::TerminalEngine()

{
  *(undefined4 *)this = 0;
  *(undefined4 *)((char *)this + 4) = 0;
  *(undefined4 *)((char *)this + 8) = 0;
  *(undefined2 *)((char *)this + 0xc) = 1;
  *(undefined4 *)((char *)this + 0x10) = 0x28;
  *(undefined4 *)((char *)this + 0x3c) = 0;
  *(undefined4 *)((char *)this + 100) = 0;
  *(undefined4 *)((char *)this + 0x8c) = 0;
  *(undefined4 *)((char *)this + 0xa0) = 0;
  *(undefined4 *)((char *)this + 0xa4) = 0xf;
  ((char *)this)[0x90] = (byte)0x0;
  return;
}


// Ghidra: void __thiscall TerminalEngine::executeCurrentCommand(TerminalEngine *this)
void TerminalEngine::executeCurrentCommand()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *pbVar1;
  std::string *pbVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  std::string *pbVar5;
  ghidra::lib::allocator_t *unaff_EDI;
  std::string abStack_90 [12];
  undefined4 uStack_84;
  void *local_68 [4];
  undefined4 local_58;
  uint local_54;
  ghidra::vector local_50 [12];
  std::string *local_44;
  std::string *local_40;
  undefined4 local_3c;
  ghidra::vector *local_38;
  std::string *local_34;
  std::string *local_30;
  void *local_2c [5];
  uint local_18;
  std::string *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b3a88;
  // [seh] local_10 = ExceptionList;
  // [cookie] pbVar2 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_14 = pbVar2;
  if (*(int *)((char *)this + 0x3c) == 0) {
    uStack_84 = 0x42b4d2;
    debugPrint("ERROR","TerminalEngine has no callback configured.");
  }
  else if (*(int *)((char *)this + 0xa0) != 0) {
    local_44 = (std::string *)0x0;
    local_40 = (std::string *)0x0;
    local_3c = 0;
    // [seh] local_8 = 0;
    pbVar5 = (std::string *)((char *)this + 0x90);
    ghidra::str::ctor(abStack_90,pbVar5);
    local_38 = (ghidra::vector *)splitStringBy();
    local_30 = (std::string *)0x0;
    local_34 = (std::string *)0x0;
    if ((ghidra::vector *)&local_44 != local_38) {
      ghidra::lib::vector___Tidy((ghidra::vector *)&local_44);
      local_40 = *(std::string **)(local_38 + 4);
      local_44 = *(std::string **)local_38;
      local_3c = *(undefined4 *)(local_38 + 8);
      *(undefined4 *)local_38 = 0;
      *(undefined4 *)(local_38 + 4) = 0;
      *(undefined4 *)(local_38 + 8) = 0;
      local_34 = local_40;
      local_30 = local_44;
    }
    pbVar1 = local_30;
    ghidra::lib::vector___Tidy(local_50);
    ghidra::str::ctor((std::string *)local_2c,local_30);
    // [seh] local_8 = CONCAT31(local_8._1_3_,1);
    if ((uint)((int)(local_34 + -(int)local_30) / 0x18) < 2) {
      ghidra::lib::_Destroy_range___x28_x29((std::string *)(local_34 + -(int)local_30),pbVar2,unaff_EDI);
      local_40 = pbVar1;
    }
    else {
      uStack_84 = 0x42b596;
      ghidra::lib::vector__erase((ghidra::vector *)&local_44);
    }
    ghidra::lib::vector__vector(local_50,(ghidra::vector *)&local_44);
    // [seh] local_8._0_1_ = 2;
    ghidra::str::ctor((std::string *)local_68,(std::string *)local_2c);
    // [seh] local_8 = CONCAT31(local_8._1_3_,4);
    if (*(int **)((char *)this + 0x3c) == (int *)0x0) {
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
    uStack_84 = 0x42b5e4;
    (**(code **)(**(int **)((char *)this + 0x3c) + 8))();
    if (0xf < local_54) {
      pnVar4 = (nothrow_t *)(local_54 + 1);
      pvVar3 = local_68[0];
      if ((nothrow_t *)0xfff < pnVar4) {
        pvVar3 = *(void **)((int)local_68[0] + -4);
        pnVar4 = (nothrow_t *)(local_54 + 0x24);
        if (0x1f < (uint)((int)local_68[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      uStack_84 = 0x42b617;
      operator_delete(pvVar3,pnVar4);
    }
    local_58 = 0;
    local_54 = 0xf;
    local_68[0] = (void *)((uint)local_68[0] & 0xffffff00);
    ghidra::lib::vector___Tidy(local_50);
    *(undefined4 *)((char *)this + 0xa0) = 0;
    if (0xf < *(uint *)((char *)this + 0xa4)) {
      pbVar5 = *(std::string **)pbVar5;
    }
    *pbVar5 = (std::string)0x0;
    if (0xf < local_18) {
      pnVar4 = (nothrow_t *)(local_18 + 1);
      pvVar3 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar4) {
        pvVar3 = *(void **)((int)local_2c[0] + -4);
        pnVar4 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      uStack_84 = 0x42b679;
      operator_delete(pvVar3,pnVar4);
    }
    ghidra::lib::vector___Tidy((ghidra::vector *)&local_44);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: bool __thiscall TerminalEngine::keyReleased(TerminalEngine *this,KeyCode param_1)
bool TerminalEngine::keyReleased(KeyCode param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *pbVar1;
  char cVar2;
  undefined1 uVar3;
  std::string *pbVar4;
  char *pcVar5;
  Ship *pSVar6;
  SoundEngine *this_00;
  char *pcVar7;
  void *pvVar8;
  nothrow_t *pnVar9;
  PresentationInterface *local_34;
  char local_2d;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b3aca;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_2d = '\0';
  if (*(int *)this != 0) {
    if ((((param_1 == 0xa4) || (param_1 == 0x23)) || (param_1 == 10)) || (param_1 == 0x3b)) {
      renderNextChunkOfFile(this);
    }
    goto LAB_0042b8a3;
  }
  if (((param_1 == 0xa4) || (param_1 == 0x23)) || (param_1 == 10)) {
    executeCurrentCommand(this);
    ghidra::str::assign((std::string *)((char *)this + 0x90),"",0);
LAB_0042b78d:
    local_2d = '\x01';
  }
  else {
    if (((param_1 == 7) || (param_1 == 0x17)) || (param_1 == 0x2e)) {
      pbVar1 = (std::string *)((char *)this + 0x90);
      if (*(int *)((char *)this + 0xa0) != 0) {
        pbVar4 = pbVar1;
        if (0xf < *(uint *)((char *)this + 0xa4)) {
          pbVar4 = *(std::string **)pbVar1;
        }
        ghidra::lib::basic_string__erase(pbVar1,&local_34,pbVar4 + *(int *)((char *)this + 0xa0) + -1);
      }
      goto LAB_0042b78d;
    }
    if (*(uint *)((char *)this + 0x10) <= *(uint *)((char *)this + 0xa0)) {
      debugPrint("DETAIL","Command length hit.",local_14);
      goto LAB_0042b8a3;
    }
  }
  if (ghidra::Singleton<void>::instance == (PresentationInterface *)0x0) {
    local_34 = operator_new(0x418);
    // [seh] local_8 = 0;
    ghidra::Singleton<void>::instance =
         (PresentationInterface *)new ((void *)(local_34)) PresentationInterface();
    // [seh] local_8 = 0xffffffff;
  }
  cVar2 = PresentationInterface::keycodeToChar
                    (ghidra::Singleton<void>::instance,param_1,(bool)((char *)this)[0xc],(bool)((char *)this)[0xd]);
  if (cVar2 == '\0') {
    if (local_2d == '\0') goto LAB_0042b8a3;
  }
  else {
    pcVar5 = (char *)strUsingArgs((char *)local_2c,"%c",(int)cVar2);
    // [seh] local_8 = 1;
    pcVar7 = pcVar5;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar7 = *(char **)pcVar5;
    }
    ghidra::str::append((std::string *)((char *)this + 0x90),pcVar7,*(uint *)(pcVar5 + 0x10));
    // [seh] local_8 = 0xffffffff;
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      pvVar8 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar8 = *(void **)((int)local_2c[0] + -4);
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar8,pnVar9);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  }
  if (*(int *)((char *)this + 0x8c) != 0) {
    (**(code **)(**(int **)((char *)this + 0x8c) + 8))();
  }
  pSVar6 = ShipData::currentlyBoardedShip;
  if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
    pSVar6 = *(Ship **)(g_gameData + 0xd0);
  }
  this_00 = ghidra::any_singleton();
  (this_00)->playRandomKeyPress(pSVar6);
LAB_0042b8a3:
  // [seh] ExceptionList = local_10;
  // [cookie] uVar3 = __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar3;
}


// Ghidra: void __thiscall TerminalEngine::renderNextChunkOfFile(TerminalEngine *this)
void TerminalEngine::renderNextChunkOfFile()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  ghidra::vector *this_00;
  std::string *pbVar1;
  std::string *pbVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  std::string *pbVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  std::string *unaff_EDI;
  std::string abStack_58 [12];
  undefined4 uStack_4c;
  void *local_30 [5];
  uint local_1c;
  int local_18;
  int *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b3af8;
  // [seh] local_10 = ExceptionList;
  // [cookie] pbVar1 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  piVar8 = *(int **)this;
  local_18 = (piVar8[1] - *piVar8) / 0x18;
  if (*(int *)((char *)this + 8) + -2 < local_18) {
    local_18 = *(int *)((char *)this + 8) + -2;
  }
  iVar6 = 0;
  if (0 < local_18) {
    iVar7 = 0;
    local_14 = piVar8;
    do {
      ghidra::str::ctor
                ((std::string *)local_30,(std::string *)(**(int **)this + iVar7));
      // [seh] local_8 = 0;
      if (*(int **)((char *)this + 100) == (int *)0x0) goto LAB_0042ba69;
      (**(code **)(**(int **)((char *)this + 100) + 8))();
      // [seh] local_8 = 0xffffffff;
      if (0xf < local_1c) {
        pnVar4 = (nothrow_t *)(local_1c + 1);
        pvVar3 = local_30[0];
        if ((nothrow_t *)0xfff < pnVar4) {
          pvVar3 = *(void **)((int)local_30[0] + -4);
          pnVar4 = (nothrow_t *)(local_1c + 0x24);
          if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        uStack_4c = 0x42b992;
        operator_delete(pvVar3,pnVar4);
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x18;
    } while (iVar6 < local_18);
    piVar8 = *(int **)this;
  }
  pbVar5 = (std::string *)*piVar8;
  local_14 = piVar8;
  if (pbVar5 != pbVar5 + local_18 * 0x18) {
    pbVar2 = ghidra::lib::_Move_unchecked___x28_x29(pbVar5,pbVar1,unaff_EDI);
    piVar8 = local_14;
    ghidra::lib::_Destroy_range_t
              ((std::string *)pbVar5,(std::string *)pbVar1,(ghidra::lib::allocator_t *)unaff_EDI);
    piVar8[1] = (int)pbVar2;
    piVar8 = *(int **)this;
    pbVar5 = (std::string *)*piVar8;
  }
  iVar6 = piVar8[1] - (int)pbVar5 >> 0x1f;
  if ((piVar8[1] - (int)pbVar5) / 0x18 + iVar6 == iVar6) {
    abStack_58[0] = (std::string)0x0;
    ghidra::str::assign(abStack_58,"",0);
    ghidra::lib::_Func_class__operator_x28_x29((ghidra::func_class *)((char *)this + 0x40));
    this_00 = *(ghidra::vector **)this;
    if (this_00 != (ghidra::vector *)0x0) {
      ghidra::lib::vector___Tidy(this_00);
      uStack_4c = 0x42ba5c;
      operator_delete(this_00,(nothrow_t *)0xc);
    }
  }
  else {
    abStack_58[0] = (std::string)0x0;
    ghidra::str::assign(abStack_58,"`%[`$space`7/`$return`7 to continue`$]",0x26);
    ghidra::lib::_Func_class__operator_x28_x29((ghidra::func_class *)((char *)this + 0x40));
  }
  if (*(int **)((char *)this + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x8c) + 8))();
    // [seh] ExceptionList = local_10;
    return;
  }
LAB_0042ba69:
                    // WARNING: Subroutine does not return
  std::_Xbad_function_call();
}
