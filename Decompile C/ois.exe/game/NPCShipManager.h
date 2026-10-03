typedef struct NPCShipManager NPCShipManager, *PNPCShipManager;


struct NPCShipManager { // PlaceHolder Structure
};


void __thiscall NPCShipManager::generateNewFreighter(NPCShipManager *this,int param_1);
void __thiscall NPCShipManager::setFreighterDestination(NPCShipManager *this,Ship *param_1,SpaceStation *param_2);
void __thiscall NPCShipManager::generateNewPoliceVessel(NPCShipManager *this,int param_1);
Ship * __thiscall NPCShipManager::generateNewMilitaryVessel(NPCShipManager *this,int param_1);
Ship * __thiscall NPCShipManager::generateNewPirateVessel(NPCShipManager *this,int param_1);
Ship * __thiscall NPCShipManager::generateVesselFromBounty(NPCShipManager *this,Bounty *param_1);
SpaceStation * __thiscall NPCShipManager::getRandomSpaceStation(NPCShipManager *this,int param_1,Ship *param_2);
void __thiscall NPCShipManager::removeAllShipsInSector(NPCShipManager *this,int param_1);
void __thiscall NPCShipManager::reset(NPCShipManager *this);
void __thiscall NPCShipManager::runSectorLogic(NPCShipManager *this,int param_1);
void __thiscall NPCShipManager::runPoliceVesselLogic(NPCShipManager *this,Ship *param_1);
