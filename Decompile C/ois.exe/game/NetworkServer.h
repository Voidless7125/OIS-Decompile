typedef struct NetworkServer NetworkServer, *PNetworkServer;


struct NetworkServer { // PlaceHolder Structure
};


bool __thiscall NetworkServer::shipHasConnectedClient(NetworkServer *this,char *param_2);
void __thiscall NetworkServer::sendSound(NetworkServer *this,undefined4 param_2,undefined4 param_3,char *param_4);
void __thiscall NetworkServer::sendLog(NetworkServer *this,LogLine *param_2,char *param_3);
void __thiscall NetworkServer::sendShipDetailsToClient(NetworkServer *this,int param_1,int param_3,undefined4 param_4,int param_5,void *param_6);
void __thiscall NetworkServer::recheckShipsToSync(NetworkServer *this);
ShipSyncNode * __thiscall NetworkServer::startSyncingShip(NetworkServer *this,basic_string<> *param_2);
void __thiscall NetworkServer::addOrRemoveComponent(NetworkServer *this,char *param_2);
void __thiscall NetworkServer::removeWeapon(NetworkServer *this,int param_2,char *param_3);
void __thiscall NetworkServer::stopSyncingModule(NetworkServer *this,int param_2,char *param_3);
void __thiscall NetworkServer::startSyncingCargoState(NetworkServer *this,ShipSyncNode *param_1);
void __thiscall NetworkServer::startSyncingWaypoints(NetworkServer *this,ShipSyncNode *param_1);
void __thiscall NetworkServer::startSyncingModuleState(NetworkServer *this,ShipSyncNode *param_1,ShipModule *param_2);
void __thiscall NetworkServer::startSyncingHullState(NetworkServer *this,ShipSyncNode *param_1,int param_2);
void __thiscall NetworkServer::startSyncingServerInfoState(NetworkServer *this);
void __thiscall NetworkServer::startSyncingWeapon(NetworkServer *this,ShipSyncNode *param_1,int param_2,Weapon *param_3);
void __thiscall NetworkServer::startSyncingSensorDataState(NetworkServer *this,ShipSyncNode *param_1,SensorData *param_2);
void __thiscall NetworkServer::runLogic(NetworkServer *this,float param_1);
void __thiscall NetworkServer::runSyncCheck(NetworkServer *this,float param_1,bool param_2);
ClientInfo * __thiscall NetworkServer::addClientInfo(NetworkServer *this,int param_1,int param_3,undefined4 param_4,undefined4 param_5,basic_string<> *param_6);
void __thiscall NetworkServer::removeClientInfo(NetworkServer *this,RakNetGUID param_1);
void __thiscall NetworkServer::parseRemoteCommand(undefined4 param_1_00,undefined1 *param_1,void *param_3);
void __thiscall NetworkServer::forceSessionToBegin(NetworkServer *this);
