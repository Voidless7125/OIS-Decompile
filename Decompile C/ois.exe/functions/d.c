#include "../ois.exe.h"


// void __cdecl debugPrint(char const *,char const *,...)

void __cdecl debugPrint(char *param_1,char *param_2,...)

{
  bool bVar1;
  char *pcVar2;
  tm *ptVar3;
  DWORD DVar4;
  nothrow_t *pnVar5;
  uint unaff_EDI;
  code *pcVar6;
  char *in_stack_fffffbd4;
  char *in_stack_fffffbe0;
  va_list in_stack_fffffbe4;
  uint local_418;
  wchar_t local_414 [2];
  char *pcStack_410;
  char *pcStack_40c;
  undefined *puStack_408;
  wchar_t local_214 [256];
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005ccd82;
  local_10 = ExceptionList;
  pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_14 = pcVar2;
  _time64((__time64_t *)0x0);
  ptVar3 = _localtime64((__time64_t *)&stack0xfffffbc4);
  pcVar6 = log_exref;
  if (_File_0065d530 == (_iobuf *)0x0) {
    bVar1 = std::_Traits_equal<>("",0,pcVar2,unaff_EDI);
    if (bVar1) {
      OSInterface::initialiseOSFunctions();
    }
    local_8 = 0;
    OSInterface::getBaseDirectory();
    std::basic_string<>::append((basic_string<> *)&stack0xfffffbd4,"log\\",4);
    pcVar2 = &stack0xfffffbd4;
    if (0xf < local_418) {
      pcVar2 = in_stack_fffffbd4;
    }
    mbstowcs(local_214,pcVar2,0x100);
    DVar4 = GetFileAttributesW(local_214);
    if ((DVar4 == 0xffffffff) || ((DVar4 & 0x10) == 0)) {
      pcVar2 = &stack0xfffffbd4;
      if (0xf < local_418) {
        pcVar2 = in_stack_fffffbd4;
      }
      mbstowcs(local_414,pcVar2,0x100);
      CreateDirectoryW(local_414,(LPSECURITY_ATTRIBUTES)0x0);
    }
    std::basic_string<>::append((basic_string<> *)&stack0xfffffbd4,"DebugLog_Game.txt",0x11);
    pcVar2 = &stack0xfffffbd4;
    if (0xf < local_418) {
      pcVar2 = in_stack_fffffbd4;
    }
    _File_0065d530 = (_iobuf *)fopen(pcVar2,"w");
    pcVar6 = log_exref;
    pcVar2 = &stack0xfffffbd4;
    if (0xf < local_418) {
      pcVar2 = in_stack_fffffbd4;
    }
    cocos2d::log("Opened debug log at \'%s\'",pcVar2);
    _fprintf((FILE *)_File_0065d530,"Objects in Space\n");
    _fprintf((FILE *)_File_0065d530,"Build %s (windows)\n","1.0.8");
    _fprintf((FILE *)_File_0065d530,"(c) 2019 Flat Earth Games Pty Ltd\n");
    _fprintf((FILE *)_File_0065d530,"CLIENT/SP mode\n");
    _fprintf((FILE *)_File_0065d530,"Play began: %04d-%02d-%02d %02d:%02d:%02d\n\n",
             ptVar3->tm_year + 0x76c,ptVar3->tm_mon + 1,ptVar3->tm_mday,ptVar3->tm_hour,
             ptVar3->tm_min,ptVar3->tm_sec);
    local_8 = 0xffffffff;
    if (0xf < local_418) {
      pnVar5 = (nothrow_t *)(local_418 + 1);
      pcVar2 = in_stack_fffffbd4;
      if ((nothrow_t *)0xfff < pnVar5) {
        pcVar2 = *(char **)(in_stack_fffffbd4 + -4);
        pnVar5 = (nothrow_t *)(local_418 + 0x24);
        if ((char *)0x1f < in_stack_fffffbd4 + (-4 - (int)pcVar2)) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pcVar2,pnVar5);
    }
    in_stack_fffffbe4 = (va_list)0x0;
  }
  if (*param_2 != '\0') {
    _vsnprintf(param_2,(size_t)&stack0x0000000c,in_stack_fffffbe0,in_stack_fffffbe4);
    _fprintf((FILE *)_File_0065d530,"[%02d:%02d:%02d] [%s]: %s\n",ptVar3->tm_hour,ptVar3->tm_min,
             ptVar3->tm_sec,param_1,&DAT_0065e560);
    puStack_408 = &DAT_0065e560;
    pcStack_40c = param_1;
    pcStack_410 = "[%s]: %s";
    local_414[0] = L'そ';
    local_414[1] = L'Y';
    (*pcVar6)();
    fflush((FILE *)_File_0065d530);
  }
  ExceptionList = local_10;
  local_414[0] = L'ょ';
  local_414[1] = L'Y';
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// int __cdecl diceRoll(struct Dice &)

int __cdecl diceRoll(Dice *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  int iVar5;
  
  iVar4 = *in_ECX;
  if ((iVar4 == 0) && (in_ECX[2] == 0)) {
    return 0;
  }
  iVar1 = in_ECX[2];
  iVar2 = in_ECX[1];
  iVar5 = 0;
  if ((0 < iVar2) && (0 < iVar4)) {
    do {
      iVar3 = rand();
      iVar5 = iVar5 + iVar3 % iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar1 + iVar5;
}


// int __cdecl diceRoll(int,int,int)

int __cdecl diceRoll(int param_1,int param_2,int param_3)

{
  int iVar1;
  int in_ECX;
  int in_EDX;
  int iVar2;
  
  iVar2 = 0;
  if ((0 < in_EDX) && (0 < in_ECX)) {
    do {
      iVar1 = rand();
      iVar2 = iVar2 + iVar1 % in_EDX + 1;
      in_ECX = in_ECX + -1;
    } while (in_ECX != 0);
  }
  return param_1 + iVar2;
}


// float __cdecl differenceBetweenAngles(float,float)

float __cdecl differenceBetweenAngles(float param_1,float param_2)

{
  float10 extraout_ST1;
  float in_XMM0_Da;
  float in_XMM1_Da;
  
  __CIfmod((double)ABS(in_XMM0_Da - in_XMM1_Da));
  return (float)extraout_ST1;
}
