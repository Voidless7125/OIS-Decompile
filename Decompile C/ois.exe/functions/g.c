#include "../ois.exe.h"


// enum EDifficultyMode::DifficultyMode __cdecl getDifficulty(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

DifficultyMode __cdecl getDifficulty(void *param_1)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  DifficultyMode DVar6;
  char *unaff_EDI;
  void *pvVar7;
  uint in_stack_00000018;
  
  DVar6 = 0;
  do {
    pcVar2 = (&PTR_s_easy_005d013c)[DVar6];
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    bVar3 = std::_Traits_equal<>(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1),unaff_EDI,unaff_ESI);
    if (bVar3) goto LAB_0040fcb1;
    DVar6 = DVar6 + 1;
  } while ((int)DVar6 < 4);
  DVar6 = 1;
LAB_0040fcb1:
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar7 = param_1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar7 = *(void **)((int)param_1 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar5);
  }
  return DVar6;
}


// enum EQuadrant::Quadrant __cdecl getQuadrant(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

Quadrant __cdecl getQuadrant(void *param_1)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  Quadrant QVar6;
  char *unaff_EDI;
  void *pvVar7;
  uint in_stack_00000018;
  
  QVar6 = 0;
  do {
    pcVar2 = (&PTR_s_A_005dfbbc)[QVar6];
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    bVar3 = std::_Traits_equal<>(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1),unaff_EDI,unaff_ESI);
    if (bVar3) goto LAB_004a88fe;
    QVar6 = QVar6 + 1;
  } while ((int)QVar6 < 4);
  QVar6 = 0;
LAB_004a88fe:
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar7 = param_1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar7 = *(void **)((int)param_1 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar5);
  }
  return QVar6;
}


// enum EModuleSlotType::ModuleSlotType __cdecl getModuleSlotTypeForString(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

ModuleSlotType __cdecl getModuleSlotTypeForString(void *param_1)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  ModuleSlotType MVar6;
  char *unaff_EDI;
  void *pvVar7;
  uint in_stack_00000018;
  
  MVar6 = 0;
  do {
    pcVar2 = (&PTR_s_comp_005dfd08)[MVar6];
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    bVar3 = std::_Traits_equal<>(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1),unaff_EDI,unaff_ESI);
    if (bVar3) goto LAB_004b03de;
    MVar6 = MVar6 + 1;
  } while ((int)MVar6 < 4);
  MVar6 = 0;
LAB_004b03de:
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar7 = param_1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar7 = *(void **)((int)param_1 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar5);
  }
  return MVar6;
}


// enum EScenarioCategory::ScenarioCategory __cdecl getScenarioCategory(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

ScenarioCategory __cdecl getScenarioCategory(void *param_1)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  ScenarioCategory SVar6;
  char *unaff_EDI;
  void *pvVar7;
  uint in_stack_00000018;
  
  SVar6 = 0;
  do {
    pcVar2 = (&PTR_s_tutorial_005e0188)[SVar6];
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    bVar3 = std::_Traits_equal<>(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1),unaff_EDI,unaff_ESI);
    if (bVar3) goto LAB_004ca6a1;
    SVar6 = SVar6 + 1;
  } while ((int)SVar6 < 5);
  SVar6 = 2;
LAB_004ca6a1:
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar7 = param_1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar7 = *(void **)((int)param_1 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar5);
  }
  return SVar6;
}


// enum EScenarioType::ScenarioType __cdecl getScenarioType(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

ScenarioType __cdecl getScenarioType(void *param_1)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  ScenarioType SVar6;
  char *unaff_EDI;
  void *pvVar7;
  uint in_stack_00000018;
  
  SVar6 = 0;
  do {
    pcVar2 = (&PTR_s_test_005e019c)[SVar6];
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    bVar3 = std::_Traits_equal<>(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1),unaff_EDI,unaff_ESI);
    if (bVar3) goto LAB_004ca731;
    SVar6 = SVar6 + 1;
  } while ((int)SVar6 < 8);
  SVar6 = 7;
LAB_004ca731:
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar7 = param_1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar7 = *(void **)((int)param_1 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar5);
  }
  return SVar6;
}


// enum EShipDataType::ShipDataType __cdecl getShipDataType(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

ShipDataType __cdecl getShipDataType(void *param_1)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  ShipDataType SVar6;
  char *unaff_EDI;
  void *pvVar7;
  uint in_stack_00000018;
  
  SVar6 = 0;
  do {
    pcVar2 = (&PTR_s_NONE_005e01f0)[SVar6];
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    bVar3 = std::_Traits_equal<>(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1),unaff_EDI,unaff_ESI);
    if (bVar3) goto LAB_004dbc4e;
    SVar6 = SVar6 + 1;
  } while ((int)SVar6 < 0x27);
  SVar6 = 0;
LAB_004dbc4e:
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar7 = param_1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar7 = *(void **)((int)param_1 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar5);
  }
  return SVar6;
}


// enum EShipDataCheckType::ShipDataCheckType __cdecl getShipCheckDataType(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

ShipDataCheckType __cdecl getShipCheckDataType(void *param_1)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  ShipDataCheckType SVar6;
  char *unaff_EDI;
  void *pvVar7;
  uint in_stack_00000018;
  
  SVar6 = 0;
  do {
    pcVar2 = (&PTR_s_NONE_005e0828)[SVar6];
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    bVar3 = std::_Traits_equal<>(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1),unaff_EDI,unaff_ESI);
    if (bVar3) goto LAB_004dbce1;
    SVar6 = SVar6 + 1;
  } while ((int)SVar6 < 0x153);
  SVar6 = 0;
LAB_004dbce1:
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar7 = param_1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar7 = *(void **)((int)param_1 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar5);
  }
  return SVar6;
}


// enum EShipTextDataType::ShipTextDataType __cdecl getShipTextDataType(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

ShipTextDataType __cdecl getShipTextDataType(void *param_1)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  ShipTextDataType SVar6;
  char *unaff_EDI;
  void *pvVar7;
  uint in_stack_00000018;
  
  SVar6 = 0;
  do {
    pcVar2 = (&PTR_s_NONE_005e0d80)[SVar6];
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    bVar3 = std::_Traits_equal<>(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1),unaff_EDI,unaff_ESI);
    if (bVar3) goto LAB_004dbd6e;
    SVar6 = SVar6 + 1;
  } while ((int)SVar6 < 99);
  SVar6 = 0;
LAB_004dbd6e:
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar7 = param_1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar7 = *(void **)((int)param_1 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar5);
  }
  return SVar6;
}


// enum EShipDataInputType::ShipDataInputType __cdecl getShipDataInputType(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

ShipDataInputType __cdecl getShipDataInputType(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  bool bVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  nothrow_t *pnVar10;
  int iVar11;
  int iVar12;
  ShipDataInputType SVar13;
  uint unaff_EDI;
  int in_stack_00000014;
  uint in_stack_00000018;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bff48;
  local_10 = ExceptionList;
  pcVar5 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  puVar6 = &param_1;
  if (0xf < in_stack_00000018) {
    puVar6 = param_1;
  }
  puVar9 = &param_1;
  if (0xf < in_stack_00000018) {
    puVar9 = param_1;
  }
  iVar11 = ((int)puVar6 + in_stack_00000014) - (int)puVar9;
  iVar12 = 0;
  if ((undefined4 *)((int)puVar6 + in_stack_00000014) < puVar9) {
    iVar11 = 0;
  }
  if (iVar11 != 0) {
    do {
      iVar7 = toupper((int)*(char *)(iVar12 + (int)puVar9));
      *(char *)(iVar12 + (int)puVar6) = (char)iVar7;
      iVar12 = iVar12 + 1;
    } while (iVar12 != iVar11);
  }
  uVar3 = in_stack_00000018;
  puVar6 = param_1;
  SVar13 = 0;
  do {
    pcVar2 = (&PTR_s_NONE_005e0f40)[SVar13];
    pcVar8 = pcVar2;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    bVar4 = std::_Traits_equal<>(pcVar2,(int)pcVar8 - (int)(pcVar2 + 1),pcVar5,unaff_EDI);
    if (bVar4) goto LAB_004dce8c;
    SVar13 = SVar13 + 1;
  } while ((int)SVar13 < 0x43);
  SVar13 = 0;
LAB_004dce8c:
  if (0xf < uVar3) {
    pnVar10 = (nothrow_t *)(uVar3 + 1);
    puVar9 = puVar6;
    if ((nothrow_t *)0xfff < pnVar10) {
      puVar9 = (undefined4 *)puVar6[-1];
      pnVar10 = (nothrow_t *)(uVar3 + 0x24);
      if (0x1f < (uint)((int)puVar6 + (-4 - (int)puVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(puVar9,pnVar10);
  }
  ExceptionList = local_10;
  return SVar13;
}


// void * __cdecl getShipCheckDataPointer(enum EShipDataInputType::ShipDataInputType)

void * __cdecl getShipCheckDataPointer(ShipDataInputType param_1)

{
  Infopedia *pIVar1;
  NotesManager *pNVar2;
  InputConfiguration *pIVar3;
  PowerManager *pPVar4;
  TradeEngine *pTVar5;
  undefined4 in_ECX;
  
  switch(in_ECX) {
  case 1:
    return g_gameData + 0xf4;
  case 2:
    return &OISConfiguration::username;
  case 3:
    return &OISConfiguration::serverIP;
  case 4:
    return &OISConfiguration::serverPort;
  case 5:
    return g_gameData + 0x1f0;
  case 6:
    return g_gameData + 0x10c;
  case 7:
    return &OISConfiguration::soundVolume;
  case 8:
    return &OISConfiguration::musicVolume;
  case 9:
    return &OISConfiguration::displayFullscreen;
  case 10:
    return &OISConfiguration::currentResolutionStr;
  case 0xb:
    return &OISConfiguration::keySounds;
  case 0xc:
    return &OISConfiguration::scrollWheel;
  case 0xd:
    return &OISConfiguration::noCameraMotion;
  case 0xe:
    return &OISConfiguration::tooltips;
  case 0xf:
    return &OISConfiguration::sendAnalytics;
  case 0x10:
    pIVar1 = Singleton<Infopedia>::getInstance();
    return pIVar1 + 0x1c;
  case 0x11:
    return &ShipData::shipsLogCurrentItem;
  case 0x12:
    pTVar5 = Singleton<>::getInstance();
    return (void *)(*(int *)(pTVar5 + 0x11c) + 8);
  case 0x13:
    pTVar5 = Singleton<>::getInstance();
    return (void *)(*(int *)(pTVar5 + 0x11c) + 0x4c);
  case 0x14:
    pTVar5 = Singleton<>::getInstance();
    return (void *)(*(int *)(pTVar5 + 0x11c) + 0xc);
  case 0x15:
    pTVar5 = Singleton<>::getInstance();
    return (void *)(*(int *)(pTVar5 + 0x11c) + 0x50);
  case 0x16:
    pTVar5 = Singleton<>::getInstance();
    return (void *)(*(int *)(pTVar5 + 0x11c) + 0x1c);
  case 0x17:
    pTVar5 = Singleton<>::getInstance();
    return *(void **)(pTVar5 + 0x11c);
  case 0x18:
    pTVar5 = Singleton<>::getInstance();
    return (void *)(*(int *)(pTVar5 + 0x11c) + 0x94);
  case 0x19:
    pTVar5 = Singleton<>::getInstance();
    return (void *)(*(int *)(pTVar5 + 0x11c) + 0x90);
  case 0x1a:
    pTVar5 = Singleton<>::getInstance();
    return (void *)(*(int *)(pTVar5 + 0x11c) + 0xa4);
  case 0x1b:
    pTVar5 = Singleton<>::getInstance();
    return pTVar5 + 0xcc;
  case 0x1c:
    pTVar5 = Singleton<>::getInstance();
    return pTVar5 + 0xd0;
  case 0x1d:
    pTVar5 = Singleton<>::getInstance();
    return pTVar5 + 0xd4;
  case 0x1e:
    pTVar5 = Singleton<>::getInstance();
    return pTVar5 + 0xdc;
  case 0x1f:
    pTVar5 = Singleton<>::getInstance();
    return pTVar5 + 0xe0;
  case 0x20:
    pTVar5 = Singleton<>::getInstance();
    return pTVar5 + 0xe9;
  case 0x21:
    pTVar5 = Singleton<>::getInstance();
    return pTVar5 + 0x10c;
  case 0x22:
    pTVar5 = Singleton<>::getInstance();
    return pTVar5 + 0x110;
  case 0x23:
    pTVar5 = Singleton<>::getInstance();
    return pTVar5 + 0x114;
  case 0x24:
    pTVar5 = Singleton<>::getInstance();
    return pTVar5 + 0x118;
  case 0x25:
    pTVar5 = Singleton<>::getInstance();
    return pTVar5 + 0xf4;
  case 0x26:
    pTVar5 = Singleton<>::getInstance();
    return pTVar5 + 0x109;
  case 0x27:
    pTVar5 = Singleton<>::getInstance();
    return pTVar5 + 0xf8;
  case 0x28:
    pTVar5 = Singleton<>::getInstance();
    return pTVar5 + 0xfc;
  case 0x29:
    pTVar5 = Singleton<>::getInstance();
    return pTVar5 + 0x108;
  case 0x2a:
    pTVar5 = Singleton<>::getInstance();
    return pTVar5 + 0xd8;
  case 0x2b:
    return g_gameLogic + 0x118;
  case 0x2c:
    return g_gameLogic + 0x119;
  case 0x2d:
    return g_gameLogic + 0x11a;
  case 0x2e:
    pTVar5 = Singleton<>::getInstance();
    return pTVar5 + 0xf0;
  case 0x2f:
    pNVar2 = Singleton<>::getInstance();
    return pNVar2;
  case 0x30:
    pTVar5 = Singleton<>::getInstance();
    return pTVar5 + 0xe4;
  case 0x31:
    pIVar3 = Singleton<>::getInstance();
    return pIVar3 + 8;
  case 0x32:
    return g_gameLogic + 0x141;
  case 0x33:
    return g_gameLogic + 0x140;
  case 0x34:
    return g_gameLogic + 0x142;
  case 0x35:
    pPVar4 = Singleton<>::getInstance();
    return pPVar4;
  case 0x36:
    pTVar5 = Singleton<>::getInstance();
    return pTVar5 + 0x6c;
  case 0x37:
    pTVar5 = Singleton<>::getInstance();
    return pTVar5 + 0x84;
  case 0x38:
    pTVar5 = Singleton<>::getInstance();
    return pTVar5 + 0x9c;
  case 0x39:
    pTVar5 = Singleton<>::getInstance();
    return pTVar5 + 0xb4;
  case 0x3a:
    return g_gameLogic + 0xa4;
  case 0x3b:
    return g_gameLogic + 0xac;
  case 0x3c:
    return g_gameLogic + 200;
  case 0x3d:
    return g_gameLogic + 0xe4;
  case 0x3e:
    return g_gameLogic + 0x100;
  case 0x3f:
    return g_gameLogic + 0x11b;
  case 0x40:
    return g_gameLogic + 0x11c;
  case 0x41:
    return g_gameLogic + 0x14c;
  case 0x42:
    return g_gameData + 0x25c;
  default:
    return (void *)0x0;
  }
}


// class std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > __cdecl
// getShipCheckDataPossibleValues(enum EShipDataInputType::ShipDataInputType)

void __cdecl getShipCheckDataPossibleValues(ShipDataInputType param_1)

{
  basic_string<> *this;
  basic_string<> *pbVar1;
  Infopedia *pIVar2;
  GameLogic *in_ECX;
  int iVar3;
  undefined4 in_EDX;
  uint uVar4;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005bff89;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  switch(in_EDX) {
  case 0x10:
    pIVar2 = Singleton<Infopedia>::getInstance();
    local_8 = 0;
    uVar4 = 0;
    *(undefined4 *)in_ECX = 0;
    *(undefined4 *)(in_ECX + 4) = 0;
    *(undefined4 *)(in_ECX + 8) = 0;
    iVar3 = *(int *)(pIVar2 + 0x38);
    if (*(int *)(pIVar2 + 0x3c) - iVar3 >> 2 != 0) {
      do {
        this = *(basic_string<> **)(in_ECX + 4);
        pbVar1 = *(basic_string<> **)(iVar3 + uVar4 * 4);
        if (*(basic_string<> **)(in_ECX + 8) == this) {
          std::vector<>::_Emplace_reallocate<>((vector<> *)in_ECX,(basic_string<> *)this,pbVar1);
        }
        else {
          std::basic_string<>::basic_string<>(this,pbVar1);
          *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 0x18;
        }
        uVar4 = uVar4 + 1;
        iVar3 = *(int *)(pIVar2 + 0x38);
      } while (uVar4 < (uint)(*(int *)(pIVar2 + 0x3c) - iVar3 >> 2));
      ExceptionList = local_10;
      return;
    }
    break;
  case 0x11:
    std::vector<>::vector<>
              ((vector<> *)in_ECX,(vector<> *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x224) + 0x38)
              );
    ExceptionList = local_10;
    return;
  default:
    *(undefined4 *)in_ECX = 0;
    *(undefined4 *)(in_ECX + 4) = 0;
    *(undefined4 *)(in_ECX + 8) = 0;
    break;
  case 0x41:
    GameLogic::getCurrentLocalServers(in_ECX);
    ExceptionList = local_10;
    return;
  case 0x42:
    GameLogic::getCurrentPlayersAndShips(g_gameLogic);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = local_10;
  return;
}


// enum EShipCommand::ShipCommand __cdecl getShipCommandType(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

ShipCommand __cdecl getShipCommandType(void *param_1)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  ShipCommand SVar6;
  char *unaff_EDI;
  void *pvVar7;
  uint in_stack_00000018;
  
  SVar6 = 0;
  do {
    pcVar2 = (&PTR_s_NONE_005e1078)[SVar6];
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    bVar3 = std::_Traits_equal<>(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1),unaff_EDI,unaff_ESI);
    if (bVar3) goto LAB_004ebab1;
    SVar6 = SVar6 + 1;
  } while ((int)SVar6 < 0xd7);
  SVar6 = 0;
LAB_004ebab1:
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar7 = param_1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar7 = *(void **)((int)param_1 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar5);
  }
  return SVar6;
}


// enum ECaptainStyle::CaptainStyle __cdecl getCaptainStyle(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

CaptainStyle __cdecl getCaptainStyle(void *param_1)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  CaptainStyle CVar6;
  char *unaff_EDI;
  void *pvVar7;
  uint in_stack_00000018;
  
  CVar6 = 0;
  do {
    pcVar2 = (&PTR_s_cautious_005e1694)[CVar6];
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    bVar3 = std::_Traits_equal<>(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1),unaff_EDI,unaff_ESI);
    if (bVar3) goto LAB_005023ee;
    CVar6 = CVar6 + 1;
  } while ((int)CVar6 < 4);
  CVar6 = 0;
LAB_005023ee:
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar7 = param_1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar7 = *(void **)((int)param_1 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar5);
  }
  return CVar6;
}


// enum ECaptainExperience::CaptainExperience __cdecl getCaptainExperience(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

CaptainExperience __cdecl getCaptainExperience(void *param_1)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  CaptainExperience CVar6;
  char *unaff_EDI;
  void *pvVar7;
  uint in_stack_00000018;
  
  CVar6 = 0;
  do {
    pcVar2 = (&PTR_s_green_005e16b4)[CVar6];
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    bVar3 = std::_Traits_equal<>(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1),unaff_EDI,unaff_ESI);
    if (bVar3) goto LAB_00502481;
    CVar6 = CVar6 + 1;
  } while ((int)CVar6 < 4);
  CVar6 = 1;
LAB_00502481:
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar7 = param_1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar7 = *(void **)((int)param_1 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar5);
  }
  return CVar6;
}


// enum EShipLook::ShipLook __cdecl getShipLookup(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

ShipLook __cdecl getShipLookup(void *param_1)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  ShipLook SVar6;
  char *unaff_EDI;
  void *pvVar7;
  uint in_stack_00000018;
  
  SVar6 = 0;
  do {
    pcVar2 = (&PTR_s_normal_005e1630)[SVar6];
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    bVar3 = std::_Traits_equal<>(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1),unaff_EDI,unaff_ESI);
    if (bVar3) goto LAB_0050250e;
    SVar6 = SVar6 + 1;
  } while ((int)SVar6 < 3);
  SVar6 = 0;
LAB_0050250e:
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar7 = param_1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar7 = *(void **)((int)param_1 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar5);
  }
  return SVar6;
}


// enum EGoodContainmentOption::GoodContainmentOption __cdecl getContainmentOption(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

GoodContainmentOption __cdecl getContainmentOption(void *param_1)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  GoodContainmentOption GVar6;
  char *unaff_EDI;
  void *pvVar7;
  uint in_stack_00000018;
  
  bVar3 = std::_Traits_equal<>("solid",5,unaff_EDI,unaff_ESI);
  GVar6 = 0;
  if (!bVar3) {
    do {
      pcVar2 = (&PTR_s_none_005e16e8)[GVar6];
      pcVar4 = pcVar2;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      bVar3 = std::_Traits_equal<>(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1),unaff_EDI,unaff_ESI);
      if (bVar3) goto LAB_0050801e;
      GVar6 = GVar6 + 1;
    } while ((int)GVar6 < 3);
    GVar6 = 0;
  }
LAB_0050801e:
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar7 = param_1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar7 = *(void **)((int)param_1 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar5);
  }
  return GVar6;
}


// enum EHullLocation::HullLocation __cdecl getHullLocationForString(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

HullLocation __cdecl getHullLocationForString(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  bool bVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  nothrow_t *pnVar10;
  int iVar11;
  int iVar12;
  HullLocation HVar13;
  uint unaff_EDI;
  int in_stack_00000014;
  uint in_stack_00000018;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bff48;
  local_10 = ExceptionList;
  pcVar5 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  puVar6 = &param_1;
  if (0xf < in_stack_00000018) {
    puVar6 = param_1;
  }
  puVar9 = &param_1;
  if (0xf < in_stack_00000018) {
    puVar9 = param_1;
  }
  iVar11 = ((int)puVar6 + in_stack_00000014) - (int)puVar9;
  iVar12 = 0;
  if ((undefined4 *)((int)puVar6 + in_stack_00000014) < puVar9) {
    iVar11 = 0;
  }
  if (iVar11 != 0) {
    do {
      iVar7 = tolower((int)*(char *)(iVar12 + (int)puVar9));
      *(char *)(iVar12 + (int)puVar6) = (char)iVar7;
      iVar12 = iVar12 + 1;
    } while (iVar12 != iVar11);
  }
  uVar3 = in_stack_00000018;
  puVar6 = param_1;
  HVar13 = 0;
  do {
    pcVar2 = (&PTR_s_bow_005e189c)[HVar13];
    pcVar8 = pcVar2;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    bVar4 = std::_Traits_equal<>(pcVar2,(int)pcVar8 - (int)(pcVar2 + 1),pcVar5,unaff_EDI);
    if (bVar4) goto LAB_0051a6fc;
    HVar13 = HVar13 + 1;
  } while ((int)HVar13 < 5);
  HVar13 = 0;
LAB_0051a6fc:
  if (0xf < uVar3) {
    pnVar10 = (nothrow_t *)(uVar3 + 1);
    puVar9 = puVar6;
    if ((nothrow_t *)0xfff < pnVar10) {
      puVar9 = (undefined4 *)puVar6[-1];
      pnVar10 = (nothrow_t *)(uVar3 + 0x24);
      if (0x1f < (uint)((int)puVar6 + (-4 - (int)puVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(puVar9,pnVar10);
  }
  ExceptionList = local_10;
  return HVar13;
}


// enum ECharacterMouthState::CharacterMouthState __cdecl getCharacterMouthState(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

CharacterMouthState __cdecl getCharacterMouthState(void *param_1)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  CharacterMouthState CVar6;
  char *unaff_EDI;
  void *pvVar7;
  uint in_stack_00000018;
  
  CVar6 = 0;
  do {
    pcVar2 = (&PTR_s_neutral_005e1db4)[CVar6];
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    bVar3 = std::_Traits_equal<>(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1),unaff_EDI,unaff_ESI);
    if (bVar3) goto LAB_005379ee;
    CVar6 = CVar6 + 1;
  } while ((int)CVar6 < 4);
  CVar6 = 0;
LAB_005379ee:
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar7 = param_1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar7 = *(void **)((int)param_1 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar5);
  }
  return CVar6;
}


// enum ECharacterEyeState::CharacterEyeState __cdecl getCharacterEyeState(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

CharacterEyeState __cdecl getCharacterEyeState(void *param_1)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  CharacterEyeState CVar6;
  char *unaff_EDI;
  void *pvVar7;
  uint in_stack_00000018;
  
  CVar6 = 0;
  do {
    pcVar2 = (&PTR_s_neutral_005e1de8)[CVar6];
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    bVar3 = std::_Traits_equal<>(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1),unaff_EDI,unaff_ESI);
    if (bVar3) goto LAB_00537a7e;
    CVar6 = CVar6 + 1;
  } while ((int)CVar6 < 5);
  CVar6 = 0;
LAB_00537a7e:
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar7 = param_1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar7 = *(void **)((int)param_1 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar5);
  }
  return CVar6;
}


// enum EOverlaySegment::OverlaySegment __cdecl getOverlaySegment(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

OverlaySegment __cdecl getOverlaySegment(void *param_1)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  OverlaySegment OVar6;
  char *unaff_EDI;
  void *pvVar7;
  uint in_stack_00000018;
  
  OVar6 = 0;
  do {
    pcVar2 = (&PTR_s_head_005e1e3c)[OVar6];
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    bVar3 = std::_Traits_equal<>(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1),unaff_EDI,unaff_ESI);
    if (bVar3) goto LAB_00537b0e;
    OVar6 = OVar6 + 1;
  } while ((int)OVar6 < 3);
  OVar6 = 0;
LAB_00537b0e:
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar7 = param_1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar7 = *(void **)((int)param_1 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar5);
  }
  return OVar6;
}


// enum ECharacterPosition::CharacterPosition __cdecl getCharacterPosition(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

CharacterPosition __cdecl getCharacterPosition(void *param_1)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  CharacterPosition CVar6;
  char *unaff_EDI;
  void *pvVar7;
  uint in_stack_00000018;
  
  CVar6 = 0;
  do {
    pcVar2 = (&PTR_s_standing_005e1e60)[CVar6];
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    bVar3 = std::_Traits_equal<>(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1),unaff_EDI,unaff_ESI);
    if (bVar3) goto LAB_005397ae;
    CVar6 = CVar6 + 1;
  } while ((int)CVar6 < 5);
  CVar6 = 0;
LAB_005397ae:
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar7 = param_1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar7 = *(void **)((int)param_1 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar5);
  }
  return CVar6;
}


// enum ESound::Sound __cdecl getSound(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

Sound __cdecl getSound(void *param_1)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  Sound SVar6;
  char *unaff_EDI;
  void *pvVar7;
  uint in_stack_00000018;
  
  SVar6 = 0;
  do {
    pcVar2 = (&PTR_s_None_005e2168)[SVar6];
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    bVar3 = std::_Traits_equal<>(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1),unaff_EDI,unaff_ESI);
    if (bVar3) goto LAB_0055953e;
    SVar6 = SVar6 + 1;
  } while ((int)SVar6 < 0x32);
  SVar6 = 0;
LAB_0055953e:
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar7 = param_1;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar7 = *(void **)((int)param_1 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar5);
  }
  return SVar6;
}


// unsigned __int64 __cdecl GetTimeUS_Windows(void)

__uint64 __cdecl GetTimeUS_Windows(void)

{
  uint extraout_ECX;
  int unaff_EBX;
  undefined8 uVar1;
  __uint64 _Var2;
  undefined1 auStack_24 [4];
  undefined1 local_20 [4];
  _LARGE_INTEGER PerfVal;
  _LARGE_INTEGER yo1;
  uint local_c;
  
  local_c = ___security_cookie ^ (uint)auStack_24;
  if (DAT_0065d85f == '\0') {
    DAT_0065d85f = '\x01';
  }
  QueryPerformanceFrequency((LARGE_INTEGER *)&PerfVal._s_0.HighPart);
  QueryPerformanceCounter((LARGE_INTEGER *)local_20);
  uVar1 = __alldvrm((uint)local_20,PerfVal._s_0.LowPart,PerfVal._s_0.HighPart,yo1._s_0.LowPart);
  local_20 = SUB84(uVar1,0);
  __aulldiv((uint)((ulonglong)extraout_ECX * 1000000),
            unaff_EBX * 1000000 + (int)((ulonglong)extraout_ECX * 1000000 >> 0x20),
            PerfVal._s_0.HighPart,yo1._s_0.LowPart);
  _Var2 = __security_check_cookie(local_c ^ (uint)auStack_24);
  return _Var2;
}


// class RakNet::SimpleMutex & __cdecl GetPoolMutex(void)

SimpleMutex * __cdecl GetPoolMutex(void)

{
  if (*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_006629c4) {
    __Init_thread_header(&DAT_006629c4);
    if (DAT_006629c4 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_006629ac);
      _atexit(`GetPoolMutex'::`2'::_dynamic_atexit_destructor_for__poolMutex__);
      __Init_thread_footer(&DAT_006629c4);
    }
  }
  return (SimpleMutex *)&lpCriticalSection_006629ac;
}
