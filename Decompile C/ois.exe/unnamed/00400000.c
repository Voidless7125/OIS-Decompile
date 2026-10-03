#include "../ois.exe.h"


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00401110(void)

{
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b1568;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  std::basic_string<>::assign((basic_string<> *)&combatDiffStr,"`0Very Easy",0xb);
  local_8 = 0;
  _DAT_006575c0 = 0;
  _DAT_006575c4 = 0xf;
  DAT_006575b0 = 0;
  std::basic_string<>::assign((basic_string<> *)&DAT_006575b0,"`!Easy",6);
  local_8._0_1_ = 1;
  DAT_006575d8 = 0;
  DAT_006575dc = 0xf;
  DAT_006575c8._0_1_ = 0;
  std::basic_string<>::assign((basic_string<> *)&DAT_006575c8,"Normal",6);
  local_8._0_1_ = 2;
  _DAT_006575f0 = 0;
  _DAT_006575f4 = 0xf;
  DAT_006575e0 = 0;
  std::basic_string<>::assign((basic_string<> *)&DAT_006575e0,"`$Hard",6);
  local_8 = CONCAT31(local_8._1_3_,3);
  _DAT_00657608 = 0;
  _DAT_0065760c = 0xf;
  DAT_006575f8 = 0;
  std::basic_string<>::assign((basic_string<> *)&DAT_006575f8,"`@Very Hard",0xb);
  _atexit((_func_4879 *)&LAB_005cdcf0);
  ExceptionList = local_10;
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00401230(void)

{
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b15b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  std::basic_string<>::assign((basic_string<> *)&economyDiffStr,"`0Very Easy",0xb);
  local_8 = 0;
  _DAT_00657638 = 0;
  _DAT_0065763c = 0xf;
  DAT_00657628 = 0;
  std::basic_string<>::assign((basic_string<> *)&DAT_00657628,"`!Easy",6);
  local_8._0_1_ = 1;
  DAT_00657650 = 0;
  DAT_00657654 = 0xf;
  DAT_00657640._0_1_ = 0;
  std::basic_string<>::assign((basic_string<> *)&DAT_00657640,"Normal",6);
  local_8._0_1_ = 2;
  _DAT_00657668 = 0;
  _DAT_0065766c = 0xf;
  DAT_00657658 = 0;
  std::basic_string<>::assign((basic_string<> *)&DAT_00657658,"`$Hard",6);
  local_8 = CONCAT31(local_8._1_3_,3);
  _DAT_00657680 = 0;
  _DAT_00657684 = 0xf;
  DAT_00657670 = 0;
  std::basic_string<>::assign((basic_string<> *)&DAT_00657670,"`@Very Hard",0xb);
  _atexit((_func_4879 *)&LAB_005cdd10);
  ExceptionList = local_10;
  return;
}


void FUN_00401370(void)

{
  GameLogic *this;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b1672;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (GameLogic::m_instance == (GameLogic *)0x0) {
    this = operator_new(0x1d0);
    local_8 = 0;
    GameLogic::m_instance = (GameLogic *)GameLogic::GameLogic(this);
  }
  g_gameLogic = GameLogic::m_instance;
  ExceptionList = local_10;
  return;
}


void FUN_004014f0(void)

{
  GameData *this;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005bd5e2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (Singleton<GameData>::instance == (GameData *)0x0) {
    this = operator_new(0x278);
    local_8 = 0;
    Singleton<GameData>::instance = (GameData *)GameData::GameData(this);
  }
  g_gameData = Singleton<GameData>::instance;
  ExceptionList = local_10;
  return;
}


void FUN_00401760(void)

{
  InputConfiguration *this;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005be4bf;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (Singleton<>::instance == (InputConfiguration *)0x0) {
    this = operator_new(0x24);
    local_8 = 0;
    Singleton<>::instance = (InputConfiguration *)InputConfiguration::InputConfiguration(this);
  }
  g_inputConfiguration = Singleton<>::instance;
  ExceptionList = local_10;
  return;
}


void FUN_004019b0(void)

{
  cocos2d::Vec3::Vec3(&OSInterface::aspectOffset,0.0,0.0,0.0);
  _atexit((_func_4879 *)&LAB_005ce810);
  return;
}
