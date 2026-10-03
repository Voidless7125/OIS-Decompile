typedef struct GameData GameData, *PGameData;


struct GameData { // PlaceHolder Structure
};


GameData * __thiscall GameData::GameData(GameData *this);
void __thiscall GameData::<>::~<>(<> *this);
void __thiscall GameData::<>::~<>(<> *this);
Ship * __thiscall GameData::getShipWithinDistance(undefined4 param_1_00,int param_1,int param_3,char param_4);
Ship * __thiscall GameData::getShipWithID(GameData *this,int param_1);
SpaceStation * __thiscall GameData::getSpaceStation(undefined4 param_1,char *param_2);
Sector * __thiscall GameData::getSectorOfShip(undefined4 param_1,char *param_2);
Ship * __thiscall GameData::getShipWithRego(undefined4 param_1,char *param_2);
Sector * __thiscall GameData::getSectorWithID(GameData *this,int param_1);
Sector * __thiscall GameData::getSectorWithShortName(undefined4 param_1,char *param_2);
HazardCategory * __thiscall GameData::getNebulaHazardCategory(GameData *this,int param_1);
HazardCategory * __thiscall GameData::getAsteroidHazardCategory(GameData *this,int param_1);
Structure * __thiscall GameData::getStructure(GameData *this,char param_2,char *param_3);
Room * __thiscall GameData::getRoom(undefined4 param_1,void *param_2);
GameCharacter * __thiscall GameData::getCharacter(undefined4 param_1,char *param_2);
GameCharacter * __thiscall GameData::getExtraWithTag(undefined4 param_1,void *param_2);
void __thiscall GameData::setUniqueObjects(undefined4 param_1,int param_2,byte param_3,void *param_4);
GameCharacter * __thiscall GameData::getCharacterAtSpawnPoint(undefined4 param_1,char *param_2);
CharacterLocation * __thiscall GameData::getCharacterLocationAtSpawnPoint(undefined4 param_1,char *param_2);
ShipModuleClass * __thiscall GameData::getModuleClassWithIdentifier(undefined4 param_1,char *param_2);
ShipClass * __thiscall GameData::getShipClassWithIdentifier(undefined4 param_1,char *param_2);
WeaponClass * __thiscall GameData::getWeaponClassWithIdentifier(undefined4 param_1,char *param_2);
ScreenLayout * __thiscall GameData::getScreenLayout(undefined4 param_1,char *param_2);
Scenario * __thiscall GameData::getScenario(undefined4 param_1,char *param_2);
Good * __thiscall GameData::getGoodWithShortName(undefined4 param_1,char *param_2);
Good * __thiscall GameData::getGood(GameData *this,int param_1);
StellarObject * __thiscall GameData::getStellarObjectWithinDistance(undefined4 param_1_00,int param_1,undefined4 param_3,undefined4 param_4,float param_5);
StateModifier * __thiscall GameData::getStateModifier(undefined4 param_1,char *param_2);
void __thiscall GameData::resetStateModifiers(GameData *this);
