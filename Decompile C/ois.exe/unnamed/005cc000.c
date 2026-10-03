#include "../ois.exe.h"


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_005cdd30(_Tree<> *param_1)

{
  _Tree<> *local_8;
  
  local_8 = param_1;
  std::_Tree<>::erase(param_1,&local_8,*_startStationsPersector,_startStationsPersector);
  operator_delete(_startStationsPersector,(nothrow_t *)0x2c);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005cdd60(void)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  
  if (0xf < DAT_006576d4) {
    pnVar2 = (nothrow_t *)(DAT_006576d4 + 1);
    pvVar1 = _randomChars;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)_randomChars - 4);
      pnVar2 = (nothrow_t *)(DAT_006576d4 + 0x24);
      if (0x1f < (uint)((int)_randomChars + (-4 - (int)pvVar1))) {
                    // WARNING: Could not recover jumptable at 0x005cddb1. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  DAT_006576d0 = 0;
  DAT_006576d4 = 0xf;
  _randomChars = (void *)((uint)_randomChars & 0xffffff00);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005cddc0(void)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  
  if (_m_interfaces != (void *)0x0) {
    pnVar2 = (nothrow_t *)(DAT_0065d610 - (int)_m_interfaces & 0xfffffffc);
    pvVar1 = _m_interfaces;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)_m_interfaces + -4);
      pnVar2 = pnVar2 + 0x23;
      if (0x1f < (uint)((int)_m_interfaces + (-4 - (int)pvVar1))) {
                    // WARNING: Could not recover jumptable at 0x005cde17. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    operator_delete(pvVar1,pnVar2);
    _m_interfaces = (void *)0x0;
    DAT_0065d60c = 0;
    DAT_0065d610 = 0;
  }
  return;
}


void FUN_005cde20(void)

{
  std::vector<>::_Tidy(&filesIncluded);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005cde30(void)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  
  if (0xf < DAT_006576ec) {
    pnVar2 = (nothrow_t *)(DAT_006576ec + 1);
    pvVar1 = _currentConversationPartner;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)_currentConversationPartner - 4);
      pnVar2 = (nothrow_t *)(DAT_006576ec + 0x24);
      if (0x1f < (uint)((int)_currentConversationPartner + (-4 - (int)pvVar1))) {
                    // WARNING: Could not recover jumptable at 0x005cde81. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  _DAT_006576e8 = 0;
  DAT_006576ec = 0xf;
  _currentConversationPartner = (void *)((uint)_currentConversationPartner & 0xffffff00);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005cde90(void)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  
  if (0xf < DAT_00657704) {
    pnVar2 = (nothrow_t *)(DAT_00657704 + 1);
    pvVar1 = _str;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)_str - 4);
      pnVar2 = (nothrow_t *)(DAT_00657704 + 0x24);
      if (0x1f < (uint)((int)_str + (-4 - (int)pvVar1))) {
                    // WARNING: Could not recover jumptable at 0x005cdee1. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  DAT_00657700 = 0;
  DAT_00657704 = 0xf;
  _str = (void *)((uint)_str & 0xffffff00);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005cdef0(void)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  
  if (0xf < DAT_0065771c) {
    pnVar2 = (nothrow_t *)(DAT_0065771c + 1);
    pvVar1 = _currentScenario;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)_currentScenario - 4);
      pnVar2 = (nothrow_t *)(DAT_0065771c + 0x24);
      if (0x1f < (uint)((int)_currentScenario + (-4 - (int)pvVar1))) {
                    // WARNING: Could not recover jumptable at 0x005cdf41. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  _DAT_00657718 = 0;
  DAT_0065771c = 0xf;
  _currentScenario = (void *)((uint)_currentScenario & 0xffffff00);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005cdf50(void)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  
  if (0xf < DAT_00657734) {
    pnVar2 = (nothrow_t *)(DAT_00657734 + 1);
    pvVar1 = _currentEmailPrefix;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)_currentEmailPrefix - 4);
      pnVar2 = (nothrow_t *)(DAT_00657734 + 0x24);
      if (0x1f < (uint)((int)_currentEmailPrefix + (-4 - (int)pvVar1))) {
                    // WARNING: Could not recover jumptable at 0x005cdfa1. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  _DAT_00657730 = 0;
  DAT_00657734 = 0xf;
  _currentEmailPrefix = (void *)((uint)_currentEmailPrefix & 0xffffff00);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005cdfb0(void)

{
  undefined1 local_8 [4];
  
  std::_Tree<>::erase((_Tree<> *)&DataLoader::data,local_8,*_data,_data);
  operator_delete(_data,(nothrow_t *)&DAT_00000040);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_005cdfe0(_Tree<> *param_1)

{
  int *piVar1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  piVar1 = _multiData;
  puStack_c = &DAT_005b5490;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  std::_Tree<>::_Erase(param_1,(_Tree_node<> *)_multiData[1]);
  _multiData[1] = (int)piVar1;
  *_multiData = (int)piVar1;
  _multiData[2] = (int)piVar1;
  DAT_0065d680 = 0;
  operator_delete(_multiData,(nothrow_t *)0x34);
  ExceptionList = local_10;
  return;
}


void FUN_005ce060(void)

{
  std::vector<>::_Tidy(&m_prefixes);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005ce070(void)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  
  if (0xf < DAT_006577c4) {
    pnVar2 = (nothrow_t *)(DAT_006577c4 + 1);
    pvVar1 = _username;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)_username - 4);
      pnVar2 = (nothrow_t *)(DAT_006577c4 + 0x24);
      if (0x1f < (uint)((int)_username + (-4 - (int)pvVar1))) {
                    // WARNING: Could not recover jumptable at 0x005ce0c1. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  DAT_006577c0 = 0;
  DAT_006577c4 = 0xf;
  _username = (void *)((uint)_username & 0xffffff00);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005ce0d0(void)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  
  if (0xf < DAT_00657764) {
    pnVar2 = (nothrow_t *)(DAT_00657764 + 1);
    pvVar1 = _serverIP;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)_serverIP - 4);
      pnVar2 = (nothrow_t *)(DAT_00657764 + 0x24);
      if (0x1f < (uint)((int)_serverIP + (-4 - (int)pvVar1))) {
                    // WARNING: Could not recover jumptable at 0x005ce121. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  _DAT_00657760 = 0;
  DAT_00657764 = 0xf;
  _serverIP = (void *)((uint)_serverIP & 0xffffff00);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005ce130(void)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  
  if (0xf < DAT_006577ac) {
    pnVar2 = (nothrow_t *)(DAT_006577ac + 1);
    pvVar1 = _scenario;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)_scenario - 4);
      pnVar2 = (nothrow_t *)(DAT_006577ac + 0x24);
      if (0x1f < (uint)((int)_scenario + (-4 - (int)pvVar1))) {
                    // WARNING: Could not recover jumptable at 0x005ce181. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  DAT_006577a8 = 0;
  DAT_006577ac = 0xf;
  _scenario = (void *)((uint)_scenario & 0xffffff00);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005ce190(void)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  
  if (0xf < DAT_00657794) {
    pnVar2 = (nothrow_t *)(DAT_00657794 + 1);
    pvVar1 = _rconPassword;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)_rconPassword - 4);
      pnVar2 = (nothrow_t *)(DAT_00657794 + 0x24);
      if (0x1f < (uint)((int)_rconPassword + (-4 - (int)pvVar1))) {
                    // WARNING: Could not recover jumptable at 0x005ce1e1. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  DAT_00657790 = 0;
  DAT_00657794 = 0xf;
  _rconPassword = (void *)((uint)_rconPassword & 0xffffff00);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005ce1f0(void)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  
  if (0xf < DAT_0065d75c) {
    pnVar2 = (nothrow_t *)(DAT_0065d75c + 1);
    pvVar1 = _serverPort;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)_serverPort - 4);
      pnVar2 = (nothrow_t *)(DAT_0065d75c + 0x24);
      if (0x1f < (uint)((int)_serverPort + (-4 - (int)pvVar1))) {
                    // WARNING: Could not recover jumptable at 0x005ce241. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  _DAT_0065d758 = 0;
  DAT_0065d75c = 0xf;
  _serverPort = (void *)((uint)_serverPort & 0xffffff00);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005ce250(void)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  
  if (0xf < DAT_0065774c) {
    pnVar2 = (nothrow_t *)(DAT_0065774c + 1);
    pvVar1 = _lastVersionPlayed;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)_lastVersionPlayed - 4);
      pnVar2 = (nothrow_t *)(DAT_0065774c + 0x24);
      if (0x1f < (uint)((int)_lastVersionPlayed + (-4 - (int)pvVar1))) {
                    // WARNING: Could not recover jumptable at 0x005ce2a1. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  _DAT_00657748 = 0;
  DAT_0065774c = 0xf;
  _lastVersionPlayed = (void *)((uint)_lastVersionPlayed & 0xffffff00);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005ce2b0(void)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  
  if (0xf < DAT_0065777c) {
    pnVar2 = (nothrow_t *)(DAT_0065777c + 1);
    pvVar1 = _originalResolution;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)_originalResolution - 4);
      pnVar2 = (nothrow_t *)(DAT_0065777c + 0x24);
      if (0x1f < (uint)((int)_originalResolution + (-4 - (int)pvVar1))) {
                    // WARNING: Could not recover jumptable at 0x005ce301. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  DAT_00657778 = 0;
  DAT_0065777c = 0xf;
  _originalResolution = (void *)((uint)_originalResolution & 0xffffff00);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005ce310(void)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  
  if (0xf < DAT_006577dc) {
    pnVar2 = (nothrow_t *)(DAT_006577dc + 1);
    pvVar1 = _currentResolutionStr;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)_currentResolutionStr - 4);
      pnVar2 = (nothrow_t *)(DAT_006577dc + 0x24);
      if (0x1f < (uint)((int)_currentResolutionStr + (-4 - (int)pvVar1))) {
                    // WARNING: Could not recover jumptable at 0x005ce361. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  DAT_006577d8 = 0;
  DAT_006577dc = 0xf;
  _currentResolutionStr = (void *)((uint)_currentResolutionStr & 0xffffff00);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005ce370(void)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  
  if (_validResolutions != (void *)0x0) {
    pnVar2 = (nothrow_t *)(DAT_0065d768 - (int)_validResolutions & 0xfffffff8);
    pvVar1 = _validResolutions;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)_validResolutions + -4);
      pnVar2 = pnVar2 + 0x23;
      if (0x1f < (uint)((int)_validResolutions + (-4 - (int)pvVar1))) {
                    // WARNING: Could not recover jumptable at 0x005ce3c7. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    operator_delete(pvVar1,pnVar2);
    _validResolutions = (void *)0x0;
    DAT_0065d764 = 0;
    DAT_0065d768 = 0;
  }
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005ce3d0(void)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  
  if (0xf < DAT_0065780c) {
    pnVar2 = (nothrow_t *)(DAT_0065780c + 1);
    pvVar1 = _rtComms;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)_rtComms - 4);
      pnVar2 = (nothrow_t *)(DAT_0065780c + 0x24);
      if (0x1f < (uint)((int)_rtComms + (-4 - (int)pvVar1))) {
                    // WARNING: Could not recover jumptable at 0x005ce421. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  _DAT_00657808 = 0;
  DAT_0065780c = 0xf;
  _rtComms = (void *)((uint)_rtComms & 0xffffff00);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005ce430(void)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  
  if (0xf < DAT_00657824) {
    pnVar2 = (nothrow_t *)(DAT_00657824 + 1);
    pvVar1 = _privateComms;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)_privateComms - 4);
      pnVar2 = (nothrow_t *)(DAT_00657824 + 0x24);
      if (0x1f < (uint)((int)_privateComms + (-4 - (int)pvVar1))) {
                    // WARNING: Could not recover jumptable at 0x005ce481. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  _DAT_00657820 = 0;
  DAT_00657824 = 0xf;
  _privateComms = (void *)((uint)_privateComms & 0xffffff00);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005ce490(void)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  
  if (0xf < DAT_006577f4) {
    pnVar2 = (nothrow_t *)(DAT_006577f4 + 1);
    pvVar1 = _shipsLogCurrentItem;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)_shipsLogCurrentItem - 4);
      pnVar2 = (nothrow_t *)(DAT_006577f4 + 0x24);
      if (0x1f < (uint)((int)_shipsLogCurrentItem + (-4 - (int)pvVar1))) {
                    // WARNING: Could not recover jumptable at 0x005ce4e1. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  _DAT_006577f0 = 0;
  DAT_006577f4 = 0xf;
  _shipsLogCurrentItem = (void *)((uint)_shipsLogCurrentItem & 0xffffff00);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005ce4f0(void)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  
  if (_m_elements != (void *)0x0) {
    pnVar2 = (nothrow_t *)(DAT_0065d8fc - (int)_m_elements & 0xfffffffc);
    pvVar1 = _m_elements;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)_m_elements + -4);
      pnVar2 = pnVar2 + 0x23;
      if (0x1f < (uint)((int)_m_elements + (-4 - (int)pvVar1))) {
                    // WARNING: Could not recover jumptable at 0x005ce547. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    operator_delete(pvVar1,pnVar2);
    _m_elements = (void *)0x0;
    _DAT_0065d8f8 = 0;
    DAT_0065d8fc = 0;
  }
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005ce550(void)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  
  if (0xf < DAT_00657854) {
    pnVar2 = (nothrow_t *)(DAT_00657854 + 1);
    pvVar1 = _m_inputText;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)_m_inputText - 4);
      pnVar2 = (nothrow_t *)(DAT_00657854 + 0x24);
      if (0x1f < (uint)((int)_m_inputText + (-4 - (int)pvVar1))) {
                    // WARNING: Could not recover jumptable at 0x005ce5a1. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  _DAT_00657850 = 0;
  DAT_00657854 = 0xf;
  _m_inputText = (void *)((uint)_m_inputText & 0xffffff00);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005ce5b0(void)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  
  if (0xf < DAT_0065783c) {
    pnVar2 = (nothrow_t *)(DAT_0065783c + 1);
    pvVar1 = _m_selectedShipRego;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)_m_selectedShipRego - 4);
      pnVar2 = (nothrow_t *)(DAT_0065783c + 0x24);
      if (0x1f < (uint)((int)_m_selectedShipRego + (-4 - (int)pvVar1))) {
                    // WARNING: Could not recover jumptable at 0x005ce601. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  _DAT_00657838 = 0;
  DAT_0065783c = 0xf;
  _m_selectedShipRego = (void *)((uint)_m_selectedShipRego & 0xffffff00);
  return;
}


void FUN_005ce610(void)

{
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005ce620(void)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  
  if (0xf < DAT_00657884) {
    pnVar2 = (nothrow_t *)(DAT_00657884 + 1);
    pvVar1 = _m_tabletHeader;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)_m_tabletHeader - 4);
      pnVar2 = (nothrow_t *)(DAT_00657884 + 0x24);
      if (0x1f < (uint)((int)_m_tabletHeader + (-4 - (int)pvVar1))) {
                    // WARNING: Could not recover jumptable at 0x005ce671. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  _DAT_00657880 = 0;
  DAT_00657884 = 0xf;
  _m_tabletHeader = (void *)((uint)_m_tabletHeader & 0xffffff00);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005ce680(void)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  
  if (0xf < DAT_006578b4) {
    pnVar2 = (nothrow_t *)(DAT_006578b4 + 1);
    pvVar1 = _m_tabletScreen;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)_m_tabletScreen - 4);
      pnVar2 = (nothrow_t *)(DAT_006578b4 + 0x24);
      if (0x1f < (uint)((int)_m_tabletScreen + (-4 - (int)pvVar1))) {
                    // WARNING: Could not recover jumptable at 0x005ce6d1. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  _DAT_006578b0 = 0;
  DAT_006578b4 = 0xf;
  _m_tabletScreen = (void *)((uint)_m_tabletScreen & 0xffffff00);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005ce6e0(void)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  
  if (0xf < DAT_0065789c) {
    pnVar2 = (nothrow_t *)(DAT_0065789c + 1);
    pvVar1 = _m_tabletFooter;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)_m_tabletFooter - 4);
      pnVar2 = (nothrow_t *)(DAT_0065789c + 0x24);
      if (0x1f < (uint)((int)_m_tabletFooter + (-4 - (int)pvVar1))) {
                    // WARNING: Could not recover jumptable at 0x005ce731. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  _DAT_00657898 = 0;
  DAT_0065789c = 0xf;
  _m_tabletFooter = (void *)((uint)_m_tabletFooter & 0xffffff00);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005ce740(void)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  
  if (0xf < DAT_0065786c) {
    pnVar2 = (nothrow_t *)(DAT_0065786c + 1);
    pvVar1 = _m_talkingTo;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)_m_talkingTo - 4);
      pnVar2 = (nothrow_t *)(DAT_0065786c + 0x24);
      if (0x1f < (uint)((int)_m_talkingTo + (-4 - (int)pvVar1))) {
                    // WARNING: Could not recover jumptable at 0x005ce791. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  _DAT_00657868 = 0;
  DAT_0065786c = 0xf;
  _m_talkingTo = (void *)((uint)_m_talkingTo & 0xffffff00);
  return;
}


void FUN_005ce7a0(void)

{
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005ce7b0(void)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  
  if (_s_navMaps != (void *)0x0) {
    pnVar2 = (nothrow_t *)(DAT_0065dabc - (int)_s_navMaps & 0xfffffffc);
    pvVar1 = _s_navMaps;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)_s_navMaps + -4);
      pnVar2 = pnVar2 + 0x23;
      if (0x1f < (uint)((int)_s_navMaps + (-4 - (int)pvVar1))) {
                    // WARNING: Could not recover jumptable at 0x005ce807. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    operator_delete(pvVar1,pnVar2);
    _s_navMaps = (void *)0x0;
    DAT_0065dab8 = 0;
    DAT_0065dabc = 0;
  }
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005ce820(void)

{
  void *pvVar1;
  nothrow_t *pnVar2;
  
  if (0xf < DAT_006578cc) {
    pnVar2 = (nothrow_t *)(DAT_006578cc + 1);
    pvVar1 = _this_006578b8;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)_this_006578b8 - 4);
      pnVar2 = (nothrow_t *)(DAT_006578cc + 0x24);
      if (0x1f < (uint)((int)_this_006578b8 + (-4 - (int)pvVar1))) {
                    // WARNING: Could not recover jumptable at 0x005ce871. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
        _invalid_parameter_noinfo_noreturn();
        return;
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  DAT_006578c8 = 0;
  DAT_006578cc = 0xf;
  _this_006578b8 = (void *)((uint)_this_006578b8 & 0xffffff00);
  return;
}
