#include "../ois.exe.h"


void FUN_0056720f(double param_1,double param_2)

{
  bool bVar1;
  NetworkData *extraout_ECX;
  NetworkData *extraout_ECX_00;
  NetworkData *this;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  uint unaff_retaddr;
  basic_string<> local_18 [4];
  undefined4 uStack_14;
  int iVar2;
  
  local_18[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_18,"invmode",7);
  bVar1 = Widget::getOptionAsBool((Widget *)(unaff_EBX + 0x290));
  if (bVar1) {
    if (g_gameLogic[0x71] == (GameLogic)0x0) {
      uStack_14 = 0x567282;
      ShipInterface::doSelectComponent(*(Ship **)(g_gameData + 0xd0),unaff_ESI,0,0);
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    Singleton<>::getInstance();
    iVar2 = 0x83;
    this = extraout_ECX;
  }
  else {
    if (g_gameLogic[0x71] == (GameLogic)0x0) {
      uStack_14 = 0x5672d4;
      ShipInterface::doEngSelectComponent(*(Ship **)(g_gameData + 0xd0),unaff_ESI + 100,0,0);
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    Singleton<>::getInstance();
    iVar2 = 0x7d;
    this = extraout_ECX_00;
  }
  NetworkData::sendShipCommand
            (this,iVar2,(double)((ulonglong)unaff_retaddr << 0x20),param_1,param_2);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}
