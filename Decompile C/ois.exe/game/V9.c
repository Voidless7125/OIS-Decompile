#include "../ois.exe.h"


// void __cdecl V9::loadFogOfWarState(struct _iobuf *)

void __cdecl V9::loadFogOfWarState(_iobuf *param_1)

{
  AnimationFrames *pAVar1;
  AnimationFrames *_DstBuf;
  AnimationFrames *_DstBuf_00;
  char cVar2;
  AnimationFrames **ppAVar3;
  FILE *_File;
  uint uVar4;
  void *pvVar5;
  undefined4 *puVar6;
  _Tree_node<> *p_Var7;
  FILE *in_ECX;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  code *pcVar11;
  undefined4 *local_44;
  AnimationFrames *local_40;
  _Tree_comp_alloc<> *local_3c;
  AnimationFrames *local_38;
  int local_34;
  void *local_30;
  int local_2c;
  int local_28;
  piecewise_construct_t *local_24;
  int local_20;
  int local_1c;
  int local_18;
  FILE *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005bece0;
  local_10 = ExceptionList;
  uVar4 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = in_ECX;
  Ship::removeAllFog(*(Ship **)(g_gameData + 0xd0));
  pcVar11 = fread_exref;
  local_18 = 0;
  fread(&local_18,4,1,in_ECX);
  debugPrint("SAVEHANDLER","Loading in %d sectors worth of fog",local_18);
  local_34 = 0;
  if (0 < local_18) {
    do {
      local_24 = (piecewise_construct_t *)0xffffffff;
      (*pcVar11)(&local_24,4,1,in_ECX,uVar4);
      pvVar5 = operator_new(0x300);
      local_30 = pvVar5;
      memset(pvVar5,0,0x300);
      local_8 = 0;
      _eh_vector_constructor_iterator_
                (pvVar5,0xc,0x40,std::vector<>::vector<>,std::vector<>::~vector<>);
      local_8 = 0xffffffff;
      local_20 = 0;
      do {
        local_2c = 0;
        do {
          iVar8 = local_2c;
          local_1c = 0;
          (*pcVar11)(&local_1c,4,1,in_ECX);
          local_28 = 0;
          if (0 < local_1c) {
            local_3c = (_Tree_comp_alloc<> *)((int)local_30 + (local_20 + iVar8) * 0xc);
            do {
              local_40 = operator_new(0x14);
              pAVar1 = local_40 + 4;
              *(undefined4 *)pAVar1 = 0;
              _DstBuf = local_40 + 8;
              _DstBuf_00 = local_40 + 0xc;
              *(undefined4 *)local_40 = 0;
              *(undefined4 *)_DstBuf = 0;
              *(undefined4 *)_DstBuf_00 = 0;
              *(undefined4 *)(local_40 + 0x10) = 0;
              local_38 = local_40;
              fread(local_40,4,1,local_14);
              fread(pAVar1,4,1,local_14);
              _File = local_14;
              pcVar11 = fread_exref;
              fread(_DstBuf,4,1,local_14);
              fread(_DstBuf_00,4,1,_File);
              pAVar1 = local_38;
              fread(local_38 + 0x10,4,1,_File);
              ppAVar3 = *(AnimationFrames ***)(local_3c + 4);
              if (*(AnimationFrames ***)(local_3c + 8) == ppAVar3) {
                std::vector<>::_Emplace_reallocate<>((vector<> *)local_3c,ppAVar3,&local_40);
              }
              else {
                *ppAVar3 = pAVar1;
                *(int *)(local_3c + 4) = *(int *)(local_3c + 4) + 4;
              }
              local_28 = local_28 + 1;
              in_ECX = local_14;
              iVar8 = local_2c;
            } while (local_28 < local_1c);
          }
          local_2c = iVar8 + 1;
        } while (local_2c < 8);
        local_20 = local_20 + 8;
      } while (local_20 < 0x40);
      local_3c = (_Tree_comp_alloc<> *)(*(int *)(g_gameData + 0xd0) + 0x348);
      puVar9 = (undefined4 *)(*(undefined4 **)local_3c)[1];
      cVar2 = *(char *)((int)puVar9 + 0xd);
      puVar10 = *(undefined4 **)local_3c;
      while (cVar2 == '\0') {
        if ((int)puVar9[4] < (int)local_24) {
          puVar6 = (undefined4 *)puVar9[2];
          puVar9 = puVar10;
        }
        else {
          puVar6 = (undefined4 *)*puVar9;
        }
        puVar10 = puVar9;
        puVar9 = puVar6;
        cVar2 = *(char *)((int)puVar6 + 0xd);
      }
      if ((puVar10 == *(undefined4 **)local_3c) || ((int)local_24 < (int)puVar10[4])) {
        local_40 = (AnimationFrames *)&local_24;
        p_Var7 = std::_Tree_comp_alloc<>::_Buynode<>
                           (local_3c,local_24,(tuple<int&&> *)&local_40,(tuple<> *)local_24);
        std::_Tree<>::_Insert_hint<>((_Tree<> *)local_3c,&local_44,puVar10,p_Var7 + 0x10,p_Var7);
        puVar10 = local_44;
      }
      puVar10[5] = local_30;
      local_34 = local_34 + 1;
    } while (local_34 < local_18);
  }
  ExceptionList = local_10;
  return;
}


// void __cdecl V9::loadEmails(struct _iobuf *)

void __cdecl V9::loadEmails(_iobuf *param_1)

{
  vector<> *this;
  AnimationFrames **ppAVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  _iobuf *p_Var5;
  EmailManager *pEVar6;
  AnimationFrames *pAVar7;
  bool *pbVar8;
  Article *pAVar9;
  Email *pEVar10;
  FILE *in_ECX;
  void *pvVar11;
  nothrow_t *pnVar12;
  basic_string<> *pbVar13;
  int iVar14;
  char *pcVar15;
  char *pcVar16;
  undefined4 local_6c;
  AnimationFrames *local_68;
  AnimationFrames *local_64;
  Email local_5f;
  Email local_5e;
  char local_5d;
  int local_5c;
  EmailInstance *local_58;
  void *local_54 [5];
  uint local_40;
  void *local_3c [5];
  uint local_28;
  _iobuf *local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &DAT_005bed70;
  local_1c = ExceptionList;
  p_Var5 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffff0);
  ExceptionList = &local_1c;
  local_24 = p_Var5;
  pEVar6 = Singleton<>::getInstance();
  EmailManager::resetState(pEVar6);
  CommsData::clearState(*(CommsData **)(g_gameData + 300));
  local_5c = 0;
  fread(&local_5c,4,1,in_ECX);
  debugPrint("SAVEHANDLER","Loading %d emails...");
  local_64 = (AnimationFrames *)0x0;
  if (0 < local_5c) {
    do {
      local_58 = operator_new(0xa0);
      pAVar7 = (AnimationFrames *)EmailInstance::EmailInstance(local_58);
      local_68 = pAVar7;
      fread(pAVar7,4,1,in_ECX);
      local_58 = (EmailInstance *)SaveHandler::readLengthString(p_Var5);
      if ((word *)(pAVar7 + 4) != (word *)local_58) {
        word::~word((word *)(pAVar7 + 4));
        uVar2 = *(undefined4 *)(local_58 + 4);
        uVar3 = *(undefined4 *)(local_58 + 8);
        uVar4 = *(undefined4 *)(local_58 + 0xc);
        *(undefined4 *)(pAVar7 + 4) = *(undefined4 *)local_58;
        *(undefined4 *)(pAVar7 + 8) = uVar2;
        *(undefined4 *)(pAVar7 + 0xc) = uVar3;
        *(undefined4 *)(pAVar7 + 0x10) = uVar4;
        *(undefined8 *)(pAVar7 + 0x14) = *(undefined8 *)(local_58 + 0x10);
        *(undefined4 *)(local_58 + 0x10) = 0;
        *(undefined4 *)(local_58 + 0x14) = 0xf;
        *local_58 = (EmailInstance)0x0;
      }
      if (0xf < local_28) {
        pnVar12 = (nothrow_t *)(local_28 + 1);
        pvVar11 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_3c[0] + -4);
          pnVar12 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar11))) goto LAB_004bb62a;
        }
        operator_delete(pvVar11,pnVar12);
      }
      local_58 = (EmailInstance *)SaveHandler::readLengthString(p_Var5);
      if ((word *)(pAVar7 + 0x68) != (word *)local_58) {
        word::~word((word *)(pAVar7 + 0x68));
        uVar2 = *(undefined4 *)(local_58 + 4);
        uVar3 = *(undefined4 *)(local_58 + 8);
        uVar4 = *(undefined4 *)(local_58 + 0xc);
        *(undefined4 *)(pAVar7 + 0x68) = *(undefined4 *)local_58;
        *(undefined4 *)(pAVar7 + 0x6c) = uVar2;
        *(undefined4 *)(pAVar7 + 0x70) = uVar3;
        *(undefined4 *)(pAVar7 + 0x74) = uVar4;
        *(undefined8 *)(pAVar7 + 0x78) = *(undefined8 *)(local_58 + 0x10);
        *(undefined4 *)(local_58 + 0x10) = 0;
        *(undefined4 *)(local_58 + 0x14) = 0xf;
        *local_58 = (EmailInstance)0x0;
      }
      if (0xf < local_28) {
        pnVar12 = (nothrow_t *)(local_28 + 1);
        pvVar11 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_3c[0] + -4);
          pnVar12 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar11))) goto LAB_004bb62a;
        }
        operator_delete(pvVar11,pnVar12);
      }
      local_58 = (EmailInstance *)SaveHandler::readLengthString(p_Var5);
      if ((word *)(pAVar7 + 0x1c) != (word *)local_58) {
        word::~word((word *)(pAVar7 + 0x1c));
        uVar2 = *(undefined4 *)(local_58 + 4);
        uVar3 = *(undefined4 *)(local_58 + 8);
        uVar4 = *(undefined4 *)(local_58 + 0xc);
        *(undefined4 *)(pAVar7 + 0x1c) = *(undefined4 *)local_58;
        *(undefined4 *)(pAVar7 + 0x20) = uVar2;
        *(undefined4 *)(pAVar7 + 0x24) = uVar3;
        *(undefined4 *)(pAVar7 + 0x28) = uVar4;
        *(undefined8 *)(pAVar7 + 0x2c) = *(undefined8 *)(local_58 + 0x10);
        *(undefined4 *)(local_58 + 0x10) = 0;
        *(undefined4 *)(local_58 + 0x14) = 0xf;
        *local_58 = (EmailInstance)0x0;
      }
      if (0xf < local_28) {
        pnVar12 = (nothrow_t *)(local_28 + 1);
        pvVar11 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_3c[0] + -4);
          pnVar12 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar11))) goto LAB_004bb62a;
        }
        operator_delete(pvVar11,pnVar12);
      }
      pbVar13 = (basic_string<> *)(pAVar7 + 0x1c);
      if ((basic_string<> *)(pAVar7 + 0x4c) != pbVar13) {
        if (0xf < *(uint *)(pAVar7 + 0x30)) {
          pbVar13 = *(basic_string<> **)pbVar13;
        }
        std::basic_string<>::assign
                  ((basic_string<> *)(pAVar7 + 0x4c),(char *)pbVar13,*(uint *)(pAVar7 + 0x2c));
      }
      local_58 = (EmailInstance *)SaveHandler::readLengthString(p_Var5);
      if ((word *)(pAVar7 + 0x34) != (word *)local_58) {
        word::~word((word *)(pAVar7 + 0x34));
        uVar2 = *(undefined4 *)(local_58 + 4);
        uVar3 = *(undefined4 *)(local_58 + 8);
        uVar4 = *(undefined4 *)(local_58 + 0xc);
        *(undefined4 *)(pAVar7 + 0x34) = *(undefined4 *)local_58;
        *(undefined4 *)(pAVar7 + 0x38) = uVar2;
        *(undefined4 *)(pAVar7 + 0x3c) = uVar3;
        *(undefined4 *)(pAVar7 + 0x40) = uVar4;
        *(undefined8 *)(pAVar7 + 0x44) = *(undefined8 *)(local_58 + 0x10);
        *(undefined4 *)(local_58 + 0x10) = 0;
        *(undefined4 *)(local_58 + 0x14) = 0xf;
        *local_58 = (EmailInstance)0x0;
      }
      if (0xf < local_28) {
        pnVar12 = (nothrow_t *)(local_28 + 1);
        pvVar11 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_3c[0] + -4);
          pnVar12 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar11))) goto LAB_004bb62a;
        }
        operator_delete(pvVar11,pnVar12);
      }
      local_58 = (EmailInstance *)SaveHandler::readLengthString(p_Var5);
      if ((word *)(pAVar7 + 0x80) != (word *)local_58) {
        word::~word((word *)(pAVar7 + 0x80));
        uVar2 = *(undefined4 *)(local_58 + 4);
        uVar3 = *(undefined4 *)(local_58 + 8);
        uVar4 = *(undefined4 *)(local_58 + 0xc);
        *(undefined4 *)(pAVar7 + 0x80) = *(undefined4 *)local_58;
        *(undefined4 *)(pAVar7 + 0x84) = uVar2;
        *(undefined4 *)(pAVar7 + 0x88) = uVar3;
        *(undefined4 *)(pAVar7 + 0x8c) = uVar4;
        *(undefined8 *)(pAVar7 + 0x90) = *(undefined8 *)(local_58 + 0x10);
        *(undefined4 *)(local_58 + 0x10) = 0;
        *(undefined4 *)(local_58 + 0x14) = 0xf;
        *local_58 = (EmailInstance)0x0;
      }
      if (0xf < local_28) {
        pnVar12 = (nothrow_t *)(local_28 + 1);
        pvVar11 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_3c[0] + -4);
          pnVar12 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar11))) goto LAB_004bb62a;
        }
        operator_delete(pvVar11,pnVar12);
      }
      fread(pAVar7 + 0x98,4,1,in_ECX);
      fread(pAVar7 + 100,1,1,in_ECX);
      fread(pAVar7 + 0x9c,1,1,in_ECX);
      this = *(vector<> **)(g_gameData + 300);
      ppAVar1 = *(AnimationFrames ***)(this + 4);
      if (*(AnimationFrames ***)(this + 8) == ppAVar1) {
        std::vector<>::_Emplace_reallocate<>(this,ppAVar1,&local_68);
        pAVar7 = local_68;
      }
      else {
        *ppAVar1 = pAVar7;
        *(int *)(this + 4) = *(int *)(this + 4) + 4;
      }
      local_58 = (EmailInstance *)&stack0xffffff6c;
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&stack0xffffff6c,(basic_string<> *)(pAVar7 + 0x80));
      local_14 = 0;
      pEVar6 = Singleton<>::instance;
      if (Singleton<>::instance == (EmailManager *)0x0) {
        pEVar6 = operator_new(0x2c);
        Singleton<>::instance = pEVar6;
        *pEVar6 = (EmailManager)0x0;
        *(undefined4 *)(pEVar6 + 4) = 0;
        *(undefined4 *)(pEVar6 + 8) = 0;
        *(undefined4 *)(pEVar6 + 0xc) = 0;
        *(undefined4 *)(pEVar6 + 0x10) = 0;
        *(undefined4 *)(pEVar6 + 0x14) = 0;
        *(undefined4 *)(pEVar6 + 0x18) = 0;
        *(undefined4 *)(pEVar6 + 0x1c) = 0;
        *(undefined4 *)(pEVar6 + 0x20) = 0;
        *(undefined4 *)(pEVar6 + 0x24) = 0;
        *(undefined4 *)(pEVar6 + 0x28) = 0;
        local_58 = (EmailInstance *)pEVar6;
      }
      local_14 = 0xffffffff;
      EmailManager::markEmailSent(pEVar6);
      debugPrint("SAVEHANDLER"," - Loaded: \'%s\'");
      local_64 = local_64 + 1;
    } while ((int)local_64 < local_5c);
  }
  local_5c = 0;
  fread(&local_5c,4,1,in_ECX);
  debugPrint("SAVEHANDLER","Loading %d non-synced...");
  local_68 = (AnimationFrames *)0x0;
  if (0 < local_5c) {
    do {
      local_58 = operator_new(0xa0);
      pAVar7 = (AnimationFrames *)EmailInstance::EmailInstance(local_58);
      local_64 = pAVar7;
      fread(pAVar7,4,1,in_ECX);
      local_58 = (EmailInstance *)SaveHandler::readLengthString(p_Var5);
      if ((word *)(pAVar7 + 4) != (word *)local_58) {
        word::~word((word *)(pAVar7 + 4));
        uVar2 = *(undefined4 *)(local_58 + 4);
        uVar3 = *(undefined4 *)(local_58 + 8);
        uVar4 = *(undefined4 *)(local_58 + 0xc);
        *(undefined4 *)(pAVar7 + 4) = *(undefined4 *)local_58;
        *(undefined4 *)(pAVar7 + 8) = uVar2;
        *(undefined4 *)(pAVar7 + 0xc) = uVar3;
        *(undefined4 *)(pAVar7 + 0x10) = uVar4;
        *(undefined8 *)(pAVar7 + 0x14) = *(undefined8 *)(local_58 + 0x10);
        *(undefined4 *)(local_58 + 0x10) = 0;
        *(undefined4 *)(local_58 + 0x14) = 0xf;
        *local_58 = (EmailInstance)0x0;
      }
      if (0xf < local_28) {
        pnVar12 = (nothrow_t *)(local_28 + 1);
        pvVar11 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_3c[0] + -4);
          pnVar12 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar11))) goto LAB_004bb62a;
        }
        operator_delete(pvVar11,pnVar12);
      }
      local_58 = (EmailInstance *)SaveHandler::readLengthString(p_Var5);
      if ((word *)(pAVar7 + 0x68) != (word *)local_58) {
        word::~word((word *)(pAVar7 + 0x68));
        uVar2 = *(undefined4 *)(local_58 + 4);
        uVar3 = *(undefined4 *)(local_58 + 8);
        uVar4 = *(undefined4 *)(local_58 + 0xc);
        *(undefined4 *)(pAVar7 + 0x68) = *(undefined4 *)local_58;
        *(undefined4 *)(pAVar7 + 0x6c) = uVar2;
        *(undefined4 *)(pAVar7 + 0x70) = uVar3;
        *(undefined4 *)(pAVar7 + 0x74) = uVar4;
        *(undefined8 *)(pAVar7 + 0x78) = *(undefined8 *)(local_58 + 0x10);
        *(undefined4 *)(local_58 + 0x10) = 0;
        *(undefined4 *)(local_58 + 0x14) = 0xf;
        *local_58 = (EmailInstance)0x0;
      }
      if (0xf < local_28) {
        pnVar12 = (nothrow_t *)(local_28 + 1);
        pvVar11 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_3c[0] + -4);
          pnVar12 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar11))) goto LAB_004bb62a;
        }
        operator_delete(pvVar11,pnVar12);
      }
      local_58 = (EmailInstance *)SaveHandler::readLengthString(p_Var5);
      if ((word *)(pAVar7 + 0x1c) != (word *)local_58) {
        word::~word((word *)(pAVar7 + 0x1c));
        uVar2 = *(undefined4 *)(local_58 + 4);
        uVar3 = *(undefined4 *)(local_58 + 8);
        uVar4 = *(undefined4 *)(local_58 + 0xc);
        *(undefined4 *)(pAVar7 + 0x1c) = *(undefined4 *)local_58;
        *(undefined4 *)(pAVar7 + 0x20) = uVar2;
        *(undefined4 *)(pAVar7 + 0x24) = uVar3;
        *(undefined4 *)(pAVar7 + 0x28) = uVar4;
        *(undefined8 *)(pAVar7 + 0x2c) = *(undefined8 *)(local_58 + 0x10);
        *(undefined4 *)(local_58 + 0x10) = 0;
        *(undefined4 *)(local_58 + 0x14) = 0xf;
        *local_58 = (EmailInstance)0x0;
      }
      if (0xf < local_28) {
        pnVar12 = (nothrow_t *)(local_28 + 1);
        pvVar11 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_3c[0] + -4);
          pnVar12 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar11))) goto LAB_004bb62a;
        }
        operator_delete(pvVar11,pnVar12);
      }
      pbVar13 = (basic_string<> *)(pAVar7 + 0x1c);
      if ((basic_string<> *)(pAVar7 + 0x4c) != pbVar13) {
        if (0xf < *(uint *)(pAVar7 + 0x30)) {
          pbVar13 = *(basic_string<> **)pbVar13;
        }
        std::basic_string<>::assign
                  ((basic_string<> *)(pAVar7 + 0x4c),(char *)pbVar13,*(uint *)(pAVar7 + 0x2c));
      }
      local_58 = (EmailInstance *)SaveHandler::readLengthString(p_Var5);
      if ((word *)(pAVar7 + 0x34) != (word *)local_58) {
        word::~word((word *)(pAVar7 + 0x34));
        uVar2 = *(undefined4 *)(local_58 + 4);
        uVar3 = *(undefined4 *)(local_58 + 8);
        uVar4 = *(undefined4 *)(local_58 + 0xc);
        *(undefined4 *)(pAVar7 + 0x34) = *(undefined4 *)local_58;
        *(undefined4 *)(pAVar7 + 0x38) = uVar2;
        *(undefined4 *)(pAVar7 + 0x3c) = uVar3;
        *(undefined4 *)(pAVar7 + 0x40) = uVar4;
        *(undefined8 *)(pAVar7 + 0x44) = *(undefined8 *)(local_58 + 0x10);
        *(undefined4 *)(local_58 + 0x10) = 0;
        *(undefined4 *)(local_58 + 0x14) = 0xf;
        *local_58 = (EmailInstance)0x0;
      }
      if (0xf < local_28) {
        pnVar12 = (nothrow_t *)(local_28 + 1);
        pvVar11 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_3c[0] + -4);
          pnVar12 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar11))) goto LAB_004bb62a;
        }
        operator_delete(pvVar11,pnVar12);
      }
      local_58 = (EmailInstance *)SaveHandler::readLengthString(p_Var5);
      if ((word *)(pAVar7 + 0x80) != (word *)local_58) {
        word::~word((word *)(pAVar7 + 0x80));
        uVar2 = *(undefined4 *)(local_58 + 4);
        uVar3 = *(undefined4 *)(local_58 + 8);
        uVar4 = *(undefined4 *)(local_58 + 0xc);
        *(undefined4 *)(pAVar7 + 0x80) = *(undefined4 *)local_58;
        *(undefined4 *)(pAVar7 + 0x84) = uVar2;
        *(undefined4 *)(pAVar7 + 0x88) = uVar3;
        *(undefined4 *)(pAVar7 + 0x8c) = uVar4;
        *(undefined8 *)(pAVar7 + 0x90) = *(undefined8 *)(local_58 + 0x10);
        *(undefined4 *)(local_58 + 0x10) = 0;
        *(undefined4 *)(local_58 + 0x14) = 0xf;
        *local_58 = (EmailInstance)0x0;
      }
      if (0xf < local_28) {
        pnVar12 = (nothrow_t *)(local_28 + 1);
        pvVar11 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_3c[0] + -4);
          pnVar12 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar11))) goto LAB_004bb62a;
        }
        operator_delete(pvVar11,pnVar12);
      }
      fread(pAVar7 + 0x98,4,1,in_ECX);
      pEVar6 = Singleton<>::instance;
      pAVar7[100] = (AnimationFrames)0x0;
      pAVar7[0x9c] = (AnimationFrames)0x0;
      if (pEVar6 == (EmailManager *)0x0) {
        pEVar6 = operator_new(0x2c);
        Singleton<>::instance = pEVar6;
        *pEVar6 = (EmailManager)0x0;
        *(undefined4 *)(pEVar6 + 4) = 0;
        *(undefined4 *)(pEVar6 + 8) = 0;
        *(undefined4 *)(pEVar6 + 0xc) = 0;
        *(undefined4 *)(pEVar6 + 0x10) = 0;
        *(undefined4 *)(pEVar6 + 0x14) = 0;
        *(undefined4 *)(pEVar6 + 0x18) = 0;
        *(undefined4 *)(pEVar6 + 0x1c) = 0;
        *(undefined4 *)(pEVar6 + 0x20) = 0;
        *(undefined4 *)(pEVar6 + 0x24) = 0;
        *(undefined4 *)(pEVar6 + 0x28) = 0;
        local_58 = (EmailInstance *)pEVar6;
      }
      ppAVar1 = *(AnimationFrames ***)(pEVar6 + 0x18);
      if (*(AnimationFrames ***)(pEVar6 + 0x1c) == ppAVar1) {
        std::vector<>::_Emplace_reallocate<>((vector<> *)(pEVar6 + 0x14),ppAVar1,&local_64);
      }
      else {
        *ppAVar1 = pAVar7;
        *(int *)(pEVar6 + 0x18) = *(int *)(pEVar6 + 0x18) + 4;
      }
      debugPrint("SAVEHANDLER"," - Loaded: \'%s\'");
      local_68 = local_68 + 1;
    } while ((int)local_68 < local_5c);
  }
  fread(&local_5c,4,1,in_ECX);
  debugPrint("SAVEHANDLER","Loading %d \'read articles\'...");
  iVar14 = 0;
  if (0 < local_5c) {
    do {
      SaveHandler::readLengthString(p_Var5);
      local_14 = 1;
      pbVar8 = std::map<>::operator[]
                         ((map<> *)(*(int *)(g_gameData + 300) + 0xc),(basic_string<> *)local_3c);
      *pbVar8 = true;
      debugPrint("SAVEHANDLER","Loaded read article \'%s\'");
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar12 = (nothrow_t *)(local_28 + 1);
        pvVar11 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_3c[0] + -4);
          pnVar12 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar11))) goto LAB_004bb62a;
        }
        operator_delete(pvVar11,pnVar12);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < local_5c);
  }
  fread(&local_5c,4,1,in_ECX);
  debugPrint("SAVEHANDLER","Loading %d \'drafts sent\'...");
  local_64 = (AnimationFrames *)0x0;
  if (0 < local_5c) {
    do {
      SaveHandler::readLengthString(p_Var5);
      local_14 = 2;
      iVar14 = *(int *)(g_gameData + 300);
      pbVar13 = *(basic_string<> **)(iVar14 + 0x24);
      if (*(basic_string<> **)(iVar14 + 0x28) == pbVar13) {
        std::vector<>::_Emplace_reallocate<>
                  ((vector<> *)(iVar14 + 0x20),(basic_string<> *)pbVar13,(basic_string<> *)local_3c)
        ;
      }
      else {
        std::basic_string<>::basic_string<>(pbVar13,(basic_string<> *)local_3c);
        *(int *)(iVar14 + 0x24) = *(int *)(iVar14 + 0x24) + 0x18;
      }
      debugPrint("SAVEHANDLER","Loaded draft sent \'%s\'");
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar12 = (nothrow_t *)(local_28 + 1);
        pvVar11 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_3c[0] + -4);
          pnVar12 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar11))) goto LAB_004bb62a;
        }
        operator_delete(pvVar11,pnVar12);
      }
      local_64 = local_64 + 1;
    } while ((int)local_64 < local_5c);
  }
  fread(&local_5c,4,1,in_ECX);
  debugPrint("SAVEHANDLER","Loading %d \'articles downloaded\'...");
  local_64 = (AnimationFrames *)0x0;
  if (0 < local_5c) {
    do {
      SaveHandler::readLengthString(p_Var5);
      local_14 = 3;
      iVar14 = *(int *)(g_gameData + 300);
      pbVar13 = *(basic_string<> **)(iVar14 + 0x18);
      if (*(basic_string<> **)(iVar14 + 0x1c) == pbVar13) {
        std::vector<>::_Emplace_reallocate<>
                  ((vector<> *)(iVar14 + 0x14),(basic_string<> *)pbVar13,(basic_string<> *)local_3c)
        ;
      }
      else {
        std::basic_string<>::basic_string<>(pbVar13,(basic_string<> *)local_3c);
        *(int *)(iVar14 + 0x18) = *(int *)(iVar14 + 0x18) + 0x18;
      }
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&stack0xffffff6c,(basic_string<> *)local_3c);
      pAVar9 = ComputerSystem::getArticle(*(ComputerSystem **)(g_gameLogic + 0xc));
      if (pAVar9 == (Article *)0x0) {
        pcVar15 = "Invalid article \'%s\' to download, ignoring.";
      }
      else {
        *(undefined4 *)(pAVar9 + 0xa0) = *(undefined4 *)(pAVar9 + 0x88);
        *(undefined4 *)(pAVar9 + 0xa4) = *(undefined4 *)(pAVar9 + 0x8c);
        *(undefined4 *)(pAVar9 + 0xa8) = *(undefined4 *)(pAVar9 + 0x90);
        *(undefined4 *)(pAVar9 + 0xac) = *(undefined4 *)(pAVar9 + 0x94);
        *(undefined8 *)(pAVar9 + 0xb0) = *(undefined8 *)(pAVar9 + 0x98);
        pcVar15 = "Loaded article downloaded \'%s\'";
      }
      debugPrint("SAVEHANDLER",pcVar15);
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar12 = (nothrow_t *)(local_28 + 1);
        pvVar11 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_3c[0] + -4);
          pnVar12 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar11))) goto LAB_004bb62a;
        }
        operator_delete(pvVar11,pnVar12);
      }
      local_64 = local_64 + 1;
    } while ((int)local_64 < local_5c);
  }
  fread(&local_5c,4,1,in_ECX);
  debugPrint("SAVEHANDLER","Loading %d \'sent emails\'...");
  iVar14 = 0;
  if (0 < local_5c) {
    do {
      SaveHandler::readLengthString(p_Var5);
      local_58 = (EmailInstance *)&stack0xffffff6c;
      local_14 = 4;
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&stack0xffffff6c,(basic_string<> *)local_3c);
      local_14._0_1_ = 5;
      pEVar6 = Singleton<>::instance;
      if (Singleton<>::instance == (EmailManager *)0x0) {
        pEVar6 = operator_new(0x2c);
        Singleton<>::instance = pEVar6;
        *pEVar6 = (EmailManager)0x0;
        *(undefined4 *)(pEVar6 + 4) = 0;
        *(undefined4 *)(pEVar6 + 8) = 0;
        *(undefined4 *)(pEVar6 + 0xc) = 0;
        *(undefined4 *)(pEVar6 + 0x10) = 0;
        *(undefined4 *)(pEVar6 + 0x14) = 0;
        *(undefined4 *)(pEVar6 + 0x18) = 0;
        *(undefined4 *)(pEVar6 + 0x1c) = 0;
        *(undefined4 *)(pEVar6 + 0x20) = 0;
        *(undefined4 *)(pEVar6 + 0x24) = 0;
        *(undefined4 *)(pEVar6 + 0x28) = 0;
        local_58 = (EmailInstance *)pEVar6;
      }
      local_14 = CONCAT31(local_14._1_3_,4);
      pEVar10 = EmailManager::getEmail(pEVar6);
      if (pEVar10 == (Email *)0x0) {
        pcVar16 = "ERROR: invalid email \'%s\' loaded";
        pcVar15 = "ERROR";
      }
      else {
        *(undefined2 *)(pEVar10 + 100) = 0x100;
        *(undefined4 *)(pEVar10 + 0x98) = 0;
        pcVar16 = "Email \'%s\' marked as sent";
        pcVar15 = "SAVEHANDLER";
      }
      debugPrint(pcVar15,pcVar16);
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar12 = (nothrow_t *)(local_28 + 1);
        pvVar11 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_3c[0] + -4);
          pnVar12 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar11))) goto LAB_004bb62a;
        }
        operator_delete(pvVar11,pnVar12);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < local_5c);
  }
  fread(&local_5d,1,1,in_ECX);
  do {
    if (local_5d == '\0') {
      debugPrint("SAVEHANDLER","Set %d emails to fired or ready to fire.");
      ExceptionList = local_1c;
      __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
      return;
    }
    SaveHandler::readLengthString(p_Var5);
    local_14 = 6;
    fread(&local_6c,4,1,in_ECX);
    fread(&local_5f,1,1,in_ECX);
    fread(&local_5e,1,1,in_ECX);
    local_58 = (EmailInstance *)&stack0xffffff6c;
    std::basic_string<>::basic_string<>
              ((basic_string<> *)&stack0xffffff6c,(basic_string<> *)local_54);
    local_14._0_1_ = 7;
    pEVar6 = Singleton<>::instance;
    if (Singleton<>::instance == (EmailManager *)0x0) {
      pEVar6 = operator_new(0x2c);
      Singleton<>::instance = pEVar6;
      *pEVar6 = (EmailManager)0x0;
      *(undefined4 *)(pEVar6 + 4) = 0;
      *(undefined4 *)(pEVar6 + 8) = 0;
      *(undefined4 *)(pEVar6 + 0xc) = 0;
      *(undefined4 *)(pEVar6 + 0x10) = 0;
      *(undefined4 *)(pEVar6 + 0x14) = 0;
      *(undefined4 *)(pEVar6 + 0x18) = 0;
      *(undefined4 *)(pEVar6 + 0x1c) = 0;
      *(undefined4 *)(pEVar6 + 0x20) = 0;
      *(undefined4 *)(pEVar6 + 0x24) = 0;
      *(undefined4 *)(pEVar6 + 0x28) = 0;
      local_58 = (EmailInstance *)pEVar6;
    }
    local_14 = CONCAT31(local_14._1_3_,6);
    pEVar10 = EmailManager::getEmail(pEVar6);
    if (pEVar10 == (Email *)0x0) {
      debugPrint("ERROR","ERROR: invalid email \'%s\' loaded");
    }
    else {
      *(undefined4 *)(pEVar10 + 0x98) = local_6c;
      pEVar10[100] = local_5f;
      pEVar10[0x65] = local_5e;
      debugPrint("SAVEHANDLER","Set email %s with RTF states (%f, %s, %s)");
    }
    local_14 = 0xffffffff;
    if (0xf < local_40) {
      pnVar12 = (nothrow_t *)(local_40 + 1);
      pvVar11 = local_54[0];
      if ((nothrow_t *)0xfff < pnVar12) {
        pvVar11 = *(void **)((int)local_54[0] + -4);
        pnVar12 = (nothrow_t *)(local_40 + 0x24);
        if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar11))) {
LAB_004bb62a:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar11,pnVar12);
    }
    fread(&local_5d,1,1,in_ECX);
  } while( true );
}


// void __cdecl V9::loadPlayerContracts(struct _iobuf *)

void __cdecl V9::loadPlayerContracts(_iobuf *param_1)

{
  MetaGameAction **ppMVar1;
  GameData *pGVar2;
  bool bVar3;
  _iobuf *p_Var4;
  FlagManager *pFVar5;
  char ****ppppcVar6;
  FILE *in_ECX;
  nothrow_t *pnVar7;
  void *pvVar8;
  char ****ppppcVar9;
  int iVar10;
  code *pcVar11;
  uint unaff_EDI;
  uint uVar12;
  undefined4 uStack_84;
  undefined4 local_58;
  Contract *local_54;
  SpaceStation *local_50;
  int local_4c;
  char local_45;
  void *local_44 [5];
  uint local_30;
  char ***local_2c [4];
  uint local_1c;
  uint local_18;
  _iobuf *local_14;
  void *local_10;
  undefined *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005bf420;
  local_10 = ExceptionList;
  p_Var4 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_14 = p_Var4;
  GameLogic::clearPlayerContracts((GameLogic *)in_ECX);
  local_4c = 0;
  fread(&local_4c,4,1,in_ECX);
  iVar10 = 0;
  if (0 < local_4c) {
    do {
      local_54 = V11::readContract(p_Var4);
      pGVar2 = g_gameData;
      if (local_54 != (Contract *)0x0) {
        ppMVar1 = *(MetaGameAction ***)(g_gameData + 0x140);
        if (*(MetaGameAction ***)(g_gameData + 0x144) == ppMVar1) {
          std::vector<>::_Emplace_reallocate<>
                    ((vector<> *)(g_gameData + 0x13c),ppMVar1,(MetaGameAction **)&local_54);
        }
        else {
          *ppMVar1 = (MetaGameAction *)local_54;
          *(int *)(pGVar2 + 0x140) = *(int *)(pGVar2 + 0x140) + 4;
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < local_4c);
  }
  debugPrint("SAVEHANDLER","...loaded %d current contracts for the player");
  bVar3 = local_4c < 1;
  if (bVar3) {
    local_50 = (SpaceStation *)&stack0xffffff78;
    std::basic_string<>::assign((basic_string<> *)&stack0xffffff78,"has_contract",0xc);
  }
  else {
    local_50 = (SpaceStation *)&stack0xffffff78;
    std::basic_string<>::assign((basic_string<> *)&stack0xffffff78,"has_contract",0xc);
  }
  local_8 = (uint)bVar3;
  pFVar5 = Singleton<>::getInstance();
  local_8 = 0xffffffff;
  FlagManager::setFlag(pFVar5);
  pcVar11 = fread_exref;
  local_4c = 0;
  fread(&local_45,1,1,in_ECX);
  do {
    if (local_45 == '\0') {
      debugPrint("SAVEHANDLER","Loaded %d contracts that have usage timers set.");
      ExceptionList = local_10;
      __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    SaveHandler::readLengthString(p_Var4);
    local_8 = 2;
    SaveHandler::readLengthString(p_Var4);
    local_8._0_1_ = 3;
    (*pcVar11)();
    std::basic_string<>::basic_string<>((basic_string<> *)&uStack_84,(basic_string<> *)local_44);
    local_50 = GameData::getSpaceStation();
    if ((local_50 == (SpaceStation *)0x0) ||
       (iVar10 = *(int *)(local_50 + 0x398), pcVar11 = fread_exref, iVar10 == 0)) {
      debugPrint("SAVEHANDLER","Error: invalid tradelocation \'%s\' for contract loaded.");
      local_8 = CONCAT31(local_8._1_3_,2);
      if (0xf < local_18) {
        pnVar7 = (nothrow_t *)(local_18 + 1);
        ppppcVar9 = (char ****)local_2c[0];
        if ((nothrow_t *)0xfff < pnVar7) {
          ppppcVar9 = (char ****)local_2c[0][-1];
          pnVar7 = (nothrow_t *)(local_18 + 0x24);
          if ((char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar9))) goto LAB_004c702b;
        }
        operator_delete(ppppcVar9,pnVar7);
      }
      local_8 = 0xffffffff;
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
      if (0xf < local_30) {
        pnVar7 = (nothrow_t *)(local_30 + 1);
        pvVar8 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar7) {
          pvVar8 = *(void **)((int)local_44[0] + -4);
          pnVar7 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8))) goto LAB_004c702b;
        }
        operator_delete(pvVar8,pnVar7);
      }
    }
    else {
      uVar12 = 0;
      ppppcVar9 = (char ****)local_2c[0];
      if (*(int *)(iVar10 + 0xa4) - *(int *)(iVar10 + 0xa0) >> 2 != 0) {
        do {
          ppppcVar6 = local_2c;
          if (0xf < local_18) {
            ppppcVar6 = ppppcVar9;
          }
          bVar3 = std::_Traits_equal<>((char *)ppppcVar6,local_1c,(char *)p_Var4,unaff_EDI);
          if (bVar3) {
            *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0xa0) + uVar12 * 4) + 0xa8) = local_58;
            uStack_84 = 0x4c6e81;
            debugPrint("SAVEHANDLER","Set contractID %s to have timer \'%f\'");
            local_4c = local_4c + 1;
            iVar10 = *(int *)(local_50 + 0x398);
            ppppcVar9 = (char ****)local_2c[0];
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < (uint)(*(int *)(iVar10 + 0xa4) - *(int *)(iVar10 + 0xa0) >> 2));
      }
      local_8 = CONCAT31(local_8._1_3_,2);
      if (0xf < local_18) {
        pnVar7 = (nothrow_t *)(local_18 + 1);
        ppppcVar6 = ppppcVar9;
        if ((nothrow_t *)0xfff < pnVar7) {
          ppppcVar6 = (char ****)ppppcVar9[-1];
          pnVar7 = (nothrow_t *)(local_18 + 0x24);
          if ((char *)0x1f < (char *)((int)ppppcVar9 + (-4 - (int)ppppcVar6))) goto LAB_004c702b;
        }
        operator_delete(ppppcVar6,pnVar7);
      }
      local_8 = 0xffffffff;
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
      pcVar11 = fread_exref;
      if (0xf < local_30) {
        pnVar7 = (nothrow_t *)(local_30 + 1);
        pvVar8 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar7) {
          pvVar8 = *(void **)((int)local_44[0] + -4);
          pnVar7 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8))) {
LAB_004c702b:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar8,pnVar7);
        pcVar11 = fread_exref;
      }
    }
    (*pcVar11)();
  } while( true );
}


// void __cdecl V9::loadSpaceStationStates(struct _iobuf *)

void __cdecl V9::loadSpaceStationStates(_iobuf *param_1)

{
  Contract *this;
  int iVar1;
  MetaGameAction **ppMVar2;
  _iobuf *p_Var3;
  word *pwVar4;
  Ship *pSVar5;
  TradeItemInstance *pTVar6;
  FILE *in_ECX;
  uint uVar7;
  void *pvVar8;
  nothrow_t *pnVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  basic_string<> abStack_94 [4];
  undefined4 uStack_90;
  int local_70;
  int local_68;
  Contract *local_64;
  uint local_60;
  FILE *local_5c;
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
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &DAT_005bf208;
  local_1c = ExceptionList;
  p_Var3 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffff0);
  ExceptionList = &local_1c;
  local_68 = 0;
  uStack_90 = 0x4c7099;
  local_5c = in_ECX;
  local_24 = p_Var3;
  fread(&local_68,4,1,in_ECX);
  local_70 = 0;
  if (0 < local_68) {
    do {
      local_2c = 0;
      uStack_28 = 0xf;
      local_3c = (void *)((uint)local_3c & 0xffffff00);
      local_14 = 0;
      pwVar4 = (word *)SaveHandler::readLengthString(p_Var3);
      if ((word *)&local_3c != pwVar4) {
        word::~word((word *)&local_3c);
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
          if (0x1f < (uint)((int)local_54 + (-4 - (int)pvVar8))) goto LAB_004c73ff;
        }
        operator_delete(pvVar8,pnVar9);
      }
      std::basic_string<>::basic_string<>(abStack_94,(basic_string<> *)&local_3c);
      pSVar5 = GameData::getShipWithRego();
      debugPrint("SAVEHANDLER","...loading trade data for platform %s");
      if (pSVar5 == (Ship *)0x0) {
        debugPrint("ERROR","ERROR: No valid space station with this rego.");
        if (0xf < uStack_28) {
          pnVar9 = (nothrow_t *)(uStack_28 + 1);
          pvVar8 = local_3c;
          if ((nothrow_t *)0xfff < pnVar9) {
            pvVar8 = *(void **)((int)local_3c + -4);
            pnVar9 = (nothrow_t *)(uStack_28 + 0x24);
            if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar8))) {
LAB_004c73ff:
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar8,pnVar9);
        }
        goto LAB_004c7424;
      }
      local_64 = *(Contract **)(pSVar5 + 0x398);
      uVar12 = 0;
      puVar10 = *(undefined4 **)(local_64 + 0x94);
      uVar7 = (uint)((int)*(undefined4 **)(local_64 + 0x98) + (3 - (int)puVar10)) >> 2;
      if (*(undefined4 **)(local_64 + 0x98) < puVar10) {
        uVar7 = 0;
      }
      local_60 = uVar7;
      if (uVar7 != 0) {
        do {
          this = (Contract *)*puVar10;
          if (this != (Contract *)0x0) {
            Contract::_scalar_deleting_destructor_(this,(uint)this);
            uVar7 = local_60;
          }
          uVar12 = uVar12 + 1;
          puVar10 = puVar10 + 1;
        } while (uVar12 != uVar7);
      }
      *(undefined4 *)(local_64 + 0x98) = *(undefined4 *)(local_64 + 0x94);
      local_58 = 0;
      uStack_90 = 0x4c71e4;
      fread(&local_58,4,1,local_5c);
      iVar11 = 0;
      if (0 < local_58) {
        do {
          local_64 = V11::readContract(p_Var3);
          iVar1 = *(int *)(pSVar5 + 0x398);
          ppMVar2 = *(MetaGameAction ***)(iVar1 + 0x98);
          if (*(MetaGameAction ***)(iVar1 + 0x9c) == ppMVar2) {
            std::vector<>::_Emplace_reallocate<>
                      ((vector<> *)(iVar1 + 0x94),ppMVar2,(MetaGameAction **)&local_64);
          }
          else {
            *ppMVar2 = (MetaGameAction *)local_64;
            *(int *)(iVar1 + 0x98) = *(int *)(iVar1 + 0x98) + 4;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < local_58);
      }
      debugPrint("SAVEHANDLER","...loading %d contracts for platform");
      TradeLocation::clearGoods(*(TradeLocation **)(pSVar5 + 0x398),false);
      uStack_90 = 0x4c725d;
      fread(&local_58,4,1,local_5c);
      iVar11 = 0;
      if (0 < local_58) {
        do {
          pTVar6 = V11::readTradeItem(p_Var3);
          if (pTVar6 == (TradeItemInstance *)0x0) {
            debugPrint("SAVEHANDLER","Invalid trade item loaded.");
          }
          else {
            TradeLocation::addTradeItemInstance(*(TradeLocation **)(pSVar5 + 0x398),pTVar6,false);
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < local_58);
      }
      debugPrint("SAVEHANDLER","...loading %d trade item instances for platform");
      iVar11 = *(int *)(pSVar5 + 0x398);
      uVar7 = 0;
      if (*(int *)(iVar11 + 0x8c) - *(int *)(iVar11 + 0x88) >> 2 != 0) {
        do {
          *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x88) + uVar7 * 4) + 0x10) = 0;
          iVar1 = uVar7 * 4;
          uVar7 = uVar7 + 1;
          *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x88) + iVar1) + 0x30) = 0xffffffff;
        } while (uVar7 < (uint)(*(int *)(iVar11 + 0x8c) - *(int *)(iVar11 + 0x88) >> 2));
      }
      uStack_90 = 0x4c7325;
      fread(&local_58,4,1,local_5c);
      iVar11 = 0;
      if (0 < local_58) {
        do {
          pTVar6 = V11::readTradeItem(p_Var3);
          if (pTVar6 == (TradeItemInstance *)0x0) {
            debugPrint("SAVEHANDLER","Invalid trade item loaded.");
          }
          else {
            TradeLocation::addTradeItemInstance(*(TradeLocation **)(pSVar5 + 0x398),pTVar6,true);
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < local_58);
      }
      debugPrint("SAVEHANDLER","...loading %d wire item instances for platform");
      local_14 = 0xffffffff;
      if (0xf < uStack_28) {
        pnVar9 = (nothrow_t *)(uStack_28 + 1);
        pvVar8 = local_3c;
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar8 = *(void **)((int)local_3c + -4);
          pnVar9 = (nothrow_t *)(uStack_28 + 0x24);
          if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar8))) goto LAB_004c73ff;
        }
        operator_delete(pvVar8,pnVar9);
      }
      local_70 = local_70 + 1;
    } while (local_70 < local_68);
  }
  debugPrint("SAVEHANDLER","...loaded %d space station trade data sets");
LAB_004c7424:
  ExceptionList = local_1c;
  __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// void __cdecl V9::loadShips(struct _iobuf *)

void __cdecl V9::loadShips(_iobuf *param_1)

{
  MetaGameAction **ppMVar1;
  GameData *pGVar2;
  _iobuf *p_Var3;
  Ship *pSVar4;
  undefined4 *puVar5;
  ConsoleDamage *pCVar6;
  vector<> *pvVar7;
  ShipModule *pSVar8;
  SaveHandler *pSVar9;
  int iVar10;
  _Tree_node<> *p_Var11;
  WeaponClass *pWVar12;
  FILE *in_ECX;
  int *piVar13;
  _iobuf *extraout_ECX;
  _iobuf *extraout_ECX_00;
  basic_string<> *pbVar14;
  _Tree_comp_alloc<> *this;
  void *pvVar15;
  nothrow_t *pnVar16;
  int iVar17;
  Ship *this_00;
  int iVar18;
  code *pcVar19;
  bool bVar20;
  basic_string<> abStack_124 [16];
  undefined4 uStack_114;
  vector<> avStack_10c [4];
  undefined4 uStack_108;
  uint uVar21;
  _iobuf *p_Var22;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined1 local_a0 [4];
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  FILE *local_8c;
  char local_86;
  Ship local_85;
  vector<> *local_84;
  Ship *local_80;
  vector<> *local_7c;
  vector<> *local_78;
  void *local_74 [5];
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  vector<> *local_2c [4];
  int local_1c;
  uint local_18;
  _iobuf *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005bf4d3;
  local_10 = ExceptionList;
  p_Var3 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8c = in_ECX;
  local_14 = p_Var3;
  SaveHandler::readLengthString(p_Var3);
  local_8 = 0;
  SaveHandler::readLengthString(p_Var3);
  local_8._0_1_ = 1;
  SaveHandler::readLengthString(p_Var3);
  pcVar19 = fread_exref;
  local_8._0_1_ = 2;
  fread(&local_b4,8,1,in_ECX);
  uVar21 = 0;
  fread(&local_ac,8,1,in_ECX);
  fread(local_a0,4,1,in_ECX);
  uStack_108 = 0x4c74f1;
  fread(&local_85,1,1,in_ECX);
  local_78 = (vector<> *)&stack0xffffff24;
  p_Var22 = (_iobuf *)(uVar21 & 0xffffff00);
  std::basic_string<>::assign((basic_string<> *)&stack0xffffff24,"",0);
  local_8._0_1_ = 3;
  local_7c = (vector<> *)&stack0xffffff0c;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff0c,(basic_string<> *)local_74)
  ;
  local_84 = avStack_10c;
  local_8._0_1_ = 4;
  uStack_114 = 0x4c7540;
  std::basic_string<>::basic_string<>((basic_string<> *)avStack_10c,(basic_string<> *)local_44);
  local_8._0_1_ = 5;
  std::basic_string<>::basic_string<>(abStack_124,(basic_string<> *)local_5c);
  local_8._0_1_ = 2;
  pSVar4 = GameLogic::generateShip();
  pGVar2 = g_gameData;
  local_80 = pSVar4;
  if (pSVar4 == (Ship *)0x0) {
    debugPrint("SAVEHANDLER","ERROR - Invalid ship type in save game, \'%s\'");
  }
  else {
    *(undefined8 *)(pSVar4 + 0x28) = local_b4;
    *(Ship **)(pGVar2 + 0xd0) = pSVar4;
    *(undefined8 *)(pSVar4 + 0x30) = local_ac;
    pSVar4[0x15c] = local_85;
    Ship::setSector(pSVar4,*(int *)(*(int *)(pGVar2 + 0xd0) + 0x20));
    for (puVar5 = *(undefined4 **)(g_gameData + 0x3c); puVar5 != *(undefined4 **)(g_gameData + 0x40)
        ; puVar5 = puVar5 + 1) {
      piVar13 = (int *)*puVar5;
      in_ECX = local_8c;
      if (*piVar13 == *(int *)(pSVar4 + 0x20)) goto LAB_004c75f9;
    }
    piVar13 = (int *)0x0;
LAB_004c75f9:
    *(int **)(g_gameData + 0xd8) = piVar13;
    if (Singleton<Pather>::instance == (Pather *)0x0) {
      local_78 = operator_new(0x98);
      local_8._0_1_ = 6;
      Singleton<Pather>::instance = (Pather *)Pather::Pather((Pather *)local_78);
      local_8._0_1_ = 2;
    }
    Pather::resetSector(Singleton<Pather>::instance);
    fread(&local_90,4,1,in_ECX);
    if (0 < local_90) {
      local_84 = (vector<> *)(pSVar4 + 0x14c);
      iVar17 = 0;
      do {
        fread(&local_7c,4,1,in_ECX);
        p_Var22 = (_iobuf *)&DAT_00000001;
        fread(&local_78,4,1,in_ECX);
        piVar13 = std::map<>::operator[]((map<> *)local_84,(int *)&local_7c);
        iVar17 = iVar17 + 1;
        *piVar13 = (int)local_78;
        pSVar4 = local_80;
      } while (iVar17 < local_90);
    }
    fread(&local_94,4,1,in_ECX);
    Ship::repairConsoleDamage(pSVar4);
    local_7c = (vector<> *)0x0;
    this_00 = pSVar4;
    if (0 < local_94) {
      local_78 = (vector<> *)(pSVar4 + 0x228);
      do {
        pCVar6 = operator_new(0x28);
        local_8._0_1_ = 7;
        local_78 = (vector<> *)pCVar6;
        SaveHandler::readLengthString(p_Var22);
        pvVar7 = (vector<> *)ConsoleDamage::ConsoleDamage(pCVar6);
        local_8._0_1_ = 2;
        local_84 = pvVar7;
        fread(pvVar7 + 0x20,4,1,in_ECX);
        p_Var22 = (_iobuf *)&DAT_00000001;
        fread(pvVar7 + 0x24,4,1,in_ECX);
        fread(pvVar7 + 0x18,4,1,in_ECX);
        uStack_108 = 0x4c7738;
        fread(pvVar7 + 0x1c,4,1,in_ECX);
        ppMVar1 = *(MetaGameAction ***)(pSVar4 + 0x22c);
        if (*(MetaGameAction ***)(pSVar4 + 0x230) == ppMVar1) {
          std::vector<>::_Emplace_reallocate<>
                    ((vector<> *)(pSVar4 + 0x228),ppMVar1,(MetaGameAction **)&local_84);
        }
        else {
          *ppMVar1 = (MetaGameAction *)pvVar7;
          *(int *)(pSVar4 + 0x22c) = *(int *)(pSVar4 + 0x22c) + 4;
        }
        debugPrint("SAVEHANDLER","  Console damage loaded for: %s");
        local_7c = local_7c + 1;
        this_00 = local_80;
        pcVar19 = fread_exref;
      } while ((int)local_7c < local_94);
    }
    (*pcVar19)();
    local_7c = (vector<> *)0x0;
    p_Var22 = extraout_ECX;
    if (0 < local_98) {
      do {
        iVar17 = -1;
        pSVar8 = V8::readShipModule(p_Var22);
        SystemManager::addModule(*(SystemManager **)(this_00 + 0x40),pSVar8,iVar17);
        local_7c = local_7c + 1;
        p_Var22 = extraout_ECX_00;
      } while ((int)local_7c < local_98);
    }
    if (*(int *)(*(int *)(this_00 + 0x24) + 0x118) == 2) {
      *(undefined1 *)(*(int *)(this_00 + 0x40) + 0x34) = 0;
    }
    else {
      *(undefined1 *)(*(int *)(this_00 + 0x40) + 0x34) = 1;
    }
    local_78 = (vector<> *)GameData::getShipWithinDistance();
    if (local_78 == (vector<> *)0x0) {
      (**(code **)(**(int **)(this_00 + 0x178) + 4))();
      *(undefined4 *)(this_00 + 0x178) = 0;
      *(undefined4 *)(this_00 + 0xf8) = 0;
      *(undefined4 *)(this_00 + 0xd4) = 0;
      *(undefined4 *)(this_00 + 0x2c0) = 0;
      *(undefined4 *)(this_00 + 0x2c4) = 0;
    }
    else {
      Ship::setDocked(this_00,(Ship *)local_78,false,false);
      iVar17 = *(int *)(this_00 + 0x178);
      if (iVar17 != 0) {
        pbVar14 = (basic_string<> *)(iVar17 + 8);
        pSVar9 = Singleton<>::getInstance();
        if ((basic_string<> *)(pSVar9 + 0x14) != pbVar14) {
          if (0xf < *(uint *)(iVar17 + 0x1c)) {
            pbVar14 = *(basic_string<> **)pbVar14;
          }
          std::basic_string<>::assign
                    ((basic_string<> *)(pSVar9 + 0x14),(char *)pbVar14,*(uint *)(iVar17 + 0x18));
        }
        strUsingArgs((char *)local_2c);
        local_8._0_1_ = 8;
        local_84 = (vector<> *)local_2c;
        if (0xf < local_18) {
          local_84 = local_2c[0];
        }
        pvVar7 = (vector<> *)local_2c;
        if (0xf < local_18) {
          pvVar7 = local_2c[0];
        }
        iVar18 = 0;
        iVar17 = (int)(local_84 + local_1c) - (int)pvVar7;
        if (local_84 + local_1c < pvVar7) {
          iVar17 = 0;
        }
        local_7c = pvVar7;
        if (iVar17 != 0) {
          do {
            iVar10 = tolower((int)(char)pvVar7[iVar18]);
            local_84[iVar18] = SUB41(iVar10,0);
            iVar18 = iVar18 + 1;
            this_00 = local_80;
          } while (iVar18 != iVar17);
        }
        local_8c = (FILE *)&stack0xffffff20;
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)&stack0xffffff20,(basic_string<> *)local_2c);
        local_8._0_1_ = 9;
        if (Singleton<>::instance == (FlagManager *)0x0) {
          local_78 = operator_new(0x30);
          *(undefined4 *)local_78 = 0;
          *(undefined4 *)(local_78 + 4) = 0;
          *(undefined4 *)(local_78 + 8) = 0;
          pvVar7 = local_78 + 0xc;
          local_8._0_1_ = 0xb;
          *(undefined4 *)pvVar7 = 0;
          *(undefined4 *)(local_78 + 0x10) = 0;
          local_7c = pvVar7;
          p_Var11 = std::_Tree_comp_alloc<>::_Buyheadnode(this);
          *(_Tree_node<> **)pvVar7 = p_Var11;
          Singleton<>::instance = (FlagManager *)local_78;
          *(undefined4 *)(local_78 + 0x24) = 0;
          *(undefined4 *)(local_78 + 0x28) = 0xf;
          local_78[0x14] = (vector<>)0x0;
        }
        local_8._0_1_ = 8;
        FlagManager::setFlag();
        local_8._0_1_ = 2;
        if (0xf < local_18) {
          pnVar16 = (nothrow_t *)(local_18 + 1);
          pvVar7 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar16) {
            pvVar7 = *(vector<> **)(local_2c[0] + -4);
            pnVar16 = (nothrow_t *)(local_18 + 0x24);
            if ((vector<> *)0x1f < local_2c[0] + (-4 - (int)pvVar7)) {
LAB_004c79a7:
              local_8._0_1_ = 2;
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar7,pnVar16);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (vector<> *)((uint)local_2c[0] & 0xffffff00);
        pcVar19 = fread_exref;
      }
    }
    pGVar2 = g_gameData;
    *(undefined4 *)(this_00 + 0x378) = 0;
    iVar17 = *(int *)(*(int *)(*(int *)(pGVar2 + 0xd0) + 0x40) + 0x20);
    if (iVar17 != 0) {
      local_8c = (FILE *)(iVar17 + 0x3c);
      local_7c = (vector<> *)0x8;
      do {
        local_78 = *(vector<> **)local_8c;
        if (local_78 != (vector<> *)0x0) {
          Weapon::~Weapon((Weapon *)local_78);
          operator_delete(local_78,(nothrow_t *)0x428);
        }
        local_8c->_ptr = 0;
        local_8c = (FILE *)((int)local_8c + 4);
        local_7c = local_7c + -1;
      } while (local_7c != (vector<> *)0x0);
    }
    (*pcVar19)();
    local_80 = (Ship *)0x0;
    if (0 < local_9c) {
      do {
        (*pcVar19)();
        if (local_86 != '\0') {
          SaveHandler::readLengthString(p_Var3);
          local_8._0_1_ = 0xc;
          pSVar4 = local_80;
          std::basic_string<>::basic_string<>
                    ((basic_string<> *)&stack0xffffff20,(basic_string<> *)local_2c);
          pWVar12 = GameData::getWeaponClassWithIdentifier();
          Ship::addWeapon(*(Ship **)(g_gameData + 0xd0),pWVar12,(int)pSVar4);
          debugPrint("SAVEHANDLER","Loaded weapon of class %s into player ship");
          local_8._0_1_ = 2;
          if (0xf < local_18) {
            pnVar16 = (nothrow_t *)(local_18 + 1);
            pvVar7 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar16) {
              pvVar7 = *(vector<> **)(local_2c[0] + -4);
              pnVar16 = (nothrow_t *)(local_18 + 0x24);
              if ((vector<> *)0x1f < local_2c[0] + (-4 - (int)pvVar7)) goto LAB_004c79a7;
            }
            operator_delete(pvVar7,pnVar16);
          }
        }
        local_80 = local_80 + 1;
      } while ((int)local_80 < local_9c);
    }
    pGVar2 = g_gameData;
    *(undefined4 *)(this_00 + 100) = 1;
    this_00[0x234] = (Ship)0x1;
    *(Ship **)(pGVar2 + 0xd0) = this_00;
    ShipData::currentlyBoardedShip = *(Ship **)(this_00 + 0x178);
    if (ShipData::currentlyBoardedShip != (Ship *)0x0) {
      bVar20 = false;
      if (*(int *)(ShipData::currentlyBoardedShip + 0x254) != 0) {
        bVar20 = *(int *)(*(int *)(ShipData::currentlyBoardedShip + 0x254) + 0x158) == 1;
      }
      if (bVar20) goto LAB_004c7ba9;
    }
    ShipData::currentlyBoardedShip = this_00;
  }
LAB_004c7ba9:
  if (0xf < local_30) {
    pnVar16 = (nothrow_t *)(local_30 + 1);
    pvVar15 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar16) {
      pvVar15 = *(void **)((int)local_44[0] + -4);
      pnVar16 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar15,pnVar16);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  if (0xf < local_48) {
    pnVar16 = (nothrow_t *)(local_48 + 1);
    pvVar15 = local_5c[0];
    if ((nothrow_t *)0xfff < pnVar16) {
      pvVar15 = *(void **)((int)local_5c[0] + -4);
      pnVar16 = (nothrow_t *)(local_48 + 0x24);
      if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar15,pnVar16);
  }
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  if (0xf < local_60) {
    pnVar16 = (nothrow_t *)(local_60 + 1);
    pvVar15 = local_74[0];
    if ((nothrow_t *)0xfff < pnVar16) {
      pvVar15 = *(void **)((int)local_74[0] + -4);
      pnVar16 = (nothrow_t *)(local_60 + 0x24);
      if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar15,pnVar16);
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}
