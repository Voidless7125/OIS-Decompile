// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __cdecl OSInterface::initialiseOSFunctions(void)
void OSInterface::initialiseOSFunctions()

{
  std::string *pbVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  undefined1 auStack_234 [4];
  void *local_230 [5];
  uint local_21c;
  WCHAR local_218 [262];
  uint local_c;
  
  // [cookie] local_c = ___security_cookie ^ (uint)auStack_234;
  GetCurrentDirectoryW(0x104,local_218);
  pbVar1 = (std::string *)strUsingArgs((char *)local_230,"%ls",local_218);
  if (pbVar1 != &this_006578b8) {
    // [mislabelled-dtor] word::~word((word *)&this_006578b8);
    _this_006578b8 = *(undefined4 *)pbVar1;
    uRam006578bc = *(undefined4 *)(pbVar1 + 4);
    uRam006578c0 = *(undefined4 *)(pbVar1 + 8);
    uRam006578c4 = *(undefined4 *)(pbVar1 + 0xc);
    _DAT_006578c8 = *(undefined8 *)(pbVar1 + 0x10);
    *(undefined4 *)(pbVar1 + 0x10) = 0;
    *(undefined4 *)(pbVar1 + 0x14) = 0xf;
    *pbVar1 = (std::string)0x0;
  }
  if (0xf < local_21c) {
    pnVar3 = (nothrow_t *)(local_21c + 1);
    pvVar2 = local_230[0];
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)local_230[0] + -4);
      pnVar3 = (nothrow_t *)(local_21c + 0x24);
      if (0x1f < (uint)((int)local_230[0] + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  // [cookie] __security_check_cookie(local_c ^ (uint)auStack_234);
  return;
}


// Ghidra: void __cdecl OSInterface::getSoundLocationForAsset(char *param_1)
void OSInterface::getSoundLocationForAsset(char * param_1)

{
  char *pcVar1;
  std::string *in_ECX;
  nothrow_t *pnVar2;
  uint in_stack_00000014;
  uint in_stack_00000018;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005cc9c1;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 1;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0xf;
  *in_ECX = (std::string)0x0;
  ghidra::str::assign(in_ECX,"assets\\",7);
  pcVar1 = (char *)&param_1;
  if (0xf < in_stack_00000018) {
    pcVar1 = param_1;
  }
  ghidra::str::append(in_ECX,pcVar1,in_stack_00000014);
  if (0xf < in_stack_00000018) {
    pnVar2 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar1 = param_1;
    if ((nothrow_t *)0xfff < pnVar2) {
      pcVar1 = *(char **)(param_1 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < param_1 + (-4 - (int)pcVar1)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar1,pnVar2);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __cdecl OSInterface::getLocationForAsset(char *param_1)
void OSInterface::getLocationForAsset(char * param_1)

{
  char *pcVar1;
  std::string *in_ECX;
  nothrow_t *pnVar2;
  uint in_stack_00000014;
  uint in_stack_00000018;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005cc9c1;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 1;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0xf;
  *in_ECX = (std::string)0x0;
  pcVar1 = (char *)&param_1;
  if (0xf < in_stack_00000018) {
    pcVar1 = param_1;
  }
  ghidra::str::append(in_ECX,pcVar1,in_stack_00000014);
  if (0xf < in_stack_00000018) {
    pnVar2 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar1 = param_1;
    if ((nothrow_t *)0xfff < pnVar2) {
      pcVar1 = *(char **)(param_1 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < param_1 + (-4 - (int)pcVar1)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar1,pnVar2);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: uchar * __cdecl OSInterface::getDataFromFile(basic_string<> *param_1)
uchar * OSInterface::getDataFromFile(std::string * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *pbVar1;
  word *pwVar2;
  char ****ppppcVar3;
  FILE *_File;
  int iVar4;
  void *pvVar5;
  uchar *puVar6;
  int *in_ECX;
  char in_DL;
  nothrow_t *pnVar7;
  uint in_stack_00000014;
  uint in_stack_00000018;
  std::string abStack_b4 [8];
  undefined4 uStack_ac;
  int iStack_a8;
  int local_74;
  void *local_54;
  uint local_40;
  char ***local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  uint local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  // [seh] puStack_18 = &DAT_005cc9f3;
  // [seh] local_1c = ExceptionList;
  // [cookie] local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  // [seh] ExceptionList = &local_1c;
  local_2c = 0xf00000000;
  local_3c = (char ***)((uint)local_3c & 0xffffff00);
  local_14 = 1;
  if (in_DL == '\0') {
    pbVar1 = (std::string *)&param_1;
    if (0xf < in_stack_00000018) {
      pbVar1 = param_1;
    }
    iStack_a8 = 0x590ba8;
    // [seh] puStack_20 = &stack0xfffffffc;
    ghidra::str::assign((std::string *)&local_3c,(char *)pbVar1,in_stack_00000014);
  }
  else {
    ghidra::str::ctor(abStack_b4,(std::string *)&param_1);
    pwVar2 = (word *)getLocationForAsset();
    if ((word *)&local_3c != pwVar2) {
      // [mislabelled-dtor] word::~word((word *)&local_3c);
      local_3c = *(char ****)pwVar2;
      uStack_38 = *(undefined4 *)(pwVar2 + 4);
      uStack_34 = *(undefined4 *)(pwVar2 + 8);
      uStack_30 = *(undefined4 *)(pwVar2 + 0xc);
      local_2c = *(undefined8 *)(pwVar2 + 0x10);
      *(undefined4 *)(pwVar2 + 0x10) = 0;
      *(undefined4 *)(pwVar2 + 0x14) = 0xf;
      *pwVar2 = (word)0x0;
    }
    if (0xf < local_40) {
      pnVar7 = (nothrow_t *)(local_40 + 1);
      pvVar5 = local_54;
      if ((nothrow_t *)0xfff < pnVar7) {
        pvVar5 = *(void **)((int)local_54 + -4);
        pnVar7 = (nothrow_t *)(local_40 + 0x24);
        if (0x1f < (uint)((int)local_54 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      iStack_a8 = 0x590c25;
      operator_delete(pvVar5,pnVar7);
    }
  }
  ppppcVar3 = &local_3c;
  if (0xf < local_2c._4_4_) {
    ppppcVar3 = (char ****)local_3c;
  }
  iStack_a8 = 0x590c3f;
  _File = fopen((char *)ppppcVar3,"rb");
  if (_File != (FILE *)0x0) {
    iStack_a8 = _fileno(_File);
    uStack_ac = 0x590c5a;
    iVar4 = fstat64i32();
    if (iVar4 != -1) {
      pvVar5 = malloc(local_74 + 1);
      *(undefined1 *)(local_74 + (int)pvVar5) = 0;
      *in_ECX = 0;
      do {
        iVar4 = getc(_File);
        if ((char)iVar4 == -1) break;
        *(char *)((int)pvVar5 + *in_ECX) = (char)iVar4;
        *in_ECX = *in_ECX + 1;
      } while (*in_ECX != local_74);
      fclose(_File);
      *(undefined1 *)(*in_ECX + (int)pvVar5) = 0;
      goto LAB_00590cc9;
    }
    fclose(_File);
  }
  *in_ECX = -1;
LAB_00590cc9:
  if (0xf < local_2c._4_4_) {
    pnVar7 = (nothrow_t *)(local_2c._4_4_ + 1);
    ppppcVar3 = (char ****)local_3c;
    if ((nothrow_t *)0xfff < pnVar7) {
      ppppcVar3 = (char ****)local_3c[-1];
      pnVar7 = (nothrow_t *)(local_2c._4_4_ + 0x24);
      if ((char *)0x1f < (char *)((int)local_3c + (-4 - (int)ppppcVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    iStack_a8 = 0x590cfc;
    operator_delete(ppppcVar3,pnVar7);
  }
  local_2c = 0xf00000000;
  local_3c = (char ***)((uint)local_3c & 0xffffff00);
  if (0xf < in_stack_00000018) {
    pnVar7 = (nothrow_t *)(in_stack_00000018 + 1);
    pbVar1 = param_1;
    if ((nothrow_t *)0xfff < pnVar7) {
      pbVar1 = *(std::string **)(param_1 + -4);
      pnVar7 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((std::string *)0x1f < param_1 + (-4 - (int)pbVar1)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    iStack_a8 = 0x590d44;
    operator_delete(pbVar1,pnVar7);
  }
  // [seh] ExceptionList = local_1c;
  // [cookie] puVar6 = (uchar *)__security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return puVar6;
}


// Ghidra: void __cdecl OSInterface::getBaseDirectory(void)
void OSInterface::getBaseDirectory()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  std::string *pbVar4;
  word *pwVar5;
  DWORD DVar6;
  word *in_ECX;
  void *pvVar7;
  nothrow_t *pnVar8;
  void *local_240 [5];
  uint local_22c;
  wchar_t local_228 [258];
  uint local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  // [seh] puStack_18 = &DAT_005cca42;
  // [seh] local_1c = ExceptionList;
  // [cookie] local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  // [seh] ExceptionList = &local_1c;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0xf;
  *in_ECX = (word)0x0;
  local_14 = 0;
  pbVar4 = &this_006578b8;
  if (0xf < DAT_006578cc) {
    pbVar4 = _this_006578b8;
  }
  pwVar5 = (word *)strUsingArgs((char *)local_240,"%s\\ObjectsInSpace\\",pbVar4,local_24);
  if (in_ECX != pwVar5) {
    // [mislabelled-dtor] word::~word(in_ECX);
    uVar1 = *(undefined4 *)(pwVar5 + 4);
    uVar2 = *(undefined4 *)(pwVar5 + 8);
    uVar3 = *(undefined4 *)(pwVar5 + 0xc);
    *(undefined4 *)in_ECX = *(undefined4 *)pwVar5;
    *(undefined4 *)(in_ECX + 4) = uVar1;
    *(undefined4 *)(in_ECX + 8) = uVar2;
    *(undefined4 *)(in_ECX + 0xc) = uVar3;
    *(undefined8 *)(in_ECX + 0x10) = *(undefined8 *)(pwVar5 + 0x10);
    *(undefined4 *)(pwVar5 + 0x10) = 0;
    *(undefined4 *)(pwVar5 + 0x14) = 0xf;
    *pwVar5 = (word)0x0;
  }
  if (0xf < local_22c) {
    pnVar8 = (nothrow_t *)(local_22c + 1);
    pvVar7 = local_240[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar7 = *(void **)((int)local_240[0] + -4);
      pnVar8 = (nothrow_t *)(local_22c + 0x24);
      if (0x1f < (uint)((int)local_240[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar8);
  }
  pwVar5 = in_ECX;
  if (0xf < *(uint *)(in_ECX + 0x14)) {
    pwVar5 = *(word **)in_ECX;
  }
  mbstowcs(local_228,(char *)pwVar5,0x100);
  DVar6 = GetFileAttributesW(local_228);
  if ((DVar6 == 0xffffffff) || ((DVar6 & 0x10) == 0)) {
    if (0xf < *(uint *)(in_ECX + 0x14)) {
      in_ECX = *(word **)in_ECX;
    }
    mbstowcs(local_228,(char *)in_ECX,0x100);
    CreateDirectoryW(local_228,(LPSECURITY_ATTRIBUTES)0x0);
  }
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// Ghidra: void __cdecl OSInterface::getModDirectory(void)
void OSInterface::getModDirectory()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *_Source;
  DWORD DVar1;
  std::string *in_ECX;
  wchar_t local_214 [256];
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005cca92;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  getBaseDirectory();
  // [seh] local_8 = 0;
  ghidra::str::append(in_ECX,"mods\\",5);
  _Source = in_ECX;
  if (0xf < *(uint *)(in_ECX + 0x14)) {
    _Source = *(std::string **)in_ECX;
  }
  mbstowcs(local_214,(char *)_Source,0x100);
  DVar1 = GetFileAttributesW(local_214);
  if ((DVar1 == 0xffffffff) || ((DVar1 & 0x10) == 0)) {
    if (0xf < *(uint *)(in_ECX + 0x14)) {
      in_ECX = *(std::string **)in_ECX;
    }
    mbstowcs(local_214,(char *)in_ECX,0x100);
    CreateDirectoryW(local_214,(LPSECURITY_ATTRIBUTES)0x0);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __cdecl OSInterface::getSaveDirectory(void)
void OSInterface::getSaveDirectory()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *_Source;
  DWORD DVar1;
  std::string *in_ECX;
  wchar_t local_214 [256];
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005ccae2;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  getBaseDirectory();
  // [seh] local_8 = 0;
  ghidra::str::append(in_ECX,"saves\\",6);
  _Source = in_ECX;
  if (0xf < *(uint *)(in_ECX + 0x14)) {
    _Source = *(std::string **)in_ECX;
  }
  mbstowcs(local_214,(char *)_Source,0x100);
  DVar1 = GetFileAttributesW(local_214);
  if ((DVar1 == 0xffffffff) || ((DVar1 & 0x10) == 0)) {
    if (0xf < *(uint *)(in_ECX + 0x14)) {
      in_ECX = *(std::string **)in_ECX;
    }
    mbstowcs(local_214,(char *)in_ECX,0x100);
    CreateDirectoryW(local_214,(LPSECURITY_ATTRIBUTES)0x0);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __cdecl OSInterface::listFiles(void *param_1)
void OSInterface::listFiles(void * param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *this_;
  bool bVar1;
  HANDLE hFindFile;
  BOOL BVar2;
  ghidra::vector *in_ECX;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_00000018;
  std::string abStack_2cc [16];
  undefined4 uStack_2bc;
  std::string abStack_2b4 [8];
  undefined4 uStack_2ac;
  _WIN32_FIND_DATAW local_27c;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005ccb4d;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 1;
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  hFindFile = FindFirstFileW(L".\\assets\\*",&local_27c);
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      if (((byte)local_27c.dwFileAttributes & 0x10) == 0) {
        uStack_2ac = 0x591192;
        strUsingArgs((char *)local_2c);
        // [seh] local_8._0_1_ = 2;
        uStack_2bc = 0x5911aa;
        ghidra::str::ctor(abStack_2b4,(std::string *)&param_1);
        // [seh] local_8._0_1_ = 3;
        ghidra::str::ctor(abStack_2cc,(std::string *)local_2c);
        // [seh] local_8 = CONCAT31(local_8._1_3_,2);
        bVar1 = stringContains();
        if (bVar1) {
          this_ = *(std::string **)(in_ECX + 4);
          if (*(std::string **)(in_ECX + 8) == this_) {
            ghidra::lib::vector___Emplace_reallocate
                      (in_ECX,(std::string *)this_,(std::string *)local_2c);
          }
          else {
            ghidra::str::ctor(this_,(std::string *)local_2c);
            *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 0x18;
          }
        }
        // [seh] local_8 = CONCAT31(local_8._1_3_,1);
        if (0xf < local_18) {
          pnVar4 = (nothrow_t *)(local_18 + 1);
          pvVar3 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar4) {
            pvVar3 = *(void **)((int)local_2c[0] + -4);
            pnVar4 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3))) goto LAB_00591259;
          }
          operator_delete(pvVar3,pnVar4);
        }
      }
      BVar2 = FindNextFileW(hFindFile,&local_27c);
    } while (BVar2 != 0);
  }
  if (0xf < in_stack_00000018) {
    pnVar4 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar3 = param_1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_1 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar3))) {
LAB_00591259:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __cdecl OSInterface::getCorrectedWorldPosition(void)
void OSInterface::getCorrectedWorldPosition()

{
  char stack0x00000004[1] = {0};  // [pseudo] address of an unnamed stack slot
  float in_ECX;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005ccb89;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  cocos2d::Vec3::operator*((Vec3 *)&stack0x00000004,in_ECX);
  cocos2d::Vec3::~Vec3((Vec3 *)&stack0x00000004);
  // [seh] ExceptionList = local_10;
  return;
}
