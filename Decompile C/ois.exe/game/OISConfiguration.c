#include "../ois.exe.h"


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// void __cdecl OISConfiguration::configure(void)

void __cdecl OISConfiguration::configure(void)

{
  Resolution *pRVar1;
  NetworkServer *this;
  int iVar2;
  DWORD iModeNum;
  vector<> local_ec [8];
  DEVMODEW local_e4;
  uint local_8;
  
  local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  this = Singleton<>::getInstance();
  std::basic_string<>::assign((basic_string<> *)this,"Objects in Space",0x10);
  DAT_0065d764 = _validResolutions;
  memset(&local_e4,0,0xdc);
  iModeNum = 0;
  local_e4.dmSize = 0xdc;
  iVar2 = EnumDisplaySettingsW((LPCWSTR)0x0,0,&local_e4);
  pRVar1 = DAT_0065d764;
  while (DAT_0065d764 = pRVar1, iVar2 != 0) {
    if (DAT_0065d768 == pRVar1) {
      std::vector<>::_Emplace_reallocate<Resolution>(local_ec,pRVar1,(Resolution *)local_ec);
    }
    else {
      *(DWORD *)pRVar1 = local_e4.dmPelsWidth;
      *(DWORD *)(pRVar1 + 4) = local_e4.dmPelsHeight;
      DAT_0065d764 = DAT_0065d764 + 8;
    }
    iModeNum = iModeNum + 1;
    iVar2 = EnumDisplaySettingsW((LPCWSTR)0x0,iModeNum,&local_e4);
    pRVar1 = DAT_0065d764;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// void __cdecl OISConfiguration::setOptimalResolution(void)

void __cdecl OISConfiguration::setOptimalResolution(void)

{
  HWND hWnd;
  basic_string<> *pbVar1;
  void *pvVar2;
  uint uVar3;
  nothrow_t *pnVar4;
  int iVar5;
  int iVar6;
  tagRECT local_24;
  uint local_10;
  uint local_c;
  
  local_c = ___security_cookie ^ (uint)&local_24;
  hWnd = GetDesktopWindow();
  GetWindowRect(hWnd,&local_24);
  debugPrint("GAME","Default monitor res: %dx%d",local_24.right,local_24.bottom);
  if (((local_24.bottom < 0x438) || (iVar5 = 0x438, iVar6 = 0x780, local_24.right < 0x780)) &&
     ((local_24.right < 0x500 ||
      (iVar5 = local_24.bottom, iVar6 = local_24.right, local_24.bottom < 0x2d0)))) {
    iVar6 = 0x500;
    iVar5 = 0x2d0;
  }
  currentResolution = 0;
  uVar3 = DAT_0065d764 - _validResolutions >> 3;
  if (uVar3 != 0) {
    do {
      if ((*(int *)(_validResolutions + currentResolution * 8) == iVar6) &&
         (*(int *)(_validResolutions + 4 + currentResolution * 8) == iVar5)) {
        pbVar1 = (basic_string<> *)
                 strUsingArgs((char *)&local_24,"%dx%d",
                              *(undefined4 *)(_validResolutions + currentResolution * 8),
                              *(undefined4 *)(_validResolutions + 4 + currentResolution * 8));
        if (pbVar1 != &currentResolutionStr) {
          word::~word((word *)&currentResolutionStr);
          _currentResolutionStr = *(basic_string<> **)pbVar1;
          uRam006577cc = *(undefined4 *)(pbVar1 + 4);
          uRam006577d0 = *(undefined4 *)(pbVar1 + 8);
          uRam006577d4 = *(undefined4 *)(pbVar1 + 0xc);
          _DAT_006577d8 = *(undefined8 *)(pbVar1 + 0x10);
          *(undefined4 *)(pbVar1 + 0x10) = 0;
          *(undefined4 *)(pbVar1 + 0x14) = 0xf;
          *pbVar1 = (basic_string<>)0x0;
        }
        if (local_10 < 0x10) goto LAB_004b0d62;
        pnVar4 = (nothrow_t *)(local_10 + 1);
        pvVar2 = (void *)local_24.left;
        if ((nothrow_t *)0xfff < pnVar4) {
          pvVar2 = *(void **)(local_24.left + -4);
          pnVar4 = (nothrow_t *)(local_10 + 0x24);
          if (0x1f < (uint)(local_24.left + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        goto LAB_004b0d58;
      }
      currentResolution = currentResolution + 1;
    } while ((uint)currentResolution < uVar3);
  }
  currentResolution = 0;
  pbVar1 = (basic_string<> *)strUsingArgs((char *)&local_24,"%dx%d",0x500,0x2d0);
  if (pbVar1 != &currentResolutionStr) {
    word::~word((word *)&currentResolutionStr);
    _currentResolutionStr = *(basic_string<> **)pbVar1;
    uRam006577cc = *(undefined4 *)(pbVar1 + 4);
    uRam006577d0 = *(undefined4 *)(pbVar1 + 8);
    uRam006577d4 = *(undefined4 *)(pbVar1 + 0xc);
    _DAT_006577d8 = *(undefined8 *)(pbVar1 + 0x10);
    *(undefined4 *)(pbVar1 + 0x10) = 0;
    *(undefined4 *)(pbVar1 + 0x14) = 0xf;
    *pbVar1 = (basic_string<>)0x0;
  }
  if (0xf < local_10) {
    pnVar4 = (nothrow_t *)(local_10 + 1);
    pvVar2 = (void *)local_24.left;
    if ((nothrow_t *)0xfff < pnVar4) {
      pnVar4 = (nothrow_t *)(local_10 + 0x24);
      pvVar2 = *(void **)(local_24.left + -4);
      if (0x1f < (uint)(local_24.left + (-4 - (int)*(void **)(local_24.left + -4)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
LAB_004b0d58:
    operator_delete(pvVar2,pnVar4);
  }
LAB_004b0d62:
  pbVar1 = &currentResolutionStr;
  if (0xf < DAT_006577dc) {
    pbVar1 = _currentResolutionStr;
  }
  debugPrint("GAME","Setting res to %s",pbVar1);
  displayFullscreen = true;
  __security_check_cookie(local_c ^ (uint)&local_24);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// void __cdecl OISConfiguration::setRes(void)

void __cdecl OISConfiguration::setRes(void)

{
  basic_string<> *pbVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  void *local_24 [5];
  uint local_10;
  uint local_c;
  
  local_c = ___security_cookie ^ (uint)local_24;
  pbVar1 = (basic_string<> *)
           strUsingArgs((char *)local_24,"%dx%d",
                        *(undefined4 *)(_validResolutions + currentResolution * 8),
                        *(undefined4 *)(_validResolutions + 4 + currentResolution * 8));
  if (pbVar1 != &currentResolutionStr) {
    word::~word((word *)&currentResolutionStr);
    _currentResolutionStr = *(undefined4 *)pbVar1;
    uRam006577cc = *(undefined4 *)(pbVar1 + 4);
    uRam006577d0 = *(undefined4 *)(pbVar1 + 8);
    uRam006577d4 = *(undefined4 *)(pbVar1 + 0xc);
    _DAT_006577d8 = *(undefined8 *)(pbVar1 + 0x10);
    *(undefined4 *)(pbVar1 + 0x10) = 0;
    *(undefined4 *)(pbVar1 + 0x14) = 0xf;
    *pbVar1 = (basic_string<>)0x0;
  }
  if (0xf < local_10) {
    pnVar3 = (nothrow_t *)(local_10 + 1);
    pvVar2 = local_24[0];
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)local_24[0] + -4);
      pnVar3 = (nothrow_t *)(local_10 + 0x24);
      if (0x1f < (uint)((int)local_24[0] + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  save();
  __security_check_cookie(local_c ^ (uint)local_24);
  return;
}


// void __cdecl OISConfiguration::dumpCommands(void)

void __cdecl OISConfiguration::dumpCommands(void)

{
  char *pcVar1;
  char ****ppppcVar2;
  FILE *_File;
  char *pcVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  int iVar6;
  undefined **ppuVar7;
  basic_string<> abStack_b0 [8];
  undefined4 uStack_a8;
  void *local_8c [4];
  undefined4 local_7c;
  uint local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  char ***local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  char ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005be350;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_7c = 0;
  local_78 = 0xf;
  local_8c[0] = (void *)((uint)local_8c[0] & 0xffffff00);
  local_8 = 0;
  uStack_a8 = 0x4b0ee5;
  pcVar1 = (char *)strUsingArgs((char *)local_44);
  local_8._0_1_ = 1;
  pcVar3 = pcVar1;
  if (0xf < *(uint *)(pcVar1 + 0x14)) {
    pcVar3 = *(char **)pcVar1;
  }
  std::basic_string<>::append((basic_string<> *)local_8c,pcVar3,*(uint *)(pcVar1 + 0x10));
  local_8._0_1_ = 0;
  if (0xf < local_30) {
    pnVar5 = (nothrow_t *)(local_30 + 1);
    pvVar4 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)local_44[0] + -4);
      pnVar5 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4))) {
LAB_004b0f2f:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  local_8._0_1_ = 2;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
  std::basic_string<>::append((basic_string<> *)local_2c,"Numerical commands:\n\n",0x15);
  iVar6 = 0;
  do {
    uStack_a8 = 0x4b0f84;
    pcVar1 = (char *)strUsingArgs((char *)local_74);
    local_8._0_1_ = 3;
    pcVar3 = pcVar1;
    if (0xf < *(uint *)(pcVar1 + 0x14)) {
      pcVar3 = *(char **)pcVar1;
    }
    std::basic_string<>::append((basic_string<> *)local_2c,pcVar3,*(uint *)(pcVar1 + 0x10));
    local_8._0_1_ = 2;
    if (0xf < local_60) {
      pnVar5 = (nothrow_t *)(local_60 + 1);
      pvVar4 = local_74[0];
      if ((nothrow_t *)0xfff < pnVar5) {
        pvVar4 = *(void **)((int)local_74[0] + -4);
        pnVar5 = (nothrow_t *)(local_60 + 0x24);
        if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar4))) goto LAB_004b0f2f;
      }
      operator_delete(pvVar4,pnVar5);
    }
    local_64 = 0;
    local_60 = 0xf;
    local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
    uStack_a8 = 0x4b0fff;
    pcVar1 = (char *)strUsingArgs((char *)local_44);
    local_8._0_1_ = 4;
    pcVar3 = pcVar1;
    if (0xf < *(uint *)(pcVar1 + 0x14)) {
      pcVar3 = *(char **)pcVar1;
    }
    std::basic_string<>::append((basic_string<> *)local_2c,pcVar3,*(uint *)(pcVar1 + 0x10));
    local_8._0_1_ = 2;
    if (0xf < local_30) {
      pnVar5 = (nothrow_t *)(local_30 + 1);
      pvVar4 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar5) {
        pvVar4 = *(void **)((int)local_44[0] + -4);
        pnVar5 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4))) goto LAB_004b0f2f;
      }
      operator_delete(pvVar4,pnVar5);
    }
    iVar6 = iVar6 + 4;
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  } while (iVar6 < 0x98);
  std::basic_string<>::append((basic_string<> *)local_2c,"\n",1);
  ppppcVar2 = local_2c;
  if (0xf < local_18) {
    ppppcVar2 = (char ****)local_2c[0];
  }
  std::basic_string<>::append((basic_string<> *)local_8c,(char *)ppppcVar2,local_1c);
  local_8._0_1_ = 0;
  if (0xf < local_18) {
    pnVar5 = (nothrow_t *)(local_18 + 1);
    ppppcVar2 = (char ****)local_2c[0];
    if ((nothrow_t *)0xfff < pnVar5) {
      ppppcVar2 = (char ****)local_2c[0][-1];
      pnVar5 = (nothrow_t *)(local_18 + 0x24);
      if ((char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppcVar2,pnVar5);
  }
  local_8._0_1_ = 5;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
  std::basic_string<>::append((basic_string<> *)local_2c,"Boolean check functions:\n\n",0x1a);
  iVar6 = 0;
  do {
    uStack_a8 = 0x4b1124;
    pcVar1 = (char *)strUsingArgs((char *)local_44);
    local_8._0_1_ = 6;
    pcVar3 = pcVar1;
    if (0xf < *(uint *)(pcVar1 + 0x14)) {
      pcVar3 = *(char **)pcVar1;
    }
    std::basic_string<>::append((basic_string<> *)local_2c,pcVar3,*(uint *)(pcVar1 + 0x10));
    local_8._0_1_ = 5;
    if (0xf < local_30) {
      pnVar5 = (nothrow_t *)(local_30 + 1);
      pvVar4 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar5) {
        pvVar4 = *(void **)((int)local_44[0] + -4);
        pnVar5 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4))) goto LAB_004b0f2f;
      }
      operator_delete(pvVar4,pnVar5);
    }
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    uStack_a8 = 0x4b119f;
    pcVar1 = (char *)strUsingArgs((char *)local_74);
    local_8._0_1_ = 7;
    pcVar3 = pcVar1;
    if (0xf < *(uint *)(pcVar1 + 0x14)) {
      pcVar3 = *(char **)pcVar1;
    }
    std::basic_string<>::append((basic_string<> *)local_2c,pcVar3,*(uint *)(pcVar1 + 0x10));
    local_8._0_1_ = 5;
    if (0xf < local_60) {
      pnVar5 = (nothrow_t *)(local_60 + 1);
      pvVar4 = local_74[0];
      if ((nothrow_t *)0xfff < pnVar5) {
        pvVar4 = *(void **)((int)local_74[0] + -4);
        pnVar5 = (nothrow_t *)(local_60 + 0x24);
        if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar4))) goto LAB_004b0f2f;
      }
      operator_delete(pvVar4,pnVar5);
    }
    iVar6 = iVar6 + 4;
    local_64 = 0;
    local_60 = 0xf;
    local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
  } while (iVar6 < 0x548);
  std::basic_string<>::append((basic_string<> *)local_2c,"\n",1);
  ppppcVar2 = local_2c;
  if (0xf < local_18) {
    ppppcVar2 = (char ****)local_2c[0];
  }
  std::basic_string<>::append((basic_string<> *)local_8c,(char *)ppppcVar2,local_1c);
  local_8._0_1_ = 0;
  if (0xf < local_18) {
    pnVar5 = (nothrow_t *)(local_18 + 1);
    ppppcVar2 = (char ****)local_2c[0];
    if ((nothrow_t *)0xfff < pnVar5) {
      ppppcVar2 = (char ****)local_2c[0][-1];
      pnVar5 = (nothrow_t *)(local_18 + 0x24);
      if ((char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppcVar2,pnVar5);
  }
  local_8._0_1_ = 8;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
  std::basic_string<>::append((basic_string<> *)local_2c,"Ship commands:\n\n",0x10);
  ppuVar7 = &PTR_s__TOGGLE_005e107c;
  do {
    uStack_a8 = 0x4b12c0;
    pcVar1 = (char *)strUsingArgs((char *)local_44);
    local_8._0_1_ = 9;
    pcVar3 = pcVar1;
    if (0xf < *(uint *)(pcVar1 + 0x14)) {
      pcVar3 = *(char **)pcVar1;
    }
    std::basic_string<>::append((basic_string<> *)local_2c,pcVar3,*(uint *)(pcVar1 + 0x10));
    local_8._0_1_ = 8;
    if (0xf < local_30) {
      pnVar5 = (nothrow_t *)(local_30 + 1);
      pvVar4 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar5) {
        pvVar4 = *(void **)((int)local_44[0] + -4);
        pnVar5 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4))) goto LAB_004b0f2f;
      }
      operator_delete(pvVar4,pnVar5);
    }
    ppuVar7 = ppuVar7 + 1;
    if (0x5e13d3 < (int)ppuVar7) {
      std::basic_string<>::append((basic_string<> *)local_2c,"\n",1);
      ppppcVar2 = local_2c;
      if (0xf < local_18) {
        ppppcVar2 = (char ****)local_2c[0];
      }
      std::basic_string<>::append((basic_string<> *)local_8c,(char *)ppppcVar2,local_1c);
      local_8._0_1_ = 0;
      if (0xf < local_18) {
        pnVar5 = (nothrow_t *)(local_18 + 1);
        ppppcVar2 = (char ****)local_2c[0];
        if ((nothrow_t *)0xfff < pnVar5) {
          ppppcVar2 = (char ****)local_2c[0][-1];
          pnVar5 = (nothrow_t *)(local_18 + 0x24);
          if ((char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar2))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppcVar2,pnVar5);
      }
      OSInterface::getBaseDirectory();
      local_8 = CONCAT31(local_8._1_3_,10);
      std::basic_string<>::append((basic_string<> *)local_5c,"serial_commands.txt",0x13);
      ppppcVar2 = local_5c;
      if (0xf < local_48) {
        ppppcVar2 = (char ****)local_5c[0];
      }
      _File = fopen((char *)ppppcVar2,"w");
      if (_File == (FILE *)0x0) {
        uStack_a8 = 0x4b13d9;
        debugPrint("ERROR","Can\'t open %s for writing.");
      }
      else {
        std::basic_string<>::basic_string<>(abStack_b0,(basic_string<> *)local_8c);
        writeTextToFile();
        fclose(_File);
      }
      if (0xf < local_48) {
        pnVar5 = (nothrow_t *)(local_48 + 1);
        ppppcVar2 = (char ****)local_5c[0];
        if ((nothrow_t *)0xfff < pnVar5) {
          ppppcVar2 = (char ****)local_5c[0][-1];
          pnVar5 = (nothrow_t *)(local_48 + 0x24);
          if ((char *)0x1f < (char *)((int)local_5c[0] + (-4 - (int)ppppcVar2))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppcVar2,pnVar5);
      }
      local_4c = 0;
      local_48 = 0xf;
      local_5c[0] = (char ***)((uint)local_5c[0] & 0xffffff00);
      if (0xf < local_78) {
        pnVar5 = (nothrow_t *)(local_78 + 1);
        pvVar4 = local_8c[0];
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)local_8c[0] + -4);
          pnVar5 = (nothrow_t *)(local_78 + 0x24);
          if (0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
  } while( true );
}


// WARNING: Function: __alloca_probe replaced with injection: alloca_probe
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// void __cdecl OISConfiguration::load(void)

void __cdecl OISConfiguration::load(void)

{
  InputConfiguration IVar1;
  char cVar2;
  char ****ppppcVar3;
  bool bVar4;
  FileUtils *pFVar5;
  NetworkServer *this;
  basic_string<> *pbVar6;
  SoundEngine *pSVar7;
  char *****pppppcVar8;
  ShipCommand SVar9;
  uint uVar10;
  InputConfiguration *pIVar11;
  void *pvVar12;
  uint uVar13;
  nothrow_t *pnVar14;
  int iVar15;
  basic_string<> *pbVar16;
  NetworkServer *pNVar17;
  KeyCode KVar18;
  uint unaff_EDI;
  basic_string<> abStack_20f0 [4];
  undefined4 uStack_20ec;
  char *pcVar19;
  void **ppvVar20;
  char *pcVar21;
  basic_string<> *local_207c;
  int local_2078;
  int local_2070;
  basic_string<> *local_206c;
  basic_string<> *local_2068;
  uint local_2064;
  int local_2060;
  int local_205c;
  KeyCode *local_2054;
  int local_2050;
  InputConfiguration *local_204c;
  char local_2045;
  void *local_2044 [5];
  uint local_2030;
  char ****local_202c;
  undefined4 uStack_2028;
  undefined4 uStack_2024;
  undefined4 uStack_2020;
  uint local_201c;
  uint uStack_2018;
  InputConfiguration local_2014 [8192];
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005be3cd;
  local_10 = ExceptionList;
  local_14 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  bVar4 = std::_Traits_equal<>("",0,local_14,unaff_EDI);
  if (bVar4) {
    OSInterface::initialiseOSFunctions();
  }
  OSInterface::getBaseDirectory();
  local_8 = 0;
  std::basic_string<>::append((basic_string<> *)local_2044,"objectsinspace.cfg",0x12);
  local_2050 = 0;
  pFVar5 = cocos2d::FileUtils::getInstance();
  pcVar21 = "r";
  ppvVar20 = local_2044;
  local_204c = (InputConfiguration *)(**(code **)(*(int *)pFVar5 + 0x1c))();
  uVar10 = 0;
  local_2070 = 0;
  cVar2 = '\x01';
  local_206c = (basic_string<> *)0x0;
  uVar13 = 0;
  local_2068 = (basic_string<> *)0x0;
  local_8._0_1_ = 1;
  if (local_2050 < 1) {
    configure();
    debugPrint("GAME","Config file not found. Writing defaults to file.");
    setOptimalResolution();
    save();
  }
  else {
    iVar15 = 0;
    if (0 < local_2050) {
      local_2064 = 1;
      do {
        IVar1 = local_204c[iVar15];
        if (IVar1 == (InputConfiguration)0x0) break;
        if ((IVar1 != (InputConfiguration)0xd) &&
           ((cVar2 == '\0' ||
            ((IVar1 != (InputConfiguration)0x9 && (IVar1 != (InputConfiguration)0x20)))))) {
          cVar2 = '\0';
          if ((iVar15 == 0) && (uVar13 = uVar13 & 0xff, IVar1 == (InputConfiguration)0x23)) {
            uVar13 = local_2064;
          }
          if (IVar1 == (InputConfiguration)0xa) {
            local_2045 = '\x01';
            if (0x1fff < uVar10) goto LAB_004b2a50;
            local_2014[uVar10] = (InputConfiguration)0x0;
            pIVar11 = local_2014;
            local_201c = 0;
            uStack_2018 = 0xf;
            local_202c = (char ****)((uint)local_202c & 0xffffff00);
            do {
              IVar1 = *pIVar11;
              pIVar11 = pIVar11 + 1;
            } while (IVar1 != (InputConfiguration)0x0);
            std::basic_string<>::assign
                      ((basic_string<> *)&local_202c,(char *)local_2014,
                       (int)pIVar11 - (int)(local_2014 + 1));
            local_8._0_1_ = 2;
            std::vector<>::push_back((vector<> *)&local_2070,(basic_string<> *)&local_202c);
            local_8._0_1_ = 1;
            if (0xf < uStack_2018) {
              pnVar14 = (nothrow_t *)(uStack_2018 + 1);
              pppppcVar8 = (char *****)local_202c;
              if ((nothrow_t *)0xfff < pnVar14) {
                pppppcVar8 = (char *****)local_202c[-1];
                pnVar14 = (nothrow_t *)(uStack_2018 + 0x24);
                if ((char *)0x1f < (char *)((int)local_202c + (-4 - (int)pppppcVar8)))
                goto LAB_004b17b2;
              }
              operator_delete(pppppcVar8,pnVar14);
            }
            uVar10 = 0;
            uVar13 = 0;
            cVar2 = local_2045;
          }
          else if ((char)uVar13 == '\0') {
            local_2014[uVar10] = IVar1;
            uVar10 = uVar10 + 1;
          }
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < local_2050);
      if (0x1fff < uVar10) {
LAB_004b2a50:
                    // WARNING: Subroutine does not return
        ___report_rangecheckfailure();
      }
    }
    pbVar6 = local_206c;
    local_2014[uVar10] = (InputConfiguration)0x0;
    pIVar11 = local_2014;
    local_201c = 0;
    uStack_2018 = 0xf;
    local_202c = (char ****)((uint)local_202c & 0xffffff00);
    do {
      IVar1 = *pIVar11;
      pIVar11 = pIVar11 + 1;
    } while (IVar1 != (InputConfiguration)0x0);
    std::basic_string<>::assign
              ((basic_string<> *)&local_202c,(char *)local_2014,(int)pIVar11 - (int)(local_2014 + 1)
              );
    local_8._0_1_ = 3;
    if (local_2068 == pbVar6) {
      std::vector<>::_Emplace_reallocate<>
                ((vector<> *)&local_2070,pbVar6,(basic_string<> *)&local_202c);
      uVar13 = uStack_2018;
    }
    else {
      *(undefined4 *)(pbVar6 + 0x10) = 0;
      *(undefined4 *)(pbVar6 + 0x14) = 0;
      *(char *****)pbVar6 = local_202c;
      *(undefined4 *)(pbVar6 + 4) = uStack_2028;
      *(undefined4 *)(pbVar6 + 8) = uStack_2024;
      *(undefined4 *)(pbVar6 + 0xc) = uStack_2020;
      local_202c = (char ****)((uint)local_202c & 0xffffff00);
      *(ulonglong *)(pbVar6 + 0x10) = CONCAT44(uStack_2018,local_201c);
      local_206c = pbVar6 + 0x18;
      uVar13 = 0xf;
    }
    pbVar6 = local_206c;
    local_8._0_1_ = 1;
    if (0xf < uVar13) {
      pnVar14 = (nothrow_t *)(uVar13 + 1);
      pppppcVar8 = (char *****)local_202c;
      if ((nothrow_t *)0xfff < pnVar14) {
        pppppcVar8 = (char *****)local_202c[-1];
        pnVar14 = (nothrow_t *)(uVar13 + 0x24);
        if ((char *)0x1f < (char *)((int)local_202c + (-4 - (int)pppppcVar8))) {
LAB_004b17b2:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pppppcVar8,pnVar14);
    }
    free(local_204c);
    local_2064 = 0;
    uVar13 = ((int)pbVar6 - local_2070) / 0x18;
    if (uVar13 != 0) {
LAB_004b1800:
      std::basic_string<>::basic_string<>
                (abStack_20f0,(basic_string<> *)(local_2070 + local_2064 * 0x18));
      splitStringBy();
      iVar15 = local_2060;
      local_8._0_1_ = 4;
      if ((local_205c - local_2060) / 0x18 == 2) {
        bVar4 = std::_Traits_equal<>("name",4,(char *)ppvVar20,(uint)pcVar21);
        if (bVar4) {
          pbVar16 = (basic_string<> *)(iVar15 + 0x18);
          if (pbVar16 != &username) {
            if (0xf < *(uint *)(iVar15 + 0x2c)) {
              pbVar16 = *(basic_string<> **)pbVar16;
            }
            std::basic_string<>::assign(&username,(char *)pbVar16,*(uint *)(iVar15 + 0x28));
          }
          pcVar19 = "Configuration::username = \'%s\'";
          goto LAB_004b28fa;
        }
        bVar4 = std::_Traits_equal<>("serverip",8,(char *)ppvVar20,(uint)pcVar21);
        if (bVar4) {
          pbVar16 = (basic_string<> *)(iVar15 + 0x18);
          if (pbVar16 != &serverIP) {
            if (0xf < *(uint *)(iVar15 + 0x2c)) {
              pbVar16 = *(basic_string<> **)pbVar16;
            }
            std::basic_string<>::assign(&serverIP,(char *)pbVar16,*(uint *)(iVar15 + 0x28));
          }
          pcVar19 = "Configuration::serverIP = %s";
          goto LAB_004b28fa;
        }
        bVar4 = std::_Traits_equal<>("port",4,(char *)ppvVar20,(uint)pcVar21);
        if (bVar4) {
          pbVar16 = (basic_string<> *)(iVar15 + 0x18);
          if (pbVar16 != &serverPort) {
            if (0xf < *(uint *)(iVar15 + 0x2c)) {
              pbVar16 = *(basic_string<> **)pbVar16;
            }
            std::basic_string<>::assign(&serverPort,(char *)pbVar16,*(uint *)(iVar15 + 0x28));
          }
          pcVar19 = "Configuration::serverPort = %s";
          goto LAB_004b28fa;
        }
        bVar4 = std::_Traits_equal<>("scenario",8,(char *)ppvVar20,(uint)pcVar21);
        if (bVar4) {
          pbVar16 = (basic_string<> *)(iVar15 + 0x18);
          if (pbVar16 != &scenario) {
            if (0xf < *(uint *)(iVar15 + 0x2c)) {
              pbVar16 = *(basic_string<> **)pbVar16;
            }
            std::basic_string<>::assign(&scenario,(char *)pbVar16,*(uint *)(iVar15 + 0x28));
          }
          pcVar19 = "Configuration::scenario = \'%s\'";
          goto LAB_004b28fa;
        }
        bVar4 = std::_Traits_equal<>("servername",10,(char *)ppvVar20,(uint)pcVar21);
        if (bVar4) {
          pNVar17 = (NetworkServer *)(iVar15 + 0x18);
          this = Singleton<>::getInstance();
          if (this != pNVar17) {
            if (0xf < *(uint *)(iVar15 + 0x2c)) {
              pNVar17 = *(NetworkServer **)pNVar17;
            }
            std::basic_string<>::assign
                      ((basic_string<> *)this,(char *)pNVar17,*(uint *)(iVar15 + 0x28));
          }
          Singleton<>::getInstance();
          pcVar19 = "Configuration::servername = \'%s\'";
          goto LAB_004b28fa;
        }
        bVar4 = std::_Traits_equal<>("difficulty",10,(char *)ppvVar20,(uint)pcVar21);
        if (bVar4) {
          std::basic_string<>::basic_string<>(abStack_20f0,(basic_string<> *)(iVar15 + 0x18));
          difficulty = getDifficulty();
          debugPrint("GAME","Configuration::difficulty = \'%s\'");
          uVar10 = currentResolution;
          goto LAB_004b2907;
        }
        bVar4 = std::_Traits_equal<>("fullscreen",10,(char *)ppvVar20,(uint)pcVar21);
        if (bVar4) {
          std::transform<>();
          displayFullscreen = std::_Traits_equal<>("true",4,(char *)ppvVar20,(uint)pcVar21);
          pcVar19 = "Configuration::displayFullscreen = \'%s\'";
        }
        else {
          bVar4 = std::_Traits_equal<>("resolution",10,(char *)ppvVar20,(uint)pcVar21);
          if (bVar4) {
            std::basic_string<>::operator=(&currentResolutionStr,(basic_string<> *)(iVar15 + 0x18));
            debugPrint("GAME","Configuration::displayRes = \'%s\'");
            uVar10 = 0;
            if (DAT_0065d764 - _validResolutions >> 3 != 0) {
              do {
                uStack_20ec = 0x4b1bd8;
                strUsingArgs((char *)&local_202c);
                pbVar16 = &currentResolutionStr;
                if (0xf < DAT_006577dc) {
                  pbVar16 = _currentResolutionStr;
                }
                local_2045 = std::_Traits_equal<>
                                       ((char *)pbVar16,DAT_006577d8,(char *)ppvVar20,(uint)pcVar21)
                ;
                if (0xf < uStack_2018) {
                  pnVar14 = (nothrow_t *)(uStack_2018 + 1);
                  pppppcVar8 = (char *****)local_202c;
                  if ((nothrow_t *)0xfff < pnVar14) {
                    pppppcVar8 = (char *****)local_202c[-1];
                    pnVar14 = (nothrow_t *)(uStack_2018 + 0x24);
                    if ((char *)0x1f < (char *)((int)local_202c + (-4 - (int)pppppcVar8)))
                    goto LAB_004b17b2;
                  }
                  operator_delete(pppppcVar8,pnVar14);
                }
                if (local_2045 != '\0') goto LAB_004b2907;
                uVar10 = uVar10 + 1;
              } while (uVar10 < (uint)(DAT_0065d764 - _validResolutions >> 3));
            }
            currentResolution = 0;
            uStack_20ec = 0x4b1c91;
            pbVar6 = (basic_string<> *)strUsingArgs((char *)&local_202c);
            std::basic_string<>::operator=(&currentResolutionStr,pbVar6);
            if (0xf < uStack_2018) {
              pnVar14 = (nothrow_t *)(uStack_2018 + 1);
              pppppcVar8 = (char *****)local_202c;
              if ((nothrow_t *)0xfff < pnVar14) {
                pppppcVar8 = (char *****)local_202c[-1];
                pnVar14 = (nothrow_t *)(uStack_2018 + 0x24);
                if ((char *)0x1f < (char *)((int)local_202c + (-4 - (int)pppppcVar8)))
                goto LAB_004b17b2;
              }
              operator_delete(pppppcVar8,pnVar14);
            }
            debugPrint("GAME","WARNING: Invalid resolution. Setting to default.");
            uVar10 = currentResolution;
            goto LAB_004b2907;
          }
          bVar4 = std::_Traits_equal<>("soundvolume",0xb,(char *)ppvVar20,(uint)pcVar21);
          if (bVar4) {
            pcVar19 = (char *)(iVar15 + 0x18);
            if (0xf < *(uint *)(iVar15 + 0x2c)) {
              pcVar19 = *(char **)pcVar19;
            }
            soundVolume = atoi(pcVar19);
            pSVar7 = Singleton<>::getInstance();
            SoundEngine::resetSoundVolume(pSVar7);
            pcVar19 = "Configuration::soundVolume = \'%d\'";
          }
          else {
            bVar4 = std::_Traits_equal<>("musicvolume",0xb,(char *)ppvVar20,(uint)pcVar21);
            if (bVar4) {
              pcVar19 = (char *)(iVar15 + 0x18);
              if (0xf < *(uint *)(iVar15 + 0x2c)) {
                pcVar19 = *(char **)pcVar19;
              }
              musicVolume = atoi(pcVar19);
              local_204c = (InputConfiguration *)((float)musicVolume / 100.0);
              pSVar7 = Singleton<>::getInstance();
              SoundEngine::setMusicVolume(pSVar7,(float)ppvVar20);
              pcVar19 = "Configuration::musicVolume = \'%d\'";
            }
            else {
              bVar4 = std::_Traits_equal<>("sendanalytics",0xd,(char *)ppvVar20,(uint)pcVar21);
              if (bVar4) {
                std::transform<>();
                sendAnalytics = std::_Traits_equal<>("true",4,(char *)ppvVar20,(uint)pcVar21);
                pcVar19 = "Configuration::sendAnalytics = \'%s\'";
              }
              else {
                bVar4 = std::_Traits_equal<>("keysounds",9,(char *)ppvVar20,(uint)pcVar21);
                if (bVar4) {
                  std::transform<>();
                  keySounds = std::_Traits_equal<>("true",4,(char *)ppvVar20,(uint)pcVar21);
                  pcVar19 = "Configuration::keySounds = \'%s\'";
                }
                else {
                  bVar4 = std::_Traits_equal<>
                                    ("multiplayerverbosedebug",0x17,(char *)ppvVar20,(uint)pcVar21);
                  if (bVar4) {
                    std::transform<>();
                    multiDebug = std::_Traits_equal<>("true",4,(char *)ppvVar20,(uint)pcVar21);
                    pcVar19 = "Configuration::multiDebug = \'%s\'";
                    goto LAB_004b28fa;
                  }
                  bVar4 = std::_Traits_equal<>("scrollwheel",0xb,(char *)ppvVar20,(uint)pcVar21);
                  if (bVar4) {
                    std::transform<>();
                    scrollWheel = std::_Traits_equal<>("true",4,(char *)ppvVar20,(uint)pcVar21);
                    pcVar19 = "Configuration::scrollWheel = \'%s\'";
                  }
                  else {
                    bVar4 = std::_Traits_equal<>
                                      ("alwaysshowmenu",0xe,(char *)ppvVar20,(uint)pcVar21);
                    if (bVar4) {
                      std::transform<>();
                      alwaysShowMenu = std::_Traits_equal<>("true",4,(char *)ppvVar20,(uint)pcVar21)
                      ;
                      pcVar19 = "Configuration::alwaysShowMenu = \'%s\'";
                    }
                    else {
                      bVar4 = std::_Traits_equal<>
                                        ("alternatetextrendering",0x16,(char *)ppvVar20,
                                         (uint)pcVar21);
                      if (bVar4) {
                        std::transform<>();
                        alernateTextRendering =
                             std::_Traits_equal<>("true",4,(char *)ppvVar20,(uint)pcVar21);
                        pcVar19 = "Configuration::alernateTextRendering = \'%s\'";
                      }
                      else {
                        bVar4 = std::_Traits_equal<>("key",3,(char *)ppvVar20,(uint)pcVar21);
                        if (bVar4) {
                          std::basic_string<>::basic_string<>
                                    (abStack_20f0,(basic_string<> *)(iVar15 + 0x18));
                          splitStringBy();
                          local_8._0_1_ = 5;
                          if (1 < (uint)((local_2078 - (int)local_207c) / 0x18)) {
                            local_204c = (InputConfiguration *)local_207c;
                            if (0xf < *(uint *)(local_207c + 0x14)) {
                              local_204c = *(InputConfiguration **)local_207c;
                            }
                            std::transform<>();
                            std::transform<>();
                            std::basic_string<>::basic_string<>
                                      ((basic_string<> *)&local_202c,local_207c + 0x18);
                            local_8._0_1_ = 6;
                            local_204c = Singleton<>::getInstance();
                            ppppcVar3 = local_202c;
                            local_8._0_1_ = 5;
                            uVar10 = 0;
                            iVar15 = *(int *)(local_204c + 0x18);
                            if (*(int *)(local_204c + 0x1c) - iVar15 >> 2 != 0) {
                              do {
                                local_2054 = *(KeyCode **)(iVar15 + uVar10 * 4);
                                pppppcVar8 = &local_202c;
                                if (0xf < uStack_2018) {
                                  pppppcVar8 = (char *****)ppppcVar3;
                                }
                                bVar4 = std::_Traits_equal<>
                                                  ((char *)pppppcVar8,local_201c,(char *)ppvVar20,
                                                   (uint)pcVar21);
                                if (bVar4) {
                                  KVar18 = *local_2054;
                                  if (uStack_2018 < 0x10) goto LAB_004b23c2;
                                  pnVar14 = (nothrow_t *)(uStack_2018 + 1);
                                  pppppcVar8 = (char *****)ppppcVar3;
                                  if ((nothrow_t *)0xfff < pnVar14) {
                                    pppppcVar8 = (char *****)ppppcVar3[-1];
                                    pnVar14 = (nothrow_t *)(uStack_2018 + 0x24);
                                    if ((char *)0x1f <
                                        (char *)((int)ppppcVar3 + (-4 - (int)pppppcVar8)))
                                    goto LAB_004b17b2;
                                  }
                                  operator_delete(pppppcVar8,pnVar14);
                                  goto LAB_004b23c2;
                                }
                                uVar10 = uVar10 + 1;
                              } while (uVar10 < (uint)(*(int *)(local_204c + 0x1c) -
                                                       *(int *)(local_204c + 0x18) >> 2));
                            }
                            if (0xf < uStack_2018) {
                              pnVar14 = (nothrow_t *)(uStack_2018 + 1);
                              pppppcVar8 = (char *****)ppppcVar3;
                              if ((nothrow_t *)0xfff < pnVar14) {
                                pppppcVar8 = (char *****)ppppcVar3[-1];
                                pnVar14 = (nothrow_t *)(uStack_2018 + 0x24);
                                if ((char *)0x1f < (char *)((int)ppppcVar3 + (-4 - (int)pppppcVar8))
                                   ) goto LAB_004b17b2;
                              }
                              operator_delete(pppppcVar8,pnVar14);
                            }
                            KVar18 = 0;
LAB_004b23c2:
                            local_202c = (char ****)((uint)local_202c & 0xffffff00);
                            uStack_2018 = 0xf;
                            local_201c = 0;
                            std::basic_string<>::basic_string<>
                                      ((basic_string<> *)&stack0xffffdf0c,local_207c);
                            SVar9 = getShipCommandType();
                            pIVar11 = Singleton<>::getInstance();
                            InputConfiguration::setOption(pIVar11,SVar9,KVar18);
                            uStack_20ec = 0x4b242d;
                            debugPrint("GAME","Configuration::key = \'%s\' = \'%s\'");
                          }
                          std::vector<>::_Tidy((vector<> *)&local_207c);
                          uVar10 = currentResolution;
                          goto LAB_004b2907;
                        }
                        bVar4 = std::_Traits_equal<>("hardware",8,(char *)ppvVar20,(uint)pcVar21);
                        if (bVar4) {
                          std::transform<>();
                          hardwareEnabled =
                               std::_Traits_equal<>("true",4,(char *)ppvVar20,(uint)pcVar21);
                          pcVar19 = "Configuration::hardwareEnabled = \'%s\'";
                        }
                        else {
                          bVar4 = std::_Traits_equal<>
                                            ("hardwarecrlf",0xc,(char *)ppvVar20,(uint)pcVar21);
                          if (bVar4) {
                            std::transform<>();
                            hardwareCRLF = std::_Traits_equal<>
                                                     ("true",4,(char *)ppvVar20,(uint)pcVar21);
                            pcVar19 = "Configuration::hardwareCRLF = \'%s\'";
                          }
                          else {
                            bVar4 = std::_Traits_equal<>
                                              ("ignorecom12",0xb,(char *)ppvVar20,(uint)pcVar21);
                            if (bVar4) {
                              std::transform<>();
                              ignoreCom12 = std::_Traits_equal<>
                                                      ("true",4,(char *)ppvVar20,(uint)pcVar21);
                              pcVar19 = "Configuration::ignoreCom12 = \'%s\'";
                            }
                            else {
                              bVar4 = std::_Traits_equal<>
                                                ("lastverplayed",0xd,(char *)ppvVar20,(uint)pcVar21)
                              ;
                              if (bVar4) {
                                std::basic_string<>::operator=
                                          (&lastVersionPlayed,(basic_string<> *)(iVar15 + 0x18));
                                pcVar19 = "Configuration::lastVersionPlayed = \'%s\'";
                              }
                              else {
                                bVar4 = std::_Traits_equal<>
                                                  ("nocameramotion",0xe,(char *)ppvVar20,
                                                   (uint)pcVar21);
                                if (bVar4) {
                                  std::transform<>();
                                  noCameraMotion =
                                       std::_Traits_equal<>("true",4,(char *)ppvVar20,(uint)pcVar21)
                                  ;
                                  pcVar19 = "Configuration::noCameraMotion = \'%s\'";
                                }
                                else {
                                  bVar4 = std::_Traits_equal<>
                                                    ("tooltips",8,(char *)ppvVar20,(uint)pcVar21);
                                  if (bVar4) {
                                    std::transform<>();
                                    tooltips = std::_Traits_equal<>
                                                         ("true",4,(char *)ppvVar20,(uint)pcVar21);
                                    pcVar19 = "Configuration::tooltips = \'%s\'";
                                  }
                                  else {
                                    bVar4 = std::_Traits_equal<>
                                                      ("skipintro",9,(char *)ppvVar20,(uint)pcVar21)
                                    ;
                                    uVar10 = currentResolution;
                                    if (!bVar4) goto LAB_004b2907;
                                    std::transform<>();
                                    skipIntro = std::_Traits_equal<>
                                                          ("true",4,(char *)ppvVar20,(uint)pcVar21);
                                    pcVar19 = "Configuration::skipIntro = \'%s\'";
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        pcVar19 = "Unable to parse line \'%s\' in config file";
      }
LAB_004b28fa:
      debugPrint("GAME",pcVar19);
      uVar10 = currentResolution;
LAB_004b2907:
      currentResolution = uVar10;
      local_8._0_1_ = 1;
      std::vector<>::_Tidy((vector<> *)&local_2060);
      local_2064 = local_2064 + 1;
      if (uVar13 <= local_2064) goto LAB_004b2936;
      goto LAB_004b1800;
    }
LAB_004b2936:
    configure();
  }
  originalFullscreen = displayFullscreen;
  pbVar16 = &currentResolutionStr;
  if (0xf < DAT_006577dc) {
    pbVar16 = _currentResolutionStr;
  }
  std::basic_string<>::assign(&originalResolution,(char *)pbVar16,DAT_006577d8);
  if (originalFullscreen == displayFullscreen) {
    pbVar16 = &currentResolutionStr;
    if (0xf < DAT_006577dc) {
      pbVar16 = _currentResolutionStr;
    }
    bVar4 = std::_Traits_equal<>((char *)pbVar16,DAT_006577d8,(char *)ppvVar20,(uint)pcVar21);
    displayChanged = false;
    if (bVar4) goto LAB_004b29ee;
  }
  displayChanged = true;
LAB_004b29ee:
  std::vector<>::_Tidy((vector<> *)&local_2070);
  if (0xf < local_2030) {
    pnVar14 = (nothrow_t *)(local_2030 + 1);
    pvVar12 = local_2044[0];
    if ((nothrow_t *)0xfff < pnVar14) {
      pvVar12 = *(void **)((int)local_2044[0] + -4);
      pnVar14 = (nothrow_t *)(local_2030 + 0x24);
      if (0x1f < (uint)((int)local_2044[0] + (-4 - (int)pvVar12))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar12,pnVar14);
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// void __cdecl OISConfiguration::save(void)

void __cdecl OISConfiguration::save(void)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  char *pcVar7;
  NetworkServer *pNVar8;
  char ****ppppcVar9;
  FILE *_File;
  SoundEngine *pSVar10;
  InputConfiguration *pIVar11;
  uint uVar12;
  basic_string<> *pbVar13;
  char *pcVar14;
  uint uVar15;
  void *pvVar16;
  nothrow_t *pnVar17;
  int *piVar18;
  uint unaff_EDI;
  basic_string<> local_9c [4];
  undefined4 uStack_98;
  basic_string<> local_84 [8];
  undefined4 uStack_7c;
  char ***local_44 [5];
  uint local_30;
  void *local_2c [4];
  int local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005be486;
  local_10 = ExceptionList;
  pcVar7 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_14 = pcVar7;
  bVar6 = std::_Traits_equal<>("",0,pcVar7,unaff_EDI);
  if (bVar6) {
    std::basic_string<>::assign(&scenario,"coop_pirate_hunt",0x10);
  }
  Singleton<>::getInstance();
  bVar6 = std::_Traits_equal<>("",0,pcVar7,unaff_EDI);
  if (bVar6) {
    pNVar8 = Singleton<>::getInstance();
    std::basic_string<>::assign((basic_string<> *)pNVar8,"Objects in Space",0x10);
  }
  OSInterface::getBaseDirectory();
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  std::basic_string<>::append((basic_string<> *)local_44,"objectsinspace.cfg",0x12);
  uStack_7c = 0x4b2b39;
  debugPrint("DETAIL","Loading config from \'%s\'");
  ppppcVar9 = local_44;
  if (0xf < local_30) {
    ppppcVar9 = (char ****)local_44[0];
  }
  _File = fopen((char *)ppppcVar9,"w");
  if (_File == (FILE *)0x0) {
    uStack_7c = 0x4b2b7a;
    debugPrint("ERROR","Can\'t open %s for writing.");
  }
  else {
    std::basic_string<>::basic_string<>(local_84,(basic_string<> *)&currentResolutionStr);
    local_8._0_1_ = 1;
    local_9c[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_9c,"resolution",10);
    local_8._0_1_ = 0;
    writeString();
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    std::basic_string<>::assign((basic_string<> *)local_2c,"fullscreen",10);
    local_8._0_1_ = 2;
    uStack_98 = 0x4b2c1e;
    strUsingArgs((char *)local_84);
    writeTextToFile();
    local_8._0_1_ = 0;
    if (0xf < local_18) {
      pnVar17 = (nothrow_t *)(local_18 + 1);
      pvVar16 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar17) {
        pvVar16 = *(void **)((int)local_2c[0] + -4);
        pnVar17 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar16))) {
LAB_004b2c55:
          local_8._0_1_ = 0;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar16,pnVar17);
    }
    std::basic_string<>::basic_string<>(local_84,(basic_string<> *)&lastVersionPlayed);
    local_8._0_1_ = 3;
    local_9c[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_9c,"lastverplayed",0xd);
    local_8._0_1_ = 0;
    writeString();
    std::basic_string<>::basic_string<>(local_84,(basic_string<> *)&username);
    local_8._0_1_ = 4;
    local_9c[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_9c,"name",4);
    local_8._0_1_ = 0;
    writeString();
    std::basic_string<>::basic_string<>(local_84,(basic_string<> *)&serverIP);
    local_8._0_1_ = 5;
    local_9c[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_9c,"serverip",8);
    local_8._0_1_ = 0;
    writeString();
    std::basic_string<>::basic_string<>(local_84,(basic_string<> *)&serverPort);
    local_8._0_1_ = 6;
    local_9c[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_9c,"port",4);
    local_8._0_1_ = 0;
    writeString();
    std::basic_string<>::basic_string<>(local_84,(basic_string<> *)&scenario);
    local_8._0_1_ = 7;
    local_9c[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_9c,"scenario",8);
    local_8._0_1_ = 0;
    writeString();
    pcVar2 = *(char **)(&UNK_005dfd68 + difficulty * 4);
    local_84[0] = (basic_string<>)0x0;
    pcVar14 = pcVar2;
    do {
      cVar1 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar1 != '\0');
    std::basic_string<>::assign(local_84,pcVar2,(int)pcVar14 - (int)(pcVar2 + 1));
    local_8._0_1_ = 8;
    local_9c[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_9c,"difficulty",10);
    local_8._0_1_ = 0;
    writeString();
    pNVar8 = Singleton<>::getInstance();
    std::basic_string<>::basic_string<>(local_84,(basic_string<> *)pNVar8);
    local_8._0_1_ = 9;
    local_9c[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_9c,"servername",10);
    local_8._0_1_ = 0;
    writeString();
    strUsingArgs((char *)local_84);
    local_8._0_1_ = 10;
    local_9c[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_9c,"soundvolume",0xb);
    local_8._0_1_ = 0;
    writeString();
    pSVar10 = Singleton<>::getInstance();
    SoundEngine::resetSoundVolume(pSVar10);
    strUsingArgs((char *)local_84);
    local_8._0_1_ = 0xb;
    local_9c[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_9c,"musicvolume",0xb);
    local_8._0_1_ = 0;
    writeString();
    pSVar10 = Singleton<>::getInstance();
    FMOD::ChannelControl::isPlaying(*(bool **)(pSVar10 + 100));
    FMOD::ChannelControl::setVolume(*(float *)(pSVar10 + 100));
    local_84[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_84,"keysounds",9);
    writeBoolean();
    local_84[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_84,"scrollwheel",0xb);
    writeBoolean();
    local_84[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_84,"alwaysshowmenu",0xe);
    writeBoolean();
    local_84[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_84,"sendanalytics",0xd);
    writeBoolean();
    local_84[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_84,"hardware",8);
    writeBoolean();
    local_84[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_84,"hardwarecrlf",0xc);
    writeBoolean();
    local_84[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_84,"ignorecom12",0xb);
    writeBoolean();
    local_84[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_84,"nocameramotion",0xe);
    writeBoolean();
    local_84[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_84,"tooltips",8);
    writeBoolean();
    local_84[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_84,"skipintro",9);
    writeBoolean();
    local_84[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_84,"multiplayerverbosedebug",0x17);
    writeBoolean();
    local_84[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_84,"alternatetextrendering",0x16);
    writeBoolean();
    if (Singleton<>::instance == (InputConfiguration *)0x0) {
      pIVar11 = operator_new(0x24);
      local_8._0_1_ = 0xc;
      Singleton<>::instance = (InputConfiguration *)InputConfiguration::InputConfiguration(pIVar11);
      local_8._0_1_ = 0;
    }
    piVar3 = *(int **)(Singleton<>::instance + 0x10);
    pIVar11 = Singleton<>::instance;
    for (piVar18 = *(int **)(Singleton<>::instance + 0xc); piVar18 != piVar3; piVar18 = piVar18 + 1)
    {
      iVar4 = *piVar18;
      if ((*(char *)(iVar4 + 0x18) != '\0') || (*(int *)(iVar4 + 0x1c) != *(int *)(iVar4 + 0x20))) {
        if (pIVar11 == (InputConfiguration *)0x0) {
          pIVar11 = operator_new(0x24);
          local_8._0_1_ = 0xd;
          pIVar11 = (InputConfiguration *)InputConfiguration::InputConfiguration(pIVar11);
          local_8._0_1_ = 0;
          Singleton<>::instance = pIVar11;
        }
        iVar4 = *(int *)(iVar4 + 0x1c);
        if (iVar4 == 0) {
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0]._1_3_ << 8);
          local_1c = iVar4;
          std::basic_string<>::assign((basic_string<> *)local_2c,"",0);
        }
        else {
          uVar12 = 0;
          uVar15 = *(int *)(pIVar11 + 0x1c) - *(int *)(pIVar11 + 0x18) >> 2;
          if (uVar15 != 0) {
            do {
              piVar5 = *(int **)(*(int *)(pIVar11 + 0x18) + uVar12 * 4);
              if (*piVar5 == iVar4) {
                std::basic_string<>::basic_string<>
                          ((basic_string<> *)local_2c,(basic_string<> *)(piVar5 + 7));
                goto LAB_004b3284;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar15);
          }
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0]._1_3_ << 8);
          std::basic_string<>::assign((basic_string<> *)local_2c,"ERROR",5);
        }
LAB_004b3284:
        local_8._0_1_ = 0xe;
        uStack_98 = 0x4b32ae;
        strUsingArgs((char *)local_84);
        writeTextToFile();
        local_8._0_1_ = 0;
        pIVar11 = Singleton<>::instance;
        if (0xf < local_18) {
          pnVar17 = (nothrow_t *)(local_18 + 1);
          pvVar16 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar17) {
            pvVar16 = *(void **)((int)local_2c[0] + -4);
            pnVar17 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar16))) goto LAB_004b2c55;
          }
          operator_delete(pvVar16,pnVar17);
          pIVar11 = Singleton<>::instance;
        }
      }
    }
    fclose(_File);
    uStack_7c = 0x4b3330;
    debugPrint("GAME","Wrote config file data to %s");
    if (originalFullscreen == displayFullscreen) {
      pbVar13 = &currentResolutionStr;
      if (0xf < DAT_006577dc) {
        pbVar13 = _currentResolutionStr;
      }
      bVar6 = std::_Traits_equal<>((char *)pbVar13,DAT_006577d8,pcVar7,unaff_EDI);
      displayChanged = false;
      if (bVar6) goto LAB_004b338d;
    }
    displayChanged = true;
  }
LAB_004b338d:
  if (0xf < local_30) {
    pnVar17 = (nothrow_t *)(local_30 + 1);
    ppppcVar9 = (char ****)local_44[0];
    if ((nothrow_t *)0xfff < pnVar17) {
      ppppcVar9 = (char ****)local_44[0][-1];
      pnVar17 = (nothrow_t *)(local_30 + 0x24);
      if ((char *)0x1f < (char *)((int)local_44[0] + (-4 - (int)ppppcVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppcVar9,pnVar17);
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}
