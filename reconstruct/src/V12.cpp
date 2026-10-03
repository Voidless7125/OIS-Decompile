// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __cdecl V12::saveStats(_iobuf *param_1)
void V12::saveStats(_iobuf * param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  FILE *in_ECX;
  int *piVar4;
  undefined4 uStack_54;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  Stats *local_18;
  undefined4 local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bec31;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if (Singleton<Stats>::instance == (Stats *)0x0) {
    local_18 = operator_new(0x58);
    // [seh] local_8 = 0;
    Singleton<Stats>::instance = (Stats *)new ((void *)(local_18)) Stats();
  }
  // [seh] local_8 = 0xffffffff;
  fwrite(Singleton<Stats>::instance + 0x28,4,1,in_ECX);
  if (Singleton<Stats>::instance == (Stats *)0x0) {
    local_18 = operator_new(0x58);
    // [seh] local_8 = 1;
    Singleton<Stats>::instance = (Stats *)new ((void *)(local_18)) Stats();
    // [seh] local_8 = 0xffffffff;
  }
  fwrite(Singleton<Stats>::instance + 0x2c,4,1,in_ECX);
  if (Singleton<Stats>::instance == (Stats *)0x0) {
    local_18 = operator_new(0x58);
    // [seh] local_8 = 2;
    Singleton<Stats>::instance = (Stats *)new ((void *)(local_18)) Stats();
    // [seh] local_8 = 0xffffffff;
  }
  fwrite(Singleton<Stats>::instance + 0x30,4,1,in_ECX);
  if (Singleton<Stats>::instance == (Stats *)0x0) {
    local_18 = operator_new(0x58);
    // [seh] local_8 = 3;
    Singleton<Stats>::instance = (Stats *)new ((void *)(local_18)) Stats();
  }
  fwrite(Singleton<Stats>::instance + 0x34,4,1,in_ECX);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  // [seh] local_8._0_1_ = 4;
  // [seh] local_8._1_3_ = 0;
  if (Singleton<Stats>::instance == (Stats *)0x0) {
    local_18 = operator_new(0x58);
    // [seh] local_8._0_1_ = 5;
    Singleton<Stats>::instance = (Stats *)new ((void *)(local_18)) Stats();
  }
  // [seh] local_8._0_1_ = 4;
  local_14 = *(undefined4 *)(Singleton<Stats>::instance + 0x3c);
  fwrite(&local_14,4,1,in_ECX);
  if (Singleton<Stats>::instance == (Stats *)0x0) {
    local_18 = operator_new(0x58);
    // [seh] local_8._0_1_ = 6;
    Singleton<Stats>::instance = (Stats *)new ((void *)(local_18)) Stats();
    // [seh] local_8._0_1_ = 4;
  }
  piVar4 = (int *)**(undefined4 **)(Singleton<Stats>::instance + 0x38);
  while( true ) {
    if (Singleton<Stats>::instance == (Stats *)0x0) {
      local_18 = operator_new(0x58);
      // [seh] local_8._0_1_ = 7;
      Singleton<Stats>::instance = (Stats *)new ((void *)(local_18)) Stats();
      // [seh] local_8._0_1_ = 4;
    }
    if (piVar4 == *(int **)(Singleton<Stats>::instance + 0x38)) break;
    ghidra::str::ctor((std::string *)&uStack_54,(std::string *)(piVar4 + 4))
    ;
    SaveHandler::writeLengthString();
    fwrite(piVar4 + 10,4,1,in_ECX);
    uStack_54 = 0x4b98ff;
    debugPrint("SAVEHANDLER","  Stat: %s, %f");
    piVar2 = (int *)piVar4[2];
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      cVar1 = *(char *)(*piVar2 + 0xd);
      piVar4 = piVar2;
      piVar2 = (int *)*piVar2;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar2 + 0xd);
        piVar4 = piVar2;
        piVar2 = (int *)*piVar2;
      }
    }
    else {
      cVar1 = *(char *)(piVar4[1] + 0xd);
      piVar3 = (int *)piVar4[1];
      piVar2 = piVar4;
      while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
        cVar1 = *(char *)(piVar4[1] + 0xd);
        piVar3 = (int *)piVar4[1];
        piVar2 = piVar4;
      }
    }
  }
  debugPrint("SAVEHANDLER","Saved %d custom stats.");
  ghidra::lib::vector___Tidy((ghidra::vector *)&local_28);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __cdecl V12::saveFogOfWarState(_iobuf *param_1)
void V12::saveFogOfWarState(_iobuf * param_1)

{
  int iVar1;
  int *piVar2;
  FILE *in_ECX;
  int iVar3;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_1c = *(int *)(g_gameData + 0x40) - *(int *)(g_gameData + 0x3c) >> 2;
  debugPrint("SAVEHANDLER","Saving out %d sectors worth of fog",local_1c);
  fwrite(&local_1c,4,1,in_ECX);
  local_18 = 0;
  iVar3 = *(int *)(g_gameData + 0x3c);
  if (*(int *)(g_gameData + 0x40) - iVar3 >> 2 != 0) {
    do {
      iVar1 = local_18 * 4;
      fwrite(*(void **)(iVar1 + iVar3),4,1,in_ECX);
      piVar2 = ghidra::lib::map__operator_x5b_x5d
                         ((ghidra::lib::map_t *)(*(int *)(g_gameData + 0xd0) + 0x348),
                          *(int **)(*(int *)(g_gameData + 0x3c) + iVar1));
      local_14 = 8;
      piVar2 = (int *)*piVar2;
      do {
        local_10 = 8;
        do {
          local_c = piVar2[1] - *piVar2 >> 2;
          fwrite(&local_c,4,1,in_ECX);
          local_8 = 0;
          if (0 < local_c) {
            do {
              fwrite(*(void **)(*piVar2 + local_8 * 4),4,1,in_ECX);
              fwrite((void *)(*(int *)(*piVar2 + local_8 * 4) + 4),4,1,in_ECX);
              fwrite((void *)(*(int *)(*piVar2 + local_8 * 4) + 8),4,1,in_ECX);
              fwrite((void *)(*(int *)(*piVar2 + local_8 * 4) + 0xc),4,1,in_ECX);
              fwrite((void *)(*(int *)(*piVar2 + local_8 * 4) + 0x10),4,1,in_ECX);
              local_8 = local_8 + 1;
            } while (local_8 < local_c);
          }
          piVar2 = piVar2 + 3;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
        local_14 = local_14 + -1;
      } while (local_14 != 0);
      local_18 = local_18 + 1;
      iVar3 = *(int *)(g_gameData + 0x3c);
      local_10 = 0;
      local_14 = 0;
    } while (local_18 < (uint)(*(int *)(g_gameData + 0x40) - iVar3 >> 2));
  }
  return;
}


// Ghidra: void __cdecl V12::saveEmails(_iobuf *param_1)
void V12::saveEmails(_iobuf * param_1)

{
  char stack0xffffff94[1] = {0};  // [pseudo] address of an unnamed stack slot
  void *pvVar1;
  FILE *_File;
  EmailManager *pEVar2;
  FILE *in_ECX;
  int iVar3;
  std::string *pbVar4;
  int *piVar5;
  FILE *pFVar6;
  uint uVar7;
  std::string *pbVar8;
  int iVar9;
  code *pcVar10;
  std::string *pbVar11;
  std::string *local_44;
  std::string *local_40;
  std::string *local_3c;
  std::string *local_38;
  std::string *local_34;
  std::string *local_30;
  EmailManager *local_2c;
  EmailManager *local_28;
  int local_24;
  FILE *local_20;
  uint local_1c;
  uint local_18;
  undefined1 local_11;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bed10;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  local_18 = (*(int **)(g_gameData + 300))[1] - **(int **)(g_gameData + 300) >> 2;
  local_20 = in_ECX;
  fwrite(&local_18,4,1,in_ECX);
  debugPrint("SAVEHANDLER","Writing %d emails...");
  local_1c = 0;
  piVar5 = *(int **)(g_gameData + 300);
  if (piVar5[1] - *piVar5 >> 2 != 0) {
    do {
      pvVar1 = *(void **)(*piVar5 + local_1c * 4);
      fwrite(pvVar1,4,1,in_ECX);
      ghidra::str::ctor
                ((std::string *)&stack0xffffff94,(std::string *)((int)pvVar1 + 4));
      SaveHandler::writeLengthString();
      ghidra::str::ctor
                ((std::string *)&stack0xffffff94,(std::string *)((int)pvVar1 + 0x68));
      SaveHandler::writeLengthString();
      ghidra::str::ctor
                ((std::string *)&stack0xffffff94,(std::string *)((int)pvVar1 + 0x1c));
      SaveHandler::writeLengthString();
      ghidra::str::ctor
                ((std::string *)&stack0xffffff94,(std::string *)((int)pvVar1 + 0x34));
      SaveHandler::writeLengthString();
      ghidra::str::ctor
                ((std::string *)&stack0xffffff94,(std::string *)((int)pvVar1 + 0x80));
      SaveHandler::writeLengthString();
      fwrite((void *)((int)pvVar1 + 0x98),4,1,in_ECX);
      fwrite((void *)((int)pvVar1 + 100),1,1,in_ECX);
      fwrite((void *)((int)pvVar1 + 0x9c),1,1,in_ECX);
      local_1c = local_1c + 1;
      piVar5 = *(int **)(g_gameData + 300);
    } while (local_1c < (uint)(piVar5[1] - *piVar5 >> 2));
  }
  pEVar2 = ghidra::Singleton<void>::instance;
  if (ghidra::Singleton<void>::instance == (EmailManager *)0x0) {
    pEVar2 = operator_new(0x2c);
    ghidra::Singleton<void>::instance = pEVar2;
    *pEVar2 = (byte)0x0;
    *(undefined4 *)(pEVar2 + 4) = 0;
    *(undefined4 *)(pEVar2 + 8) = 0;
    *(undefined4 *)(pEVar2 + 0xc) = 0;
    *(undefined4 *)(pEVar2 + 0x10) = 0;
    *(undefined4 *)(pEVar2 + 0x14) = 0;
    *(undefined4 *)(pEVar2 + 0x18) = 0;
    *(undefined4 *)(pEVar2 + 0x1c) = 0;
    *(undefined4 *)(pEVar2 + 0x20) = 0;
    *(undefined4 *)(pEVar2 + 0x24) = 0;
    *(undefined4 *)(pEVar2 + 0x28) = 0;
    local_28 = pEVar2;
  }
  local_18 = *(int *)(pEVar2 + 0x18) - *(int *)(pEVar2 + 0x14) >> 2;
  fwrite(&local_18,4,1,in_ECX);
  debugPrint("SAVEHANDLER","Writing %d non-synced emails...");
  uVar7 = 0;
  while( true ) {
    pEVar2 = ghidra::Singleton<void>::instance;
    local_1c = uVar7;
    if (ghidra::Singleton<void>::instance == (EmailManager *)0x0) {
      pEVar2 = operator_new(0x2c);
      ghidra::Singleton<void>::instance = pEVar2;
      *pEVar2 = (byte)0x0;
      *(undefined4 *)(pEVar2 + 4) = 0;
      *(undefined4 *)(pEVar2 + 8) = 0;
      *(undefined4 *)(pEVar2 + 0xc) = 0;
      *(undefined4 *)(pEVar2 + 0x10) = 0;
      *(undefined4 *)(pEVar2 + 0x14) = 0;
      *(undefined4 *)(pEVar2 + 0x18) = 0;
      *(undefined4 *)(pEVar2 + 0x1c) = 0;
      *(undefined4 *)(pEVar2 + 0x20) = 0;
      *(undefined4 *)(pEVar2 + 0x24) = 0;
      *(undefined4 *)(pEVar2 + 0x28) = 0;
      local_28 = pEVar2;
    }
    if ((uint)(*(int *)(pEVar2 + 0x18) - *(int *)(pEVar2 + 0x14) >> 2) <= uVar7) break;
    if (pEVar2 == (EmailManager *)0x0) {
      pEVar2 = operator_new(0x2c);
      ghidra::Singleton<void>::instance = pEVar2;
      *pEVar2 = (byte)0x0;
      *(undefined4 *)(pEVar2 + 4) = 0;
      *(undefined4 *)(pEVar2 + 8) = 0;
      *(undefined4 *)(pEVar2 + 0xc) = 0;
      *(undefined4 *)(pEVar2 + 0x10) = 0;
      *(undefined4 *)(pEVar2 + 0x14) = 0;
      *(undefined4 *)(pEVar2 + 0x18) = 0;
      *(undefined4 *)(pEVar2 + 0x1c) = 0;
      *(undefined4 *)(pEVar2 + 0x20) = 0;
      *(undefined4 *)(pEVar2 + 0x24) = 0;
      *(undefined4 *)(pEVar2 + 0x28) = 0;
      local_28 = pEVar2;
    }
    pvVar1 = *(void **)(*(int *)(pEVar2 + 0x14) + uVar7 * 4);
    fwrite(pvVar1,4,1,in_ECX);
    ghidra::str::ctor
              ((std::string *)&stack0xffffff94,(std::string *)((int)pvVar1 + 4));
    SaveHandler::writeLengthString();
    ghidra::str::ctor
              ((std::string *)&stack0xffffff94,(std::string *)((int)pvVar1 + 0x68));
    SaveHandler::writeLengthString();
    ghidra::str::ctor
              ((std::string *)&stack0xffffff94,(std::string *)((int)pvVar1 + 0x1c));
    SaveHandler::writeLengthString();
    ghidra::str::ctor
              ((std::string *)&stack0xffffff94,(std::string *)((int)pvVar1 + 0x34));
    SaveHandler::writeLengthString();
    ghidra::str::ctor
              ((std::string *)&stack0xffffff94,(std::string *)((int)pvVar1 + 0x80));
    SaveHandler::writeLengthString();
    fwrite((void *)((int)pvVar1 + 0x98),4,1,in_ECX);
    *(undefined1 *)((int)pvVar1 + 100) = 0;
    *(undefined1 *)((int)pvVar1 + 0x9c) = 0;
    uVar7 = local_1c + 1;
  }
  pbVar8 = (std::string *)0x0;
  local_44 = (std::string *)0x0;
  local_40 = (std::string *)0x0;
  local_3c = (std::string *)0x0;
  // [seh] local_8 = 0;
  local_1c = **(int **)(*(int *)(g_gameData + 300) + 0xc);
  if ((int *)local_1c != *(int **)(*(int *)(g_gameData + 300) + 0xc)) {
    pbVar11 = (std::string *)0x0;
    do {
      if (*(char *)(local_1c + 0x28) != '\0') {
        if (pbVar11 == pbVar8) {
          ghidra::lib::vector___Emplace_reallocate
                    ((ghidra::vector *)&local_44,(std::string *)pbVar8,
                     (std::string *)(local_1c + 0x10));
          pbVar8 = local_40;
          pbVar11 = local_3c;
        }
        else {
          ghidra::str::ctor(pbVar8,(std::string *)(local_1c + 0x10));
          local_40 = pbVar8 + 0x18;
          pbVar8 = local_40;
        }
      }
      ghidra::lib::_Tree_unchecked_const_iterator__operator_x2b_x2b
                ((ghidra::lib::_Tree_unchecked_const_iterator_t *)&local_1c);
      in_ECX = local_20;
    } while (local_1c != *(int *)(*(int *)(g_gameData + 300) + 0xc));
  }
  pbVar4 = local_44;
  local_1c = ((int)pbVar8 - (int)local_44) / 0x18;
  local_18 = local_1c;
  debugPrint("SAVEHANDLER","Writing %d \'articles read\'...");
  pcVar10 = fwrite_exref;
  fwrite(&local_18,4,1,in_ECX);
  if (local_1c != 0) {
    uVar7 = 0;
    do {
      ghidra::str::ctor((std::string *)&stack0xffffff94,pbVar4);
      SaveHandler::writeLengthString();
      uVar7 = uVar7 + 1;
      pbVar4 = pbVar4 + 0x18;
      pcVar10 = fwrite_exref;
    } while (uVar7 < local_1c);
  }
  local_18 = (*(int *)(*(int *)(g_gameData + 300) + 0x24) -
             *(int *)(*(int *)(g_gameData + 300) + 0x20)) / 0x18;
  debugPrint("SAVEHANDLER","Writing %d \'drafts sent\'...");
  (*pcVar10)();
  local_1c = 0;
  piVar5 = (int *)(*(int *)(g_gameData + 300) + 0x20);
  iVar3 = *(int *)(*(int *)(g_gameData + 300) + 0x24) - *piVar5;
  iVar9 = iVar3 >> 0x1f;
  if (iVar3 / 0x18 + iVar9 != iVar9) {
    iVar9 = 0;
    do {
      ghidra::str::ctor
                ((std::string *)&stack0xffffff94,(std::string *)(*piVar5 + iVar9));
      SaveHandler::writeLengthString();
      local_1c = local_1c + 1;
      iVar9 = iVar9 + 0x18;
      piVar5 = (int *)(*(int *)(g_gameData + 300) + 0x20);
      pcVar10 = fwrite_exref;
    } while (local_1c < (uint)((*(int *)(*(int *)(g_gameData + 300) + 0x24) - *piVar5) / 0x18));
  }
  local_18 = (*(int *)(*(int *)(g_gameData + 300) + 0x18) -
             *(int *)(*(int *)(g_gameData + 300) + 0x14)) / 0x18;
  debugPrint("SAVEHANDLER","Writing %d \'articles downloaded\'...");
  (*pcVar10)();
  local_1c = 0;
  piVar5 = (int *)(*(int *)(g_gameData + 300) + 0x14);
  iVar3 = *(int *)(*(int *)(g_gameData + 300) + 0x18) - *piVar5;
  iVar9 = iVar3 >> 0x1f;
  if (iVar3 / 0x18 + iVar9 != iVar9) {
    iVar9 = 0;
    do {
      ghidra::str::ctor
                ((std::string *)&stack0xffffff94,(std::string *)(*piVar5 + iVar9));
      SaveHandler::writeLengthString();
      local_1c = local_1c + 1;
      iVar9 = iVar9 + 0x18;
      piVar5 = (int *)(*(int *)(g_gameData + 300) + 0x14);
    } while (local_1c < (uint)((*(int *)(*(int *)(g_gameData + 300) + 0x18) - *piVar5) / 0x18));
  }
  pbVar8 = (std::string *)0x0;
  local_38 = (std::string *)0x0;
  local_34 = (std::string *)0x0;
  local_30 = (std::string *)0x0;
  // [seh] local_8 = CONCAT31(local_8._1_3_,1);
  uVar7 = 0;
  pbVar11 = (std::string *)0x0;
  pEVar2 = ghidra::Singleton<void>::instance;
  while( true ) {
    if (pEVar2 == (EmailManager *)0x0) {
      pEVar2 = operator_new(0x2c);
      ghidra::Singleton<void>::instance = pEVar2;
      *pEVar2 = (byte)0x0;
      *(undefined4 *)(pEVar2 + 4) = 0;
      *(undefined4 *)(pEVar2 + 8) = 0;
      *(undefined4 *)(pEVar2 + 0xc) = 0;
      *(undefined4 *)(pEVar2 + 0x10) = 0;
      *(undefined4 *)(pEVar2 + 0x14) = 0;
      *(undefined4 *)(pEVar2 + 0x18) = 0;
      *(undefined4 *)(pEVar2 + 0x1c) = 0;
      *(undefined4 *)(pEVar2 + 0x20) = 0;
      *(undefined4 *)(pEVar2 + 0x24) = 0;
      *(undefined4 *)(pEVar2 + 0x28) = 0;
      local_28 = pEVar2;
    }
    pbVar4 = local_38;
    if ((uint)(*(int *)(pEVar2 + 0xc) - *(int *)(pEVar2 + 8) >> 2) <= uVar7) break;
    if (pEVar2 == (EmailManager *)0x0) {
      pEVar2 = operator_new(0x2c);
      ghidra::Singleton<void>::instance = pEVar2;
      *pEVar2 = (byte)0x0;
      *(undefined4 *)(pEVar2 + 4) = 0;
      *(undefined4 *)(pEVar2 + 8) = 0;
      *(undefined4 *)(pEVar2 + 0xc) = 0;
      *(undefined4 *)(pEVar2 + 0x10) = 0;
      *(undefined4 *)(pEVar2 + 0x14) = 0;
      *(undefined4 *)(pEVar2 + 0x18) = 0;
      *(undefined4 *)(pEVar2 + 0x1c) = 0;
      *(undefined4 *)(pEVar2 + 0x20) = 0;
      *(undefined4 *)(pEVar2 + 0x24) = 0;
      *(undefined4 *)(pEVar2 + 0x28) = 0;
      local_28 = pEVar2;
    }
    if (*(char *)(*(int *)(*(int *)(pEVar2 + 8) + uVar7 * 4) + 0x65) == '\0') {
LAB_004ba7bb:
      uVar7 = uVar7 + 1;
    }
    else {
      if (pEVar2 == (EmailManager *)0x0) {
        pEVar2 = operator_new(0x2c);
        ghidra::Singleton<void>::instance = pEVar2;
        *pEVar2 = (byte)0x0;
        *(undefined4 *)(pEVar2 + 4) = 0;
        *(undefined4 *)(pEVar2 + 8) = 0;
        *(undefined4 *)(pEVar2 + 0xc) = 0;
        *(undefined4 *)(pEVar2 + 0x10) = 0;
        *(undefined4 *)(pEVar2 + 0x14) = 0;
        *(undefined4 *)(pEVar2 + 0x18) = 0;
        *(undefined4 *)(pEVar2 + 0x1c) = 0;
        *(undefined4 *)(pEVar2 + 0x20) = 0;
        *(undefined4 *)(pEVar2 + 0x24) = 0;
        *(undefined4 *)(pEVar2 + 0x28) = 0;
        local_28 = pEVar2;
      }
      pbVar4 = (std::string *)(*(int *)(*(int *)(pEVar2 + 8) + uVar7 * 4) + 0xa0);
      if (pbVar11 == pbVar8) {
        ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)&local_38,(std::string *)pbVar8,pbVar4);
        pEVar2 = ghidra::Singleton<void>::instance;
        pbVar8 = local_34;
        pbVar11 = local_30;
        goto LAB_004ba7bb;
      }
      ghidra::str::ctor(pbVar8,pbVar4);
      pbVar8 = pbVar8 + 0x18;
      uVar7 = uVar7 + 1;
      pEVar2 = ghidra::Singleton<void>::instance;
      local_34 = pbVar8;
    }
  }
  local_1c = ((int)pbVar8 - (int)local_38) / 0x18;
  local_18 = local_1c;
  debugPrint("SAVEHANDLER","Writing %d \'sent emails\'...");
  _File = local_20;
  fwrite(&local_18,4,1,local_20);
  uVar7 = 0;
  if (local_1c != 0) {
    do {
      ghidra::str::ctor((std::string *)&stack0xffffff94,pbVar4);
      SaveHandler::writeLengthString();
      uVar7 = uVar7 + 1;
      pbVar4 = pbVar4 + 0x18;
    } while (uVar7 < local_1c);
  }
  local_11 = 1;
  pFVar6 = (FILE *)0x0;
  local_1c = 0;
  pEVar2 = ghidra::Singleton<void>::instance;
  do {
    local_20 = pFVar6;
    if (pEVar2 == (EmailManager *)0x0) {
      pEVar2 = operator_new(0x2c);
      ghidra::Singleton<void>::instance = pEVar2;
      *pEVar2 = (byte)0x0;
      *(undefined4 *)(pEVar2 + 4) = 0;
      *(undefined4 *)(pEVar2 + 8) = 0;
      *(undefined4 *)(pEVar2 + 0xc) = 0;
      *(undefined4 *)(pEVar2 + 0x10) = 0;
      *(undefined4 *)(pEVar2 + 0x14) = 0;
      *(undefined4 *)(pEVar2 + 0x18) = 0;
      *(undefined4 *)(pEVar2 + 0x1c) = 0;
      *(undefined4 *)(pEVar2 + 0x20) = 0;
      *(undefined4 *)(pEVar2 + 0x24) = 0;
      *(undefined4 *)(pEVar2 + 0x28) = 0;
      local_28 = pEVar2;
    }
    if ((uint)(*(int *)(pEVar2 + 0xc) - *(int *)(pEVar2 + 8) >> 2) <= pFVar6) {
      local_11 = 0;
      fwrite(&local_11,1,1,_File);
      debugPrint("SAVEHANDLER","Wrote out %d emails with RTF or has fired status...");
      ghidra::lib::vector___Tidy((ghidra::vector *)&local_38);
      ghidra::lib::vector___Tidy((ghidra::vector *)&local_44);
      // [seh] ExceptionList = local_10;
      return;
    }
    if (pEVar2 == (EmailManager *)0x0) {
      pEVar2 = operator_new(0x2c);
      ghidra::Singleton<void>::instance = pEVar2;
      *pEVar2 = (byte)0x0;
      *(undefined4 *)(pEVar2 + 4) = 0;
      *(undefined4 *)(pEVar2 + 8) = 0;
      *(undefined4 *)(pEVar2 + 0xc) = 0;
      *(undefined4 *)(pEVar2 + 0x10) = 0;
      *(undefined4 *)(pEVar2 + 0x14) = 0;
      *(undefined4 *)(pEVar2 + 0x18) = 0;
      *(undefined4 *)(pEVar2 + 0x1c) = 0;
      *(undefined4 *)(pEVar2 + 0x20) = 0;
      *(undefined4 *)(pEVar2 + 0x24) = 0;
      *(undefined4 *)(pEVar2 + 0x28) = 0;
      local_28 = pEVar2;
    }
    iVar9 = (int)pFVar6 * 4;
    if (*(char *)(*(int *)(*(int *)(pEVar2 + 8) + iVar9) + 0x65) == '\0') {
      if (pEVar2 == (EmailManager *)0x0) {
        pEVar2 = operator_new(0x2c);
        ghidra::Singleton<void>::instance = pEVar2;
        *pEVar2 = (byte)0x0;
        *(undefined4 *)(pEVar2 + 4) = 0;
        *(undefined4 *)(pEVar2 + 8) = 0;
        *(undefined4 *)(pEVar2 + 0xc) = 0;
        *(undefined4 *)(pEVar2 + 0x10) = 0;
        *(undefined4 *)(pEVar2 + 0x14) = 0;
        *(undefined4 *)(pEVar2 + 0x18) = 0;
        *(undefined4 *)(pEVar2 + 0x1c) = 0;
        *(undefined4 *)(pEVar2 + 0x20) = 0;
        *(undefined4 *)(pEVar2 + 0x24) = 0;
        *(undefined4 *)(pEVar2 + 0x28) = 0;
        local_28 = pEVar2;
      }
      if (*(char *)(*(int *)(*(int *)(pEVar2 + 8) + iVar9) + 100) != '\0') goto LAB_004baa21;
      if (pEVar2 == (EmailManager *)0x0) {
        pEVar2 = operator_new(0x2c);
        ghidra::Singleton<void>::instance = pEVar2;
        *pEVar2 = (byte)0x0;
        *(undefined4 *)(pEVar2 + 4) = 0;
        *(undefined4 *)(pEVar2 + 8) = 0;
        *(undefined4 *)(pEVar2 + 0xc) = 0;
        *(undefined4 *)(pEVar2 + 0x10) = 0;
        *(undefined4 *)(pEVar2 + 0x14) = 0;
        *(undefined4 *)(pEVar2 + 0x18) = 0;
        *(undefined4 *)(pEVar2 + 0x1c) = 0;
        *(undefined4 *)(pEVar2 + 0x20) = 0;
        *(undefined4 *)(pEVar2 + 0x24) = 0;
        *(undefined4 *)(pEVar2 + 0x28) = 0;
        local_28 = pEVar2;
      }
      if (*(float *)(*(int *)(*(int *)(pEVar2 + 8) + iVar9) + 0x98) != -1.0) goto LAB_004baa21;
    }
    else {
LAB_004baa21:
      local_1c = local_1c + 1;
      fwrite(&local_11,1,1,_File);
      pEVar2 = ghidra::Singleton<void>::instance;
      if (ghidra::Singleton<void>::instance == (EmailManager *)0x0) {
        pEVar2 = operator_new(0x2c);
        ghidra::Singleton<void>::instance = pEVar2;
        *pEVar2 = (byte)0x0;
        *(undefined4 *)(pEVar2 + 4) = 0;
        *(undefined4 *)(pEVar2 + 8) = 0;
        *(undefined4 *)(pEVar2 + 0xc) = 0;
        *(undefined4 *)(pEVar2 + 0x10) = 0;
        *(undefined4 *)(pEVar2 + 0x14) = 0;
        *(undefined4 *)(pEVar2 + 0x18) = 0;
        *(undefined4 *)(pEVar2 + 0x1c) = 0;
        *(undefined4 *)(pEVar2 + 0x20) = 0;
        *(undefined4 *)(pEVar2 + 0x24) = 0;
        *(undefined4 *)(pEVar2 + 0x28) = 0;
        local_28 = pEVar2;
      }
      ghidra::str::ctor
                ((std::string *)&stack0xffffff94,
                 (std::string *)(*(int *)(*(int *)(pEVar2 + 8) + iVar9) + 0xa0));
      SaveHandler::writeLengthString();
      pEVar2 = ghidra::Singleton<void>::instance;
      if (ghidra::Singleton<void>::instance == (EmailManager *)0x0) {
        pEVar2 = operator_new(0x2c);
        ghidra::Singleton<void>::instance = pEVar2;
        *pEVar2 = (byte)0x0;
        *(undefined4 *)(pEVar2 + 4) = 0;
        *(undefined4 *)(pEVar2 + 8) = 0;
        *(undefined4 *)(pEVar2 + 0xc) = 0;
        *(undefined4 *)(pEVar2 + 0x10) = 0;
        *(undefined4 *)(pEVar2 + 0x14) = 0;
        *(undefined4 *)(pEVar2 + 0x18) = 0;
        *(undefined4 *)(pEVar2 + 0x1c) = 0;
        *(undefined4 *)(pEVar2 + 0x20) = 0;
        *(undefined4 *)(pEVar2 + 0x24) = 0;
        *(undefined4 *)(pEVar2 + 0x28) = 0;
        local_28 = pEVar2;
      }
      fwrite((void *)(*(int *)(*(int *)(pEVar2 + 8) + iVar9) + 0x98),4,1,_File);
      pEVar2 = ghidra::Singleton<void>::instance;
      if (ghidra::Singleton<void>::instance == (EmailManager *)0x0) {
        pEVar2 = operator_new(0x2c);
        ghidra::Singleton<void>::instance = pEVar2;
        *pEVar2 = (byte)0x0;
        *(undefined4 *)(pEVar2 + 4) = 0;
        *(undefined4 *)(pEVar2 + 8) = 0;
        *(undefined4 *)(pEVar2 + 0xc) = 0;
        *(undefined4 *)(pEVar2 + 0x10) = 0;
        *(undefined4 *)(pEVar2 + 0x14) = 0;
        *(undefined4 *)(pEVar2 + 0x18) = 0;
        *(undefined4 *)(pEVar2 + 0x1c) = 0;
        *(undefined4 *)(pEVar2 + 0x20) = 0;
        *(undefined4 *)(pEVar2 + 0x24) = 0;
        *(undefined4 *)(pEVar2 + 0x28) = 0;
        local_28 = pEVar2;
      }
      fwrite((void *)(*(int *)(*(int *)(pEVar2 + 8) + iVar9) + 100),1,1,_File);
      pEVar2 = ghidra::Singleton<void>::instance;
      if (ghidra::Singleton<void>::instance == (EmailManager *)0x0) {
        pEVar2 = operator_new(0x2c);
        ghidra::Singleton<void>::instance = pEVar2;
        *pEVar2 = (byte)0x0;
        *(undefined4 *)(pEVar2 + 4) = 0;
        *(undefined4 *)(pEVar2 + 8) = 0;
        *(undefined4 *)(pEVar2 + 0xc) = 0;
        *(undefined4 *)(pEVar2 + 0x10) = 0;
        *(undefined4 *)(pEVar2 + 0x14) = 0;
        *(undefined4 *)(pEVar2 + 0x18) = 0;
        *(undefined4 *)(pEVar2 + 0x1c) = 0;
        *(undefined4 *)(pEVar2 + 0x20) = 0;
        *(undefined4 *)(pEVar2 + 0x24) = 0;
        *(undefined4 *)(pEVar2 + 0x28) = 0;
        local_28 = pEVar2;
      }
      fwrite((void *)(*(int *)(*(int *)(pEVar2 + 8) + iVar9) + 0x65),1,1,_File);
      pEVar2 = ghidra::Singleton<void>::instance;
      if (ghidra::Singleton<void>::instance == (EmailManager *)0x0) {
        pEVar2 = operator_new(0x2c);
        ghidra::Singleton<void>::instance = pEVar2;
        *pEVar2 = (byte)0x0;
        *(undefined4 *)(pEVar2 + 4) = 0;
        *(undefined4 *)(pEVar2 + 8) = 0;
        *(undefined4 *)(pEVar2 + 0xc) = 0;
        *(undefined4 *)(pEVar2 + 0x10) = 0;
        *(undefined4 *)(pEVar2 + 0x14) = 0;
        *(undefined4 *)(pEVar2 + 0x18) = 0;
        *(undefined4 *)(pEVar2 + 0x1c) = 0;
        *(undefined4 *)(pEVar2 + 0x20) = 0;
        *(undefined4 *)(pEVar2 + 0x24) = 0;
        *(undefined4 *)(pEVar2 + 0x28) = 0;
        local_28 = pEVar2;
      }
      local_24 = *(int *)(pEVar2 + 8) + iVar9;
      if (pEVar2 == (EmailManager *)0x0) {
        pEVar2 = operator_new(0x2c);
        ghidra::Singleton<void>::instance = pEVar2;
        *pEVar2 = (byte)0x0;
        *(undefined4 *)(pEVar2 + 4) = 0;
        *(undefined4 *)(pEVar2 + 8) = 0;
        *(undefined4 *)(pEVar2 + 0xc) = 0;
        *(undefined4 *)(pEVar2 + 0x10) = 0;
        *(undefined4 *)(pEVar2 + 0x14) = 0;
        *(undefined4 *)(pEVar2 + 0x18) = 0;
        *(undefined4 *)(pEVar2 + 0x1c) = 0;
        *(undefined4 *)(pEVar2 + 0x20) = 0;
        *(undefined4 *)(pEVar2 + 0x24) = 0;
        *(undefined4 *)(pEVar2 + 0x28) = 0;
      }
      local_28 = (EmailManager *)(*(int *)(pEVar2 + 8) + iVar9);
      if (pEVar2 == (EmailManager *)0x0) {
        pEVar2 = operator_new(0x2c);
        ghidra::Singleton<void>::instance = pEVar2;
        *pEVar2 = (byte)0x0;
        *(undefined4 *)(pEVar2 + 4) = 0;
        *(undefined4 *)(pEVar2 + 8) = 0;
        *(undefined4 *)(pEVar2 + 0xc) = 0;
        *(undefined4 *)(pEVar2 + 0x10) = 0;
        *(undefined4 *)(pEVar2 + 0x14) = 0;
        *(undefined4 *)(pEVar2 + 0x18) = 0;
        *(undefined4 *)(pEVar2 + 0x1c) = 0;
        *(undefined4 *)(pEVar2 + 0x20) = 0;
        *(undefined4 *)(pEVar2 + 0x24) = 0;
        *(undefined4 *)(pEVar2 + 0x28) = 0;
        local_2c = pEVar2;
      }
      if (pEVar2 == (EmailManager *)0x0) {
        local_2c = operator_new(0x2c);
        ghidra::Singleton<void>::instance = local_2c;
        *local_2c = (byte)0x0;
        *(undefined4 *)(local_2c + 4) = 0;
        *(undefined4 *)(local_2c + 8) = 0;
        *(undefined4 *)(local_2c + 0xc) = 0;
        *(undefined4 *)(local_2c + 0x10) = 0;
        *(undefined4 *)(local_2c + 0x14) = 0;
        *(undefined4 *)(local_2c + 0x18) = 0;
        *(undefined4 *)(local_2c + 0x1c) = 0;
        *(undefined4 *)(local_2c + 0x20) = 0;
        *(undefined4 *)(local_2c + 0x24) = 0;
        *(undefined4 *)(local_2c + 0x28) = 0;
      }
      debugPrint("SAVEHANDLER","Wrote out email %s with RTF states (%f, %s, %s");
      pEVar2 = ghidra::Singleton<void>::instance;
      pFVar6 = local_20;
    }
    pFVar6 = (FILE *)((int)pFVar6 + 1);
  } while( true );
}


// Ghidra: void __cdecl V12::saveFlags(_iobuf *param_1)
void V12::saveFlags(_iobuf * param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  bool bVar1;
  FlagManager *pFVar2;
  std::string *pbVar3;
  std::string *pbVar4;
  int iVar5;
  std::string *this_;
  std::string abStack_74 [12];
  undefined4 uStack_68;
  std::string local_5c [4];
  undefined4 uStack_58;
  std::string *local_30;
  std::string *local_2c;
  std::string *local_28;
  undefined1 *local_20;
  FILE *local_1c;
  int local_18;
  int local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] puStack_c = &DAT_005bedb0;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  pbVar3 = (std::string *)0x0;
  this_ = (std::string *)0x0;
  local_30 = (std::string *)0x0;
  local_2c = (std::string *)0x0;
  local_28 = (std::string *)0x0;
  // [seh] local_8 = 0;
  pFVar2 = ghidra::any_singleton();
  iVar5 = **(int **)(pFVar2 + 0xc);
  local_14 = iVar5;
  pFVar2 = ghidra::any_singleton();
  pbVar4 = pbVar3;
  if (iVar5 != *(int *)(pFVar2 + 0xc)) {
    do {
      pbVar4 = (std::string *)(iVar5 + 0x10);
      if (*(char *)(iVar5 + 0x28) != '\0') {
        local_20 = local_5c;
        local_5c[0] = (std::string)0x0;
        uStack_68 = 0x4bbd14;
        ghidra::str::assign(local_5c,"can_detect",10);
        // [seh] local_8._0_1_ = 1;
        ghidra::str::ctor(abStack_74,pbVar4);
        // [seh] local_8 = (uint)local_8._1_3_ << 8;
        bVar1 = stringContains();
        if (!bVar1) {
          if (pbVar3 == (std::string *)this_) {
            ghidra::lib::vector___Emplace_reallocate
                      ((ghidra::vector *)&local_30,(std::string *)this_,pbVar4);
            pbVar3 = local_28;
            this_ = local_2c;
          }
          else {
            ghidra::str::ctor(this_,pbVar4);
            local_2c = this_ + 0x18;
            this_ = local_2c;
          }
        }
      }
      ghidra::lib::_Tree_unchecked_const_iterator__operator_x2b_x2b
                ((ghidra::lib::_Tree_unchecked_const_iterator_t *)&local_14);
      pFVar2 = ghidra::any_singleton();
      pbVar4 = local_30;
      iVar5 = local_14;
    } while (local_14 != *(int *)(pFVar2 + 0xc));
  }
  iVar5 = ((int)this_ - (int)pbVar4) / 0x18;
  uStack_58 = 0x4bbd9a;
  local_18 = iVar5;
  fwrite(&local_18,4,1,local_1c);
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    debugPrint("SAVEHANDLER"," flag: %s");
    ghidra::str::ctor(local_5c,pbVar4);
    SaveHandler::writeLengthString();
    pbVar4 = pbVar4 + 0x18;
  }
  debugPrint("SAVEHANDLER","..saved %d flags");
  ghidra::lib::vector___Tidy((ghidra::vector *)&local_30);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __cdecl V12::saveFactionStates(_iobuf *param_1)
void V12::saveFactionStates(_iobuf * param_1)

{
  int iVar1;
  FictionData *pFVar2;
  undefined4 *puVar3;
  FILE *in_ECX;
  uint uVar4;
  int local_8;
  
  pFVar2 = ghidra::any_singleton();
  local_8 = *(int *)(pFVar2 + 4) - *(int *)pFVar2 >> 2;
  fwrite(&local_8,4,1,in_ECX);
  uVar4 = 0;
  while( true ) {
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
    if ((uint)(*(int *)(ghidra::Singleton<void>::instance + 4) - *(int *)ghidra::Singleton<void>::instance >> 2) <= uVar4)
    break;
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
    fwrite(*(void **)(*(int *)ghidra::Singleton<void>::instance + uVar4 * 4),4,1,in_ECX);
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
    fwrite((void *)(*(int *)(*(int *)ghidra::Singleton<void>::instance + uVar4 * 4) + 0xe0),1,1,in_ECX);
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
    fwrite((void *)(*(int *)(*(int *)ghidra::Singleton<void>::instance + uVar4 * 4) + 0xd8),4,1,in_ECX);
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
    fwrite((void *)(*(int *)(*(int *)ghidra::Singleton<void>::instance + uVar4 * 4) + 0xd4),4,1,in_ECX);
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
    fwrite((void *)(*(int *)(*(int *)ghidra::Singleton<void>::instance + uVar4 * 4) + 0xd0),4,1,in_ECX);
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
    fwrite((void *)(*(int *)(*(int *)ghidra::Singleton<void>::instance + uVar4 * 4) + 0xdc),4,1,in_ECX);
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
    iVar1 = *(int *)(*(int *)ghidra::Singleton<void>::instance + uVar4 * 4);
    puVar3 = (undefined4 *)(iVar1 + 8);
    if (0xf < *(uint *)(iVar1 + 0x1c)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    debugPrint("SAVEHANDLER","..faction %s saved",puVar3);
    uVar4 = uVar4 + 1;
  }
  debugPrint("SAVEHANDLER","..saved %d faction states",local_8);
  return;
}


// Ghidra: void __cdecl V12::savePlayerContracts(_iobuf *param_1)
void V12::savePlayerContracts(_iobuf * param_1)

{
  char stack0xffffffbc[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *pbVar1;
  FILE *in_ECX;
  int iVar2;
  int iVar3;
  GameData *pGVar4;
  Contract *unaff_ESI;
  uint uVar5;
  _iobuf *unaff_EDI;
  code *pcVar6;
  bool bVar7;
  int local_18;
  uint local_14;
  uint local_10;
  FILE *local_c;
  undefined1 local_5;
  
  pcVar6 = fwrite_exref;
  local_18 = *(int *)(g_gameData + 0x140) - *(int *)(g_gameData + 0x13c) >> 2;
  local_c = in_ECX;
  fwrite(&local_18,4,1,in_ECX);
  uVar5 = 0;
  if (*(int *)(g_gameData + 0x140) - *(int *)(g_gameData + 0x13c) >> 2 != 0) {
    do {
      writeContract(unaff_EDI,unaff_ESI);
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)(*(int *)(g_gameData + 0x140) - *(int *)(g_gameData + 0x13c) >> 2));
  }
  local_5 = 1;
  iVar3 = *(int *)(g_gameData + 0x3c);
  local_10 = 0;
  pGVar4 = g_gameData;
  if (*(int *)(g_gameData + 0x40) - iVar3 >> 2 != 0) {
    do {
      local_14 = 0;
      iVar3 = *(int *)(iVar3 + local_10 * 4);
      iVar2 = *(int *)(iVar3 + 0xcc);
      if (*(int *)(iVar3 + 0xd0) - iVar2 >> 2 != 0) {
        do {
          iVar3 = *(int *)(iVar2 + local_14 * 4);
          bVar7 = false;
          iVar2 = *(int *)(iVar3 + 0x254);
          if (iVar2 != 0) {
            bVar7 = *(int *)(iVar2 + 0x158) == 1;
          }
          if ((bVar7) &&
             (pbVar1 = *(std::string **)(iVar3 + 0x398), pbVar1 != (std::string *)0x0)) {
            uVar5 = 0;
            iVar3 = *(int *)(pbVar1 + 0xa0);
            if (*(int *)(pbVar1 + 0xa4) - iVar3 >> 2 != 0) {
              do {
                iVar2 = uVar5 * 4;
                if (*(float *)(*(int *)(iVar2 + iVar3) + 0xa8) != 0.0) {
                  fwrite(&local_5,1,1,local_c);
                  ghidra::str::ctor((std::string *)&stack0xffffffbc,pbVar1);
                  SaveHandler::writeLengthString();
                  ghidra::str::ctor
                            ((std::string *)&stack0xffffffbc,
                             *(std::string **)(*(int *)(pbVar1 + 0xa0) + iVar2));
                  SaveHandler::writeLengthString();
                  fwrite((void *)(*(int *)(iVar2 + *(int *)(pbVar1 + 0xa0)) + 0xa8),4,1,local_c);
                  debugPrint("SAVEHANDLER","Wrote contract %s with usage timer at %f");
                }
                uVar5 = uVar5 + 1;
                iVar3 = *(int *)(pbVar1 + 0xa0);
                pGVar4 = g_gameData;
              } while (uVar5 < (uint)(*(int *)(pbVar1 + 0xa4) - iVar3 >> 2));
            }
          }
          local_14 = local_14 + 1;
          iVar3 = *(int *)(*(int *)(pGVar4 + 0x3c) + local_10 * 4);
          iVar2 = *(int *)(iVar3 + 0xcc);
        } while (local_14 < (uint)(*(int *)(iVar3 + 0xd0) - iVar2 >> 2));
      }
      iVar3 = *(int *)(pGVar4 + 0x3c);
      local_10 = local_10 + 1;
      pcVar6 = fwrite_exref;
    } while (local_10 < (uint)(*(int *)(pGVar4 + 0x40) - iVar3 >> 2));
  }
  local_5 = 0;
  (*pcVar6)();
  debugPrint("SAVEHANDLER","...saved %d current contracts for the player");
  return;
}


// Ghidra: void __cdecl V12::loadPlayerContracts(_iobuf *param_1)
void V12::loadPlayerContracts(_iobuf * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff78[1] = {0};  // [pseudo] address of an unnamed stack slot
  MetaGameAction **ppMVar1;
  GameData *pGVar2;
  bool bVar3;
  _iobuf *p_Var4;
  Contract *pCVar5;
  Good *pGVar6;
  int iVar7;
  FlagManager *pFVar8;
  char *****pppppcVar9;
  FILE *in_ECX;
  nothrow_t *pnVar10;
  void *pvVar11;
  char *****pppppcVar12;
  code *pcVar13;
  uint unaff_EDI;
  int iVar14;
  uint uVar15;
  undefined4 uStack_84;
  char *pcVar16;
  undefined4 local_5c;
  Contract *local_58;
  SpaceStation *local_54;
  int local_4c;
  char local_45;
  void *local_44 [5];
  uint local_30;
  char ****local_2c [4];
  uint local_1c;
  uint local_18;
  _iobuf *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  uint local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bee80;
  // [seh] local_10 = ExceptionList;
  // [cookie] p_Var4 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_14 = p_Var4;
  ((GameLogic *)in_ECX)->clearPlayerContracts();
  pcVar13 = fread_exref;
  local_4c = 0;
  fread(&local_4c,4,1,in_ECX);
  iVar14 = 0;
  if (0 < local_4c) {
    do {
      pCVar5 = V11::readContract(p_Var4);
      local_58 = pCVar5;
      if (pCVar5 != (Contract *)0x0) {
        if ((*(int *)(pCVar5 + 0x54) == 0) || (*(int *)(*(int *)(pCVar5 + 0x54) + 0x18) == 2)) {
          ghidra::str::ctor
                    ((std::string *)&uStack_84,*(std::string **)(pCVar5 + 0x58));
          pGVar6 = GameData::getGoodWithShortName();
          pGVar2 = g_gameData;
          if ((pGVar6 != (Good *)0x0) &&
             (iVar7 = CargoHold::amountHeld
                                (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),*(int *)pGVar6
                                ), *(int *)(*(int *)(pCVar5 + 0x58) + 0x18) <= iVar7)) {
            ppMVar1 = *(MetaGameAction ***)(pGVar2 + 0x140);
            if (*(MetaGameAction ***)(pGVar2 + 0x144) == ppMVar1) {
              ghidra::lib::vector___Emplace_reallocate
                        ((ghidra::vector *)(pGVar2 + 0x13c),ppMVar1,(MetaGameAction **)&local_58);
            }
            else {
              *ppMVar1 = (MetaGameAction *)pCVar5;
              *(int *)(pGVar2 + 0x140) = *(int *)(pGVar2 + 0x140) + 4;
            }
            goto LAB_004bc8d6;
          }
          pcVar16 = "** Skipping load of contract as the player hasn\'t picked up the cargo.";
        }
        else {
          pcVar16 = "** Skipping load of contract as it\'s not take-and-deliver";
        }
        debugPrint("SAVEHANDLER",pcVar16);
      }
LAB_004bc8d6:
      iVar14 = iVar14 + 1;
      pcVar13 = fread_exref;
    } while (iVar14 < local_4c);
  }
  debugPrint("SAVEHANDLER","...loaded %d current contracts for the player");
  bVar3 = local_4c < 1;
  if (bVar3) {
    local_54 = (SpaceStation *)&stack0xffffff78;
    ghidra::str::assign((std::string *)&stack0xffffff78,"has_contract",0xc);
  }
  else {
    local_54 = (SpaceStation *)&stack0xffffff78;
    ghidra::str::assign((std::string *)&stack0xffffff78,"has_contract",0xc);
  }
  // [seh] local_8 = (uint)bVar3;
  pFVar8 = ghidra::any_singleton();
  // [seh] local_8 = 0xffffffff;
  (pFVar8)->setFlag();
  local_4c = 0;
  (*pcVar13)();
  do {
    if (local_45 == '\0') {
      debugPrint("SAVEHANDLER","Loaded %d contracts that have usage timers set.");
      // [seh] ExceptionList = local_10;
      // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    SaveHandler::readLengthString(p_Var4);
    // [seh] local_8 = 2;
    SaveHandler::readLengthString(p_Var4);
    // [seh] local_8._0_1_ = 3;
    (*pcVar13)();
    ghidra::str::ctor((std::string *)&uStack_84,(std::string *)local_44);
    local_54 = GameData::getSpaceStation();
    if ((local_54 == (SpaceStation *)0x0) || (iVar14 = *(int *)(local_54 + 0x398), iVar14 == 0)) {
      debugPrint("SAVEHANDLER","Error: invalid tradelocation \'%s\' for contract loaded.");
      // [seh] local_8 = CONCAT31(local_8._1_3_,2);
      if (0xf < local_18) {
        pnVar10 = (nothrow_t *)(local_18 + 1);
        pppppcVar12 = (char *****)local_2c[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pppppcVar12 = (char *****)local_2c[0][-1];
          pnVar10 = (nothrow_t *)(local_18 + 0x24);
          if ((char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)pppppcVar12)))
          goto LAB_004bcc3a;
        }
        operator_delete(pppppcVar12,pnVar10);
      }
      // [seh] local_8 = 0xffffffff;
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (char ****)((uint)local_2c[0] & 0xffffff00);
      if (0xf < local_30) {
        pnVar10 = (nothrow_t *)(local_30 + 1);
        pvVar11 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar11 = *(void **)((int)local_44[0] + -4);
          pnVar10 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar11))) goto LAB_004bcc3a;
        }
        operator_delete(pvVar11,pnVar10);
      }
    }
    else {
      uVar15 = 0;
      pppppcVar12 = (char *****)local_2c[0];
      if (*(int *)(iVar14 + 0xa4) - *(int *)(iVar14 + 0xa0) >> 2 != 0) {
        do {
          pppppcVar9 = local_2c;
          if (0xf < local_18) {
            pppppcVar9 = pppppcVar12;
          }
          bVar3 = ghidra::lib::_Traits_equal___x28_x29((char *)pppppcVar9,local_1c,(char *)p_Var4,unaff_EDI);
          if (bVar3) {
            *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0xa0) + uVar15 * 4) + 0xa8) = local_5c;
            uStack_84 = 0x4bca93;
            debugPrint("SAVEHANDLER","Set contractID %s to have timer \'%f\'");
            local_4c = local_4c + 1;
            iVar14 = *(int *)(local_54 + 0x398);
            pppppcVar12 = (char *****)local_2c[0];
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < (uint)(*(int *)(iVar14 + 0xa4) - *(int *)(iVar14 + 0xa0) >> 2));
      }
      // [seh] local_8 = CONCAT31(local_8._1_3_,2);
      if (0xf < local_18) {
        pnVar10 = (nothrow_t *)(local_18 + 1);
        pppppcVar9 = pppppcVar12;
        if ((nothrow_t *)0xfff < pnVar10) {
          pppppcVar9 = (char *****)pppppcVar12[-1];
          pnVar10 = (nothrow_t *)(local_18 + 0x24);
          if ((char *)0x1f < (char *)((int)pppppcVar12 + (-4 - (int)pppppcVar9))) goto LAB_004bcc3a;
        }
        operator_delete(pppppcVar9,pnVar10);
      }
      // [seh] local_8 = 0xffffffff;
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (char ****)((uint)local_2c[0] & 0xffffff00);
      pcVar13 = fread_exref;
      if (0xf < local_30) {
        pnVar10 = (nothrow_t *)(local_30 + 1);
        pvVar11 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar11 = *(void **)((int)local_44[0] + -4);
          pnVar10 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar11))) {
LAB_004bcc3a:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar11,pnVar10);
        pcVar13 = fread_exref;
      }
    }
    (*pcVar13)();
  } while( true );
}


// Ghidra: void __cdecl V12::writeBounty(_iobuf *param_1,Bounty *param_2)
void V12::writeBounty(_iobuf * param_1, Bounty * param_2)

{
  char stack0xffffffd4[1] = {0};  // [pseudo] address of an unnamed stack slot
  FILE *in_ECX;
  void *in_EDX;
  
  ghidra::str::ctor
            ((std::string *)&stack0xffffffd4,(std::string *)((int)in_EDX + 4));
  SaveHandler::writeLengthString();
  ghidra::str::ctor
            ((std::string *)&stack0xffffffd4,(std::string *)((int)in_EDX + 0x1c));
  SaveHandler::writeLengthString();
  ghidra::str::ctor
            ((std::string *)&stack0xffffffd4,(std::string *)((int)in_EDX + 0x34));
  SaveHandler::writeLengthString();
  fwrite((void *)((int)in_EDX + 0x50),4,1,in_ECX);
  fwrite(in_EDX,4,1,in_ECX);
  ghidra::str::ctor
            ((std::string *)&stack0xffffffd4,
             (std::string *)(*(int *)((int)in_EDX + 0x4c) + 0x24));
  SaveHandler::writeLengthString();
  ghidra::str::ctor
            ((std::string *)&stack0xffffffd4,
             (std::string *)(*(int *)((int)in_EDX + 0x4c) + 0x3c));
  SaveHandler::writeLengthString();
  ghidra::str::ctor
            ((std::string *)&stack0xffffffd4,
             (std::string *)(*(int *)((int)in_EDX + 0x4c) + 0x54));
  SaveHandler::writeLengthString();
  fwrite((void *)(*(int *)((int)in_EDX + 0x4c) + 0x1c),4,1,in_ECX);
  fwrite(*(void **)((int)in_EDX + 0x4c),4,1,in_ECX);
  fwrite((void *)(*(int *)((int)in_EDX + 0x4c) + 0x18),4,1,in_ECX);
  fwrite((void *)(*(int *)((int)in_EDX + 0x4c) + 0x20),4,1,in_ECX);
  fwrite((void *)(*(int *)((int)in_EDX + 0x4c) + 4),1,1,in_ECX);
  fwrite((void *)(*(int *)((int)in_EDX + 0x4c) + 8),4,1,in_ECX);
  return;
}


// Ghidra: void __cdecl V12::saveSpaceStationStates(_iobuf *param_1)
void V12::saveSpaceStationStates(_iobuf * param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff8c[1] = {0};  // [pseudo] address of an unnamed stack slot
  int *piVar1;
  SpaceStation *this_;
  FILE *_File;
  _iobuf *p_Var2;
  DockingRequest *pDVar3;
  FILE *in_ECX;
  int iVar4;
  int iVar5;
  nothrow_t *pnVar6;
  GameData *pGVar7;
  void *pvVar8;
  AnimationFrames *pAVar9;
  AnimationFrames *pAVar10;
  int *piVar11;
  FILE *pFVar12;
  Contract *unaff_EDI;
  uint uVar13;
  code *pcVar14;
  void *local_48;
  AnimationFrames *local_44;
  AnimationFrames *local_40;
  uint local_3c;
  FILE *local_38;
  int *local_34;
  AnimationFrames *local_30;
  uint local_2c;
  FILE *local_28;
  uint local_24;
  uint local_20;
  void *local_1c;
  int local_18;
  undefined1 local_11;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005beef8;
  // [seh] local_10 = ExceptionList;
  // [cookie] p_Var2 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  pAVar10 = (AnimationFrames *)0x0;
  local_1c = (void *)0x0;
  local_48 = (void *)0x0;
  local_44 = (AnimationFrames *)0x0;
  local_30 = (AnimationFrames *)0x0;
  local_40 = (AnimationFrames *)0x0;
  // [seh] local_8 = 0;
  local_20 = 0;
  iVar4 = *(int *)(g_gameData + 0x3c);
  local_28 = in_ECX;
  if (*(int *)(g_gameData + 0x40) - iVar4 >> 2 != 0) {
    pAVar9 = (AnimationFrames *)0x0;
    pGVar7 = g_gameData;
    do {
      uVar13 = 0;
      iVar4 = *(int *)(iVar4 + local_20 * 4);
      iVar5 = *(int *)(iVar4 + 0xcc);
      if (*(int *)(iVar4 + 0xd0) - iVar5 >> 2 != 0) {
        do {
          iVar4 = *(int *)(iVar5 + uVar13 * 4);
          if (((*(char *)(iVar4 + 0x234) != '\0') &&
              (local_30 = *(AnimationFrames **)(iVar4 + 0x178), local_30 != (AnimationFrames *)0x0))
             && (*(int *)(*(int *)(local_30 + 0x254) + 0x158) == 1)) {
            if (pAVar9 == pAVar10) {
              ghidra::lib::vector___Emplace_reallocate
                        ((ghidra::vector *)&local_48,(AnimationFrames **)pAVar10,&local_30);
              pGVar7 = g_gameData;
              pAVar9 = local_40;
              pAVar10 = local_44;
            }
            else {
              *(AnimationFrames **)pAVar10 = local_30;
              local_44 = pAVar10 + 4;
              pAVar10 = local_44;
            }
          }
          uVar13 = uVar13 + 1;
          iVar4 = *(int *)(*(int *)(pGVar7 + 0x3c) + local_20 * 4);
          iVar5 = *(int *)(iVar4 + 0xcc);
          local_30 = pAVar9;
        } while (uVar13 < (uint)(*(int *)(iVar4 + 0xd0) - iVar5 >> 2));
      }
      iVar4 = *(int *)(pGVar7 + 0x3c);
      local_20 = local_20 + 1;
    } while (local_20 < (uint)(*(int *)(pGVar7 + 0x40) - iVar4 >> 2));
    local_1c = local_48;
  }
  _File = local_28;
  pcVar14 = fwrite_exref;
  uVar13 = (int)pAVar10 - (int)local_1c >> 2;
  local_48 = local_1c;
  local_3c = uVar13;
  local_2c = uVar13;
  fwrite(&local_2c,4,1,local_28);
  local_20 = 0;
  if (uVar13 != 0) {
    do {
      uVar13 = local_20;
      ghidra::str::ctor
                ((std::string *)&stack0xffffff8c,
                 (std::string *)(*(int *)((int)local_1c + local_20 * 4) + 0x238));
      SaveHandler::writeLengthString();
      pFVar12 = *(FILE **)(*(int *)((int)local_1c + uVar13 * 4) + 0x398);
      local_18 = *(int *)((int)pFVar12 + 0x98) - *(int *)((int)pFVar12 + 0x94) >> 2;
      local_28 = pFVar12;
      (*pcVar14)(&local_18,4,1,_File);
      local_24 = 0;
      if (*(int *)((int)pFVar12 + 0x98) - *(int *)((int)pFVar12 + 0x94) >> 2 != 0) {
        do {
          writeContract(p_Var2,unaff_EDI);
          local_24 = local_24 + 1;
        } while (local_24 <
                 (uint)(*(int *)((int)pFVar12 + 0x98) - *(int *)((int)pFVar12 + 0x94) >> 2));
      }
      debugPrint("SAVEHANDLER","...saved %d contracts at space station %s");
      local_18 = *(int *)((int)pFVar12 + 0x74) - *(int *)((int)pFVar12 + 0x70) >> 2;
      (*pcVar14)(&local_18,4);
      local_24 = 0;
      if (*(int *)((int)pFVar12 + 0x74) - *(int *)((int)pFVar12 + 0x70) >> 2 != 0) {
        do {
          writeTradeItem(p_Var2,(TradeItemInstance *)unaff_EDI);
          local_24 = local_24 + 1;
        } while (local_24 <
                 (uint)(*(int *)((int)pFVar12 + 0x74) - *(int *)((int)pFVar12 + 0x70) >> 2));
      }
      debugPrint("SAVEHANDLER","...saved %d trade items at space station %s");
      local_18 = *(int *)((int)pFVar12 + 0x8c) - *(int *)((int)pFVar12 + 0x88) >> 2;
      (*pcVar14)(&local_18,4);
      local_24 = 0;
      if (*(int *)((int)pFVar12 + 0x8c) - *(int *)((int)pFVar12 + 0x88) >> 2 != 0) {
        do {
          writeTradeItem(p_Var2,(TradeItemInstance *)unaff_EDI);
          local_24 = local_24 + 1;
        } while (local_24 <
                 (uint)(*(int *)((int)pFVar12 + 0x8c) - *(int *)((int)pFVar12 + 0x88) >> 2));
      }
      debugPrint("SAVEHANDLER","...saved %d wire items at space station %s");
      local_18 = *(int *)((int)pFVar12 + 0x5c) - *(int *)((int)pFVar12 + 0x58) >> 2;
      (*pcVar14)(&local_18,4);
      piVar11 = *(int **)((int)pFVar12 + 0x58);
      local_24 = 0;
      local_34 = (int *)((*(int *)((int)pFVar12 + 0x5c) - (int)piVar11) + 3U >> 2);
      if (*(int **)((int)pFVar12 + 0x5c) < piVar11) {
        local_34 = (int *)0;
      }
      local_38 = (FILE *)piVar11;
      if (local_34 != (int *)0x0) {
        do {
          iVar4 = *piVar11;
          fwrite((void *)(iVar4 + 4),4,1,_File);
          fwrite((void *)(iVar4 + 8),4,1,_File);
          writeShipModule(p_Var2,(ShipModule *)unaff_EDI);
          piVar11 = piVar11 + 1;
          local_24 = local_24 + 1;
          pFVar12 = local_28;
          pcVar14 = fwrite_exref;
        } while ((int *)local_24 != local_34);
      }
      debugPrint("SAVEHANDLER","...saved %d modules for sale at space station %s");
      local_18 = *(int *)((int)pFVar12 + 0x68) - *(int *)((int)pFVar12 + 100) >> 2;
      (*pcVar14)(&local_18,4);
      piVar11 = *(int **)((int)pFVar12 + 100);
      local_24 = 0;
      local_38 = (FILE *)((*(int *)((int)pFVar12 + 0x68) - (int)piVar11) + 3U >> 2);
      if (*(int **)((int)pFVar12 + 0x68) < piVar11) {
        local_38 = (FILE *)0;
      }
      local_34 = piVar11;
      if (local_38 != (FILE *)0x0) {
        do {
          piVar1 = (int *)*piVar11;
          fwrite(*(void **)(*piVar1 + 4),4,1,_File);
          fwrite((void *)*piVar1,4,1,_File);
          pcVar14 = fwrite_exref;
          fwrite(piVar1 + 1,4,1,_File);
          piVar11 = piVar11 + 1;
          local_24 = local_24 + 1;
          pFVar12 = local_28;
        } while ((FILE *)local_24 != local_38);
      }
      debugPrint("SAVEHANDLER","...saved %d components for sale at space station %s");
      local_18 = *(int *)((int)pFVar12 + 0x40) - *(int *)((int)pFVar12 + 0x3c) >> 2;
      (*pcVar14)(&local_18,4);
      local_28 = (FILE *)0x0;
      local_38 = (FILE *)((*(uint *)((int)pFVar12 + 0x40) - *(uint *)((int)pFVar12 + 0x3c)) + 3 >> 2
                         );
      if (*(uint *)((int)pFVar12 + 0x40) < *(uint *)((int)pFVar12 + 0x3c)) {
        local_38 = (FILE *)0x0;
      }
      if (local_38 != (FILE *)0x0) {
        do {
          saveShip(p_Var2,(Ship *)unaff_EDI);
          local_28 = (FILE *)((int)&local_28->_ptr + 1);
        } while (local_28 != local_38);
      }
      uVar13 = local_20;
      debugPrint("SAVEHANDLER","...saved %d ships for sale at space station %s");
      this_ = *(SpaceStation **)((int)local_1c + uVar13 * 4);
      if (*(int *)((char *)this_ + 0x3dc) == 0) {
        local_11 = 1;
      }
      else if (*(int *)(*(int *)((char *)this_ + 0x254) + 0x158) == 3) {
        local_11 = 1;
      }
      else {
        pDVar3 = (this_)->getDockingRequest(*(Ship **)(g_gameData + 0xd0));
        if ((pDVar3 == (DockingRequest *)0x0) || (*(int *)(pDVar3 + 8) != 2)) {
          local_11 = 0;
        }
        else {
          local_11 = 1;
        }
      }
      (*pcVar14)();
      local_20 = uVar13 + 1;
    } while (local_20 < local_3c);
  }
  debugPrint("SAVEHANDLER","...saved %d space stations");
  if (local_1c != (void *)0x0) {
    pnVar6 = (nothrow_t *)((int)local_30 - (int)local_1c & 0xfffffffc);
    pvVar8 = local_1c;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar8 = *(void **)((int)local_1c + -4);
      pnVar6 = pnVar6 + 0x23;
      if (0x1f < (uint)((int)local_1c + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar8,pnVar6);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __cdecl V12::loadSpaceStationStates(_iobuf *param_1)
void V12::loadSpaceStationStates(_iobuf * param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  MetaGameAction **ppMVar2;
  AnimationFrames **ppAVar3;
  std::string *this_;
  GameData *pGVar4;
  _iobuf *p_Var5;
  word *pwVar6;
  Ship *pSVar7;
  TradeItemInstance *pTVar8;
  ShipModule *pSVar9;
  NameManager *pNVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  FILE *in_ECX;
  uint uVar13;
  void *pvVar14;
  nothrow_t *pnVar15;
  Contract *pCVar16;
  undefined4 *puVar17;
  int iVar18;
  code *pcVar19;
  uint uVar20;
  AnimationFrames *pAVar21;
  _iobuf *p_Var22;
  undefined4 uStack_b4;
  FILE *pFStack_b0;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 *local_88;
  AnimationFrames *local_84;
  undefined4 local_80;
  _iobuf local_7c;
  int local_78;
  int local_74;
  FILE *local_70;
  char local_69;
  Ship *local_68;
  Contract *local_64;
  int local_60;
  AnimationFrames *local_5c;
  MetaGameAction *local_58;
  void *local_54;
  uint local_40;
  void *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint uStack_28;
  _iobuf *local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  int local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = -1;
  // [seh] puStack_18 = &DAT_005bef30;
  // [seh] local_1c = ExceptionList;
  // [cookie] p_Var5 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  local_74 = 0;
  pFStack_b0 = (FILE *)0x4bd7a9;
  local_70 = in_ECX;
  local_24 = p_Var5;
  fread(&local_74,4,1,in_ECX);
  local_78 = 0;
  if (0 < local_74) {
    do {
      local_2c = 0;
      uStack_28 = 0xf;
      local_3c = (void *)((uint)local_3c & 0xffffff00);
      local_14 = 0;
      pwVar6 = (word *)SaveHandler::readLengthString(p_Var5);
      if ((word *)&local_3c != pwVar6) {
        // [mislabelled-dtor] word::~word((word *)&local_3c);
        local_3c = *(void **)pwVar6;
        uStack_38 = *(undefined4 *)(pwVar6 + 4);
        uStack_34 = *(undefined4 *)(pwVar6 + 8);
        uStack_30 = *(undefined4 *)(pwVar6 + 0xc);
        local_2c = *(undefined4 *)(pwVar6 + 0x10);
        uStack_28 = *(uint *)(pwVar6 + 0x14);
        *(undefined4 *)(pwVar6 + 0x10) = 0;
        *(undefined4 *)(pwVar6 + 0x14) = 0xf;
        *pwVar6 = (word)0x0;
      }
      if (0xf < local_40) {
        pnVar15 = (nothrow_t *)(local_40 + 1);
        pvVar14 = local_54;
        if ((nothrow_t *)0xfff < pnVar15) {
          pvVar14 = *(void **)((int)local_54 + -4);
          pnVar15 = (nothrow_t *)(local_40 + 0x24);
          if (0x1f < (uint)((int)local_54 + (-4 - (int)pvVar14))) goto LAB_004bdeee;
        }
        operator_delete(pvVar14,pnVar15);
      }
      ghidra::str::ctor((std::string *)&uStack_b4,(std::string *)&local_3c);
      pSVar7 = GameData::getShipWithRego();
      local_68 = pSVar7;
      debugPrint("SAVEHANDLER","...loaded trade data for platform %s");
      if (pSVar7 == (Ship *)0x0) {
        debugPrint("ERROR","ERROR: No valid space station with this_ rego.");
        if (0xf < uStack_28) {
          pnVar15 = (nothrow_t *)(uStack_28 + 1);
          pvVar14 = local_3c;
          if ((nothrow_t *)0xfff < pnVar15) {
            pvVar14 = *(void **)((int)local_3c + -4);
            pnVar15 = (nothrow_t *)(uStack_28 + 0x24);
            if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar14))) {
LAB_004bdeee:
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar14,pnVar15);
        }
        goto LAB_004bde98;
      }
      local_5c = *(AnimationFrames **)(pSVar7 + 0x398);
      local_58 = (MetaGameAction *)0x0;
      puVar11 = *(undefined4 **)(local_5c + 0x94);
      pCVar16 = (Contract *)
                ((uint)((int)*(undefined4 **)(local_5c + 0x98) + (3 - (int)puVar11)) >> 2);
      if (*(undefined4 **)(local_5c + 0x98) < puVar11) {
        pCVar16 = (Contract *)0x0;
      }
      local_64 = pCVar16;
      if (pCVar16 != (Contract *)0x0) {
        do {
          if ((Contract *)*puVar11 != (Contract *)0x0) {
            Contract::_scalar_deleting_destructor_((Contract *)*puVar11,(uint)local_58);
            pCVar16 = local_64;
          }
          local_58 = local_58 + 1;
          puVar11 = puVar11 + 1;
        } while (local_58 != (MetaGameAction *)pCVar16);
      }
      *(undefined4 *)(local_5c + 0x98) = *(undefined4 *)(local_5c + 0x94);
      local_60 = 0;
      pFStack_b0 = (FILE *)0x4bd8fb;
      fread(&local_60,4,1,in_ECX);
      iVar18 = 0;
      if (0 < local_60) {
        do {
          local_58 = (MetaGameAction *)V11::readContract(p_Var5);
          iVar1 = *(int *)(local_68 + 0x398);
          ppMVar2 = *(MetaGameAction ***)(iVar1 + 0x98);
          if (*(MetaGameAction ***)(iVar1 + 0x9c) == ppMVar2) {
            ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(iVar1 + 0x94),ppMVar2,&local_58);
          }
          else {
            *ppMVar2 = local_58;
            *(int *)(iVar1 + 0x98) = *(int *)(iVar1 + 0x98) + 4;
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 < local_60);
      }
      debugPrint("SAVEHANDLER","...loaded %d contracts for platform");
      (*(TradeLocation **)(local_68 + 0x398))->clearGoods(false);
      pFStack_b0 = (FILE *)0x4bd977;
      fread(&local_60,4,1,in_ECX);
      iVar18 = 0;
      if (0 < local_60) {
        do {
          pTVar8 = V11::readTradeItem(p_Var5);
          if (pTVar8 == (TradeItemInstance *)0x0) {
            debugPrint("SAVEHANDLER","Invalid trade item loaded.");
          }
          else {
            (*(TradeLocation **)(local_68 + 0x398))->addTradeItemInstance(pTVar8, false);
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 < local_60);
      }
      debugPrint("SAVEHANDLER","...loaded %d trade item instances for platform");
      uVar13 = 0;
      iVar18 = *(int *)(local_68 + 0x398);
      if (*(int *)(iVar18 + 0x8c) - *(int *)(iVar18 + 0x88) >> 2 != 0) {
        do {
          *(undefined4 *)(*(int *)(*(int *)(iVar18 + 0x88) + uVar13 * 4) + 0x10) = 0;
          iVar1 = uVar13 * 4;
          uVar13 = uVar13 + 1;
          *(undefined4 *)(*(int *)(*(int *)(iVar18 + 0x88) + iVar1) + 0x30) = 0xffffffff;
        } while (uVar13 < (uint)(*(int *)(iVar18 + 0x8c) - *(int *)(iVar18 + 0x88) >> 2));
      }
      pFStack_b0 = (FILE *)0x4bda33;
      fread(&local_60,4,1,in_ECX);
      iVar18 = 0;
      if (0 < local_60) {
        do {
          pTVar8 = V11::readTradeItem(p_Var5);
          if (pTVar8 == (TradeItemInstance *)0x0) {
            debugPrint("SAVEHANDLER","Invalid trade item loaded.");
          }
          else {
            (*(TradeLocation **)(local_68 + 0x398))->addTradeItemInstance(pTVar8, true);
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 < local_60);
      }
      debugPrint("SAVEHANDLER","...loaded %d wire item instances for platform");
      local_64 = (Contract *)0x0;
      local_58 = *(MetaGameAction **)(local_68 + 0x398);
      puVar11 = *(undefined4 **)(local_58 + 0x58);
      local_5c = (AnimationFrames *)((*(int *)(local_58 + 0x5c) - (int)puVar11) + 3U >> 2);
      if (*(undefined4 **)(local_58 + 0x5c) < puVar11) {
        local_5c = (AnimationFrames *)0x0;
      }
      if (local_5c != (AnimationFrames *)0x0) {
        pAVar21 = (AnimationFrames *)0x0;
        do {
          operator_delete((void *)*puVar11,(nothrow_t *)0xc);
          pAVar21 = pAVar21 + 1;
          puVar11 = puVar11 + 1;
          in_ECX = local_70;
        } while (pAVar21 != local_5c);
      }
      pcVar19 = fread_exref;
      *(undefined4 *)(local_58 + 0x5c) = *(undefined4 *)(local_58 + 0x58);
      pFStack_b0 = (FILE *)0x4bdaf6;
      fread(&local_60,4,1,in_ECX);
      local_58 = (MetaGameAction *)0x0;
      if (0 < local_60) {
        do {
          pFStack_b0 = (FILE *)0x4bdb1b;
          (*pcVar19)();
          uStack_b4 = 1;
          p_Var22 = &local_7c;
          pFStack_b0 = in_ECX;
          (*pcVar19)(p_Var22,4);
          pSVar9 = readShipModule(p_Var22);
          local_5c = operator_new(0xc);
          *(undefined4 *)(local_5c + 4) = local_80;
          *(ShipModule **)local_5c = pSVar9;
          *(void **)(local_5c + 8) = local_7c._Placeholder;
          iVar18 = *(int *)(local_68 + 0x398);
          ppAVar3 = *(AnimationFrames ***)(iVar18 + 0x5c);
          if (*(AnimationFrames ***)(iVar18 + 0x60) == ppAVar3) {
            ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(iVar18 + 0x58),ppAVar3,&local_5c);
          }
          else {
            *ppAVar3 = local_5c;
            *(int *)(iVar18 + 0x5c) = *(int *)(iVar18 + 0x5c) + 4;
          }
          local_58 = local_58 + 1;
          pcVar19 = fread_exref;
        } while ((int)local_58 < local_60);
      }
      debugPrint("SAVEHANDLER","...loaded %d module sale instances for platform");
      local_64 = (Contract *)0x0;
      local_58 = *(MetaGameAction **)(local_68 + 0x398);
      puVar11 = *(undefined4 **)(local_58 + 100);
      local_5c = (AnimationFrames *)((*(int *)(local_58 + 0x68) - (int)puVar11) + 3U >> 2);
      if (*(undefined4 **)(local_58 + 0x68) < puVar11) {
        local_5c = (AnimationFrames *)0x0;
      }
      if (local_5c != (AnimationFrames *)0x0) {
        pAVar21 = (AnimationFrames *)0x0;
        do {
          operator_delete((void *)*puVar11,(nothrow_t *)0x8);
          pAVar21 = pAVar21 + 1;
          puVar11 = puVar11 + 1;
          in_ECX = local_70;
        } while (pAVar21 != local_5c);
      }
      pcVar19 = fread_exref;
      *(undefined4 *)(local_58 + 0x68) = *(undefined4 *)(local_58 + 100);
      pFStack_b0 = (FILE *)0x4bdc05;
      fread(&local_60,4,1,in_ECX);
      local_58 = (MetaGameAction *)0x0;
      pSVar7 = local_68;
      if (0 < local_60) {
        do {
          pFStack_b0 = (FILE *)0x4bdce1;
          (*pcVar19)();
          uStack_b4 = 1;
          pFStack_b0 = in_ECX;
          (*pcVar19)(&local_90,4);
          (*pcVar19)(&local_8c,4,1,in_ECX);
          puVar11 = operator_new(8);
          pGVar4 = g_gameData;
          local_5c = local_84;
          *puVar11 = 0x42c80000;
          uVar13 = 0;
          uVar20 = *(int *)(pGVar4 + 4) - *(int *)pGVar4 >> 2;
          if (uVar20 != 0) {
            local_64 = *(Contract **)pGVar4;
            puVar17 = (undefined4 *)local_64;
            do {
              in_ECX = local_70;
              if (*(AnimationFrames **)*puVar17 == local_84) {
                uVar12 = *(undefined4 *)((int)local_64 + uVar13 * 4);
                goto LAB_004bdd46;
              }
              uVar13 = uVar13 + 1;
              puVar17 = puVar17 + 1;
            } while (uVar13 < uVar20);
          }
          uVar12 = 0;
LAB_004bdd46:
          puVar11[1] = uVar12;
          local_88 = puVar11;
          local_5c = operator_new(8);
          pSVar7 = local_68;
          *(undefined4 **)local_5c = puVar11;
          *(undefined4 *)(local_5c + 4) = local_8c;
          *puVar11 = local_90;
          iVar18 = *(int *)(local_68 + 0x398);
          ppAVar3 = *(AnimationFrames ***)(iVar18 + 0x68);
          if (*(AnimationFrames ***)(iVar18 + 0x6c) == ppAVar3) {
            ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(iVar18 + 100),ppAVar3,&local_5c);
          }
          else {
            *ppAVar3 = local_5c;
            *(int *)(iVar18 + 0x68) = *(int *)(iVar18 + 0x68) + 4;
          }
          local_58 = local_58 + 1;
          pcVar19 = fread_exref;
        } while ((int)local_58 < local_60);
      }
      debugPrint("SAVEHANDLER","...loaded %d component sale instances for platform");
      (*(TradeLocation **)(pSVar7 + 0x398))->clearShipsForSale();
      pFStack_b0 = (FILE *)0x4bdc4a;
      fread(&local_60,4,1,in_ECX);
      local_64 = (Contract *)0x0;
      if (0 < local_60) {
        do {
          local_58 = (MetaGameAction *)loadShip(p_Var5);
          local_5c = (AnimationFrames *)&uStack_b4;
          ghidra::str::ctor
                    ((std::string *)&uStack_b4,(std::string *)(local_58 + 0x238));
          local_14._0_1_ = 1;
          pNVar10 = ghidra::any_singleton();
          local_14 = (uint)local_14._1_3_ << 8;
          (pNVar10)->addRego();
          pNVar10 = ghidra::any_singleton();
          this_ = *(std::string **)(pNVar10 + 0x88);
          if (*(std::string **)(pNVar10 + 0x8c) == this_) {
            ghidra::lib::vector___Emplace_reallocate
                      ((ghidra::vector *)(pNVar10 + 0x84),(std::string *)this_,
                       (std::string *)(local_58 + 8));
          }
          else {
            ghidra::str::ctor(this_,(std::string *)(local_58 + 8));
            *(int *)(pNVar10 + 0x88) = *(int *)(pNVar10 + 0x88) + 0x18;
          }
          pSVar7 = local_68;
          iVar18 = *(int *)(local_68 + 0x398);
          ppAVar3 = *(AnimationFrames ***)(iVar18 + 0x40);
          if (*(AnimationFrames ***)(iVar18 + 0x44) == ppAVar3) {
            ghidra::lib::vector___Emplace_reallocate
                      ((ghidra::vector *)(iVar18 + 0x3c),ppAVar3,(AnimationFrames **)&local_58);
          }
          else {
            *ppAVar3 = (AnimationFrames *)local_58;
            *(int *)(iVar18 + 0x40) = *(int *)(iVar18 + 0x40) + 4;
          }
          local_64 = (Contract *)((int)local_64 + 1);
        } while ((int)local_64 < local_60);
      }
      debugPrint("SAVEHANDLER","...loaded %d ships for sale for platform");
      pFStack_b0 = (FILE *)0x4bde1b;
      fread(&local_69,1,1,in_ECX);
      if (local_69 != '\0') {
        SpaceStation::requestUndockingClearance
                  ((SpaceStation *)pSVar7,*(Ship **)(g_gameData + 0xd0),true);
      }
      local_14 = -1;
      if (0xf < uStack_28) {
        pnVar15 = (nothrow_t *)(uStack_28 + 1);
        pvVar14 = local_3c;
        if ((nothrow_t *)0xfff < pnVar15) {
          pvVar14 = *(void **)((int)local_3c + -4);
          pnVar15 = (nothrow_t *)(uStack_28 + 0x24);
          if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar14))) goto LAB_004bdeee;
        }
        operator_delete(pvVar14,pnVar15);
      }
      local_78 = local_78 + 1;
    } while (local_78 < local_74);
  }
  debugPrint("SAVEHANDLER","...loaded %d space station trade data sets");
LAB_004bde98:
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// Ghidra: void __cdecl V12::writeTradeItem(_iobuf *param_1,TradeItemInstance *param_2)
void V12::writeTradeItem(_iobuf * param_1, TradeItemInstance * param_2)

{
  char stack0xffffffd4[1] = {0};  // [pseudo] address of an unnamed stack slot
  FILE *in_ECX;
  int *in_EDX;
  
  fwrite(in_EDX + 5,4,1,in_ECX);
  fwrite(in_EDX + 4,4,1,in_ECX);
  ghidra::str::ctor
            ((std::string *)&stack0xffffffd4,(std::string *)(in_EDX + 6));
  SaveHandler::writeLengthString();
  fwrite(in_EDX + 0xc,4,1,in_ECX);
  fwrite(in_EDX + 1,4,1,in_ECX);
  fwrite(in_EDX + 2,4,1,in_ECX);
  fwrite(in_EDX + 3,4,1,in_ECX);
  fwrite((void *)*in_EDX,4,1,in_ECX);
  fwrite((void *)(*in_EDX + 4),4,1,in_ECX);
  fwrite((void *)(*in_EDX + 0x14),4,1,in_ECX);
  fwrite((void *)(*in_EDX + 0x18),4,1,in_ECX);
  fwrite((void *)(*in_EDX + 0x1c),4,1,in_ECX);
  fwrite((void *)(*in_EDX + 0x20),4,1,in_ECX);
  fwrite((void *)(*in_EDX + 0x24),4,1,in_ECX);
  fwrite((void *)(*in_EDX + 0x28),4,1,in_ECX);
  fwrite((void *)(*in_EDX + 8),4,1,in_ECX);
  fwrite((void *)(*in_EDX + 0xc),4,1,in_ECX);
  fwrite((void *)(*in_EDX + 0x10),4,1,in_ECX);
  return;
}


// Ghidra: void __cdecl V12::writeContract(_iobuf *param_1,Contract *param_2)
void V12::writeContract(_iobuf * param_1, Contract * param_2)

{
  char stack0xffffffd4[1] = {0};  // [pseudo] address of an unnamed stack slot
  FILE *in_ECX;
  std::string *in_EDX;
  
  ghidra::str::ctor((std::string *)&stack0xffffffd4,in_EDX);
  SaveHandler::writeLengthString();
  fwrite(in_EDX + 0x18,4,1,in_ECX);
  fwrite(in_EDX + 0x1c,4,1,in_ECX);
  ghidra::str::ctor((std::string *)&stack0xffffffd4,in_EDX + 0x20);
  SaveHandler::writeLengthString();
  ghidra::str::ctor((std::string *)&stack0xffffffd4,in_EDX + 0x38);
  SaveHandler::writeLengthString();
  fwrite((void *)(*(int *)(in_EDX + 0x58) + 0x18),4,1,in_ECX);
  fwrite((void *)(*(int *)(in_EDX + 0x58) + 0x1c),4,1,in_ECX);
  fwrite((void *)(*(int *)(in_EDX + 0x58) + 0x20),4,1,in_ECX);
  fwrite((void *)(*(int *)(in_EDX + 0x58) + 0x24),4,1,in_ECX);
  fwrite((void *)(*(int *)(in_EDX + 0x58) + 0x28),4,1,in_ECX);
  fwrite((void *)(*(int *)(in_EDX + 0x58) + 0x2c),4,1,in_ECX);
  ghidra::str::ctor
            ((std::string *)&stack0xffffffd4,*(std::string **)(in_EDX + 0x58));
  SaveHandler::writeLengthString();
  ghidra::str::ctor
            ((std::string *)&stack0xffffffd4,(std::string *)(*(int *)(in_EDX + 0x58) + 0x30));
  SaveHandler::writeLengthString();
  debugPrint("SAVEHANDLER","...contract [%s -> %s, %s] written");
  return;
}


// Ghidra: void __cdecl V12::writeCargo(_iobuf *param_1,CargoHold *param_2)
void V12::writeCargo(_iobuf * param_1, CargoHold * param_2)

{
  FILE *in_ECX;
  int in_EDX;
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int local_14;
  int local_10;
  uint local_c;
  undefined1 local_6;
  char local_5;
  
  pcVar2 = fwrite_exref;
  fwrite((void *)(in_EDX + 4),4,1,in_ECX);
  local_14 = *(int *)(in_EDX + 0x48) - *(int *)(in_EDX + 0x44) >> 2;
  fwrite(&local_14,4,1,in_ECX);
  iVar1 = *(int *)(in_EDX + 0x48);
  local_c = 0;
  if (iVar1 - *(int *)(in_EDX + 0x44) >> 2 != 0) {
    do {
      fwrite(*(void **)(*(int *)(*(int *)(in_EDX + 0x44) + local_c * 4) + 4),4,1,in_ECX);
      fwrite(*(void **)(*(int *)(in_EDX + 0x44) + local_c * 4),4,1,in_ECX);
      iVar1 = *(int *)(in_EDX + 0x48);
      local_c = local_c + 1;
    } while (local_c < (uint)(iVar1 - *(int *)(in_EDX + 0x44) >> 2));
  }
  debugPrint("SAVEHANDLER","...%d components loaded into cargo",iVar1 - *(int *)(in_EDX + 0x44) >> 2
            );
  local_c = 0;
  piVar3 = (int *)(in_EDX + 0xc);
  local_10 = 0;
  do {
    if ((local_10 < 0) || ((0 < *(int *)(in_EDX + 8) && (*(int *)(in_EDX + 8) <= local_10)))) {
      local_5 = false;
    }
    else {
      local_5 = *piVar3 != 0;
    }
    (*pcVar2)(&local_5,1,1);
    if (local_5 != '\0') {
      local_c = local_c + 1;
      iVar1 = 1;
      do {
        local_6 = *(undefined1 *)(iVar1 + *piVar3);
        fwrite(&local_6,1,1,in_ECX);
        pcVar2 = fwrite_exref;
        iVar1 = iVar1 + 1;
      } while (iVar1 < 3);
      fwrite((void *)(*piVar3 + 4),4,1,in_ECX);
      fwrite((void *)(*piVar3 + 8),4,1,in_ECX);
    }
    piVar3 = piVar3 + 1;
    local_10 = local_10 + 1;
  } while (local_10 < 0xe);
  debugPrint("SAVEHANDLER","Saved %d pods",local_c);
  return;
}


// Ghidra: CargoHold * __cdecl V12::readCargo(_iobuf *param_1)
CargoHold * V12::readCargo(_iobuf * param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  ghidra::vector *this_;
  AnimationFrames **ppAVar1;
  CargoHold *pCVar2;
  AnimationFrames *_DstBuf;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  void *pvVar6;
  nothrow_t *pnVar7;
  FILE *_File;
  uint uVar8;
  int iVar9;
  int iVar10;
  int local_60;
  AnimationFrames *local_58;
  int local_54;
  CargoHold *local_50;
  int local_4c;
  CargoHold *local_48;
  FILE *local_44;
  char local_3e;
  char local_3d;
  void *local_3c [4];
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005befa8;
  // [seh] local_1c = ExceptionList;
  // [cookie] local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  // [seh] ExceptionList = &local_1c;
  pCVar2 = operator_new(0x50);
  *(undefined4 *)(pCVar2 + 4) = 0x18;
  local_50 = pCVar2 + 0xc;
  this_ = (ghidra::vector *)(pCVar2 + 0x44);
  *(undefined4 *)(pCVar2 + 8) = 6;
  *(undefined4 *)this_ = 0;
  *(undefined4 *)(pCVar2 + 0x48) = 0;
  *(undefined4 *)(pCVar2 + 0x4c) = 0;
  *(int *)local_50 = 0;
  *(undefined4 *)(pCVar2 + 0x10) = 0;
  *(undefined4 *)(pCVar2 + 0x14) = 0;
  *(undefined4 *)(pCVar2 + 0x18) = 0;
  *(undefined4 *)(pCVar2 + 0x1c) = 0;
  *(undefined4 *)(pCVar2 + 0x20) = 0;
  *(undefined4 *)(pCVar2 + 0x24) = 0;
  *(undefined4 *)(pCVar2 + 0x28) = 0;
  *(undefined4 *)(pCVar2 + 0x2c) = 0;
  *(undefined4 *)(pCVar2 + 0x30) = 0;
  *(undefined4 *)(pCVar2 + 0x34) = 0;
  *(undefined4 *)(pCVar2 + 0x38) = 0;
  *(undefined8 *)(pCVar2 + 0x3c) = 0;
  local_48 = pCVar2;
  CargoHold::configureSlots
            (pCVar2,*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x254) + 0xe8),
             *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x254) + 0xe4));
  fread(pCVar2 + 4,4,1,local_44);
  _File = local_44;
  local_54 = 0;
  fread(&local_54,4,1,local_44);
  local_60 = 0;
  if (local_54 < 1) {
    iVar10 = *(int *)(pCVar2 + 0x48);
  }
  else {
    do {
      local_4c = -1;
      fread(&local_4c,4,1,_File);
      _DstBuf = operator_new(8);
      _File = local_44;
      uVar5 = 0;
      *(undefined4 *)_DstBuf = 0x42c80000;
      uVar8 = *(int *)(g_gameData + 4) - *(int *)g_gameData >> 2;
      if (uVar8 != 0) {
        puVar4 = *(undefined4 **)g_gameData;
        do {
          if (*(int *)*puVar4 == local_4c) {
            uVar3 = (*(undefined4 **)g_gameData)[uVar5];
            goto LAB_004beac6;
          }
          uVar5 = uVar5 + 1;
          puVar4 = puVar4 + 1;
        } while (uVar5 < uVar8);
      }
      uVar3 = 0;
LAB_004beac6:
      *(undefined4 *)(_DstBuf + 4) = uVar3;
      local_58 = _DstBuf;
      fread(_DstBuf,4,1,local_44);
      ppAVar1 = *(AnimationFrames ***)(pCVar2 + 0x48);
      if (*(AnimationFrames ***)(pCVar2 + 0x4c) == ppAVar1) {
        ghidra::lib::vector___Emplace_reallocate(this_,ppAVar1,&local_58);
      }
      else {
        *ppAVar1 = _DstBuf;
        *(int *)(pCVar2 + 0x48) = *(int *)(pCVar2 + 0x48) + 4;
      }
      iVar10 = *(int *)(pCVar2 + 0x48);
      local_60 = local_60 + 1;
    } while (local_60 < local_54);
  }
  debugPrint("SAVEHANDLER","...%d components loaded from cargo",iVar10 - *(int *)this_ >> 2);
  local_4c = 0;
  iVar10 = 0;
  do {
    pCVar2 = local_50;
    fread(&local_3d,1,1,local_44);
    if (local_3d == '\0') {
      if (((*(void **)pCVar2 != (void *)0x0) && (-1 < iVar10)) &&
         ((*(int *)(local_48 + 8) < 1 || (iVar10 < *(int *)(local_48 + 8))))) {
        operator_delete(*(void **)pCVar2,(nothrow_t *)0xc);
        *(int *)pCVar2 = 0;
      }
    }
    else {
      local_4c = local_4c + 1;
      (local_48)->addPod(iVar10);
      iVar9 = 1;
      do {
        fread(&local_3e,1,1,local_44);
        if (local_3e != '\0') {
          if ((iVar10 < 0) ||
             (((0 < *(int *)(local_48 + 8) && (*(int *)(local_48 + 8) <= iVar10)) ||
              (*(int *)local_50 == 0)))) {
            (local_48)->addPod(iVar10);
          }
          if ((iVar9 != 0) && (iVar9 - 1U < 3)) {
            *(undefined1 *)(*(int *)local_50 + iVar9) = 1;
          }
        }
        pCVar2 = local_50;
        iVar9 = iVar9 + 1;
      } while (iVar9 < 3);
      fread((void *)(*(int *)local_50 + 4),4,1,local_44);
      fread((void *)(*(int *)pCVar2 + 8),4,1,local_44);
      puVar4 = (undefined4 *)(local_48)->describePod((int)local_3c, SUB41(iVar10,0));
      local_14 = 0;
      if (0xf < (uint)puVar4[5]) {
        puVar4 = (undefined4 *)*puVar4;
      }
      debugPrint("SAVEHANDLER","type: %s, goodID = %d, amount = %d",puVar4,
                 *(undefined4 *)(*(int *)pCVar2 + 4),*(undefined4 *)(*(int *)pCVar2 + 8));
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar7 = (nothrow_t *)(local_28 + 1);
        pvVar6 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar7) {
          pvVar6 = *(void **)((int)local_3c[0] + -4);
          pnVar7 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar6,pnVar7);
      }
      local_2c = 0;
      local_28 = 0xf;
      local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
    }
    iVar10 = iVar10 + 1;
    local_50 = pCVar2 + 4;
  } while (iVar10 < 0xe);
  debugPrint("SAVEHANDLER","Loaded %d pods",local_4c);
  // [seh] ExceptionList = local_1c;
  // [cookie] pCVar2 = (CargoHold *)__security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return pCVar2;
}


// Ghidra: void __cdecl V12::saveShip(_iobuf *param_1,Ship *param_2)
void V12::saveShip(_iobuf * param_1, Ship * param_2)

{
  char stack0xffffffac[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  int *piVar2;
  SaveHandler *pSVar3;
  std::string *pbVar4;
  FILE *in_ECX;
  int iVar5;
  int in_EDX;
  uint uVar6;
  code *pcVar7;
  ShipModule *unaff_ESI;
  _iobuf *unaff_EDI;
  size_t _Size;
  size_t _Count;
  FILE *_File;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  char local_5;
  
  if (in_EDX == 0) {
    debugPrint("SAVEHANDLER","ERROR: null ship data when saving.");
  }
  debugPrint("SAVEHANDLER","Saving ship with name \'%s\' and class \'%s\'");
  ghidra::str::ctor
            ((std::string *)&stack0xffffffac,(std::string *)(*(int *)(in_EDX + 0x254) + 0x60))
  ;
  SaveHandler::writeLengthString();
  ghidra::str::ctor
            ((std::string *)&stack0xffffffac,(std::string *)(in_EDX + 8));
  SaveHandler::writeLengthString();
  ghidra::str::ctor
            ((std::string *)&stack0xffffffac,(std::string *)(in_EDX + 0x238));
  SaveHandler::writeLengthString();
  ghidra::str::ctor
            ((std::string *)&stack0xffffffac,(std::string *)(in_EDX + 0x98));
  SaveHandler::writeLengthString();
  ghidra::str::ctor
            ((std::string *)&stack0xffffffac,(std::string *)(in_EDX + 600));
  SaveHandler::writeLengthString();
  pcVar7 = fwrite_exref;
  if (*(int *)(in_EDX + 0x44) == 0) {
    local_18 = 0;
    piVar2 = &local_18;
  }
  else {
    piVar2 = (int *)(*(int *)(in_EDX + 0x44) + 0x70);
  }
  fwrite(piVar2,4,1,in_ECX);
  fwrite((void *)(in_EDX + 0x28),8,1,in_ECX);
  fwrite((void *)(in_EDX + 0x30),8,1,in_ECX);
  fwrite((void *)(in_EDX + 0x20),4,1,in_ECX);
  fwrite((void *)(in_EDX + 0x15c),1,1,in_ECX);
  fwrite((void *)(in_EDX + 0x378),4,1,in_ECX);
  fwrite((void *)(in_EDX + 0x234),1,1,in_ECX);
  local_18 = *(int *)(in_EDX + 0x178);
  if (local_18 != 0) {
    pSVar3 = ghidra::any_singleton();
    pbVar4 = (std::string *)(local_18 + 8);
    if ((std::string *)(pSVar3 + 0x14) != pbVar4) {
      if (0xf < *(uint *)(local_18 + 0x1c)) {
        pbVar4 = *(std::string **)pbVar4;
      }
      ghidra::str::assign
                ((std::string *)(pSVar3 + 0x14),(char *)pbVar4,*(uint *)(local_18 + 0x18));
    }
  }
  local_1c = (*(int *)(*(int *)(in_EDX + 0x254) + 0x11c) -
             *(int *)(*(int *)(in_EDX + 0x254) + 0x118)) / 0xc;
  fwrite(&local_1c,4,1,in_ECX);
  local_10 = 0;
  local_18 = *(int *)(*(int *)(in_EDX + 0x254) + 0x118);
  iVar5 = *(int *)(*(int *)(in_EDX + 0x254) + 0x11c) - local_18;
  iVar1 = iVar5 >> 0x1f;
  if (iVar5 / 0xc + iVar1 != iVar1) {
    local_c = 0;
    do {
      local_20 = *(undefined4 *)(local_c + local_18);
      fwrite(&local_20,4,1,in_ECX);
      _Count = 1;
      _Size = 4;
      local_24 = *(int *)(local_c + *(int *)(*(int *)(in_EDX + 0x254) + 0x118));
      _File = in_ECX;
      piVar2 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)(in_EDX + 0x14c),&local_24);
      fwrite(piVar2,_Size,_Count,_File);
      local_10 = local_10 + 1;
      local_c = local_c + 0xc;
      local_18 = *(int *)(*(int *)(in_EDX + 0x254) + 0x118);
    } while (local_10 < (uint)((*(int *)(*(int *)(in_EDX + 0x254) + 0x11c) - local_18) / 0xc));
  }
  local_28 = *(int *)(in_EDX + 0x22c) - *(int *)(in_EDX + 0x228) >> 2;
  fwrite(&local_28,4,1,in_ECX);
  local_c = 0;
  if (*(int *)(in_EDX + 0x22c) - *(int *)(in_EDX + 0x228) >> 2 != 0) {
    do {
      ghidra::str::ctor
                ((std::string *)&stack0xffffffac,
                 *(std::string **)(*(int *)(in_EDX + 0x228) + local_c * 4));
      SaveHandler::writeLengthString();
      fwrite((void *)(*(int *)(*(int *)(in_EDX + 0x228) + local_c * 4) + 0x20),4,1,in_ECX);
      fwrite((void *)(*(int *)(*(int *)(in_EDX + 0x228) + local_c * 4) + 0x24),4,1,in_ECX);
      fwrite((void *)(*(int *)(*(int *)(in_EDX + 0x228) + local_c * 4) + 0x18),4,1,in_ECX);
      fwrite((void *)(*(int *)(*(int *)(in_EDX + 0x228) + local_c * 4) + 0x1c),4,1,in_ECX);
      debugPrint("SAVEHANDLER","  Console damage: %s");
      local_c = local_c + 1;
    } while (local_c < (uint)(*(int *)(in_EDX + 0x22c) - *(int *)(in_EDX + 0x228) >> 2));
  }
  local_2c = *(int *)(*(int *)(in_EDX + 0x40) + 0x40) - *(int *)(*(int *)(in_EDX + 0x40) + 0x3c) >>
             2;
  fwrite(&local_2c,4,1,in_ECX);
  if (*(int *)(*(int *)(in_EDX + 0x40) + 0x40) - *(int *)(*(int *)(in_EDX + 0x40) + 0x3c) >> 2 != 0)
  {
    uVar6 = 0;
    do {
      writeShipModule(unaff_EDI,unaff_ESI);
      uVar6 = uVar6 + 1;
      pcVar7 = fwrite_exref;
    } while (uVar6 < (uint)(*(int *)(*(int *)(in_EDX + 0x40) + 0x40) -
                            *(int *)(*(int *)(in_EDX + 0x40) + 0x3c) >> 2));
  }
  local_14 = 8;
  (*pcVar7)();
  local_18 = 0;
  if (0 < local_14) {
    local_10 = 0x3c;
    do {
      iVar1 = *(int *)(*(int *)(in_EDX + 0x40) + 0x20);
      if (iVar1 == 0) {
        local_5 = false;
      }
      else {
        local_5 = *(int *)(local_10 + iVar1) != 0;
      }
      (*pcVar7)();
      if (local_5 != '\0') {
        ghidra::str::ctor
                  ((std::string *)&stack0xffffffac,
                   (std::string *)
                   (*(int *)(*(int *)(*(int *)(*(int *)(in_EDX + 0x40) + 0x20) + local_10) + 0x254)
                   + 0x60));
        SaveHandler::writeLengthString();
      }
      local_18 = local_18 + 1;
      local_10 = local_10 + 4;
    } while (local_18 < local_14);
  }
  ghidra::str::ctor
            ((std::string *)&stack0xffffffac,(std::string *)(in_EDX + 0x32c));
  SaveHandler::writeLengthString();
  if (*(int *)(in_EDX + 0x328) != 0) {
    local_5 = 1;
    (*pcVar7)();
    ghidra::str::ctor
              ((std::string *)&stack0xffffffac,*(std::string **)(in_EDX + 0x328));
    SaveHandler::writeLengthString();
    ghidra::str::ctor
              ((std::string *)&stack0xffffffac,
               (std::string *)(*(int *)(in_EDX + 0x328) + 0x18));
    SaveHandler::writeLengthString();
    return;
  }
  local_5 = 0;
  (*pcVar7)();
  return;
}


// Ghidra: Ship * __cdecl V12::loadShip(_iobuf *param_1)
Ship * V12::loadShip(_iobuf * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffee4[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffecc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffee0[1] = {0};  // [pseudo] address of an unnamed stack slot
  MetaGameAction **ppMVar1;
  Ship *pSVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  GameData *pGVar6;
  _iobuf *p_Var7;
  int iVar8;
  undefined4 *puVar9;
  ConsoleDamage *pCVar10;
  MetaGameAction *pMVar11;
  ShipModule *pSVar12;
  WeaponClass *pWVar13;
  void *pvVar14;
  word *pwVar15;
  Ship *pSVar16;
  SaveHandler *pSVar17;
  int iVar18;
  word *pwVar19;
  ghidra::lib::_Tree_node_t *p_Var20;
  FILE *in_ECX;
  int *piVar21;
  ghidra::lib::_Tree_comp_alloc_t *this;
  nothrow_t *pnVar22;
  std::string *pbVar23;
  int iVar24;
  bool bVar25;
  std::string abStack_164 [16];
  undefined4 uStack_154;
  MetaGameAction aMStack_14c [4];
  undefined4 uStack_148;
  _iobuf *p_Var26;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined1 local_e8 [4];
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  CraftPurpose local_d4;
  ConsoleDamage *local_d0;
  char local_ca;
  Ship local_c9;
  Ship *local_c8;
  MetaGameAction *local_c4;
  ShipModule local_bd;
  word *local_bc;
  word *local_b8;
  void *local_b4 [5];
  uint local_a0;
  void *local_9c [4];
  undefined4 local_8c;
  uint local_88;
  void *local_84 [4];
  undefined4 local_74;
  uint local_70;
  std::string *local_6c [4];
  uint local_5c;
  uint local_58;
  std::string *local_54 [4];
  uint local_44;
  uint local_40;
  word *local_3c [4];
  int local_2c;
  uint local_28;
  _iobuf *local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005bf093;
  // [seh] local_1c = ExceptionList;
  // [cookie] p_Var7 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  local_24 = p_Var7;
  SaveHandler::readLengthString(p_Var7);
  local_14 = 0;
  SaveHandler::readLengthString(p_Var7);
  local_14._0_1_ = 1;
  SaveHandler::readLengthString(p_Var7);
  local_14._0_1_ = 2;
  SaveHandler::readLengthString(p_Var7);
  local_14._0_1_ = 3;
  SaveHandler::readLengthString(p_Var7);
  local_14._0_1_ = 4;
  fread(&local_d4,4,1,in_ECX);
  fread(&local_f8,8,1,in_ECX);
  fread(&local_f0,8,1,in_ECX);
  uStack_148 = 0x4bf290;
  fread(local_e8,4,1,in_ECX);
  fread(&local_c9,1,1,in_ECX);
  local_bc = (word *)&stack0xfffffee4;
  ghidra::str::assign((std::string *)&stack0xfffffee4,"",0);
  local_b8 = (word *)&stack0xfffffecc;
  local_14._0_1_ = 5;
  ghidra::str::ctor((std::string *)&stack0xfffffecc,(std::string *)local_b4)
  ;
  local_c4 = aMStack_14c;
  local_14._0_1_ = 6;
  uStack_154 = 0x4bf2fc;
  ghidra::str::ctor((std::string *)aMStack_14c,(std::string *)local_84);
  local_14._0_1_ = 7;
  ghidra::str::ctor(abStack_164,(std::string *)local_9c);
  local_14._0_1_ = 4;
  local_c8 = GameLogic::generateShip();
  local_bc = operator_new(0x164);
  pSVar16 = local_c8;
  local_14._0_1_ = 9;
  iVar8 = new ((void *)((ShipBehaviour *)local_bc)) ShipBehaviour(local_c8, local_d4);
  local_14 = CONCAT31(local_14._1_3_,4);
  *(int *)(pSVar16 + 0x44) = iVar8;
  *(undefined4 *)(iVar8 + 0x74) = 1;
  *(undefined4 *)(*(int *)(pSVar16 + 0x44) + 0x78) = 2;
  if ((*(int *)(*(int *)(pSVar16 + 0x44) + 0x70) != 0) &&
     (*(int *)(*(int *)(pSVar16 + 0x44) + 0x70) != 3)) {
    debugPrint("AI","%s: My captain is %s and %s");
  }
  if ((std::string *)(pSVar16 + 0x98) != (std::string *)local_6c) {
    pbVar23 = (std::string *)local_6c;
    if (0xf < local_58) {
      pbVar23 = local_6c[0];
    }
    ghidra::str::assign((std::string *)(pSVar16 + 0x98),(char *)pbVar23,local_5c);
  }
  if ((std::string *)(pSVar16 + 600) != (std::string *)local_54) {
    pbVar23 = (std::string *)local_54;
    if (0xf < local_40) {
      pbVar23 = local_54[0];
    }
    ghidra::str::assign((std::string *)(pSVar16 + 600),(char *)pbVar23,local_44);
  }
  *(undefined4 *)(pSVar16 + 0x28) = local_f8;
  *(undefined4 *)(pSVar16 + 0x2c) = uStack_f4;
  *(undefined8 *)(pSVar16 + 0x30) = local_f0;
  pSVar16[0x15c] = local_c9;
  (pSVar16)->setSector(*(int *)(pSVar16 + 0x20));
  fread(pSVar16 + 0x378,4,1,in_ECX);
  p_Var26 = (_iobuf *)&DAT_00000001;
  fread(pSVar16 + 0x234,1,1,in_ECX);
  if (pSVar16[0x234] != (byte)0x0) {
    puVar9 = *(undefined4 **)(g_gameData + 0x3c);
    if (puVar9 != *(undefined4 **)(g_gameData + 0x40)) {
      local_b8 = *(word **)(pSVar16 + 0x20);
      do {
        piVar21 = (int *)*puVar9;
        pSVar16 = local_c8;
        if ((word *)*piVar21 == local_b8) goto LAB_004bf481;
        puVar9 = puVar9 + 1;
      } while (puVar9 != *(undefined4 **)(g_gameData + 0x40));
    }
    piVar21 = (int *)0x0;
LAB_004bf481:
    *(int **)(g_gameData + 0xd8) = piVar21;
  }
  fread(&local_d8,4,1,in_ECX);
  if (0 < local_d8) {
    local_c4 = (MetaGameAction *)(pSVar16 + 0x14c);
    iVar8 = 0;
    do {
      fread(&local_b8,4,1,in_ECX);
      p_Var26 = (_iobuf *)&DAT_00000001;
      fread(&local_bc,4,1,in_ECX);
      piVar21 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)local_c4,(int *)&local_b8);
      iVar8 = iVar8 + 1;
      *piVar21 = (int)local_bc;
      pSVar16 = local_c8;
    } while (iVar8 < local_d8);
  }
  fread(&local_dc,4,1,in_ECX);
  (pSVar16)->repairConsoleDamage();
  local_b8 = (word *)0x0;
  if (0 < local_dc) {
    local_bc = (word *)(pSVar16 + 0x228);
    do {
      pCVar10 = operator_new(0x28);
      local_14._0_1_ = 10;
      local_d0 = pCVar10;
      SaveHandler::readLengthString(p_Var26);
      pMVar11 = (MetaGameAction *)new ((void *)(pCVar10)) ConsoleDamage();
      local_14 = CONCAT31(local_14._1_3_,4);
      local_c4 = pMVar11;
      fread(pMVar11 + 0x20,4,1,in_ECX);
      p_Var26 = (_iobuf *)&DAT_00000001;
      fread(pMVar11 + 0x24,4,1,in_ECX);
      fread(pMVar11 + 0x18,4,1,in_ECX);
      uStack_148 = 0x4bf5bf;
      fread(pMVar11 + 0x1c,4,1,in_ECX);
      ppMVar1 = *(MetaGameAction ***)(local_bc + 4);
      if (*(MetaGameAction ***)(local_bc + 8) == ppMVar1) {
        ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)local_bc,ppMVar1,&local_c4);
      }
      else {
        *ppMVar1 = pMVar11;
        *(int *)(local_bc + 4) = *(int *)(local_bc + 4) + 4;
      }
      debugPrint("SAVEHANDLER","  Console damage loaded for: %s");
      local_b8 = local_b8 + 1;
    } while ((int)local_b8 < local_dc);
  }
  fread(&local_e0,4,1,in_ECX);
  local_b8 = (word *)0x0;
  if (0 < local_e0) {
    do {
      pSVar12 = readShipModule(p_Var7);
      local_bd = pSVar12[99];
      SystemManager::addModule
                (*(SystemManager **)(local_c8 + 0x40),pSVar12,*(int *)(pSVar12 + 0x10));
      pSVar12[99] = local_bd;
      local_b8 = local_b8 + 1;
    } while ((int)local_b8 < local_e0);
  }
  pSVar16 = local_c8;
  if (*(int *)(*(int *)(local_c8 + 0x40) + 0x20) != 0) {
    local_b8 = (word *)(*(int *)(*(int *)(local_c8 + 0x40) + 0x20) + 0x3c);
    local_c4 = (MetaGameAction *)0x8;
    do {
      local_bc = *(word **)local_b8;
      if (local_bc != (word *)0x0) {
        ((Weapon *)local_bc)->~Weapon();
        operator_delete(local_bc,(nothrow_t *)0x428);
      }
      *(undefined4 *)local_b8 = 0;
      local_b8 = local_b8 + 4;
      local_c4 = local_c4 + -1;
    } while (local_c4 != (MetaGameAction *)0x0);
  }
  fread(&local_e4,4,1,in_ECX);
  local_c4 = (MetaGameAction *)0x0;
  if (0 < local_e4) {
    do {
      fread(&local_bd,1,1,in_ECX);
      if (local_bd != (byte)0x0) {
        SaveHandler::readLengthString(p_Var7);
        local_14._0_1_ = 0xb;
        pMVar11 = local_c4;
        ghidra::str::ctor
                  ((std::string *)&stack0xfffffee0,(std::string *)local_3c);
        pWVar13 = GameData::getWeaponClassWithIdentifier();
        (pSVar16)->addWeapon(pWVar13, (int)pMVar11);
        debugPrint("SAVEHANDLER","Loaded weapon of class %s into player ship");
        local_14 = CONCAT31(local_14._1_3_,4);
        if (0xf < local_28) {
          pnVar22 = (nothrow_t *)(local_28 + 1);
          pwVar15 = local_3c[0];
          if ((nothrow_t *)0xfff < pnVar22) {
            pwVar15 = *(word **)(local_3c[0] + -4);
            pnVar22 = (nothrow_t *)(local_28 + 0x24);
            if ((word *)0x1f < local_3c[0] + (-4 - (int)pwVar15)) goto LAB_004bf863;
          }
          operator_delete(pwVar15,pnVar22);
        }
      }
      local_c4 = local_c4 + 1;
    } while ((int)local_c4 < local_e4);
  }
  local_bc = (word *)SaveHandler::readLengthString(p_Var7);
  if ((word *)(pSVar16 + 0x32c) != local_bc) {
    // [mislabelled-dtor] word::~word((word *)(pSVar16 + 0x32c));
    uVar3 = *(undefined4 *)(local_bc + 4);
    uVar4 = *(undefined4 *)(local_bc + 8);
    uVar5 = *(undefined4 *)(local_bc + 0xc);
    *(undefined4 *)(pSVar16 + 0x32c) = *(undefined4 *)local_bc;
    *(undefined4 *)(pSVar16 + 0x330) = uVar3;
    *(undefined4 *)(pSVar16 + 0x334) = uVar4;
    *(undefined4 *)(pSVar16 + 0x338) = uVar5;
    *(undefined8 *)(pSVar16 + 0x33c) = *(undefined8 *)(local_bc + 0x10);
    *(undefined4 *)(local_bc + 0x10) = 0;
    *(undefined4 *)(local_bc + 0x14) = 0xf;
    *local_bc = (word)0x0;
  }
  if (0xf < local_28) {
    pnVar22 = (nothrow_t *)(local_28 + 1);
    pwVar15 = local_3c[0];
    if ((nothrow_t *)0xfff < pnVar22) {
      pwVar15 = *(word **)(local_3c[0] + -4);
      pnVar22 = (nothrow_t *)(local_28 + 0x24);
      if ((word *)0x1f < local_3c[0] + (-4 - (int)pwVar15)) {
LAB_004bf863:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pwVar15,pnVar22);
  }
  fread(&local_ca,1,1,in_ECX);
  if (local_ca != '\0') {
    pvVar14 = operator_new(0x30);
    memset(pvVar14,0,0x30);
    *(undefined4 *)((int)pvVar14 + 0x14) = 0xf;
    *(undefined4 *)((int)pvVar14 + 0x28) = 0;
    *(undefined4 *)((int)pvVar14 + 0x2c) = 0xf;
    *(undefined1 *)((int)pvVar14 + 0x18) = 0;
    *(void **)(local_c8 + 0x328) = pvVar14;
    local_bc = (word *)SaveHandler::readLengthString(p_Var7);
    pSVar16 = local_c8;
    local_b8 = *(word **)(local_c8 + 0x328);
    if (local_b8 != local_bc) {
      // [mislabelled-dtor] word::~word(local_b8);
      uVar3 = *(undefined4 *)(local_bc + 4);
      uVar4 = *(undefined4 *)(local_bc + 8);
      uVar5 = *(undefined4 *)(local_bc + 0xc);
      *(undefined4 *)local_b8 = *(undefined4 *)local_bc;
      *(undefined4 *)(local_b8 + 4) = uVar3;
      *(undefined4 *)(local_b8 + 8) = uVar4;
      *(undefined4 *)(local_b8 + 0xc) = uVar5;
      *(undefined8 *)(local_b8 + 0x10) = *(undefined8 *)(local_bc + 0x10);
      *(undefined4 *)(local_bc + 0x10) = 0;
      *(undefined4 *)(local_bc + 0x14) = 0xf;
      *local_bc = (word)0x0;
    }
    if (0xf < local_28) {
      pnVar22 = (nothrow_t *)(local_28 + 1);
      pwVar15 = local_3c[0];
      if ((nothrow_t *)0xfff < pnVar22) {
        pwVar15 = *(word **)(local_3c[0] + -4);
        pnVar22 = (nothrow_t *)(local_28 + 0x24);
        if ((word *)0x1f < local_3c[0] + (-4 - (int)pwVar15)) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pwVar15,pnVar22);
    }
    pwVar15 = (word *)SaveHandler::readLengthString(p_Var7);
    local_bc = (word *)(*(int *)(pSVar16 + 0x328) + 0x18);
    if (local_bc != pwVar15) {
      // [mislabelled-dtor] word::~word(local_bc);
      uVar3 = *(undefined4 *)(pwVar15 + 4);
      uVar4 = *(undefined4 *)(pwVar15 + 8);
      uVar5 = *(undefined4 *)(pwVar15 + 0xc);
      *(undefined4 *)local_bc = *(undefined4 *)pwVar15;
      *(undefined4 *)(local_bc + 4) = uVar3;
      *(undefined4 *)(local_bc + 8) = uVar4;
      *(undefined4 *)(local_bc + 0xc) = uVar5;
      *(undefined8 *)(local_bc + 0x10) = *(undefined8 *)(pwVar15 + 0x10);
      *(undefined4 *)(pwVar15 + 0x10) = 0;
      *(undefined4 *)(pwVar15 + 0x14) = 0xf;
      *pwVar15 = (word)0x0;
    }
    if (0xf < local_28) {
      pnVar22 = (nothrow_t *)(local_28 + 1);
      pwVar15 = local_3c[0];
      if ((nothrow_t *)0xfff < pnVar22) {
        pwVar15 = *(word **)(local_3c[0] + -4);
        pnVar22 = (nothrow_t *)(local_28 + 0x24);
        if ((word *)0x1f < local_3c[0] + (-4 - (int)pwVar15)) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pwVar15,pnVar22);
    }
    local_2c = 0;
    local_28 = 0xf;
    local_3c[0] = (word *)((uint)local_3c[0] & 0xffffff00);
  }
  pGVar6 = g_gameData;
  if (pSVar16[0x234] == (byte)0x0) goto LAB_004bfd30;
  *(Ship **)(g_gameData + 0xd0) = pSVar16;
  *(undefined4 *)(pSVar16 + 100) = 1;
  pSVar2 = *(Ship **)(pGVar6 + 0xd0);
  ShipData::currentlyBoardedShip = *(Ship **)(pSVar2 + 0x178);
  if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
LAB_004bfa4a:
    ShipData::currentlyBoardedShip = pSVar2;
  }
  else {
    bVar25 = false;
    if (*(int *)(ShipData::currentlyBoardedShip + 0x254) != 0) {
      bVar25 = *(int *)(*(int *)(ShipData::currentlyBoardedShip + 0x254) + 0x158) == 1;
      pSVar16 = local_c8;
    }
    if (!bVar25) goto LAB_004bfa4a;
  }
  pGVar6[0xd4] = *(GameData *)(*(int *)(ShipData::currentlyBoardedShip + 0x254) + 0xd0);
  if (Singleton<Pather>::instance == (Pather *)0x0) {
    local_d0 = operator_new(0x98);
    local_14._0_1_ = 0xc;
    Singleton<Pather>::instance = (Pather *)new ((void *)((Pather *)local_d0)) Pather();
    local_14 = CONCAT31(local_14._1_3_,4);
  }
  (Singleton<Pather>::instance)->resetSector();
  if (*(int *)(*(int *)(pSVar16 + 0x24) + 0x118) == 2) {
    *(undefined1 *)(*(int *)(pSVar16 + 0x40) + 0x34) = 0;
  }
  else {
    *(undefined1 *)(*(int *)(pSVar16 + 0x40) + 0x34) = 1;
  }
  pSVar16 = GameData::getShipWithinDistance();
  if (pSVar16 == (Ship *)0x0) {
    if (*(int **)(*(int *)(g_gameData + 0xd0) + 0x178) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(g_gameData + 0xd0) + 0x178) + 4))();
    }
    pGVar6 = g_gameData;
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x178) = 0;
    *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0xf8) = 0;
    iVar8 = *(int *)(pGVar6 + 0xd0);
    *(undefined4 *)(iVar8 + 0xd4) = 0;
    *(undefined4 *)(iVar8 + 0x2c0) = 0;
    *(undefined4 *)(iVar8 + 0x2c4) = 0;
    if (*(int *)(*(int *)(pGVar6 + 0xd0) + 0x178) != 0) {
      pSVar17 = ghidra::any_singleton();
      ghidra::str::assign((std::string *)(pSVar17 + 0x14),"",0);
    }
  }
  else {
    (*(Ship **)(g_gameData + 0xd0))->setDocked(pSVar16, true, true);
    iVar8 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x178);
    if (iVar8 != 0) {
      pbVar23 = (std::string *)(iVar8 + 8);
      pSVar17 = ghidra::any_singleton();
      if ((std::string *)(pSVar17 + 0x14) != pbVar23) {
        if (0xf < *(uint *)(iVar8 + 0x1c)) {
          pbVar23 = *(std::string **)pbVar23;
        }
        ghidra::str::assign
                  ((std::string *)(pSVar17 + 0x14),(char *)pbVar23,*(uint *)(iVar8 + 0x18));
      }
      strUsingArgs((char *)local_3c);
      local_14._0_1_ = 0xd;
      local_bc = (word *)local_3c;
      if (0xf < local_28) {
        local_bc = local_3c[0];
      }
      local_b8 = (word *)local_3c;
      if (0xf < local_28) {
        local_b8 = local_3c[0];
      }
      iVar24 = (int)(local_bc + local_2c) - (int)local_b8;
      iVar8 = 0;
      if (local_bc + local_2c < local_b8) {
        iVar24 = 0;
      }
      if (iVar24 != 0) {
        do {
          iVar18 = tolower((int)(char)local_b8[iVar8]);
          local_bc[iVar8] = SUB41(iVar18,0);
          iVar8 = iVar8 + 1;
        } while (iVar8 != iVar24);
      }
      local_d0 = (ConsoleDamage *)&stack0xfffffee0;
      ghidra::str::ctor
                ((std::string *)&stack0xfffffee0,(std::string *)local_3c);
      local_14._0_1_ = 0xe;
      if (ghidra::Singleton<void>::instance == (FlagManager *)0x0) {
        pwVar19 = operator_new(0x30);
        *(undefined4 *)pwVar19 = 0;
        *(undefined4 *)(pwVar19 + 4) = 0;
        *(undefined4 *)(pwVar19 + 8) = 0;
        local_14._0_1_ = 0x10;
        pwVar15 = pwVar19 + 0xc;
        *(undefined4 *)pwVar15 = 0;
        *(undefined4 *)(pwVar19 + 0x10) = 0;
        local_bc = pwVar19;
        local_b8 = pwVar15;
        p_Var20 = ghidra::lib::_Tree_comp_alloc___Buyheadnode(this);
        *(ghidra::lib::_Tree_node_t **)pwVar15 = p_Var20;
        *(undefined4 *)(pwVar19 + 0x24) = 0;
        *(undefined4 *)(pwVar19 + 0x28) = 0xf;
        pwVar19[0x14] = (word)0x0;
        ghidra::Singleton<void>::instance = (FlagManager *)pwVar19;
      }
      local_14 = CONCAT31(local_14._1_3_,0xd);
      (ghidra::Singleton<void>::instance)->setFlag();
      if (0xf < local_28) {
        pnVar22 = (nothrow_t *)(local_28 + 1);
        pwVar15 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar22) {
          pwVar15 = *(word **)(local_3c[0] + -4);
          pnVar22 = (nothrow_t *)(local_28 + 0x24);
          if ((word *)0x1f < local_3c[0] + (-4 - (int)pwVar15)) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pwVar15,pnVar22);
      }
    }
  }
LAB_004bfd30:
  if (0xf < local_40) {
    pnVar22 = (nothrow_t *)(local_40 + 1);
    pbVar23 = local_54[0];
    if ((nothrow_t *)0xfff < pnVar22) {
      pbVar23 = *(std::string **)(local_54[0] + -4);
      pnVar22 = (nothrow_t *)(local_40 + 0x24);
      if ((std::string *)0x1f < local_54[0] + (-4 - (int)pbVar23)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar23,pnVar22);
  }
  local_44 = 0;
  local_40 = 0xf;
  local_54[0] = (std::string *)((uint)local_54[0] & 0xffffff00);
  if (0xf < local_58) {
    pnVar22 = (nothrow_t *)(local_58 + 1);
    pbVar23 = local_6c[0];
    if ((nothrow_t *)0xfff < pnVar22) {
      pbVar23 = *(std::string **)(local_6c[0] + -4);
      pnVar22 = (nothrow_t *)(local_58 + 0x24);
      if ((std::string *)0x1f < local_6c[0] + (-4 - (int)pbVar23)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar23,pnVar22);
  }
  local_5c = 0;
  local_58 = 0xf;
  local_6c[0] = (std::string *)((uint)local_6c[0] & 0xffffff00);
  if (0xf < local_70) {
    pnVar22 = (nothrow_t *)(local_70 + 1);
    pvVar14 = local_84[0];
    if ((nothrow_t *)0xfff < pnVar22) {
      pvVar14 = *(void **)((int)local_84[0] + -4);
      pnVar22 = (nothrow_t *)(local_70 + 0x24);
      if (0x1f < (uint)((int)local_84[0] + (-4 - (int)pvVar14))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar14,pnVar22);
  }
  local_74 = 0;
  local_70 = 0xf;
  local_84[0] = (void *)((uint)local_84[0] & 0xffffff00);
  if (0xf < local_88) {
    pnVar22 = (nothrow_t *)(local_88 + 1);
    pvVar14 = local_9c[0];
    if ((nothrow_t *)0xfff < pnVar22) {
      pvVar14 = *(void **)((int)local_9c[0] + -4);
      pnVar22 = (nothrow_t *)(local_88 + 0x24);
      if (0x1f < (uint)((int)local_9c[0] + (-4 - (int)pvVar14))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar14,pnVar22);
  }
  local_8c = 0;
  local_88 = 0xf;
  local_9c[0] = (void *)((uint)local_9c[0] & 0xffffff00);
  if (0xf < local_a0) {
    pnVar22 = (nothrow_t *)(local_a0 + 1);
    pvVar14 = local_b4[0];
    if ((nothrow_t *)0xfff < pnVar22) {
      pvVar14 = *(void **)((int)local_b4[0] + -4);
      pnVar22 = (nothrow_t *)(local_a0 + 0x24);
      if (0x1f < (uint)((int)local_b4[0] + (-4 - (int)pvVar14))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar14,pnVar22);
  }
  // [seh] ExceptionList = local_1c;
  // [cookie] pSVar16 = (Ship *)__security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return pSVar16;
}


// Ghidra: void __cdecl V12::savePassenger(_iobuf *param_1)
void V12::savePassenger(_iobuf * param_1)

{
  char stack0xffffffd4[1] = {0};  // [pseudo] address of an unnamed stack slot
  FILE *in_ECX;
  undefined1 local_6;
  char local_5;
  
  local_5 = *(int *)(g_gameData + 0x128) != 0;
  fwrite(&local_5,1,1,in_ECX);
  if (*(int *)(g_gameData + 0x128) != 0) {
    ghidra::str::ctor
              ((std::string *)&stack0xffffffd4,
               *(std::string **)(*(int *)(g_gameData + 0x128) + 0xc));
    SaveHandler::writeLengthString();
    ghidra::str::ctor
              ((std::string *)&stack0xffffffd4,
               (std::string *)(*(int *)(*(int *)(g_gameData + 0x128) + 0xc) + 0x18));
    SaveHandler::writeLengthString();
    ghidra::str::ctor
              ((std::string *)&stack0xffffffd4,
               (std::string *)(*(int *)(g_gameData + 0x128) + 0x28));
    SaveHandler::writeLengthString();
    ghidra::str::ctor
              ((std::string *)&stack0xffffffd4,
               (std::string *)(*(int *)(g_gameData + 0x128) + 0x40));
    SaveHandler::writeLengthString();
    ghidra::str::ctor
              ((std::string *)&stack0xffffffd4,
               (std::string *)(*(int *)(g_gameData + 0x128) + 0x10));
    SaveHandler::writeLengthString();
    ghidra::str::ctor
              ((std::string *)&stack0xffffffd4,
               (std::string *)(*(int *)(g_gameData + 0x128) + 0x58));
    SaveHandler::writeLengthString();
    ghidra::str::ctor
              ((std::string *)&stack0xffffffd4,
               (std::string *)(*(int *)(g_gameData + 0x128) + 0x70));
    SaveHandler::writeLengthString();
    fwrite((void *)(*(int *)(g_gameData + 0x128) + 4),4,1,in_ECX);
    fwrite((void *)(*(int *)(g_gameData + 0x128) + 0x90),1,1,in_ECX);
    fwrite((void *)(*(int *)(g_gameData + 0x128) + 0x88),1,1,in_ECX);
    fwrite((void *)(*(int *)(g_gameData + 0x128) + 0x8c),4,1,in_ECX);
    fwrite((void *)(*(int *)(g_gameData + 0x128) + 8),4,1,in_ECX);
    local_6 = 0;
    fwrite(&local_6,1,1,in_ECX);
  }
  if (local_5 != '\0') {
    debugPrint("SAVEHANDLER","Saved onboard passenger %s.");
    return;
  }
  debugPrint("SAVEHANDLER","Saved no passenger.");
  return;
}


// Ghidra: void __cdecl V12::writeShipModule(_iobuf *param_1,ShipModule *param_2)
void V12::writeShipModule(_iobuf * param_1, ShipModule * param_2)

{
  char stack0xffffffcc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  FILE *in_ECX;
  int in_EDX;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_8 = in_EDX;
  ghidra::str::ctor
            ((std::string *)&stack0xffffffcc,(std::string *)(*(int *)(in_EDX + 8) + 0x50));
  SaveHandler::writeLengthString();
  iVar2 = 0;
  do {
    local_c = 0xffffffff;
    local_10 = 0;
    iVar1 = *(int *)(*(int *)(local_8 + 0xc) + 4 + iVar2);
    if (iVar1 != 0) {
      local_c = **(undefined4 **)(iVar1 + 4);
      local_10 = **(undefined4 **)(*(int *)(local_8 + 0xc) + 4 + iVar2);
    }
    fwrite(&local_c,4,1,in_ECX);
    fwrite(&local_10,4,1,in_ECX);
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x50);
  iVar2 = 0x54;
  do {
    local_10 = 0xffffffff;
    local_c = 0;
    iVar1 = *(int *)(*(int *)(local_8 + 0xc) + iVar2);
    if (iVar1 != 0) {
      local_10 = **(undefined4 **)(iVar1 + 4);
      local_c = **(undefined4 **)(*(int *)(local_8 + 0xc) + iVar2);
    }
    fwrite(&local_10,4,1,in_ECX);
    fwrite(&local_c,4,1,in_ECX);
    iVar1 = local_8;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0xa4);
  fwrite((void *)(local_8 + 99),1,1,in_ECX);
  fwrite((void *)(iVar1 + 0x68),4,1,in_ECX);
  fwrite((void *)(iVar1 + 0x10),4,1,in_ECX);
  fwrite((void *)(iVar1 + 0x14),1,1,in_ECX);
  fwrite((void *)(iVar1 + 0x1c),1,1,in_ECX);
  fwrite((void *)(iVar1 + 100),4,1,in_ECX);
  iVar2 = 0;
  do {
    fwrite((void *)(local_8 + 0x1e + iVar2),1,1,in_ECX);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}


// Ghidra: ShipModule * __cdecl V12::readShipModule(_iobuf *param_1)
ShipModule * V12::readShipModule(_iobuf * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  GameData *pGVar1;
  bool bVar2;
  ShipModuleClass *pSVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  ShipModule *pSVar6;
  FILE *in_ECX;
  uint uVar7;
  void *pvVar8;
  undefined4 *puVar9;
  nothrow_t *pnVar10;
  uint uVar11;
  code *pcVar12;
  int iVar13;
  undefined4 uStack_74;
  undefined4 uStack_70;
  ShipModule *local_3c;
  ShipModule *local_38;
  ShipModule *local_34;
  int local_30;
  void *local_2c [5];
  uint local_18;
  _iobuf *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bf11a;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  SaveHandler::readLengthString(local_14);
  // [seh] local_8 = 0;
  ghidra::str::ctor((std::string *)&uStack_74,(std::string *)local_2c);
  pSVar3 = GameData::getModuleClassWithIdentifier();
  if (pSVar3 == (ShipModuleClass *)0x0) {
    debugPrint("ERROR","Invalid module in save file.");
    bVar2 = cc_assert_script_compatible("Invalid module in save file.");
    if (!bVar2) {
      cocos2d::log("Assert failed: %s");
    }
  }
  else {
    local_38 = operator_new(0x88);
    // [seh] local_8._0_1_ = 1;
    local_30 = new ((void *)(local_38)) ShipModule(pSVar3);
    // [seh] local_8 = (uint)local_8._1_3_ << 8;
    iVar13 = 0;
    pcVar12 = fread_exref;
    do {
      uStack_70 = 0x4c082b;
      (*pcVar12)();
      uStack_74 = 1;
      (*pcVar12)(&local_38,4);
      if (local_34 != (ShipModule *)0xffffffff) {
        puVar4 = operator_new(8);
        pGVar1 = g_gameData;
        local_3c = local_34;
        *puVar4 = 0x42c80000;
        pcVar12 = fread_exref;
        uVar7 = 0;
        uVar11 = *(int *)(pGVar1 + 4) - *(int *)pGVar1 >> 2;
        if (uVar11 != 0) {
          puVar9 = *(undefined4 **)pGVar1;
          do {
            if (*(ShipModule **)*puVar9 == local_34) {
              uVar5 = (*(undefined4 **)pGVar1)[uVar7];
              goto LAB_004c088f;
            }
            uVar7 = uVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (uVar7 < uVar11);
        }
        uVar5 = 0;
LAB_004c088f:
        puVar4[1] = uVar5;
        *(undefined4 **)(iVar13 + 4 + *(int *)(local_30 + 0xc)) = puVar4;
        **(undefined4 **)(iVar13 + 4 + *(int *)(local_30 + 0xc)) = local_38;
      }
      iVar13 = iVar13 + 4;
    } while (iVar13 < 0x50);
    iVar13 = 0x54;
    do {
      uStack_70 = 0x4c08d1;
      (*pcVar12)();
      uStack_74 = 1;
      (*pcVar12)(&local_3c,4);
      if (local_34 != (ShipModule *)0xffffffff) {
        puVar4 = operator_new(8);
        pGVar1 = g_gameData;
        local_38 = local_34;
        *puVar4 = 0x42c80000;
        pcVar12 = fread_exref;
        uVar7 = 0;
        uVar11 = *(int *)(pGVar1 + 4) - *(int *)pGVar1 >> 2;
        if (uVar11 != 0) {
          puVar9 = *(undefined4 **)pGVar1;
          do {
            if (*(ShipModule **)*puVar9 == local_34) {
              uVar5 = (*(undefined4 **)pGVar1)[uVar7];
              goto LAB_004c0936;
            }
            uVar7 = uVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (uVar7 < uVar11);
        }
        uVar5 = 0;
LAB_004c0936:
        puVar4[1] = uVar5;
        *(undefined4 **)(iVar13 + *(int *)(local_30 + 0xc)) = puVar4;
        **(undefined4 **)(iVar13 + *(int *)(local_30 + 0xc)) = local_3c;
      }
      iVar13 = iVar13 + 4;
    } while (iVar13 < 0xa4);
    uStack_70 = 0x4c098c;
    (*pcVar12)();
    iVar13 = local_30;
    uStack_74 = 1;
    (*pcVar12)(local_30 + 0x68,4);
    (*pcVar12)(iVar13 + 0x10,4,1,in_ECX);
    (*pcVar12)(iVar13 + 0x14,1,1,in_ECX);
    uStack_70 = 0x4c09be;
    (*pcVar12)();
    uStack_74 = 1;
    (*pcVar12)(iVar13 + 100,4);
    iVar13 = 0;
    do {
      uStack_70 = 0x4c09e4;
      fread((void *)(local_30 + 0x1e + iVar13),1,1,in_ECX);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 4);
    debugPrint("DETAIL","Loaded module of type \'%s\'");
  }
  if (0xf < local_18) {
    pnVar10 = (nothrow_t *)(local_18 + 1);
    pvVar8 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar10) {
      pvVar8 = *(void **)((int)local_2c[0] + -4);
      pnVar10 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar8,pnVar10);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] pSVar6 = (ShipModule *)__security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return pSVar6;
}
