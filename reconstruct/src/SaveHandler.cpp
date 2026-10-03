// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall SaveHandler::loadLocalStats(SaveHandler *this)
void SaveHandler::loadLocalStats()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff6c[1] = {0};  // [pseudo] address of an unnamed stack slot
  _iobuf *p_Var1;
  char ****ppppcVar2;
  FILE *_File;
  Scenario *pSVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  int iVar6;
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  void *local_44 [5];
  uint local_30;
  char ***local_2c [5];
  uint local_18;
  _iobuf *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  uint local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005be930;
  // [seh] local_10 = ExceptionList;
  // [cookie] p_Var1 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_14 = p_Var1;
  OSInterface::getBaseDirectory();
  // [seh] local_8 = 0;
  ghidra::str::append((std::string *)local_2c,"stats.dat",9);
  ppppcVar2 = local_2c;
  if (0xf < local_18) {
    ppppcVar2 = (char ****)local_2c[0];
  }
  _File = fopen((char *)ppppcVar2,"rb");
  debugPrint("GAME","Loading scenario stats...");
  fread(&local_4c,4,1,_File);
  if (local_4c == 0xa805b) {
    fread(local_5c,4,1,_File);
    fread(&local_48,4,1,_File);
    iVar6 = 0;
    if (0 < local_48) {
      do {
        readLengthString(p_Var1);
        // [seh] local_8 = CONCAT31(local_8._1_3_,1);
        fread(&local_50,4,1,_File);
        fread(&local_54,4,1,_File);
        fread(&local_58,4,1,_File);
        fread(local_60,4,1,_File);
        fread(local_64,4,1,_File);
        ghidra::str::ctor
                  ((std::string *)&stack0xffffff6c,(std::string *)local_44);
        pSVar3 = GameData::getScenario();
        if (pSVar3 == (Scenario *)0x0) {
          debugPrint("ERROR","Scenario \'%s\' in stats is unknown.");
        }
        else {
          *(undefined4 *)(pSVar3 + 0x3c4) = local_50;
          *(undefined4 *)(pSVar3 + 0x3d0) = local_54;
          *(undefined4 *)(pSVar3 + 0x3d4) = local_58;
        }
        // [seh] local_8 = local_8 & 0xffffff00;
        if (0xf < local_30) {
          pnVar5 = (nothrow_t *)(local_30 + 1);
          pvVar4 = local_44[0];
          if ((nothrow_t *)0xfff < pnVar5) {
            pvVar4 = *(void **)((int)local_44[0] + -4);
            pnVar5 = (nothrow_t *)(local_30 + 0x24);
            if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4))) goto LAB_004b7392;
          }
          operator_delete(pvVar4,pnVar5);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_48);
    }
    fclose(_File);
    debugPrint("DETAIL","Loaded scenario stats from %f.");
  }
  if (0xf < local_18) {
    pnVar5 = (nothrow_t *)(local_18 + 1);
    ppppcVar2 = (char ****)local_2c[0];
    if ((nothrow_t *)0xfff < pnVar5) {
      ppppcVar2 = (char ****)local_2c[0][-1];
      pnVar5 = (nothrow_t *)(local_18 + 0x24);
      if ((char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar2))) {
LAB_004b7392:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppcVar2,pnVar5);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall SaveHandler::saveLocalStats(SaveHandler *this)
void SaveHandler::saveLocalStats()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff90[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *pbVar1;
  char *******pppppppcVar2;
  FILE *_File;
  uint uVar3;
  nothrow_t *pnVar4;
  int local_40 [4];
  undefined4 *local_30;
  char *******local_2c [5];
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005be968;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  OSInterface::getBaseDirectory();
  // [seh] local_8 = 0;
  ghidra::str::append((std::string *)local_2c,"stats.dat",9);
  pppppppcVar2 = (char *******)local_2c;
  if (0xf < local_18) {
    pppppppcVar2 = local_2c[0];
  }
  _File = fopen((char *)pppppppcVar2,"wb");
  local_40[2] = 0xa805b;
  fwrite(local_40 + 2,4,1,_File);
  local_40[1] = 1;
  fwrite(local_40 + 1,4,1,_File);
  local_40[0] = *(int *)(g_gameData + 100) - *(int *)(g_gameData + 0x60) >> 2;
  fwrite(local_40,4,1,_File);
  local_40[3] = 0;
  local_30 = *(undefined4 **)(g_gameData + 0x60);
  uVar3 = (uint)((int)*(undefined4 **)(g_gameData + 100) + (3 - (int)local_30)) >> 2;
  if (*(undefined4 **)(g_gameData + 100) < local_30) {
    uVar3 = 0;
  }
  if (uVar3 != 0) {
    do {
      pbVar1 = (std::string *)*local_30;
      ghidra::str::ctor((std::string *)&stack0xffffff90,pbVar1);
      writeLengthString();
      fwrite(pbVar1 + 0x3c4,4,1,_File);
      fwrite(pbVar1 + 0x3d0,4,1,_File);
      fwrite(pbVar1 + 0x3d4,4,1,_File);
      fwrite(pbVar1 + 0x3c8,4,1,_File);
      fwrite(pbVar1 + 0x3cc,4,1,_File);
      local_40[3] = local_40[3] + 1;
      local_30 = local_30 + 1;
    } while (local_40[3] != uVar3);
  }
  fclose(_File);
  debugPrint("DETAIL","Saved scenario stats to %f.");
  if (0xf < local_18) {
    pnVar4 = (nothrow_t *)(local_18 + 1);
    pppppppcVar2 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar4) {
      pppppppcVar2 = (char *******)local_2c[0][-1];
      pnVar4 = (nothrow_t *)(local_18 + 0x24);
      if ((char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)pppppppcVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pppppppcVar2,pnVar4);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: bool __thiscall SaveHandler::saveExists(SaveHandler *this,int param_1)
bool SaveHandler::saveExists(int param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  undefined1 uVar1;
  uint uVar2;
  char *pcVar3;
  LPCSTR ******pppppppCVar4;
  char *pcVar5;
  void *pvVar6;
  nothrow_t *pnVar7;
  void *local_48 [5];
  uint local_34;
  LPCSTR *****local_30 [5];
  uint local_1c;
  uint local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005be9a0;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_18 = uVar2;
  OSInterface::getSaveDirectory();
  // [seh] local_8 = 0;
  if (param_1 == -1) {
    param_1 = *(int *)(g_gameLogic + 0x74);
  }
  pcVar3 = (char *)strUsingArgs((char *)local_48,"/objects%02d.sav",param_1,uVar2);
  // [seh] local_8 = CONCAT31(local_8._1_3_,1);
  pcVar5 = pcVar3;
  if (0xf < *(uint *)(pcVar3 + 0x14)) {
    pcVar5 = *(char **)pcVar3;
  }
  ghidra::str::append((std::string *)local_30,pcVar5,*(uint *)(pcVar3 + 0x10));
  if (0xf < local_34) {
    pnVar7 = (nothrow_t *)(local_34 + 1);
    pvVar6 = local_48[0];
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)local_48[0] + -4);
      pnVar7 = (nothrow_t *)(local_34 + 0x24);
      if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar6,pnVar7);
  }
  pppppppCVar4 = local_30;
  if (0xf < local_1c) {
    pppppppCVar4 = (LPCSTR ******)local_30[0];
  }
  GetFileAttributesA((LPCSTR)pppppppCVar4);
  if (0xf < local_1c) {
    pnVar7 = (nothrow_t *)(local_1c + 1);
    pppppppCVar4 = (LPCSTR ******)local_30[0];
    if ((nothrow_t *)0xfff < pnVar7) {
      pppppppCVar4 = (LPCSTR ******)local_30[0][-1];
      pnVar7 = (nothrow_t *)(local_1c + 0x24);
      if ((LPCSTR)0x1f < (LPCSTR)((int)local_30[0] + (-4 - (int)pppppppCVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pppppppCVar4,pnVar7);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] uVar1 = __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return (bool)uVar1;
}


// Ghidra: SaveMetaData * __thiscall SaveHandler::unpackMetaData(SaveHandler *this,_iobuf *param_1)
SaveMetaData * SaveHandler::unpackMetaData(_iobuf * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  _iobuf *p_Var4;
  SaveMetaData *pSVar5;
  word *this_00;
  word *pwVar6;
  std::string *pbVar7;
  void *pvVar8;
  nothrow_t *pnVar9;
  FILE *_File;
  char *pcVar10;
  int local_7c;
  FILE *local_78;
  std::string *local_74;
  char local_6e;
  char local_6d;
  void *local_6c;
  uint local_58;
  void *local_54;
  uint local_40;
  std::string *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint local_2c;
  uint uStack_28;
  _iobuf *local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005be9d8;
  // [seh] local_1c = ExceptionList;
  // [cookie] p_Var4 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  local_78 = (FILE *)param_1;
  local_24 = p_Var4;
  pSVar5 = operator_new(0x108);
  this_00 = (word *)new ((void *)(pSVar5)) SaveMetaData();
  pwVar6 = (word *)readLengthString(p_Var4);
  if (this_00 != pwVar6) {
    // [mislabelled-dtor] word::~word(this_00);
    uVar1 = *(undefined4 *)(pwVar6 + 4);
    uVar2 = *(undefined4 *)(pwVar6 + 8);
    uVar3 = *(undefined4 *)(pwVar6 + 0xc);
    *(undefined4 *)this_00 = *(undefined4 *)pwVar6;
    *(undefined4 *)(this_00 + 4) = uVar1;
    *(undefined4 *)(this_00 + 8) = uVar2;
    *(undefined4 *)(this_00 + 0xc) = uVar3;
    uVar1 = *(undefined4 *)(pwVar6 + 0x14);
    *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(pwVar6 + 0x10);
    *(undefined4 *)(this_00 + 0x14) = uVar1;
    *(undefined4 *)(pwVar6 + 0x10) = 0;
    *(undefined4 *)(pwVar6 + 0x14) = 0xf;
    *pwVar6 = (word)0x0;
  }
  if (0xf < local_40) {
    pnVar9 = (nothrow_t *)(local_40 + 1);
    pvVar8 = local_54;
    if ((nothrow_t *)0xfff < pnVar9) {
      pvVar8 = *(void **)((int)local_54 + -4);
      pnVar9 = (nothrow_t *)(local_40 + 0x24);
      if (0x1f < (uint)((int)local_54 + (-4 - (int)pvVar8))) {
LAB_004b776b:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar8,pnVar9);
  }
  local_6e = '\x01';
  _File = local_78;
  do {
    local_6d = '\0';
    local_7c = 0;
    fread(&local_7c,4,1,_File);
    fread(&local_6d,1,1,_File);
    local_74 = (std::string *)0xffffffff;
    local_2c = 0;
    uStack_28 = 0xf;
    local_3c = (std::string *)((uint)local_3c & 0xffffff00);
    local_14 = 0;
    if (local_6d == '\0') {
      fread(&local_74,4,1,_File);
    }
    else {
      pwVar6 = (word *)readLengthString(p_Var4);
      if ((word *)&local_3c != pwVar6) {
        // [mislabelled-dtor] word::~word((word *)&local_3c);
        local_3c = *(std::string **)pwVar6;
        uStack_38 = *(undefined4 *)(pwVar6 + 4);
        uStack_34 = *(undefined4 *)(pwVar6 + 8);
        uStack_30 = *(undefined4 *)(pwVar6 + 0xc);
        local_2c = *(uint *)(pwVar6 + 0x10);
        uStack_28 = *(uint *)(pwVar6 + 0x14);
        *(undefined4 *)(pwVar6 + 0x10) = 0;
        *(undefined4 *)(pwVar6 + 0x14) = 0xf;
        *pwVar6 = (word)0x0;
      }
      _File = local_78;
      if (0xf < local_58) {
        pnVar9 = (nothrow_t *)(local_58 + 1);
        pvVar8 = local_6c;
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar8 = *(void **)((int)local_6c + -4);
          pnVar9 = (nothrow_t *)(local_58 + 0x24);
          if (0x1f < (uint)((int)local_6c + (-4 - (int)pvVar8))) goto LAB_004b776b;
        }
        operator_delete(pvVar8,pnVar9);
        _File = local_78;
      }
    }
    if (local_7c < 0x3ea) {
      if (local_7c == 0x3e9) {
        pwVar6 = this_00 + 0x30;
        goto LAB_004b7884;
      }
      if (local_7c != -9999) goto switchD_004b78b0_caseD_3ed;
      local_6e = '\0';
      goto LAB_004b7954;
    }
    switch(local_7c) {
    case 0x3ea:
      *(std::string **)(this_00 + 0x48) = local_74;
      break;
    case 0x3eb:
      pwVar6 = this_00 + 0x4c;
      goto LAB_004b7884;
    case 0x3ec:
      pwVar6 = this_00 + 100;
      goto LAB_004b7884;
    default:
switchD_004b78b0_caseD_3ed:
      if (local_6d == '\0') {
        pcVar10 = "Unknown metadata \'%d\', with number \'%d\'";
        pbVar7 = local_74;
      }
      else {
        pbVar7 = (std::string *)&local_3c;
        if (0xf < uStack_28) {
          pbVar7 = local_3c;
        }
        pcVar10 = "Unknown metadata \'%d\', with string \'%s\'";
      }
      debugPrint("ERROR",pcVar10,local_7c,pbVar7);
      break;
    case 0x3ee:
      pwVar6 = this_00 + 0x7c;
      goto LAB_004b7884;
    case 0x3ef:
      pwVar6 = this_00 + 0x94;
      goto LAB_004b7884;
    case 0x3f0:
      *(std::string **)(this_00 + 0x104) = local_74;
      break;
    case 0x3f1:
      pwVar6 = this_00 + 0xc4;
      goto LAB_004b7884;
    case 0x3f2:
      pwVar6 = this_00 + 0xdc;
LAB_004b7884:
      if (pwVar6 != (word *)&local_3c) {
        pbVar7 = (std::string *)&local_3c;
        if (0xf < uStack_28) {
          pbVar7 = local_3c;
        }
        ghidra::str::assign((std::string *)pwVar6,(char *)pbVar7,local_2c);
      }
      break;
    case 0x3f3:
      *(std::string **)(this_00 + 0x100) = local_74;
      break;
    case 0x3f4:
      this_00[0xfc] = (word)(local_74 == (std::string *)&DAT_00000001);
      break;
    case 0x3f5:
      *(std::string **)(this_00 + 0xf4) = local_74;
      break;
    case 0x3f6:
      *(std::string **)(this_00 + 0xf8) = local_74;
    }
LAB_004b7954:
    local_14 = 0xffffffff;
    if (0xf < uStack_28) {
      pnVar9 = (nothrow_t *)(uStack_28 + 1);
      pbVar7 = local_3c;
      if ((nothrow_t *)0xfff < pnVar9) {
        pbVar7 = *(std::string **)(local_3c + -4);
        pnVar9 = (nothrow_t *)(uStack_28 + 0x24);
        if ((std::string *)0x1f < local_3c + (-4 - (int)pbVar7)) goto LAB_004b776b;
      }
      operator_delete(pbVar7,pnVar9);
    }
    if (local_6e == '\0') {
      // [seh] ExceptionList = local_1c;
      // [cookie] pSVar5 = (SaveMetaData *)__security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
      return pSVar5;
    }
  } while( true );
}


// Ghidra: void __thiscall SaveHandler::packMetaData(SaveHandler *this,_iobuf *param_1)
void SaveHandler::packMetaData(_iobuf * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff54[1] = {0};  // [pseudo] address of an unnamed stack slot
  word *pwVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  __time64_t local_88;
  undefined1 *local_7c;
  uint local_78;
  undefined4 local_74;
  undefined1 local_6d;
  void *local_6c [5];
  uint local_58;
  void *local_54 [5];
  uint local_40;
  void *local_3c;
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
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005bea10;
  // [seh] local_1c = ExceptionList;
  // [cookie] local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  // [seh] ExceptionList = &local_1c;
  ghidra::str::ctor
            ((std::string *)local_54,(std::string *)(*(int *)(g_gameData + 0x124) + 4));
  local_14 = 0;
  ghidra::str::ctor((std::string *)&stack0xffffff54,(std::string *)local_54)
  ;
  writeLengthString();
  ghidra::str::assign((std::string *)&stack0xffffff54,"1.0.8",5);
  writeMetaDataStr();
  ghidra::str::ctor
            ((std::string *)&stack0xffffff54,(std::string *)(*(int *)(g_gameData + 0x124) + 4)
            );
  writeMetaDataStr();
  local_6d = 0;
  local_74 = *(undefined4 *)(*(int *)(g_gameData + 0x124) + 0x1c);
  local_78 = 0x3ea;
  fwrite(&local_78,4,1,(FILE *)param_1);
  fwrite(&local_6d,1,1,(FILE *)param_1);
  fwrite(&local_74,4,1,(FILE *)param_1);
  ghidra::str::ctor
            ((std::string *)&stack0xffffff54,(std::string *)(*(int *)(g_gameData + 0xd0) + 8))
  ;
  writeMetaDataStr();
  ghidra::str::ctor
            ((std::string *)&stack0xffffff54,
             (std::string *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x254) + 0x60));
  writeMetaDataStr();
  local_78 = (uint)(g_gameLogic[0x11b] != (byte)0x0);
  local_74 = 0x3f4;
  local_6d = 0;
  fwrite(&local_74,4,1,(FILE *)param_1);
  fwrite(&local_6d,1,1,(FILE *)param_1);
  fwrite(&local_78,4,1,(FILE *)param_1);
  local_78 = *(uint *)(g_gameLogic + 0xc4);
  local_74 = 0x3f5;
  local_6d = 0;
  fwrite(&local_74,4,1,(FILE *)param_1);
  fwrite(&local_6d,1,1,(FILE *)param_1);
  fwrite(&local_78,4,1,(FILE *)param_1);
  local_78 = *(uint *)(g_gameLogic + 0xa8);
  local_74 = 0x3f6;
  local_6d = 0;
  fwrite(&local_74,4,1,(FILE *)param_1);
  fwrite(&local_6d,1,1,(FILE *)param_1);
  fwrite(&local_78,4,1,(FILE *)param_1);
  local_78 = 0xc;
  local_74 = 0x3f3;
  local_6d = 0;
  fwrite(&local_74,4,1,(FILE *)param_1);
  fwrite(&local_6d,1,1,(FILE *)param_1);
  fwrite(&local_78,4,1,(FILE *)param_1);
  if (*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) != 0) {
    ghidra::str::ctor
              ((std::string *)&stack0xffffff54,
               (std::string *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x238));
    writeMetaDataStr();
  }
  local_78 = **(uint **)(g_gameData + 0xd8);
  local_74 = 0x3f0;
  local_6d = 0;
  fwrite(&local_74,4,1,(FILE *)param_1);
  fwrite(&local_6d,1,1,(FILE *)param_1);
  fwrite(&local_78,4,1,(FILE *)param_1);
  local_2c = 0xf00000000;
  local_3c = (void *)((uint)local_3c & 0xffffff00);
  local_14 = CONCAT31(local_14._1_3_,1);
  local_88 = _time64((__time64_t *)0x0);
  _localtime64(&local_88);
  pwVar1 = (word *)strUsingArgs((char *)local_6c);
  if ((word *)&local_3c != pwVar1) {
    // [mislabelled-dtor] word::~word((word *)&local_3c);
    local_3c = *(void **)pwVar1;
    uStack_38 = *(undefined4 *)(pwVar1 + 4);
    uStack_34 = *(undefined4 *)(pwVar1 + 8);
    uStack_30 = *(undefined4 *)(pwVar1 + 0xc);
    local_2c = *(undefined8 *)(pwVar1 + 0x10);
    *(undefined4 *)(pwVar1 + 0x10) = 0;
    *(undefined4 *)(pwVar1 + 0x14) = 0xf;
    *pwVar1 = (word)0x0;
  }
  if (0xf < local_58) {
    pnVar3 = (nothrow_t *)(local_58 + 1);
    pvVar2 = local_6c[0];
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)local_6c[0] + -4);
      pnVar3 = (nothrow_t *)(local_58 + 0x24);
      if (0x1f < (uint)((int)local_6c[0] + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  ghidra::str::ctor
            ((std::string *)&stack0xffffff54,(std::string *)&local_3c);
  writeMetaDataStr();
  local_7c = &stack0xffffff54;
  strUsingArgs(&stack0xffffff54,"%02d-%02d-%02d %d:%d",*(undefined4 *)(g_gameLogic + 400),
               *(int *)(g_gameLogic + 0x18c) + 1,*(undefined4 *)(g_gameLogic + 0x188),
               *(undefined4 *)(g_gameLogic + 0x184),*(undefined4 *)(g_gameLogic + 0x180));
  writeMetaDataStr();
  local_78 = 999;
  local_74 = 0xffffd8f1;
  local_6d = 0;
  fwrite(&local_74,4,1,(FILE *)param_1);
  fwrite(&local_6d,1,1,(FILE *)param_1);
  fwrite(&local_78,4,1,(FILE *)param_1);
  if (0xf < local_2c._4_4_) {
    pnVar3 = (nothrow_t *)(local_2c._4_4_ + 1);
    pvVar2 = local_3c;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)local_3c + -4);
      pnVar3 = (nothrow_t *)(local_2c._4_4_ + 0x24);
      if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  if (0xf < local_40) {
    pnVar3 = (nothrow_t *)(local_40 + 1);
    pvVar2 = local_54[0];
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)local_54[0] + -4);
      pnVar3 = (nothrow_t *)(local_40 + 0x24);
      if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
  }
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// Ghidra: SaveMetaData * __thiscall SaveHandler::metadataForSave(SaveHandler *this,int param_1)
SaveMetaData * SaveHandler::metadataForSave(int param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  SaveHandler *pSVar1;
  _iobuf *p_Var2;
  char *pcVar3;
  char ****ppppcVar4;
  FILE *_File;
  std::string *pbVar5;
  SaveMetaData *pSVar6;
  char *pcVar7;
  SaveHandler *extraout_ECX;
  SaveHandler *extraout_ECX_00;
  SaveHandler *this_00;
  void *pvVar8;
  nothrow_t *pnVar9;
  undefined1 local_84 [4];
  SaveHandler *local_80;
  char *local_7c;
  void *local_78 [5];
  uint local_64;
  void *local_60;
  undefined4 local_50;
  uint local_4c;
  char ***local_48 [5];
  uint local_34;
  std::string *local_30 [4];
  uint local_20;
  uint local_1c;
  _iobuf *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bea58;
  // [seh] local_10 = ExceptionList;
  // [cookie] p_Var2 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_80 = this;
  local_18 = p_Var2;
  OSInterface::getSaveDirectory();
  // [seh] local_8 = 0;
  if (param_1 == -1) {
    param_1 = *(int *)(g_gameLogic + 0x74);
  }
  pcVar3 = (char *)strUsingArgs((char *)local_78,"/objects%02d.sav",param_1);
  // [seh] local_8._0_1_ = 1;
  pcVar7 = pcVar3;
  if (0xf < *(uint *)(pcVar3 + 0x14)) {
    pcVar7 = *(char **)pcVar3;
  }
  ghidra::str::append((std::string *)local_48,pcVar7,*(uint *)(pcVar3 + 0x10));
  // [seh] local_8._0_1_ = 0;
  if (0xf < local_64) {
    pnVar9 = (nothrow_t *)(local_64 + 1);
    pvVar8 = local_78[0];
    if ((nothrow_t *)0xfff < pnVar9) {
      pvVar8 = *(void **)((int)local_78[0] + -4);
      pnVar9 = (nothrow_t *)(local_64 + 0x24);
      if (0x1f < (uint)((int)local_78[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar8,pnVar9);
  }
  ppppcVar4 = local_48;
  if (0xf < local_34) {
    ppppcVar4 = (char ****)local_48[0];
  }
  _File = fopen((char *)ppppcVar4,"rb");
  fread(&local_7c,4,1,_File);
  if (local_7c == "nnette") {
    fread(local_84,4,1,_File);
    readLengthString(p_Var2);
    // [seh] local_8._0_1_ = 2;
    pSVar1 = local_80 + param_1 * 4;
    pSVar6 = *(SaveMetaData **)pSVar1;
    this_00 = extraout_ECX;
    if (pSVar6 != (SaveMetaData *)0x0) {
      (pSVar6)->~SaveMetaData();
      operator_delete(pSVar6,(nothrow_t *)0x108);
      this_00 = extraout_ECX_00;
    }
    pSVar6 = unpackMetaData(this_00,(_iobuf *)_File);
    *(SaveMetaData **)pSVar1 = pSVar6;
    if ((std::string *)(pSVar6 + 0xac) != (std::string *)local_30) {
      pbVar5 = (std::string *)local_30;
      if (0xf < local_1c) {
        pbVar5 = local_30[0];
      }
      ghidra::str::assign((std::string *)(pSVar6 + 0xac),(char *)pbVar5,local_20);
    }
    readLengthString(p_Var2);
    fclose(_File);
    if (0xf < local_4c) {
      pnVar9 = (nothrow_t *)(local_4c + 1);
      pvVar8 = local_60;
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar8 = *(void **)((int)local_60 + -4);
        pnVar9 = (nothrow_t *)(local_4c + 0x24);
        if (0x1f < (uint)((int)local_60 + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar8,pnVar9);
    }
    local_50 = 0;
    local_4c = 0xf;
    local_60 = (void *)((uint)local_60 & 0xffffff00);
    if (0xf < local_1c) {
      pnVar9 = (nothrow_t *)(local_1c + 1);
      pbVar5 = local_30[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pbVar5 = *(std::string **)(local_30[0] + -4);
        pnVar9 = (nothrow_t *)(local_1c + 0x24);
        if ((std::string *)0x1f < local_30[0] + (-4 - (int)pbVar5)) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pbVar5,pnVar9);
    }
    local_20 = 0;
    local_1c = 0xf;
    local_30[0] = (std::string *)((uint)local_30[0] & 0xffffff00);
  }
  if (0xf < local_34) {
    pnVar9 = (nothrow_t *)(local_34 + 1);
    ppppcVar4 = (char ****)local_48[0];
    if ((nothrow_t *)0xfff < pnVar9) {
      ppppcVar4 = (char ****)local_48[0][-1];
      pnVar9 = (nothrow_t *)(local_34 + 0x24);
      if ((char *)0x1f < (char *)((int)local_48[0] + (-4 - (int)ppppcVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppcVar4,pnVar9);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] pSVar6 = (SaveMetaData *)__security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return pSVar6;
}


// Ghidra: void __thiscall SaveHandler::loadGame(SaveHandler *this)
void SaveHandler::loadGame()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff40[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  GameLogic *pGVar2;
  char *pcVar3;
  char ****ppppcVar4;
  FILE *_File;
  SaveMetaData *pSVar5;
  std::string *pbVar6;
  LPCSTR ***ppppCVar7;
  LPCSTR ***lpExistingFileName;
  SaveHandler *extraout_ECX;
  SaveHandler *extraout_ECX_00;
  SaveHandler *this_00;
  SaveHandler *this_01;
  char *pcVar8;
  void *pvVar9;
  nothrow_t *pnVar10;
  _iobuf *_DstBuf;
  char *local_98;
  GameLogic *local_94;
  _iobuf local_90;
  void *local_8c [5];
  uint local_78;
  void *local_74;
  undefined4 local_64;
  uint local_60;
  char ***local_5c [5];
  uint local_48;
  LPCSTR **local_44 [4];
  undefined4 local_34;
  uint local_30;
  LPCSTR **local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005beac1;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  OSInterface::getSaveDirectory();
  // [seh] local_8 = 0;
  pcVar3 = (char *)strUsingArgs((char *)local_8c);
  // [seh] local_8._0_1_ = 1;
  pcVar8 = pcVar3;
  if (0xf < *(uint *)(pcVar3 + 0x14)) {
    pcVar8 = *(char **)pcVar3;
  }
  ghidra::str::append((std::string *)local_5c,pcVar8,*(uint *)(pcVar3 + 0x10));
  // [seh] local_8._0_1_ = 0;
  if (0xf < local_78) {
    pnVar10 = (nothrow_t *)(local_78 + 1);
    pvVar9 = local_8c[0];
    if ((nothrow_t *)0xfff < pnVar10) {
      pvVar9 = *(void **)((int)local_8c[0] + -4);
      pnVar10 = (nothrow_t *)(local_78 + 0x24);
      if (0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar9,pnVar10);
  }
  ppppcVar4 = local_5c;
  if (0xf < local_48) {
    ppppcVar4 = (char ****)local_5c[0];
  }
  _File = fopen((char *)ppppcVar4,"rb");
  fread(&local_98,4,1,_File);
  if (local_98 == "nnette") {
    _DstBuf = &local_90;
    fread(_DstBuf,4,1,_File);
    readLengthString(_DstBuf);
    // [seh] local_8 = CONCAT31(local_8._1_3_,2);
    debugPrint("SAVEHANDLER","Scenario: %s");
    local_94 = g_gameLogic;
    pSVar5 = *(SaveMetaData **)(this + *(int *)(g_gameLogic + 0x74) * 4);
    this_00 = extraout_ECX;
    if (pSVar5 != (SaveMetaData *)0x0) {
      (pSVar5)->~SaveMetaData();
      operator_delete(pSVar5,(nothrow_t *)0x108);
      this_00 = extraout_ECX_00;
    }
    pGVar2 = g_gameLogic;
    pSVar5 = unpackMetaData(this_00,(_iobuf *)_File);
    *(SaveMetaData **)(this + *(int *)(pGVar2 + 0x74) * 4) = pSVar5;
    ghidra::str::ctor
              ((std::string *)&stack0xffffff40,
               (std::string *)(*(int *)(this + *(int *)(pGVar2 + 0x74) * 4) + 0x94));
    ((DateTime *)(g_gameLogic + 0x17c))->setFromString();
    debugPrint("SAVEHANDLER","Save game version %d (OiS Version %s) located in file %s...");
    switch(local_90._Placeholder) {
    case (void *)0x6:
      loadGameV6(this_01,(_iobuf *)_File);
      break;
    case (void *)0x7:
      loadGameV7(this_01,(_iobuf *)_File);
      break;
    case (void *)0x8:
      loadGameV8(this_01,(_iobuf *)_File);
      break;
    case (void *)0x9:
      loadGameV9(this_01,(_iobuf *)_File);
      break;
    case (void *)0xa:
      loadGameV10(this_01,(_iobuf *)_File);
      break;
    case (void *)0xb:
      loadGameV11(this_01,(_iobuf *)_File);
      break;
    case (void *)0xc:
      loadGameV12(this,(_iobuf *)_File);
      break;
    default:
      debugPrint("SAVEHANDLER","Unknown save version. Cancelling load.");
    }
    fclose(_File);
    iVar1 = *(int *)(this + *(int *)(g_gameLogic + 0x74) * 4);
    pbVar6 = (std::string *)(iVar1 + 0x30);
    if ((std::string *)(*(int *)(g_gameData + 0x124) + 4) != pbVar6) {
      if (0xf < *(uint *)(iVar1 + 0x44)) {
        pbVar6 = *(std::string **)pbVar6;
      }
      ghidra::str::assign
                ((std::string *)(*(int *)(g_gameData + 0x124) + 4),(char *)pbVar6,
                 *(uint *)(iVar1 + 0x40));
    }
    iVar1 = *(int *)(g_gameData + 0x124);
    pbVar6 = (std::string *)(iVar1 + 4);
    if ((std::string *)(g_gameData + 0xf4) != pbVar6) {
      if (0xf < *(uint *)(iVar1 + 0x18)) {
        pbVar6 = *(std::string **)pbVar6;
      }
      ghidra::str::assign
                ((std::string *)(g_gameData + 0xf4),(char *)pbVar6,*(uint *)(iVar1 + 0x14));
    }
    iVar1 = *(int *)(g_gameData + 0xd0);
    pbVar6 = (std::string *)(iVar1 + 8);
    if ((std::string *)(g_gameData + 0x10c) != pbVar6) {
      if (0xf < *(uint *)(iVar1 + 0x1c)) {
        pbVar6 = *(std::string **)pbVar6;
      }
      ghidra::str::assign
                ((std::string *)(g_gameData + 0x10c),(char *)pbVar6,*(uint *)(iVar1 + 0x18));
    }
    debugPrint("SAVEHANDLER","Game loaded.");
    debugPrint("SAVEHANDLER","Backing up successfully loaded game...");
    OSInterface::getSaveDirectory();
    // [seh] local_8._0_1_ = 3;
    pcVar3 = (char *)strUsingArgs((char *)local_8c);
    // [seh] local_8._0_1_ = 4;
    pcVar8 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar8 = *(char **)pcVar3;
    }
    ghidra::str::append((std::string *)local_44,pcVar8,*(uint *)(pcVar3 + 0x10));
    // [seh] local_8._0_1_ = 3;
    if (0xf < local_78) {
      pnVar10 = (nothrow_t *)(local_78 + 1);
      pvVar9 = local_8c[0];
      if ((nothrow_t *)0xfff < pnVar10) {
        pvVar9 = *(void **)((int)local_8c[0] + -4);
        pnVar10 = (nothrow_t *)(local_78 + 0x24);
        if (0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar9,pnVar10);
    }
    OSInterface::getSaveDirectory();
    // [seh] local_8._0_1_ = 5;
    pcVar3 = (char *)strUsingArgs((char *)local_8c);
    // [seh] local_8._0_1_ = 6;
    pcVar8 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar8 = *(char **)pcVar3;
    }
    ghidra::str::append((std::string *)local_2c,pcVar8,*(uint *)(pcVar3 + 0x10));
    // [seh] local_8._0_1_ = 5;
    if (0xf < local_78) {
      pnVar10 = (nothrow_t *)(local_78 + 1);
      pvVar9 = local_8c[0];
      if ((nothrow_t *)0xfff < pnVar10) {
        pvVar9 = *(void **)((int)local_8c[0] + -4);
        pnVar10 = (nothrow_t *)(local_78 + 0x24);
        if (0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar9,pnVar10);
    }
    ppppCVar7 = local_2c;
    if (0xf < local_18) {
      ppppCVar7 = (LPCSTR ***)local_2c[0];
    }
    DeleteFileA((LPCSTR)ppppCVar7);
    ppppCVar7 = local_2c;
    if (0xf < local_18) {
      ppppCVar7 = (LPCSTR ***)local_2c[0];
    }
    lpExistingFileName = local_44;
    if (0xf < local_30) {
      lpExistingFileName = (LPCSTR ***)local_44[0];
    }
    CopyFileA((LPCSTR)lpExistingFileName,(LPCSTR)ppppCVar7,0);
    debugPrint("SAVEHANDLER","Backed up to \'%s\'");
    if (0xf < local_18) {
      pnVar10 = (nothrow_t *)(local_18 + 1);
      ppppCVar7 = (LPCSTR ***)local_2c[0];
      if ((nothrow_t *)0xfff < pnVar10) {
        ppppCVar7 = (LPCSTR ***)local_2c[0][-1];
        pnVar10 = (nothrow_t *)(local_18 + 0x24);
        if ((LPCSTR)0x1f < (LPCSTR)((int)local_2c[0] + (-4 - (int)ppppCVar7))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(ppppCVar7,pnVar10);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (LPCSTR **)((uint)local_2c[0] & 0xffffff00);
    if (0xf < local_30) {
      pnVar10 = (nothrow_t *)(local_30 + 1);
      ppppCVar7 = (LPCSTR ***)local_44[0];
      if ((nothrow_t *)0xfff < pnVar10) {
        ppppCVar7 = (LPCSTR ***)local_44[0][-1];
        pnVar10 = (nothrow_t *)(local_30 + 0x24);
        if ((LPCSTR)0x1f < (LPCSTR)((int)local_44[0] + (-4 - (int)ppppCVar7))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(ppppCVar7,pnVar10);
    }
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (LPCSTR **)((uint)local_44[0] & 0xffffff00);
    if (0xf < local_60) {
      pnVar10 = (nothrow_t *)(local_60 + 1);
      pvVar9 = local_74;
      if ((nothrow_t *)0xfff < pnVar10) {
        pvVar9 = *(void **)((int)local_74 + -4);
        pnVar10 = (nothrow_t *)(local_60 + 0x24);
        if (0x1f < (uint)((int)local_74 + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar9,pnVar10);
    }
    local_64 = 0;
    local_60 = 0xf;
    local_74 = (void *)((uint)local_74 & 0xffffff00);
  }
  if (0xf < local_48) {
    pnVar10 = (nothrow_t *)(local_48 + 1);
    ppppcVar4 = (char ****)local_5c[0];
    if ((nothrow_t *)0xfff < pnVar10) {
      ppppcVar4 = (char ****)local_5c[0][-1];
      pnVar10 = (nothrow_t *)(local_48 + 0x24);
      if ((char *)0x1f < (char *)((int)local_5c[0] + (-4 - (int)ppppcVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppcVar4,pnVar10);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall SaveHandler::saveGame(SaveHandler *this)
void SaveHandler::saveGame()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff74[1] = {0};  // [pseudo] address of an unnamed stack slot
  FILE *_File;
  char *pcVar1;
  LPCSTR ***ppppCVar2;
  char ****ppppcVar3;
  Stats *this_00;
  SaveHandler *this_01;
  SaveHandler *this_02;
  char *pcVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  char *local_64;
  int local_60;
  void *local_5c [5];
  uint local_48;
  LPCSTR **local_44 [4];
  undefined4 local_34;
  uint local_30;
  char ***local_2c [5];
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005beb08;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  if (((*(int *)(g_gameData + 0xd0) == 0) || (*(int *)(g_gameData + 0xcc) == 0)) ||
     (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) != 2)) {
    debugPrint("SAVEHANDLER","Game not loaded; not saving.");
  }
  else {
    OSInterface::getSaveDirectory();
    // [seh] local_8 = 0;
    ghidra::str::append((std::string *)local_2c,"temp.sav",8);
    ppppcVar3 = local_2c;
    if (0xf < local_18) {
      ppppcVar3 = (char ****)local_2c[0];
    }
    _File = fopen((char *)ppppcVar3,"wb");
    if (_File == (FILE *)0x0) {
      debugPrint("ERROR","trying to open %s for writing.");
    }
    else {
      debugPrint("SAVEHANDLER","Writing game state to %s...");
      local_64 = "nnette";
      local_60 = 0xc;
      fwrite(&local_64,4,1,_File);
      fwrite(&local_60,4,1,_File);
      ghidra::str::ctor
                ((std::string *)&stack0xffffff74,*(std::string **)(g_gameData + 0xcc));
      writeLengthString();
      packMetaData(this_01,(_iobuf *)_File);
      if (local_60 == 0xc) {
        saveGameV12(this_02,(_iobuf *)_File);
      }
      else {
        debugPrint("SAVEHANDLER","Unknown save version. Cancelling load.");
      }
      fclose(_File);
      debugPrint("SAVEHANDLER","Game saved to temp file. Renaming.");
      OSInterface::getSaveDirectory();
      // [seh] local_8._0_1_ = 1;
      pcVar1 = (char *)strUsingArgs((char *)local_5c);
      // [seh] local_8._0_1_ = 2;
      pcVar4 = pcVar1;
      if (0xf < *(uint *)(pcVar1 + 0x14)) {
        pcVar4 = *(char **)pcVar1;
      }
      ghidra::str::append((std::string *)local_44,pcVar4,*(uint *)(pcVar1 + 0x10));
      // [seh] local_8 = CONCAT31(local_8._1_3_,1);
      if (0xf < local_48) {
        pnVar6 = (nothrow_t *)(local_48 + 1);
        pvVar5 = local_5c[0];
        if ((nothrow_t *)0xfff < pnVar6) {
          pvVar5 = *(void **)((int)local_5c[0] + -4);
          pnVar6 = (nothrow_t *)(local_48 + 0x24);
          if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar5,pnVar6);
      }
      ppppCVar2 = local_44;
      if (0xf < local_30) {
        ppppCVar2 = (LPCSTR ***)local_44[0];
      }
      DeleteFileA((LPCSTR)ppppCVar2);
      ppppCVar2 = local_44;
      if (0xf < local_30) {
        ppppCVar2 = (LPCSTR ***)local_44[0];
      }
      ppppcVar3 = local_2c;
      if (0xf < local_18) {
        ppppcVar3 = (char ****)local_2c[0];
      }
      rename((char *)ppppcVar3,(char *)ppppCVar2);
      debugPrint("SAVEHANDLER","Renamed.");
      this_00 = Singleton<Stats>::getInstance();
      (this_00)->storeStats();
      if (0xf < local_30) {
        pnVar6 = (nothrow_t *)(local_30 + 1);
        ppppCVar2 = (LPCSTR ***)local_44[0];
        if ((nothrow_t *)0xfff < pnVar6) {
          ppppCVar2 = (LPCSTR ***)local_44[0][-1];
          pnVar6 = (nothrow_t *)(local_30 + 0x24);
          if ((LPCSTR)0x1f < (LPCSTR)((int)local_44[0] + (-4 - (int)ppppCVar2))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppCVar2,pnVar6);
      }
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (LPCSTR **)((uint)local_44[0] & 0xffffff00);
    }
    if (0xf < local_18) {
      pnVar6 = (nothrow_t *)(local_18 + 1);
      ppppcVar3 = (char ****)local_2c[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        ppppcVar3 = (char ****)local_2c[0][-1];
        pnVar6 = (nothrow_t *)(local_18 + 0x24);
        if ((char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar3))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(ppppcVar3,pnVar6);
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __cdecl SaveHandler::writeLengthString(undefined4 *param_1)
void SaveHandler::writeLengthString(undefined4 * param_1)

{
  undefined4 *puVar1;
  FILE *in_ECX;
  nothrow_t *pnVar2;
  int iVar3;
  int in_stack_00000014;
  uint in_stack_00000018;
  int local_c;
  undefined1 local_5;
  
  local_c = in_stack_00000014;
  fwrite(&local_c,4,1,in_ECX);
  iVar3 = 0;
  local_5 = 0;
  if (0 < local_c) {
    do {
      puVar1 = &param_1;
      if (0xf < in_stack_00000018) {
        puVar1 = param_1;
      }
      local_5 = *(undefined1 *)((int)puVar1 + iVar3);
      fwrite(&local_5,1,1,in_ECX);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_c);
  }
  if (0xf < in_stack_00000018) {
    pnVar2 = (nothrow_t *)(in_stack_00000018 + 1);
    puVar1 = param_1;
    if ((nothrow_t *)0xfff < pnVar2) {
      puVar1 = (undefined4 *)param_1[-1];
      pnVar2 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)puVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(puVar1,pnVar2);
  }
  return;
}


// Ghidra: void __cdecl SaveHandler::readLengthString(_iobuf *param_1)
void SaveHandler::readLengthString(_iobuf * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char *pcVar1;
  std::string *in_ECX;
  char *pcVar2;
  void *pvVar3;
  FILE *in_EDX;
  nothrow_t *pnVar4;
  int iVar5;
  int local_34;
  char local_2d;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  uint local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005beb51;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_34 = 0;
  fread(&local_34,4,1,in_EDX);
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0xf;
  *in_ECX = (std::string)0x0;
  // [seh] local_8 = 0;
  iVar5 = 0;
  if (0 < local_34) {
    do {
      fread(&local_2d,1,1,in_EDX);
      pcVar1 = (char *)strUsingArgs((char *)local_2c,"%c",(int)local_2d);
      // [seh] local_8 = 1;
      pcVar2 = pcVar1;
      if (0xf < *(uint *)(pcVar1 + 0x14)) {
        pcVar2 = *(char **)pcVar1;
      }
      ghidra::str::append(in_ECX,pcVar2,*(uint *)(pcVar1 + 0x10));
      // [seh] local_8 = local_8 & 0xffffff00;
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
        operator_delete(pvVar3,pnVar4);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_34);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall SaveHandler::saveGameV12(SaveHandler *this,_iobuf *param_1)
void SaveHandler::saveGameV12(_iobuf * param_1)

{
  char stack0xffffffc0[1] = {0};  // [pseudo] address of an unnamed stack slot
  undefined4 *puVar1;
  undefined4 *puVar2;
  GameLogic *_Str;
  int iVar3;
  Bounty *unaff_ESI;
  uint uVar4;
  int iVar5;
  _iobuf *unaff_EDI;
  _iobuf *_Str_00;
  Ship *pSVar6;
  int local_18;
  undefined4 *local_14;
  _iobuf local_10 [3];
  
  fwrite(g_gameLogic + 0xa8,4,1,(FILE *)param_1);
  fwrite(g_gameLogic + 0xc4,4,1,(FILE *)param_1);
  fwrite(g_gameLogic + 0x11c,1,1,(FILE *)param_1);
  fwrite(g_gameLogic + 0x11b,1,1,(FILE *)param_1);
  _Str = g_gameLogic + 0x11d;
  fwrite(_Str,1,1,(FILE *)param_1);
  V12::saveFlags((_iobuf *)_Str);
  pSVar6 = (Ship *)&DAT_00000004;
  local_10[0]._Placeholder = *(void **)(*(int *)(g_gameData + 0x124) + 0x1c);
  _Str_00 = local_10;
  fwrite(_Str_00,4,1,(FILE *)param_1);
  V12::saveShip(_Str_00,pSVar6);
  fwrite(&_DstBuf_0065d514,4,1,(FILE *)param_1);
  fwrite(&_DstBuf_0065d520,4,1,(FILE *)param_1);
  V12::saveStats(unaff_EDI);
  V12::saveSpaceStationStates(unaff_EDI);
  V12::savePlayerContracts(unaff_EDI);
  local_18 = *(int *)(g_gameData + 0x134) - *(int *)(g_gameData + 0x130) >> 2;
  fwrite(&local_18,4,1,(FILE *)param_1);
  uVar4 = 0;
  if (*(int *)(g_gameData + 0x134) - *(int *)(g_gameData + 0x130) >> 2 != 0) {
    do {
      V12::writeBounty(unaff_EDI,unaff_ESI);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(*(int *)(g_gameData + 0x134) - *(int *)(g_gameData + 0x130) >> 2));
  }
  debugPrint("SAVEHANDLER","...saved %d current bounties for the player");
  V12::writeCargo(unaff_EDI,(CargoHold *)unaff_ESI);
  V12::saveEmails(unaff_EDI);
  V12::saveFogOfWarState(unaff_EDI);
  local_18 = (*(int *)(g_gameData + 0x14c) - *(int *)(g_gameData + 0x148)) / 0x18;
  fwrite(&local_18,4,1,(FILE *)param_1);
  iVar3 = 0;
  if (0 < local_18) {
    iVar5 = 0;
    do {
      ghidra::str::ctor
                ((std::string *)&stack0xffffffc0,
                 (std::string *)(*(int *)(g_gameData + 0x148) + iVar5));
      writeLengthString();
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x18;
    } while (iVar3 < local_18);
  }
  debugPrint("SAVEHANDLER","Saved %d completed synthetics");
  local_10[0]._Placeholder = *(void **)(g_gameLogic + 0x4c);
  fwrite(local_10,4,1,(FILE *)param_1);
  puVar1 = *(undefined4 **)(g_gameLogic + 0x48);
  puVar2 = (undefined4 *)*puVar1;
  while (local_14 = puVar2, puVar2 != puVar1) {
    ghidra::str::ctor
              ((std::string *)&stack0xffffffc0,(std::string *)(puVar2 + 4));
    writeLengthString();
    local_18 = puVar2[10];
    fwrite(&local_18,4,1,(FILE *)param_1);
    debugPrint("SAVEHANDLER","...saved rego %s with state %d");
    ghidra::lib::_Tree_unchecked_const_iterator__operator_x2b_x2b((ghidra::lib::_Tree_unchecked_const_iterator_t *)&local_14)
    ;
    puVar2 = local_14;
  }
  debugPrint("SAVEHANDLER","Saved %d completed ship instance states");
  V12::saveFactionStates(unaff_EDI);
  local_18 = *(int *)(g_gameData + 0xa0) - *(int *)(g_gameData + 0x9c) >> 2;
  fwrite(&local_18,4,1,(FILE *)param_1);
  iVar3 = 0;
  if (0 < local_18) {
    do {
      iVar5 = iVar3 * 4;
      ghidra::str::ctor
                ((std::string *)&stack0xffffffc0,
                 *(std::string **)(*(int *)(g_gameData + 0x9c) + iVar5));
      writeLengthString();
      fwrite((void *)(*(int *)(*(int *)(g_gameData + 0x9c) + iVar5) + 0x18),1,1,(FILE *)param_1);
      fwrite((void *)(*(int *)(*(int *)(g_gameData + 0x9c) + iVar5) + 0x19),1,1,(FILE *)param_1);
      debugPrint("SAVEHANDLER","..state %s saved");
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_18);
  }
  debugPrint("SAVEHANDLER","..saved %d game states");
  V12::savePassenger(unaff_EDI);
  return;
}


// Ghidra: void __thiscall SaveHandler::loadGameV12(SaveHandler *this,_iobuf *param_1)
void SaveHandler::loadGameV12(_iobuf * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  AnimationFrames **ppAVar1;
  std::string *pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  GameData *pGVar6;
  std::string *pbVar7;
  Ship *pSVar8;
  CargoHold *pCVar9;
  std::string *pbVar10;
  int *piVar11;
  undefined4 ****ppppuVar12;
  GameLogic *pGVar13;
  GameLogic *this_00;
  std::string *extraout_ECX;
  uint uVar14;
  std::string *pbVar15;
  nothrow_t *pnVar16;
  undefined4 *puVar17;
  int iVar18;
  code *pcVar19;
  uint uVar20;
  ghidra::lib::allocator_t *unaff_EDI;
  _iobuf *p_Var21;
  char *pcVar22;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  _iobuf *local_58;
  code *local_54;
  std::string *local_50;
  undefined1 local_49;
  SaveHandler *local_48;
  AnimationFrames *local_44;
  undefined4 *local_40;
  undefined4 ***local_3c [5];
  uint local_28;
  std::string *local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005beb90;
  // [seh] local_1c = ExceptionList;
  // [cookie] pbVar7 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  local_58 = param_1;
  local_54 = fread_exref;
  local_48 = this;
  local_24 = pbVar7;
  fread(&local_44,4,1,(FILE *)param_1);
  fread(&local_40,4,1,(FILE *)param_1);
  fread(g_gameLogic + 0x11c,1,1,(FILE *)param_1);
  fread(g_gameLogic + 0x11b,1,1,(FILE *)param_1);
  fread(g_gameLogic + 0x11d,1,1,(FILE *)param_1);
  pGVar13 = g_gameLogic;
  *(AnimationFrames **)(g_gameLogic + 0xa8) = local_44;
  local_50 = (std::string *)(pGVar13 + 0xac);
  pbVar15 = (std::string *)(&combatDiffStr + (int)local_44 * 6);
  if (local_50 != pbVar15) {
    if (0xf < *(uint *)(&DAT_006575ac + (int)local_44 * 0x18)) {
      pbVar15 = *(std::string **)pbVar15;
    }
    ghidra::str::assign
              (local_50,(char *)pbVar15,*(uint *)(&DAT_006575a8 + (int)local_44 * 0x18));
    pGVar13 = g_gameLogic;
  }
  *(undefined4 **)(pGVar13 + 0xc4) = local_40;
  pbVar15 = (std::string *)(&economyDiffStr + (int)local_40 * 6);
  if ((std::string *)(pGVar13 + 200) != pbVar15) {
    if (0xf < *(uint *)(&DAT_00657624 + (int)local_40 * 0x18)) {
      pbVar15 = *(std::string **)pbVar15;
    }
    ghidra::str::assign
              ((std::string *)(pGVar13 + 200),(char *)pbVar15,
               *(uint *)(&DAT_00657620 + (int)local_40 * 0x18));
  }
  V7::loadFlags((_iobuf *)pbVar7);
  fread(&local_44,4,1,(FILE *)param_1);
  *(AnimationFrames **)(*(int *)(g_gameData + 0x124) + 0x1c) = local_44;
  pSVar8 = V12::loadShip((_iobuf *)pbVar7);
  *(Ship **)(g_gameData + 0xd0) = pSVar8;
  iVar18 = *(int *)(local_48 + *(int *)(g_gameLogic + 0x74) * 4);
  pbVar15 = (std::string *)(iVar18 + 0x30);
  if ((std::string *)(pSVar8 + 0x80) != pbVar15) {
    if (0xf < *(uint *)(iVar18 + 0x44)) {
      pbVar15 = *(std::string **)pbVar15;
    }
    ghidra::str::assign
              ((std::string *)(pSVar8 + 0x80),(char *)pbVar15,*(uint *)(iVar18 + 0x40));
  }
  fread(&_DstBuf_0065d514,4,1,(FILE *)param_1);
  fread(&_DstBuf_0065d520,4,1,(FILE *)param_1);
  pGVar6 = g_gameData;
  *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1a4) = 0;
  *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x1a0) = 0xffffffff;
  *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x19c) = 0;
  *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x198) = 0xffffffff;
  *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x194) = 0;
  *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 400) = 0xffffffff;
  *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x1ac) = 0;
  *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x1a8) = 0xffffffff;
  V8::loadStats((_iobuf *)pbVar7);
  V12::loadSpaceStationStates((_iobuf *)pbVar7);
  V12::loadPlayerContracts((_iobuf *)pbVar7);
  (this_00)->clearPlayerBounties();
  local_40 = (undefined4 *)0x0;
  fread(&local_40,4,1,(FILE *)param_1);
  iVar18 = 0;
  if (0 < (int)local_40) {
    do {
      local_44 = (AnimationFrames *)V8::readBounty((_iobuf *)pbVar7);
      pGVar6 = g_gameData;
      if (local_44 != (AnimationFrames *)0x0) {
        ppAVar1 = *(AnimationFrames ***)(g_gameData + 0x134);
        if (*(AnimationFrames ***)(g_gameData + 0x138) == ppAVar1) {
          ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(g_gameData + 0x130),ppAVar1,&local_44);
        }
        else {
          *ppAVar1 = local_44;
          *(int *)(pGVar6 + 0x134) = *(int *)(pGVar6 + 0x134) + 4;
        }
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < (int)local_40);
  }
  debugPrint("SAVEHANDLER","...loaded %d current bounties for the player",local_40);
  pCVar9 = *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8);
  if (pCVar9 != (CargoHold *)0x0) {
    CargoHold::_scalar_deleting_destructor_(pCVar9,(uint)pCVar9);
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1f8) = 0;
  }
  pCVar9 = V12::readCargo((_iobuf *)pbVar7);
  *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8) = pCVar9;
  V9::loadEmails((_iobuf *)pbVar7);
  V9::loadFogOfWarState((_iobuf *)pbVar7);
  pGVar6 = g_gameData;
  ghidra::lib::_Destroy_range___x28_x29(extraout_ECX,pbVar7,unaff_EDI);
  *(undefined4 *)(pGVar6 + 0x14c) = *(undefined4 *)(pGVar6 + 0x148);
  (*local_54)(&local_40,4,1,param_1);
  iVar18 = 0;
  if (0 < (int)local_40) {
    do {
      pbVar10 = (std::string *)readLengthString((_iobuf *)pbVar7);
      pGVar6 = g_gameData;
      local_14 = 0;
      pbVar2 = *(std::string **)(g_gameData + 0x14c);
      if (*(std::string **)(g_gameData + 0x150) == pbVar2) {
        ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(g_gameData + 0x148),pbVar2,pbVar10);
      }
      else {
        *(undefined4 *)(pbVar2 + 0x10) = 0;
        *(undefined4 *)(pbVar2 + 0x14) = 0;
        uVar3 = *(undefined4 *)(pbVar10 + 4);
        uVar4 = *(undefined4 *)(pbVar10 + 8);
        uVar5 = *(undefined4 *)(pbVar10 + 0xc);
        *(undefined4 *)pbVar2 = *(undefined4 *)pbVar10;
        *(undefined4 *)(pbVar2 + 4) = uVar3;
        *(undefined4 *)(pbVar2 + 8) = uVar4;
        *(undefined4 *)(pbVar2 + 0xc) = uVar5;
        uVar3 = *(undefined4 *)(pbVar10 + 0x14);
        *(undefined4 *)(pbVar2 + 0x10) = *(undefined4 *)(pbVar10 + 0x10);
        *(undefined4 *)(pbVar2 + 0x14) = uVar3;
        *(undefined4 *)(pbVar10 + 0x10) = 0;
        *(undefined4 *)(pbVar10 + 0x14) = 0xf;
        *pbVar10 = (std::string)0x0;
        *(int *)(pGVar6 + 0x14c) = *(int *)(pGVar6 + 0x14c) + 0x18;
      }
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar16 = (nothrow_t *)(local_28 + 1);
        ppppuVar12 = (undefined4 ****)local_3c[0];
        if ((nothrow_t *)0xfff < pnVar16) {
          ppppuVar12 = (undefined4 ****)local_3c[0][-1];
          pnVar16 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)ppppuVar12))) goto LAB_004b9603;
        }
        operator_delete(ppppuVar12,pnVar16);
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < (int)local_40);
  }
  debugPrint("SAVEHANDLER","Loaded %d completed synthetics",local_40);
  pGVar13 = g_gameLogic;
  local_14 = 1;
  iVar18 = *(int *)(g_gameLogic + 0x48);
  ghidra::lib::_Tree___Erase((ghidra::lib::_Tree_t *)(g_gameLogic + 0x48),*(ghidra::lib::_Tree_node_t **)(iVar18 + 4));
  pcVar19 = local_54;
  p_Var21 = local_58;
  *(int *)(*(int *)(pGVar13 + 0x48) + 4) = iVar18;
  **(int **)(pGVar13 + 0x48) = iVar18;
  local_14 = 0xffffffff;
  *(int *)(*(int *)(pGVar13 + 0x48) + 8) = iVar18;
  *(undefined4 *)(pGVar13 + 0x4c) = 0;
  (*local_54)(&local_44,4,1,local_58);
  local_48 = (SaveHandler *)0x0;
  if (0 < (int)local_44) {
    do {
      readLengthString((_iobuf *)pbVar7);
      local_14 = 2;
      local_40 = (undefined4 *)0x0;
      (*pcVar19)(&local_40,4,1,p_Var21);
      piVar11 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)(g_gameLogic + 0x48),(std::string *)local_3c);
      *piVar11 = (int)local_40;
      ppppuVar12 = local_3c;
      if (0xf < local_28) {
        ppppuVar12 = (undefined4 ****)local_3c[0];
      }
      debugPrint("SAVEHANDLER","...loaded rego %s with state %d",ppppuVar12,local_40);
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar16 = (nothrow_t *)(local_28 + 1);
        ppppuVar12 = (undefined4 ****)local_3c[0];
        if ((nothrow_t *)0xfff < pnVar16) {
          ppppuVar12 = (undefined4 ****)local_3c[0][-1];
          pnVar16 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)ppppuVar12))) {
LAB_004b9603:
            local_14 = 0xffffffff;
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppuVar12,pnVar16);
      }
      local_48 = local_48 + 1;
    } while ((int)local_48 < (int)local_44);
  }
  debugPrint("SAVEHANDLER","Loaded %d completed ship instance states",local_44);
  local_48 = (SaveHandler *)0x0;
  (*pcVar19)(&local_48,4,1,p_Var21);
  local_44 = (AnimationFrames *)0x0;
  if (0 < (int)local_48) {
    do {
      (*pcVar19)(&local_50,4,1,p_Var21);
      (*pcVar19)(&local_49,1,1,p_Var21);
      (*pcVar19)(&local_5c,4,1,p_Var21);
      (*pcVar19)(&local_60,4,1,p_Var21);
      (*pcVar19)(&local_64,4,1,p_Var21);
      (*pcVar19)(&local_68,4,1,p_Var21);
      if (ghidra::Singleton<void>::instance == (FictionData *)0x0) {
        ghidra::Singleton<void>::instance = operator_new(0x18);
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
        *(undefined4 *)ghidra::Singleton<void>::instance = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 4) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 8) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0xc) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
      }
      uVar14 = 0;
      uVar20 = *(int *)(ghidra::Singleton<void>::instance + 4) - *(int *)ghidra::Singleton<void>::instance >> 2;
      if (uVar20 != 0) {
        local_40 = *(undefined4 **)ghidra::Singleton<void>::instance;
        puVar17 = local_40;
        do {
          p_Var21 = local_58;
          if (*(std::string **)*puVar17 == local_50) {
            iVar18 = local_40[uVar14];
            if (iVar18 != 0) {
              *(undefined1 *)(iVar18 + 0xe0) = local_49;
              *(undefined4 *)(iVar18 + 0xd8) = local_5c;
              *(undefined4 *)(iVar18 + 0xd4) = local_60;
              *(undefined4 *)(iVar18 + 0xd0) = local_64;
              *(undefined4 *)(iVar18 + 0xdc) = local_68;
              pbVar15 = (std::string *)(iVar18 + 8);
              if (0xf < *(uint *)(iVar18 + 0x1c)) {
                pbVar15 = *(std::string **)pbVar15;
              }
              pcVar22 = "..faction %s loaded";
              goto LAB_004b95a0;
            }
            break;
          }
          uVar14 = uVar14 + 1;
          puVar17 = puVar17 + 1;
        } while (uVar14 < uVar20);
      }
      pcVar22 = "Invalid faction \'%d\' loaded";
      pbVar15 = local_50;
LAB_004b95a0:
      debugPrint("SAVEHANDLER",pcVar22,pbVar15);
      local_44 = local_44 + 1;
      pcVar19 = local_54;
    } while ((int)local_44 < (int)local_48);
  }
  debugPrint("SAVEHANDLER","..loaded %d faction states",local_48);
  V10::loadStatesActive((_iobuf *)pbVar7);
  V11::loadPassenger((_iobuf *)pbVar7);
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// Ghidra: void __thiscall SaveHandler::loadGameV6(SaveHandler *this,_iobuf *param_1)
void SaveHandler::loadGameV6(_iobuf * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff70[1] = {0};  // [pseudo] address of an unnamed stack slot
  MetaGameAction **ppMVar1;
  AnimationFrames **ppAVar2;
  std::string *pbVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  GameLogic *pGVar8;
  GameData *pGVar9;
  std::string *pbVar10;
  FlagManager *pFVar11;
  CargoHold *pCVar12;
  std::string *pbVar13;
  int *piVar14;
  GameLogic *this_00;
  GameLogic *this_01;
  std::string *extraout_ECX;
  void *pvVar15;
  uint uVar16;
  nothrow_t *pnVar17;
  undefined4 *puVar18;
  int iVar19;
  code *pcVar20;
  uint uVar21;
  ghidra::lib::allocator_t *unaff_EDI;
  _iobuf *p_Var22;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  _iobuf *local_54;
  code *local_50;
  int local_4c;
  undefined1 local_45;
  _iobuf local_44;
  undefined4 *local_40;
  void *local_3c [5];
  uint local_28;
  std::string *local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  uint local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005bf160;
  // [seh] local_1c = ExceptionList;
  // [cookie] pbVar10 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  local_54 = param_1;
  local_24 = pbVar10;
  V7::loadFlags((_iobuf *)pbVar10);
  pcVar20 = fread_exref;
  p_Var22 = &local_44;
  local_50 = fread_exref;
  fread(p_Var22,4,1,(FILE *)param_1);
  *(void **)(*(int *)(g_gameData + 0x124) + 0x1c) = local_44._Placeholder;
  V7::loadShips(p_Var22);
  fread(&_DstBuf_0065d514,4,1,(FILE *)param_1);
  fread(&_DstBuf_0065d520,4,1,(FILE *)param_1);
  pGVar9 = g_gameData;
  *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1a4) = 0;
  *(undefined4 *)(*(int *)(pGVar9 + 0xd0) + 0x1a0) = 0xffffffff;
  *(undefined4 *)(*(int *)(pGVar9 + 0xd0) + 0x19c) = 0;
  *(undefined4 *)(*(int *)(pGVar9 + 0xd0) + 0x198) = 0xffffffff;
  *(undefined4 *)(*(int *)(pGVar9 + 0xd0) + 0x194) = 0;
  *(undefined4 *)(*(int *)(pGVar9 + 0xd0) + 400) = 0xffffffff;
  *(undefined4 *)(*(int *)(pGVar9 + 0xd0) + 0x1ac) = 0;
  *(undefined4 *)(*(int *)(pGVar9 + 0xd0) + 0x1a8) = 0xffffffff;
  V8::loadStats((_iobuf *)pbVar10);
  V6::loadSpaceStationStates((_iobuf *)pbVar10);
  (this_00)->clearPlayerContracts();
  local_40 = (undefined4 *)0x0;
  fread(&local_40,4,1,(FILE *)param_1);
  if (0 < (int)local_40) {
    iVar19 = 0;
    do {
      local_44._Placeholder = V8::readContract((_iobuf *)pbVar10);
      pGVar9 = g_gameData;
      if (local_44._Placeholder != (Contract *)0x0) {
        ppMVar1 = *(MetaGameAction ***)(g_gameData + 0x140);
        if (*(MetaGameAction ***)(g_gameData + 0x144) == ppMVar1) {
          ghidra::lib::vector___Emplace_reallocate
                    ((ghidra::vector *)(g_gameData + 0x13c),ppMVar1,&local_44._Placeholder);
        }
        else {
          *ppMVar1 = local_44._Placeholder;
          *(int *)(pGVar9 + 0x140) = *(int *)(pGVar9 + 0x140) + 4;
        }
      }
      iVar19 = iVar19 + 1;
      pcVar20 = local_50;
    } while (iVar19 < (int)local_40);
  }
  debugPrint("SAVEHANDLER","...loaded %d current contracts for the player");
  bVar4 = (int)local_40 < 1;
  if (bVar4) {
    local_44._Placeholder = &stack0xffffff70;
    ghidra::str::assign((std::string *)&stack0xffffff70,"has_contract",0xc);
  }
  else {
    local_44._Placeholder = &stack0xffffff70;
    ghidra::str::assign((std::string *)&stack0xffffff70,"has_contract",0xc);
  }
  local_14 = (uint)bVar4;
  pFVar11 = ghidra::any_singleton();
  local_14 = 0xffffffff;
  (pFVar11)->setFlag();
  (this_01)->clearPlayerBounties();
  local_40 = (undefined4 *)0x0;
  (*pcVar20)();
  iVar19 = 0;
  if (0 < (int)local_40) {
    do {
      local_44._Placeholder = V6::readBounty((_iobuf *)pbVar10);
      pGVar9 = g_gameData;
      if (local_44._Placeholder != (Bounty *)0x0) {
        ppAVar2 = *(AnimationFrames ***)(g_gameData + 0x134);
        if (*(AnimationFrames ***)(g_gameData + 0x138) == ppAVar2) {
          ghidra::lib::vector___Emplace_reallocate
                    ((ghidra::vector *)(g_gameData + 0x130),ppAVar2,&local_44._Placeholder);
        }
        else {
          *ppAVar2 = local_44._Placeholder;
          *(int *)(pGVar9 + 0x134) = *(int *)(pGVar9 + 0x134) + 4;
        }
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 < (int)local_40);
  }
  debugPrint("SAVEHANDLER","...loaded %d current bounties for the player");
  pCVar12 = *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8);
  if (pCVar12 != (CargoHold *)0x0) {
    CargoHold::_scalar_deleting_destructor_(pCVar12,(uint)pCVar12);
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1f8) = 0;
  }
  pCVar12 = V11::readCargo((_iobuf *)pbVar10);
  *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8) = pCVar12;
  V6::loadEmails((_iobuf *)pbVar10);
  V9::loadFogOfWarState((_iobuf *)pbVar10);
  pGVar9 = g_gameData;
  ghidra::lib::_Destroy_range___x28_x29(extraout_ECX,pbVar10,unaff_EDI);
  *(undefined4 *)(pGVar9 + 0x14c) = *(undefined4 *)(pGVar9 + 0x148);
  (*local_50)();
  iVar19 = 0;
  if (0 < (int)local_40) {
    do {
      pbVar13 = (std::string *)readLengthString((_iobuf *)pbVar10);
      pGVar9 = g_gameData;
      local_14 = 2;
      pbVar3 = *(std::string **)(g_gameData + 0x14c);
      if (*(std::string **)(g_gameData + 0x150) == pbVar3) {
        ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(g_gameData + 0x148),pbVar3,pbVar13);
      }
      else {
        *(undefined4 *)(pbVar3 + 0x10) = 0;
        *(undefined4 *)(pbVar3 + 0x14) = 0;
        uVar5 = *(undefined4 *)(pbVar13 + 4);
        uVar6 = *(undefined4 *)(pbVar13 + 8);
        uVar7 = *(undefined4 *)(pbVar13 + 0xc);
        *(undefined4 *)pbVar3 = *(undefined4 *)pbVar13;
        *(undefined4 *)(pbVar3 + 4) = uVar5;
        *(undefined4 *)(pbVar3 + 8) = uVar6;
        *(undefined4 *)(pbVar3 + 0xc) = uVar7;
        uVar5 = *(undefined4 *)(pbVar13 + 0x14);
        *(undefined4 *)(pbVar3 + 0x10) = *(undefined4 *)(pbVar13 + 0x10);
        *(undefined4 *)(pbVar3 + 0x14) = uVar5;
        *(undefined4 *)(pbVar13 + 0x10) = 0;
        *(undefined4 *)(pbVar13 + 0x14) = 0xf;
        *pbVar13 = (std::string)0x0;
        *(int *)(pGVar9 + 0x14c) = *(int *)(pGVar9 + 0x14c) + 0x18;
      }
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar17 = (nothrow_t *)(local_28 + 1);
        pvVar15 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar17) {
          pvVar15 = *(void **)((int)local_3c[0] + -4);
          pnVar17 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar15))) goto LAB_004c10d0;
        }
        operator_delete(pvVar15,pnVar17);
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 < (int)local_40);
  }
  debugPrint("SAVEHANDLER","Loaded %d completed synthetics");
  pGVar8 = g_gameLogic;
  local_14 = 3;
  iVar19 = *(int *)(g_gameLogic + 0x48);
  ghidra::lib::_Tree___Erase((ghidra::lib::_Tree_t *)(g_gameLogic + 0x48),*(ghidra::lib::_Tree_node_t **)(iVar19 + 4));
  pcVar20 = local_50;
  p_Var22 = local_54;
  *(int *)(*(int *)(pGVar8 + 0x48) + 4) = iVar19;
  **(int **)(pGVar8 + 0x48) = iVar19;
  local_14 = 0xffffffff;
  *(int *)(*(int *)(pGVar8 + 0x48) + 8) = iVar19;
  *(undefined4 *)(pGVar8 + 0x4c) = 0;
  (*local_50)();
  local_4c = 0;
  if (0 < (int)local_44._Placeholder) {
    do {
      readLengthString((_iobuf *)pbVar10);
      local_14 = 4;
      local_40 = (undefined4 *)0x0;
      (*pcVar20)();
      piVar14 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)(g_gameLogic + 0x48),(std::string *)local_3c);
      *piVar14 = (int)local_40;
      debugPrint("SAVEHANDLER","...loaded rego %s with state %d");
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar17 = (nothrow_t *)(local_28 + 1);
        pvVar15 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar17) {
          pvVar15 = *(void **)((int)local_3c[0] + -4);
          pnVar17 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar15))) {
LAB_004c10d0:
            local_14 = 0xffffffff;
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar15,pnVar17);
      }
      local_4c = local_4c + 1;
    } while (local_4c < (int)local_44._Placeholder);
  }
  debugPrint("SAVEHANDLER","Loaded %d completed ship instance states");
  local_4c = 0;
  (*pcVar20)();
  local_44._Placeholder = (void *)0x0;
  if (0 < local_4c) {
    do {
      (*pcVar20)();
      (*pcVar20)(&local_45);
      (*pcVar20)(&local_5c,4,1,p_Var22);
      (*pcVar20)(&local_60,4,1,p_Var22);
      (*pcVar20)();
      if (ghidra::Singleton<void>::instance == (FictionData *)0x0) {
        ghidra::Singleton<void>::instance = operator_new(0x18);
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
        *(undefined4 *)ghidra::Singleton<void>::instance = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 4) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 8) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0xc) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
      }
      uVar16 = 0;
      uVar21 = *(int *)(ghidra::Singleton<void>::instance + 4) - *(int *)ghidra::Singleton<void>::instance >> 2;
      if (uVar21 != 0) {
        local_40 = *(undefined4 **)ghidra::Singleton<void>::instance;
        puVar18 = local_40;
        do {
          p_Var22 = local_54;
          if (*(int *)*puVar18 == local_58) {
            iVar19 = local_40[uVar16];
            if (iVar19 != 0) {
              *(undefined1 *)(iVar19 + 0xe0) = local_45;
              *(undefined4 *)(iVar19 + 0xd8) = local_5c;
              *(undefined4 *)(iVar19 + 0xd4) = local_60;
              *(undefined4 *)(iVar19 + 0xd0) = local_64;
              goto LAB_004c107a;
            }
            break;
          }
          uVar16 = uVar16 + 1;
          puVar18 = puVar18 + 1;
        } while (uVar16 < uVar21);
      }
      debugPrint("SAVEHANDLER","Invalid faction \'%d\' loaded");
LAB_004c107a:
      local_44._Placeholder = local_44._Placeholder + 1;
      pcVar20 = local_50;
    } while ((int)local_44._Placeholder < local_4c);
  }
  debugPrint("SAVEHANDLER","..loaded %d faction states");
  V6::loadStatesActive((_iobuf *)pbVar10);
  V11::loadPassenger((_iobuf *)pbVar10);
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// Ghidra: void __thiscall SaveHandler::loadGameV7(SaveHandler *this,_iobuf *param_1)
void SaveHandler::loadGameV7(_iobuf * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff70[1] = {0};  // [pseudo] address of an unnamed stack slot
  MetaGameAction **ppMVar1;
  AnimationFrames **ppAVar2;
  std::string *pbVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  GameLogic *pGVar8;
  GameData *pGVar9;
  std::string *pbVar10;
  FlagManager *pFVar11;
  CargoHold *pCVar12;
  std::string *pbVar13;
  int *piVar14;
  GameLogic *this_00;
  GameLogic *this_01;
  std::string *extraout_ECX;
  void *pvVar15;
  uint uVar16;
  nothrow_t *pnVar17;
  undefined4 *puVar18;
  int iVar19;
  code *pcVar20;
  uint uVar21;
  ghidra::lib::allocator_t *unaff_EDI;
  _iobuf *p_Var22;
  char *pcVar23;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  _iobuf *local_54;
  code *local_50;
  int local_4c;
  undefined1 local_45;
  _iobuf local_44;
  undefined4 *local_40;
  void *local_3c [5];
  uint local_28;
  std::string *local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  uint local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005bf160;
  // [seh] local_1c = ExceptionList;
  // [cookie] pbVar10 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  local_54 = param_1;
  local_24 = pbVar10;
  V7::loadFlags((_iobuf *)pbVar10);
  pcVar20 = fread_exref;
  p_Var22 = &local_44;
  local_50 = fread_exref;
  fread(p_Var22,4,1,(FILE *)param_1);
  *(void **)(*(int *)(g_gameData + 0x124) + 0x1c) = local_44._Placeholder;
  V7::loadShips(p_Var22);
  fread(&_DstBuf_0065d514,4,1,(FILE *)param_1);
  fread(&_DstBuf_0065d520,4,1,(FILE *)param_1);
  pGVar9 = g_gameData;
  *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1a4) = 0;
  *(undefined4 *)(*(int *)(pGVar9 + 0xd0) + 0x1a0) = 0xffffffff;
  *(undefined4 *)(*(int *)(pGVar9 + 0xd0) + 0x19c) = 0;
  *(undefined4 *)(*(int *)(pGVar9 + 0xd0) + 0x198) = 0xffffffff;
  *(undefined4 *)(*(int *)(pGVar9 + 0xd0) + 0x194) = 0;
  *(undefined4 *)(*(int *)(pGVar9 + 0xd0) + 400) = 0xffffffff;
  *(undefined4 *)(*(int *)(pGVar9 + 0xd0) + 0x1ac) = 0;
  *(undefined4 *)(*(int *)(pGVar9 + 0xd0) + 0x1a8) = 0xffffffff;
  V8::loadStats((_iobuf *)pbVar10);
  V8::loadSpaceStationStates((_iobuf *)pbVar10);
  (this_00)->clearPlayerContracts();
  local_40 = (undefined4 *)0x0;
  fread(&local_40,4,1,(FILE *)param_1);
  if (0 < (int)local_40) {
    iVar19 = 0;
    do {
      local_44._Placeholder = V8::readContract((_iobuf *)pbVar10);
      pGVar9 = g_gameData;
      ppMVar1 = *(MetaGameAction ***)(g_gameData + 0x140);
      if (*(MetaGameAction ***)(g_gameData + 0x144) == ppMVar1) {
        ghidra::lib::vector___Emplace_reallocate
                  ((ghidra::vector *)(g_gameData + 0x13c),ppMVar1,&local_44._Placeholder);
      }
      else {
        *ppMVar1 = local_44._Placeholder;
        *(int *)(pGVar9 + 0x140) = *(int *)(pGVar9 + 0x140) + 4;
      }
      iVar19 = iVar19 + 1;
      pcVar20 = local_50;
    } while (iVar19 < (int)local_40);
  }
  debugPrint("SAVEHANDLER","...loaded %d current contracts for the player");
  bVar4 = (int)local_40 < 1;
  if (bVar4) {
    local_44._Placeholder = &stack0xffffff70;
    ghidra::str::assign((std::string *)&stack0xffffff70,"has_contract",0xc);
  }
  else {
    local_44._Placeholder = &stack0xffffff70;
    ghidra::str::assign((std::string *)&stack0xffffff70,"has_contract",0xc);
  }
  local_14 = (uint)bVar4;
  pFVar11 = ghidra::any_singleton();
  local_14 = 0xffffffff;
  (pFVar11)->setFlag();
  (this_01)->clearPlayerBounties();
  local_40 = (undefined4 *)0x0;
  (*pcVar20)();
  iVar19 = 0;
  if (0 < (int)local_40) {
    do {
      local_44._Placeholder = V6::readBounty((_iobuf *)pbVar10);
      pGVar9 = g_gameData;
      if (local_44._Placeholder != (Bounty *)0x0) {
        ppAVar2 = *(AnimationFrames ***)(g_gameData + 0x134);
        if (*(AnimationFrames ***)(g_gameData + 0x138) == ppAVar2) {
          ghidra::lib::vector___Emplace_reallocate
                    ((ghidra::vector *)(g_gameData + 0x130),ppAVar2,&local_44._Placeholder);
        }
        else {
          *ppAVar2 = local_44._Placeholder;
          *(int *)(pGVar9 + 0x134) = *(int *)(pGVar9 + 0x134) + 4;
        }
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 < (int)local_40);
  }
  debugPrint("SAVEHANDLER","...loaded %d current bounties for the player");
  pCVar12 = *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8);
  if (pCVar12 != (CargoHold *)0x0) {
    CargoHold::_scalar_deleting_destructor_(pCVar12,(uint)pCVar12);
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1f8) = 0;
  }
  pCVar12 = V11::readCargo((_iobuf *)pbVar10);
  *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8) = pCVar12;
  V7::loadEmails((_iobuf *)pbVar10);
  V9::loadFogOfWarState((_iobuf *)pbVar10);
  pGVar9 = g_gameData;
  ghidra::lib::_Destroy_range___x28_x29(extraout_ECX,pbVar10,unaff_EDI);
  *(undefined4 *)(pGVar9 + 0x14c) = *(undefined4 *)(pGVar9 + 0x148);
  (*local_50)();
  iVar19 = 0;
  if (0 < (int)local_40) {
    do {
      pbVar13 = (std::string *)readLengthString((_iobuf *)pbVar10);
      pGVar9 = g_gameData;
      local_14 = 2;
      pbVar3 = *(std::string **)(g_gameData + 0x14c);
      if (*(std::string **)(g_gameData + 0x150) == pbVar3) {
        ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(g_gameData + 0x148),pbVar3,pbVar13);
      }
      else {
        *(undefined4 *)(pbVar3 + 0x10) = 0;
        *(undefined4 *)(pbVar3 + 0x14) = 0;
        uVar5 = *(undefined4 *)(pbVar13 + 4);
        uVar6 = *(undefined4 *)(pbVar13 + 8);
        uVar7 = *(undefined4 *)(pbVar13 + 0xc);
        *(undefined4 *)pbVar3 = *(undefined4 *)pbVar13;
        *(undefined4 *)(pbVar3 + 4) = uVar5;
        *(undefined4 *)(pbVar3 + 8) = uVar6;
        *(undefined4 *)(pbVar3 + 0xc) = uVar7;
        uVar5 = *(undefined4 *)(pbVar13 + 0x14);
        *(undefined4 *)(pbVar3 + 0x10) = *(undefined4 *)(pbVar13 + 0x10);
        *(undefined4 *)(pbVar3 + 0x14) = uVar5;
        *(undefined4 *)(pbVar13 + 0x10) = 0;
        *(undefined4 *)(pbVar13 + 0x14) = 0xf;
        *pbVar13 = (std::string)0x0;
        *(int *)(pGVar9 + 0x14c) = *(int *)(pGVar9 + 0x14c) + 0x18;
      }
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar17 = (nothrow_t *)(local_28 + 1);
        pvVar15 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar17) {
          pvVar15 = *(void **)((int)local_3c[0] + -4);
          pnVar17 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar15))) goto LAB_004c3c04;
        }
        operator_delete(pvVar15,pnVar17);
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 < (int)local_40);
  }
  debugPrint("SAVEHANDLER","Loaded %d completed synthetics");
  pGVar8 = g_gameLogic;
  local_14 = 3;
  iVar19 = *(int *)(g_gameLogic + 0x48);
  ghidra::lib::_Tree___Erase((ghidra::lib::_Tree_t *)(g_gameLogic + 0x48),*(ghidra::lib::_Tree_node_t **)(iVar19 + 4));
  pcVar20 = local_50;
  p_Var22 = local_54;
  *(int *)(*(int *)(pGVar8 + 0x48) + 4) = iVar19;
  **(int **)(pGVar8 + 0x48) = iVar19;
  local_14 = 0xffffffff;
  *(int *)(*(int *)(pGVar8 + 0x48) + 8) = iVar19;
  *(undefined4 *)(pGVar8 + 0x4c) = 0;
  (*local_50)();
  local_4c = 0;
  if (0 < (int)local_44._Placeholder) {
    do {
      readLengthString((_iobuf *)pbVar10);
      local_14 = 4;
      local_40 = (undefined4 *)0x0;
      (*pcVar20)();
      piVar14 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)(g_gameLogic + 0x48),(std::string *)local_3c);
      *piVar14 = (int)local_40;
      debugPrint("SAVEHANDLER","...loaded rego %s with state %d");
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar17 = (nothrow_t *)(local_28 + 1);
        pvVar15 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar17) {
          pvVar15 = *(void **)((int)local_3c[0] + -4);
          pnVar17 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar15))) {
LAB_004c3c04:
            local_14 = 0xffffffff;
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar15,pnVar17);
      }
      local_4c = local_4c + 1;
    } while (local_4c < (int)local_44._Placeholder);
  }
  debugPrint("SAVEHANDLER","Loaded %d completed ship instance states");
  local_4c = 0;
  (*pcVar20)();
  local_44._Placeholder = (void *)0x0;
  if (0 < local_4c) {
    do {
      (*pcVar20)();
      (*pcVar20)(&local_45);
      (*pcVar20)(&local_5c,4,1,p_Var22);
      (*pcVar20)(&local_60,4,1,p_Var22);
      (*pcVar20)();
      if (ghidra::Singleton<void>::instance == (FictionData *)0x0) {
        ghidra::Singleton<void>::instance = operator_new(0x18);
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
        *(undefined4 *)ghidra::Singleton<void>::instance = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 4) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 8) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0xc) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
      }
      uVar16 = 0;
      uVar21 = *(int *)(ghidra::Singleton<void>::instance + 4) - *(int *)ghidra::Singleton<void>::instance >> 2;
      if (uVar21 != 0) {
        local_40 = *(undefined4 **)ghidra::Singleton<void>::instance;
        puVar18 = local_40;
        do {
          p_Var22 = local_54;
          if (*(int *)*puVar18 == local_58) {
            iVar19 = local_40[uVar16];
            if (iVar19 != 0) {
              *(undefined1 *)(iVar19 + 0xe0) = local_45;
              *(undefined4 *)(iVar19 + 0xd8) = local_5c;
              *(undefined4 *)(iVar19 + 0xd4) = local_60;
              *(undefined4 *)(iVar19 + 0xd0) = local_64;
              pcVar23 = "..faction %s loaded";
              goto LAB_004c3ba1;
            }
            break;
          }
          uVar16 = uVar16 + 1;
          puVar18 = puVar18 + 1;
        } while (uVar16 < uVar21);
      }
      pcVar23 = "Invalid faction \'%d\' loaded";
LAB_004c3ba1:
      debugPrint("SAVEHANDLER",pcVar23);
      local_44._Placeholder = local_44._Placeholder + 1;
      pcVar20 = local_50;
    } while ((int)local_44._Placeholder < local_4c);
  }
  debugPrint("SAVEHANDLER","..loaded %d faction states");
  V10::loadStatesActive((_iobuf *)pbVar10);
  V11::loadPassenger((_iobuf *)pbVar10);
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// Ghidra: void __thiscall SaveHandler::loadGameV8(SaveHandler *this,_iobuf *param_1)
void SaveHandler::loadGameV8(_iobuf * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff70[1] = {0};  // [pseudo] address of an unnamed stack slot
  MetaGameAction **ppMVar1;
  AnimationFrames **ppAVar2;
  std::string *pbVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  GameLogic *pGVar8;
  GameData *pGVar9;
  std::string *pbVar10;
  FlagManager *pFVar11;
  CargoHold *pCVar12;
  std::string *pbVar13;
  int *piVar14;
  GameLogic *this_00;
  GameLogic *this_01;
  std::string *extraout_ECX;
  void *pvVar15;
  uint uVar16;
  nothrow_t *pnVar17;
  undefined4 *puVar18;
  int iVar19;
  code *pcVar20;
  uint uVar21;
  ghidra::lib::allocator_t *unaff_EDI;
  _iobuf *p_Var22;
  char *pcVar23;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  _iobuf *local_54;
  code *local_50;
  int local_4c;
  undefined1 local_45;
  _iobuf local_44;
  undefined4 *local_40;
  void *local_3c [5];
  uint local_28;
  std::string *local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  uint local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005bf160;
  // [seh] local_1c = ExceptionList;
  // [cookie] pbVar10 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  local_54 = param_1;
  local_24 = pbVar10;
  V7::loadFlags((_iobuf *)pbVar10);
  pcVar20 = fread_exref;
  p_Var22 = &local_44;
  local_50 = fread_exref;
  fread(p_Var22,4,1,(FILE *)param_1);
  *(void **)(*(int *)(g_gameData + 0x124) + 0x1c) = local_44._Placeholder;
  V8::loadShips(p_Var22);
  fread(&_DstBuf_0065d514,4,1,(FILE *)param_1);
  fread(&_DstBuf_0065d520,4,1,(FILE *)param_1);
  pGVar9 = g_gameData;
  *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1a4) = 0;
  *(undefined4 *)(*(int *)(pGVar9 + 0xd0) + 0x1a0) = 0xffffffff;
  *(undefined4 *)(*(int *)(pGVar9 + 0xd0) + 0x19c) = 0;
  *(undefined4 *)(*(int *)(pGVar9 + 0xd0) + 0x198) = 0xffffffff;
  *(undefined4 *)(*(int *)(pGVar9 + 0xd0) + 0x194) = 0;
  *(undefined4 *)(*(int *)(pGVar9 + 0xd0) + 400) = 0xffffffff;
  *(undefined4 *)(*(int *)(pGVar9 + 0xd0) + 0x1ac) = 0;
  *(undefined4 *)(*(int *)(pGVar9 + 0xd0) + 0x1a8) = 0xffffffff;
  V8::loadStats((_iobuf *)pbVar10);
  V8::loadSpaceStationStates((_iobuf *)pbVar10);
  (this_00)->clearPlayerContracts();
  local_40 = (undefined4 *)0x0;
  fread(&local_40,4,1,(FILE *)param_1);
  if (0 < (int)local_40) {
    iVar19 = 0;
    do {
      local_44._Placeholder = V8::readContract((_iobuf *)pbVar10);
      pGVar9 = g_gameData;
      if (local_44._Placeholder != (Contract *)0x0) {
        ppMVar1 = *(MetaGameAction ***)(g_gameData + 0x140);
        if (*(MetaGameAction ***)(g_gameData + 0x144) == ppMVar1) {
          ghidra::lib::vector___Emplace_reallocate
                    ((ghidra::vector *)(g_gameData + 0x13c),ppMVar1,&local_44._Placeholder);
        }
        else {
          *ppMVar1 = local_44._Placeholder;
          *(int *)(pGVar9 + 0x140) = *(int *)(pGVar9 + 0x140) + 4;
        }
      }
      iVar19 = iVar19 + 1;
      pcVar20 = local_50;
    } while (iVar19 < (int)local_40);
  }
  debugPrint("SAVEHANDLER","...loaded %d current contracts for the player");
  bVar4 = (int)local_40 < 1;
  if (bVar4) {
    local_44._Placeholder = &stack0xffffff70;
    ghidra::str::assign((std::string *)&stack0xffffff70,"has_contract",0xc);
  }
  else {
    local_44._Placeholder = &stack0xffffff70;
    ghidra::str::assign((std::string *)&stack0xffffff70,"has_contract",0xc);
  }
  local_14 = (uint)bVar4;
  pFVar11 = ghidra::any_singleton();
  local_14 = 0xffffffff;
  (pFVar11)->setFlag();
  (this_01)->clearPlayerBounties();
  local_40 = (undefined4 *)0x0;
  (*pcVar20)();
  iVar19 = 0;
  if (0 < (int)local_40) {
    do {
      local_44._Placeholder = V8::readBounty((_iobuf *)pbVar10);
      pGVar9 = g_gameData;
      if (local_44._Placeholder != (Bounty *)0x0) {
        ppAVar2 = *(AnimationFrames ***)(g_gameData + 0x134);
        if (*(AnimationFrames ***)(g_gameData + 0x138) == ppAVar2) {
          ghidra::lib::vector___Emplace_reallocate
                    ((ghidra::vector *)(g_gameData + 0x130),ppAVar2,&local_44._Placeholder);
        }
        else {
          *ppAVar2 = local_44._Placeholder;
          *(int *)(pGVar9 + 0x134) = *(int *)(pGVar9 + 0x134) + 4;
        }
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 < (int)local_40);
  }
  debugPrint("SAVEHANDLER","...loaded %d current bounties for the player");
  pCVar12 = *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8);
  if (pCVar12 != (CargoHold *)0x0) {
    CargoHold::_scalar_deleting_destructor_(pCVar12,(uint)pCVar12);
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1f8) = 0;
  }
  pCVar12 = V11::readCargo((_iobuf *)pbVar10);
  *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8) = pCVar12;
  V8::loadEmails((_iobuf *)pbVar10);
  V9::loadFogOfWarState((_iobuf *)pbVar10);
  pGVar9 = g_gameData;
  ghidra::lib::_Destroy_range___x28_x29(extraout_ECX,pbVar10,unaff_EDI);
  *(undefined4 *)(pGVar9 + 0x14c) = *(undefined4 *)(pGVar9 + 0x148);
  (*local_50)();
  iVar19 = 0;
  if (0 < (int)local_40) {
    do {
      pbVar13 = (std::string *)readLengthString((_iobuf *)pbVar10);
      pGVar9 = g_gameData;
      local_14 = 2;
      pbVar3 = *(std::string **)(g_gameData + 0x14c);
      if (*(std::string **)(g_gameData + 0x150) == pbVar3) {
        ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(g_gameData + 0x148),pbVar3,pbVar13);
      }
      else {
        *(undefined4 *)(pbVar3 + 0x10) = 0;
        *(undefined4 *)(pbVar3 + 0x14) = 0;
        uVar5 = *(undefined4 *)(pbVar13 + 4);
        uVar6 = *(undefined4 *)(pbVar13 + 8);
        uVar7 = *(undefined4 *)(pbVar13 + 0xc);
        *(undefined4 *)pbVar3 = *(undefined4 *)pbVar13;
        *(undefined4 *)(pbVar3 + 4) = uVar5;
        *(undefined4 *)(pbVar3 + 8) = uVar6;
        *(undefined4 *)(pbVar3 + 0xc) = uVar7;
        uVar5 = *(undefined4 *)(pbVar13 + 0x14);
        *(undefined4 *)(pbVar3 + 0x10) = *(undefined4 *)(pbVar13 + 0x10);
        *(undefined4 *)(pbVar3 + 0x14) = uVar5;
        *(undefined4 *)(pbVar13 + 0x10) = 0;
        *(undefined4 *)(pbVar13 + 0x14) = 0xf;
        *pbVar13 = (std::string)0x0;
        *(int *)(pGVar9 + 0x14c) = *(int *)(pGVar9 + 0x14c) + 0x18;
      }
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar17 = (nothrow_t *)(local_28 + 1);
        pvVar15 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar17) {
          pvVar15 = *(void **)((int)local_3c[0] + -4);
          pnVar17 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar15))) goto LAB_004c5140;
        }
        operator_delete(pvVar15,pnVar17);
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 < (int)local_40);
  }
  debugPrint("SAVEHANDLER","Loaded %d completed synthetics");
  pGVar8 = g_gameLogic;
  local_14 = 3;
  iVar19 = *(int *)(g_gameLogic + 0x48);
  ghidra::lib::_Tree___Erase((ghidra::lib::_Tree_t *)(g_gameLogic + 0x48),*(ghidra::lib::_Tree_node_t **)(iVar19 + 4));
  pcVar20 = local_50;
  p_Var22 = local_54;
  *(int *)(*(int *)(pGVar8 + 0x48) + 4) = iVar19;
  **(int **)(pGVar8 + 0x48) = iVar19;
  local_14 = 0xffffffff;
  *(int *)(*(int *)(pGVar8 + 0x48) + 8) = iVar19;
  *(undefined4 *)(pGVar8 + 0x4c) = 0;
  (*local_50)();
  local_4c = 0;
  if (0 < (int)local_44._Placeholder) {
    do {
      readLengthString((_iobuf *)pbVar10);
      local_14 = 4;
      local_40 = (undefined4 *)0x0;
      (*pcVar20)();
      piVar14 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)(g_gameLogic + 0x48),(std::string *)local_3c);
      *piVar14 = (int)local_40;
      debugPrint("SAVEHANDLER","...loaded rego %s with state %d");
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar17 = (nothrow_t *)(local_28 + 1);
        pvVar15 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar17) {
          pvVar15 = *(void **)((int)local_3c[0] + -4);
          pnVar17 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar15))) {
LAB_004c5140:
            local_14 = 0xffffffff;
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar15,pnVar17);
      }
      local_4c = local_4c + 1;
    } while (local_4c < (int)local_44._Placeholder);
  }
  debugPrint("SAVEHANDLER","Loaded %d completed ship instance states");
  local_4c = 0;
  (*pcVar20)();
  local_44._Placeholder = (void *)0x0;
  if (0 < local_4c) {
    do {
      (*pcVar20)();
      (*pcVar20)(&local_45);
      (*pcVar20)(&local_5c,4,1,p_Var22);
      (*pcVar20)(&local_60,4,1,p_Var22);
      (*pcVar20)();
      if (ghidra::Singleton<void>::instance == (FictionData *)0x0) {
        ghidra::Singleton<void>::instance = operator_new(0x18);
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
        *(undefined4 *)ghidra::Singleton<void>::instance = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 4) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 8) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0xc) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
      }
      uVar16 = 0;
      uVar21 = *(int *)(ghidra::Singleton<void>::instance + 4) - *(int *)ghidra::Singleton<void>::instance >> 2;
      if (uVar21 != 0) {
        local_40 = *(undefined4 **)ghidra::Singleton<void>::instance;
        puVar18 = local_40;
        do {
          p_Var22 = local_54;
          if (*(int *)*puVar18 == local_58) {
            iVar19 = local_40[uVar16];
            if (iVar19 != 0) {
              *(undefined1 *)(iVar19 + 0xe0) = local_45;
              *(undefined4 *)(iVar19 + 0xd8) = local_5c;
              *(undefined4 *)(iVar19 + 0xd4) = local_60;
              *(undefined4 *)(iVar19 + 0xd0) = local_64;
              pcVar23 = "..faction %s loaded";
              goto LAB_004c50dd;
            }
            break;
          }
          uVar16 = uVar16 + 1;
          puVar18 = puVar18 + 1;
        } while (uVar16 < uVar21);
      }
      pcVar23 = "Invalid faction \'%d\' loaded";
LAB_004c50dd:
      debugPrint("SAVEHANDLER",pcVar23);
      local_44._Placeholder = local_44._Placeholder + 1;
      pcVar20 = local_50;
    } while ((int)local_44._Placeholder < local_4c);
  }
  debugPrint("SAVEHANDLER","..loaded %d faction states");
  V10::loadStatesActive((_iobuf *)pbVar10);
  V11::loadPassenger((_iobuf *)pbVar10);
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// Ghidra: void __thiscall SaveHandler::loadGameV9(SaveHandler *this,_iobuf *param_1)
void SaveHandler::loadGameV9(_iobuf * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  AnimationFrames **ppAVar1;
  std::string *pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  GameLogic *pGVar6;
  GameData *pGVar7;
  std::string *pbVar8;
  CargoHold *pCVar9;
  std::string *pbVar10;
  int *piVar11;
  undefined4 ****ppppuVar12;
  GameLogic *this_00;
  std::string *extraout_ECX;
  uint uVar13;
  undefined4 *puVar14;
  nothrow_t *pnVar15;
  int iVar16;
  code *pcVar17;
  uint uVar18;
  ghidra::lib::allocator_t *unaff_EDI;
  _iobuf *p_Var19;
  char *pcVar20;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 *local_58;
  _iobuf *local_54;
  code *local_50;
  int local_4c;
  undefined1 local_45;
  _iobuf local_44;
  undefined4 *local_40;
  undefined4 ***local_3c [5];
  uint local_28;
  std::string *local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005beb90;
  // [seh] local_1c = ExceptionList;
  // [cookie] pbVar8 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  local_54 = param_1;
  local_24 = pbVar8;
  V7::loadFlags((_iobuf *)pbVar8);
  p_Var19 = &local_44;
  local_50 = fread_exref;
  fread(p_Var19,4,1,(FILE *)param_1);
  *(void **)(*(int *)(g_gameData + 0x124) + 0x1c) = local_44._Placeholder;
  V9::loadShips(p_Var19);
  fread(&_DstBuf_0065d514,4,1,(FILE *)param_1);
  fread(&_DstBuf_0065d520,4,1,(FILE *)param_1);
  pGVar7 = g_gameData;
  *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1a4) = 0;
  *(undefined4 *)(*(int *)(pGVar7 + 0xd0) + 0x1a0) = 0xffffffff;
  *(undefined4 *)(*(int *)(pGVar7 + 0xd0) + 0x19c) = 0;
  *(undefined4 *)(*(int *)(pGVar7 + 0xd0) + 0x198) = 0xffffffff;
  *(undefined4 *)(*(int *)(pGVar7 + 0xd0) + 0x194) = 0;
  *(undefined4 *)(*(int *)(pGVar7 + 0xd0) + 400) = 0xffffffff;
  *(undefined4 *)(*(int *)(pGVar7 + 0xd0) + 0x1ac) = 0;
  *(undefined4 *)(*(int *)(pGVar7 + 0xd0) + 0x1a8) = 0xffffffff;
  V8::loadStats((_iobuf *)pbVar8);
  V9::loadSpaceStationStates((_iobuf *)pbVar8);
  V9::loadPlayerContracts((_iobuf *)pbVar8);
  (this_00)->clearPlayerBounties();
  local_40 = (undefined4 *)0x0;
  fread(&local_40,4,1,(FILE *)param_1);
  iVar16 = 0;
  if (0 < (int)local_40) {
    do {
      local_44._Placeholder = V8::readBounty((_iobuf *)pbVar8);
      pGVar7 = g_gameData;
      if (local_44._Placeholder != (Bounty *)0x0) {
        ppAVar1 = *(AnimationFrames ***)(g_gameData + 0x134);
        if (*(AnimationFrames ***)(g_gameData + 0x138) == ppAVar1) {
          ghidra::lib::vector___Emplace_reallocate
                    ((ghidra::vector *)(g_gameData + 0x130),ppAVar1,&local_44._Placeholder);
        }
        else {
          *ppAVar1 = local_44._Placeholder;
          *(int *)(pGVar7 + 0x134) = *(int *)(pGVar7 + 0x134) + 4;
        }
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < (int)local_40);
  }
  debugPrint("SAVEHANDLER","...loaded %d current bounties for the player",local_40);
  pCVar9 = *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8);
  if (pCVar9 != (CargoHold *)0x0) {
    CargoHold::_scalar_deleting_destructor_(pCVar9,(uint)pCVar9);
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1f8) = 0;
  }
  pCVar9 = V11::readCargo((_iobuf *)pbVar8);
  *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8) = pCVar9;
  V9::loadEmails((_iobuf *)pbVar8);
  V9::loadFogOfWarState((_iobuf *)pbVar8);
  pGVar7 = g_gameData;
  ghidra::lib::_Destroy_range___x28_x29(extraout_ECX,pbVar8,unaff_EDI);
  *(undefined4 *)(pGVar7 + 0x14c) = *(undefined4 *)(pGVar7 + 0x148);
  (*local_50)(&local_40,4,1,param_1);
  iVar16 = 0;
  if (0 < (int)local_40) {
    do {
      pbVar10 = (std::string *)readLengthString((_iobuf *)pbVar8);
      pGVar7 = g_gameData;
      local_14 = 0;
      pbVar2 = *(std::string **)(g_gameData + 0x14c);
      if (*(std::string **)(g_gameData + 0x150) == pbVar2) {
        ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(g_gameData + 0x148),pbVar2,pbVar10);
      }
      else {
        *(undefined4 *)(pbVar2 + 0x10) = 0;
        *(undefined4 *)(pbVar2 + 0x14) = 0;
        uVar3 = *(undefined4 *)(pbVar10 + 4);
        uVar4 = *(undefined4 *)(pbVar10 + 8);
        uVar5 = *(undefined4 *)(pbVar10 + 0xc);
        *(undefined4 *)pbVar2 = *(undefined4 *)pbVar10;
        *(undefined4 *)(pbVar2 + 4) = uVar3;
        *(undefined4 *)(pbVar2 + 8) = uVar4;
        *(undefined4 *)(pbVar2 + 0xc) = uVar5;
        uVar3 = *(undefined4 *)(pbVar10 + 0x14);
        *(undefined4 *)(pbVar2 + 0x10) = *(undefined4 *)(pbVar10 + 0x10);
        *(undefined4 *)(pbVar2 + 0x14) = uVar3;
        *(undefined4 *)(pbVar10 + 0x10) = 0;
        *(undefined4 *)(pbVar10 + 0x14) = 0xf;
        *pbVar10 = (std::string)0x0;
        *(int *)(pGVar7 + 0x14c) = *(int *)(pGVar7 + 0x14c) + 0x18;
      }
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar15 = (nothrow_t *)(local_28 + 1);
        ppppuVar12 = (undefined4 ****)local_3c[0];
        if ((nothrow_t *)0xfff < pnVar15) {
          ppppuVar12 = (undefined4 ****)local_3c[0][-1];
          pnVar15 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)ppppuVar12))) goto LAB_004c6c00;
        }
        operator_delete(ppppuVar12,pnVar15);
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < (int)local_40);
  }
  debugPrint("SAVEHANDLER","Loaded %d completed synthetics",local_40);
  pGVar6 = g_gameLogic;
  local_14 = 1;
  iVar16 = *(int *)(g_gameLogic + 0x48);
  ghidra::lib::_Tree___Erase((ghidra::lib::_Tree_t *)(g_gameLogic + 0x48),*(ghidra::lib::_Tree_node_t **)(iVar16 + 4));
  pcVar17 = local_50;
  p_Var19 = local_54;
  *(int *)(*(int *)(pGVar6 + 0x48) + 4) = iVar16;
  **(int **)(pGVar6 + 0x48) = iVar16;
  local_14 = 0xffffffff;
  *(int *)(*(int *)(pGVar6 + 0x48) + 8) = iVar16;
  *(undefined4 *)(pGVar6 + 0x4c) = 0;
  (*local_50)(&local_44,4,1,local_54);
  local_4c = 0;
  if (0 < (int)local_44._Placeholder) {
    do {
      readLengthString((_iobuf *)pbVar8);
      local_14 = 2;
      local_40 = (undefined4 *)0x0;
      (*pcVar17)(&local_40,4,1,p_Var19);
      piVar11 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)(g_gameLogic + 0x48),(std::string *)local_3c);
      *piVar11 = (int)local_40;
      ppppuVar12 = local_3c;
      if (0xf < local_28) {
        ppppuVar12 = (undefined4 ****)local_3c[0];
      }
      debugPrint("SAVEHANDLER","...loaded rego %s with state %d",ppppuVar12,local_40);
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar15 = (nothrow_t *)(local_28 + 1);
        ppppuVar12 = (undefined4 ****)local_3c[0];
        if ((nothrow_t *)0xfff < pnVar15) {
          ppppuVar12 = (undefined4 ****)local_3c[0][-1];
          pnVar15 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)ppppuVar12))) {
LAB_004c6c00:
            local_14 = 0xffffffff;
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppuVar12,pnVar15);
      }
      local_4c = local_4c + 1;
    } while (local_4c < (int)local_44._Placeholder);
  }
  debugPrint("SAVEHANDLER","Loaded %d completed ship instance states",local_44._Placeholder);
  local_4c = 0;
  (*pcVar17)(&local_4c,4,1,p_Var19);
  local_44._Placeholder = (void *)0x0;
  if (0 < local_4c) {
    do {
      (*pcVar17)(&local_58,4,1,p_Var19);
      (*pcVar17)(&local_45,1,1,p_Var19);
      (*pcVar17)(&local_5c,4,1,p_Var19);
      (*pcVar17)(&local_60,4,1,p_Var19);
      (*pcVar17)(&local_64,4,1,p_Var19);
      if (ghidra::Singleton<void>::instance == (FictionData *)0x0) {
        ghidra::Singleton<void>::instance = operator_new(0x18);
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
        *(undefined4 *)ghidra::Singleton<void>::instance = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 4) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 8) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0xc) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
      }
      uVar13 = 0;
      uVar18 = *(int *)(ghidra::Singleton<void>::instance + 4) - *(int *)ghidra::Singleton<void>::instance >> 2;
      if (uVar18 != 0) {
        local_40 = *(undefined4 **)ghidra::Singleton<void>::instance;
        puVar14 = local_40;
        do {
          p_Var19 = local_54;
          if (*(undefined4 **)*puVar14 == local_58) {
            iVar16 = local_40[uVar13];
            if (iVar16 != 0) {
              *(undefined1 *)(iVar16 + 0xe0) = local_45;
              *(undefined4 *)(iVar16 + 0xd8) = local_5c;
              *(undefined4 *)(iVar16 + 0xd4) = local_60;
              *(undefined4 *)(iVar16 + 0xd0) = local_64;
              puVar14 = (undefined4 *)(iVar16 + 8);
              if (0xf < *(uint *)(iVar16 + 0x1c)) {
                puVar14 = (undefined4 *)*puVar14;
              }
              pcVar20 = "..faction %s loaded";
              goto LAB_004c6b9d;
            }
            break;
          }
          uVar13 = uVar13 + 1;
          puVar14 = puVar14 + 1;
        } while (uVar13 < uVar18);
      }
      pcVar20 = "Invalid faction \'%d\' loaded";
      puVar14 = local_58;
LAB_004c6b9d:
      debugPrint("SAVEHANDLER",pcVar20,puVar14);
      local_44._Placeholder = local_44._Placeholder + 1;
      pcVar17 = local_50;
    } while ((int)local_44._Placeholder < local_4c);
  }
  debugPrint("SAVEHANDLER","..loaded %d faction states",local_4c);
  V10::loadStatesActive((_iobuf *)pbVar8);
  V11::loadPassenger((_iobuf *)pbVar8);
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// Ghidra: void __thiscall SaveHandler::loadGameV10(SaveHandler *this,_iobuf *param_1)
void SaveHandler::loadGameV10(_iobuf * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  AnimationFrames **ppAVar1;
  std::string *pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  GameLogic *pGVar6;
  GameData *pGVar7;
  std::string *pbVar8;
  CargoHold *pCVar9;
  std::string *pbVar10;
  int *piVar11;
  undefined4 ****ppppuVar12;
  GameLogic *this_00;
  std::string *extraout_ECX;
  uint uVar13;
  undefined4 *puVar14;
  nothrow_t *pnVar15;
  int iVar16;
  code *pcVar17;
  uint uVar18;
  ghidra::lib::allocator_t *unaff_EDI;
  _iobuf *p_Var19;
  char *pcVar20;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 *local_58;
  _iobuf *local_54;
  code *local_50;
  int local_4c;
  undefined1 local_45;
  _iobuf local_44;
  undefined4 *local_40;
  undefined4 ***local_3c [5];
  uint local_28;
  std::string *local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005beb90;
  // [seh] local_1c = ExceptionList;
  // [cookie] pbVar8 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  local_54 = param_1;
  local_24 = pbVar8;
  V7::loadFlags((_iobuf *)pbVar8);
  p_Var19 = &local_44;
  local_50 = fread_exref;
  fread(p_Var19,4,1,(FILE *)param_1);
  *(void **)(*(int *)(g_gameData + 0x124) + 0x1c) = local_44._Placeholder;
  V11::loadShips(p_Var19);
  fread(&_DstBuf_0065d514,4,1,(FILE *)param_1);
  fread(&_DstBuf_0065d520,4,1,(FILE *)param_1);
  pGVar7 = g_gameData;
  *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1a4) = 0;
  *(undefined4 *)(*(int *)(pGVar7 + 0xd0) + 0x1a0) = 0xffffffff;
  *(undefined4 *)(*(int *)(pGVar7 + 0xd0) + 0x19c) = 0;
  *(undefined4 *)(*(int *)(pGVar7 + 0xd0) + 0x198) = 0xffffffff;
  *(undefined4 *)(*(int *)(pGVar7 + 0xd0) + 0x194) = 0;
  *(undefined4 *)(*(int *)(pGVar7 + 0xd0) + 400) = 0xffffffff;
  *(undefined4 *)(*(int *)(pGVar7 + 0xd0) + 0x1ac) = 0;
  *(undefined4 *)(*(int *)(pGVar7 + 0xd0) + 0x1a8) = 0xffffffff;
  V8::loadStats((_iobuf *)pbVar8);
  V10::loadSpaceStationStates((_iobuf *)pbVar8);
  V9::loadPlayerContracts((_iobuf *)pbVar8);
  (this_00)->clearPlayerBounties();
  local_40 = (undefined4 *)0x0;
  fread(&local_40,4,1,(FILE *)param_1);
  iVar16 = 0;
  if (0 < (int)local_40) {
    do {
      local_44._Placeholder = V8::readBounty((_iobuf *)pbVar8);
      pGVar7 = g_gameData;
      if (local_44._Placeholder != (Bounty *)0x0) {
        ppAVar1 = *(AnimationFrames ***)(g_gameData + 0x134);
        if (*(AnimationFrames ***)(g_gameData + 0x138) == ppAVar1) {
          ghidra::lib::vector___Emplace_reallocate
                    ((ghidra::vector *)(g_gameData + 0x130),ppAVar1,&local_44._Placeholder);
        }
        else {
          *ppAVar1 = local_44._Placeholder;
          *(int *)(pGVar7 + 0x134) = *(int *)(pGVar7 + 0x134) + 4;
        }
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < (int)local_40);
  }
  debugPrint("SAVEHANDLER","...loaded %d current bounties for the player",local_40);
  pCVar9 = *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8);
  if (pCVar9 != (CargoHold *)0x0) {
    CargoHold::_scalar_deleting_destructor_(pCVar9,(uint)pCVar9);
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1f8) = 0;
  }
  pCVar9 = V11::readCargo((_iobuf *)pbVar8);
  *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8) = pCVar9;
  V9::loadEmails((_iobuf *)pbVar8);
  V9::loadFogOfWarState((_iobuf *)pbVar8);
  pGVar7 = g_gameData;
  ghidra::lib::_Destroy_range___x28_x29(extraout_ECX,pbVar8,unaff_EDI);
  *(undefined4 *)(pGVar7 + 0x14c) = *(undefined4 *)(pGVar7 + 0x148);
  (*local_50)(&local_40,4,1,param_1);
  iVar16 = 0;
  if (0 < (int)local_40) {
    do {
      pbVar10 = (std::string *)readLengthString((_iobuf *)pbVar8);
      pGVar7 = g_gameData;
      local_14 = 0;
      pbVar2 = *(std::string **)(g_gameData + 0x14c);
      if (*(std::string **)(g_gameData + 0x150) == pbVar2) {
        ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(g_gameData + 0x148),pbVar2,pbVar10);
      }
      else {
        *(undefined4 *)(pbVar2 + 0x10) = 0;
        *(undefined4 *)(pbVar2 + 0x14) = 0;
        uVar3 = *(undefined4 *)(pbVar10 + 4);
        uVar4 = *(undefined4 *)(pbVar10 + 8);
        uVar5 = *(undefined4 *)(pbVar10 + 0xc);
        *(undefined4 *)pbVar2 = *(undefined4 *)pbVar10;
        *(undefined4 *)(pbVar2 + 4) = uVar3;
        *(undefined4 *)(pbVar2 + 8) = uVar4;
        *(undefined4 *)(pbVar2 + 0xc) = uVar5;
        uVar3 = *(undefined4 *)(pbVar10 + 0x14);
        *(undefined4 *)(pbVar2 + 0x10) = *(undefined4 *)(pbVar10 + 0x10);
        *(undefined4 *)(pbVar2 + 0x14) = uVar3;
        *(undefined4 *)(pbVar10 + 0x10) = 0;
        *(undefined4 *)(pbVar10 + 0x14) = 0xf;
        *pbVar10 = (std::string)0x0;
        *(int *)(pGVar7 + 0x14c) = *(int *)(pGVar7 + 0x14c) + 0x18;
      }
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar15 = (nothrow_t *)(local_28 + 1);
        ppppuVar12 = (undefined4 ****)local_3c[0];
        if ((nothrow_t *)0xfff < pnVar15) {
          ppppuVar12 = (undefined4 ****)local_3c[0][-1];
          pnVar15 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)ppppuVar12))) goto LAB_004c8200;
        }
        operator_delete(ppppuVar12,pnVar15);
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < (int)local_40);
  }
  debugPrint("SAVEHANDLER","Loaded %d completed synthetics",local_40);
  pGVar6 = g_gameLogic;
  local_14 = 1;
  iVar16 = *(int *)(g_gameLogic + 0x48);
  ghidra::lib::_Tree___Erase((ghidra::lib::_Tree_t *)(g_gameLogic + 0x48),*(ghidra::lib::_Tree_node_t **)(iVar16 + 4));
  pcVar17 = local_50;
  p_Var19 = local_54;
  *(int *)(*(int *)(pGVar6 + 0x48) + 4) = iVar16;
  **(int **)(pGVar6 + 0x48) = iVar16;
  local_14 = 0xffffffff;
  *(int *)(*(int *)(pGVar6 + 0x48) + 8) = iVar16;
  *(undefined4 *)(pGVar6 + 0x4c) = 0;
  (*local_50)(&local_44,4,1,local_54);
  local_4c = 0;
  if (0 < (int)local_44._Placeholder) {
    do {
      readLengthString((_iobuf *)pbVar8);
      local_14 = 2;
      local_40 = (undefined4 *)0x0;
      (*pcVar17)(&local_40,4,1,p_Var19);
      piVar11 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)(g_gameLogic + 0x48),(std::string *)local_3c);
      *piVar11 = (int)local_40;
      ppppuVar12 = local_3c;
      if (0xf < local_28) {
        ppppuVar12 = (undefined4 ****)local_3c[0];
      }
      debugPrint("SAVEHANDLER","...loaded rego %s with state %d",ppppuVar12,local_40);
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar15 = (nothrow_t *)(local_28 + 1);
        ppppuVar12 = (undefined4 ****)local_3c[0];
        if ((nothrow_t *)0xfff < pnVar15) {
          ppppuVar12 = (undefined4 ****)local_3c[0][-1];
          pnVar15 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)ppppuVar12))) {
LAB_004c8200:
            local_14 = 0xffffffff;
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppuVar12,pnVar15);
      }
      local_4c = local_4c + 1;
    } while (local_4c < (int)local_44._Placeholder);
  }
  debugPrint("SAVEHANDLER","Loaded %d completed ship instance states",local_44._Placeholder);
  local_4c = 0;
  (*pcVar17)(&local_4c,4,1,p_Var19);
  local_44._Placeholder = (void *)0x0;
  if (0 < local_4c) {
    do {
      (*pcVar17)(&local_58,4,1,p_Var19);
      (*pcVar17)(&local_45,1,1,p_Var19);
      (*pcVar17)(&local_5c,4,1,p_Var19);
      (*pcVar17)(&local_60,4,1,p_Var19);
      (*pcVar17)(&local_64,4,1,p_Var19);
      if (ghidra::Singleton<void>::instance == (FictionData *)0x0) {
        ghidra::Singleton<void>::instance = operator_new(0x18);
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
        *(undefined4 *)ghidra::Singleton<void>::instance = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 4) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 8) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0xc) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
      }
      uVar13 = 0;
      uVar18 = *(int *)(ghidra::Singleton<void>::instance + 4) - *(int *)ghidra::Singleton<void>::instance >> 2;
      if (uVar18 != 0) {
        local_40 = *(undefined4 **)ghidra::Singleton<void>::instance;
        puVar14 = local_40;
        do {
          p_Var19 = local_54;
          if (*(undefined4 **)*puVar14 == local_58) {
            iVar16 = local_40[uVar13];
            if (iVar16 != 0) {
              *(undefined1 *)(iVar16 + 0xe0) = local_45;
              *(undefined4 *)(iVar16 + 0xd8) = local_5c;
              *(undefined4 *)(iVar16 + 0xd4) = local_60;
              *(undefined4 *)(iVar16 + 0xd0) = local_64;
              puVar14 = (undefined4 *)(iVar16 + 8);
              if (0xf < *(uint *)(iVar16 + 0x1c)) {
                puVar14 = (undefined4 *)*puVar14;
              }
              pcVar20 = "..faction %s loaded";
              goto LAB_004c819d;
            }
            break;
          }
          uVar13 = uVar13 + 1;
          puVar14 = puVar14 + 1;
        } while (uVar13 < uVar18);
      }
      pcVar20 = "Invalid faction \'%d\' loaded";
      puVar14 = local_58;
LAB_004c819d:
      debugPrint("SAVEHANDLER",pcVar20,puVar14);
      local_44._Placeholder = local_44._Placeholder + 1;
      pcVar17 = local_50;
    } while ((int)local_44._Placeholder < local_4c);
  }
  debugPrint("SAVEHANDLER","..loaded %d faction states",local_4c);
  V10::loadStatesActive((_iobuf *)pbVar8);
  V11::loadPassenger((_iobuf *)pbVar8);
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// Ghidra: void __thiscall SaveHandler::loadGameV11(SaveHandler *this,_iobuf *param_1)
void SaveHandler::loadGameV11(_iobuf * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  AnimationFrames **ppAVar1;
  std::string *pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  GameLogic *pGVar6;
  GameData *pGVar7;
  std::string *pbVar8;
  CargoHold *pCVar9;
  std::string *pbVar10;
  int *piVar11;
  undefined4 ****ppppuVar12;
  GameLogic *this_00;
  std::string *extraout_ECX;
  uint uVar13;
  undefined4 *puVar14;
  nothrow_t *pnVar15;
  int iVar16;
  code *pcVar17;
  uint uVar18;
  ghidra::lib::allocator_t *unaff_EDI;
  _iobuf *p_Var19;
  char *pcVar20;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 *local_58;
  _iobuf *local_54;
  code *local_50;
  int local_4c;
  undefined1 local_45;
  _iobuf local_44;
  undefined4 *local_40;
  undefined4 ***local_3c [5];
  uint local_28;
  std::string *local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005beb90;
  // [seh] local_1c = ExceptionList;
  // [cookie] pbVar8 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  local_54 = param_1;
  local_24 = pbVar8;
  V7::loadFlags((_iobuf *)pbVar8);
  p_Var19 = &local_44;
  local_50 = fread_exref;
  fread(p_Var19,4,1,(FILE *)param_1);
  *(void **)(*(int *)(g_gameData + 0x124) + 0x1c) = local_44._Placeholder;
  V11::loadShips(p_Var19);
  fread(&_DstBuf_0065d514,4,1,(FILE *)param_1);
  fread(&_DstBuf_0065d520,4,1,(FILE *)param_1);
  pGVar7 = g_gameData;
  *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1a4) = 0;
  *(undefined4 *)(*(int *)(pGVar7 + 0xd0) + 0x1a0) = 0xffffffff;
  *(undefined4 *)(*(int *)(pGVar7 + 0xd0) + 0x19c) = 0;
  *(undefined4 *)(*(int *)(pGVar7 + 0xd0) + 0x198) = 0xffffffff;
  *(undefined4 *)(*(int *)(pGVar7 + 0xd0) + 0x194) = 0;
  *(undefined4 *)(*(int *)(pGVar7 + 0xd0) + 400) = 0xffffffff;
  *(undefined4 *)(*(int *)(pGVar7 + 0xd0) + 0x1ac) = 0;
  *(undefined4 *)(*(int *)(pGVar7 + 0xd0) + 0x1a8) = 0xffffffff;
  V8::loadStats((_iobuf *)pbVar8);
  V11::loadSpaceStationStates((_iobuf *)pbVar8);
  V9::loadPlayerContracts((_iobuf *)pbVar8);
  (this_00)->clearPlayerBounties();
  local_40 = (undefined4 *)0x0;
  fread(&local_40,4,1,(FILE *)param_1);
  iVar16 = 0;
  if (0 < (int)local_40) {
    do {
      local_44._Placeholder = V8::readBounty((_iobuf *)pbVar8);
      pGVar7 = g_gameData;
      if (local_44._Placeholder != (Bounty *)0x0) {
        ppAVar1 = *(AnimationFrames ***)(g_gameData + 0x134);
        if (*(AnimationFrames ***)(g_gameData + 0x138) == ppAVar1) {
          ghidra::lib::vector___Emplace_reallocate
                    ((ghidra::vector *)(g_gameData + 0x130),ppAVar1,&local_44._Placeholder);
        }
        else {
          *ppAVar1 = local_44._Placeholder;
          *(int *)(pGVar7 + 0x134) = *(int *)(pGVar7 + 0x134) + 4;
        }
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < (int)local_40);
  }
  debugPrint("SAVEHANDLER","...loaded %d current bounties for the player",local_40);
  pCVar9 = *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8);
  if (pCVar9 != (CargoHold *)0x0) {
    CargoHold::_scalar_deleting_destructor_(pCVar9,(uint)pCVar9);
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1f8) = 0;
  }
  pCVar9 = V11::readCargo((_iobuf *)pbVar8);
  *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8) = pCVar9;
  V9::loadEmails((_iobuf *)pbVar8);
  V9::loadFogOfWarState((_iobuf *)pbVar8);
  pGVar7 = g_gameData;
  ghidra::lib::_Destroy_range___x28_x29(extraout_ECX,pbVar8,unaff_EDI);
  *(undefined4 *)(pGVar7 + 0x14c) = *(undefined4 *)(pGVar7 + 0x148);
  (*local_50)(&local_40,4,1,param_1);
  iVar16 = 0;
  if (0 < (int)local_40) {
    do {
      pbVar10 = (std::string *)readLengthString((_iobuf *)pbVar8);
      pGVar7 = g_gameData;
      local_14 = 0;
      pbVar2 = *(std::string **)(g_gameData + 0x14c);
      if (*(std::string **)(g_gameData + 0x150) == pbVar2) {
        ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(g_gameData + 0x148),pbVar2,pbVar10);
      }
      else {
        *(undefined4 *)(pbVar2 + 0x10) = 0;
        *(undefined4 *)(pbVar2 + 0x14) = 0;
        uVar3 = *(undefined4 *)(pbVar10 + 4);
        uVar4 = *(undefined4 *)(pbVar10 + 8);
        uVar5 = *(undefined4 *)(pbVar10 + 0xc);
        *(undefined4 *)pbVar2 = *(undefined4 *)pbVar10;
        *(undefined4 *)(pbVar2 + 4) = uVar3;
        *(undefined4 *)(pbVar2 + 8) = uVar4;
        *(undefined4 *)(pbVar2 + 0xc) = uVar5;
        uVar3 = *(undefined4 *)(pbVar10 + 0x14);
        *(undefined4 *)(pbVar2 + 0x10) = *(undefined4 *)(pbVar10 + 0x10);
        *(undefined4 *)(pbVar2 + 0x14) = uVar3;
        *(undefined4 *)(pbVar10 + 0x10) = 0;
        *(undefined4 *)(pbVar10 + 0x14) = 0xf;
        *pbVar10 = (std::string)0x0;
        *(int *)(pGVar7 + 0x14c) = *(int *)(pGVar7 + 0x14c) + 0x18;
      }
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar15 = (nothrow_t *)(local_28 + 1);
        ppppuVar12 = (undefined4 ****)local_3c[0];
        if ((nothrow_t *)0xfff < pnVar15) {
          ppppuVar12 = (undefined4 ****)local_3c[0][-1];
          pnVar15 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)ppppuVar12))) goto LAB_004c946f;
        }
        operator_delete(ppppuVar12,pnVar15);
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < (int)local_40);
  }
  debugPrint("SAVEHANDLER","Loaded %d completed synthetics",local_40);
  pGVar6 = g_gameLogic;
  local_14 = 1;
  iVar16 = *(int *)(g_gameLogic + 0x48);
  ghidra::lib::_Tree___Erase((ghidra::lib::_Tree_t *)(g_gameLogic + 0x48),*(ghidra::lib::_Tree_node_t **)(iVar16 + 4));
  pcVar17 = local_50;
  p_Var19 = local_54;
  *(int *)(*(int *)(pGVar6 + 0x48) + 4) = iVar16;
  **(int **)(pGVar6 + 0x48) = iVar16;
  local_14 = 0xffffffff;
  *(int *)(*(int *)(pGVar6 + 0x48) + 8) = iVar16;
  *(undefined4 *)(pGVar6 + 0x4c) = 0;
  (*local_50)(&local_44,4,1,local_54);
  local_4c = 0;
  if (0 < (int)local_44._Placeholder) {
    do {
      readLengthString((_iobuf *)pbVar8);
      local_14 = 2;
      local_40 = (undefined4 *)0x0;
      (*pcVar17)(&local_40,4,1,p_Var19);
      piVar11 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)(g_gameLogic + 0x48),(std::string *)local_3c);
      *piVar11 = (int)local_40;
      ppppuVar12 = local_3c;
      if (0xf < local_28) {
        ppppuVar12 = (undefined4 ****)local_3c[0];
      }
      debugPrint("SAVEHANDLER","...loaded rego %s with state %d",ppppuVar12,local_40);
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar15 = (nothrow_t *)(local_28 + 1);
        ppppuVar12 = (undefined4 ****)local_3c[0];
        if ((nothrow_t *)0xfff < pnVar15) {
          ppppuVar12 = (undefined4 ****)local_3c[0][-1];
          pnVar15 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)ppppuVar12))) {
LAB_004c946f:
            local_14 = 0xffffffff;
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppuVar12,pnVar15);
      }
      local_4c = local_4c + 1;
    } while (local_4c < (int)local_44._Placeholder);
  }
  debugPrint("SAVEHANDLER","Loaded %d completed ship instance states",local_44._Placeholder);
  local_4c = 0;
  (*pcVar17)(&local_4c,4,1,p_Var19);
  local_44._Placeholder = (void *)0x0;
  if (0 < local_4c) {
    do {
      (*pcVar17)(&local_58,4,1,p_Var19);
      (*pcVar17)(&local_45,1,1,p_Var19);
      (*pcVar17)(&local_5c,4,1,p_Var19);
      (*pcVar17)(&local_60,4,1,p_Var19);
      (*pcVar17)(&local_64,4,1,p_Var19);
      (*pcVar17)(&local_68,4,1,p_Var19);
      if (ghidra::Singleton<void>::instance == (FictionData *)0x0) {
        ghidra::Singleton<void>::instance = operator_new(0x18);
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
        *(undefined4 *)ghidra::Singleton<void>::instance = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 4) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 8) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0xc) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
      }
      uVar13 = 0;
      uVar18 = *(int *)(ghidra::Singleton<void>::instance + 4) - *(int *)ghidra::Singleton<void>::instance >> 2;
      if (uVar18 != 0) {
        local_40 = *(undefined4 **)ghidra::Singleton<void>::instance;
        puVar14 = local_40;
        do {
          p_Var19 = local_54;
          if (*(undefined4 **)*puVar14 == local_58) {
            iVar16 = local_40[uVar13];
            if (iVar16 != 0) {
              *(undefined1 *)(iVar16 + 0xe0) = local_45;
              *(undefined4 *)(iVar16 + 0xd8) = local_5c;
              *(undefined4 *)(iVar16 + 0xd4) = local_60;
              *(undefined4 *)(iVar16 + 0xd0) = local_64;
              *(undefined4 *)(iVar16 + 0xdc) = local_68;
              puVar14 = (undefined4 *)(iVar16 + 8);
              if (0xf < *(uint *)(iVar16 + 0x1c)) {
                puVar14 = (undefined4 *)*puVar14;
              }
              pcVar20 = "..faction %s loaded";
              goto LAB_004c940c;
            }
            break;
          }
          uVar13 = uVar13 + 1;
          puVar14 = puVar14 + 1;
        } while (uVar13 < uVar18);
      }
      pcVar20 = "Invalid faction \'%d\' loaded";
      puVar14 = local_58;
LAB_004c940c:
      debugPrint("SAVEHANDLER",pcVar20,puVar14);
      local_44._Placeholder = local_44._Placeholder + 1;
      pcVar17 = local_50;
    } while ((int)local_44._Placeholder < local_4c);
  }
  debugPrint("SAVEHANDLER","..loaded %d faction states",local_4c);
  V10::loadStatesActive((_iobuf *)pbVar8);
  V11::loadPassenger((_iobuf *)pbVar8);
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}
