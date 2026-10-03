#include "../ois.exe.h"


// public: void __thiscall NetworkClient::initialise(void)

void __thiscall NetworkClient::initialise(NetworkClient *this)

{
  RakPeer *this_00;
  undefined4 uVar1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b2d32;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(this + 0x30) == 0) {
    debugPrint("MULTI","NetworkClient() initialising.",___security_cookie ^ (uint)&stack0xfffffffc);
    this_00 = operator_new(0x5e0);
    local_8 = 0;
    memset(this_00,0,0x5e0);
    uVar1 = RakNet::RakPeer::RakPeer(this_00);
    *(undefined4 *)(this + 0x30) = uVar1;
  }
  ExceptionList = local_10;
  return;
}


// public: bool __thiscall NetworkClient::validServer(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

bool __thiscall NetworkClient::validServer(undefined4 param_1,void *param_2)

{
  char *pcVar1;
  int iVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  bool bVar5;
  int in_stack_00000014;
  uint in_stack_00000018;
  char *in_stack_0000001c;
  uint in_stack_00000030;
  
  pcVar1 = (char *)&stack0x0000001c;
  if (0xf < in_stack_00000030) {
    pcVar1 = in_stack_0000001c;
  }
  iVar2 = atoi(pcVar1);
  if ((in_stack_00000014 == 0) || (iVar2 < 1)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (0xf < in_stack_00000018) {
    pnVar4 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar3 = param_2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_2 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar3))) goto LAB_0041aeb1;
    }
    operator_delete(pvVar3,pnVar4);
  }
  if (0xf < in_stack_00000030) {
    pnVar4 = (nothrow_t *)(in_stack_00000030 + 1);
    pcVar1 = in_stack_0000001c;
    if ((nothrow_t *)0xfff < pnVar4) {
      pcVar1 = *(char **)(in_stack_0000001c + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000030 + 0x24);
      if ((char *)0x1f < in_stack_0000001c + (-4 - (int)pcVar1)) {
LAB_0041aeb1:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar1,pnVar4);
  }
  return bVar5;
}


// public: void __thiscall NetworkClient::connectToServer(char const * const,int)

void __thiscall NetworkClient::connectToServer(NetworkClient *this,char *param_1,int param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  basic_string<> abStack_64 [4];
  undefined4 uStack_60;
  char *pcVar3;
  uint uVar4;
  
  if (*(int *)(this + 0x30) == 0) {
    initialise(this);
  }
  std::basic_string<>::assign((basic_string<> *)(g_gameData + 0x25c),"",0);
  *(undefined4 *)(g_gameData + 0x274) = 0xffffffff;
  *(undefined2 *)(g_gameLogic + 0x71) = 1;
  strUsingArgs(&stack0xffffffd0);
  addChatLogItem(this);
  if (*(void **)(this + 0x34) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x34),(nothrow_t *)0x34);
  }
  puVar1 = operator_new(0x34);
  *(undefined1 *)(puVar1 + 0x16) = 1;
  *(undefined4 *)(puVar1 + 0x11) = 2;
  *puVar1 = 0xa609;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  *(undefined2 **)(this + 0x34) = puVar1;
  uVar2 = (**(code **)(**(int **)(this + 0x30) + 4))();
  switch(uVar2) {
  case 0:
    debugPrint("MULTI","CLIENT: using port %d");
    goto switchD_0041af99_caseD_2;
  case 1:
    uVar4 = 0x1d;
    pcVar3 = "Error: RAKNET_ALREADY_STARTED";
    break;
  default:
    goto switchD_0041af99_caseD_2;
  case 3:
    uVar4 = 0x1e;
    pcVar3 = "Error: INVALID_MAX_CONNECTIONS";
    break;
  case 4:
    uVar4 = 0x22;
    pcVar3 = "Error: SOCKET_FAMILY_NOT_SUPPORTED";
    break;
  case 5:
    uVar4 = 0x21;
    pcVar3 = "Error: SOCKET_PORT_ALREADY_IN_USE";
    break;
  case 6:
    uVar4 = 0x1c;
    pcVar3 = "Error: SOCKET_FAILED_TO_BIND";
    break;
  case 7:
    uVar4 = 0x1e;
    pcVar3 = "Error: SOCKET_FAILED_TEST_SEND";
    break;
  case 8:
    uVar4 = 0x1a;
    pcVar3 = "Error: PORT_CANNOT_BE_ZERO";
    break;
  case 9:
    uVar4 = 0x26;
    pcVar3 = "Error: FAILED_TO_CREATE_NETWORK_THREAD";
    break;
  case 10:
    uVar4 = 0x1e;
    pcVar3 = "Error: COULD_NOT_GENERATE_GUID";
    break;
  case 0xb:
    uVar4 = 0x1c;
    pcVar3 = "Error: STARTUP_OTHER_FAILURE";
  }
  std::basic_string<>::assign((basic_string<> *)&stack0xffffffc0,pcVar3,uVar4);
  addChatLogItem(this);
switchD_0041af99_caseD_2:
  uVar2 = (**(code **)(**(int **)(this + 0x30) + 0x30))();
  switch(uVar2) {
  case 0:
    uStack_60 = 0x41b09b;
    debugPrint("MULTI","Connecting to %s:%d...");
    *(undefined4 *)(this + 0x20) = 1;
    this[0x1c] = (NetworkClient)0x0;
    return;
  case 1:
    uVar4 = 0x18;
    pcVar3 = "Error: INVALID_PARAMETER";
    break;
  case 2:
    uVar4 = 0x21;
    pcVar3 = "Error: CANNOT_RESOLVE_DOMAIN_NAME";
    break;
  case 3:
    uVar4 = 0x24;
    pcVar3 = "Error: ALREADY_CONNECTED_TO_ENDPOINT";
    break;
  case 4:
    uVar4 = 0x2d;
    pcVar3 = "Error: CONNECTION_ATTEMPT_ALREADY_IN_PROGRESS";
    break;
  case 5:
    uVar4 = 0x25;
    pcVar3 = "Error: SECURITY_INITIALIZATION_FAILED";
    break;
  default:
    goto switchD_0041b083_default;
  }
  abStack_64[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(abStack_64,pcVar3,uVar4);
  addChatLogItem(this);
switchD_0041b083_default:
  this[0x1c] = (NetworkClient)0x0;
  return;
}


// public: void __thiscall NetworkClient::disconnectFromServer(void)

void __thiscall NetworkClient::disconnectFromServer(NetworkClient *this)

{
  GameLogic *pGVar1;
  
  if (*(int **)(this + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x30) + 0x38))(3,0,3);
    pGVar1 = g_gameLogic;
    *(undefined4 *)(this + 0x20) = 0;
    *(undefined2 *)(pGVar1 + 0x71) = 0x100;
    debugPrint("MULTI","Disconnected from server.");
  }
  return;
}


// public: void __thiscall NetworkClient::runLogic(float)

void __thiscall NetworkClient::runLogic(NetworkClient *this,float param_1)

{
  float fVar1;
  char cVar2;
  AnimationFrames **ppAVar3;
  basic_string<> *this_00;
  Weapon *pWVar4;
  Waypoint *pWVar5;
  GameLogic *pGVar6;
  GameData *pGVar7;
  byte bVar8;
  char *pcVar9;
  Ship *pSVar10;
  SoundEngine *this_01;
  byte *pbVar11;
  uint uVar12;
  NetworkClient *pNVar13;
  NetworkData *this_02;
  NetworkData *this_03;
  NetworkData *this_04;
  NetworkData *this_05;
  NetworkData *this_06;
  NetworkData *this_07;
  NetworkData *this_08;
  char *pcVar14;
  NetworkData *this_09;
  NetworkData *this_10;
  NetworkData *this_11;
  NetworkData *this_12;
  NetworkData *this_13;
  NetworkData *this_14;
  NetworkData *this_15;
  int *piVar15;
  undefined4 *puVar16;
  SystemManager *pSVar17;
  uint uVar18;
  float *pfVar19;
  uint unaff_EDI;
  SystemManager *pSVar20;
  int iVar21;
  bool bVar22;
  AddressOrGUID AStack_dc;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 *puStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_98;
  Sound SVar23;
  char *pcVar24;
  int iVar25;
  undefined4 local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_3b;
  undefined1 local_34;
  undefined4 local_33;
  PresentationInterface *local_2c;
  SensorData *local_28;
  undefined1 *local_24;
  LogLine *local_20;
  SystemManager *local_1c;
  NetworkClient *local_18;
  undefined1 local_12;
  char local_11;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b2da3;
  local_10 = ExceptionList;
  pcVar9 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  if (*(int **)(this + 0x30) != (int *)0x0) {
    local_11 = '\0';
    local_18 = this;
    DAT_0065e554 = (NetworkData *)(**(code **)(**(int **)(this + 0x30) + 0x5c))();
    while (DAT_0065e554 != (NetworkData *)0x0) {
      if (DAT_0065e554 == (NetworkData *)0x0) {
        bVar8 = 0xff;
      }
      else {
        bVar8 = **(byte **)(DAT_0065e554 + 0x30);
      }
      DAT_0065e550 = (uint)bVar8;
      if (OISConfiguration::multiDebug != false) {
        debugPrint("NETWORK","Client received packet, identifier %d size %d.");
      }
      switch(DAT_0065e550) {
      case 10:
        std::basic_string<>::assign
                  ((basic_string<> *)&stack0xffffff80,"Error: ID_REMOTE_SYSTEM_REQUIRES_PUBLIC_KEY",
                   0x2b);
        addChatLogItem(this);
        *(undefined4 *)(this + 0x20) = 0;
        debugPrint("ERROR","ID_REMOTE_SYSTEM_REQUIRES_PUBLIC_KEY");
        break;
      case 0xb:
        std::basic_string<>::assign
                  ((basic_string<> *)&stack0xffffff80,"Error: ID_OUR_SYSTEM_REQUIRES_SECURITY",0x26)
        ;
        addChatLogItem(this);
        *(undefined4 *)(this + 0x20) = 0;
        debugPrint("ERROR","ID_OUR_SYSTEM_REQUIRES_SECURITY");
        break;
      case 0xc:
        std::basic_string<>::assign
                  ((basic_string<> *)&stack0xffffff80,"Error: ID_PUBLIC_KEY_MISMATCH",0x1d);
        addChatLogItem(this);
        *(undefined4 *)(this + 0x20) = 0;
        debugPrint("ERROR","ID_PUBLIC_KEY_MISMATCH");
        break;
      default:
        if (OISConfiguration::multiDebug != false) {
          pcVar24 = "Received an unknown packet: %d";
LAB_0041c326:
          debugPrint("NETWORK",pcVar24);
        }
        break;
      case 0x10:
        std::basic_string<>::assign((basic_string<> *)&stack0xffffff80,"Connected to server.",0x14);
        addChatLogItem(this);
        *(undefined4 *)(this + 0x20) = 2;
        debugPrint("MULTI","Connected to server.");
        local_1c = (SystemManager *)&stack0xffffff80;
        std::basic_string<>::assign((basic_string<> *)&stack0xffffff80,"auto",4);
        local_24 = (undefined1 *)&uStack_98;
        local_8 = 0;
        uStack_a0 = 0x41b2f4;
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)&uStack_98,(basic_string<> *)&OISConfiguration::username);
        local_8 = CONCAT31(local_8._1_3_,1);
        Singleton<>::getInstance();
        local_8 = 0xffffffff;
        NetworkData::sendSetClientInfo();
        Singleton<>::getInstance();
        local_34 = 0x86;
        local_33 = 0;
        pNVar13 = Singleton<>::getInstance();
        piVar15 = *(int **)(pNVar13 + 0x30);
        uStack_a0 = 0x41b334;
        RakNet::AddressOrGUID::AddressOrGUID
                  ((AddressOrGUID *)&uStack_98,(RakNetGUID *)&DAT_00657688);
        uStack_a0 = 3;
        uStack_a4 = 1;
        uStack_a8 = 5;
        puStack_ac = &local_34;
        uStack_b0 = 0x41b347;
        (**(code **)(*piVar15 + 0x50))();
        uStack_b0 = 0x41b34c;
        Singleton<>::getInstance();
        local_3c = 0x86;
        local_3b = 1;
        uStack_b0 = 0x41b35c;
        pNVar13 = Singleton<>::getInstance();
        uStack_b0 = 0;
        uStack_b4 = 1;
        piVar15 = *(int **)(pNVar13 + 0x30);
        RakNet::AddressOrGUID::AddressOrGUID(&AStack_dc,(RakNetGUID *)&DAT_00657688);
        (**(code **)(*piVar15 + 0x50))(&local_3c,5,1,3,0);
        this = local_18;
        break;
      case 0x11:
        std::basic_string<>::assign
                  ((basic_string<> *)&stack0xffffff80,"Error: ID_CONNECTION_ATTEMPT_FAILED",0x23);
        addChatLogItem(this);
        *(undefined4 *)(this + 0x20) = 0;
        debugPrint("ERROR","ID_CONNECTION_ATTEMPT_FAILED");
        break;
      case 0x12:
        std::basic_string<>::assign
                  ((basic_string<> *)&stack0xffffff80,"Error: ID_ALREADY_CONNECTED",0x1b);
        addChatLogItem(this);
        *(undefined4 *)(this + 0x20) = 0;
        debugPrint("ERROR","ID_ALREADY_CONNECTED");
        break;
      case 0x14:
        std::basic_string<>::assign
                  ((basic_string<> *)&stack0xffffff80,"Error: ID_NO_FREE_INCOMING_CONNECTIONS",0x26)
        ;
        addChatLogItem(this);
        *(undefined4 *)(this + 0x20) = 0;
        debugPrint("ERROR","ID_NO_FREE_INCOMING_CONNECTIONS");
        break;
      case 0x17:
        std::basic_string<>::assign
                  ((basic_string<> *)&stack0xffffff80,"Error: ID_CONNECTION_BANNED",0x1b);
        addChatLogItem(this);
        *(undefined4 *)(this + 0x20) = 0;
        debugPrint("ERROR","ID_CONNECTION_BANNED");
        break;
      case 0x18:
        std::basic_string<>::assign
                  ((basic_string<> *)&stack0xffffff80,"Error: ID_INVALID_PASSWORD",0x1a);
        addChatLogItem(this);
        *(undefined4 *)(this + 0x20) = 0;
        debugPrint("ERROR","ID_INVALID_PASSWORD");
        break;
      case 0x19:
        std::basic_string<>::assign
                  ((basic_string<> *)&stack0xffffff80,"Error: ID_INCOMPATIBLE_PROTOCOL_VERSION",0x27
                  );
        addChatLogItem(this);
        *(undefined4 *)(this + 0x20) = 0;
        debugPrint("ERROR","ID_INCOMPATIBLE_PROTOCOL_VERSION");
        break;
      case 0x1a:
        std::basic_string<>::assign
                  ((basic_string<> *)&stack0xffffff80,"Error: ID_IP_RECENTLY_CONNECTED",0x1f);
        addChatLogItem(this);
        *(undefined4 *)(this + 0x20) = 0;
        debugPrint("ERROR","ID_IP_RECENTLY_CONNECTED");
        break;
      case 0x88:
        if (OISConfiguration::multiDebug != false) {
          debugPrint("NETWORK","Received: ID_ADD_SHIP");
        }
        Singleton<>::getInstance();
        NetworkData::unpackAddShip
                  (DAT_0065e554,*(RakNetGUID *)(DAT_0065e554 + 0x18),
                   *(Packet_AddShip **)(DAT_0065e554 + 0x30));
        break;
      case 0x89:
        if (OISConfiguration::multiDebug != false) {
          debugPrint("NETWORK","Received: ID_INITIAL_SYNC_DONE - setting live.");
        }
        Singleton<>::getInstance();
        local_12 = 0x8a;
        pNVar13 = Singleton<>::getInstance();
        piVar15 = *(int **)(pNVar13 + 0x30);
        uStack_a0 = 0x41b7ba;
        RakNet::AddressOrGUID::AddressOrGUID
                  ((AddressOrGUID *)&uStack_98,(RakNetGUID *)&DAT_00657688);
        uStack_a0 = 3;
        uStack_a4 = 1;
        uStack_a8 = 1;
        puStack_ac = &local_12;
        uStack_b0 = 0x41b7cd;
        (**(code **)(*piVar15 + 0x50))();
        this = local_18;
        break;
      case 0x8b:
        if (OISConfiguration::multiDebug != false) {
          debugPrint("NETWORK","Received: ID_SET_SCENARIO");
        }
        Singleton<>::getInstance();
        NetworkData::unpackSetScenario(this_03,*(Packet_SetScenario **)(DAT_0065e554 + 0x30));
        break;
      case 0x8c:
        if (OISConfiguration::multiDebug != false) {
          debugPrint("NETWORK","Received: ID_SET_SCENARIOSTATE");
        }
        Singleton<>::getInstance();
        NetworkData::unpackSetScenarioState
                  (this_04,*(Packet_SetScenarioState **)(DAT_0065e554 + 0x30));
        break;
      case 0x8d:
        std::basic_string<>::assign((basic_string<> *)&stack0xffffff80,"Beginning game...",0x11);
        addChatLogItem(this);
        if (OISConfiguration::multiDebug != false) {
          debugPrint("NETWORK","Received ID_START_GAME. Initialising client.");
        }
        pGVar6 = g_gameLogic;
        g_gameLogic[0x1c6] = (GameLogic)0x1;
        *(undefined4 *)pGVar6 = 1;
        break;
      case 0x8e:
        Singleton<>::getInstance();
        NetworkData::unpackSyncNumerical
                  (this_02,*(Packet_SyncValueNumerical **)(DAT_0065e554 + 0x30));
        break;
      case 0x8f:
        Singleton<>::getInstance();
        if (OISConfiguration::multiDebug != false) {
          pcVar24 = "Unknown string sync identifier: %d";
          goto LAB_0041c326;
        }
        break;
      case 0x91:
        if (OISConfiguration::multiDebug != false) {
          debugPrint("NETWORK","Received: ID_SET_MODULE");
        }
        iVar21 = *(int *)(DAT_0065e554 + 0x30);
        Singleton<>::getInstance();
        if (OISConfiguration::multiDebug != false) {
          debugPrint("NETWORK","RECEIVED SET MODULE REQUEST");
        }
        if (*(char *)(iVar21 + 9) == '\0') {
          pcVar24 = (char *)(iVar21 + 10);
          local_1c = (SystemManager *)(iVar21 + 0xb);
          do {
            cVar2 = *pcVar24;
            pcVar24 = pcVar24 + 1;
          } while (cVar2 != '\0');
          std::basic_string<>::assign
                    ((basic_string<> *)&stack0xffffff80,(char *)(iVar21 + 10),
                     (int)pcVar24 - (int)local_1c);
          SystemManager::addEmptyModule(*(SystemManager **)(*(int *)(g_gameData + 0xd0) + 0x40));
        }
        else {
          uVar12 = 0;
          local_1c = *(SystemManager **)(*(int *)(g_gameData + 0xd0) + 0x40);
          piVar15 = *(int **)(local_1c + 0x3c);
          uVar18 = *(int *)(local_1c + 0x40) - (int)piVar15 >> 2;
          this = local_18;
          if (uVar18 != 0) {
            do {
              if (*(int *)(*piVar15 + 0x10) == *(int *)(iVar21 + 5)) {
                SystemManager::removeModule
                          (local_1c,*(ShipModule **)(*(int *)(local_1c + 0x3c) + uVar12 * 4));
                this = local_18;
                break;
              }
              uVar12 = uVar12 + 1;
              piVar15 = piVar15 + 1;
            } while (uVar12 < uVar18);
          }
        }
        break;
      case 0x92:
        if (OISConfiguration::multiDebug != false) {
          debugPrint("NETWORK","Received: ID_SET_MODULE_BASIC");
        }
        Singleton<>::getInstance();
        NetworkData::unpackSetModuleBasicSettings
                  (this_05,*(Packet_SetModuleBasicSettings **)(DAT_0065e554 + 0x30));
        break;
      case 0x93:
        if (OISConfiguration::multiDebug != false) {
          debugPrint("NETWORK","Received: ID_SET_MODULE_DETAILS");
        }
        Singleton<>::getInstance();
        NetworkData::unpackSetModuleDetails
                  (this_06,*(Packet_SetModuleDetails **)(DAT_0065e554 + 0x30));
        break;
      case 0x94:
        if (OISConfiguration::multiDebug != false) {
          debugPrint("NETWORK","Received: ID_SENSORDATA_UPDATEBASIC");
        }
        pSVar20 = *(SystemManager **)(DAT_0065e554 + 0x30);
        local_1c = pSVar20;
        Singleton<>::getInstance();
        if (*(int *)(pSVar20 + 1) == -1) {
LAB_0041b989:
          local_28 = operator_new(0x138);
          local_8 = 2;
          local_1c = (SystemManager *)
                     SensorData::SensorData
                               (local_28,*(int *)(pSVar20 + 5),*(int *)(pSVar20 + 1),(float)pcVar9);
          local_8 = 0xffffffff;
          iVar21 = *(int *)(g_gameData + 0xd0);
          ppAVar3 = *(AnimationFrames ***)(iVar21 + 0x218);
          if (*(AnimationFrames ***)(iVar21 + 0x21c) == ppAVar3) {
            std::vector<>::_Emplace_reallocate<>
                      ((vector<> *)(iVar21 + 0x214),ppAVar3,(AnimationFrames **)&local_1c);
          }
          else {
            *ppAVar3 = (AnimationFrames *)local_1c;
            *(int *)(iVar21 + 0x218) = *(int *)(iVar21 + 0x218) + 4;
          }
          pSVar17 = local_1c;
          if (OISConfiguration::multiDebug != false) {
            debugPrint("NETWORK","Making new sensordata object: %d");
          }
        }
        else {
          iVar21 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x214);
          uVar12 = 0;
          uVar18 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x218) - iVar21 >> 2;
          if (uVar18 != 0) {
            do {
              pSVar17 = *(SystemManager **)(iVar21 + uVar12 * 4);
              if (*(int *)pSVar17 == *(int *)(pSVar20 + 1)) goto LAB_0041b97e;
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar18);
          }
          pSVar17 = (SystemManager *)0x0;
LAB_0041b97e:
          pSVar20 = local_1c;
          if (pSVar17 == (SystemManager *)0x0) goto LAB_0041b989;
        }
        bVar22 = OISConfiguration::multiDebug != false;
        *(undefined8 *)(pSVar17 + 0x10) = *(undefined8 *)(pSVar20 + 9);
        *(undefined8 *)(pSVar17 + 0x18) = *(undefined8 *)(pSVar20 + 0x11);
        *(undefined4 *)(pSVar17 + 0x30) = *(undefined4 *)(pSVar20 + 0x1d);
        *(undefined4 *)(pSVar17 + 0x34) = *(undefined4 *)(pSVar20 + 0x21);
        *(undefined4 *)(pSVar17 + 0x38) = *(undefined4 *)(pSVar20 + 0x25);
        *(undefined4 *)(pSVar17 + 0x3c) = *(undefined4 *)(pSVar20 + 0x29);
        *(undefined4 *)(pSVar17 + 0x40) = *(undefined4 *)(pSVar20 + 0x2d);
        *(undefined4 *)(pSVar17 + 0x118) = *(undefined4 *)(pSVar20 + 0x19);
        *(undefined4 *)(pSVar17 + 0x114) = *(undefined4 *)(pSVar20 + 0x35);
        *(undefined4 *)(pSVar17 + 0x104) = *(undefined4 *)(pSVar20 + 0x39);
        *(undefined4 *)(pSVar17 + 0x108) = *(undefined4 *)(pSVar20 + 0x3d);
        *(undefined4 *)(pSVar17 + 0x128) = *(undefined4 *)(pSVar20 + 0x31);
        pSVar17[8] = (SystemManager)0x1;
        this = local_18;
        if ((bVar22) &&
           (debugPrint("NETWORK","Unpacked Basic: %d/ %s"), this = local_18,
           OISConfiguration::multiDebug != false)) {
          debugPrint("NETWORK","ship type = %d");
          this = local_18;
        }
        break;
      case 0x95:
        if (OISConfiguration::multiDebug != false) {
          debugPrint("NETWORK","Received: ID_SENSORDATA_UPDATEADVANCED");
        }
        Singleton<>::getInstance();
        NetworkData::unpackUpdateSensorDataAdvanced
                  (this_07,*(Packet_UpdateSensorDataAdvanced **)(DAT_0065e554 + 0x30));
        break;
      case 0x96:
        if (OISConfiguration::multiDebug != false) {
          debugPrint("NETWORK","Received: ID_SENSORDATA_WAVEFORM");
        }
        Singleton<>::getInstance();
        NetworkData::unpackUpdateSensorWaveform
                  (this_08,*(Packet_UpdateSensorWaveform **)(DAT_0065e554 + 0x30));
        break;
      case 0x97:
        if (OISConfiguration::multiDebug != false) {
          debugPrint("NETWORK","Received: ID_SENSORDATA_REMOVE");
        }
        iVar21 = *(int *)(DAT_0065e554 + 0x30);
        Singleton<>::getInstance();
        local_1c = *(SystemManager **)(g_gameData + 0xd0);
        if (*(int *)(iVar21 + 1) != -1) {
          uVar12 = 0;
          puVar16 = *(undefined4 **)(local_1c + 0x214);
          uVar18 = *(int *)(local_1c + 0x218) - (int)puVar16 >> 2;
          if (uVar18 != 0) {
            do {
              if (*(int *)*puVar16 == *(int *)(iVar21 + 1)) {
                Ship::removeSensorData
                          ((Ship *)local_1c,
                           *(SensorData **)(*(int *)(local_1c + 0x214) + uVar12 * 4));
                this = local_18;
                goto LAB_0041c333;
              }
              uVar12 = uVar12 + 1;
              puVar16 = puVar16 + 1;
            } while (uVar12 < uVar18);
          }
        }
        Ship::removeSensorData((Ship *)local_1c,(SensorData *)0x0);
        this = local_18;
        break;
      case 0x98:
        if (OISConfiguration::multiDebug != false) {
          debugPrint("NETWORK","Received: ID_STATUS_MESSAGE");
        }
        iVar21 = *(int *)(DAT_0065e554 + 0x30);
        Singleton<>::getInstance();
        local_20 = operator_new(0x34);
        local_8 = 3;
        pcVar24 = (char *)(iVar21 + 0x19);
        pcVar14 = pcVar24;
        do {
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar2 != '\0');
        std::basic_string<>::assign
                  ((basic_string<> *)&stack0xffffff7c,pcVar24,(int)pcVar14 - (iVar21 + 0x1a));
        local_1c = (SystemManager *)LogLine::LogLine(local_20);
        local_8 = 0xffffffff;
        iVar21 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x224);
        if (0 < *(int *)(local_1c + 0x30)) {
          ppAVar3 = *(AnimationFrames ***)(iVar21 + 8);
          if (*(AnimationFrames ***)(iVar21 + 0xc) == ppAVar3) {
            std::vector<>::_Emplace_reallocate<>
                      ((vector<> *)(iVar21 + 4),ppAVar3,(AnimationFrames **)&local_1c);
          }
          else {
            *ppAVar3 = (AnimationFrames *)local_1c;
            *(int *)(iVar21 + 8) = *(int *)(iVar21 + 8) + 4;
          }
        }
        if (*(int *)(local_1c + 0x30) == 4) {
          this_00 = *(basic_string<> **)(iVar21 + 0x50);
          if (*(basic_string<> **)(iVar21 + 0x54) == this_00) {
            std::vector<>::_Emplace_reallocate<>
                      ((vector<> *)(iVar21 + 0x4c),(basic_string<> *)this_00,
                       (basic_string<> *)(local_1c + 0x18));
          }
          else {
            std::basic_string<>::basic_string<>(this_00,(basic_string<> *)(local_1c + 0x18));
            *(int *)(iVar21 + 0x50) = *(int *)(iVar21 + 0x50) + 0x18;
          }
        }
        this = local_18;
        if (OISConfiguration::multiDebug != false) {
          debugPrint("NETWORK","Received log message: \'%s\'");
          this = local_18;
        }
        break;
      case 0x99:
        if (OISConfiguration::multiDebug != false) {
          debugPrint("NETWORK","Received: ID_SOUND");
        }
        iVar21 = *(int *)(DAT_0065e554 + 0x30);
        Singleton<>::getInstance();
        if (OISConfiguration::multiDebug != false) {
          debugPrint("NETWORK","Playing sound: %s");
        }
        pSVar10 = ShipData::currentlyBoardedShip;
        if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
          pSVar10 = *(Ship **)(g_gameData + 0xd0);
        }
        iVar25 = *(int *)(iVar21 + 5);
        SVar23 = *(Sound *)(iVar21 + 1);
        this_01 = Singleton<>::getInstance();
        SoundEngine::playSound(this_01,pSVar10,SVar23,iVar25);
        this = local_18;
        break;
      case 0x9a:
        if (OISConfiguration::multiDebug != false) {
          debugPrint("NETWORK","Received: ID_PRESENTATION_COMMAND");
        }
        iVar21 = *(int *)(DAT_0065e554 + 0x30);
        Singleton<>::getInstance();
        this = local_18;
        if (*(int *)(iVar21 + 1) == 0) {
          if (OISConfiguration::multiDebug != false) {
            debugPrint("NETWORK","Received SET_SHAKE presentation request - %f, %f");
          }
          local_24 = &stack0xffffff80;
          std::basic_string<>::basic_string<>
                    ((basic_string<> *)&stack0xffffff80,
                     (basic_string<> *)(*(int *)(g_gameData + 0xd0) + 0x238));
          local_8 = 4;
          if (Singleton<>::instance == (PresentationInterface *)0x0) {
            local_2c = operator_new(0x418);
            local_8 = CONCAT31(local_8._1_3_,5);
            Singleton<>::instance =
                 (PresentationInterface *)PresentationInterface::PresentationInterface(local_2c);
          }
          local_8 = 0xffffffff;
          PresentationInterface::addShake(Singleton<>::instance);
          this = local_18;
        }
        break;
      case 0x9b:
        if (OISConfiguration::multiDebug != false) {
          debugPrint("NETWORK","Received: ID_WEAPON_COMMAND");
        }
        Singleton<>::getInstance();
        NetworkData::unpackWeaponCommand(this_09,*(Packet_WeaponCommand **)(DAT_0065e554 + 0x30));
        break;
      case 0x9c:
        if (OISConfiguration::multiDebug != false) {
          debugPrint("NETWORK","Received: ID_WEAPON_DATA");
        }
        iVar21 = *(int *)(DAT_0065e554 + 0x30);
        Singleton<>::getInstance();
        local_1c = *(SystemManager **)(g_gameData + 0xd0);
        if ((*(int *)(*(int *)(local_1c + 0x40) + 0x20) == 0) ||
           (pWVar4 = *(Weapon **)
                      (*(int *)(*(int *)(local_1c + 0x40) + 0x20) + 0x3c + *(int *)(iVar21 + 1) * 4)
           , pWVar4 == (Weapon *)0x0)) {
          debugPrint("ERROR","trying to update a weapon which the client doesn\'t know about.");
          this = local_18;
        }
        else {
          pcVar24 = "";
          pbVar11 = (byte *)(iVar21 + 0xd);
          do {
            bVar8 = *pbVar11;
            bVar22 = bVar8 < (byte)*pcVar24;
            if (bVar8 != *pcVar24) {
LAB_0041bea7:
              uVar12 = -(uint)bVar22 | 1;
              goto LAB_0041beac;
            }
            if (bVar8 == 0) break;
            bVar8 = pbVar11[1];
            bVar22 = bVar8 < (byte)pcVar24[1];
            if (bVar8 != pcVar24[1]) goto LAB_0041bea7;
            pbVar11 = pbVar11 + 2;
            pcVar24 = pcVar24 + 2;
          } while (bVar8 != 0);
          uVar12 = 0;
LAB_0041beac:
          if (uVar12 == 0) {
            Ship::removeWeapon((Ship *)local_1c,pWVar4);
            this = local_18;
          }
          else {
            *(undefined4 *)(pWVar4 + 0x3d0) = *(undefined4 *)(iVar21 + 0x3f);
            *(undefined4 *)(pWVar4 + 0x3b8) = *(undefined4 *)(iVar21 + 0x43);
            pWVar4[0x3bc] = *(Weapon *)(iVar21 + 0x47);
            *(undefined4 *)(pWVar4 + 0x3c0) = *(undefined4 *)(iVar21 + 0x48);
            pWVar4[0x3c4] = *(Weapon *)(iVar21 + 0x4c);
            pWVar4[0x3c5] = *(Weapon *)(iVar21 + 0x4d);
            pWVar4[0x3fc] = *(Weapon *)(iVar21 + 0x4e);
            *(undefined4 *)(pWVar4 + 0x418) = *(undefined4 *)(iVar21 + 0x53);
            local_1c = (SystemManager *)(iVar21 + 0x18);
            pcVar24 = (char *)(iVar21 + 0x17);
            do {
              cVar2 = *pcVar24;
              pcVar24 = pcVar24 + 1;
            } while (cVar2 != '\0');
            std::basic_string<>::assign
                      ((basic_string<> *)(pWVar4 + 0x400),(char *)(iVar21 + 0x17),
                       (int)pcVar24 - (int)local_1c);
            *(undefined4 *)(pWVar4 + 0x41c) = *(undefined4 *)(iVar21 + 0x4f);
            *(undefined4 *)(pWVar4 + 0x420) = *(undefined4 *)(iVar21 + 0x57);
            pcVar24 = (char *)(iVar21 + 0x35);
            do {
              cVar2 = *pcVar24;
              pcVar24 = pcVar24 + 1;
            } while (cVar2 != '\0');
            std::basic_string<>::assign
                      ((basic_string<> *)(pWVar4 + 0x3a0),(char *)(iVar21 + 0x35),
                       (int)pcVar24 - (iVar21 + 0x36));
            this = local_18;
          }
        }
        break;
      case 0x9d:
        if (OISConfiguration::multiDebug != false) {
          debugPrint("NETWORK","Received: ID_SET_COMPONENT");
        }
        Singleton<>::getInstance();
        NetworkData::unpackSetComponent(this_10,*(Packet_SetComponent **)(DAT_0065e554 + 0x30));
        break;
      case 0x9e:
        if (OISConfiguration::multiDebug != false) {
          debugPrint("NETWORK","Received: ID_SET_ADDON");
        }
        Singleton<>::getInstance();
        NetworkData::unpackSetAddon(this_12,*(Packet_SetAddon **)(DAT_0065e554 + 0x30));
        break;
      case 0x9f:
        if (OISConfiguration::multiDebug != false) {
          debugPrint("NETWORK","Received: ID_SET_CARGO_COMPONENTS");
        }
        Singleton<>::getInstance();
        NetworkData::unpackSetCargoComponents(this_11,*(Packet_CargoState **)(DAT_0065e554 + 0x30));
        break;
      case 0xa0:
        if (OISConfiguration::multiDebug != false) {
          debugPrint("NETWORK","Received: ID_HULL_STATE");
        }
        Singleton<>::getInstance();
        NetworkData::unpackSetHullState(this_13,*(Packet_HullState **)(DAT_0065e554 + 0x30));
        break;
      case 0xa1:
        if (OISConfiguration::multiDebug != false) {
          debugPrint("NETWORK","Received: ID_SET_SERVER_INFO_BASIC");
        }
        iVar21 = *(int *)(DAT_0065e554 + 0x30);
        Singleton<>::getInstance();
        local_24 = &stack0xffffff80;
        uStack_98 = 0x41c071;
        strUsingArgs(&stack0xffffff80);
        local_8 = 6;
        pNVar13 = Singleton<>::getInstance();
        local_8 = 0xffffffff;
        addChatLogItem(pNVar13);
        pcVar24 = (char *)(iVar21 + 1);
        do {
          cVar2 = *pcVar24;
          pcVar24 = pcVar24 + 1;
        } while (cVar2 != '\0');
        std::basic_string<>::assign
                  ((basic_string<> *)(g_gameData + 0x208),(char *)(iVar21 + 1),
                   (int)pcVar24 - (iVar21 + 2));
        pGVar7 = g_gameData;
        pcVar24 = (char *)(iVar21 + 0x21);
        *(undefined4 *)(g_gameData + 0x238) = *(undefined4 *)(iVar21 + 0x15);
        *(undefined4 *)(pGVar7 + 0x23c) = *(undefined4 *)(iVar21 + 0x19);
        local_1c = (SystemManager *)(iVar21 + 0x22);
        do {
          cVar2 = *pcVar24;
          pcVar24 = pcVar24 + 1;
        } while (cVar2 != '\0');
        std::basic_string<>::assign
                  ((basic_string<> *)(pGVar7 + 0x220),(char *)(iVar21 + 0x21),
                   (int)pcVar24 - (int)local_1c);
        bVar22 = OISConfiguration::multiDebug != false;
        *(undefined4 *)(g_gameData + 0x240) = *(undefined4 *)(iVar21 + 0x1d);
        if (bVar22) {
          debugPrint("NETWORK","Server info: \'`7%s`$\' `7%d`$/`7%d`$ users, difficulty %d");
        }
        bVar22 = std::_Traits_equal<>("1.0.8",5,pcVar9,unaff_EDI);
        this = local_18;
        if (!bVar22) {
          debugPrint("MULTI","Server/client version mismatch.");
          local_11 = '\x01';
          this = local_18;
        }
        break;
      case 0xa2:
        if (OISConfiguration::multiDebug != false) {
          debugPrint("NETWORK","Received: ID_SET_SERVER_INFO_ADVANCED");
        }
        Singleton<>::getInstance();
        NetworkData::unpackServerInfoAdvanced
                  (this_14,*(Packet_ServerInfoAdvanced **)(DAT_0065e554 + 0x30));
        break;
      case 0xa3:
        if (OISConfiguration::multiDebug != false) {
          debugPrint("NETWORK","Received: ID_SEND_MESSAGE");
        }
        Singleton<>::getInstance();
        NetworkData::unpackReceiveMessageFromServer
                  (this_15,*(Packet_SendMessage **)(DAT_0065e554 + 0x30));
        break;
      case 0xa7:
        if (OISConfiguration::multiDebug != false) {
          debugPrint("NETWORK","Received: ID_SET_WAYPOINTS");
        }
        iVar21 = *(int *)(DAT_0065e554 + 0x30);
        Singleton<>::getInstance();
        if (OISConfiguration::multiDebug != false) {
          debugPrint("NETWORK","RECEIVED SHIP SET WAYPOINTS");
        }
        pfVar19 = (float *)(iVar21 + 1);
        iVar21 = 0x14;
        *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1c8) =
             *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1c4);
        do {
          fVar1 = *pfVar19;
          if (fVar1 != -9999.0) {
            local_50 = pfVar19[0x14];
            local_5c = 0;
            local_58 = 0;
            iVar25 = *(int *)(g_gameData + 0xd0);
            pWVar5 = *(Waypoint **)(iVar25 + 0x1c8);
            local_4c = &DAT_bf800000;
            local_48 = 0;
            local_44 = 0;
            local_54 = fVar1;
            if (*(Waypoint **)(iVar25 + 0x1cc) == pWVar5) {
              std::vector<>::_Emplace_reallocate<Waypoint>
                        ((vector<> *)(iVar25 + 0x1c4),pWVar5,(Waypoint *)&local_5c);
            }
            else {
              *(undefined4 *)pWVar5 = 0;
              *(undefined4 *)(pWVar5 + 4) = 0;
              *(float *)(pWVar5 + 8) = fVar1;
              *(float *)(pWVar5 + 0xc) = local_50;
              *(undefined1 **)(pWVar5 + 0x10) = &DAT_bf800000;
              *(undefined4 *)(pWVar5 + 0x14) = 0;
              pWVar5[0x18] = (Waypoint)0x0;
              *(undefined4 *)(pWVar5 + 0x1c) = local_40;
              *(int *)(iVar25 + 0x1c8) = *(int *)(iVar25 + 0x1c8) + 0x20;
            }
            if (OISConfiguration::multiDebug != false) {
              debugPrint("NETWORK","added waypoint: %f, %f");
            }
          }
          pfVar19 = pfVar19 + 1;
          iVar21 = iVar21 + -1;
          this = local_18;
        } while (iVar21 != 0);
      }
LAB_0041c333:
      (**(code **)(**(int **)(this + 0x30) + 0x60))();
      DAT_0065e554 = (NetworkData *)(**(code **)(**(int **)(this + 0x30) + 0x5c))();
    }
    (**(code **)(**(int **)(this + 0x30) + 0x60))();
    if (local_11 != '\0') {
      if (*(int **)(this + 0x30) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x30) + 0x38))();
        pGVar6 = g_gameLogic;
        *(undefined4 *)(this + 0x20) = 0;
        *(undefined2 *)(pGVar6 + 0x71) = 0x100;
        debugPrint("MULTI","Disconnected from server.");
      }
      *(undefined4 *)(g_gameLogic + 0x144) = 0;
    }
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall NetworkClient::addChatLogItem(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __thiscall NetworkClient::addChatLogItem(NetworkClient *this,void *param_2)

{
  vector<> *this_00;
  basic_string<> *this_01;
  void *pvVar1;
  nothrow_t *pnVar2;
  uint in_stack_00000018;
  NetworkClient *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2dc8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_00 = (vector<> *)(this + 0x24);
  local_8 = 0;
  this_01 = *(basic_string<> **)(this + 0x28);
  local_14 = this;
  if (*(basic_string<> **)(this + 0x2c) == this_01) {
    std::vector<>::_Emplace_reallocate<>
              (this_00,(basic_string<> *)this_01,(basic_string<> *)&param_2);
  }
  else {
    std::basic_string<>::basic_string<>(this_01,(basic_string<> *)&param_2);
    *(int *)(this + 0x28) = *(int *)(this + 0x28) + 0x18;
  }
  if (0x50 < (uint)((*(int *)(this + 0x28) - *(int *)this_00) / 0x18)) {
    std::vector<>::erase(this_00,&local_14,*(undefined4 *)this_00);
  }
  if (0xf < in_stack_00000018) {
    pnVar2 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar1 = param_2;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_2 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return;
}
