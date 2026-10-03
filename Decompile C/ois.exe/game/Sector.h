typedef struct Sector Sector, *PSector;


struct Sector { // PlaceHolder Structure
};


Faction * __thiscall Sector::getMainFaction(Sector *this);
Zone * __thiscall Sector::getZone(Sector *this,float param_2,float param_3,char param_4);
SyntheticObject * __thiscall Sector::getSyntheticObjectWithID(Sector *this,int param_1);
SyntheticObject * __thiscall Sector::addSyntheticObject(Sector *this,int param_1);
void __thiscall Sector::removeSyntheticObject(Sector *this,SyntheticObject *param_1);
void __thiscall Sector::addStellarObject(Sector *this,StellarObject *param_1);
StellarObject * __thiscall Sector::getStellarObjectNear(Sector *this);
void __thiscall Sector::removeWeapon(Sector *this,Weapon *param_1);
void __thiscall Sector::removeAllWeapons(Sector *this);
void __thiscall Sector::removeShip(Sector *this,Ship *param_1);
Ship * __thiscall Sector::getShip(Sector *this,int param_1);
Ship * __thiscall Sector::getShip(Sector *this,char *param_2);
Ship * __thiscall Sector::getShipClosestTo(Sector *this,int param_2);
Ship * __thiscall Sector::getSpaceStationClosestTo(Sector *this);
float __thiscall Sector::getAngleToNearestStar(Sector *this,undefined4 param_2,undefined4 param_3);
float __thiscall Sector::getSolarRadiationAt(Sector *this);
void __thiscall Sector::clearBounties(Sector *this);
void __thiscall Sector::setNewBounties(Sector *this);
NavPoint * __thiscall Sector::getNavPointNear(Sector *this);
NavPoint * __thiscall Sector::getNavPointNearZoneSet(Sector *this,char *param_2);
int __thiscall Sector::getNavMeshIDClosestTo(Sector *this,undefined4 param_2,undefined4 param_3,char param_4);
NavPoint * __thiscall Sector::getNavPoint(Sector *this,int param_1,NavPointType param_2);
NavPoint * __thiscall Sector::getNavPoint(Sector *this,int param_1);
NavPoint * __thiscall Sector::getRandomNavPoint(Sector *this,MeshCategory param_1);
NavPoint * __thiscall Sector::getRandomNavPointNotNear(Sector *this,int param_1);
void __thiscall Sector::repopulateTradeLocations(Sector *this);
