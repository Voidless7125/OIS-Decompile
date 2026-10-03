// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: TradeItemInstance * __thiscall TradeItemInstance::TradeItemInstance(TradeItemInstance *this,int param_1)
TradeItemInstance::TradeItemInstance(int param_1)

{
  GameData *pGVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  
  pGVar1 = g_gameData;
  uVar4 = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((char *)this + 4) = 0;
  *(undefined4 *)((char *)this + 8) = 0;
  *(undefined4 *)((char *)this + 0xc) = 0;
  *(undefined4 *)((char *)this + 0x10) = 0;
  *(int *)((char *)this + 0x14) = param_1;
  puVar2 = *(undefined4 **)(pGVar1 + 0x84);
  uVar3 = *(int *)(pGVar1 + 0x88) - (int)puVar2 >> 2;
  if (uVar3 != 0) {
    do {
      piVar5 = (int *)*puVar2;
      if (*piVar5 == param_1) goto LAB_0049bcc1;
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar4 < uVar3);
  }
  piVar5 = (int *)0x0;
LAB_0049bcc1:
  ghidra::str::ctor((std::string *)((char *)this + 0x18),(std::string *)piVar5[7]);
  *(undefined4 *)((char *)this + 0x30) = 0xffffffff;
  return;
}
