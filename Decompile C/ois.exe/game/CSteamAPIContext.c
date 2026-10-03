#include "../ois.exe.h"


// public: bool __thiscall CSteamAPIContext::Init(void)

bool __thiscall CSteamAPIContext::Init(CSteamAPIContext *this)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  uVar1 = SteamAPI_GetHSteamUser();
  iVar2 = SteamAPI_GetHSteamPipe();
  if (iVar2 != 0) {
    piVar3 = (int *)SteamInternal_CreateInterface("SteamClient017");
    *(int **)this = piVar3;
    if (piVar3 != (int *)0x0) {
      iVar4 = (**(code **)(*piVar3 + 0x14))(uVar1,iVar2,"SteamUser019");
      *(int *)(this + 4) = iVar4;
      if (iVar4 != 0) {
        iVar4 = (**(code **)(**(int **)this + 0x20))(uVar1,iVar2,"SteamFriends015");
        *(int *)(this + 8) = iVar4;
        if (iVar4 != 0) {
          iVar4 = (**(code **)(**(int **)this + 0x24))(iVar2,"SteamUtils009");
          *(int *)(this + 0xc) = iVar4;
          if (iVar4 != 0) {
            iVar4 = (**(code **)(**(int **)this + 0x28))(uVar1,iVar2,"SteamMatchMaking009");
            *(int *)(this + 0x10) = iVar4;
            if (iVar4 != 0) {
              iVar4 = (**(code **)(**(int **)this + 0x2c))(uVar1,iVar2,"SteamMatchMakingServers002")
              ;
              *(int *)(this + 0x1c) = iVar4;
              if (iVar4 != 0) {
                iVar4 = (**(code **)(**(int **)this + 0x34))
                                  (uVar1,iVar2,"STEAMUSERSTATS_INTERFACE_VERSION011");
                *(int *)(this + 0x14) = iVar4;
                if (iVar4 != 0) {
                  iVar4 = (**(code **)(**(int **)this + 0x3c))
                                    (uVar1,iVar2,"STEAMAPPS_INTERFACE_VERSION008");
                  *(int *)(this + 0x18) = iVar4;
                  if (iVar4 != 0) {
                    iVar4 = (**(code **)(**(int **)this + 0x40))(uVar1,iVar2,"SteamNetworking005");
                    *(int *)(this + 0x20) = iVar4;
                    if (iVar4 != 0) {
                      iVar4 = (**(code **)(**(int **)this + 0x44))
                                        (uVar1,iVar2,"STEAMREMOTESTORAGE_INTERFACE_VERSION014");
                      *(int *)(this + 0x24) = iVar4;
                      if (iVar4 != 0) {
                        iVar4 = (**(code **)(**(int **)this + 0x48))
                                          (uVar1,iVar2,"STEAMSCREENSHOTS_INTERFACE_VERSION003");
                        *(int *)(this + 0x28) = iVar4;
                        if (iVar4 != 0) {
                          iVar4 = (**(code **)(**(int **)this + 0x5c))
                                            (uVar1,iVar2,"STEAMHTTP_INTERFACE_VERSION002");
                          *(int *)(this + 0x2c) = iVar4;
                          if (iVar4 != 0) {
                            iVar4 = (**(code **)(**(int **)this + 100))
                                              (uVar1,iVar2,"SteamController006");
                            *(int *)(this + 0x30) = iVar4;
                            if (iVar4 != 0) {
                              iVar4 = (**(code **)(**(int **)this + 0x68))
                                                (uVar1,iVar2,"STEAMUGC_INTERFACE_VERSION010");
                              *(int *)(this + 0x34) = iVar4;
                              if (iVar4 != 0) {
                                iVar4 = (**(code **)(**(int **)this + 0x6c))
                                                  (uVar1,iVar2,"STEAMAPPLIST_INTERFACE_VERSION001");
                                *(int *)(this + 0x38) = iVar4;
                                if (iVar4 != 0) {
                                  iVar4 = (**(code **)(**(int **)this + 0x70))
                                                    (uVar1,iVar2,"STEAMMUSIC_INTERFACE_VERSION001");
                                  *(int *)(this + 0x3c) = iVar4;
                                  if (iVar4 != 0) {
                                    iVar4 = (**(code **)(**(int **)this + 0x74))
                                                      (uVar1,iVar2,
                                                       "STEAMMUSICREMOTE_INTERFACE_VERSION001");
                                    *(int *)(this + 0x40) = iVar4;
                                    if (iVar4 != 0) {
                                      iVar4 = (**(code **)(**(int **)this + 0x78))
                                                        (uVar1,iVar2,
                                                         "STEAMHTMLSURFACE_INTERFACE_VERSION_004");
                                      *(int *)(this + 0x44) = iVar4;
                                      if (iVar4 != 0) {
                                        iVar4 = (**(code **)(**(int **)this + 0x88))
                                                          (uVar1,iVar2,
                                                           "STEAMINVENTORY_INTERFACE_V002");
                                        *(int *)(this + 0x48) = iVar4;
                                        if (iVar4 != 0) {
                                          iVar4 = (**(code **)(**(int **)this + 0x8c))
                                                            (uVar1,iVar2,"STEAMVIDEO_INTERFACE_V002"
                                                            );
                                          *(int *)(this + 0x4c) = iVar4;
                                          if (iVar4 != 0) {
                                            iVar2 = (**(code **)(**(int **)this + 0x90))
                                                              (uVar1,iVar2,
                                                                                                                              
                                                  "STEAMPARENTALSETTINGS_INTERFACE_VERSION001");
                                            *(int *)(this + 0x50) = iVar2;
                                            if (iVar2 != 0) {
                                              return true;
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
              }
            }
          }
        }
      }
    }
  }
  return false;
}
