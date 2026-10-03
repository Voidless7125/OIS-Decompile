typedef struct NetworkData NetworkData, *PNetworkData;


struct NetworkData { // PlaceHolder Structure
};


void __thiscall NetworkData::sendSetClientInfo(undefined4 param_1,void *param_2);
void __thiscall NetworkData::sendShipCommand(NetworkData *this,int param_1,double param_2,double param_3,double param_4);
void __thiscall NetworkData::sendAddShip(undefined4 param_1_00,undefined4 param_1,undefined4 param_3,undefined4 param_4,undefined4 param_5,void *param_6);
void __thiscall NetworkData::sendSync(NetworkData *this,RakNetGUID param_1,SyncNode *param_2);
void __thiscall NetworkData::sendSetModule(undefined4 param_1_00,int param_1,int param_3_00,undefined4 param_4,undefined4 param_5,undefined4 param_2,undefined4 param_3,undefined4 *param_8);
void __thiscall NetworkData::sendSetModuleBasicSettings(NetworkData *this,RakNetGUID param_1,int param_2,int param_3,ShipModule *param_4);
void __thiscall NetworkData::sendSetModuleDetails(NetworkData *this,RakNetGUID param_1,int param_2,int param_3,ShipModule *param_4);
void __thiscall NetworkData::sendSetComponent(NetworkData *this,RakNetGUID param_1,ShipModule *param_2,int param_3);
void __thiscall NetworkData::sendServerInfoBasic(undefined4 param_1_00,undefined4 param_1,undefined4 param_3,undefined4 param_4,undefined4 param_5,void *param_6);
void __thiscall NetworkData::sendServerInfoAdvanced(undefined4 param_1_00,undefined4 param_1,undefined4 param_3,undefined4 param_4,undefined4 param_5,void *param_6);
void __thiscall NetworkData::sendSetAddon(NetworkData *this,RakNetGUID param_1,ShipModule *param_2,int param_3);
void __thiscall NetworkData::sendUpdateSensorDataBasic(NetworkData *this,RakNetGUID param_1,SensorData *param_2);
void __thiscall NetworkData::sendUpdateSensorDataAdvanced(NetworkData *this,RakNetGUID param_1,SensorData *param_2);
void __thiscall NetworkData::sendUpdateSensorWaveform(NetworkData *this,RakNetGUID param_1,SensorData *param_2);
void __thiscall NetworkData::sendLog(NetworkData *this,RakNetGUID param_1,LogLine *param_2);
void __thiscall NetworkData::sendChatLineToServer(undefined4 param_1,undefined4 *param_2);
void __thiscall NetworkData::sendPresentationCommand(NetworkData *this,RakNetGUID param_1,int param_2,float param_3,float param_4);
void __thiscall NetworkData::unpackSetScenario(NetworkData *this,Packet_SetScenario *param_1);
void __thiscall NetworkData::sendChatLineFromServer(undefined4 param_1,void *param_2);
void __thiscall NetworkData::sendMessageToClient(undefined4 param_1_00,undefined4 *param_1,undefined4 *param_3);
void __thiscall NetworkData::unpackSetScenarioState(NetworkData *this,Packet_SetScenarioState *param_1);
void __thiscall NetworkData::unpackSetCargoComponents(NetworkData *this,Packet_CargoState *param_1);
void __thiscall NetworkData::unpackSetModuleBasicSettings(NetworkData *this,Packet_SetModuleBasicSettings *param_1);
void __thiscall NetworkData::unpackSetModuleDetails(NetworkData *this,Packet_SetModuleDetails *param_1);
void __thiscall NetworkData::unpackSetComponent(NetworkData *this,Packet_SetComponent *param_1);
void __thiscall NetworkData::unpackSetAddon(NetworkData *this,Packet_SetAddon *param_1);
void __thiscall NetworkData::unpackUpdateSensorDataAdvanced(NetworkData *this,Packet_UpdateSensorDataAdvanced *param_1);
void __thiscall NetworkData::unpackUpdateSensorWaveform(NetworkData *this,Packet_UpdateSensorWaveform *param_1);
void __thiscall NetworkData::unpackDataRequest(NetworkData *this,RakNetGUID param_1,Packet_DataRequest *param_2);
void __thiscall NetworkData::unpackServerAdmin(NetworkData *this,RakNetGUID param_1,Packet_ServerAdmin *param_2);
void __thiscall NetworkData::unpackSetGoLiveState(NetworkData *this,RakNetGUID param_1,Packet_SetGoLiveState *param_2);
void __thiscall NetworkData::unpackSetClientInfo(NetworkData *this,RakNetGUID param_1,Packet_SetClientInfo *param_2);
void __thiscall NetworkData::unpackReceiveMessageFromServer(NetworkData *this,Packet_SendMessage *param_1);
void __thiscall NetworkData::unpackReceiveMessageFromClient(NetworkData *this,RakNetGUID param_1,Packet_SendMessage *param_2);
void __thiscall NetworkData::unpackWeaponCommand(NetworkData *this,Packet_WeaponCommand *param_1);
void __thiscall NetworkData::unpackSetHullState(NetworkData *this,Packet_HullState *param_1);
void __thiscall NetworkData::unpackServerInfoAdvanced(NetworkData *this,Packet_ServerInfoAdvanced *param_1);
void __thiscall NetworkData::unpackAddShip(NetworkData *this,RakNetGUID param_1,Packet_AddShip *param_2);
void __thiscall NetworkData::unpackRunCommand(NetworkData *this,RakNetGUID param_1,Packet_RunCommand *param_2);
void __thiscall NetworkData::unpackSyncNumerical(NetworkData *this,Packet_SyncValueNumerical *param_1);
