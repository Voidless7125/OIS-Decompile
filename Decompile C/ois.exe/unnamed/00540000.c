#include "../ois.exe.h"


void FUN_0054098f(void)

{
  int iVar1;
  TextEngine *this;
  bool bVar2;
  TextEngine *this_00;
  undefined4 extraout_ECX;
  TextEngine *this_01;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  TradeLocation *unaff_EDI;
  basic_string<> local_18 [8];
  undefined4 uStack_10;
  
  std::basic_string<>::basic_string<>(local_18,(basic_string<> *)unaff_EDI);
  bVar2 = Faction::officeAtLocation(*(Faction **)(*(int *)(unaff_EDI + 0x4c) + unaff_ESI * 4));
  if (bVar2) {
    iVar1 = *(int *)(*(int *)(unaff_EDI + 0x4c) + unaff_ESI * 4);
    if (*(char *)(iVar1 + 0xe0) == '\0') {
      this = *(TextEngine **)(iVar1 + 0xcc);
      if (*(int *)(*(int *)(g_gameData + 0x124) + 0x1c) < (int)this) {
        uStack_10 = 0x540a0e;
        TextEngine::addLinef(this,*(char **)(unaff_EBX + 0x20));
      }
      else {
        local_18[0] = (basic_string<>)0x0;
        std::basic_string<>::assign(local_18,"License",7);
        BankAccount::addTransaction
                  (*(BankAccount **)(g_gameData + 0x124),extraout_ECX,
                   -*(int *)(*(int *)(*(int *)(unaff_EDI + 0x4c) + unaff_ESI * 4) + 0xcc));
        Faction::getAccess(*(Faction **)(*(int *)(unaff_EDI + 0x4c) + unaff_ESI * 4));
        uStack_10 = 0x540a83;
        TextEngine::addLinef(this_01,*(char **)(unaff_EBX + 0x20));
        local_18[0] = (basic_string<>)0x0;
        std::basic_string<>::assign(local_18,"`7Cost: `$100c",0xe);
        TextEngine::addLine(*(TextEngine **)(unaff_EBX + 0x20));
        local_18[0] = (basic_string<>)0x0;
        std::basic_string<>::assign
                  (local_18,"`7Type `%LIST`7 to view contracts from your new employer.",0x39);
        TextEngine::addLine(*(TextEngine **)(unaff_EBX + 0x20));
        TradeLocation::clearContracts(unaff_EDI);
        TradeLocation::populateContracts(unaff_EDI);
      }
    }
    else {
      local_18[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_18,"`$You already have this contract license.",0x29);
      TextEngine::addLine(*(TextEngine **)(unaff_EBX + 0x20));
    }
  }
  else {
    uStack_10 = 0x5409c8;
    TextEngine::addLinef(this_00,*(char **)(unaff_EBX + 0x20));
  }
  std::vector<>::_Tidy((vector<> *)(unaff_EBP + 0xc));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}
