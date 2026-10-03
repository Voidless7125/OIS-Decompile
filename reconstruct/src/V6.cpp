// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __cdecl V6::loadEmails(_iobuf *param_1)
void V6::loadEmails(_iobuf * param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff74[1] = {0};  // [pseudo] address of an unnamed stack slot
  ghidra::vector *this_;
  AnimationFrames **ppAVar1;
  int iVar2;
  std::string *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  _iobuf *p_Var7;
  EmailManager *pEVar8;
  AnimationFrames *_DstBuf;
  word *pwVar9;
  bool *pbVar10;
  Article *pAVar11;
  Email *pEVar12;
  FILE *in_ECX;
  void *pvVar13;
  nothrow_t *pnVar14;
  int iVar15;
  code *pcVar16;
  char *pcVar17;
  AnimationFrames *local_68;
  int local_64;
  word *local_60;
  FILE *local_5c;
  int local_58;
  void *local_54 [5];
  uint local_40;
  void *local_3c [5];
  uint local_28;
  _iobuf *local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005bf1d0;
  // [seh] local_1c = ExceptionList;
  // [cookie] p_Var7 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  local_5c = in_ECX;
  local_24 = p_Var7;
  pEVar8 = ghidra::any_singleton();
  (pEVar8)->resetState();
  (*(CommsData **)(g_gameData + 300))->clearState();
  pcVar16 = fread_exref;
  local_58 = 0;
  fread(&local_58,4,1,in_ECX);
  debugPrint("SAVEHANDLER","Loading %d emails...");
  local_64 = 0;
  if (0 < local_58) {
    do {
      local_60 = operator_new(0xa0);
      _DstBuf = (AnimationFrames *)new ((void *)((EmailInstance *)local_60)) EmailInstance();
      local_68 = _DstBuf;
      fread(_DstBuf,4,1,in_ECX);
      pwVar9 = (word *)SaveHandler::readLengthString(p_Var7);
      if ((word *)(_DstBuf + 4) != pwVar9) {
        // [mislabelled-dtor] word::~word((word *)(_DstBuf + 4));
        uVar4 = *(undefined4 *)(pwVar9 + 4);
        uVar5 = *(undefined4 *)(pwVar9 + 8);
        uVar6 = *(undefined4 *)(pwVar9 + 0xc);
        *(undefined4 *)(_DstBuf + 4) = *(undefined4 *)pwVar9;
        *(undefined4 *)(_DstBuf + 8) = uVar4;
        *(undefined4 *)(_DstBuf + 0xc) = uVar5;
        *(undefined4 *)(_DstBuf + 0x10) = uVar6;
        uVar4 = *(undefined4 *)(pwVar9 + 0x14);
        *(undefined4 *)(_DstBuf + 0x14) = *(undefined4 *)(pwVar9 + 0x10);
        *(undefined4 *)(_DstBuf + 0x18) = uVar4;
        *(undefined4 *)(pwVar9 + 0x10) = 0;
        *(undefined4 *)(pwVar9 + 0x14) = 0xf;
        *pwVar9 = (word)0x0;
      }
      if (0xf < local_28) {
        pnVar14 = (nothrow_t *)(local_28 + 1);
        pvVar13 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar14) {
          pvVar13 = *(void **)((int)local_3c[0] + -4);
          pnVar14 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar13))) goto LAB_004c1675;
        }
        operator_delete(pvVar13,pnVar14);
      }
      pwVar9 = (word *)SaveHandler::readLengthString(p_Var7);
      if ((word *)(_DstBuf + 0x68) != pwVar9) {
        // [mislabelled-dtor] word::~word((word *)(_DstBuf + 0x68));
        uVar4 = *(undefined4 *)(pwVar9 + 4);
        uVar5 = *(undefined4 *)(pwVar9 + 8);
        uVar6 = *(undefined4 *)(pwVar9 + 0xc);
        *(undefined4 *)(_DstBuf + 0x68) = *(undefined4 *)pwVar9;
        *(undefined4 *)(_DstBuf + 0x6c) = uVar4;
        *(undefined4 *)(_DstBuf + 0x70) = uVar5;
        *(undefined4 *)(_DstBuf + 0x74) = uVar6;
        uVar4 = *(undefined4 *)(pwVar9 + 0x14);
        *(undefined4 *)(_DstBuf + 0x78) = *(undefined4 *)(pwVar9 + 0x10);
        *(undefined4 *)(_DstBuf + 0x7c) = uVar4;
        *(undefined4 *)(pwVar9 + 0x10) = 0;
        *(undefined4 *)(pwVar9 + 0x14) = 0xf;
        *pwVar9 = (word)0x0;
      }
      if (0xf < local_28) {
        pnVar14 = (nothrow_t *)(local_28 + 1);
        pvVar13 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar14) {
          pvVar13 = *(void **)((int)local_3c[0] + -4);
          pnVar14 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar13))) goto LAB_004c1675;
        }
        operator_delete(pvVar13,pnVar14);
      }
      local_60 = (word *)SaveHandler::readLengthString(p_Var7);
      pwVar9 = (word *)(_DstBuf + 0x1c);
      if (pwVar9 != local_60) {
        // [mislabelled-dtor] word::~word(pwVar9);
        uVar4 = *(undefined4 *)(local_60 + 4);
        uVar5 = *(undefined4 *)(local_60 + 8);
        uVar6 = *(undefined4 *)(local_60 + 0xc);
        *(undefined4 *)pwVar9 = *(undefined4 *)local_60;
        *(undefined4 *)(_DstBuf + 0x20) = uVar4;
        *(undefined4 *)(_DstBuf + 0x24) = uVar5;
        *(undefined4 *)(_DstBuf + 0x28) = uVar6;
        uVar4 = *(undefined4 *)(local_60 + 0x14);
        *(undefined4 *)(_DstBuf + 0x2c) = *(undefined4 *)(local_60 + 0x10);
        *(undefined4 *)(_DstBuf + 0x30) = uVar4;
        *(undefined4 *)(local_60 + 0x10) = 0;
        *(undefined4 *)(local_60 + 0x14) = 0xf;
        *local_60 = (word)0x0;
      }
      if (0xf < local_28) {
        pnVar14 = (nothrow_t *)(local_28 + 1);
        pvVar13 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar14) {
          pvVar13 = *(void **)((int)local_3c[0] + -4);
          pnVar14 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar13))) goto LAB_004c1675;
        }
        operator_delete(pvVar13,pnVar14);
      }
      if ((std::string *)(_DstBuf + 0x4c) != (std::string *)pwVar9) {
        if (0xf < *(uint *)(_DstBuf + 0x30)) {
          pwVar9 = *(word **)pwVar9;
        }
        ghidra::str::assign
                  ((std::string *)(_DstBuf + 0x4c),(char *)pwVar9,*(uint *)(_DstBuf + 0x2c));
      }
      pwVar9 = (word *)SaveHandler::readLengthString(p_Var7);
      if ((word *)(_DstBuf + 0x34) != pwVar9) {
        // [mislabelled-dtor] word::~word((word *)(_DstBuf + 0x34));
        uVar4 = *(undefined4 *)(pwVar9 + 4);
        uVar5 = *(undefined4 *)(pwVar9 + 8);
        uVar6 = *(undefined4 *)(pwVar9 + 0xc);
        *(undefined4 *)(_DstBuf + 0x34) = *(undefined4 *)pwVar9;
        *(undefined4 *)(_DstBuf + 0x38) = uVar4;
        *(undefined4 *)(_DstBuf + 0x3c) = uVar5;
        *(undefined4 *)(_DstBuf + 0x40) = uVar6;
        uVar4 = *(undefined4 *)(pwVar9 + 0x14);
        *(undefined4 *)(_DstBuf + 0x44) = *(undefined4 *)(pwVar9 + 0x10);
        *(undefined4 *)(_DstBuf + 0x48) = uVar4;
        *(undefined4 *)(pwVar9 + 0x10) = 0;
        *(undefined4 *)(pwVar9 + 0x14) = 0xf;
        *pwVar9 = (word)0x0;
      }
      if (0xf < local_28) {
        pnVar14 = (nothrow_t *)(local_28 + 1);
        pvVar13 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar14) {
          pvVar13 = *(void **)((int)local_3c[0] + -4);
          pnVar14 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar13))) goto LAB_004c1675;
        }
        operator_delete(pvVar13,pnVar14);
      }
      pwVar9 = (word *)SaveHandler::readLengthString(p_Var7);
      if ((word *)(_DstBuf + 0x80) != pwVar9) {
        // [mislabelled-dtor] word::~word((word *)(_DstBuf + 0x80));
        uVar4 = *(undefined4 *)(pwVar9 + 4);
        uVar5 = *(undefined4 *)(pwVar9 + 8);
        uVar6 = *(undefined4 *)(pwVar9 + 0xc);
        *(undefined4 *)(_DstBuf + 0x80) = *(undefined4 *)pwVar9;
        *(undefined4 *)(_DstBuf + 0x84) = uVar4;
        *(undefined4 *)(_DstBuf + 0x88) = uVar5;
        *(undefined4 *)(_DstBuf + 0x8c) = uVar6;
        uVar4 = *(undefined4 *)(pwVar9 + 0x14);
        *(undefined4 *)(_DstBuf + 0x90) = *(undefined4 *)(pwVar9 + 0x10);
        *(undefined4 *)(_DstBuf + 0x94) = uVar4;
        *(undefined4 *)(pwVar9 + 0x10) = 0;
        *(undefined4 *)(pwVar9 + 0x14) = 0xf;
        *pwVar9 = (word)0x0;
      }
      if (0xf < local_28) {
        pnVar14 = (nothrow_t *)(local_28 + 1);
        pvVar13 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar14) {
          pvVar13 = *(void **)((int)local_3c[0] + -4);
          pnVar14 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar13))) goto LAB_004c1675;
        }
        operator_delete(pvVar13,pnVar14);
      }
      in_ECX = local_5c;
      fread(_DstBuf + 0x98,4,1,local_5c);
      fread(_DstBuf + 100,1,1,in_ECX);
      fread(_DstBuf + 0x9c,1,1,in_ECX);
      this_ = *(ghidra::vector **)(g_gameData + 300);
      ppAVar1 = *(AnimationFrames ***)((char *)this_ + 4);
      if (*(AnimationFrames ***)((char *)this_ + 8) == ppAVar1) {
        ghidra::lib::vector___Emplace_reallocate(this_,ppAVar1,&local_68);
        _DstBuf = local_68;
      }
      else {
        *ppAVar1 = _DstBuf;
        *(int *)((char *)this_ + 4) = *(int *)((char *)this_ + 4) + 4;
      }
      local_60 = (word *)&stack0xffffff74;
      ghidra::str::ctor
                ((std::string *)&stack0xffffff74,(std::string *)(_DstBuf + 0x80));
      local_14 = 0;
      pEVar8 = ghidra::Singleton<void>::instance;
      if (ghidra::Singleton<void>::instance == (EmailManager *)0x0) {
        pEVar8 = operator_new(0x2c);
        ghidra::Singleton<void>::instance = pEVar8;
        *pEVar8 = (byte)0x0;
        *(undefined4 *)(pEVar8 + 4) = 0;
        *(undefined4 *)(pEVar8 + 8) = 0;
        *(undefined4 *)(pEVar8 + 0xc) = 0;
        *(undefined4 *)(pEVar8 + 0x10) = 0;
        *(undefined4 *)(pEVar8 + 0x14) = 0;
        *(undefined4 *)(pEVar8 + 0x18) = 0;
        *(undefined4 *)(pEVar8 + 0x1c) = 0;
        *(undefined4 *)(pEVar8 + 0x20) = 0;
        *(undefined4 *)(pEVar8 + 0x24) = 0;
        *(undefined4 *)(pEVar8 + 0x28) = 0;
        local_60 = (word *)pEVar8;
      }
      local_14 = 0xffffffff;
      (pEVar8)->markEmailSent();
      debugPrint("SAVEHANDLER"," - Loaded: \'%s\'");
      local_64 = local_64 + 1;
      pcVar16 = fread_exref;
    } while (local_64 < local_58);
  }
  (*pcVar16)();
  debugPrint("SAVEHANDLER","Loading %d \'read articles\'...");
  iVar15 = 0;
  if (0 < local_58) {
    do {
      SaveHandler::readLengthString(p_Var7);
      local_14 = 1;
      pbVar10 = ghidra::lib::map__operator_x5b_x5d
                          ((ghidra::lib::map_t *)(*(int *)(g_gameData + 300) + 0xc),(std::string *)local_3c);
      *pbVar10 = true;
      debugPrint("SAVEHANDLER","Loaded read article \'%s\'");
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar14 = (nothrow_t *)(local_28 + 1);
        pvVar13 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar14) {
          pvVar13 = *(void **)((int)local_3c[0] + -4);
          pnVar14 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar13))) goto LAB_004c1675;
        }
        operator_delete(pvVar13,pnVar14);
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < local_58);
  }
  (*pcVar16)();
  debugPrint("SAVEHANDLER","Loading %d \'drafts sent\'...");
  iVar15 = 0;
  if (0 < local_58) {
    do {
      SaveHandler::readLengthString(p_Var7);
      local_14 = 2;
      iVar2 = *(int *)(g_gameData + 300);
      pbVar3 = *(std::string **)(iVar2 + 0x24);
      if (*(std::string **)(iVar2 + 0x28) == pbVar3) {
        ghidra::lib::vector___Emplace_reallocate
                  ((ghidra::vector *)(iVar2 + 0x20),(std::string *)pbVar3,(std::string *)local_3c);
      }
      else {
        ghidra::str::ctor(pbVar3,(std::string *)local_3c);
        *(int *)(iVar2 + 0x24) = *(int *)(iVar2 + 0x24) + 0x18;
      }
      debugPrint("SAVEHANDLER","Loaded draft sent \'%s\'");
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar14 = (nothrow_t *)(local_28 + 1);
        pvVar13 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar14) {
          pvVar13 = *(void **)((int)local_3c[0] + -4);
          pnVar14 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar13))) goto LAB_004c1675;
        }
        operator_delete(pvVar13,pnVar14);
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < local_58);
  }
  fread(&local_58,4,1,local_5c);
  debugPrint("SAVEHANDLER","Loading %d \'articles downloaded\'...");
  local_64 = 0;
  if (0 < local_58) {
    do {
      SaveHandler::readLengthString(p_Var7);
      local_14 = 3;
      iVar15 = *(int *)(g_gameData + 300);
      pbVar3 = *(std::string **)(iVar15 + 0x18);
      if (*(std::string **)(iVar15 + 0x1c) == pbVar3) {
        ghidra::lib::vector___Emplace_reallocate
                  ((ghidra::vector *)(iVar15 + 0x14),(std::string *)pbVar3,(std::string *)local_3c);
      }
      else {
        ghidra::str::ctor(pbVar3,(std::string *)local_3c);
        *(int *)(iVar15 + 0x18) = *(int *)(iVar15 + 0x18) + 0x18;
      }
      ghidra::str::ctor
                ((std::string *)&stack0xffffff74,(std::string *)local_3c);
      pAVar11 = (*(ComputerSystem **)(g_gameLogic + 0xc))->getArticle();
      if (pAVar11 == (Article *)0x0) {
        pcVar17 = "Invalid article \'%s\' to download, ignoring.";
      }
      else {
        *(undefined4 *)(pAVar11 + 0xa0) = *(undefined4 *)(pAVar11 + 0x88);
        *(undefined4 *)(pAVar11 + 0xa4) = *(undefined4 *)(pAVar11 + 0x8c);
        *(undefined4 *)(pAVar11 + 0xa8) = *(undefined4 *)(pAVar11 + 0x90);
        *(undefined4 *)(pAVar11 + 0xac) = *(undefined4 *)(pAVar11 + 0x94);
        *(undefined4 *)(pAVar11 + 0xb0) = *(undefined4 *)(pAVar11 + 0x98);
        *(undefined4 *)(pAVar11 + 0xb4) = *(undefined4 *)(pAVar11 + 0x9c);
        pcVar17 = "Loaded article downloaded \'%s\'";
      }
      debugPrint("SAVEHANDLER",pcVar17);
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar14 = (nothrow_t *)(local_28 + 1);
        pvVar13 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar14) {
          pvVar13 = *(void **)((int)local_3c[0] + -4);
          pnVar14 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar13))) goto LAB_004c1675;
        }
        operator_delete(pvVar13,pnVar14);
      }
      local_64 = local_64 + 1;
    } while (local_64 < local_58);
  }
  fread(&local_58,4,1,local_5c);
  debugPrint("SAVEHANDLER","Loading %d \'sent emails\'...");
  iVar15 = 0;
  if (0 < local_58) {
    do {
      SaveHandler::readLengthString(p_Var7);
      local_60 = (word *)&stack0xffffff74;
      local_14 = 4;
      ghidra::str::ctor
                ((std::string *)&stack0xffffff74,(std::string *)local_3c);
      local_14._0_1_ = 5;
      pEVar8 = ghidra::Singleton<void>::instance;
      if (ghidra::Singleton<void>::instance == (EmailManager *)0x0) {
        pEVar8 = operator_new(0x2c);
        ghidra::Singleton<void>::instance = pEVar8;
        *pEVar8 = (byte)0x0;
        *(undefined4 *)(pEVar8 + 4) = 0;
        *(undefined4 *)(pEVar8 + 8) = 0;
        *(undefined4 *)(pEVar8 + 0xc) = 0;
        *(undefined4 *)(pEVar8 + 0x10) = 0;
        *(undefined4 *)(pEVar8 + 0x14) = 0;
        *(undefined4 *)(pEVar8 + 0x18) = 0;
        *(undefined4 *)(pEVar8 + 0x1c) = 0;
        *(undefined4 *)(pEVar8 + 0x20) = 0;
        *(undefined4 *)(pEVar8 + 0x24) = 0;
        *(undefined4 *)(pEVar8 + 0x28) = 0;
        local_60 = (word *)pEVar8;
      }
      local_14 = CONCAT31(local_14._1_3_,4);
      pEVar12 = (pEVar8)->getEmail();
      if (pEVar12 == (Email *)0x0) {
        debugPrint("ERROR","ERROR: invalid email loaded.");
      }
      else {
        *(undefined2 *)(pEVar12 + 100) = 0x100;
        *(undefined4 *)(pEVar12 + 0x98) = 0;
        debugPrint("SAVEHANDLER","Email \'%s\' marked as sent");
      }
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar14 = (nothrow_t *)(local_28 + 1);
        pvVar13 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar14) {
          pvVar13 = *(void **)((int)local_3c[0] + -4);
          pnVar14 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar13))) goto LAB_004c1675;
        }
        operator_delete(pvVar13,pnVar14);
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < local_58);
  }
  fread(&local_58,4,1,local_5c);
  debugPrint("SAVEHANDLER","Loading %d \'ready to fire emails\'...");
  iVar15 = 0;
  if (0 < local_58) {
    do {
      SaveHandler::readLengthString(p_Var7);
      local_60 = (word *)&stack0xffffff74;
      local_14 = 6;
      ghidra::str::ctor
                ((std::string *)&stack0xffffff74,(std::string *)local_54);
      local_14._0_1_ = 7;
      pEVar8 = ghidra::Singleton<void>::instance;
      if (ghidra::Singleton<void>::instance == (EmailManager *)0x0) {
        pEVar8 = operator_new(0x2c);
        ghidra::Singleton<void>::instance = pEVar8;
        *pEVar8 = (byte)0x0;
        *(undefined4 *)(pEVar8 + 4) = 0;
        *(undefined4 *)(pEVar8 + 8) = 0;
        *(undefined4 *)(pEVar8 + 0xc) = 0;
        *(undefined4 *)(pEVar8 + 0x10) = 0;
        *(undefined4 *)(pEVar8 + 0x14) = 0;
        *(undefined4 *)(pEVar8 + 0x18) = 0;
        *(undefined4 *)(pEVar8 + 0x1c) = 0;
        *(undefined4 *)(pEVar8 + 0x20) = 0;
        *(undefined4 *)(pEVar8 + 0x24) = 0;
        *(undefined4 *)(pEVar8 + 0x28) = 0;
        local_60 = (word *)pEVar8;
      }
      local_14 = CONCAT31(local_14._1_3_,6);
      pEVar12 = (pEVar8)->getEmail();
      if (pEVar12 == (Email *)0x0) {
        debugPrint("ERROR","ERROR: invalid email loaded.");
      }
      else {
        *(undefined2 *)(pEVar12 + 100) = 1;
        *(undefined4 *)(pEVar12 + 0x98) = 0;
        debugPrint("SAVEHANDLER","Email \'%s\' marked as ready to fire");
      }
      local_14 = 0xffffffff;
      if (0xf < local_40) {
        pnVar14 = (nothrow_t *)(local_40 + 1);
        pvVar13 = local_54[0];
        if ((nothrow_t *)0xfff < pnVar14) {
          pvVar13 = *(void **)((int)local_54[0] + -4);
          pnVar14 = (nothrow_t *)(local_40 + 0x24);
          if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar13))) {
LAB_004c1675:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar13,pnVar14);
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < local_58);
  }
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// Ghidra: void __cdecl V6::loadStatesActive(_iobuf *param_1)
void V6::loadStatesActive(_iobuf * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff7c[1] = {0};  // [pseudo] address of an unnamed stack slot
  _iobuf *p_Var1;
  word *pwVar2;
  StateModifier *pSVar3;
  FILE *in_ECX;
  void *pvVar4;
  nothrow_t *pnVar5;
  int iVar6;
  int local_58;
  void *local_54;
  undefined4 local_44;
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
  undefined4 local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005bee38;
  // [seh] local_1c = ExceptionList;
  // [cookie] p_Var1 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  local_24 = p_Var1;
  ((GameData *)in_ECX)->resetStateModifiers();
  local_58 = 0;
  fread(&local_58,4,1,in_ECX);
  iVar6 = 0;
  if (0 < local_58) {
    do {
      local_2c = 0;
      uStack_28 = 0xf;
      local_3c = (void *)((uint)local_3c & 0xffffff00);
      local_14 = 0;
      pwVar2 = (word *)SaveHandler::readLengthString(p_Var1);
      if ((word *)&local_3c != pwVar2) {
        // [mislabelled-dtor] word::~word((word *)&local_3c);
        local_3c = *(void **)pwVar2;
        uStack_38 = *(undefined4 *)(pwVar2 + 4);
        uStack_34 = *(undefined4 *)(pwVar2 + 8);
        uStack_30 = *(undefined4 *)(pwVar2 + 0xc);
        local_2c = *(undefined4 *)(pwVar2 + 0x10);
        uStack_28 = *(uint *)(pwVar2 + 0x14);
        *(undefined4 *)(pwVar2 + 0x10) = 0;
        *(undefined4 *)(pwVar2 + 0x14) = 0xf;
        *pwVar2 = (word)0x0;
      }
      if (0xf < local_40) {
        pnVar5 = (nothrow_t *)(local_40 + 1);
        pvVar4 = local_54;
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)local_54 + -4);
          pnVar5 = (nothrow_t *)(local_40 + 0x24);
          if (0x1f < (uint)((int)local_54 + (-4 - (int)pvVar4))) goto LAB_004c1c70;
        }
        operator_delete(pvVar4,pnVar5);
      }
      local_44 = 0;
      local_40 = 0xf;
      local_54 = (void *)((uint)local_54 & 0xffffff00);
      ghidra::str::ctor
                ((std::string *)&stack0xffffff7c,(std::string *)&local_3c);
      pSVar3 = GameData::getStateModifier();
      if (pSVar3 != (StateModifier *)0x0) {
        fread(pSVar3 + 0x18,1,1,in_ECX);
        fread(pSVar3 + 0x19,1,1,in_ECX);
      }
      local_14 = 0xffffffff;
      if (0xf < uStack_28) {
        pnVar5 = (nothrow_t *)(uStack_28 + 1);
        pvVar4 = local_3c;
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)local_3c + -4);
          pnVar5 = (nothrow_t *)(uStack_28 + 0x24);
          if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar4))) {
LAB_004c1c70:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_58);
  }
  debugPrint("SAVEHANDLER","..loaded %d game states");
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// Ghidra: Bounty * __cdecl V6::readBounty(_iobuf *param_1)
Bounty * V6::readBounty(_iobuf * param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  word *this_;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  _iobuf *p_Var4;
  void *_DstBuf;
  word *pwVar5;
  word *pwVar6;
  BountyClass *this_00;
  undefined4 uVar7;
  Bounty *pBVar8;
  FILE *in_ECX;
  word *pwVar9;
  void *pvVar10;
  nothrow_t *pnVar11;
  _iobuf *p_Var12;
  void *local_54;
  uint local_40;
  void *local_3c;
  uint local_28;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005beebf;
  // [seh] local_1c = ExceptionList;
  // [cookie] p_Var4 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  p_Var12 = p_Var4;
  _DstBuf = operator_new(0x54);
  memset(_DstBuf,0,0x54);
  *(undefined4 *)((int)_DstBuf + 0x14) = 0;
  pwVar6 = (word *)((int)_DstBuf + 4);
  *(undefined4 *)((int)_DstBuf + 0x18) = 0xf;
  *pwVar6 = (word)0x0;
  pwVar9 = (word *)((int)_DstBuf + 0x1c);
  *(undefined4 *)((int)_DstBuf + 0x2c) = 0;
  *(undefined4 *)((int)_DstBuf + 0x30) = 0xf;
  *pwVar9 = (word)0x0;
  this_ = (word *)((int)_DstBuf + 0x34);
  *(undefined4 *)((int)_DstBuf + 0x44) = 0;
  *(undefined4 *)((int)_DstBuf + 0x48) = 0xf;
  *this_ = (word)0x0;
  pwVar5 = (word *)SaveHandler::readLengthString(p_Var12);
  if (pwVar6 != pwVar5) {
    // [mislabelled-dtor] word::~word(pwVar6);
    uVar7 = *(undefined4 *)(pwVar5 + 4);
    uVar2 = *(undefined4 *)(pwVar5 + 8);
    uVar3 = *(undefined4 *)(pwVar5 + 0xc);
    *(undefined4 *)pwVar6 = *(undefined4 *)pwVar5;
    *(undefined4 *)((int)_DstBuf + 8) = uVar7;
    *(undefined4 *)((int)_DstBuf + 0xc) = uVar2;
    *(undefined4 *)((int)_DstBuf + 0x10) = uVar3;
    *(undefined8 *)((int)_DstBuf + 0x14) = *(undefined8 *)(pwVar5 + 0x10);
    *(undefined4 *)(pwVar5 + 0x10) = 0;
    *(undefined4 *)(pwVar5 + 0x14) = 0xf;
    *pwVar5 = (word)0x0;
  }
  if (0xf < local_28) {
    pnVar11 = (nothrow_t *)(local_28 + 1);
    pvVar10 = local_3c;
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_3c + -4);
      pnVar11 = (nothrow_t *)(local_28 + 0x24);
      if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar11);
  }
  pwVar6 = (word *)SaveHandler::readLengthString(p_Var12);
  if (pwVar9 != pwVar6) {
    // [mislabelled-dtor] word::~word(pwVar9);
    uVar7 = *(undefined4 *)(pwVar6 + 4);
    uVar2 = *(undefined4 *)(pwVar6 + 8);
    uVar3 = *(undefined4 *)(pwVar6 + 0xc);
    *(undefined4 *)pwVar9 = *(undefined4 *)pwVar6;
    *(undefined4 *)((int)_DstBuf + 0x20) = uVar7;
    *(undefined4 *)((int)_DstBuf + 0x24) = uVar2;
    *(undefined4 *)((int)_DstBuf + 0x28) = uVar3;
    *(undefined8 *)((int)_DstBuf + 0x2c) = *(undefined8 *)(pwVar6 + 0x10);
    *(undefined4 *)(pwVar6 + 0x10) = 0;
    *(undefined4 *)(pwVar6 + 0x14) = 0xf;
    *pwVar6 = (word)0x0;
  }
  if (0xf < local_28) {
    pnVar11 = (nothrow_t *)(local_28 + 1);
    pvVar10 = local_3c;
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_3c + -4);
      pnVar11 = (nothrow_t *)(local_28 + 0x24);
      if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar11);
  }
  pwVar6 = (word *)SaveHandler::readLengthString(p_Var12);
  if (this_ != pwVar6) {
    // [mislabelled-dtor] word::~word(this_);
    uVar7 = *(undefined4 *)(pwVar6 + 4);
    uVar2 = *(undefined4 *)(pwVar6 + 8);
    uVar3 = *(undefined4 *)(pwVar6 + 0xc);
    *(undefined4 *)this_ = *(undefined4 *)pwVar6;
    *(undefined4 *)((int)_DstBuf + 0x38) = uVar7;
    *(undefined4 *)((int)_DstBuf + 0x3c) = uVar2;
    *(undefined4 *)((int)_DstBuf + 0x40) = uVar3;
    *(undefined8 *)((int)_DstBuf + 0x44) = *(undefined8 *)(pwVar6 + 0x10);
    *(undefined4 *)(pwVar6 + 0x10) = 0;
    *(undefined4 *)(pwVar6 + 0x14) = 0xf;
    *pwVar6 = (word)0x0;
  }
  if (0xf < local_28) {
    pnVar11 = (nothrow_t *)(local_28 + 1);
    pvVar10 = local_3c;
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_3c + -4);
      pnVar11 = (nothrow_t *)(local_28 + 0x24);
      if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar11);
  }
  fread((void *)((int)_DstBuf + 0x50),4,1,in_ECX);
  fread(_DstBuf,4,1,in_ECX);
  this_00 = operator_new(0x6c);
  local_14 = 0;
  uVar7 = new ((void *)(this_00)) BountyClass();
  local_14 = 0xffffffff;
  *(undefined4 *)((int)_DstBuf + 0x4c) = uVar7;
  pwVar6 = (word *)SaveHandler::readLengthString(p_Var12);
  iVar1 = *(int *)((int)_DstBuf + 0x4c);
  pwVar9 = (word *)(iVar1 + 0x24);
  if (pwVar9 != pwVar6) {
    // [mislabelled-dtor] word::~word(pwVar9);
    uVar7 = *(undefined4 *)(pwVar6 + 4);
    uVar2 = *(undefined4 *)(pwVar6 + 8);
    uVar3 = *(undefined4 *)(pwVar6 + 0xc);
    *(undefined4 *)pwVar9 = *(undefined4 *)pwVar6;
    *(undefined4 *)(iVar1 + 0x28) = uVar7;
    *(undefined4 *)(iVar1 + 0x2c) = uVar2;
    *(undefined4 *)(iVar1 + 0x30) = uVar3;
    *(undefined8 *)(iVar1 + 0x34) = *(undefined8 *)(pwVar6 + 0x10);
    *(undefined4 *)(pwVar6 + 0x10) = 0;
    *(undefined4 *)(pwVar6 + 0x14) = 0xf;
    *pwVar6 = (word)0x0;
  }
  if (0xf < local_28) {
    pnVar11 = (nothrow_t *)(local_28 + 1);
    pvVar10 = local_3c;
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_3c + -4);
      pnVar11 = (nothrow_t *)(local_28 + 0x24);
      if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar11);
  }
  pwVar6 = (word *)SaveHandler::readLengthString(p_Var12);
  iVar1 = *(int *)((int)_DstBuf + 0x4c);
  pwVar9 = (word *)(iVar1 + 0x3c);
  if (pwVar9 != pwVar6) {
    // [mislabelled-dtor] word::~word(pwVar9);
    uVar7 = *(undefined4 *)(pwVar6 + 4);
    uVar2 = *(undefined4 *)(pwVar6 + 8);
    uVar3 = *(undefined4 *)(pwVar6 + 0xc);
    *(undefined4 *)pwVar9 = *(undefined4 *)pwVar6;
    *(undefined4 *)(iVar1 + 0x40) = uVar7;
    *(undefined4 *)(iVar1 + 0x44) = uVar2;
    *(undefined4 *)(iVar1 + 0x48) = uVar3;
    *(undefined8 *)(iVar1 + 0x4c) = *(undefined8 *)(pwVar6 + 0x10);
    *(undefined4 *)(pwVar6 + 0x10) = 0;
    *(undefined4 *)(pwVar6 + 0x14) = 0xf;
    *pwVar6 = (word)0x0;
  }
  if (0xf < local_40) {
    pnVar11 = (nothrow_t *)(local_40 + 1);
    pvVar10 = local_54;
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_54 + -4);
      pnVar11 = (nothrow_t *)(local_40 + 0x24);
      if (0x1f < (uint)((int)local_54 + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar11);
  }
  fread((void *)(*(int *)((int)_DstBuf + 0x4c) + 0x1c),4,1,in_ECX);
  fread(*(void **)((int)_DstBuf + 0x4c),4,1,in_ECX);
  fread((void *)(*(int *)((int)_DstBuf + 0x4c) + 0x18),4,1,in_ECX);
  fread((void *)(*(int *)((int)_DstBuf + 0x4c) + 0x20),4,1,in_ECX);
  fread((void *)(*(int *)((int)_DstBuf + 0x4c) + 4),1,1,in_ECX);
  fread((void *)(*(int *)((int)_DstBuf + 0x4c) + 8),4,1,in_ECX);
  // [seh] ExceptionList = local_1c;
  // [cookie] pBVar8 = (Bounty *)__security_check_cookie((uint)p_Var4 ^ (uint)&stack0xfffffff0);
  return pBVar8;
}


// Ghidra: void __cdecl V6::loadSpaceStationStates(_iobuf *param_1)
void V6::loadSpaceStationStates(_iobuf * param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  Contract *this_;
  int iVar1;
  MetaGameAction **ppMVar2;
  _iobuf *p_Var3;
  word *pwVar4;
  Ship *pSVar5;
  TradeItemInstance *pTVar6;
  FILE *in_ECX;
  Contract *pCVar7;
  void *pvVar8;
  nothrow_t *pnVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  Contract *pCVar13;
  std::string abStack_94 [4];
  undefined4 uStack_90;
  int local_68;
  int local_64;
  Ship *local_60;
  Contract *local_5c;
  int local_58;
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
  undefined4 local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005bf208;
  // [seh] local_1c = ExceptionList;
  // [cookie] p_Var3 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  local_64 = 0;
  uStack_90 = 0x4c20d9;
  local_24 = p_Var3;
  fread(&local_64,4,1,in_ECX);
  local_68 = 0;
  if (0 < local_64) {
    do {
      local_2c = 0;
      uStack_28 = 0xf;
      local_3c = (void *)((uint)local_3c & 0xffffff00);
      local_14 = 0;
      pwVar4 = (word *)SaveHandler::readLengthString(p_Var3);
      if ((word *)&local_3c != pwVar4) {
        // [mislabelled-dtor] word::~word((word *)&local_3c);
        local_3c = *(void **)pwVar4;
        uStack_38 = *(undefined4 *)(pwVar4 + 4);
        uStack_34 = *(undefined4 *)(pwVar4 + 8);
        uStack_30 = *(undefined4 *)(pwVar4 + 0xc);
        local_2c = *(undefined4 *)(pwVar4 + 0x10);
        uStack_28 = *(uint *)(pwVar4 + 0x14);
        *(undefined4 *)(pwVar4 + 0x10) = 0;
        *(undefined4 *)(pwVar4 + 0x14) = 0xf;
        *pwVar4 = (word)0x0;
      }
      if (0xf < local_40) {
        pnVar9 = (nothrow_t *)(local_40 + 1);
        pvVar8 = local_54;
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar8 = *(void **)((int)local_54 + -4);
          pnVar9 = (nothrow_t *)(local_40 + 0x24);
          if (0x1f < (uint)((int)local_54 + (-4 - (int)pvVar8))) goto LAB_004c2449;
        }
        operator_delete(pvVar8,pnVar9);
      }
      ghidra::str::ctor(abStack_94,(std::string *)&local_3c);
      pSVar5 = GameData::getShipWithRego();
      local_60 = pSVar5;
      debugPrint("SAVEHANDLER","...loading trade data for platform %s");
      if (pSVar5 == (Ship *)0x0) {
        debugPrint("ERROR","ERROR: No valid space station with this_ rego.");
        if (0xf < uStack_28) {
          pnVar9 = (nothrow_t *)(uStack_28 + 1);
          pvVar8 = local_3c;
          if ((nothrow_t *)0xfff < pnVar9) {
            pvVar8 = *(void **)((int)local_3c + -4);
            pnVar9 = (nothrow_t *)(uStack_28 + 0x24);
            if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar8))) {
LAB_004c2449:
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar8,pnVar9);
        }
        goto LAB_004c23f3;
      }
      iVar12 = *(int *)(pSVar5 + 0x398);
      pCVar13 = (Contract *)0x0;
      puVar11 = *(undefined4 **)(iVar12 + 0x94);
      pCVar7 = (Contract *)((uint)((int)*(undefined4 **)(iVar12 + 0x98) + (3 - (int)puVar11)) >> 2);
      if (*(undefined4 **)(iVar12 + 0x98) < puVar11) {
        pCVar7 = (Contract *)0x0;
      }
      local_5c = pCVar7;
      if (pCVar7 != (Contract *)0x0) {
        do {
          this_ = (Contract *)*puVar11;
          if (this_ != (Contract *)0x0) {
            Contract::_scalar_deleting_destructor_(this_,(uint)this_);
            pCVar7 = local_5c;
          }
          pCVar13 = pCVar13 + 1;
          puVar11 = puVar11 + 1;
        } while (pCVar13 != pCVar7);
      }
      *(undefined4 *)(iVar12 + 0x98) = *(undefined4 *)(iVar12 + 0x94);
      local_58 = 0;
      uStack_90 = 0x4c2225;
      fread(&local_58,4,1,in_ECX);
      iVar12 = 0;
      if (0 < local_58) {
        do {
          local_5c = V8::readContract(p_Var3);
          iVar1 = *(int *)(local_60 + 0x398);
          ppMVar2 = *(MetaGameAction ***)(iVar1 + 0x98);
          if (*(MetaGameAction ***)(iVar1 + 0x9c) == ppMVar2) {
            ghidra::lib::vector___Emplace_reallocate
                      ((ghidra::vector *)(iVar1 + 0x94),ppMVar2,(MetaGameAction **)&local_5c);
          }
          else {
            *ppMVar2 = (MetaGameAction *)local_5c;
            *(int *)(iVar1 + 0x98) = *(int *)(iVar1 + 0x98) + 4;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < local_58);
      }
      debugPrint("SAVEHANDLER","...loading %d contracts for platform");
      (*(TradeLocation **)(local_60 + 0x398))->clearGoods(false);
      uStack_90 = 0x4c22a1;
      fread(&local_58,4,1,in_ECX);
      iVar12 = 0;
      if (0 < local_58) {
        do {
          pTVar6 = V11::readTradeItem(p_Var3);
          (*(TradeLocation **)(local_60 + 0x398))->addTradeItemInstance(pTVar6, false);
          iVar12 = iVar12 + 1;
        } while (iVar12 < local_58);
      }
      debugPrint("SAVEHANDLER","...loading %d trade item instances for platform");
      uVar10 = 0;
      iVar12 = *(int *)(local_60 + 0x398);
      if (*(int *)(iVar12 + 0x8c) - *(int *)(iVar12 + 0x88) >> 2 != 0) {
        do {
          *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x88) + uVar10 * 4) + 0x10) = 0;
          iVar1 = uVar10 * 4;
          uVar10 = uVar10 + 1;
          *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x88) + iVar1) + 0x30) = 0xffffffff;
        } while (uVar10 < (uint)(*(int *)(iVar12 + 0x8c) - *(int *)(iVar12 + 0x88) >> 2));
      }
      uStack_90 = 0x4c2353;
      fread(&local_58,4,1,in_ECX);
      iVar12 = 0;
      if (0 < local_58) {
        do {
          pTVar6 = V11::readTradeItem(p_Var3);
          (*(TradeLocation **)(local_60 + 0x398))->addTradeItemInstance(pTVar6, true);
          iVar12 = iVar12 + 1;
        } while (iVar12 < local_58);
      }
      debugPrint("SAVEHANDLER","...loading %d wire item instances for platform");
      local_14 = 0xffffffff;
      if (0xf < uStack_28) {
        pnVar9 = (nothrow_t *)(uStack_28 + 1);
        pvVar8 = local_3c;
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar8 = *(void **)((int)local_3c + -4);
          pnVar9 = (nothrow_t *)(uStack_28 + 0x24);
          if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar8))) goto LAB_004c2449;
        }
        operator_delete(pvVar8,pnVar9);
      }
      local_68 = local_68 + 1;
    } while (local_68 < local_64);
  }
  debugPrint("SAVEHANDLER","...loaded %d space station trade data sets");
LAB_004c23f3:
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// Ghidra: ShipModule * __cdecl V6::readShipModule(_iobuf *param_1)
ShipModule * V6::readShipModule(_iobuf * param_1)

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
  FILE *pFStack_70;
  undefined4 *local_40;
  int local_3c;
  ShipModule *local_38;
  int local_34;
  undefined1 local_2d;
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
  pcVar12 = fread_exref;
  // [seh] local_8 = 0;
  pFStack_70 = (FILE *)0x4c3382;
  fread(&local_2d,1,1,in_ECX);
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
    local_3c = new ((void *)(local_38)) ShipModule(pSVar3);
    iVar13 = 0;
    // [seh] local_8 = (uint)local_8._1_3_ << 8;
    do {
      pFStack_70 = (FILE *)0x4c340b;
      (*pcVar12)();
      uStack_74 = 1;
      (*pcVar12)(&local_38,4);
      if (local_34 != -1) {
        puVar4 = operator_new(8);
        pGVar1 = g_gameData;
        uVar7 = 0;
        *puVar4 = 0x42c80000;
        pcVar12 = fread_exref;
        uVar11 = *(int *)(pGVar1 + 4) - *(int *)pGVar1 >> 2;
        if (uVar11 != 0) {
          local_40 = *(undefined4 **)pGVar1;
          puVar9 = local_40;
          do {
            if (*(int *)*puVar9 == local_34) {
              uVar5 = local_40[uVar7];
              goto LAB_004c3464;
            }
            uVar7 = uVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (uVar7 < uVar11);
        }
        uVar5 = 0;
LAB_004c3464:
        puVar4[1] = uVar5;
        *(undefined4 **)(iVar13 + 4 + *(int *)(local_3c + 0xc)) = puVar4;
        **(int **)(iVar13 + 4 + *(int *)(local_3c + 0xc)) = (int)local_38;
      }
      iVar13 = iVar13 + 4;
    } while (iVar13 < 0x50);
    iVar13 = 0x54;
    do {
      pFStack_70 = (FILE *)0x4c34ab;
      (*pcVar12)();
      uStack_74 = 1;
      pFStack_70 = in_ECX;
      (*pcVar12)(&local_40,4);
      if (local_34 != -1) {
        puVar4 = operator_new(8);
        pGVar1 = g_gameData;
        uVar7 = 0;
        *puVar4 = 0x42c80000;
        pcVar12 = fread_exref;
        uVar11 = *(int *)(pGVar1 + 4) - *(int *)pGVar1 >> 2;
        if (uVar11 != 0) {
          local_38 = *(ShipModule **)pGVar1;
          pSVar6 = local_38;
          do {
            if (**(int **)pSVar6 == local_34) {
              uVar5 = *(undefined4 *)(local_38 + uVar7 * 4);
              goto LAB_004c3500;
            }
            uVar7 = uVar7 + 1;
            pSVar6 = pSVar6 + 4;
          } while (uVar7 < uVar11);
        }
        uVar5 = 0;
LAB_004c3500:
        puVar4[1] = uVar5;
        *(undefined4 **)(iVar13 + *(int *)(local_3c + 0xc)) = puVar4;
        **(int **)(iVar13 + *(int *)(local_3c + 0xc)) = (int)local_40;
      }
      iVar13 = iVar13 + 4;
    } while (iVar13 < 0xa4);
    *(undefined1 *)(local_3c + 99) = local_2d;
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
