#include "../ois.exe.h"


// public: bool __thiscall NetworkServer::shipHasConnectedClient(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __thiscall NetworkServer::shipHasConnectedClient(NetworkServer *this,char *param_2)

{
  char *pcVar1;
  bool bVar2;
  char *pcVar3;
  nothrow_t *pnVar4;
  uint unaff_ESI;
  uint uVar5;
  char *unaff_EDI;
  uint uVar6;
  uint in_stack_00000014;
  uint in_stack_00000018;
  bool local_5;
  
  pcVar1 = param_2;
  uVar5 = 0;
  uVar6 = *(int *)(this + 0x40) - *(int *)(this + 0x3c) >> 2;
  if (uVar6 != 0) {
    do {
      pcVar3 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar3 = pcVar1;
      }
      bVar2 = std::_Traits_equal<>(pcVar3,in_stack_00000014,unaff_EDI,unaff_ESI);
      if (bVar2) {
        local_5 = true;
        goto LAB_004234e8;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  local_5 = false;
LAB_004234e8:
  if (0xf < in_stack_00000018) {
    pnVar4 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar3 = pcVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pcVar3 = *(char **)(pcVar1 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < pcVar1 + (-4 - (int)pcVar3)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar3,pnVar4);
  }
  return local_5;
}


// public: void __thiscall NetworkServer::sendSound(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,enum ESound::Sound,int)

void __thiscall
NetworkServer::sendSound(NetworkServer *this,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 *puVar6;
  NetworkServer *pNVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  uint unaff_EDI;
  nothrow_t *pnVar11;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  undefined4 uStack_80;
  RakNetGUID local_60;
  RakNetGUID local_50;
  NetworkServer *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  uint local_34;
  undefined1 local_30;
  undefined4 local_2f;
  undefined4 local_2b;
  char *local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_005b329b;
  local_1c = ExceptionList;
  pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffff0);
  ExceptionList = &local_1c;
  local_14 = 0;
  iVar9 = *(int *)(this + 0x3c);
  local_34 = 0;
  pcVar10 = param_4;
  uVar8 = in_stack_00000020;
  local_40 = this;
  local_24 = pcVar4;
  puVar2 = &stack0xfffffffc;
  if (*(int *)(this + 0x40) - iVar9 >> 2 != 0) {
    do {
      local_38 = (undefined4 *)(iVar9 + local_34 * 4);
      local_3c = (undefined4 *)*local_38;
      pcVar5 = (char *)&param_4;
      if (0xf < uVar8) {
        pcVar5 = pcVar10;
      }
      bVar3 = std::_Traits_equal<>(pcVar5,in_stack_0000001c,pcVar4,unaff_EDI);
      if (bVar3) {
        puVar6 = local_3c;
        if (Singleton<>::instance == (NetworkData *)0x0) {
          Singleton<>::instance = operator_new(1);
          puVar6 = (undefined4 *)*local_38;
        }
        local_60.g._0_4_ = *puVar6;
        local_60.g._4_4_ = puVar6[1];
        local_60._8_4_ = puVar6[2];
        local_60._12_4_ = puVar6[3];
        local_2f = param_2;
        local_30 = 0x99;
        local_50.g._0_4_ = *puVar6;
        local_50.g._4_4_ = puVar6[1];
        local_50._8_4_ = puVar6[2];
        local_50._12_4_ = puVar6[3];
        local_2b = param_3;
        Singleton<>::getInstance();
        pNVar7 = Singleton<>::getInstance();
        piVar1 = *(int **)(pNVar7 + 0x90);
        RakNet::AddressOrGUID::AddressOrGUID((AddressOrGUID *)&stack0xffffff64,&local_50);
        (**(code **)(*piVar1 + 0x50))(&local_30,9,1,3,0);
        pcVar10 = param_4;
        uVar8 = in_stack_00000020;
        if (OISConfiguration::multiDebug != false) {
          uVar8 = (uint)DAT_0065e444;
          DAT_0065e444 = DAT_0065e444 + 1;
          RakNet::RakNetGUID::ToString(&local_60,&DAT_00662560 + (uVar8 & 7) * 0x40);
          uStack_80 = 0x42368e;
          debugPrint("NETWORK","Sent sound \'%s\' to client %s");
          pcVar10 = param_4;
          uVar8 = in_stack_00000020;
        }
      }
      local_34 = local_34 + 1;
      iVar9 = *(int *)(local_40 + 0x3c);
      puVar2 = puStack_20;
    } while (local_34 < (uint)(*(int *)(local_40 + 0x40) - iVar9 >> 2));
  }
  puStack_20 = puVar2;
  if (0xf < uVar8) {
    pnVar11 = (nothrow_t *)(uVar8 + 1);
    pcVar4 = pcVar10;
    if ((nothrow_t *)0xfff < pnVar11) {
      pcVar4 = *(char **)(pcVar10 + -4);
      pnVar11 = (nothrow_t *)(uVar8 + 0x24);
      if ((char *)0x1f < pcVar10 + (-4 - (int)pcVar4)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar4,pnVar11);
  }
  ExceptionList = local_1c;
  __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// public: void __thiscall NetworkServer::sendLog(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class LogLine *)

void __thiscall NetworkServer::sendLog(NetworkServer *this,LogLine *param_2,char *param_3)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  nothrow_t *pnVar4;
  int iVar5;
  uint unaff_EDI;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  uint local_28;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_18 = &DAT_005b32cb;
  local_1c = ExceptionList;
  pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffff0);
  ExceptionList = &local_1c;
  local_14 = 0;
  if (OISConfiguration::multiDebug) {
    debugPrint("NETWORK","Sending log line \'%s\' to ship rego \'%s\'...");
  }
  iVar5 = *(int *)(this + 0x3c);
  local_28 = 0;
  if (*(int *)(this + 0x40) - iVar5 >> 2 != 0) {
    do {
      pcVar3 = (char *)&param_3;
      if (0xf < in_stack_0000001c) {
        pcVar3 = param_3;
      }
      bVar1 = std::_Traits_equal<>(pcVar3,in_stack_00000018,pcVar2,unaff_EDI);
      if ((bVar1) || (bVar1 = std::_Traits_equal<>("",0,pcVar2,unaff_EDI), bVar1)) {
        if (OISConfiguration::multiDebug != false) {
          debugPrint("NETWORK","Sent log line to %s");
          iVar5 = *(int *)(this + 0x3c);
        }
        if (Singleton<>::instance == (NetworkData *)0x0) {
          Singleton<>::instance = operator_new(1);
        }
        NetworkData::sendLog
                  ((NetworkData *)&stack0xffffffb0,**(RakNetGUID **)(local_28 * 4 + iVar5),param_2);
      }
      local_28 = local_28 + 1;
      iVar5 = *(int *)(this + 0x3c);
    } while (local_28 < (uint)(*(int *)(this + 0x40) - iVar5 >> 2));
  }
  if (0xf < in_stack_0000001c) {
    pnVar4 = (nothrow_t *)(in_stack_0000001c + 1);
    pcVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pcVar2 = *(char **)(param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if ((char *)0x1f < param_3 + (-4 - (int)pcVar2)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar2,pnVar4);
  }
  ExceptionList = local_1c;
  return;
}


// public: void __thiscall NetworkServer::sendShipDetailsToClient(struct RakNet::RakNetGUID,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

void __thiscall
NetworkServer::sendShipDetailsToClient
          (NetworkServer *this,int param_1,int param_3,undefined4 param_4,int param_5,void *param_6)

{
  piecewise_construct_t pVar1;
  ShipModule *pSVar2;
  int *piVar3;
  piecewise_construct_t *ppVar4;
  RakNetGUID RVar5;
  RakNetGUID RVar6;
  bool bVar7;
  uint uVar8;
  Ship *pSVar9;
  NetworkServer *pNVar10;
  piecewise_construct_t *ppVar11;
  NetworkData *extraout_ECX;
  NetworkData *extraout_ECX_00;
  NetworkData *extraout_ECX_01;
  NetworkData *extraout_ECX_02;
  NetworkData *pNVar12;
  void *pvVar13;
  _Tree_comp_alloc<> *p_Var14;
  nothrow_t *pnVar15;
  uint uVar16;
  piecewise_construct_t *ppVar17;
  piecewise_construct_t *ppVar18;
  int iVar19;
  int iVar20;
  uint in_stack_00000028;
  int iStack_a4;
  undefined4 uStack_a0;
  int local_9c;
  int iStack_98;
  void *local_68 [5];
  uint local_54;
  uint *local_50;
  Ship *local_4c;
  piecewise_construct_t *local_48;
  undefined1 local_41;
  _Tree_comp_alloc<> *local_40;
  uint local_3c;
  RakNetGUID local_38;
  RakNetGUID local_28;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005b3318;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar8 = 0;
  local_40 = *(_Tree_comp_alloc<> **)(this + 0x3c);
  uVar16 = *(int *)(this + 0x40) - (int)local_40 >> 2;
  p_Var14 = local_40;
  if (uVar16 != 0) {
    do {
      if ((**(int **)p_Var14 == param_1) && ((*(int **)p_Var14)[1] == param_3)) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      if (bVar7) break;
      uVar8 = uVar8 + 1;
      p_Var14 = p_Var14 + 4;
    } while (uVar8 < uVar16);
  }
  debugPrint("MULTI","Sending fresh ship details (%s) to client %s");
  local_48 = (piecewise_construct_t *)&stack0xffffff74;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff74,(basic_string<> *)&param_6)
  ;
  local_8._0_1_ = 1;
  if (Singleton<>::instance == (NetworkData *)0x0) {
    Singleton<>::instance = operator_new(1);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_9c = param_1;
  iStack_98 = param_3;
  uStack_a0._0_2_ = 0x39a7;
  uStack_a0._2_2_ = 0x42;
  NetworkData::sendAddShip();
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff74,(basic_string<> *)&param_6)
  ;
  pSVar9 = GameData::getShipWithRego();
  local_3c = 0;
  iVar20 = *(int *)(pSVar9 + 0x40);
  local_4c = pSVar9;
  if (*(int *)(iVar20 + 0x40) - *(int *)(iVar20 + 0x3c) >> 2 != 0) {
    do {
      iVar19 = local_3c * 4;
      local_48 = (piecewise_construct_t *)&stack0xffffff70;
      iStack_98 = 0x4239f7;
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&stack0xffffff70,
                 (basic_string<> *)(*(int *)(*(int *)(*(int *)(iVar20 + 0x3c) + iVar19) + 8) + 0x50)
                );
      local_8._0_1_ = 2;
      local_40 = (_Tree_comp_alloc<> *)(*(int *)(*(int *)(pSVar9 + 0x40) + 0x3c) + iVar19);
      if (Singleton<>::instance == (NetworkData *)0x0) {
        iStack_98 = 0x423a16;
        Singleton<>::instance = operator_new(1);
      }
      iStack_98 = *(int *)(*(int *)(*(int *)local_40 + 8) + 4);
      local_8 = (uint)local_8._1_3_ << 8;
      iStack_a4 = param_3;
      uStack_a0 = param_4;
      local_9c = param_5;
      NetworkData::sendSetModule();
      local_40 = (_Tree_comp_alloc<> *)(*(int *)(*(int *)(pSVar9 + 0x40) + 0x3c) + iVar19);
      pNVar12 = extraout_ECX;
      if (Singleton<>::instance == (NetworkData *)0x0) {
        Singleton<>::instance = operator_new(1);
        pNVar12 = extraout_ECX_00;
      }
      pSVar2 = *(ShipModule **)local_40;
      RVar5.g._4_4_ = param_3;
      RVar5.g._0_4_ = param_1;
      RVar5._8_4_ = param_4;
      RVar5._12_4_ = param_5;
      NetworkData::sendSetModuleBasicSettings
                (pNVar12,RVar5,*(int *)(*(int *)(pSVar2 + 8) + 4),*(int *)(pSVar2 + 0x10),pSVar2);
      local_40 = (_Tree_comp_alloc<> *)(*(int *)(*(int *)(pSVar9 + 0x40) + 0x3c) + iVar19);
      pNVar12 = extraout_ECX_01;
      if (Singleton<>::instance == (NetworkData *)0x0) {
        Singleton<>::instance = operator_new(1);
        pNVar12 = extraout_ECX_02;
      }
      pSVar2 = *(ShipModule **)local_40;
      RVar6.g._4_4_ = param_3;
      RVar6.g._0_4_ = param_1;
      RVar6._8_4_ = param_4;
      RVar6._12_4_ = param_5;
      NetworkData::sendSetModuleDetails
                (pNVar12,RVar6,*(int *)(*(int *)(pSVar2 + 8) + 4),*(int *)(pSVar2 + 0x10),pSVar2);
      if (OISConfiguration::multiDebug != false) {
        debugPrint("NETWORK","Sent module: %s, slot %d");
      }
      iVar20 = *(int *)(pSVar9 + 0x40);
      local_3c = local_3c + 1;
    } while (local_3c < (uint)(*(int *)(iVar20 + 0x40) - *(int *)(iVar20 + 0x3c) >> 2));
  }
  if (*(int *)(iVar20 + 0x20) != 0) {
    local_3c = 0;
    iVar20 = 0x3c;
    do {
      iVar19 = *(int *)(*(int *)(*(int *)(pSVar9 + 0x40) + 0x20) + iVar20);
      if (iVar19 != 0) {
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)local_68,(basic_string<> *)(*(int *)(iVar19 + 0x388) + 0x60));
        local_8._0_1_ = 3;
        if (Singleton<>::instance == (NetworkData *)0x0) {
          Singleton<>::instance = operator_new(1);
        }
        local_8._0_1_ = 4;
        local_28.systemIndex._0_1_ = (undefined1)(local_3c >> 0x18);
        local_28.g._0_4_ = 0x9b;
        local_28.g._4_4_ = local_3c << 8;
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)&stack0xffffff74,(basic_string<> *)local_68);
        safeStrCpy();
        local_38.g._0_4_ = param_1;
        local_38.g._4_4_ = param_3;
        local_38._8_4_ = param_4;
        local_38._12_4_ = param_5;
        Singleton<>::getInstance();
        pNVar10 = Singleton<>::getInstance();
        piVar3 = *(int **)(pNVar10 + 0x90);
        RakNet::AddressOrGUID::AddressOrGUID((AddressOrGUID *)&iStack_a4,&local_38);
        (**(code **)(*piVar3 + 0x50))(&local_28,0x13,1,3,0);
        local_8 = (uint)local_8._1_3_ << 8;
        pSVar9 = local_4c;
        if (0xf < local_54) {
          pnVar15 = (nothrow_t *)(local_54 + 1);
          pvVar13 = local_68[0];
          if ((nothrow_t *)0xfff < pnVar15) {
            pvVar13 = *(void **)((int)local_68[0] + -4);
            pnVar15 = (nothrow_t *)(local_54 + 0x24);
            if (0x1f < (uint)((int)local_68[0] + (-4 - (int)pvVar13))) goto LAB_00423dde;
          }
          operator_delete(pvVar13,pnVar15);
          pSVar9 = local_4c;
        }
      }
      local_3c = local_3c + 1;
      iVar20 = iVar20 + 4;
    } while (iVar20 < 0x5c);
  }
  local_3c = 0;
  iVar19 = *(int *)(*(int *)(pSVar9 + 0x254) + 0x11c) - *(int *)(*(int *)(pSVar9 + 0x254) + 0x118);
  iVar20 = iVar19 >> 0x1f;
  if (iVar19 / 0xc + iVar20 != iVar20) {
    local_40 = (_Tree_comp_alloc<> *)(pSVar9 + 0x14c);
    do {
      ppVar4 = *(piecewise_construct_t **)local_40;
      pVar1 = (*(piecewise_construct_t **)(ppVar4 + 4))[0xd];
      ppVar18 = ppVar4;
      ppVar17 = *(piecewise_construct_t **)(ppVar4 + 4);
      while (pVar1 == (piecewise_construct_t)0x0) {
        if (*(int *)(ppVar17 + 0x10) < (int)local_3c) {
          ppVar11 = *(piecewise_construct_t **)(ppVar17 + 8);
          ppVar17 = ppVar18;
        }
        else {
          ppVar11 = *(piecewise_construct_t **)ppVar17;
        }
        ppVar18 = ppVar17;
        ppVar17 = ppVar11;
        pVar1 = ppVar11[0xd];
      }
      if ((ppVar18 == ppVar4) || ((int)local_3c < *(int *)(ppVar18 + 0x10))) {
        local_50 = &local_3c;
        std::_Tree_comp_alloc<>::_Buynode<>
                  (local_40,ppVar4,(tuple<int&&> *)&local_50,(tuple<> *)ppVar4);
        std::_Tree<>::_Insert_hint<>((_Tree<> *)local_40);
        ppVar18 = local_48;
      }
      if (Singleton<>::instance == (NetworkData *)0x0) {
        Singleton<>::instance = operator_new(1);
      }
      local_38.g._4_4_ = CONCAT31((int3)local_3c,0xa0);
      local_38._9_3_ = SUB43(*(undefined4 *)(ppVar18 + 0x14),0);
      local_38.systemIndex._0_1_ = (char)(local_3c >> 0x18);
      local_38._12_1_ = SUB41((uint)*(undefined4 *)(ppVar18 + 0x14) >> 0x18,0);
      local_28.g._0_4_ = param_1;
      local_28.g._4_4_ = param_3;
      local_28._8_4_ = param_4;
      local_28._12_4_ = param_5;
      Singleton<>::getInstance();
      pNVar10 = Singleton<>::getInstance();
      piVar3 = *(int **)(pNVar10 + 0x90);
      RakNet::AddressOrGUID::AddressOrGUID((AddressOrGUID *)&iStack_a4,&local_28);
      (**(code **)(*piVar3 + 0x50))((undefined1 *)((int)&local_38.g + 4),9,1,3,0);
      local_3c = local_3c + 1;
    } while (local_3c <
             (uint)((*(int *)(*(int *)(local_4c + 0x254) + 0x11c) -
                    *(int *)(*(int *)(local_4c + 0x254) + 0x118)) / 0xc));
  }
  if (Singleton<>::instance == (NetworkData *)0x0) {
    Singleton<>::instance = operator_new(1);
  }
  local_41 = 0x89;
  local_28.g._0_4_ = param_1;
  local_28.g._4_4_ = param_3;
  local_28._8_4_ = param_4;
  local_28._12_4_ = param_5;
  Singleton<>::getInstance();
  pNVar10 = Singleton<>::getInstance();
  piVar3 = *(int **)(pNVar10 + 0x90);
  RakNet::AddressOrGUID::AddressOrGUID((AddressOrGUID *)&iStack_a4,&local_28);
  (**(code **)(*piVar3 + 0x50))(&local_41,1,1,3,0);
  if (0xf < in_stack_00000028) {
    pnVar15 = (nothrow_t *)(in_stack_00000028 + 1);
    pvVar13 = param_6;
    if ((nothrow_t *)0xfff < pnVar15) {
      pvVar13 = *(void **)((int)param_6 + -4);
      pnVar15 = (nothrow_t *)(in_stack_00000028 + 0x24);
      if (0x1f < (uint)((int)param_6 + (-4 - (int)pvVar13))) {
LAB_00423dde:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar13,pnVar15);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall NetworkServer::recheckShipsToSync(void)

void __thiscall NetworkServer::recheckShipsToSync(NetworkServer *this)

{
  ShipSyncNode *this_00;
  char ***pppcVar1;
  bool bVar2;
  char *pcVar3;
  AnimationFrames **ppAVar4;
  int *piVar5;
  int *piVar6;
  char ****ppppcVar7;
  nothrow_t *pnVar8;
  AnimationFrames **ppAVar9;
  int iVar10;
  uint uVar11;
  uint unaff_EDI;
  size_t sVar12;
  basic_string<> abStack_78 [4];
  undefined4 uStack_74;
  char ***local_50 [4];
  uint local_40;
  uint local_3c;
  int *local_38;
  AnimationFrames **local_34;
  AnimationFrames **local_30;
  int *local_2c;
  uint local_28;
  int local_24;
  AnimationFrames **local_20;
  int *local_1c;
  NetworkServer *local_18;
  int *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b3348;
  local_10 = ExceptionList;
  pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  ppAVar9 = (AnimationFrames **)0x0;
  local_1c = (int *)0x0;
  local_38 = (int *)0x0;
  local_34 = (AnimationFrames **)0x0;
  local_20 = (AnimationFrames **)0x0;
  local_30 = (AnimationFrames **)0x0;
  local_8 = 0;
  uVar11 = 0;
  iVar10 = *(int *)(this + 0x48);
  local_18 = this;
  if (*(int *)(this + 0x4c) - iVar10 >> 2 != 0) {
    do {
      std::basic_string<>::basic_string<>(abStack_78,*(basic_string<> **)(iVar10 + uVar11 * 4));
      bVar2 = shipHasConnectedClient(this);
      if (!bVar2) {
        ppAVar4 = (AnimationFrames **)(*(int *)(this + 0x48) + uVar11 * 4);
        if (local_20 == ppAVar9) {
          std::vector<>::_Emplace_reallocate<>((vector<> *)&local_38,ppAVar9,ppAVar4);
          local_20 = local_30;
          ppAVar9 = local_34;
        }
        else {
          *ppAVar9 = *ppAVar4;
          local_34 = ppAVar9 + 1;
          ppAVar9 = local_34;
        }
      }
      uVar11 = uVar11 + 1;
      iVar10 = *(int *)(this + 0x48);
    } while (uVar11 < (uint)(*(int *)(this + 0x4c) - iVar10 >> 2));
    local_1c = local_38;
  }
  iVar10 = (int)ppAVar9 - (int)local_1c >> 2;
  piVar5 = local_1c;
  local_38 = local_1c;
  local_24 = iVar10;
  if (iVar10 != 0) {
    do {
      local_24 = iVar10;
      local_14 = piVar5;
      if (OISConfiguration::multiDebug != false) {
        uStack_74 = 0x423f1d;
        debugPrint("NETWORK","No longer syncing to ship %s / %s");
      }
      local_2c = *(int **)(this + 0x4c);
      piVar5 = *(int **)(this + 0x48);
      if (piVar5 != local_2c) {
        do {
          if (*piVar5 == *local_14) break;
          piVar5 = piVar5 + 1;
        } while (piVar5 != local_2c);
        if (piVar5 != local_2c) {
          piVar6 = piVar5 + 1;
          uVar11 = 0;
          local_28 = (uint)((int)local_2c + (3 - (int)piVar6)) >> 2;
          if (local_2c < piVar6) {
            local_28 = 0;
          }
          if (local_28 != 0) {
            do {
              if (*piVar6 != *local_14) {
                *piVar5 = *piVar6;
                piVar5 = piVar5 + 1;
              }
              uVar11 = uVar11 + 1;
              piVar6 = piVar6 + 1;
              iVar10 = local_24;
            } while (uVar11 != local_28);
          }
          this = local_18;
          if (piVar5 != local_2c) {
            sVar12 = *(int *)(local_18 + 0x4c) - (int)local_2c;
            memmove(piVar5,local_2c,sVar12);
            *(size_t *)(local_18 + 0x4c) = sVar12 + (int)piVar5;
            this = local_18;
          }
        }
      }
      this_00 = (ShipSyncNode *)*local_14;
      if (this_00 != (ShipSyncNode *)0x0) {
        ShipSyncNode::~ShipSyncNode(this_00);
        operator_delete(this_00,(nothrow_t *)0x6c);
      }
      local_14 = local_14 + 1;
      iVar10 = iVar10 + -1;
      piVar5 = local_14;
    } while (iVar10 != 0);
    local_24 = 0;
  }
  iVar10 = *(int *)(this + 0x3c);
  local_18 = (NetworkServer *)0x0;
  local_34 = (AnimationFrames **)local_1c;
  if (*(int *)(this + 0x40) - iVar10 >> 2 != 0) {
    do {
      local_24 = (int)local_18 * 4;
      std::basic_string<>::basic_string<>
                ((basic_string<> *)local_50,(basic_string<> *)(*(int *)(local_24 + iVar10) + 0x48));
      pppcVar1 = local_50[0];
      uVar11 = 0;
      if (*(int *)(this + 0x4c) - *(int *)(this + 0x48) >> 2 != 0) {
        do {
          ppppcVar7 = local_50;
          if (0xf < local_3c) {
            ppppcVar7 = (char ****)pppcVar1;
          }
          bVar2 = std::_Traits_equal<>((char *)ppppcVar7,local_40,pcVar3,unaff_EDI);
          if (bVar2) {
            if (local_3c < 0x10) goto LAB_004240dc;
            pnVar8 = (nothrow_t *)(local_3c + 1);
            ppppcVar7 = (char ****)pppcVar1;
            if ((nothrow_t *)0xfff < pnVar8) {
              ppppcVar7 = (char ****)pppcVar1[-1];
              pnVar8 = (nothrow_t *)(local_3c + 0x24);
              if ((char *)0x1f < (char *)((int)pppcVar1 + (-4 - (int)ppppcVar7))) goto LAB_0042411f;
            }
            operator_delete(ppppcVar7,pnVar8);
            goto LAB_004240dc;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < (uint)(*(int *)(this + 0x4c) - *(int *)(this + 0x48) >> 2));
      }
      if (0xf < local_3c) {
        pnVar8 = (nothrow_t *)(local_3c + 1);
        ppppcVar7 = (char ****)pppcVar1;
        if ((nothrow_t *)0xfff < pnVar8) {
          ppppcVar7 = (char ****)pppcVar1[-1];
          pnVar8 = (nothrow_t *)(local_3c + 0x24);
          if ((char *)0x1f < (char *)((int)pppcVar1 + (-4 - (int)ppppcVar7))) goto LAB_0042411f;
        }
        operator_delete(ppppcVar7,pnVar8);
      }
      iVar10 = local_24;
      if (OISConfiguration::multiDebug != false) {
        debugPrint("NETWORK","Need to begin syncing to ship \'%s\'");
      }
      std::basic_string<>::basic_string<>
                (abStack_78,(basic_string<> *)(*(int *)(*(int *)(this + 0x3c) + iVar10) + 0x48));
      startSyncingShip(this);
LAB_004240dc:
      iVar10 = *(int *)(this + 0x3c);
      local_18 = (NetworkServer *)((int)local_18 + 1);
    } while (local_18 < (uint)(*(int *)(this + 0x40) - iVar10 >> 2));
  }
  if (local_1c != (int *)0x0) {
    pnVar8 = (nothrow_t *)((int)local_20 - (int)local_1c & 0xfffffffc);
    piVar5 = local_1c;
    if ((nothrow_t *)0xfff < pnVar8) {
      piVar5 = (int *)local_1c[-1];
      pnVar8 = pnVar8 + 0x23;
      if (0x1f < (uint)((int)local_1c + (-4 - (int)piVar5))) {
LAB_0042411f:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(piVar5,pnVar8);
  }
  ExceptionList = local_10;
  return;
}


// public: class ShipSyncNode * __thiscall NetworkServer::startSyncingShip(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

ShipSyncNode * __thiscall
NetworkServer::startSyncingShip(NetworkServer *this,basic_string<> *param_2)

{
  AnimationFrames **ppAVar1;
  int iVar2;
  basic_string<> *pbVar3;
  basic_string<> *pbVar4;
  Ship *pSVar5;
  HullStrength *pHVar6;
  Weapon *pWVar7;
  vector<> *extraout_ECX;
  vector<> *pvVar8;
  NetworkServer *this_00;
  vector<> *extraout_ECX_00;
  NetworkServer *this_01;
  NetworkServer *extraout_ECX_01;
  NetworkServer *pNVar9;
  NetworkServer *extraout_ECX_02;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint in_stack_00000014;
  uint in_stack_00000018;
  undefined4 uStack_40;
  basic_string<> *local_18;
  basic_string<> *local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005b3783;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pbVar3 = operator_new(0x6c);
  *(undefined4 *)(pbVar3 + 0x10) = 0;
  *(undefined4 *)(pbVar3 + 0x14) = 0xf;
  *pbVar3 = (basic_string<>)0x0;
  *(undefined4 *)(pbVar3 + 0x18) = 0;
  *(undefined4 *)(pbVar3 + 0x1c) = 0;
  *(undefined4 *)(pbVar3 + 0x20) = 0;
  *(undefined4 *)(pbVar3 + 0x24) = 0;
  *(undefined4 *)(pbVar3 + 0x28) = 0;
  *(undefined4 *)(pbVar3 + 0x2c) = 0;
  *(undefined4 *)(pbVar3 + 0x30) = 0;
  *(undefined4 *)(pbVar3 + 0x34) = 0;
  *(undefined4 *)(pbVar3 + 0x38) = 0;
  *(undefined4 *)(pbVar3 + 0x3c) = 0;
  *(undefined4 *)(pbVar3 + 0x40) = 0;
  *(undefined4 *)(pbVar3 + 0x44) = 0;
  *(undefined4 *)(pbVar3 + 0x48) = 0;
  *(undefined4 *)(pbVar3 + 0x4c) = 0;
  *(undefined4 *)(pbVar3 + 0x50) = 0;
  *(undefined4 *)(pbVar3 + 0x54) = 0;
  *(undefined4 *)(pbVar3 + 0x58) = 0;
  *(undefined4 *)(pbVar3 + 0x5c) = 0;
  *(undefined4 *)(pbVar3 + 0x60) = 0;
  *(undefined4 *)(pbVar3 + 0x68) = 0;
  local_18 = pbVar3;
  local_14 = pbVar3;
  if (pbVar3 != (basic_string<> *)&param_2) {
    pbVar4 = (basic_string<> *)&param_2;
    if (0xf < in_stack_00000018) {
      pbVar4 = param_2;
    }
    std::basic_string<>::assign(pbVar3,(char *)pbVar4,in_stack_00000014);
  }
  std::basic_string<>::basic_string<>((basic_string<> *)&uStack_40,(basic_string<> *)&param_2);
  pSVar5 = GameData::getShipWithRego();
  *(Ship **)(pbVar3 + 0x18) = pSVar5;
  if (pSVar5 == (Ship *)0x0) {
    ShipSyncNode::~ShipSyncNode((ShipSyncNode *)pbVar3);
    operator_delete(pbVar3,(nothrow_t *)0x6c);
  }
  debugPrint("MULTI","Have begun syncing ship \'%s / %s\'");
  uStack_40 = 0x4244ed;
  local_14 = operator_new(0x40);
  local_8._0_1_ = 1;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,5,2,(void *)(*(int *)(pbVar3 + 0x18) + 0x28));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 2;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,6,2,(void *)(*(int *)(pbVar3 + 0x18) + 0x30));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 3;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,7,0,(void *)(*(int *)(pbVar3 + 0x18) + 0x20));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 4;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,8,1,(void *)(*(int *)(pbVar3 + 0x18) + 0x48));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 5;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,9,1,(void *)(*(int *)(pbVar3 + 0x18) + 0x4c));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 6;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,10,0,(void *)(*(int *)(pbVar3 + 0x18) + 0x50));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 7;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0xb,1,(void *)(*(int *)(pbVar3 + 0x18) + 0x54))
  ;
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 8;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0xc,1,(void *)(*(int *)(pbVar3 + 0x18) + 0x54))
  ;
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 9;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0xd,1,(void *)(*(int *)(pbVar3 + 0x18) + 0x58))
  ;
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 10;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0xe,0,(void *)(*(int *)(pbVar3 + 0x18) + 0x60))
  ;
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0xb;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0xf,0,(void *)(*(int *)(pbVar3 + 0x18) + 0xd4))
  ;
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0xc;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x10,4,(void *)(*(int *)(pbVar3 + 0x18) + 0xd8)
                               );
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0xd;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x12,1,(void *)(*(int *)(pbVar3 + 0x18) + 0xdc)
                               );
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0xe;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x13,1,(void *)(*(int *)(pbVar3 + 0x18) + 0xe0)
                               );
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0xf;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x14,4,(void *)(*(int *)(pbVar3 + 0x18) + 0xe4)
                               );
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x10;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x15,0,(void *)(*(int *)(pbVar3 + 0x18) + 0xe8)
                               );
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x11;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x16,0,(void *)(*(int *)(pbVar3 + 0x18) + 0xec)
                               );
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x12;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x17,0,(void *)(*(int *)(pbVar3 + 0x18) + 0xf0)
                               );
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x13;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x18,1,(void *)(*(int *)(pbVar3 + 0x18) + 0xf4)
                               );
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x14;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x19,0,(void *)(*(int *)(pbVar3 + 0x18) + 0xf8)
                               );
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x15;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x1a,4,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x104));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x16;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x1b,1,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x108));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x17;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x1c,1,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x10c));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x18;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x1d,1,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x118));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x19;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x1e,1,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x11c));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x1a;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x1f,1,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x120));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x1b;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x20,1,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x128));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x1c;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x21,1,(void *)(*(int *)(pbVar3 + 0x18) + 300))
  ;
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x1d;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x22,1,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x130));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x1e;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x23,2,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x138));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x1f;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x24,2,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x140));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x20;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x25,1,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x148));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x21;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x26,4,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x168));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x22;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x27,1,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x1b8));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x23;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x28,1,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x1bc));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x24;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x29,0,(void *)(*(int *)(pbVar3 + 0x18) + 400))
  ;
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x25;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x2b,0,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x198));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x26;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x2a,0,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x1a8));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x27;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x2c,0,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x1a0));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x28;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x30,4,
                                (void *)(*(int *)(*(int *)(pbVar3 + 0x18) + 0x40) + 0x34));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x29;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x31,0,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x188));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x2a;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x32,0,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x18c));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x2b;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x33,4,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x1b0));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x2c;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x34,4,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x1b1));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x2d;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x35,0,(void *)(*(int *)(pbVar3 + 0x18) + 0xfc)
                               );
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x2e;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x36,4,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x1b2));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x2f;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x37,0,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x1b4));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x30;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x39,0,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x1d0));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x31;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x3a,0,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x1d8));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x32;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x3b,0,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x1dc));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x33;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x3c,0,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x1e0));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x34;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x3d,0,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x1e4));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x35;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x3e,0,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x1e8));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x36;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x38,0,(void *)(*(int *)(pbVar3 + 0x18) + 100))
  ;
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x37;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x3f,0,(void *)(*(int *)(pbVar3 + 0x18) + 500))
  ;
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x38;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x40,4,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x15c));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x39;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x41,1,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x160));
  local_8._0_1_ = 0;
  ppAVar1 = *(AnimationFrames ***)(pbVar3 + 0x2c);
  if (*(AnimationFrames ***)(pbVar3 + 0x30) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(pbVar3 + 0x28),ppAVar1,(AnimationFrames **)&local_14);
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(pbVar3 + 0x2c) = *(int *)(pbVar3 + 0x2c) + 4;
  }
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x3a;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x45,1,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x100));
  local_8._0_1_ = 0;
  std::vector<>::push_back((vector<> *)(pbVar3 + 0x28),(UIText **)&local_14);
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x3b;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x42,1,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x164));
  local_8._0_1_ = 0;
  std::vector<>::push_back((vector<> *)(pbVar3 + 0x28),(UIText **)&local_14);
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x3c;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x43,0,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x1ec));
  local_8._0_1_ = 0;
  std::vector<>::push_back((vector<> *)(pbVar3 + 0x28),(UIText **)&local_14);
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x3d;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x44,0,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x1f0));
  local_8._0_1_ = 0;
  std::vector<>::push_back((vector<> *)(pbVar3 + 0x28),(UIText **)&local_14);
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x3e;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x47,4,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x318));
  local_8._0_1_ = 0;
  std::vector<>::push_back((vector<> *)(pbVar3 + 0x28),(UIText **)&local_14);
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x3f;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x48,1,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x31c));
  local_8._0_1_ = 0;
  std::vector<>::push_back((vector<> *)(pbVar3 + 0x28),(UIText **)&local_14);
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x40;
  local_14 = (basic_string<> *)
             SyncNode::SyncNode((SyncNode *)local_14,0x49,0,
                                (void *)(*(int *)(pbVar3 + 0x18) + 0x1d4));
  local_8._0_1_ = 0;
  std::vector<>::push_back((vector<> *)(pbVar3 + 0x28),(UIText **)&local_14);
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x41;
  local_14 = (basic_string<> *)SyncNode::SyncNode((SyncNode *)local_14,0x4a,0,g_gameLogic + 0x180);
  local_8._0_1_ = 0;
  std::vector<>::push_back((vector<> *)(pbVar3 + 0x28),(UIText **)&local_14);
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x42;
  local_14 = (basic_string<> *)SyncNode::SyncNode((SyncNode *)local_14,0x4b,0,g_gameLogic + 0x184);
  local_8._0_1_ = 0;
  std::vector<>::push_back((vector<> *)(pbVar3 + 0x28),(UIText **)&local_14);
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x43;
  local_14 = (basic_string<> *)SyncNode::SyncNode((SyncNode *)local_14,0x4c,0,g_gameLogic + 0x188);
  local_8._0_1_ = 0;
  std::vector<>::push_back((vector<> *)(pbVar3 + 0x28),(UIText **)&local_14);
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x44;
  local_14 = (basic_string<> *)SyncNode::SyncNode((SyncNode *)local_14,0x4d,0,g_gameLogic + 0x18c);
  local_8._0_1_ = 0;
  std::vector<>::push_back((vector<> *)(pbVar3 + 0x28),(UIText **)&local_14);
  local_14 = operator_new(0x40);
  local_8._0_1_ = 0x45;
  local_14 = (basic_string<> *)SyncNode::SyncNode((SyncNode *)local_14,0x4e,0,g_gameLogic + 400);
  local_8 = (uint)local_8._1_3_ << 8;
  std::vector<>::push_back((vector<> *)(pbVar3 + 0x28),(UIText **)&local_14);
  std::vector<>::push_back((vector<> *)(this + 0x48),(UIText **)&local_18);
  pbVar3 = local_18;
  uVar11 = 0;
  pNVar9 = *(NetworkServer **)(local_18 + 0x18);
  iVar13 = *(int *)(*(int *)(pNVar9 + 0x40) + 0x3c);
  if (*(int *)(*(int *)(pNVar9 + 0x40) + 0x40) - iVar13 >> 2 != 0) {
    do {
      startSyncingModuleState(pNVar9,(ShipSyncNode *)pbVar3,*(ShipModule **)(iVar13 + uVar11 * 4));
      pNVar9 = *(NetworkServer **)(pbVar3 + 0x18);
      uVar11 = uVar11 + 1;
      iVar13 = *(int *)(*(int *)(pNVar9 + 0x40) + 0x3c);
    } while (uVar11 < (uint)(*(int *)(*(int *)(pNVar9 + 0x40) + 0x40) - iVar13 >> 2));
  }
  uVar11 = 0;
  iVar13 = *(int *)(pNVar9 + 0x214);
  if (*(int *)(pNVar9 + 0x218) - iVar13 >> 2 != 0) {
    do {
      startSyncingSensorDataState
                (pNVar9,(ShipSyncNode *)pbVar3,*(SensorData **)(iVar13 + uVar11 * 4));
      pNVar9 = *(NetworkServer **)(pbVar3 + 0x18);
      uVar11 = uVar11 + 1;
      iVar13 = *(int *)(pNVar9 + 0x214);
    } while (uVar11 < (uint)(*(int *)(pNVar9 + 0x218) - iVar13 >> 2));
  }
  uVar12 = 0;
  uVar11 = std::vector<>::size((vector<> *)(*(int *)(pNVar9 + 0x254) + 0x118));
  pvVar8 = extraout_ECX;
  if (uVar11 != 0) {
    do {
      pHVar6 = std::vector<>::operator[](pvVar8,uVar12);
      startSyncingHullState(this_00,(ShipSyncNode *)pbVar3,*(int *)pHVar6);
      uVar12 = uVar12 + 1;
      uVar11 = std::vector<>::size((vector<> *)(*(int *)(*(int *)(pbVar3 + 0x18) + 0x254) + 0x118));
      pvVar8 = extraout_ECX_00;
    } while (uVar12 < uVar11);
  }
  startSyncingCargoState((NetworkServer *)pvVar8,(ShipSyncNode *)pbVar3);
  startSyncingWaypoints(this_01,(ShipSyncNode *)pbVar3);
  iVar10 = 0;
  iVar13 = 0x3c;
  pNVar9 = extraout_ECX_01;
  do {
    iVar2 = *(int *)(*(int *)(*(int *)(pbVar3 + 0x18) + 0x40) + 0x20);
    if (iVar2 == 0) {
      pWVar7 = (Weapon *)0x0;
    }
    else {
      pWVar7 = *(Weapon **)(iVar13 + iVar2);
    }
    startSyncingWeapon(pNVar9,(ShipSyncNode *)pbVar3,iVar10,pWVar7);
    iVar13 = iVar13 + 4;
    iVar10 = iVar10 + 1;
    pNVar9 = extraout_ECX_02;
  } while (iVar13 < 0x5c);
  word::~word((word *)&param_2);
  ExceptionList = local_10;
  return (ShipSyncNode *)pbVar3;
}


// public: void __thiscall NetworkServer::addOrRemoveComponent(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class ShipModule *,int)

void __thiscall NetworkServer::addOrRemoveComponent(NetworkServer *this,char *param_2)

{
  undefined4 *puVar1;
  ShipModule *pSVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  RakNetGUID *this_00;
  nothrow_t *pnVar7;
  char *pcVar8;
  uint unaff_EDI;
  uint uVar9;
  uint in_stack_00000014;
  uint in_stack_00000018;
  ShipModule *in_stack_0000001c;
  int in_stack_00000020;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pSVar2 = in_stack_0000001c;
  puStack_c = &DAT_005b37a8;
  local_10 = ExceptionList;
  pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  uVar9 = 0;
  iVar6 = *(int *)(this + 0x3c);
  pcVar8 = param_2;
  if (*(int *)(this + 0x40) - iVar6 >> 2 != 0) {
    do {
      puVar1 = (undefined4 *)(iVar6 + uVar9 * 4);
      this_00 = (RakNetGUID *)*puVar1;
      pcVar5 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar5 = pcVar8;
      }
      bVar3 = std::_Traits_equal<>(pcVar5,in_stack_00000014,pcVar4,unaff_EDI);
      if (bVar3) {
        if (Singleton<>::instance == (NetworkData *)0x0) {
          Singleton<>::instance = operator_new(1);
          this_00 = (RakNetGUID *)*puVar1;
        }
        NetworkData::sendSetComponent((NetworkData *)this_00,*this_00,pSVar2,in_stack_00000020);
        pcVar8 = param_2;
      }
      uVar9 = uVar9 + 1;
      iVar6 = *(int *)(this + 0x3c);
    } while (uVar9 < (uint)(*(int *)(this + 0x40) - iVar6 >> 2));
  }
  if (0xf < in_stack_00000018) {
    pnVar7 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar4 = pcVar8;
    if ((nothrow_t *)0xfff < pnVar7) {
      pcVar4 = *(char **)(pcVar8 + -4);
      pnVar7 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < pcVar8 + (-4 - (int)pcVar4)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar4,pnVar7);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall NetworkServer::removeWeapon(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class Weapon *)

void __thiscall NetworkServer::removeWeapon(NetworkServer *this,int param_2,char *param_3)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  nothrow_t *pnVar6;
  uint uVar7;
  uint uVar8;
  uint unaff_EDI;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b37d8;
  local_10 = ExceptionList;
  pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  iVar5 = *(int *)(this + 0x48);
  local_14 = 0;
  if (*(int *)(this + 0x4c) - iVar5 >> 2 != 0) {
    do {
      iVar5 = *(int *)(local_14 * 4 + iVar5);
      pcVar3 = (char *)&param_3;
      if (0xf < in_stack_0000001c) {
        pcVar3 = param_3;
      }
      bVar1 = std::_Traits_equal<>(pcVar3,in_stack_00000018,pcVar2,unaff_EDI);
      if (bVar1) {
        uVar8 = 0;
        piVar4 = *(int **)(iVar5 + 0x40);
        uVar7 = *(int *)(iVar5 + 0x44) - (int)piVar4 >> 2;
        if (uVar7 != 0) {
          do {
            if (*(int *)(*piVar4 + 4) == param_2) {
              if (OISConfiguration::multiDebug != false) {
                piVar4 = *(int **)(param_2 + 0x254);
                pcVar3 = (char *)&param_3;
                if (0xf < in_stack_0000001c) {
                  pcVar3 = param_3;
                }
                if (0xf < (uint)piVar4[5]) {
                  piVar4 = (int *)*piVar4;
                }
                debugPrint("NETWORK","Stopped sync\'ing weapon \'%s\' for ship %s",piVar4,pcVar3);
              }
              *(undefined4 *)
               (*(int *)(*(int *)(*(int *)(local_14 * 4 + *(int *)(this + 0x48)) + 0x40) + uVar8 * 4
                        ) + 4) = 0;
              break;
            }
            uVar8 = uVar8 + 1;
            piVar4 = piVar4 + 1;
          } while (uVar8 < uVar7);
        }
      }
      local_14 = local_14 + 1;
      iVar5 = *(int *)(this + 0x48);
    } while (local_14 < (uint)(*(int *)(this + 0x4c) - iVar5 >> 2));
  }
  if (0xf < in_stack_0000001c) {
    pnVar6 = (nothrow_t *)(in_stack_0000001c + 1);
    pcVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar6) {
      pcVar2 = *(char **)(param_3 + -4);
      pnVar6 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if ((char *)0x1f < param_3 + (-4 - (int)pcVar2)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar2,pnVar6);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall NetworkServer::stopSyncingModule(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class ShipModule *)

void __thiscall NetworkServer::stopSyncingModule(NetworkServer *this,int param_2,char *param_3)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  undefined4 *puVar4;
  char *pcVar5;
  nothrow_t *pnVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  uint unaff_EDI;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b37d8;
  local_10 = ExceptionList;
  pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  iVar9 = *(int *)(this + 0x48);
  local_14 = 0;
  pcVar5 = param_3;
  if (*(int *)(this + 0x4c) - iVar9 >> 2 != 0) {
    do {
      iVar1 = *(int *)(iVar9 + local_14 * 4);
      pcVar7 = (char *)&param_3;
      if (0xf < in_stack_0000001c) {
        pcVar7 = pcVar5;
      }
      bVar2 = std::_Traits_equal<>(pcVar7,in_stack_00000018,pcVar3,unaff_EDI);
      if ((bVar2) &&
         (uVar8 = 0, pcVar5 = param_3, *(int *)(iVar1 + 0x20) - *(int *)(iVar1 + 0x1c) >> 2 != 0)) {
        do {
          if (**(int **)(*(int *)(*(int *)(iVar9 + local_14 * 4) + 0x1c) + uVar8 * 4) == param_2) {
            if (OISConfiguration::multiDebug != false) {
              pcVar5 = (char *)&param_3;
              if (0xf < in_stack_0000001c) {
                pcVar5 = param_3;
              }
              puVar4 = (undefined4 *)(*(int *)(param_2 + 8) + 8);
              if (0xf < *(uint *)(*(int *)(param_2 + 8) + 0x1c)) {
                puVar4 = (undefined4 *)*puVar4;
              }
              debugPrint("NETWORK","Stopped sync\'ing module \'%s\' for ship %s",puVar4,pcVar5);
              iVar9 = *(int *)(this + 0x48);
            }
            **(undefined4 **)(*(int *)(*(int *)(iVar9 + local_14 * 4) + 0x1c) + uVar8 * 4) = 0;
          }
          uVar8 = uVar8 + 1;
          iVar9 = *(int *)(this + 0x48);
          iVar1 = *(int *)(iVar9 + local_14 * 4);
          pcVar5 = param_3;
        } while (uVar8 < (uint)(*(int *)(iVar1 + 0x20) - *(int *)(iVar1 + 0x1c) >> 2));
      }
      local_14 = local_14 + 1;
    } while (local_14 < (uint)(*(int *)(this + 0x4c) - iVar9 >> 2));
  }
  if (0xf < in_stack_0000001c) {
    pnVar6 = (nothrow_t *)(in_stack_0000001c + 1);
    pcVar3 = pcVar5;
    if ((nothrow_t *)0xfff < pnVar6) {
      pcVar3 = *(char **)(pcVar5 + -4);
      pnVar6 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if ((char *)0x1f < pcVar5 + (-4 - (int)pcVar3)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar3,pnVar6);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall NetworkServer::startSyncingCargoState(class ShipSyncNode *)

void __thiscall NetworkServer::startSyncingCargoState(NetworkServer *this,ShipSyncNode *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined4 **)(param_1 + 0x68) = puVar1;
  puVar1[3] = *(undefined4 *)(param_1 + 0x18);
  CargoState::setState(*(CargoState **)(param_1 + 0x68));
  if (OISConfiguration::multiDebug != false) {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x18) + 8);
    if (0xf < *(uint *)(*(int *)(param_1 + 0x18) + 0x1c)) {
      puVar1 = (undefined4 *)*puVar1;
    }
    debugPrint("NETWORK","Starting syncing cargo for ship %s",puVar1);
  }
  return;
}


// public: void __thiscall NetworkServer::startSyncingWaypoints(class ShipSyncNode *)

void __thiscall NetworkServer::startSyncingWaypoints(NetworkServer *this,ShipSyncNode *param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  
  bVar2 = OISConfiguration::multiDebug;
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 100) = iVar1;
  if (bVar2) {
    piVar3 = (int *)(iVar1 + 8);
    if (0xf < *(uint *)(iVar1 + 0x1c)) {
      piVar3 = (int *)*piVar3;
    }
    debugPrint("NETWORK","Starting syncing waypoints for ship %s",piVar3);
  }
  return;
}


// public: void __thiscall NetworkServer::startSyncingModuleState(class ShipSyncNode *,class
// ShipModule *)

void __thiscall
NetworkServer::startSyncingModuleState
          (NetworkServer *this,ShipSyncNode *param_1,ShipModule *param_2)

{
  basic_string<> *this_00;
  AnimationFrames **ppAVar1;
  ShipModule *pSVar2;
  AnimationFrames *pAVar3;
  basic_string<> *pbVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  NetworkServer *local_8;
  
  local_8 = this;
  pAVar3 = operator_new(0x70);
  memset(pAVar3,0,0x70);
  pSVar2 = param_2;
  this_00 = (basic_string<> *)(pAVar3 + 0xc);
  *(undefined4 *)(pAVar3 + 0x1c) = 0;
  *(undefined4 *)(pAVar3 + 0x20) = 0xf;
  *this_00 = (basic_string<>)0x0;
  *(undefined4 *)(pAVar3 + 0x58) = 0;
  *(undefined4 *)(pAVar3 + 0x5c) = 0;
  *(undefined4 *)(pAVar3 + 0x60) = 0;
  *(undefined4 *)(pAVar3 + 100) = 0;
  *(undefined4 *)(pAVar3 + 0x68) = 0;
  *(undefined4 *)(pAVar3 + 0x6c) = 0;
  *(ShipModule **)pAVar3 = param_2;
  *(undefined4 *)(pAVar3 + 4) = *(undefined4 *)(*(int *)(param_2 + 8) + 4);
  *(undefined4 *)(pAVar3 + 8) = *(undefined4 *)(param_2 + 0x10);
  iVar7 = *(int *)(param_2 + 8);
  pbVar4 = (basic_string<> *)(iVar7 + 0x50);
  local_8 = (NetworkServer *)pAVar3;
  if (this_00 != pbVar4) {
    if (0xf < *(uint *)(iVar7 + 100)) {
      pbVar4 = *(basic_string<> **)pbVar4;
    }
    std::basic_string<>::assign(this_00,(char *)pbVar4,*(uint *)(iVar7 + 0x60));
  }
  *(undefined4 *)(pAVar3 + 0x24) = *(undefined4 *)(pSVar2 + 0x5c);
  pAVar3[0x28] = *(AnimationFrames *)(pSVar2 + 0x60);
  pAVar3[0x29] = *(AnimationFrames *)(pSVar2 + 0x61);
  pAVar3[0x2a] = *(AnimationFrames *)(pSVar2 + 0x62);
  pAVar3[0x2b] = *(AnimationFrames *)(pSVar2 + 99);
  *(undefined4 *)(pAVar3 + 0x30) = *(undefined4 *)(pSVar2 + 0x34);
  *(undefined4 *)(pAVar3 + 0x2c) = *(undefined4 *)(pSVar2 + 100);
  *(undefined4 *)(pAVar3 + 0x38) = *(undefined4 *)(pSVar2 + 0x68);
  pAVar3[0x40] = *(AnimationFrames *)(pSVar2 + 0x1c);
  pAVar3[0x41] = *(AnimationFrames *)(pSVar2 + 0x1d);
  *(undefined4 *)(pAVar3 + 0x34) = *(undefined4 *)(pSVar2 + 0x38);
  pAVar3[0x46] = *(AnimationFrames *)(pSVar2 + 0x14);
  pAVar3[0x42] = *(AnimationFrames *)(pSVar2 + 0x1e);
  pAVar3[0x43] = *(AnimationFrames *)(pSVar2 + 0x1f);
  pAVar3[0x44] = *(AnimationFrames *)(pSVar2 + 0x20);
  pAVar3[0x45] = *(AnimationFrames *)(pSVar2 + 0x21);
  *(undefined4 *)(pAVar3 + 0x48) = *(undefined4 *)(pSVar2 + 0x24);
  *(undefined4 *)(pAVar3 + 0x4c) = *(undefined4 *)(pSVar2 + 0x28);
  pAVar3[0x50] = *(AnimationFrames *)(pSVar2 + 0x2c);
  *(undefined4 *)(pAVar3 + 0x54) = *(undefined4 *)(pSVar2 + 0x30);
  ppAVar1 = *(AnimationFrames ***)(param_1 + 0x20);
  if (*(AnimationFrames ***)(param_1 + 0x24) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>
              ((vector<> *)(param_1 + 0x1c),ppAVar1,(AnimationFrames **)&local_8);
    pAVar3 = (AnimationFrames *)local_8;
  }
  else {
    *ppAVar1 = pAVar3;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 4;
  }
  if (OISConfiguration::multiDebug != false) {
    puVar5 = (undefined4 *)(*(int *)(*(int *)pAVar3 + 8) + 8);
    if (0xf < *(uint *)(*(int *)(*(int *)pAVar3 + 8) + 0x1c)) {
      puVar5 = (undefined4 *)*puVar5;
    }
    debugPrint("NETWORK","Syncing module: %s",puVar5);
  }
  iVar7 = 0;
  do {
    iVar6 = *(int *)(pSVar2 + 0xc);
    if (*(int *)(iVar6 + 4 + iVar7 * 4) != 0) {
      param_2 = operator_new(0x18);
      *(undefined4 *)param_2 = 0;
      *(undefined4 *)(param_2 + 4) = 0;
      *(undefined4 *)(param_2 + 8) = 0;
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined4 *)param_2 = *(undefined4 *)(*(int *)(pSVar2 + 8) + 4);
      *(int *)(param_2 + 8) = iVar7;
      *(undefined4 *)(param_2 + 0xc) =
           **(undefined4 **)(*(int *)(*(int *)(pSVar2 + 0xc) + 4 + iVar7 * 4) + 4);
      *(int *)(param_2 + 0x10) = (int)**(float **)(*(int *)(pSVar2 + 0xc) + 4 + iVar7 * 4);
      *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(*(int *)(pSVar2 + 0xc) + 4 + iVar7 * 4);
      ppAVar1 = *(AnimationFrames ***)(pAVar3 + 0x5c);
      if (*(AnimationFrames ***)(pAVar3 + 0x60) == ppAVar1) {
        std::vector<>::_Emplace_reallocate<>
                  ((vector<> *)(pAVar3 + 0x58),ppAVar1,(AnimationFrames **)&param_2);
      }
      else {
        *ppAVar1 = (AnimationFrames *)param_2;
        *(int *)(pAVar3 + 0x5c) = *(int *)(pAVar3 + 0x5c) + 4;
      }
      if (OISConfiguration::multiDebug != false) {
        iVar6 = *(int *)(*(int *)(*(int *)(pSVar2 + 0xc) + 4 + iVar7 * 4) + 4);
        puVar5 = (undefined4 *)(iVar6 + 0x38);
        if (0xf < *(uint *)(iVar6 + 0x4c)) {
          puVar5 = (undefined4 *)*puVar5;
        }
        debugPrint("NETWORK","Syncing slot %d of module with %s",iVar7,puVar5);
      }
      iVar6 = *(int *)(pSVar2 + 0xc);
    }
    if (*(int *)(iVar6 + 0x54 + iVar7 * 4) != 0) {
      param_2 = operator_new(0x18);
      *(undefined4 *)param_2 = 0;
      *(undefined4 *)(param_2 + 4) = 0;
      *(undefined4 *)(param_2 + 8) = 0;
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined4 *)param_2 = *(undefined4 *)(*(int *)(pSVar2 + 8) + 4);
      *(int *)(param_2 + 8) = iVar7;
      *(undefined4 *)(param_2 + 0xc) =
           **(undefined4 **)(*(int *)(*(int *)(pSVar2 + 0xc) + 0x54 + iVar7 * 4) + 4);
      *(int *)(param_2 + 0x10) = (int)**(float **)(*(int *)(pSVar2 + 0xc) + 0x54 + iVar7 * 4);
      *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(*(int *)(pSVar2 + 0xc) + 0x54 + iVar7 * 4);
      ppAVar1 = *(AnimationFrames ***)(pAVar3 + 0x68);
      if (*(AnimationFrames ***)(pAVar3 + 0x6c) == ppAVar1) {
        std::vector<>::_Emplace_reallocate<>
                  ((vector<> *)(pAVar3 + 100),ppAVar1,(AnimationFrames **)&param_2);
      }
      else {
        *ppAVar1 = (AnimationFrames *)param_2;
        *(int *)(pAVar3 + 0x68) = *(int *)(pAVar3 + 0x68) + 4;
      }
      if (OISConfiguration::multiDebug != false) {
        iVar6 = *(int *)(*(int *)(*(int *)(pSVar2 + 0xc) + 0x54 + iVar7 * 4) + 4);
        puVar5 = (undefined4 *)(iVar6 + 0x38);
        if (0xf < *(uint *)(iVar6 + 0x4c)) {
          puVar5 = (undefined4 *)*puVar5;
        }
        debugPrint("NETWORK","Syncing addon slot %d of module with %s",iVar7,puVar5);
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x14);
  return;
}


// public: void __thiscall NetworkServer::startSyncingHullState(class ShipSyncNode *,int)

void __thiscall
NetworkServer::startSyncingHullState(NetworkServer *this,ShipSyncNode *param_1,int param_2)

{
  AnimationFrames **ppAVar1;
  AnimationFrames *pAVar2;
  int *piVar3;
  AnimationFrames *local_c [2];
  
  pAVar2 = operator_new(0xc);
  *(undefined8 *)pAVar2 = 0;
  *(undefined4 *)(pAVar2 + 8) = 0;
  *(undefined4 *)(pAVar2 + 8) = *(undefined4 *)(param_1 + 0x18);
  *(int *)pAVar2 = param_2;
  local_c[0] = pAVar2;
  piVar3 = std::map<>::operator[]((map<> *)(*(int *)(param_1 + 0x18) + 0x14c),&param_2);
  *(int *)(pAVar2 + 4) = *piVar3;
  ppAVar1 = *(AnimationFrames ***)(param_1 + 0x50);
  if (*(AnimationFrames ***)(param_1 + 0x54) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>((vector<> *)(param_1 + 0x4c),ppAVar1,local_c);
    pAVar2 = local_c[0];
  }
  else {
    *ppAVar1 = pAVar2;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 4;
  }
  if (OISConfiguration::multiDebug != false) {
    debugPrint("NETWORK","Syncing hull state \'%d\', starting at \'%d\'",param_2,
               *(undefined4 *)(pAVar2 + 4));
  }
  return;
}


// public: void __thiscall NetworkServer::startSyncingServerInfoState(void)

void __thiscall NetworkServer::startSyncingServerInfoState(NetworkServer *this)

{
  AnimationFrames **ppAVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  AnimationFrames *pAVar5;
  undefined1 *puVar6;
  uint uVar7;
  NetworkServer *pNVar8;
  basic_string<> *pbVar9;
  word *pwVar10;
  GameData *pGVar11;
  void *pvVar12;
  int *piVar13;
  int iVar14;
  nothrow_t *pnVar15;
  uint uVar16;
  word *this_00;
  basic_string<> *local_68;
  basic_string<> *local_64;
  AnimationFrames *local_60;
  basic_string<> *local_5c;
  uint local_58;
  void *local_54 [4];
  undefined4 local_44;
  uint local_40;
  void *local_3c [4];
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &DAT_005b3819;
  local_1c = ExceptionList;
  uVar7 = ___security_cookie ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_58 = 0;
  local_24 = uVar7;
  puVar6 = &stack0xfffffffc;
  if ((basic_string<> *)(this + 0x54) != (basic_string<> *)this) {
    pNVar8 = this;
    if (0xf < *(uint *)(this + 0x14)) {
      pNVar8 = *(NetworkServer **)this;
    }
    std::basic_string<>::assign
              ((basic_string<> *)(this + 0x54),(char *)pNVar8,*(uint *)(this + 0x10));
    puVar6 = puStack_20;
  }
  puStack_20 = puVar6;
  pGVar11 = g_gameData;
  *(int *)(this + 0x6c) = *(int *)(this + 0x40) - *(int *)(this + 0x3c) >> 2;
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(this + 0x28);
  piVar13 = (int *)(*(int *)(pGVar11 + 0xcc) + 0x78);
  local_60 = (AnimationFrames *)0x0;
  uVar16 = 0;
  if (*(int *)(*(int *)(pGVar11 + 0xcc) + 0x7c) - *piVar13 >> 2 != 0) {
    do {
      pAVar5 = local_60;
      if (*(int *)(*(int *)(*piVar13 + (int)local_60 * 4) + 0xe8) == 0) {
        local_64 = operator_new(0x68);
        memset(local_64,0,0x68);
        pGVar11 = g_gameData;
        local_5c = local_64 + 0x18;
        local_68 = local_64;
        *(undefined4 *)(local_64 + 0x14) = 0xf;
        *(undefined4 *)(local_64 + 0x28) = 0;
        *(undefined4 *)(local_64 + 0x2c) = 0xf;
        *local_5c = (basic_string<>)0x0;
        *(undefined4 *)(local_64 + 0x40) = 0;
        *(undefined4 *)(local_64 + 0x44) = 0xf;
        local_64[0x30] = (basic_string<>)0x0;
        *(undefined4 *)(local_64 + 0x58) = 0;
        *(undefined4 *)(local_64 + 0x5c) = 0xf;
        local_64[0x48] = (basic_string<>)0x0;
        iVar14 = *(int *)(*(int *)(*(int *)(pGVar11 + 0xcc) + 0x78) + (int)pAVar5 * 4);
        pbVar9 = (basic_string<> *)(iVar14 + 4);
        if (local_64 != pbVar9) {
          if (0xf < *(uint *)(iVar14 + 0x18)) {
            pbVar9 = *(basic_string<> **)pbVar9;
          }
          std::basic_string<>::assign(local_64,(char *)pbVar9,*(uint *)(iVar14 + 0x14));
          pGVar11 = g_gameData;
        }
        iVar14 = *(int *)(*(int *)(*(int *)(pGVar11 + 0xcc) + 0x78) + (int)pAVar5 * 4);
        pbVar9 = (basic_string<> *)(iVar14 + 0x1c);
        if (local_5c != pbVar9) {
          if (0xf < *(uint *)(iVar14 + 0x30)) {
            pbVar9 = *(basic_string<> **)pbVar9;
          }
          std::basic_string<>::assign(local_5c,(char *)pbVar9,*(uint *)(iVar14 + 0x2c));
          pGVar11 = g_gameData;
        }
        *(undefined4 *)(local_64 + 100) =
             *(undefined4 *)
              (*(int *)(*(int *)(*(int *)(pGVar11 + 0xcc) + 0x78) + (int)pAVar5 * 4) + 0xd4);
        ppAVar1 = *(AnimationFrames ***)(this + 0x7c);
        if (*(AnimationFrames ***)(this + 0x80) == ppAVar1) {
          std::vector<>::_Emplace_reallocate<>
                    ((vector<> *)(this + 0x78),ppAVar1,(AnimationFrames **)&local_68);
          pGVar11 = g_gameData;
        }
        else {
          *ppAVar1 = (AnimationFrames *)local_64;
          *(int *)(this + 0x7c) = *(int *)(this + 0x7c) + 4;
        }
      }
      local_60 = local_60 + 1;
      piVar13 = (int *)(*(int *)(pGVar11 + 0xcc) + 0x78);
      uVar16 = local_58;
    } while (local_60 <
             (AnimationFrames *)(*(int *)(*(int *)(pGVar11 + 0xcc) + 0x7c) - *piVar13 >> 2));
  }
  local_5c = (basic_string<> *)0x0;
  if (*(int *)(this + 0x40) - *(int *)(this + 0x3c) >> 2 != 0) {
    do {
      local_60 = operator_new(0x34);
      memset(local_60,0,0x34);
      local_68 = (basic_string<> *)local_60;
      *(undefined4 *)(local_60 + 0x14) = 0xf;
      *(undefined4 *)(local_60 + 0x28) = 0;
      *(undefined4 *)(local_60 + 0x2c) = 0xf;
      *(basic_string<> *)(local_60 + 0x18) = (basic_string<>)0x0;
      iVar14 = *(int *)(this + 0x3c);
      iVar2 = *(int *)(iVar14 + (int)local_5c * 4);
      pbVar9 = (basic_string<> *)(iVar2 + 0x28);
      if (local_60 != (AnimationFrames *)pbVar9) {
        if (0xf < *(uint *)(iVar2 + 0x3c)) {
          pbVar9 = *(basic_string<> **)pbVar9;
        }
        std::basic_string<>::assign
                  ((basic_string<> *)local_60,(char *)pbVar9,*(uint *)(iVar2 + 0x38));
        iVar14 = *(int *)(this + 0x3c);
      }
      local_60[0x30] = *(AnimationFrames *)(*(int *)(iVar14 + (int)local_5c * 4) + 0x42);
      local_60[0x31] =
           *(AnimationFrames *)(*(int *)(*(int *)(this + 0x3c) + (int)local_5c * 4) + 0x41);
      iVar14 = *(int *)(*(int *)(*(int *)(this + 0x3c) + (int)local_5c * 4) + 100);
      if (iVar14 == 0) {
        local_2c = 0;
        local_28 = 0xf;
        local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
        std::basic_string<>::assign((basic_string<> *)local_3c,"",0);
        pwVar10 = (word *)local_3c;
        local_58 = uVar16 | 2;
      }
      else {
        pwVar10 = (word *)std::basic_string<>::basic_string<>
                                    ((basic_string<> *)local_54,(basic_string<> *)(iVar14 + 0x238));
        local_14 = 0;
        local_58 = uVar16 | 1;
      }
      pAVar5 = local_60;
      this_00 = (word *)(local_60 + 0x18);
      if (this_00 != pwVar10) {
        word::~word(this_00);
        pvVar12 = *(void **)(pwVar10 + 4);
        pvVar3 = *(void **)(pwVar10 + 8);
        pvVar4 = *(void **)(pwVar10 + 0xc);
        *(void **)this_00 = *(void **)pwVar10;
        *(void **)(pAVar5 + 0x1c) = pvVar12;
        *(void **)(pAVar5 + 0x20) = pvVar3;
        *(void **)(pAVar5 + 0x24) = pvVar4;
        pvVar12 = *(void **)(pwVar10 + 0x14);
        *(void **)(pAVar5 + 0x28) = *(void **)(pwVar10 + 0x10);
        *(void **)(pAVar5 + 0x2c) = pvVar12;
        *(void **)(pwVar10 + 0x10) = (void *)0x0;
        *(void **)(pwVar10 + 0x14) = (void *)0xf;
        *pwVar10 = (word)0x0;
      }
      if (((local_58 & 2) != 0) && (local_58 = local_58 & 0xfffffffd, 0xf < local_28)) {
        pnVar15 = (nothrow_t *)(local_28 + 1);
        pvVar12 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar15) {
          pvVar12 = *(void **)((int)local_3c[0] + -4);
          pnVar15 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar12))) goto LAB_00426523;
        }
        operator_delete(pvVar12,pnVar15);
      }
      local_14 = 0xffffffff;
      if ((local_58 & 1) != 0) {
        local_58 = local_58 & 0xfffffffe;
        if (0xf < local_40) {
          pnVar15 = (nothrow_t *)(local_40 + 1);
          pvVar12 = local_54[0];
          if ((nothrow_t *)0xfff < pnVar15) {
            pvVar12 = *(void **)((int)local_54[0] + -4);
            pnVar15 = (nothrow_t *)(local_40 + 0x24);
            if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar12))) {
LAB_00426523:
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar12,pnVar15);
        }
        local_44 = 0;
        local_40 = 0xf;
        local_54[0] = (void *)((uint)local_54[0] & 0xffffff00);
      }
      ppAVar1 = *(AnimationFrames ***)(this + 0x88);
      if (*(AnimationFrames ***)(this + 0x8c) == ppAVar1) {
        std::vector<>::_Emplace_reallocate<>
                  ((vector<> *)(this + 0x84),ppAVar1,(AnimationFrames **)&local_68);
      }
      else {
        *ppAVar1 = local_60;
        *(int *)(this + 0x88) = *(int *)(this + 0x88) + 4;
      }
      local_5c = (basic_string<> *)((int)local_5c + 1);
      uVar16 = local_58;
    } while (local_5c < (uint)(*(int *)(this + 0x40) - *(int *)(this + 0x3c) >> 2));
  }
  if (OISConfiguration::multiDebug != false) {
    debugPrint("NETWORK","Syncing server state",uVar7);
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// public: void __thiscall NetworkServer::startSyncingWeapon(class ShipSyncNode *,int,class Weapon
// *)

void __thiscall
NetworkServer::startSyncingWeapon
          (NetworkServer *this,ShipSyncNode *param_1,int param_2,Weapon *param_3)

{
  basic_string<> *this_00;
  AnimationFrames **ppAVar1;
  AnimationFrames *pAVar2;
  basic_string<> *pbVar3;
  basic_string<> *pbVar4;
  int iVar5;
  AnimationFrames *this_01;
  char *pcVar6;
  uint uVar7;
  NetworkServer *local_8;
  
  local_8 = this;
  pAVar2 = operator_new(0x7c);
  local_8 = (NetworkServer *)pAVar2;
  memset(pAVar2,0,0x7c);
  pbVar4 = (basic_string<> *)(pAVar2 + 0xc);
  this_00 = (basic_string<> *)(pAVar2 + 0x2c);
  *(undefined4 *)(pAVar2 + 0x1c) = 0;
  this_01 = pAVar2 + 0x44;
  *(undefined4 *)(pAVar2 + 0x20) = 0xf;
  *pbVar4 = (basic_string<>)0x0;
  *(undefined4 *)(pAVar2 + 0x24) = 0;
  *(undefined4 *)(pAVar2 + 0x28) = 0;
  *(undefined4 *)(pAVar2 + 0x3c) = 0;
  *(undefined4 *)(pAVar2 + 0x40) = 0xf;
  *this_00 = (basic_string<>)0x0;
  *(undefined4 *)(pAVar2 + 0x54) = 0;
  *(undefined4 *)(pAVar2 + 0x58) = 0xf;
  *this_01 = (AnimationFrames)0x0;
  *(Weapon **)(pAVar2 + 4) = param_3;
  *(int *)(pAVar2 + 8) = param_2;
  *(undefined4 *)pAVar2 = *(undefined4 *)(param_1 + 0x18);
  if (param_3 == (Weapon *)0x0) {
    pcVar6 = "";
    uVar7 = 0;
    this_01 = (AnimationFrames *)pbVar4;
    local_8 = (NetworkServer *)pAVar2;
  }
  else {
    iVar5 = *(int *)(param_3 + 0x254);
    pbVar3 = (basic_string<> *)(iVar5 + 0x60);
    local_8 = (NetworkServer *)pAVar2;
    if (pbVar4 != pbVar3) {
      if (0xf < *(uint *)(iVar5 + 0x74)) {
        pbVar3 = *(basic_string<> **)pbVar3;
      }
      std::basic_string<>::assign(pbVar4,(char *)pbVar3,*(uint *)(iVar5 + 0x70));
    }
    *(undefined4 *)(pAVar2 + 0x24) = *(undefined4 *)(*(int *)(pAVar2 + 4) + 0x390);
    *(undefined4 *)(pAVar2 + 0x28) = *(undefined4 *)(*(int *)(pAVar2 + 4) + 0x394);
    iVar5 = *(int *)(pAVar2 + 4);
    *(undefined4 *)(pAVar2 + 0x6c) = *(undefined4 *)(iVar5 + 0x41c);
    pbVar4 = (basic_string<> *)(iVar5 + 0x400);
    if (this_00 != pbVar4) {
      if (0xf < *(uint *)(iVar5 + 0x414)) {
        pbVar4 = *(basic_string<> **)pbVar4;
      }
      std::basic_string<>::assign(this_00,(char *)pbVar4,*(uint *)(iVar5 + 0x410));
      iVar5 = *(int *)(pAVar2 + 4);
    }
    *(undefined4 *)(pAVar2 + 0x60) = *(undefined4 *)(iVar5 + 0x3b8);
    pAVar2[100] = *(AnimationFrames *)(*(int *)(pAVar2 + 4) + 0x3bc);
    *(undefined4 *)(pAVar2 + 0x68) = *(undefined4 *)(*(int *)(pAVar2 + 4) + 0x3c0);
    *(undefined4 *)(pAVar2 + 0x5c) = *(undefined4 *)(*(int *)(pAVar2 + 4) + 0x3d0);
    pAVar2[0x70] = *(AnimationFrames *)(*(int *)(pAVar2 + 4) + 0x3c4);
    pAVar2[0x71] = *(AnimationFrames *)(*(int *)(pAVar2 + 4) + 0x3c5);
    pAVar2[0x72] = *(AnimationFrames *)(*(int *)(pAVar2 + 4) + 0x3fc);
    *(undefined4 *)(pAVar2 + 0x74) = *(undefined4 *)(*(int *)(pAVar2 + 4) + 0x418);
    *(undefined4 *)(pAVar2 + 0x78) = *(undefined4 *)(*(int *)(pAVar2 + 4) + 0x420);
    iVar5 = *(int *)(pAVar2 + 4);
    pcVar6 = (char *)(iVar5 + 0x3a0);
    if (this_01 == (AnimationFrames *)pcVar6) goto LAB_004266eb;
    if (0xf < *(uint *)(iVar5 + 0x3b4)) {
      pcVar6 = *(char **)pcVar6;
    }
    uVar7 = *(uint *)(iVar5 + 0x3b0);
  }
  std::basic_string<>::assign((basic_string<> *)this_01,pcVar6,uVar7);
LAB_004266eb:
  ppAVar1 = *(AnimationFrames ***)(param_1 + 0x44);
  if (*(AnimationFrames ***)(param_1 + 0x48) != ppAVar1) {
    *ppAVar1 = pAVar2;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
    return;
  }
  std::vector<>::_Emplace_reallocate<>
            ((vector<> *)(param_1 + 0x40),ppAVar1,(AnimationFrames **)&local_8);
  return;
}


// public: void __thiscall NetworkServer::startSyncingSensorDataState(class ShipSyncNode *,class
// SensorData *)

void __thiscall
NetworkServer::startSyncingSensorDataState
          (NetworkServer *this,ShipSyncNode *param_1,SensorData *param_2)

{
  vector<> *this_00;
  AnimationFrames **ppAVar1;
  MetaGameAction **ppMVar2;
  AnimationFrames *pAVar3;
  SensorData *pSVar4;
  AnimationFrames *this_01;
  AnimationFrames **ppAVar5;
  MetaGameAction **ppMVar6;
  int iVar7;
  basic_string<> *pbVar8;
  SensorData *pSVar9;
  AnimationFrames *pAVar10;
  uint uVar11;
  AnimationFrames *local_2c;
  AnimationFrames *local_28;
  AnimationFrames *local_24;
  AnimationFrames *local_20;
  AnimationFrames *local_1c;
  AnimationFrames *local_18;
  AnimationFrames *local_14;
  AnimationFrames *local_10;
  basic_string<> *local_c;
  AnimationFrames *local_8;
  
  pSVar4 = param_2;
  local_8 = operator_new(0x148);
  memset(local_8,0,0x148);
  pAVar3 = local_8;
  *(undefined4 *)(local_8 + 0x5c) = 0;
  local_c = (basic_string<> *)(local_8 + 0x4c);
  *(undefined4 *)(local_8 + 0x60) = 0xf;
  local_10 = local_8 + 100;
  *local_c = (basic_string<>)0x0;
  this_00 = (vector<> *)(local_8 + 0x118);
  *(undefined4 *)(local_8 + 0x74) = 0;
  pAVar10 = local_8 + 0x130;
  *(undefined4 *)(local_8 + 0x78) = 0xf;
  *local_10 = (AnimationFrames)0x0;
  *(undefined4 *)(local_8 + 0x8c) = 0;
  *(undefined4 *)(local_8 + 0x90) = 0xf;
  local_8[0x7c] = (AnimationFrames)0x0;
  *(undefined4 *)(local_8 + 0xa4) = 0;
  *(undefined4 *)(local_8 + 0xa8) = 0xf;
  local_8[0x94] = (AnimationFrames)0x0;
  *(undefined4 *)(local_8 + 0xbc) = 0;
  *(undefined4 *)(local_8 + 0xc0) = 0xf;
  local_8[0xac] = (AnimationFrames)0x0;
  *(undefined4 *)(local_8 + 0xd4) = 0;
  *(undefined4 *)(local_8 + 0xd8) = 0xf;
  local_8[0xc4] = (AnimationFrames)0x0;
  local_14 = local_8 + 0x7c;
  local_18 = local_8 + 0x94;
  *(undefined4 *)(local_8 + 0x10c) = 0;
  *(undefined4 *)(local_8 + 0x110) = 0;
  *(undefined4 *)(local_8 + 0x114) = 0;
  local_1c = local_8 + 0xac;
  *(undefined4 *)this_00 = 0;
  *(undefined4 *)(local_8 + 0x11c) = 0;
  *(undefined4 *)(local_8 + 0x120) = 0;
  *(undefined4 *)(local_8 + 0x124) = 0;
  *(undefined4 *)(local_8 + 0x128) = 0;
  *(undefined4 *)(local_8 + 300) = 0;
  local_20 = local_8 + 0xc4;
  *(undefined4 *)(local_8 + 0xec) = 0;
  *(undefined4 *)(local_8 + 0xf0) = 0;
  *(undefined4 *)pAVar10 = 0;
  *(undefined4 *)(local_8 + 0x134) = 0;
  *(undefined4 *)(local_8 + 0x138) = 0;
  local_24 = local_8 + 0x10c;
  *(undefined4 *)(local_8 + 4) = *(undefined4 *)param_2;
  *(SensorData **)local_8 = param_2;
  *(undefined4 *)(local_8 + 8) = *(undefined4 *)(param_2 + 0x124);
  *(undefined4 *)(local_8 + 0x140) = *(undefined4 *)(param_2 + 300);
  *(undefined8 *)(local_8 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(local_8 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(local_8 + 0x38) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(local_8 + 0x3c) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(local_8 + 0x40) = *(undefined4 *)(param_2 + 0x38);
  local_2c = local_8;
  *(undefined4 *)(local_8 + 0x44) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(local_8 + 0x48) = *(undefined4 *)(param_2 + 0x40);
  pbVar8 = (basic_string<> *)(param_2 + 0x48);
  *(undefined8 *)(local_8 + 0x30) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(local_8 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  local_28 = pAVar10;
  if (local_c != pbVar8) {
    if (0xf < *(uint *)(param_2 + 0x5c)) {
      pbVar8 = *(basic_string<> **)pbVar8;
    }
    std::basic_string<>::assign(local_c,(char *)pbVar8,*(uint *)(param_2 + 0x58));
  }
  pSVar9 = param_2 + 0x60;
  if (local_10 != (AnimationFrames *)pSVar9) {
    if (0xf < *(uint *)(param_2 + 0x74)) {
      pSVar9 = *(SensorData **)pSVar9;
    }
    std::basic_string<>::assign((basic_string<> *)local_10,(char *)pSVar9,*(uint *)(param_2 + 0x70))
    ;
  }
  pSVar9 = param_2 + 0x78;
  if (local_14 != (AnimationFrames *)pSVar9) {
    if (0xf < *(uint *)(param_2 + 0x8c)) {
      pSVar9 = *(SensorData **)pSVar9;
    }
    std::basic_string<>::assign((basic_string<> *)local_14,(char *)pSVar9,*(uint *)(param_2 + 0x88))
    ;
  }
  pSVar9 = param_2 + 0x90;
  if (local_18 != (AnimationFrames *)pSVar9) {
    if (0xf < *(uint *)(param_2 + 0xa4)) {
      pSVar9 = *(SensorData **)pSVar9;
    }
    std::basic_string<>::assign((basic_string<> *)local_18,(char *)pSVar9,*(uint *)(param_2 + 0xa0))
    ;
  }
  pSVar9 = param_2 + 0xa8;
  if (local_1c != (AnimationFrames *)pSVar9) {
    if (0xf < *(uint *)(param_2 + 0xbc)) {
      pSVar9 = *(SensorData **)pSVar9;
    }
    std::basic_string<>::assign((basic_string<> *)local_1c,(char *)pSVar9,*(uint *)(param_2 + 0xb8))
    ;
  }
  pSVar9 = param_2 + 0xc0;
  if (local_20 != (AnimationFrames *)pSVar9) {
    if (0xf < *(uint *)(param_2 + 0xd4)) {
      pSVar9 = *(SensorData **)pSVar9;
    }
    std::basic_string<>::assign((basic_string<> *)local_20,(char *)pSVar9,*(uint *)(param_2 + 0xd0))
    ;
  }
  this_01 = local_24;
  *(undefined4 *)(local_8 + 0xdc) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(local_8 + 0xec) = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(local_8 + 0xf0) = *(undefined4 *)(param_2 + 0x108);
  local_8[0xf4] = *(AnimationFrames *)(param_2 + 0x10c);
  local_8[0xf5] = *(AnimationFrames *)(param_2 + 0x10f);
  local_8[0xf6] = *(AnimationFrames *)(param_2 + 0x10e);
  local_8[0xf7] = *(AnimationFrames *)(param_2 + 0x10d);
  local_8[0xf9] = *(AnimationFrames *)(param_2 + 0x111);
  local_8[0xf8] = *(AnimationFrames *)(param_2 + 0x110);
  local_8[0xfa] = *(AnimationFrames *)(param_2 + 0x112);
  *(undefined4 *)(local_8 + 0xfc) = *(undefined4 *)(param_2 + 0x11c);
  *(undefined4 *)(local_8 + 0x13c) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)(local_8 + 0x140) = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)(local_8 + 0x104) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(local_8 + 0xe4) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(local_8 + 0xe0) = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(local_8 + 0xe8) = *(undefined4 *)(param_2 + 0x114);
  local_8[0xfb] = *(AnimationFrames *)(param_2 + 0x45);
  local_8[0x108] = *(AnimationFrames *)(param_2 + 0x120);
  local_8[0x109] = *(AnimationFrames *)(param_2 + 0x121);
  local_8[0x10a] = *(AnimationFrames *)(param_2 + 0x122);
  pSVar9 = param_2 + 0xf0;
  iVar7 = *(int *)(param_2 + 0xec);
  param_2 = (SensorData *)0x0;
  if (*(int *)pSVar9 - iVar7 >> 3 != 0) {
    do {
      local_24 = (AnimationFrames *)((int)param_2 * 8);
      ppAVar1 = *(AnimationFrames ***)(this_01 + 4);
      if (*(AnimationFrames ***)(this_01 + 8) == ppAVar1) {
        std::vector<>::_Emplace_reallocate<>
                  ((vector<> *)this_01,ppAVar1,(AnimationFrames **)(local_24 + iVar7 + 4));
      }
      else {
        pAVar10 = *(AnimationFrames **)(local_24 + iVar7 + 4);
        *(int *)(this_01 + 4) = *(int *)(this_01 + 4) + 4;
        *ppAVar1 = pAVar10;
      }
      ppMVar2 = *(MetaGameAction ***)(pAVar3 + 0x11c);
      if (*(MetaGameAction ***)(pAVar3 + 0x120) == ppMVar2) {
        std::vector<>::_Emplace_reallocate<>
                  (this_00,ppMVar2,(MetaGameAction **)(local_24 + *(int *)(pSVar4 + 0xec)));
      }
      else {
        *ppMVar2 = *(MetaGameAction **)(local_24 + *(int *)(pSVar4 + 0xec));
        *(int *)(pAVar3 + 0x11c) = *(int *)(pAVar3 + 0x11c) + 4;
      }
      iVar7 = *(int *)(pSVar4 + 0xec);
      param_2 = param_2 + 1;
      pAVar10 = local_28;
    } while (param_2 < (SensorData *)(*(int *)(pSVar4 + 0xf0) - iVar7 >> 3));
  }
  uVar11 = 0;
  iVar7 = *(int *)(pSVar4 + 0xf8);
  if (*(int *)(pSVar4 + 0xfc) - iVar7 >> 3 != 0) {
    do {
      ppAVar5 = (AnimationFrames **)(uVar11 * 8 + iVar7 + 4);
      ppAVar1 = *(AnimationFrames ***)(local_8 + 0x128);
      if (*(AnimationFrames ***)(local_8 + 300) == ppAVar1) {
        std::vector<>::_Emplace_reallocate<>((vector<> *)(local_8 + 0x124),ppAVar1,ppAVar5);
      }
      else {
        pAVar3 = *ppAVar5;
        *(int *)(local_8 + 0x128) = *(int *)(local_8 + 0x128) + 4;
        *ppAVar1 = pAVar3;
      }
      ppMVar6 = (MetaGameAction **)(*(int *)(pSVar4 + 0xf8) + uVar11 * 8);
      ppMVar2 = *(MetaGameAction ***)(pAVar10 + 4);
      if (*(MetaGameAction ***)(pAVar10 + 8) == ppMVar2) {
        std::vector<>::_Emplace_reallocate<>((vector<> *)pAVar10,ppMVar2,ppMVar6);
      }
      else {
        *ppMVar2 = *ppMVar6;
        *(int *)(pAVar10 + 4) = *(int *)(pAVar10 + 4) + 4;
      }
      uVar11 = uVar11 + 1;
      iVar7 = *(int *)(pSVar4 + 0xf8);
    } while (uVar11 < (uint)(*(int *)(pSVar4 + 0xfc) - iVar7 >> 3));
  }
  ppAVar1 = *(AnimationFrames ***)(param_1 + 0x38);
  if (*(AnimationFrames ***)(param_1 + 0x3c) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>((vector<> *)(param_1 + 0x34),ppAVar1,&local_2c);
  }
  else {
    *ppAVar1 = local_8;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 4;
  }
  if (OISConfiguration::multiDebug != false) {
    debugPrint("NETWORK","Syncing sensor data: %d",*(undefined4 *)pSVar4);
  }
  return;
}


// public: void __thiscall NetworkServer::runLogic(float)

void __thiscall NetworkServer::runLogic(NetworkServer *this,float param_1)

{
  undefined4 uVar1;
  RakNetGUID RVar2;
  RakNetGUID RVar3;
  RakNetGUID RVar4;
  RakNetGUID RVar5;
  RakNetGUID RVar6;
  RakNetGUID RVar7;
  RakNetGUID RVar8;
  undefined4 uVar9;
  GameLogic *pGVar10;
  GameData *pGVar11;
  uint uVar12;
  NetworkServer *pNVar13;
  undefined4 *puVar14;
  int iVar15;
  NetworkServer *this_00;
  NetworkServer *pNVar16;
  char cVar17;
  undefined4 extraout_ECX;
  NetworkData *this_01;
  undefined4 extraout_ECX_00;
  char *pcVar18;
  void *pvVar19;
  NetworkData *extraout_ECX_01;
  NetworkData *extraout_ECX_02;
  NetworkData *extraout_ECX_03;
  NetworkData *extraout_ECX_04;
  NetworkData *extraout_ECX_05;
  NetworkData *extraout_ECX_06;
  NetworkData *extraout_ECX_07;
  uint uVar20;
  undefined4 extraout_ECX_08;
  int *piVar21;
  GameLogic *this_02;
  nothrow_t *pnVar22;
  int *piVar23;
  uint uVar24;
  bool bVar25;
  float fVar26;
  float in_XMM1_Da;
  basic_string<> abStack_b0 [4];
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  uint uStack_98;
  undefined1 uVar27;
  char *pcVar28;
  uint local_6c;
  RakNetGUID *local_64;
  undefined1 local_5d;
  NetworkServer *local_5c;
  void *local_58 [4];
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [8];
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined1 local_2c [4];
  RakNetGUID local_28;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b38ae;
  local_10 = ExceptionList;
  uVar12 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_5c = this;
  local_14 = uVar12;
  if (*(int *)(this + 0x24) != -1) {
    DAT_0065e55c = (SystemAddress *)(**(code **)(**(int **)(this + 0x90) + 0x5c))();
    uVar9 = extraout_ECX;
    while (DAT_0065e55c != (SystemAddress *)0x0) {
      this_01 = (NetworkData *)CONCAT31((int3)((uint)uVar9 >> 8),OISConfiguration::multiDebug);
      DAT_0065e558 = (uint)**(byte **)&DAT_0065e55c[2].field_0x8;
      if (OISConfiguration::multiDebug != false) {
        debugPrint("NETWORK","PACKET INCOMING: ID %d");
        this_01 = (NetworkData *)
                  CONCAT31((int3)((uint)extraout_ECX_00 >> 8),OISConfiguration::multiDebug);
      }
      cVar17 = (char)this_01;
      switch(DAT_0065e558) {
      case 0x13:
        if (cVar17 != '\0') {
          uVar20 = (uint)DAT_0065e444;
          DAT_0065e444 = DAT_0065e444 + 1;
          RakNet::RakNetGUID::ToString
                    ((RakNetGUID *)&DAT_0065e55c[1].field_0x4,&DAT_00662560 + (uVar20 & 7) * 0x40);
          uVar20 = (uint)DAT_0065e445;
          DAT_0065e445 = DAT_0065e445 + 1;
          RakNet::SystemAddress::ToString
                    (DAT_0065e55c,true,&DAT_00662760 + (uVar20 & 7) * 0x1c,(char)(uVar20 & 7));
          debugPrint("NETWORK","ID_NEW_INCOMING_CONNECTION from %s with GUID %s\n");
        }
        _printf("Remote internal IDs:\n");
        iVar15 = 0;
        do {
          uStack_98 = *(uint *)DAT_0065e55c;
          (**(code **)(**(int **)(local_5c + 0x90) + 0xbc))();
          if (local_40._2_2_ == DAT_006576ae) {
            if ((local_40._0_2_ == 2) && (local_40._4_4_ == DAT_006576b0)) {
              bVar25 = true;
            }
            else {
              bVar25 = false;
            }
            if (!bVar25) goto LAB_00426dad;
            bVar25 = true;
          }
          else {
LAB_00426dad:
            bVar25 = false;
          }
          if (!bVar25) {
            uVar20 = (uint)DAT_0065e445;
            DAT_0065e445 = DAT_0065e445 + 1;
            RakNet::SystemAddress::ToString
                      ((SystemAddress *)local_40,true,&DAT_00662760 + (uVar20 & 7) * 0x1c,
                       (char)(uVar20 & 7));
            _printf("%i. %s\n",iVar15 + 1,&DAT_00662760 + (uVar20 & 7) * 0x1c);
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < 10);
        uVar20 = (uint)DAT_0065e445;
        DAT_0065e445 = DAT_0065e445 + 1;
        iVar15 = (uVar20 & 7) * 0x1c;
        pcVar28 = &DAT_00662760 + iVar15;
        RakNet::SystemAddress::ToString(DAT_0065e55c,true,pcVar28,(char)(uVar20 & 7));
        uStack_98 = uStack_98 & 0xffffff00;
        pcVar18 = pcVar28;
        do {
          cVar17 = *pcVar18;
          pcVar18 = pcVar18 + 1;
        } while (cVar17 != '\0');
        std::basic_string<>::assign
                  ((basic_string<> *)&uStack_98,pcVar28,(int)pcVar18 - (int)(&DAT_00662761 + iVar15)
                  );
        this = local_5c;
        uStack_a8._0_2_ = *(ushort *)&DAT_0065e55c[1].field_0x4;
        uStack_a8._2_2_ = *(undefined2 *)&DAT_0065e55c[1].field_0x6;
        uStack_ac._0_2_ = 0x6e7e;
        uStack_ac._2_2_ = 0x42;
        addClientInfo(local_5c);
        local_40._4_4_ = *(undefined4 *)&DAT_0065e55c[1].field_0x4;
        iStack_38 = *(int *)&DAT_0065e55c[1].field_0x8;
        iStack_34 = *(int *)&DAT_0065e55c[1].field_0xc;
        iStack_30._0_2_ = DAT_0065e55c[1].debugPort;
        iStack_30._2_2_ = DAT_0065e55c[1].systemIndex;
        uVar20 = (uint)DAT_0065e444;
        DAT_0065e444 = DAT_0065e444 + 1;
        local_28.g._0_4_ = local_40._4_4_;
        local_28.g._4_4_ = iStack_38;
        local_28._8_4_ = iStack_34;
        local_28._12_4_ = iStack_30;
        RakNet::RakNetGUID::ToString(&local_28,&DAT_00662560 + (uVar20 & 7) * 0x40);
        debugPrint("MULTI","Sending scenario identifier to client %s");
        if (Singleton<>::instance == (NetworkData *)0x0) {
          Singleton<>::instance = operator_new(1);
        }
        local_2c[0] = 0x8b;
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)&uStack_98,*(basic_string<> **)(g_gameData + 0xcc));
        safeStrCpy();
        Singleton<>::getInstance();
        pNVar13 = Singleton<>::getInstance();
        piVar21 = *(int **)(pNVar13 + 0x90);
        RakNet::AddressOrGUID::AddressOrGUID
                  ((AddressOrGUID *)abStack_b0,(RakNetGUID *)(local_40 + 4));
        (**(code **)(*piVar21 + 0x50))(local_2c,0x15);
        uVar20 = 0;
        local_28.g._0_4_ = *(int *)&DAT_0065e55c[1].field_0x4;
        local_28.g._4_4_ = *(int *)&DAT_0065e55c[1].field_0x8;
        local_28._8_4_ = *(undefined4 *)&DAT_0065e55c[1].field_0xc;
        local_28._12_2_ = DAT_0065e55c[1].debugPort;
        local_28._14_2_ = DAT_0065e55c[1].systemIndex;
        piVar21 = *(int **)(this + 0x3c);
        uVar24 = *(int *)(this + 0x40) - (int)piVar21 >> 2;
        if (uVar24 != 0) {
          do {
            if ((*(int *)*piVar21 == (int)local_28.g) && (((int *)*piVar21)[1] == local_28.g._4_4_))
            {
              bVar25 = true;
            }
            else {
              bVar25 = false;
            }
            this = local_5c;
            if (bVar25) {
              local_64 = *(RakNetGUID **)(*(int *)(local_5c + 0x3c) + uVar20 * 4);
              goto LAB_00426f9b;
            }
            uVar20 = uVar20 + 1;
            piVar21 = piVar21 + 1;
          } while (uVar20 < uVar24);
        }
        local_64 = (RakNetGUID *)0x0;
LAB_00426f9b:
        puVar14 = operator_new(0x3c);
        memset(puVar14,0,0x3c);
        pGVar11 = g_gameData;
        bVar25 = OISConfiguration::multiDebug != false;
        *puVar14 = *(undefined4 *)(*(int *)(g_gameData + 0xcc) + 0x388);
        puVar14[3] = *(undefined4 *)(*(int *)(pGVar11 + 0xcc) + 0x394);
        puVar14[6] = *(undefined4 *)(*(int *)(pGVar11 + 0xcc) + 0x3a0);
        puVar14[9] = *(undefined4 *)(*(int *)(pGVar11 + 0xcc) + 0x3ac);
        puVar14[0xc] = *(undefined4 *)(*(int *)(pGVar11 + 0xcc) + 0x3b8);
        puVar14[1] = *(undefined4 *)(*(int *)(pGVar11 + 0xcc) + 0x38c);
        puVar14[4] = *(undefined4 *)(*(int *)(pGVar11 + 0xcc) + 0x398);
        puVar14[7] = *(undefined4 *)(*(int *)(pGVar11 + 0xcc) + 0x3a4);
        puVar14[10] = *(undefined4 *)(*(int *)(pGVar11 + 0xcc) + 0x3b0);
        puVar14[0xd] = *(undefined4 *)(*(int *)(pGVar11 + 0xcc) + 0x3bc);
        puVar14[2] = *(undefined4 *)(*(int *)(pGVar11 + 0xcc) + 0x390);
        puVar14[5] = *(undefined4 *)(*(int *)(pGVar11 + 0xcc) + 0x39c);
        puVar14[8] = *(undefined4 *)(*(int *)(pGVar11 + 0xcc) + 0x3a8);
        puVar14[0xb] = *(undefined4 *)(*(int *)(pGVar11 + 0xcc) + 0x3b4);
        puVar14[0xe] = *(undefined4 *)(*(int *)(pGVar11 + 0xcc) + 0x3c0);
        *(undefined4 **)&local_64[6].systemIndex = puVar14;
        if (bVar25) {
          uVar20 = (uint)DAT_0065e444;
          DAT_0065e444 = DAT_0065e444 + 1;
          RakNet::RakNetGUID::ToString(local_64,&DAT_00662560 + (uVar20 & 7) * 0x40);
          debugPrint("NETWORK","Syncing scenario state with %s");
        }
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)&stack0xffffff44,(basic_string<> *)(this + 0x54));
        local_8 = 0;
        std::vector<>::vector<>((vector<> *)&uStack_98,(vector<> *)(this + 0x78));
        local_8 = CONCAT31(local_8._1_3_,1);
        std::vector<>::vector<>((vector<> *)&stack0xffffff74,(vector<> *)(this + 0x84));
        local_8 = 2;
        if (Singleton<>::instance == (NetworkData *)0x0) {
          Singleton<>::instance = operator_new(1);
        }
        uVar9._0_2_ = DAT_0065e55c[1].debugPort;
        uVar9._2_2_ = DAT_0065e55c[1].systemIndex;
        local_8 = 0xffffffff;
        NetworkData::sendServerInfoBasic
                  ((NetworkData *)DAT_0065e55c,*(undefined4 *)&DAT_0065e55c[1].field_0x4,
                   *(undefined4 *)&DAT_0065e55c[1].field_0x8,
                   *(undefined4 *)&DAT_0065e55c[1].field_0xc,uVar9);
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)&stack0xffffff44,(basic_string<> *)(this + 0x54));
        local_8 = 3;
        std::vector<>::vector<>((vector<> *)&uStack_98,(vector<> *)(this + 0x78));
        local_8 = CONCAT31(local_8._1_3_,4);
        std::vector<>::vector<>((vector<> *)&stack0xffffff74,(vector<> *)(this + 0x84));
        local_8 = 5;
        if (Singleton<>::instance == (NetworkData *)0x0) {
          Singleton<>::instance = operator_new(1);
        }
        uVar1._0_2_ = DAT_0065e55c[1].debugPort;
        uVar1._2_2_ = DAT_0065e55c[1].systemIndex;
        local_8 = 0xffffffff;
        NetworkData::sendServerInfoAdvanced
                  ((NetworkData *)DAT_0065e55c,*(undefined4 *)&DAT_0065e55c[1].field_0x4,
                   *(undefined4 *)&DAT_0065e55c[1].field_0x8,
                   *(undefined4 *)&DAT_0065e55c[1].field_0xc,uVar1);
        break;
      default:
        uVar20 = (uint)DAT_0065e445;
        DAT_0065e445 = DAT_0065e445 + 1;
        RakNet::SystemAddress::ToString
                  (DAT_0065e55c,true,&DAT_00662760 + (uVar20 & 7) * 0x1c,(char)(uVar20 & 7));
        debugPrint("ERROR","Unknown packet from %s");
        break;
      case 0x15:
        uVar20 = (uint)DAT_0065e445;
        DAT_0065e445 = DAT_0065e445 + 1;
        RakNet::SystemAddress::ToString
                  (DAT_0065e55c,true,&DAT_00662760 + (uVar20 & 7) * 0x1c,(char)(uVar20 & 7));
        debugPrint("MULTI","Disconnect notification from client %s");
        uVar20 = 0;
        local_28.g._0_4_ = *(int *)&DAT_0065e55c[1].field_0x4;
        local_28.g._4_4_ = *(int *)&DAT_0065e55c[1].field_0x8;
        local_28._8_4_ = *(undefined4 *)&DAT_0065e55c[1].field_0xc;
        local_28._12_2_ = DAT_0065e55c[1].debugPort;
        local_28._14_2_ = DAT_0065e55c[1].systemIndex;
        piVar21 = *(int **)(this + 0x3c);
        uVar24 = *(int *)(this + 0x40) - (int)piVar21 >> 2;
        if (uVar24 != 0) {
          do {
            if ((*(int *)*piVar21 == (int)local_28.g) && (((int *)*piVar21)[1] == local_28.g._4_4_))
            {
              bVar25 = true;
            }
            else {
              bVar25 = false;
            }
            this = local_5c;
            if (bVar25) {
              iVar15 = *(int *)(*(int *)(local_5c + 0x3c) + uVar20 * 4);
              goto LAB_0042729b;
            }
            uVar20 = uVar20 + 1;
            piVar21 = piVar21 + 1;
          } while (uVar20 < uVar24);
        }
        iVar15 = 0;
LAB_0042729b:
        local_48 = 0;
        local_44 = 0xf;
        local_58[0] = (void *)((uint)local_58[0] & 0xffffff00);
        local_8 = 6;
        if (iVar15 == 0) {
          uVar20 = 9;
          pcVar28 = "[unknown]";
LAB_004272e4:
          std::basic_string<>::assign((basic_string<> *)local_58,pcVar28,uVar20);
        }
        else {
          pcVar28 = (char *)(iVar15 + 0x28);
          if (local_58 != (void **)pcVar28) {
            if (0xf < *(uint *)(iVar15 + 0x3c)) {
              pcVar28 = *(char **)pcVar28;
            }
            uVar20 = *(uint *)(iVar15 + 0x38);
            goto LAB_004272e4;
          }
        }
        RVar2.g = *(__uint64 *)&DAT_0065e55c[1].field_0x4;
        RVar2.systemIndex = *(ushort *)&DAT_0065e55c[1].field_0xc;
        RVar2._10_2_ = *(undefined2 *)&DAT_0065e55c[1].field_0xe;
        RVar2._12_2_ = DAT_0065e55c[1].debugPort;
        RVar2._14_2_ = DAT_0065e55c[1].systemIndex;
        removeClientInfo(this,RVar2);
        uStack_a8._0_2_ = 0x7321;
        uStack_a8._2_2_ = 0x42;
        strUsingArgs((char *)&uStack_98);
        local_8._0_1_ = 7;
        abStack_b0[0] = (basic_string<>)0x0;
        std::basic_string<>::assign(abStack_b0,"system",6);
        local_8._0_1_ = 8;
        if (Singleton<>::instance == (NetworkData *)0x0) {
          Singleton<>::instance = operator_new(1);
        }
        local_8 = CONCAT31(local_8._1_3_,6);
        NetworkData::sendChatLineFromServer();
        local_8 = 0xffffffff;
        if (0xf < local_44) {
          pnVar22 = (nothrow_t *)(local_44 + 1);
          pvVar19 = local_58[0];
          if ((nothrow_t *)0xfff < pnVar22) {
            pvVar19 = *(void **)((int)local_58[0] + -4);
            pnVar22 = (nothrow_t *)(local_44 + 0x24);
            if (0x1f < (uint)((int)local_58[0] + (-4 - (int)pvVar19))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar19,pnVar22);
        }
        local_48 = 0;
        local_44 = 0xf;
        local_58[0] = (void *)((uint)local_58[0] & 0xffffff00);
        break;
      case 0x86:
        if (Singleton<>::instance == (NetworkData *)0x0) {
          Singleton<>::instance = operator_new(1);
          this_01 = extraout_ECX_01;
        }
        RVar3.g = *(__uint64 *)&DAT_0065e55c[1].field_0x4;
        RVar3.systemIndex = *(ushort *)&DAT_0065e55c[1].field_0xc;
        RVar3._10_2_ = *(undefined2 *)&DAT_0065e55c[1].field_0xe;
        RVar3._12_2_ = DAT_0065e55c[1].debugPort;
        RVar3._14_2_ = DAT_0065e55c[1].systemIndex;
        uStack_98 = 0x4273f3;
        NetworkData::unpackDataRequest
                  (this_01,RVar3,*(Packet_DataRequest **)&DAT_0065e55c[2].field_0x8);
        break;
      case 0x87:
        if (Singleton<>::instance == (NetworkData *)0x0) {
          Singleton<>::instance = operator_new(1);
          this_01 = extraout_ECX_03;
        }
        RVar5.g = *(__uint64 *)&DAT_0065e55c[1].field_0x4;
        RVar5.systemIndex = *(ushort *)&DAT_0065e55c[1].field_0xc;
        RVar5._10_2_ = *(undefined2 *)&DAT_0065e55c[1].field_0xe;
        RVar5._12_2_ = DAT_0065e55c[1].debugPort;
        RVar5._14_2_ = DAT_0065e55c[1].systemIndex;
        uStack_98 = 0x427461;
        NetworkData::unpackSetClientInfo
                  (this_01,RVar5,*(Packet_SetClientInfo **)&DAT_0065e55c[2].field_0x8);
        break;
      case 0x88:
        break;
      case 0x8a:
        debugPrint("MULTI","Client going live.");
        break;
      case 0x90:
        if (cVar17 != '\0') {
          debugPrint("NETWORK","ID_RUN_COMMAND");
          this_01 = extraout_ECX_06;
        }
        if (Singleton<>::instance == (NetworkData *)0x0) {
          Singleton<>::instance = operator_new(1);
          this_01 = extraout_ECX_07;
        }
        RVar8.g = *(__uint64 *)&DAT_0065e55c[1].field_0x4;
        RVar8.systemIndex = *(ushort *)&DAT_0065e55c[1].field_0xc;
        RVar8._10_2_ = *(undefined2 *)&DAT_0065e55c[1].field_0xe;
        RVar8._12_2_ = DAT_0065e55c[1].debugPort;
        RVar8._14_2_ = DAT_0065e55c[1].systemIndex;
        uStack_98 = 0x42758f;
        NetworkData::unpackRunCommand
                  (this_01,RVar8,*(Packet_RunCommand **)&DAT_0065e55c[2].field_0x8);
        break;
      case 0xa3:
        if (cVar17 != '\0') {
          uVar20 = (uint)DAT_0065e444;
          DAT_0065e444 = DAT_0065e444 + 1;
          RakNet::RakNetGUID::ToString
                    ((RakNetGUID *)&DAT_0065e55c[1].field_0x4,&DAT_00662560 + (uVar20 & 7) * 0x40);
          debugPrint("NETWORK","Message received from client %s");
          this_01 = extraout_ECX_04;
        }
        if (Singleton<>::instance == (NetworkData *)0x0) {
          Singleton<>::instance = operator_new(1);
          this_01 = extraout_ECX_05;
        }
        RVar6.g = *(__uint64 *)&DAT_0065e55c[1].field_0x4;
        RVar6.systemIndex = *(ushort *)&DAT_0065e55c[1].field_0xc;
        RVar6._10_2_ = *(undefined2 *)&DAT_0065e55c[1].field_0xe;
        RVar6._12_2_ = DAT_0065e55c[1].debugPort;
        RVar6._14_2_ = DAT_0065e55c[1].systemIndex;
        uStack_98 = 0x4274dc;
        NetworkData::unpackReceiveMessageFromClient
                  (this_01,RVar6,*(Packet_SendMessage **)&DAT_0065e55c[2].field_0x8);
        break;
      case 0xa4:
        if (Singleton<>::instance == (NetworkData *)0x0) {
          Singleton<>::instance = operator_new(1);
          this_01 = extraout_ECX_02;
        }
        RVar4.g = *(__uint64 *)&DAT_0065e55c[1].field_0x4;
        RVar4.systemIndex = *(ushort *)&DAT_0065e55c[1].field_0xc;
        RVar4._10_2_ = *(undefined2 *)&DAT_0065e55c[1].field_0xe;
        RVar4._12_2_ = DAT_0065e55c[1].debugPort;
        RVar4._14_2_ = DAT_0065e55c[1].systemIndex;
        uStack_98 = 0x42742a;
        NetworkData::unpackServerAdmin
                  (this_01,RVar4,*(Packet_ServerAdmin **)&DAT_0065e55c[2].field_0x8);
        break;
      case 0xa6:
        debugPrint("MULTI","ID_SET_GO_LIVE received");
        if (Singleton<>::instance == (NetworkData *)0x0) {
          Singleton<>::instance = operator_new(1);
        }
        RVar7.g = *(__uint64 *)&DAT_0065e55c[1].field_0x4;
        RVar7.systemIndex = *(ushort *)&DAT_0065e55c[1].field_0xc;
        RVar7._10_2_ = *(undefined2 *)&DAT_0065e55c[1].field_0xe;
        RVar7._12_2_ = DAT_0065e55c[1].debugPort;
        RVar7._14_2_ = DAT_0065e55c[1].systemIndex;
        uStack_98 = 0x42753c;
        NetworkData::unpackSetGoLiveState
                  ((NetworkData *)DAT_0065e55c,RVar7,
                   *(Packet_SetGoLiveState **)&DAT_0065e55c[2].field_0x8);
      }
      (**(code **)(**(int **)(this + 0x90) + 0x60))();
      DAT_0065e55c = (SystemAddress *)(**(code **)(**(int **)(this + 0x90) + 0x5c))();
      uVar9 = extraout_ECX_08;
    }
    fVar26 = in_XMM1_Da + *(float *)(this + 0x20);
    *(float *)(this + 0x20) = fVar26;
    if (0.083333336 <= fVar26) {
      *(float *)(this + 0x20) = fVar26 - 0.083333336;
      runSyncCheck(this,0.0,SUB41(uVar12,0));
    }
  }
  (**(code **)(**(int **)(this + 0x90) + 0x60))();
  if (*(int *)(this + 0x1c) == 1) {
    piVar21 = *(int **)(this + 0x3c);
    uVar12 = *(int *)(this + 0x40) - (int)piVar21 >> 2;
    if (uVar12 == 0) {
LAB_004278a7:
      if (DAT_0065e410 == '\0') goto LAB_0042793b;
      *(undefined1 **)(this + 0x18) = &DAT_bf800000;
      DAT_0065e410 = '\0';
      uStack_a8._0_2_ = 0x78e7;
      uStack_a8._2_2_ = 0x42;
      std::basic_string<>::assign((basic_string<> *)&stack0xffffff64,"Game launch cancelled.",0x16);
      local_8 = 0xb;
      std::basic_string<>::assign((basic_string<> *)&stack0xffffff4c,"system",6);
      local_8 = CONCAT31(local_8._1_3_,0xc);
    }
    else {
      uVar20 = 0;
      if (uVar12 != 0) {
        do {
          if (*(char *)(*piVar21 + 0x41) == '\0') goto LAB_004278a7;
          uVar20 = uVar20 + 1;
          piVar21 = piVar21 + 1;
        } while (uVar20 < uVar12);
      }
      DAT_0065e410 = '\x01';
      if (*(float *)(this + 0x18) != -1.0) {
        fVar26 = *(float *)(this + 0x18) - in_XMM1_Da;
        *(float *)(this + 0x18) = fVar26;
        if (fVar26 <= 0.0) {
          *(undefined1 **)(this + 0x18) = &DAT_bf800000;
          debugPrint("MULTI","ALL CLIENTS READY and timer complete - running simulation.");
          GameLogic::removeNonPlayedShips(this_02);
          pGVar10 = g_gameLogic;
          *(undefined4 *)(this + 0x1c) = 3;
          local_6c = 0;
          pGVar10[0x62] = (GameLogic)0x1;
          iVar15 = *(int *)(this + 0x3c);
          if (*(int *)(this + 0x40) - iVar15 >> 2 != 0) {
            do {
              if (OISConfiguration::multiDebug != false) {
                debugPrint("NETWORK","Setting %s live...");
                iVar15 = *(int *)(this + 0x3c);
              }
              piVar21 = *(int **)(iVar15 + local_6c * 4);
              local_40._4_4_ = *piVar21;
              iStack_38 = piVar21[1];
              iStack_34 = piVar21[2];
              iStack_30 = piVar21[3];
              local_28.g._0_4_ = local_40._4_4_;
              local_28.g._4_4_ = iStack_38;
              local_28._8_4_ = iStack_34;
              local_28._12_4_ = iStack_30;
              this_00 = Singleton<>::getInstance();
              pNVar16 = Singleton<>::getInstance();
              pNVar13 = local_5c;
              uVar12 = 0;
              piVar21 = *(int **)(pNVar16 + 0x3c);
              uVar20 = *(int *)(pNVar16 + 0x40) - (int)piVar21 >> 2;
              piVar23 = piVar21;
              if (uVar20 != 0) {
                do {
                  if ((*(int *)*piVar23 == (int)local_28.g) &&
                     (((int *)*piVar23)[1] == local_28.g._4_4_)) {
                    bVar25 = true;
                  }
                  else {
                    bVar25 = false;
                  }
                  this = local_5c;
                  if (bVar25) {
                    iVar15 = piVar21[uVar12];
                    if (iVar15 != 0) {
                      if (Singleton<>::instance == (NetworkData *)0x0) {
                        Singleton<>::instance = operator_new(1);
                      }
                      local_5d = 0x8d;
                      Singleton<>::getInstance();
                      pNVar16 = Singleton<>::getInstance();
                      uVar27 = 0;
                      piVar21 = *(int **)(pNVar16 + 0x90);
                      RakNet::AddressOrGUID::AddressOrGUID
                                ((AddressOrGUID *)&stack0xffffff4c,(RakNetGUID *)(local_40 + 4));
                      (**(code **)(*piVar21 + 0x50))(&local_5d,1,1);
                      *(undefined1 *)(iVar15 + 0x40) = 1;
                      recheckShipsToSync(this_00);
                      runSyncCheck(this_00,1.4013e-45,(bool)uVar27);
                      goto LAB_00427804;
                    }
                    break;
                  }
                  uVar12 = uVar12 + 1;
                  piVar23 = piVar23 + 1;
                } while (uVar12 < uVar20);
              }
              pNVar13 = this;
              if (OISConfiguration::multiDebug != false) {
                debugPrint("NETWORK","Unknown client set live.");
              }
LAB_00427804:
              iVar15 = *(int *)(pNVar13 + 0x3c);
              local_6c = local_6c + 1;
              this = pNVar13;
            } while (local_6c < (uint)(*(int *)(pNVar13 + 0x40) - iVar15 >> 2));
          }
        }
        goto LAB_0042793b;
      }
      *(undefined4 *)(this + 0x18) = 0x41000000;
      uStack_a8._0_2_ = 0x76c9;
      uStack_a8._2_2_ = 0x42;
      std::basic_string<>::assign
                ((basic_string<> *)&stack0xffffff64,"Game launching in 8 seconds...",0x1e);
      local_8 = 9;
      std::basic_string<>::assign((basic_string<> *)&stack0xffffff4c,"system",6);
      local_8 = CONCAT31(local_8._1_3_,10);
    }
    if (Singleton<>::instance == (NetworkData *)0x0) {
      Singleton<>::instance = operator_new(1);
    }
    local_8 = 0xffffffff;
    NetworkData::sendChatLineFromServer();
  }
LAB_0042793b:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall NetworkServer::runSyncCheck(float,bool)

void __thiscall NetworkServer::runSyncCheck(NetworkServer *this,float param_1,bool param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  MetaGameAction *pMVar6;
  MetaGameAction **ppMVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  GameData *pGVar11;
  bool bVar12;
  basic_string<> *pbVar13;
  int iVar14;
  NetworkServer *pNVar15;
  NetworkData *pNVar16;
  void *pvVar17;
  uint uVar18;
  NetworkServer *pNVar19;
  int *piVar20;
  CargoState *pCVar21;
  uint uVar22;
  RakNetGUID *pRVar23;
  char cVar24;
  nothrow_t *pnVar25;
  RakNetGUID *pRVar26;
  void *pvVar27;
  CargoState *pCVar28;
  int iVar29;
  size_t sVar30;
  basic_string<> *unaff_EDI;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  RakNetGUID local_29c;
  undefined1 local_28c;
  undefined4 local_28b;
  MetaGameAction *local_284;
  MetaGameAction *pMStack_280;
  MetaGameAction *pMStack_27c;
  MetaGameAction *pMStack_278;
  NetworkData *local_274;
  NetworkData *local_270;
  NetworkData *local_26c;
  void *local_268;
  MetaGameAction **local_264;
  MetaGameAction **local_260;
  RakNetGUID *local_25c;
  CargoState *local_258;
  CargoState *local_254;
  NetworkData *local_250;
  int local_24c;
  undefined1 *local_248;
  NetworkData *local_244;
  RakNetGUID *local_240;
  NetworkServer *local_23c;
  int local_238;
  char local_231;
  RakNetGUID *local_230;
  void *local_22c;
  RakNetGUID *local_228;
  NetworkData *local_224;
  CargoState *local_220;
  RakNetGUID *local_21c;
  NetworkData *local_218;
  RakNetGUID *local_214;
  NetworkData *local_210;
  char local_209;
  NetworkData *local_208;
  bool local_202;
  bool local_201;
  undefined1 local_200;
  undefined4 auStack_1ff [20];
  undefined4 auStack_1af [19];
  undefined1 local_160;
  undefined1 *local_15f [24];
  undefined1 *local_ff;
  undefined1 *puStack_fb;
  undefined1 *puStack_f7;
  undefined1 *puStack_f3;
  undefined1 *local_ef;
  undefined1 *puStack_eb;
  undefined1 *puStack_e7;
  undefined1 *puStack_e3;
  undefined1 *local_df;
  undefined1 *puStack_db;
  undefined1 *puStack_d7;
  undefined1 *puStack_d3;
  undefined1 *local_cf;
  undefined1 *puStack_cb;
  undefined1 *puStack_c7;
  undefined1 *puStack_c3;
  undefined1 local_bc;
  undefined4 local_bb;
  undefined4 local_b7;
  undefined4 local_b3;
  undefined4 local_7d;
  undefined4 local_79;
  undefined1 local_75;
  undefined4 local_74;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined4 local_6d;
  undefined4 local_69;
  undefined4 local_65;
  undefined1 local_60;
  undefined4 local_5f;
  undefined4 local_5b;
  undefined4 local_57;
  undefined4 local_53;
  undefined4 local_4f;
  undefined4 local_4b;
  undefined4 local_47;
  undefined4 local_43;
  undefined4 local_3f;
  undefined4 local_3b;
  undefined4 local_37;
  undefined4 local_33;
  undefined4 local_2f;
  undefined4 local_2b;
  undefined4 local_27;
  undefined1 local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  basic_string<> *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &DAT_005b3954;
  local_10 = ExceptionList;
  pbVar13 = (basic_string<> *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_23c = this;
  local_14 = pbVar13;
  if (*(int *)(this + 0x24) == -1) goto LAB_0042a46c;
  iVar14 = *(int *)(this + 0x3c);
  local_22c = (void *)0x0;
  if (*(int *)(this + 0x40) - iVar14 >> 2 != 0) {
    do {
      pGVar11 = g_gameData;
      local_220 = (CargoState *)((int)local_22c * 4);
      iVar14 = *(int *)(*(int *)(local_220 + iVar14) + 0x68);
      if (iVar14 != 0) {
        piVar20 = (int *)(iVar14 + 0x18);
        iVar14 = -iVar14;
        bVar12 = false;
        local_210 = (NetworkData *)(iVar14 + 0x370);
        local_248 = (undefined1 *)(iVar14 + 0x37c);
        local_244 = (NetworkData *)(iVar14 + 0x388);
        local_224 = (NetworkData *)(iVar14 + 0x394);
        local_21c = (RakNetGUID *)(iVar14 + 0x3a0);
        iVar14 = 3;
        do {
          if (piVar20[-6] != *(int *)(local_210 + *(int *)(pGVar11 + 0xcc) + (int)piVar20)) {
            piVar20[-6] = *(int *)(local_210 + *(int *)(pGVar11 + 0xcc) + (int)piVar20);
            bVar12 = true;
          }
          iVar29 = *(int *)(*(int *)(pGVar11 + 0xcc) + (int)local_248 + (int)piVar20);
          if (piVar20[-3] != iVar29) {
            piVar20[-3] = iVar29;
            bVar12 = true;
          }
          if (*piVar20 != *(int *)(local_244 + *(int *)(pGVar11 + 0xcc) + (int)piVar20)) {
            *piVar20 = *(int *)(local_244 + *(int *)(pGVar11 + 0xcc) + (int)piVar20);
            bVar12 = true;
          }
          iVar29 = *(int *)(*(int *)(pGVar11 + 0xcc) + (int)local_224 + (int)piVar20);
          if (piVar20[3] != iVar29) {
            piVar20[3] = iVar29;
            bVar12 = true;
          }
          if (piVar20[6] !=
              *(int *)((CargoState *)((int)local_21c + *(int *)(pGVar11 + 0xcc)) + (int)piVar20)) {
            piVar20[6] = *(int *)((CargoState *)((int)local_21c + *(int *)(pGVar11 + 0xcc)) +
                                 (int)piVar20);
            bVar12 = true;
          }
          piVar20 = piVar20 + 1;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
        this = local_23c;
        if ((bVar12) || (param_1._0_1_ != '\0')) {
          pCVar28 = local_220 + *(int *)(local_23c + 0x3c);
          if (Singleton<>::instance == (NetworkData *)0x0) {
            Singleton<>::instance = operator_new(1);
          }
          local_60 = 0x8c;
          local_5f = *(undefined4 *)(*(int *)(g_gameData + 0xcc) + 0x388);
          local_53 = *(undefined4 *)(*(int *)(g_gameData + 0xcc) + 0x394);
          local_47 = *(undefined4 *)(*(int *)(g_gameData + 0xcc) + 0x3a0);
          local_3b = *(undefined4 *)(*(int *)(g_gameData + 0xcc) + 0x3ac);
          local_2f = *(undefined4 *)(*(int *)(g_gameData + 0xcc) + 0x3b8);
          local_5b = *(undefined4 *)(*(int *)(g_gameData + 0xcc) + 0x38c);
          local_4f = *(undefined4 *)(*(int *)(g_gameData + 0xcc) + 0x398);
          local_43 = *(undefined4 *)(*(int *)(g_gameData + 0xcc) + 0x3a4);
          local_37 = *(undefined4 *)(*(int *)(g_gameData + 0xcc) + 0x3b0);
          local_2b = *(undefined4 *)(*(int *)(g_gameData + 0xcc) + 0x3bc);
          local_57 = *(undefined4 *)(*(int *)(g_gameData + 0xcc) + 0x390);
          local_4b = *(undefined4 *)(*(int *)(g_gameData + 0xcc) + 0x39c);
          local_3f = *(undefined4 *)(*(int *)(g_gameData + 0xcc) + 0x3a8);
          local_33 = *(undefined4 *)(*(int *)(g_gameData + 0xcc) + 0x3b4);
          local_27 = *(undefined4 *)(*(int *)(g_gameData + 0xcc) + 0x3c0);
          piVar20 = *(int **)pCVar28;
          local_29c.g._0_4_ = *piVar20;
          local_29c.g._4_4_ = piVar20[1];
          local_29c._8_4_ = piVar20[2];
          local_29c._12_4_ = piVar20[3];
          Singleton<>::getInstance();
          pNVar15 = Singleton<>::getInstance();
          piVar20 = *(int **)(pNVar15 + 0x90);
          uStack_2e0 = 0x427cc8;
          RakNet::AddressOrGUID::AddressOrGUID((AddressOrGUID *)&uStack_2d8,&local_29c);
          uStack_2e0 = 3;
          uStack_2e4 = 1;
          (**(code **)(*piVar20 + 0x50))();
        }
      }
      local_22c = (void *)((int)local_22c + 1);
      iVar14 = *(int *)(this + 0x3c);
    } while (local_22c < (void *)(*(int *)(this + 0x40) - iVar14 >> 2));
  }
  iVar14 = *(int *)(this + 0x48);
  local_248 = (undefined1 *)0x0;
  if (*(int *)(this + 0x4c) - iVar14 >> 2 != 0) {
    do {
      iVar29 = (int)local_248 * 4;
      local_218 = (NetworkData *)0x0;
      local_238 = iVar29;
      if (*(int *)(*(int *)(iVar14 + iVar29) + 0x2c) - *(int *)(*(int *)(iVar14 + iVar29) + 0x28) >>
          2 != 0) {
        do {
          iVar14 = *(int *)(*(int *)(*(int *)(iVar29 + iVar14) + 0x28) + (int)local_218 * 4);
          switch(*(undefined4 *)(iVar14 + 4)) {
          case 0:
            iVar8 = **(int **)(iVar14 + 8);
            iVar9 = *(int *)(iVar14 + 0x10);
            *(int *)(iVar14 + 0x10) = iVar8;
            cVar24 = iVar9 != iVar8;
            break;
          case 1:
            cVar24 = *(float *)(iVar14 + 0xc) != **(float **)(iVar14 + 8);
            *(float *)(iVar14 + 0xc) = **(float **)(iVar14 + 8);
            local_202 = (bool)cVar24;
            break;
          case 2:
            cVar24 = *(double *)(iVar14 + 0x18) != **(double **)(iVar14 + 8);
            *(double *)(iVar14 + 0x18) = **(double **)(iVar14 + 8);
            local_202 = (bool)cVar24;
            break;
          case 3:
            local_210 = *(NetworkData **)(iVar14 + 8);
            local_244 = (NetworkData *)(iVar14 + 0x24);
            local_202 = std::operator!=<>(pbVar13,unaff_EDI);
            cVar24 = local_202;
            if (local_244 != local_210) {
              pNVar16 = local_210;
              if (0xf < *(uint *)(local_210 + 0x14)) {
                pNVar16 = *(NetworkData **)local_210;
              }
              std::basic_string<>::assign
                        ((basic_string<> *)local_244,(char *)pNVar16,*(uint *)(local_210 + 0x10));
              cVar24 = local_202;
            }
            break;
          case 4:
            cVar24 = **(char **)(iVar14 + 8);
            cVar5 = *(char *)(iVar14 + 0x20);
            *(char *)(iVar14 + 0x20) = cVar24;
            cVar24 = cVar5 != cVar24;
            break;
          default:
            goto switchD_00427d5c_default;
          }
          if (cVar24 == '\0') {
switchD_00427d5c_default:
            if (param_1._0_1_ != '\0') goto LAB_00427e39;
          }
          else {
LAB_00427e39:
            local_244 = *(NetworkData **)(this + 0x3c);
            local_22c = (void *)0x0;
            if (*(int *)(this + 0x40) - (int)local_244 >> 2 != 0) {
              do {
                pNVar15 = local_23c;
                pRVar26 = *(RakNetGUID **)(local_244 + (int)local_22c * 4);
                local_210 = *(NetworkData **)(iVar29 + *(int *)(this + 0x48));
                if (*(int *)((int)&pRVar26[4].g + 4) == *(int *)(*(int *)(local_210 + 0x18) + 0x250)
                   ) {
                  local_210 = (NetworkData *)((int)local_218 * 4) + *(int *)(local_210 + 0x28);
                  pNVar16 = (NetworkData *)((int)local_218 * 4);
                  if (Singleton<>::instance == (NetworkData *)0x0) {
                    Singleton<>::instance = operator_new(1);
                    pRVar26 = *(RakNetGUID **)(local_244 + (int)local_22c * 4);
                    pNVar16 = local_244;
                  }
                  NetworkData::sendSync(pNVar16,*pRVar26,*(SyncNode **)local_210);
                  this = pNVar15;
                }
                local_244 = *(NetworkData **)(this + 0x3c);
                local_22c = (void *)((int)local_22c + 1);
              } while (local_22c < (void *)(*(int *)(this + 0x40) - (int)local_244 >> 2));
            }
          }
          iVar14 = *(int *)(this + 0x48);
          local_218 = (NetworkData *)((int)local_218 + 1);
        } while (local_218 <
                 (uint)(*(int *)(*(int *)(iVar14 + iVar29) + 0x2c) -
                        *(int *)(*(int *)(iVar14 + iVar29) + 0x28) >> 2));
      }
      local_231 = WaypointState::checkState((WaypointState *)(*(int *)(iVar29 + iVar14) + 0x58));
      local_210 = (NetworkData *)0x0;
      local_274 = (NetworkData *)0x0;
      local_218 = (NetworkData *)0x0;
      local_270 = (NetworkData *)0x0;
      local_244 = (NetworkData *)0x0;
      local_26c = (NetworkData *)0x0;
      local_8._0_1_ = 0;
      local_8._1_3_ = 0;
      iVar14 = *(int *)(this + 0x48);
      local_228 = (RakNetGUID *)0x0;
      if (*(int *)(*(int *)(iVar14 + iVar29) + 0x20) - *(int *)(*(int *)(iVar14 + iVar29) + 0x1c) >>
          2 != 0) {
        do {
          pNVar16 = (NetworkData *)((int)local_228 * 4);
          local_208 = pNVar16;
          if (**(int **)(pNVar16 + *(int *)(*(int *)(iVar29 + iVar14) + 0x1c)) == 0) {
            if (OISConfiguration::multiDebug != false) {
              debugPrint("NETWORK","Module has been removed. Syncing this to clients.");
            }
            pNVar16 = local_208;
            iVar14 = *(int *)(this + 0x3c);
            local_21c = (RakNetGUID *)0x0;
            if (*(int *)(this + 0x40) - iVar14 >> 2 != 0) {
              do {
                local_224 = (NetworkData *)((int)local_21c * 4);
                if (*(int *)(*(int *)((int)local_224 + iVar14) + 0x44) ==
                    *(int *)(*(int *)(*(int *)(local_238 + *(int *)(this + 0x48)) + 0x18) + 0x250))
                {
                  local_240 = (RakNetGUID *)&stack0xfffffd3c;
                  uStack_2d0._0_2_ = 0x804f;
                  uStack_2d0._2_2_ = 0x42;
                  std::basic_string<>::assign((basic_string<> *)&stack0xfffffd3c,"",0);
                  local_8._0_1_ = 1;
                  local_224 = (NetworkData *)(*(int *)(this + 0x3c) + (int)local_224);
                  local_210 = pNVar16 + *(int *)(*(int *)(*(int *)(this + 0x48) + local_238) + 0x1c)
                  ;
                  if (Singleton<>::instance == (NetworkData *)0x0) {
                    Singleton<>::instance = operator_new(1);
                  }
                  pMVar6 = *(MetaGameAction **)local_224;
                  uStack_2d8 = *(undefined4 *)(pMVar6 + 4);
                  uStack_2d4 = *(undefined4 *)(pMVar6 + 8);
                  uStack_2d0 = *(undefined4 *)(pMVar6 + 0xc);
                  local_8._0_1_ = 0;
                  uStack_2e0 = 0x4280ba;
                  NetworkData::sendSetModule();
                }
                iVar14 = *(int *)(this + 0x3c);
                local_21c = (RakNetGUID *)((int)local_21c + 1);
              } while (local_21c < (CargoState *)(*(int *)(this + 0x40) - iVar14 >> 2));
            }
            pNVar16 = pNVar16 + *(int *)(*(int *)(local_238 + *(int *)(this + 0x48)) + 0x1c);
            if (local_244 == local_218) {
              std::vector<>::_Emplace_reallocate<>
                        ((vector<> *)&local_274,(AnimationFrames **)local_218,
                         (AnimationFrames **)pNVar16);
              local_244 = local_26c;
              local_218 = local_270;
              iVar29 = local_238;
            }
            else {
              *(AnimationFrames **)local_218 = *(AnimationFrames **)pNVar16;
              local_270 = local_218 + 4;
              iVar29 = local_238;
              local_218 = local_270;
            }
          }
          else {
            piVar20 = *(int **)(pNVar16 + *(int *)(*(int *)(iVar29 + iVar14) + 0x1c));
            fVar1 = (float)piVar20[9];
            fVar2 = *(float *)(*piVar20 + 0x5c);
            if (fVar1 != fVar2) {
              piVar20[9] = (int)fVar2;
            }
            iVar14 = *piVar20;
            cVar24 = *(char *)(iVar14 + 0x60);
            bVar12 = (char)piVar20[10] != cVar24;
            if (bVar12) {
              *(char *)(piVar20 + 10) = cVar24;
            }
            local_202 = bVar12 || fVar1 != fVar2;
            if (*(char *)((int)piVar20 + 0x29) != *(char *)(iVar14 + 0x61)) {
              *(char *)((int)piVar20 + 0x29) = *(char *)(iVar14 + 0x61);
              local_202 = true;
            }
            if (*(char *)((int)piVar20 + 0x2a) != *(char *)(iVar14 + 0x62)) {
              *(char *)((int)piVar20 + 0x2a) = *(char *)(iVar14 + 0x62);
              local_202 = true;
            }
            if (*(char *)((int)piVar20 + 0x2b) != *(char *)(iVar14 + 99)) {
              *(undefined1 *)((int)piVar20 + 0x2b) = *(undefined1 *)(iVar14 + 99);
              local_202 = true;
            }
            if ((float)piVar20[0xf] != *(float *)(iVar14 + 0x6c)) {
              piVar20[0xf] = (int)*(float *)(iVar14 + 0x6c);
              local_202 = true;
            }
            iVar14 = *piVar20;
            if (piVar20[0xb] != *(int *)(iVar14 + 100)) {
              piVar20[0xb] = *(int *)(iVar14 + 100);
              local_202 = true;
            }
            if (piVar20[0xc] != *(int *)(iVar14 + 0x34)) {
              piVar20[0xc] = *(int *)(iVar14 + 0x34);
              local_202 = true;
            }
            piVar20 = *(int **)(pNVar16 +
                               *(int *)(*(int *)(*(int *)(local_23c + 0x48) + iVar29) + 0x1c));
            fVar1 = (float)piVar20[0x12];
            fVar2 = *(float *)(*piVar20 + 0x24);
            if (fVar1 != fVar2) {
              piVar20[0x12] = (int)fVar2;
            }
            iVar14 = *piVar20;
            iVar8 = *(int *)(iVar14 + 0x28);
            iVar9 = piVar20[0x13];
            if (iVar9 != iVar8) {
              piVar20[0x13] = iVar8;
            }
            local_201 = iVar9 != iVar8 || fVar1 != fVar2;
            if ((char)piVar20[0x14] != *(char *)(iVar14 + 0x2c)) {
              *(char *)(piVar20 + 0x14) = *(char *)(iVar14 + 0x2c);
              local_201 = true;
            }
            if (piVar20[0x15] != *(int *)(iVar14 + 0x30)) {
              piVar20[0x15] = *(int *)(iVar14 + 0x30);
              local_201 = true;
            }
            if (piVar20[0xe] != *(int *)(iVar14 + 0x68)) {
              piVar20[0xe] = *(int *)(iVar14 + 0x68);
              local_201 = true;
            }
            if ((char)piVar20[0x10] != *(char *)(iVar14 + 0x1c)) {
              *(char *)(piVar20 + 0x10) = *(char *)(iVar14 + 0x1c);
              local_201 = true;
            }
            if (*(char *)((int)piVar20 + 0x41) != *(char *)(iVar14 + 0x1d)) {
              *(char *)((int)piVar20 + 0x41) = *(char *)(iVar14 + 0x1d);
              local_201 = true;
            }
            if (piVar20[0xd] != *(int *)(iVar14 + 0x38)) {
              piVar20[0xd] = *(int *)(iVar14 + 0x38);
              local_201 = true;
            }
            if (*(char *)((int)piVar20 + 0x46) != *(char *)(iVar14 + 0x14)) {
              *(char *)((int)piVar20 + 0x46) = *(char *)(iVar14 + 0x14);
              local_201 = true;
            }
            if (*(char *)((int)piVar20 + 0x42) != *(char *)(iVar14 + 0x1e)) {
              *(char *)((int)piVar20 + 0x42) = *(char *)(iVar14 + 0x1e);
              local_201 = true;
            }
            iVar14 = *piVar20;
            if (*(char *)((int)piVar20 + 0x43) != *(char *)(iVar14 + 0x1f)) {
              local_201 = true;
              *(char *)((int)piVar20 + 0x43) = *(char *)(iVar14 + 0x1f);
              iVar14 = *piVar20;
            }
            if ((char)piVar20[0x11] != *(char *)(iVar14 + 0x20)) {
              *(undefined1 *)(piVar20 + 0x11) = *(undefined1 *)(iVar14 + 0x20);
              iVar14 = *piVar20;
              local_201 = true;
            }
            if (*(char *)((int)piVar20 + 0x45) != *(char *)(iVar14 + 0x21)) {
              *(char *)((int)piVar20 + 0x45) = *(char *)(iVar14 + 0x21);
              local_201 = true;
            }
            this = local_23c;
            if ((((local_202 != false) || (local_201 != false)) || (local_231 != '\0')) ||
               (param_1._0_1_ != '\0')) {
              local_230 = *(RakNetGUID **)(local_23c + 0x3c);
              local_214 = (RakNetGUID *)0x0;
              if (*(int *)(local_23c + 0x40) - (int)local_230 >> 2 != 0) {
                do {
                  local_224 = *(NetworkData **)(iVar29 + *(int *)(this + 0x48));
                  pRVar26 = *(RakNetGUID **)((int)local_230 + (int)local_214 * 4);
                  if (*(int *)((int)&pRVar26[4].g + 4) ==
                      *(int *)(*(int *)(local_224 + 0x18) + 0x250)) {
                    local_21c = pRVar26;
                    if ((local_202 != false) || (param_1._0_1_ != '\0')) {
                      local_210 = pNVar16 + *(int *)(local_224 + 0x1c);
                      if (Singleton<>::instance == (NetworkData *)0x0) {
                        Singleton<>::instance = operator_new(1);
                        pRVar26 = *(RakNetGUID **)((int)local_230 + (int)local_214 * 4);
                      }
                      puVar10 = *(undefined4 **)local_210;
                      NetworkData::sendSetModuleBasicSettings
                                ((NetworkData *)pRVar26,*pRVar26,puVar10[1],puVar10[2],
                                 (ShipModule *)*puVar10);
                      pNVar16 = local_208;
                    }
                    if ((local_201 != false) || (param_1._0_1_ != '\0')) {
                      local_224 = pNVar16 + *(int *)(*(int *)(*(int *)(this + 0x48) + iVar29) + 0x1c
                                                    );
                      local_210 = (NetworkData *)(*(int *)(this + 0x3c) + (int)local_214 * 4);
                      if (Singleton<>::instance == (NetworkData *)0x0) {
                        Singleton<>::instance = operator_new(1);
                      }
                      puVar10 = *(undefined4 **)local_224;
                      NetworkData::sendSetModuleDetails
                                ((NetworkData *)&stack0xfffffd3c,**(RakNetGUID **)local_210,
                                 puVar10[1],puVar10[2],(ShipModule *)*puVar10);
                    }
                    if ((local_231 != '\0') || (pNVar16 = local_208, param_1._0_1_ != '\0')) {
                      local_210 = (NetworkData *)(*(int *)(this + 0x3c) + (int)local_214 * 4);
                      if (Singleton<>::instance == (NetworkData *)0x0) {
                        Singleton<>::instance = operator_new(1);
                      }
                      piVar20 = *(int **)local_210;
                      local_200 = 0xa7;
                      local_284 = (MetaGameAction *)*piVar20;
                      pMStack_280 = (MetaGameAction *)piVar20[1];
                      pMStack_27c = (MetaGameAction *)piVar20[2];
                      pMStack_278 = (MetaGameAction *)piVar20[3];
                      local_29c.g._0_4_ = *piVar20;
                      local_29c.g._4_4_ = piVar20[1];
                      local_29c._8_4_ = piVar20[2];
                      local_29c._12_4_ = piVar20[3];
                      pNVar15 = Singleton<>::getInstance();
                      uVar18 = 0;
                      local_224 = *(NetworkData **)(pNVar15 + 0x3c);
                      uVar22 = *(int *)(pNVar15 + 0x40) - (int)local_224 >> 2;
                      pNVar16 = local_208;
                      if (uVar22 != 0) {
                        do {
                          piVar20 = *(int **)((int)local_224 + uVar18 * 4);
                          if ((*piVar20 == (int)local_29c.g) && (piVar20[1] == local_29c.g._4_4_)) {
                            bVar12 = true;
                          }
                          else {
                            bVar12 = false;
                          }
                          iVar29 = local_238;
                          if (bVar12) {
                            if ((piVar20 != (int *)0x0) && (piVar20[0x19] != 0)) {
                              uVar18 = 0;
                              iVar14 = 0;
                              do {
                                local_210 = *(NetworkData **)(piVar20[0x19] + 0x1c4);
                                if (uVar18 < (uint)(*(int *)(piVar20[0x19] + 0x1c8) - (int)local_210
                                                   >> 5)) {
                                  auStack_1ff[uVar18] = *(undefined4 *)(iVar14 + 8 + (int)local_210)
                                  ;
                                  auStack_1af[uVar18] =
                                       *(undefined4 *)
                                        (*(int *)(piVar20[0x19] + 0x1c4) + 0xc + iVar14);
                                  local_15f[uVar18] =
                                       *(undefined1 **)(iVar14 + *(int *)(piVar20[0x19] + 0x1c4));
                                  local_15f[uVar18 + 0x14] =
                                       *(undefined1 **)
                                        (iVar14 + 4 + *(int *)(piVar20[0x19] + 0x1c4));
                                }
                                else {
                                  auStack_1ff[uVar18] = 0xc61c3c00;
                                  auStack_1af[uVar18] = 0xc61c3c00;
                                  local_15f[uVar18] = (undefined1 *)0xc61c3c00;
                                  local_15f[uVar18 + 0x14] = (undefined1 *)0xc61c3c00;
                                }
                                iVar14 = iVar14 + 0x20;
                                uVar18 = uVar18 + 1;
                              } while (iVar14 < 0x280);
                              Singleton<>::getInstance();
                              pNVar15 = Singleton<>::getInstance();
                              piVar20 = *(int **)(pNVar15 + 0x90);
                              uStack_2e0 = 0x428677;
                              RakNet::AddressOrGUID::AddressOrGUID
                                        ((AddressOrGUID *)&uStack_2d8,(RakNetGUID *)&local_284);
                              uStack_2e0 = 3;
                              uStack_2e4 = 1;
                              (**(code **)(*piVar20 + 0x50))();
                              pNVar16 = local_208;
                              iVar29 = local_238;
                              this = local_23c;
                            }
                            break;
                          }
                          uVar18 = uVar18 + 1;
                        } while (uVar18 < uVar22);
                      }
                    }
                  }
                  local_230 = *(RakNetGUID **)(this + 0x3c);
                  local_214 = (RakNetGUID *)((int)local_214 + 1);
                } while (local_214 < (uint)(*(int *)(this + 0x40) - (int)local_230 >> 2));
              }
            }
            pCVar28 = *(CargoState **)(this + 0x48);
            local_230 = (RakNetGUID *)0x0;
            local_214 = (RakNetGUID *)pCVar28;
            if (*(int *)(*(int *)(pNVar16 + *(int *)(*(int *)(pCVar28 + iVar29) + 0x1c)) + 0x5c) -
                *(int *)(*(int *)(pNVar16 + *(int *)(*(int *)(pCVar28 + iVar29) + 0x1c)) + 0x58) >>
                2 != 0) {
              do {
                local_21c = (RakNetGUID *)((int)local_230 * 4);
                iVar14 = *(int *)(*(int *)(*(int *)(pNVar16 +
                                                   *(int *)(*(int *)(pCVar28 + iVar29) + 0x1c)) +
                                          0x58) + (int)local_21c);
                if ((int)**(float **)(iVar14 + 0x14) == *(int *)(iVar14 + 0x10)) {
                  if (param_1._0_1_ != '\0') goto LAB_00428733;
                }
                else {
                  *(int *)(iVar14 + 0x10) = (int)**(float **)(iVar14 + 0x14);
LAB_00428733:
                  local_224 = *(NetworkData **)(this + 0x3c);
                  uVar18 = 0;
                  iVar29 = local_238;
                  if (*(int *)(this + 0x40) - (int)local_224 >> 2 != 0) {
                    do {
                      pRVar26 = *(RakNetGUID **)((int)local_224 + uVar18 * 4);
                      if (*(int *)((int)&pRVar26[4].g + 4) ==
                          *(int *)(*(int *)(*(int *)(local_238 + *(int *)(this + 0x48)) + 0x18) +
                                  0x250)) {
                        local_210 = *(NetworkData **)
                                     (*(int *)(local_238 + *(int *)(this + 0x48)) + 0x1c);
                        pNVar16 = *(NetworkData **)(local_208 + (int)local_210);
                        local_220 = (CargoState *)(*(int *)(pNVar16 + 0x58) + (int)local_21c);
                        if (Singleton<>::instance == (NetworkData *)0x0) {
                          Singleton<>::instance = operator_new(1);
                          pNVar16 = *(NetworkData **)(local_208 + (int)local_210);
                          pRVar26 = *(RakNetGUID **)((int)local_224 + uVar18 * 4);
                        }
                        NetworkData::sendSetComponent
                                  (pNVar16,*pRVar26,*(ShipModule **)pNVar16,
                                   *(int *)(*(int *)local_220 + 8));
                      }
                      local_224 = *(NetworkData **)(this + 0x3c);
                      uVar18 = uVar18 + 1;
                      pNVar16 = local_208;
                      iVar29 = local_238;
                    } while (uVar18 < (uint)(*(int *)(this + 0x40) - (int)local_224 >> 2));
                  }
                }
                local_214 = *(RakNetGUID **)(this + 0x48);
                local_230 = (RakNetGUID *)((int)local_230 + 1);
                pCVar28 = *(CargoState **)(this + 0x48);
              } while (local_230 <
                       (uint)(*(int *)(*(int *)(pNVar16 +
                                               *(int *)(*(int *)((int)local_214 + iVar29) + 0x1c)) +
                                      0x5c) -
                              *(int *)(*(int *)(pNVar16 +
                                               *(int *)(*(int *)((int)local_214 + iVar29) + 0x1c)) +
                                      0x58) >> 2));
            }
            local_230 = (RakNetGUID *)0x0;
            pRVar26 = local_214;
            if (*(int *)(*(int *)(pNVar16 + *(int *)(*(int *)((int)local_214 + iVar29) + 0x1c)) +
                        0x68) -
                *(int *)(*(int *)(pNVar16 + *(int *)(*(int *)((int)local_214 + iVar29) + 0x1c)) +
                        100) >> 2 != 0) {
              do {
                local_21c = (RakNetGUID *)((int)local_230 * 4);
                iVar14 = *(int *)(*(int *)(*(int *)(pNVar16 +
                                                   *(int *)(*(int *)((int)pRVar26 + iVar29) + 0x1c))
                                          + 100) + (int)local_21c);
                if ((int)**(float **)(iVar14 + 0x14) == *(int *)(iVar14 + 0x10)) {
                  if (param_1._0_1_ != '\0') goto LAB_004288b3;
                }
                else {
                  *(int *)(iVar14 + 0x10) = (int)**(float **)(iVar14 + 0x14);
LAB_004288b3:
                  local_224 = *(NetworkData **)(this + 0x3c);
                  uVar18 = 0;
                  iVar29 = local_238;
                  if (*(int *)(this + 0x40) - (int)local_224 >> 2 != 0) {
                    do {
                      pRVar26 = *(RakNetGUID **)((int)local_224 + uVar18 * 4);
                      if (*(int *)((int)&pRVar26[4].g + 4) ==
                          *(int *)(*(int *)(*(int *)(local_238 + *(int *)(this + 0x48)) + 0x18) +
                                  0x250)) {
                        local_210 = *(NetworkData **)
                                     (*(int *)(local_238 + *(int *)(this + 0x48)) + 0x1c);
                        pNVar16 = *(NetworkData **)(local_208 + (int)local_210);
                        local_220 = (CargoState *)(*(int *)(pNVar16 + 100) + (int)local_21c);
                        if (Singleton<>::instance == (NetworkData *)0x0) {
                          Singleton<>::instance = operator_new(1);
                          pNVar16 = *(NetworkData **)(local_208 + (int)local_210);
                          pRVar26 = *(RakNetGUID **)((int)local_224 + uVar18 * 4);
                        }
                        NetworkData::sendSetAddon
                                  (pNVar16,*pRVar26,*(ShipModule **)pNVar16,
                                   *(int *)(*(int *)local_220 + 8));
                      }
                      local_224 = *(NetworkData **)(this + 0x3c);
                      uVar18 = uVar18 + 1;
                      pNVar16 = local_208;
                      iVar29 = local_238;
                    } while (uVar18 < (uint)(*(int *)(this + 0x40) - (int)local_224 >> 2));
                  }
                }
                local_214 = *(RakNetGUID **)(this + 0x48);
                local_230 = (RakNetGUID *)((int)&local_230->g + 1);
                pRVar26 = (RakNetGUID *)*(CargoState **)(this + 0x48);
              } while (local_230 <
                       (RakNetGUID *)
                       (*(int *)(*(int *)(pNVar16 +
                                         *(int *)(*(int *)((int)local_214 + iVar29) + 0x1c)) + 0x68)
                        - *(int *)(*(int *)(pNVar16 +
                                           *(int *)(*(int *)((int)local_214 + iVar29) + 0x1c)) + 100
                                  ) >> 2));
            }
            local_21c = *(RakNetGUID **)(*(int *)((int)local_214 + iVar29) + 0x68);
            local_224 = *(NetworkData **)local_21c;
            local_210 = *(NetworkData **)(*(int *)(*(int *)((int)local_21c + 0xc) + 0x1f8) + 0x44);
            local_220 = (CargoState *)
                        (*(int *)(*(int *)(*(int *)((int)local_21c + 0xc) + 0x1f8) + 0x48) -
                         (int)local_210 >> 2);
            if ((CargoState *)(*(int *)((int)local_21c + 4) - (int)local_224 >> 2) == local_220) {
              pCVar28 = (CargoState *)0x0;
              if (local_220 != (CargoState *)0x0) {
                do {
                  this = local_23c;
                  if ((*(int *)*(MetaGameAction **)((int)local_224 + pCVar28 * 4) !=
                       **(int **)(*(int *)(local_210 + (int)pCVar28 * 4) + 4)) ||
                     (*(float *)(*(MetaGameAction **)((int)local_224 + pCVar28 * 4) + 4) !=
                      **(float **)(local_210 + (int)pCVar28 * 4))) goto LAB_00428a05;
                  pCVar28 = pCVar28 + 1;
                } while (pCVar28 < local_220);
              }
              if (param_1._0_1_ == '\0') goto LAB_00428c0a;
            }
            else {
LAB_00428a05:
              CargoState::setState((CargoState *)local_21c);
            }
            local_21c = *(RakNetGUID **)(this + 0x3c);
            local_22c = (void *)0x0;
            if (*(int *)(this + 0x40) - (int)local_21c >> 2 != 0) {
              do {
                local_210 = *(NetworkData **)(this + 0x48);
                local_224 = *(NetworkData **)((int)local_21c + (int)local_22c * 4);
                pCVar28 = *(CargoState **)(local_210 + iVar29);
                local_220 = pCVar28;
                if (*(MetaGameAction **)((int)local_224 + 0x44) ==
                    *(MetaGameAction **)(*(int *)(pCVar28 + 0x18) + 0x250)) {
                  if (Singleton<>::instance == (NetworkData *)0x0) {
                    Singleton<>::instance = operator_new(1);
                    pCVar28 = *(CargoState **)(local_210 + iVar29);
                    local_224 = *(NetworkData **)((int)local_21c + (int)local_22c * 4);
                  }
                  uVar18 = 0;
                  local_15f[0] = (undefined1 *)0xffffffff;
                  local_15f[1] = (undefined1 *)0xffffffff;
                  local_15f[2] = (undefined1 *)0xffffffff;
                  local_15f[3] = (undefined1 *)0xffffffff;
                  local_160 = 0x9f;
                  local_15f[4] = (undefined1 *)0xffffffff;
                  local_15f[5] = (undefined1 *)0xffffffff;
                  local_15f[6] = (undefined1 *)0xffffffff;
                  local_15f[7] = (undefined1 *)0xffffffff;
                  local_15f[8] = (undefined1 *)0xffffffff;
                  local_15f[9] = (undefined1 *)0xffffffff;
                  local_15f[10] = (undefined1 *)0xffffffff;
                  local_15f[0xb] = (undefined1 *)0xffffffff;
                  iVar14 = *(int *)(*(int *)(*(int *)(pCVar28 + 0x18) + 0x1f8) + 0x44);
                  local_15f[0xc] = (undefined1 *)0xffffffff;
                  local_15f[0xd] = (undefined1 *)0xffffffff;
                  local_15f[0xe] = (undefined1 *)0xffffffff;
                  local_15f[0xf] = (undefined1 *)0xffffffff;
                  uVar22 = *(int *)(*(int *)(*(int *)(pCVar28 + 0x18) + 0x1f8) + 0x48) - iVar14 >> 2
                  ;
                  local_15f[0x10] = (undefined1 *)0xffffffff;
                  local_15f[0x11] = (undefined1 *)0xffffffff;
                  local_15f[0x12] = (undefined1 *)0xffffffff;
                  local_15f[0x13] = (undefined1 *)0xffffffff;
                  local_15f[0x14] = &DAT_bf800000;
                  local_15f[0x15] = &DAT_bf800000;
                  local_15f[0x16] = &DAT_bf800000;
                  local_15f[0x17] = &DAT_bf800000;
                  local_ff = &DAT_bf800000;
                  puStack_fb = &DAT_bf800000;
                  puStack_f7 = &DAT_bf800000;
                  puStack_f3 = &DAT_bf800000;
                  local_ef = &DAT_bf800000;
                  puStack_eb = &DAT_bf800000;
                  puStack_e7 = &DAT_bf800000;
                  puStack_e3 = &DAT_bf800000;
                  local_df = &DAT_bf800000;
                  puStack_db = &DAT_bf800000;
                  puStack_d7 = &DAT_bf800000;
                  puStack_d3 = &DAT_bf800000;
                  local_cf = &DAT_bf800000;
                  puStack_cb = &DAT_bf800000;
                  puStack_c7 = &DAT_bf800000;
                  puStack_c3 = &DAT_bf800000;
                  if (uVar22 != 0) {
                    do {
                      local_15f[uVar18] =
                           (undefined1 *)**(undefined4 **)(*(int *)(iVar14 + uVar18 * 4) + 4);
                      local_15f[uVar18 + 0x14] =
                           (undefined1 *)**(undefined4 **)(iVar14 + uVar18 * 4);
                      uVar18 = uVar18 + 1;
                    } while (uVar18 < uVar22);
                  }
                  local_284 = *(MetaGameAction **)local_224;
                  pMStack_280 = *(MetaGameAction **)((int)local_224 + 4);
                  pMStack_27c = *(MetaGameAction **)((int)local_224 + 8);
                  pMStack_278 = *(MetaGameAction **)((int)local_224 + 0xc);
                  Singleton<>::getInstance();
                  pNVar15 = Singleton<>::getInstance();
                  piVar20 = *(int **)(pNVar15 + 0x90);
                  uStack_2e0 = 0x428bc5;
                  RakNet::AddressOrGUID::AddressOrGUID
                            ((AddressOrGUID *)&uStack_2d8,(RakNetGUID *)&local_284);
                  uStack_2e0 = 3;
                  uStack_2e4 = 1;
                  (**(code **)(*piVar20 + 0x50))();
                  iVar29 = local_238;
                }
                local_21c = *(RakNetGUID **)(this + 0x3c);
                local_22c = (void *)((int)local_22c + 1);
              } while (local_22c < (void *)(*(int *)(this + 0x40) - (int)local_21c >> 2));
            }
          }
LAB_00428c0a:
          iVar14 = *(int *)(this + 0x48);
          local_228 = (RakNetGUID *)((int)&local_228->g + 1);
        } while (local_228 <
                 (RakNetGUID *)
                 (*(int *)(*(int *)(iVar14 + iVar29) + 0x20) -
                  *(int *)(*(int *)(iVar14 + iVar29) + 0x1c) >> 2));
        local_210 = local_274;
      }
      local_224 = (NetworkData *)0x0;
      local_218 = (NetworkData *)((int)local_218 - (int)local_210 >> 2);
      pNVar16 = local_210;
      local_274 = local_210;
      if (local_218 != (NetworkData *)0x0) {
        do {
          local_208 = pNVar16;
          if (OISConfiguration::multiDebug != false) {
            debugPrint("NETWORK","Stopped syncing module: %d, %d");
          }
          local_220 = *(CargoState **)(*(int *)(*(int *)(this + 0x48) + iVar29) + 0x20);
          local_214 = *(RakNetGUID **)(*(int *)(*(int *)(this + 0x48) + iVar29) + 0x1c);
          if (local_214 != (RakNetGUID *)local_220) {
            do {
              if (*(int *)local_214 == *(int *)local_208) break;
              local_214 = (RakNetGUID *)((int)local_214 + 4);
            } while (local_214 != (RakNetGUID *)local_220);
            if (local_214 != (RakNetGUID *)local_220) {
              pCVar28 = (CargoState *)((int)local_214 + 4);
              local_22c = (void *)0x0;
              pvVar27 = (void *)((uint)(local_220 + (3 - (int)pCVar28)) >> 2);
              if (local_220 < pCVar28) {
                pvVar27 = (void *)0x0;
              }
              this = local_23c;
              if (pvVar27 != (void *)0x0) {
                do {
                  if (*(int *)pCVar28 != *(int *)local_208) {
                    *(int *)local_214 = *(int *)pCVar28;
                    local_214 = (RakNetGUID *)((int)local_214 + 4);
                  }
                  local_22c = (void *)((int)local_22c + 1);
                  pCVar28 = pCVar28 + 4;
                } while (local_22c != pvVar27);
              }
            }
          }
          local_21c = *(RakNetGUID **)(iVar29 + *(int *)(this + 0x48));
          if (local_214 != (RakNetGUID *)local_220) {
            sVar30 = *(int *)((int)local_21c + 0x20) - (int)local_220;
            memmove(local_214,local_220,sVar30);
            *(CargoState **)((int)local_21c + 0x20) = (CargoState *)((int)local_214 + sVar30);
            iVar29 = local_238;
          }
          local_22c = *(void **)local_208;
          if (local_22c != (void *)0x0) {
            pCVar28 = *(CargoState **)((int)local_22c + 100);
            if (pCVar28 != (CargoState *)0x0) {
              pnVar25 = (nothrow_t *)((*(int *)((int)local_22c + 0x6c) - (int)pCVar28 >> 2) * 4);
              pCVar21 = pCVar28;
              if ((nothrow_t *)0xfff < pnVar25) {
                pCVar21 = *(CargoState **)(pCVar28 + -4);
                pnVar25 = pnVar25 + 0x23;
                local_21c = (RakNetGUID *)pCVar21;
                if ((CargoState *)0x1f < pCVar28 + (-4 - (int)pCVar21)) goto LAB_0042a237;
              }
              operator_delete(pCVar21,pnVar25);
              *(undefined4 *)((int)local_22c + 100) = 0;
              *(undefined4 *)((int)local_22c + 0x68) = 0;
              *(undefined4 *)((int)local_22c + 0x6c) = 0;
            }
            pCVar28 = *(CargoState **)((int)local_22c + 0x58);
            if (pCVar28 != (CargoState *)0x0) {
              pnVar25 = (nothrow_t *)((*(int *)((int)local_22c + 0x60) - (int)pCVar28 >> 2) * 4);
              pCVar21 = pCVar28;
              if ((nothrow_t *)0xfff < pnVar25) {
                pCVar21 = *(CargoState **)(pCVar28 + -4);
                pnVar25 = pnVar25 + 0x23;
                local_21c = (RakNetGUID *)pCVar21;
                if ((CargoState *)0x1f < pCVar28 + (-4 - (int)pCVar21)) goto LAB_0042a237;
              }
              operator_delete(pCVar21,pnVar25);
              *(undefined4 *)((int)local_22c + 0x58) = 0;
              *(undefined4 *)((int)local_22c + 0x5c) = 0;
              *(undefined4 *)((int)local_22c + 0x60) = 0;
            }
            uVar18 = *(uint *)((int)local_22c + 0x20);
            if (0xf < uVar18) {
              pvVar27 = *(void **)((int)local_22c + 0xc);
              pnVar25 = (nothrow_t *)(uVar18 + 1);
              pvVar17 = pvVar27;
              if ((nothrow_t *)0xfff < pnVar25) {
                pvVar17 = *(void **)((int)pvVar27 + -4);
                pnVar25 = (nothrow_t *)(uVar18 + 0x24);
                if (0x1f < (uint)((int)pvVar27 + (-4 - (int)pvVar17))) goto LAB_0042a237;
              }
              operator_delete(pvVar17,pnVar25);
            }
            *(undefined4 *)((int)local_22c + 0x1c) = 0;
            *(undefined4 *)((int)local_22c + 0x20) = 0xf;
            *(undefined1 *)((int)local_22c + 0xc) = 0;
            operator_delete(local_22c,(nothrow_t *)0x70);
          }
          local_224 = (NetworkData *)((int)local_224 + 1);
          local_208 = local_208 + 4;
          pNVar16 = local_208;
        } while (local_224 < local_218);
      }
      pRVar26 = (RakNetGUID *)0x0;
      local_22c = (void *)0x0;
      local_268 = (void *)0x0;
      local_214 = (RakNetGUID *)0x0;
      local_264 = (MetaGameAction **)0x0;
      local_224 = (NetworkData *)0x0;
      local_260 = (MetaGameAction **)0x0;
      local_8 = CONCAT31(local_8._1_3_,2);
      local_218 = (NetworkData *)0x0;
      iVar14 = *(int *)(*(int *)(*(int *)(this + 0x48) + iVar29) + 0x18);
      if (*(int *)(iVar14 + 0x218) - *(int *)(iVar14 + 0x214) >> 2 != 0) {
        do {
          iVar14 = *(int *)(iVar29 + *(int *)(this + 0x48));
          local_220 = *(CargoState **)(iVar14 + 0x18);
          local_22c = *(void **)(iVar14 + 0x38);
          local_21c = *(RakNetGUID **)(iVar14 + 0x34);
          uVar22 = 0;
          uVar18 = (int)local_22c - (int)local_21c >> 2;
          if (uVar18 != 0) {
            local_228 = (RakNetGUID *)**(uint **)(*(int *)(local_220 + 0x214) + (int)local_218 * 4);
            local_22c = (void *)((int)local_22c - (int)local_21c);
            do {
              this = local_23c;
              if (*(RakNetGUID **)(*(int *)((int)local_21c + uVar22 * 4) + 4) == local_228)
              goto LAB_00429066;
              uVar22 = uVar22 + 1;
            } while (uVar22 < uVar18);
          }
          if (OISConfiguration::multiDebug != false) {
            debugPrint("NETWORK","Preparing to sync new sensorID: %d (%s)");
          }
          ppMVar7 = *(MetaGameAction ***)
                     (*(int *)(*(int *)(*(int *)(iVar29 + *(int *)(this + 0x48)) + 0x18) + 0x214) +
                     (int)local_218 * 4);
          if ((RakNetGUID *)local_224 == local_214) {
            std::vector<>::_Emplace_reallocate<>
                      ((vector<> *)&local_268,(MetaGameAction **)local_214,ppMVar7);
            local_224 = (NetworkData *)local_260;
            local_214 = (RakNetGUID *)local_264;
          }
          else {
            *(MetaGameAction **)local_214 = *ppMVar7;
            local_264 = (MetaGameAction **)((int)local_214 + 4);
            local_214 = (RakNetGUID *)local_264;
          }
LAB_00429066:
          local_218 = (NetworkData *)((int)local_218 + 1);
          iVar14 = *(int *)(*(int *)(*(int *)(this + 0x48) + iVar29) + 0x18);
        } while (local_218 < (uint)(*(int *)(iVar14 + 0x218) - *(int *)(iVar14 + 0x214) >> 2));
        local_22c = local_268;
        pRVar26 = local_214;
      }
      local_214 = (RakNetGUID *)((int)pRVar26 - (int)local_22c >> 2);
      local_228 = (RakNetGUID *)0x0;
      local_268 = local_22c;
      if (local_214 != (RakNetGUID *)0x0) {
        do {
          pRVar26 = *(RakNetGUID **)((int)local_22c + (int)local_228 * 4);
          local_208 = *(NetworkData **)(iVar29 + *(int *)(this + 0x48));
          if (pRVar26 != (RakNetGUID *)0xffffffff) {
            local_230 = *(RakNetGUID **)(*(int *)(local_208 + 0x18) + 0x214);
            pRVar26 = (RakNetGUID *)0x0;
            local_21c = (RakNetGUID *)0x0;
            local_220 = (CargoState *)
                        (*(int *)(*(int *)(local_208 + 0x18) + 0x218) - (int)local_230 >> 2);
            if (local_220 != (CargoState *)0x0) {
              do {
                local_218 = *(NetworkData **)((int)&local_230->g + (int)local_21c * 4);
                pRVar26 = local_21c;
                this = local_23c;
                if (*(int *)local_218 == *(int *)((int)local_22c + (int)local_228 * 4))
                goto LAB_00429147;
                pRVar26 = (RakNetGUID *)((int)local_21c + 1);
                local_21c = pRVar26;
              } while (pRVar26 < local_220);
            }
          }
          local_218 = (NetworkData *)0x0;
LAB_00429147:
          startSyncingSensorDataState
                    ((NetworkServer *)pRVar26,(ShipSyncNode *)local_208,(SensorData *)local_218);
          local_21c = *(RakNetGUID **)(this + 0x3c);
          local_208 = (NetworkData *)0x0;
          if (*(int *)(this + 0x40) - (int)local_21c >> 2 != 0) {
            do {
              pRVar26 = *(RakNetGUID **)((int)local_21c + (int)local_208 * 4);
              pNVar16 = *(NetworkData **)(*(int *)(iVar29 + *(int *)(this + 0x48)) + 0x18);
              if (*(int *)((int)&pRVar26[4].g + 4) == *(int *)(pNVar16 + 0x250)) {
                if (Singleton<>::instance == (NetworkData *)0x0) {
                  Singleton<>::instance = operator_new(1);
                  pRVar26 = *(RakNetGUID **)((int)local_21c + (int)local_208 * 4);
                  pNVar16 = local_208;
                }
                NetworkData::sendUpdateSensorDataBasic(pNVar16,*pRVar26,(SensorData *)local_218);
                local_21c = (RakNetGUID *)(*(int *)(this + 0x3c) + (int)local_208 * 4);
                if (Singleton<>::instance == (NetworkData *)0x0) {
                  Singleton<>::instance = operator_new(1);
                }
                NetworkData::sendUpdateSensorDataAdvanced
                          ((NetworkData *)&stack0xfffffd44,**(RakNetGUID **)local_21c,
                           (SensorData *)local_218);
                local_21c = (RakNetGUID *)(*(int *)(this + 0x3c) + (int)local_208 * 4);
                if (Singleton<>::instance == (NetworkData *)0x0) {
                  Singleton<>::instance = operator_new(1);
                }
                NetworkData::sendUpdateSensorWaveform
                          ((NetworkData *)&stack0xfffffd44,**(RakNetGUID **)local_21c,
                           (SensorData *)local_218);
              }
              local_21c = *(RakNetGUID **)(this + 0x3c);
              local_208 = local_208 + 1;
            } while (local_208 < (NetworkData *)(*(int *)(this + 0x40) - (int)local_21c >> 2));
          }
          local_228 = (RakNetGUID *)((int)&local_228->g + 1);
        } while (local_228 < local_214);
      }
      local_230 = (RakNetGUID *)0x0;
      local_25c = (RakNetGUID *)0x0;
      local_218 = (NetworkData *)0x0;
      local_258 = (CargoState *)0x0;
      local_21c = (RakNetGUID *)0x0;
      local_254 = (CargoState *)0x0;
      local_8 = CONCAT31(local_8._1_3_,3);
      iVar14 = *(int *)(this + 0x48);
      local_208 = (NetworkData *)0x0;
      if (*(int *)(*(int *)(iVar14 + iVar29) + 0x38) - *(int *)(*(int *)(iVar14 + iVar29) + 0x34) >>
          2 != 0) {
        do {
          pNVar15 = local_23c;
          local_220 = *(CargoState **)
                       ((int)local_208 * 4 + *(int *)(*(int *)(iVar29 + iVar14) + 0x34));
          iVar14 = *(int *)(*(int *)(iVar29 + iVar14) + 0x18);
          if (*(int *)(local_220 + 4) != -1) {
            local_230 = *(RakNetGUID **)(iVar14 + 0x214);
            pRVar26 = (RakNetGUID *)0x0;
            local_228 = (RakNetGUID *)(*(int *)(iVar14 + 0x218) - (int)local_230 >> 2);
            if (local_228 != (RakNetGUID *)0x0) {
              do {
                piVar20 = *(int **)((int)&local_230->g + (int)pRVar26 * 4);
                this = local_23c;
                if (*piVar20 == *(int *)(local_220 + 4)) {
                  if (piVar20 != (int *)0x0) {
                    piVar20 = *(int **)(*(int *)(*(int *)(*(int *)(local_23c + 0x48) + iVar29) +
                                                0x34) + (int)local_208 * 4);
                    iVar14 = *piVar20;
                    iVar8 = *(int *)(iVar14 + 0x124);
                    iVar9 = piVar20[2];
                    if (iVar9 != iVar8) {
                      piVar20[2] = iVar8;
                    }
                    dVar3 = *(double *)(iVar14 + 0x10);
                    dVar4 = *(double *)(piVar20 + 4);
                    if (dVar4 != dVar3) {
                      *(double *)(piVar20 + 4) = dVar3;
                    }
                    local_201 = dVar4 != dVar3 || iVar9 != iVar8;
                    if ((float)piVar20[0x3a] != *(float *)(iVar14 + 0x114)) {
                      piVar20[0x3a] = (int)*(float *)(iVar14 + 0x114);
                      local_201 = true;
                    }
                    if (*(double *)(piVar20 + 6) != *(double *)(iVar14 + 0x18)) {
                      *(double *)(piVar20 + 6) = *(double *)(iVar14 + 0x18);
                      local_201 = true;
                    }
                    if (piVar20[0xe] != *(int *)(iVar14 + 0x30)) {
                      piVar20[0xe] = *(int *)(iVar14 + 0x30);
                      local_201 = true;
                    }
                    if ((float)piVar20[0xf] != *(float *)(iVar14 + 0x34)) {
                      piVar20[0xf] = (int)*(float *)(iVar14 + 0x34);
                      local_201 = true;
                    }
                    if ((float)piVar20[0x10] != *(float *)(iVar14 + 0x38)) {
                      piVar20[0x10] = (int)*(float *)(iVar14 + 0x38);
                      local_201 = true;
                    }
                    if ((float)piVar20[0x11] != *(float *)(iVar14 + 0x3c)) {
                      piVar20[0x11] = (int)*(float *)(iVar14 + 0x3c);
                      local_201 = true;
                    }
                    if ((float)piVar20[0x12] != *(float *)(iVar14 + 0x40)) {
                      piVar20[0x12] = (int)*(float *)(iVar14 + 0x40);
                      local_201 = true;
                    }
                    if (((float)piVar20[0x3b] == *(float *)(iVar14 + 0x104)) &&
                       ((float)piVar20[0x3c] == *(float *)(iVar14 + 0x108))) {
                      bVar12 = false;
                    }
                    else {
                      bVar12 = true;
                    }
                    if (bVar12) {
                      piVar20[0x3b] = *(int *)(iVar14 + 0x104);
                      piVar20[0x3c] = *(int *)(iVar14 + 0x108);
                      local_201 = true;
                    }
                    if ((float)piVar20[0x4f] != *(float *)(iVar14 + 0x128)) {
                      piVar20[0x4f] = (int)*(float *)(iVar14 + 0x128);
                      local_201 = true;
                    }
                    local_231 = SensorDataStates::checkAdvancedDetails
                                          (*(SensorDataStates **)
                                            (*(int *)(*(int *)(*(int *)(local_23c + 0x48) + iVar29)
                                                     + 0x34) + (int)local_208 * 4));
                    local_209 = SensorDataStates::checkWaveform
                                          (*(SensorDataStates **)
                                            (*(int *)(*(int *)(*(int *)(pNVar15 + 0x48) + iVar29) +
                                                     0x34) + (int)local_208 * 4));
                    if ((((local_201 != false) || (local_231 != '\0')) || ((bool)local_209)) ||
                       (param_1._0_1_ != '\0')) {
                      local_228 = *(RakNetGUID **)(pNVar15 + 0x3c);
                      local_214 = (RakNetGUID *)0x0;
                      if (*(int *)(pNVar15 + 0x40) - (int)local_228 >> 2 != 0) {
                        do {
                          pNVar19 = local_23c;
                          local_220 = *(CargoState **)(iVar29 + *(int *)(pNVar15 + 0x48));
                          pRVar26 = *(RakNetGUID **)((int)&local_228->g + (int)local_214 * 4);
                          local_230 = pRVar26;
                          if ((*(int *)((int)&pRVar26[4].g + 4) ==
                               *(int *)(*(int *)(local_220 + 0x18) + 0x250)) &&
                             (*(char *)((int)&pRVar26[6].g + 1) != '\0')) {
                            if ((local_201 != false) || (param_1._0_1_ != '\0')) {
                              local_220 = (CargoState *)
                                          (*(int *)(local_220 + 0x34) + (int)local_208 * 4);
                              if (Singleton<>::instance == (NetworkData *)0x0) {
                                Singleton<>::instance = operator_new(1);
                                pRVar26 = *(RakNetGUID **)((int)&local_228->g + (int)local_214 * 4);
                              }
                              NetworkData::sendUpdateSensorDataBasic
                                        ((NetworkData *)pRVar26,*pRVar26,
                                         (SensorData *)**(undefined4 **)local_220);
                              pNVar15 = pNVar19;
                            }
                            pNVar19 = local_23c;
                            if ((local_231 != '\0') || (param_1._0_1_ != '\0')) {
                              local_220 = (CargoState *)
                                          (*(int *)(*(int *)(*(int *)(pNVar15 + 0x48) + iVar29) +
                                                   0x34) + (int)local_208 * 4);
                              local_228 = (RakNetGUID *)
                                          (*(int *)(pNVar15 + 0x3c) + (int)local_214 * 4);
                              if (Singleton<>::instance == (NetworkData *)0x0) {
                                Singleton<>::instance = operator_new(1);
                              }
                              NetworkData::sendUpdateSensorDataAdvanced
                                        ((NetworkData *)&stack0xfffffd44,**(RakNetGUID **)local_228,
                                         (SensorData *)**(undefined4 **)local_220);
                              pNVar15 = pNVar19;
                            }
                            pNVar19 = local_23c;
                            if ((local_209 != '\0') || (param_1._0_1_ != '\0')) {
                              local_220 = (CargoState *)
                                          (*(int *)(*(int *)(*(int *)(pNVar15 + 0x48) + iVar29) +
                                                   0x34) + (int)local_208 * 4);
                              local_228 = (RakNetGUID *)
                                          (*(int *)(pNVar15 + 0x3c) + (int)local_214 * 4);
                              if (Singleton<>::instance == (NetworkData *)0x0) {
                                Singleton<>::instance = operator_new(1);
                              }
                              NetworkData::sendUpdateSensorWaveform
                                        ((NetworkData *)&stack0xfffffd44,**(RakNetGUID **)local_228,
                                         (SensorData *)**(undefined4 **)local_220);
                              pNVar15 = pNVar19;
                            }
                          }
                          local_228 = *(RakNetGUID **)(pNVar15 + 0x3c);
                          local_214 = (RakNetGUID *)((int)&local_214->g + 1);
                        } while (local_214 <
                                 (RakNetGUID *)(*(int *)(pNVar15 + 0x40) - (int)local_228 >> 2));
                      }
                    }
                    goto LAB_00429874;
                  }
                  break;
                }
                pRVar26 = (RakNetGUID *)((int)&pRVar26->g + 1);
              } while (pRVar26 < local_228);
            }
          }
          if (local_21c == (RakNetGUID *)local_218) {
            std::vector<>::_Emplace_reallocate<>
                      ((vector<> *)&local_25c,(MetaGameAction **)local_218,
                       (MetaGameAction **)(local_220 + 4));
            local_21c = (RakNetGUID *)local_254;
          }
          else {
            *(undefined4 *)local_218 = *(undefined4 *)(local_220 + 4);
            local_258 = (CargoState *)(local_218 + 4);
          }
          pNVar15 = this;
          local_218 = (NetworkData *)local_258;
          if (OISConfiguration::multiDebug != false) {
            debugPrint("NETWORK","Expunging sensor data %d (%s) for ship %s");
            pNVar15 = local_23c;
          }
LAB_00429874:
          iVar14 = *(int *)(pNVar15 + 0x48);
          local_208 = local_208 + 1;
          this = pNVar15;
        } while (local_208 <
                 (NetworkData *)
                 (*(int *)(*(int *)(iVar14 + iVar29) + 0x38) -
                  *(int *)(*(int *)(iVar14 + iVar29) + 0x34) >> 2));
        local_230 = local_25c;
      }
      local_214 = (RakNetGUID *)0x0;
      local_218 = (NetworkData *)((int)local_218 - (int)local_230 >> 2);
      local_25c = local_230;
      if (local_218 != (NetworkData *)0x0) {
        do {
          iVar14 = *(int *)(this + 0x3c);
          local_220 = (CargoState *)0x0;
          pNVar15 = this;
          if (*(int *)(this + 0x40) - iVar14 >> 2 != 0) {
LAB_004298e3:
            local_228 = *(RakNetGUID **)((int)local_220 * 4 + iVar14);
            this = pNVar15;
            if (*(int *)((int)&local_228[4].g + 4) ==
                *(int *)(*(int *)(*(int *)(*(int *)(pNVar15 + 0x48) + iVar29) + 0x18) + 0x250)) {
              if (OISConfiguration::multiDebug != false) {
                uVar18 = (uint)DAT_0065e444;
                DAT_0065e444 = DAT_0065e444 + 1;
                RakNet::RakNetGUID::ToString(local_228,&DAT_00662560 + (uVar18 & 7) * 0x40);
                debugPrint("NETWORK","Sent removeSensorData for sensorID %d to client %s");
              }
              iVar29 = *(int *)(pNVar15 + 0x3c);
              iVar14 = (int)local_220 * 4;
              if (Singleton<>::instance == (NetworkData *)0x0) {
                Singleton<>::instance = operator_new(1);
              }
              local_28c = 0x97;
              local_28b = *(undefined4 *)((int)&local_230->g + (int)local_214 * 4);
              piVar20 = *(int **)(iVar29 + iVar14);
              local_284 = (MetaGameAction *)*piVar20;
              pMStack_280 = (MetaGameAction *)piVar20[1];
              pMStack_27c = (MetaGameAction *)piVar20[2];
              pMStack_278 = (MetaGameAction *)piVar20[3];
              Singleton<>::getInstance();
              pNVar19 = Singleton<>::getInstance();
              piVar20 = *(int **)(pNVar19 + 0x90);
              uStack_2e0 = 0x4299d7;
              RakNet::AddressOrGUID::AddressOrGUID
                        ((AddressOrGUID *)&uStack_2d8,(RakNetGUID *)&local_284);
              uStack_2e0 = 3;
              uStack_2e4 = 1;
              (**(code **)(*piVar20 + 0x50))();
              this = local_23c;
              uVar22 = 0;
              local_208 = *(NetworkData **)(local_238 + *(int *)(pNVar15 + 0x48));
              local_228 = *(RakNetGUID **)(local_208 + 0x34);
              uVar18 = *(int *)(local_208 + 0x38) - (int)local_228 >> 2;
              if (uVar18 != 0) {
                do {
                  local_240 = *(RakNetGUID **)((int)&local_228->g + uVar22 * 4);
                  pNVar15 = local_23c;
                  if (*(int *)((int)&local_240->g + 4) ==
                      *(int *)((int)&local_230->g + (int)local_214 * 4)) {
                    if (local_240 != (RakNetGUID *)0x0) {
                      pRVar26 = *(RakNetGUID **)(local_208 + 0x38);
                      local_228 = *(RakNetGUID **)(local_208 + 0x34);
                      if (local_228 == pRVar26) goto LAB_00429bc3;
                      goto LAB_00429b40;
                    }
                    break;
                  }
                  uVar22 = uVar22 + 1;
                } while (uVar22 < uVar18);
              }
              this = pNVar15;
              debugPrint("DETAIL",
                         "WARNING: Told to remove sensor data locally, but failed to find it for removal."
                        );
              iVar29 = local_238;
            }
            goto LAB_00429a65;
          }
LAB_00429a85:
          local_214 = (RakNetGUID *)((int)local_214 + 1);
        } while (local_214 < local_218);
      }
      iVar14 = *(int *)(this + 0x48);
      local_218 = (NetworkData *)0x0;
      if (*(int *)(*(int *)(iVar29 + iVar14) + 0x50) - *(int *)(*(int *)(iVar29 + iVar14) + 0x4c) >>
          2 != 0) {
        do {
          local_220 = *(CargoState **)
                       (*(int *)(*(int *)(iVar29 + iVar14) + 0x4c) + (int)local_218 * 4);
          piVar20 = std::map<>::operator[]
                              ((map<> *)(*(int *)(local_220 + 8) + 0x14c),(int *)local_220);
          if (*piVar20 == *(int *)(local_220 + 4)) {
            if (param_1._0_1_ != '\0') goto LAB_00429c39;
          }
          else {
            piVar20 = std::map<>::operator[]
                                ((map<> *)(*(int *)(local_220 + 8) + 0x14c),(int *)local_220);
            *(int *)(local_220 + 4) = *piVar20;
LAB_00429c39:
            local_228 = *(RakNetGUID **)(this + 0x3c);
            local_220 = (CargoState *)0x0;
            if (*(int *)(this + 0x40) - (int)local_228 >> 2 != 0) {
              do {
                piVar20 = *(int **)((int)&local_228->g + (int)local_220 * 4);
                local_240 = *(RakNetGUID **)(iVar29 + *(int *)(this + 0x48));
                if (piVar20[0x11] == *(int *)(*(int *)&local_240[1].systemIndex + 0x250)) {
                  iVar29 = *(int *)&local_240[4].field_0xc;
                  iVar14 = (int)local_218 * 4;
                  if (Singleton<>::instance == (NetworkData *)0x0) {
                    Singleton<>::instance = operator_new(1);
                    piVar20 = *(int **)((int)&local_228->g + (int)local_220 * 4);
                  }
                  puVar10 = *(undefined4 **)(iVar29 + iVar14);
                  local_284 = (MetaGameAction *)*piVar20;
                  pMStack_280 = (MetaGameAction *)piVar20[1];
                  pMStack_27c = (MetaGameAction *)piVar20[2];
                  pMStack_278 = (MetaGameAction *)piVar20[3];
                  local_20 = 0xa0;
                  local_1b = puVar10[1];
                  local_1f = *puVar10;
                  Singleton<>::getInstance();
                  pNVar15 = Singleton<>::getInstance();
                  piVar20 = *(int **)(pNVar15 + 0x90);
                  uStack_2e0 = 0x429d00;
                  RakNet::AddressOrGUID::AddressOrGUID
                            ((AddressOrGUID *)&uStack_2d8,(RakNetGUID *)&local_284);
                  uStack_2e0 = 3;
                  uStack_2e4 = 1;
                  (**(code **)(*piVar20 + 0x50))();
                  iVar29 = local_238;
                }
                local_228 = *(RakNetGUID **)(this + 0x3c);
                local_220 = local_220 + 1;
              } while (local_220 < (CargoState *)(*(int *)(this + 0x40) - (int)local_228 >> 2));
            }
          }
          iVar14 = *(int *)(this + 0x48);
          local_218 = (NetworkData *)((int)local_218 + 1);
        } while (local_218 <
                 (MetaGameAction **)
                 (*(int *)(*(int *)(iVar29 + iVar14) + 0x50) -
                  *(int *)(*(int *)(iVar29 + iVar14) + 0x4c) >> 2));
      }
      local_214 = (RakNetGUID *)0x0;
      if (*(int *)(*(int *)(iVar29 + iVar14) + 0x44) - *(int *)(*(int *)(iVar29 + iVar14) + 0x40) >>
          2 != 0) {
        do {
          bVar12 = WeaponState::checkState
                             (*(WeaponState **)
                               (*(int *)(*(int *)(iVar29 + iVar14) + 0x40) + (int)local_214 * 4));
          if ((bVar12) || (param_1._0_1_ != '\0')) {
            iVar14 = *(int *)(this + 0x3c);
            local_218 = (NetworkData *)0x0;
            if (*(int *)(this + 0x40) - iVar14 >> 2 != 0) {
              do {
                local_220 = *(CargoState **)((int)local_218 * 4 + iVar14);
                if ((*(int *)(local_220 + 0x44) ==
                     *(int *)(*(int *)(*(int *)(iVar29 + *(int *)(this + 0x48)) + 0x18) + 0x250)) &&
                   (local_240 = *(RakNetGUID **)(iVar14 + (int)local_218 * 4),
                   local_220[0x61] != (CargoState)0x0)) {
                  if (OISConfiguration::multiDebug != false) {
                    uVar18 = (uint)DAT_0065e444;
                    DAT_0065e444 = DAT_0065e444 + 1;
                    RakNet::RakNetGUID::ToString(local_240,&DAT_00662560 + (uVar18 & 7) * 0x40);
                    debugPrint("NETWORK"," ...sending weapon data to %s");
                    iVar29 = local_238;
                  }
                  iVar29 = *(int *)(*(int *)(*(int *)(this + 0x48) + iVar29) + 0x40);
                  iVar14 = (int)local_214 * 4;
                  local_240 = (RakNetGUID *)(*(int *)(this + 0x3c) + (int)local_218 * 4);
                  if (Singleton<>::instance == (NetworkData *)0x0) {
                    Singleton<>::instance = operator_new(1);
                  }
                  piVar20 = *(int **)&local_240->g;
                  iVar14 = *(int *)(iVar29 + iVar14);
                  local_284 = (MetaGameAction *)*piVar20;
                  pMStack_280 = (MetaGameAction *)piVar20[1];
                  pMStack_27c = (MetaGameAction *)piVar20[2];
                  pMStack_278 = (MetaGameAction *)piVar20[3];
                  cocos2d::Vec2::Vec2((Vec2 *)&local_b7);
                  local_bb = *(undefined4 *)(iVar14 + 8);
                  local_b7 = *(undefined4 *)(iVar14 + 0x24);
                  local_b3 = *(undefined4 *)(iVar14 + 0x28);
                  local_bc = 0x9c;
                  std::basic_string<>::basic_string<>
                            ((basic_string<> *)&stack0xfffffd40,(basic_string<> *)(iVar14 + 0x2c));
                  safeStrCpy();
                  std::basic_string<>::basic_string<>
                            ((basic_string<> *)&stack0xfffffd40,(basic_string<> *)(iVar14 + 0xc));
                  safeStrCpy();
                  std::basic_string<>::basic_string<>
                            ((basic_string<> *)&stack0xfffffd40,(basic_string<> *)(iVar14 + 0x44));
                  safeStrCpy();
                  local_7d = *(undefined4 *)(iVar14 + 0x5c);
                  local_74 = *(undefined4 *)(iVar14 + 0x68);
                  local_79 = *(undefined4 *)(iVar14 + 0x60);
                  local_75 = *(undefined1 *)(iVar14 + 100);
                  local_70 = *(undefined1 *)(iVar14 + 0x70);
                  local_6f = *(undefined1 *)(iVar14 + 0x71);
                  local_6d = *(undefined4 *)(iVar14 + 0x6c);
                  local_6e = *(undefined1 *)(iVar14 + 0x72);
                  local_69 = *(undefined4 *)(iVar14 + 0x74);
                  local_65 = *(undefined4 *)(iVar14 + 0x78);
                  if (OISConfiguration::multiDebug != false) {
                    debugPrint("NETWORK","Packed weapon data: %d");
                  }
                  Singleton<>::getInstance();
                  pNVar15 = Singleton<>::getInstance();
                  piVar20 = *(int **)(pNVar15 + 0x90);
                  uStack_2e0 = 0x429fd6;
                  RakNet::AddressOrGUID::AddressOrGUID
                            ((AddressOrGUID *)&uStack_2d8,(RakNetGUID *)&local_284);
                  uStack_2e0 = 3;
                  uStack_2e4 = 1;
                  (**(code **)(*piVar20 + 0x50))();
                  cocos2d::Vec2::~Vec2((Vec2 *)&local_b7);
                  iVar29 = local_238;
                }
                local_218 = (NetworkData *)((int)local_218 + 1);
                iVar14 = *(int *)(this + 0x3c);
              } while (local_218 < (MetaGameAction **)(*(int *)(this + 0x40) - iVar14 >> 2));
            }
          }
          iVar14 = *(int *)(this + 0x48);
          local_214 = (RakNetGUID *)((int)local_214 + 1);
        } while (local_214 <
                 (CargoState *)
                 (*(int *)(*(int *)(iVar14 + iVar29) + 0x44) -
                  *(int *)(*(int *)(iVar14 + iVar29) + 0x40) >> 2));
      }
      local_8._0_1_ = 2;
      if (local_230 != (RakNetGUID *)0x0) {
        pnVar25 = (nothrow_t *)(((int)local_21c - (int)local_230 >> 2) * 4);
        pRVar26 = local_230;
        if ((nothrow_t *)0xfff < pnVar25) {
          pRVar26 = *(RakNetGUID **)&local_230[-1].field_0xc;
          pnVar25 = pnVar25 + 0x23;
          if (0x1f < (uint)((int)local_230 + (-4 - (int)pRVar26))) goto LAB_0042a237;
        }
        operator_delete(pRVar26,pnVar25);
        local_25c = (RakNetGUID *)0x0;
        local_258 = (CargoState *)0x0;
        local_254 = (CargoState *)0x0;
      }
      local_8._0_1_ = 0;
      if (local_22c != (void *)0x0) {
        pnVar25 = (nothrow_t *)(((int)local_224 - (int)local_22c >> 2) * 4);
        pvVar27 = local_22c;
        if ((nothrow_t *)0xfff < pnVar25) {
          pvVar27 = *(void **)((int)local_22c - 4);
          pnVar25 = pnVar25 + 0x23;
          if (0x1f < (uint)((int)local_22c + (-4 - (int)pvVar27))) goto LAB_0042a237;
        }
        operator_delete(pvVar27,pnVar25);
        local_268 = (void *)0x0;
        local_264 = (MetaGameAction **)0x0;
        local_260 = (MetaGameAction **)0x0;
      }
      local_8._0_1_ = 0xff;
      local_8._1_3_ = 0xffffff;
      if (local_210 != (NetworkData *)0x0) {
        pnVar25 = (nothrow_t *)(((int)local_244 - (int)local_210 >> 2) * 4);
        pNVar16 = local_210;
        if ((nothrow_t *)0xfff < pnVar25) {
          pNVar16 = *(NetworkData **)(local_210 + -4);
          pnVar25 = pnVar25 + 0x23;
          if ((NetworkData *)0x1f < local_210 + (-4 - (int)pNVar16)) {
LAB_0042a237:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pNVar16,pnVar25);
        local_274 = (NetworkData *)0x0;
        local_270 = (NetworkData *)0x0;
        local_26c = (NetworkData *)0x0;
      }
      iVar14 = *(int *)(this + 0x48);
      local_248 = local_248 + 1;
    } while (local_248 < (undefined1 *)(*(int *)(this + 0x4c) - iVar14 >> 2));
  }
  local_202 = false;
  pNVar19 = Singleton<>::getInstance();
  pNVar15 = pNVar19;
  if (0xf < *(uint *)(pNVar19 + 0x14)) {
    pNVar15 = *(NetworkServer **)pNVar19;
  }
  bVar12 = std::_Traits_equal<>
                     ((char *)pNVar15,*(uint *)(pNVar19 + 0x10),(char *)pbVar13,(uint)unaff_EDI);
  if (!bVar12) {
    pNVar15 = Singleton<>::getInstance();
    if ((basic_string<> *)(this + 0x54) != (basic_string<> *)pNVar15) {
      pNVar19 = pNVar15;
      if (0xf < *(uint *)(pNVar15 + 0x14)) {
        pNVar19 = *(NetworkServer **)pNVar15;
      }
      std::basic_string<>::assign
                ((basic_string<> *)(this + 0x54),(char *)pNVar19,*(uint *)(pNVar15 + 0x10));
    }
    local_202 = true;
  }
  pNVar15 = Singleton<>::getInstance();
  if (*(int *)(this + 0x6c) != *(int *)(pNVar15 + 0x40) - *(int *)(pNVar15 + 0x3c) >> 2) {
    pNVar15 = Singleton<>::getInstance();
    local_202 = true;
    *(int *)(this + 0x6c) = *(int *)(pNVar15 + 0x40) - *(int *)(pNVar15 + 0x3c) >> 2;
  }
  pNVar15 = Singleton<>::getInstance();
  cVar24 = local_202;
  if (*(int *)(this + 0x70) != *(int *)(pNVar15 + 0x28)) {
    pNVar15 = Singleton<>::getInstance();
    *(undefined4 *)(this + 0x70) = *(undefined4 *)(pNVar15 + 0x28);
    cVar24 = '\x01';
  }
  if (*(int *)(this + 0x74) == *(int *)(g_gameLogic + 0xa0)) {
    if ((cVar24 != '\0') || (param_1._0_1_ != '\0')) goto LAB_0042a265;
  }
  else {
    *(int *)(this + 0x74) = *(int *)(g_gameLogic + 0xa0);
LAB_0042a265:
    if (OISConfiguration::multiDebug != false) {
      debugPrint("NETWORK","Server info basic updated. Sending.");
    }
    local_210 = (NetworkData *)0x0;
    if (*(int *)(this + 0x40) - *(int *)(this + 0x3c) >> 2 != 0) {
      local_240 = (RakNetGUID *)(this + 0x84);
      do {
        local_250 = (NetworkData *)&uStack_2e4;
        local_248 = (undefined1 *)&uStack_2e4;
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)&uStack_2e4,(basic_string<> *)(this + 0x54));
        local_8 = 4;
        std::vector<>::vector<>((vector<> *)&stack0xfffffd40,(vector<> *)(this + 0x78));
        local_8 = CONCAT31(local_8._1_3_,5);
        std::vector<>::vector<>((vector<> *)&stack0xfffffd4c,(vector<> *)local_240);
        local_8 = 6;
        local_24c = *(int *)(this + 0x3c);
        if (Singleton<>::instance == (NetworkData *)0x0) {
          Singleton<>::instance = operator_new(1);
        }
        pNVar16 = local_210;
        local_8._0_1_ = 0xff;
        local_8._1_3_ = 0xffffff;
        NetworkData::sendServerInfoBasic();
        local_210 = pNVar16 + 1;
      } while (local_210 < (NetworkData *)(*(int *)(this + 0x40) - *(int *)(this + 0x3c) >> 2));
    }
  }
  bVar12 = ServerInfoState::checkAdvancedDetails((ServerInfoState *)(this + 0x54));
  if ((bVar12) || (param_1._0_1_ != '\0')) {
    if (OISConfiguration::multiDebug != false) {
      debugPrint("NETWORK","Server info advanced updated. Sending.");
    }
    local_210 = (NetworkData *)0x0;
    if (*(int *)(this + 0x40) - *(int *)(this + 0x3c) >> 2 != 0) {
      local_240 = (RakNetGUID *)(this + 0x84);
      do {
        local_250 = (NetworkData *)&uStack_2e4;
        local_248 = (undefined1 *)&uStack_2e4;
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)&uStack_2e4,(basic_string<> *)(this + 0x54));
        local_8 = 7;
        std::vector<>::vector<>((vector<> *)&stack0xfffffd40,(vector<> *)(this + 0x78));
        local_8 = CONCAT31(local_8._1_3_,8);
        std::vector<>::vector<>((vector<> *)&stack0xfffffd4c,(vector<> *)local_240);
        local_8 = 9;
        local_24c = *(int *)(this + 0x3c);
        if (Singleton<>::instance == (NetworkData *)0x0) {
          Singleton<>::instance = operator_new(1);
        }
        pNVar16 = local_210;
        local_8._0_1_ = 0xff;
        local_8._1_3_ = 0xffffff;
        NetworkData::sendServerInfoAdvanced();
        local_210 = pNVar16 + 1;
      } while (local_210 < (NetworkData *)(*(int *)(this + 0x40) - *(int *)(this + 0x3c) >> 2));
    }
  }
LAB_0042a46c:
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
  while (local_228 = (RakNetGUID *)((int)&local_228->g + 4), local_228 != pRVar26) {
LAB_00429b40:
    if (*(RakNetGUID **)&local_228->g == local_240) break;
  }
  if (local_228 != pRVar26) {
    pRVar23 = (RakNetGUID *)((int)&local_228->g + 4);
    local_208 = (NetworkData *)0x0;
    local_250 = (NetworkData *)((uint)((int)pRVar26 + (3 - (int)pRVar23)) >> 2);
    if (pRVar26 < pRVar23) {
      local_250 = (NetworkData *)0x0;
    }
    if (local_250 != (NetworkData *)0x0) {
      do {
        if (*(RakNetGUID **)&pRVar23->g != local_240) {
          *(RakNetGUID **)&local_228->g = *(RakNetGUID **)&pRVar23->g;
          local_228 = (RakNetGUID *)((int)&local_228->g + 4);
        }
        local_208 = local_208 + 1;
        pRVar23 = (RakNetGUID *)((int)&pRVar23->g + 4);
      } while (local_208 != local_250);
    }
  }
LAB_00429bc3:
  local_24c = *(int *)(*(int *)(local_23c + 0x48) + (int)local_248 * 4);
  if (local_228 != pRVar26) {
    sVar30 = *(int *)(local_24c + 0x38) - (int)pRVar26;
    memmove(local_228,pRVar26,sVar30);
    *(size_t *)(local_24c + 0x38) = (int)local_228 + sVar30;
  }
  pRVar26 = local_240;
  SensorDataStates::~SensorDataStates((SensorDataStates *)local_240);
  operator_delete(pRVar26,(nothrow_t *)0x148);
  debugPrint("DETAIL","Removed sensor data sync node on server.");
  iVar29 = local_238;
LAB_00429a65:
  iVar14 = *(int *)(this + 0x3c);
  local_220 = local_220 + 1;
  pNVar15 = this;
  if ((CargoState *)(*(int *)(this + 0x40) - iVar14 >> 2) <= local_220) goto LAB_00429a85;
  goto LAB_004298e3;
}


// public: class ClientInfo * __thiscall NetworkServer::addClientInfo(struct
// RakNet::RakNetGUID,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >)

ClientInfo * __thiscall
NetworkServer::addClientInfo
          (NetworkServer *this,int param_1,int param_3,undefined4 param_4,undefined4 param_5,
          basic_string<> *param_6)

{
  vector<> *this_00;
  AnimationFrames **ppAVar1;
  RakNetGUID RVar2;
  bool bVar3;
  uint uVar4;
  basic_string<> *pbVar5;
  basic_string<> *pbVar6;
  int *piVar7;
  nothrow_t *pnVar8;
  uint uVar9;
  uint in_stack_00000024;
  uint in_stack_00000028;
  NetworkServer *local_18;
  vector<> *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b3988;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_00 = (vector<> *)(this + 0x3c);
  local_8 = 0;
  uVar4 = 0;
  piVar7 = *(int **)this_00;
  uVar9 = *(int *)(this + 0x40) - (int)piVar7 >> 2;
  local_18 = this;
  local_14 = this_00;
  if (uVar9 != 0) {
    do {
      if ((*(int *)*piVar7 == param_1) && (((int *)*piVar7)[1] == param_3)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        if (*(int *)(*(int *)this_00 + uVar4 * 4) != 0) {
          RVar2.g._4_4_ = param_3;
          RVar2.g._0_4_ = param_1;
          RVar2._8_4_ = param_4;
          RVar2._12_4_ = param_5;
          removeClientInfo(this,RVar2);
        }
        break;
      }
      uVar4 = uVar4 + 1;
      piVar7 = piVar7 + 1;
    } while (uVar4 < uVar9);
  }
  local_18 = operator_new(0x70);
  pbVar6 = (basic_string<> *)(local_18 + 0x10);
  *(undefined2 *)(local_18 + 8) = 0xffff;
  *(undefined4 *)local_18 = DAT_006578d0;
  *(undefined4 *)(local_18 + 4) = DAT_006578d4;
  *(undefined2 *)(local_18 + 8) = DAT_006578d8;
  *(undefined4 *)(local_18 + 0x20) = 0;
  *(undefined4 *)(local_18 + 0x24) = 0xf;
  *pbVar6 = (basic_string<>)0x0;
  *(undefined4 *)(local_18 + 0x38) = 0;
  *(undefined4 *)(local_18 + 0x3c) = 0xf;
  *(AnimationFrames *)(local_18 + 0x28) = (AnimationFrames)0x0;
  *(undefined4 *)(local_18 + 0x40) = 0x70000;
  *(undefined4 *)(local_18 + 0x44) = 0xffffffff;
  *(undefined4 *)(local_18 + 0x58) = 0;
  *(undefined4 *)(local_18 + 0x5c) = 0xf;
  *(AnimationFrames *)(local_18 + 0x48) = (AnimationFrames)0x0;
  *(undefined2 *)(local_18 + 0x60) = 0;
  *(undefined4 *)(local_18 + 100) = 0;
  *(undefined4 *)(local_18 + 0x68) = 0;
  *(int *)local_18 = param_1;
  *(int *)(local_18 + 4) = param_3;
  *(ushort *)(local_18 + 8) = (ushort)param_4;
  local_14 = (vector<> *)local_18;
  if (pbVar6 != (basic_string<> *)&param_6) {
    pbVar5 = (basic_string<> *)&param_6;
    if (0xf < in_stack_00000028) {
      pbVar5 = param_6;
    }
    std::basic_string<>::assign(pbVar6,(char *)pbVar5,in_stack_00000024);
  }
  ppAVar1 = *(AnimationFrames ***)(this + 0x40);
  if (*(AnimationFrames ***)(this + 0x44) == ppAVar1) {
    std::vector<>::_Emplace_reallocate<>(this_00,ppAVar1,(AnimationFrames **)&local_18);
    local_14 = (vector<> *)local_18;
  }
  else {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(this + 0x40) = *(int *)(this + 0x40) + 4;
  }
  if (OISConfiguration::multiDebug != false) {
    pbVar6 = (basic_string<> *)&param_6;
    if (0xf < in_stack_00000028) {
      pbVar6 = param_6;
    }
    uVar4 = (uint)DAT_0065e444;
    DAT_0065e444 = DAT_0065e444 + 1;
    RakNet::RakNetGUID::ToString((RakNetGUID *)&param_1,&DAT_00662560 + (uVar4 & 7) * 0x40);
    debugPrint("NETWORK","Added client with GUID %s, address %s",&DAT_00662560 + (uVar4 & 7) * 0x40,
               pbVar6);
  }
  if (0xf < in_stack_00000028) {
    pnVar8 = (nothrow_t *)(in_stack_00000028 + 1);
    pbVar6 = param_6;
    if ((nothrow_t *)0xfff < pnVar8) {
      pbVar6 = *(basic_string<> **)(param_6 + -4);
      pnVar8 = (nothrow_t *)(in_stack_00000028 + 0x24);
      if ((basic_string<> *)0x1f < param_6 + (-4 - (int)pbVar6)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar6,pnVar8);
  }
  ExceptionList = local_10;
  return (ClientInfo *)local_14;
}


// public: void __thiscall NetworkServer::removeClientInfo(struct RakNet::RakNetGUID)

void __thiscall NetworkServer::removeClientInfo(NetworkServer *this,RakNetGUID param_1)

{
  ClientInfo *this_00;
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  NetworkServer *pNVar5;
  uint uVar6;
  undefined4 *puVar7;
  ClientInfo *pCVar8;
  NetworkServer *pNVar9;
  
  uVar3 = 0;
  puVar7 = *(undefined4 **)(this + 0x3c);
  uVar6 = *(int *)(this + 0x40) - (int)puVar7 >> 2;
  if (uVar6 != 0) {
    while ((this_00 = (ClientInfo *)puVar7[uVar3], *(int *)this_00 != (int)param_1.g ||
           (*(int *)(this_00 + 4) != param_1.g._4_4_))) {
      uVar3 = uVar3 + 1;
      if (uVar6 <= uVar3) {
        return;
      }
    }
    if (this_00 != (ClientInfo *)0x0) {
      if (OISConfiguration::multiDebug) {
        pCVar8 = this_00 + 0x10;
        if (0xf < *(uint *)(this_00 + 0x24)) {
          pCVar8 = *(ClientInfo **)pCVar8;
        }
        uVar3 = (uint)DAT_0065e444;
        DAT_0065e444 = DAT_0065e444 + 1;
        RakNet::RakNetGUID::ToString(&param_1,&DAT_00662560 + (uVar3 & 7) * 0x40);
        debugPrint("NETWORK","Removed client with GUID %s, IP %s",&DAT_00662560 + (uVar3 & 7) * 0x40
                   ,pCVar8);
        puVar7 = *(undefined4 **)(this + 0x3c);
      }
      puVar1 = *(undefined4 **)(this + 0x40);
      pNVar5 = this;
      if (puVar7 != puVar1) {
        do {
          if ((ClientInfo *)*puVar7 == this_00) break;
          puVar7 = puVar7 + 1;
        } while (puVar7 != puVar1);
        if (puVar7 != puVar1) {
          puVar4 = puVar7 + 1;
          pNVar5 = (NetworkServer *)0x0;
          pNVar9 = (NetworkServer *)((uint)((int)puVar1 + (3 - (int)puVar4)) >> 2);
          if (puVar1 < puVar4) {
            pNVar9 = (NetworkServer *)0x0;
          }
          if (pNVar9 != (NetworkServer *)0x0) {
            do {
              if ((ClientInfo *)*puVar4 != this_00) {
                *puVar7 = (ClientInfo *)*puVar4;
                puVar7 = puVar7 + 1;
              }
              pNVar5 = pNVar5 + 1;
              puVar4 = puVar4 + 1;
            } while (pNVar5 != pNVar9);
          }
          if (puVar7 != puVar1) {
            iVar2 = *(int *)(this + 0x40);
            memmove(puVar7,puVar1,iVar2 - (int)puVar1);
            *(int *)(this + 0x40) = (iVar2 - (int)puVar1) + (int)puVar7;
            pNVar5 = this;
          }
        }
      }
      ClientInfo::_scalar_deleting_destructor_(this_00,(uint)pNVar5);
    }
  }
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: void __thiscall NetworkServer::parseRemoteCommand(class ClientInfo *,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

void __thiscall
NetworkServer::parseRemoteCommand(undefined4 param_1_00,undefined1 *param_1,void *param_3)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  basic_string<> *pbVar7;
  undefined4 *puVar8;
  undefined4 ****ppppuVar9;
  void *pvVar10;
  nothrow_t *pnVar11;
  int iVar12;
  uint unaff_EDI;
  int iVar13;
  uint in_stack_0000001c;
  basic_string<> local_ac [4];
  undefined4 uStack_a8;
  char *in_stack_ffffff6c;
  uint in_stack_ffffff70;
  undefined4 *local_6c [4];
  char ***local_5c;
  int local_58;
  undefined4 ***local_50;
  NetworkServer *local_4c;
  undefined1 *local_48;
  char ***local_44 [4];
  int local_34;
  uint local_30;
  undefined4 ***local_2c [4];
  int local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  char ****ppppcVar6;
  
  puStack_c = &DAT_005b3a08;
  local_10 = ExceptionList;
  pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_48 = param_1;
  local_8 = 0;
  local_14 = pcVar2;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff6c,(basic_string<> *)&param_3)
  ;
  firstWordSeparated();
  local_8._0_1_ = 1;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  if (local_6c[0][4] == 0) {
                    // WARNING: Subroutine does not return
    std::_String_val<>::_Xran();
  }
  uVar3 = local_6c[0][4] - 1;
  uVar5 = local_6c[0][10];
  if (uVar3 < (uint)local_6c[0][10]) {
    uVar5 = uVar3;
  }
  puVar8 = local_6c[0];
  if (0xf < (uint)local_6c[0][5]) {
    puVar8 = (undefined4 *)*local_6c[0];
  }
  std::basic_string<>::assign((basic_string<> *)local_2c,(char *)((int)puVar8 + 1),uVar5);
  local_8._0_1_ = 2;
  local_50 = local_2c;
  if (0xf < local_18) {
    local_50 = local_2c[0];
  }
  ppppuVar9 = local_2c;
  if (0xf < local_18) {
    ppppuVar9 = (undefined4 ****)local_2c[0];
  }
  iVar13 = (local_1c + (int)local_50) - (int)ppppuVar9;
  iVar12 = 0;
  if ((undefined4 ****)(local_1c + (int)local_50) < ppppuVar9) {
    iVar13 = 0;
  }
  if (iVar13 != 0) {
    do {
      iVar4 = tolower((int)*(char *)(iVar12 + (int)ppppuVar9));
      *(char *)(iVar12 + (int)local_50) = (char)iVar4;
      iVar12 = iVar12 + 1;
      param_1 = local_48;
    } while (iVar12 != iVar13);
  }
  std::basic_string<>::basic_string<>
            ((basic_string<> *)&stack0xffffff6c,(basic_string<> *)(local_6c[0] + 6));
  splitStringBy();
  local_8._0_1_ = 3;
  bVar1 = std::_Traits_equal<>("me",2,in_stack_ffffff6c,in_stack_ffffff70);
  if (bVar1) {
    iVar12 = local_58 - (int)local_5c >> 0x1f;
    if ((local_58 - (int)local_5c) / 0x18 + iVar12 != iVar12) {
      uStack_a8 = 0x42acb5;
      local_4c = (NetworkServer *)&stack0xffffff6c;
      strUsingArgs(&stack0xffffff6c);
      local_48 = local_ac;
      local_8._0_1_ = 4;
      local_ac[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_ac,"",0);
      local_8._0_1_ = 5;
      if (Singleton<>::instance == (NetworkData *)0x0) {
        Singleton<>::instance = operator_new(1);
      }
      local_8._0_1_ = 3;
      NetworkData::sendChatLineFromServer();
    }
  }
  else {
    bVar1 = std::_Traits_equal<>("rcon",4,pcVar2,unaff_EDI);
    if (bVar1) {
      local_34 = 0;
      local_30 = 0xf;
      uVar5 = (uint)local_44[0] >> 8;
      local_44[0] = (char ***)(uVar5 << 8);
      local_8._0_1_ = 6;
      iVar12 = local_58 - (int)local_5c >> 0x1f;
      if ((local_58 - (int)local_5c) / 0x18 + iVar12 == iVar12) {
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (char ***)(uVar5 << 8);
      }
      else {
        if (local_44 != (char ****)local_5c) {
          ppppcVar6 = (char ****)local_5c;
          if ((char ***)0xf < local_5c[5]) {
            ppppcVar6 = (char ****)*local_5c;
          }
          std::basic_string<>::assign
                    ((basic_string<> *)local_44,(char *)ppppcVar6,(uint)local_5c[4]);
        }
        ppppcVar6 = local_44;
        if (0xf < local_30) {
          ppppcVar6 = (char ****)local_44[0];
        }
        uVar5 = (int)ppppcVar6 + local_34;
        ppppcVar6 = local_44;
        if (0xf < local_30) {
          ppppcVar6 = (char ****)local_44[0];
        }
        std::transform<>();
        bVar1 = std::_Traits_equal<>("access",6,(char *)ppppcVar6,uVar5);
        if (bVar1) {
          if ((uint)((local_58 - (int)local_5c) / 0x18) < 2) {
            local_4c = (NetworkServer *)&stack0xffffff6c;
            std::basic_string<>::assign
                      ((basic_string<> *)&stack0xffffff6c,"Misssing RCON password.",0x17);
            local_8._0_1_ = 7;
            Singleton<>::getInstance();
            local_8._0_1_ = 6;
            NetworkData::sendMessageToClient();
          }
          else {
            pbVar7 = &OISConfiguration::rconPassword;
            if (0xf < DAT_00657794) {
              pbVar7 = _rconPassword;
            }
            bVar1 = std::_Traits_equal<>((char *)pbVar7,DAT_00657790,pcVar2,unaff_EDI);
            if (bVar1) {
              param_1[0x43] = 1;
              local_4c = (NetworkServer *)&stack0xffffff6c;
              strUsingArgs(&stack0xffffff6c);
              local_48 = local_ac;
              local_8._0_1_ = 8;
              local_ac[0] = (basic_string<>)0x0;
              std::basic_string<>::assign(local_ac,"system",6);
              local_8._0_1_ = 9;
              Singleton<>::getInstance();
              local_8._0_1_ = 6;
              NetworkData::sendChatLineFromServer();
            }
            else {
              local_4c = (NetworkServer *)&stack0xffffff6c;
              std::basic_string<>::assign
                        ((basic_string<> *)&stack0xffffff6c,"Invalid RCON password.",0x16);
              local_8._0_1_ = 10;
              Singleton<>::getInstance();
              local_8._0_1_ = 6;
              NetworkData::sendMessageToClient();
            }
          }
        }
        else if ((param_1[0x43] != '\0') &&
                (bVar1 = std::_Traits_equal<>("launch",6,pcVar2,unaff_EDI), bVar1)) {
          forceSessionToBegin(local_4c);
        }
        if (0xf < local_30) {
          pnVar11 = (nothrow_t *)(local_30 + 1);
          ppppcVar6 = (char ****)local_44[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            ppppcVar6 = (char ****)local_44[0][-1];
            pnVar11 = (nothrow_t *)(local_30 + 0x24);
            if (0x1f < (uint)((int)local_44[0] + (-4 - (int)ppppcVar6))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(ppppcVar6,pnVar11);
        }
      }
    }
  }
  std::vector<>::_Tidy((vector<> *)&local_5c);
  if (0xf < local_18) {
    pnVar11 = (nothrow_t *)(local_18 + 1);
    ppppuVar9 = (undefined4 ****)local_2c[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      ppppuVar9 = (undefined4 ****)local_2c[0][-1];
      pnVar11 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppuVar9,pnVar11);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  std::vector<>::_Tidy((vector<> *)local_6c);
  if (0xf < in_stack_0000001c) {
    pnVar11 = (nothrow_t *)(in_stack_0000001c + 1);
    pvVar10 = param_3;
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)param_3 + -4);
      pnVar11 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar11);
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall NetworkServer::forceSessionToBegin(void)

void __thiscall NetworkServer::forceSessionToBegin(NetworkServer *this)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  basic_string<> local_54 [12];
  undefined4 uStack_48;
  basic_string<> local_3c [16];
  undefined4 local_2c;
  undefined4 local_28;
  uint uStack_24;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b3a40;
  local_10 = ExceptionList;
  uStack_24 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2c = 0;
  local_28 = 0xf;
  local_3c[0] = (basic_string<>)0x0;
  uStack_48 = 0x42b07e;
  std::basic_string<>::assign(local_3c,"Server forcing session to begin.",0x20);
  local_8 = 0;
  local_54[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_54,"system",6);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (Singleton<>::instance == (NetworkData *)0x0) {
    Singleton<>::instance = operator_new(1);
  }
  local_8 = 0xffffffff;
  NetworkData::sendChatLineFromServer();
  piVar2 = *(int **)(this + 0x3c);
  uVar3 = 0;
  uVar4 = (uint)((int)*(int **)(this + 0x40) + (3 - (int)piVar2)) >> 2;
  if (*(int **)(this + 0x40) < piVar2) {
    uVar4 = 0;
  }
  if (uVar4 != 0) {
    do {
      iVar1 = *piVar2;
      piVar2 = piVar2 + 1;
      uVar3 = uVar3 + 1;
      *(undefined1 *)(iVar1 + 0x41) = 1;
    } while (uVar3 != uVar4);
  }
  ExceptionList = local_10;
  return;
}
