typedef struct Weapon Weapon, *PWeapon;


struct Weapon { // PlaceHolder Structure
};


void __thiscall Weapon::~Weapon(Weapon *this);
bool __thiscall Weapon::isSpinningUp(Weapon *this);
bool __thiscall Weapon::isWeapon(Weapon *this);
Weapon * __thiscall Weapon::Weapon(Weapon *this,Ship *param_1,WeaponClass *param_2);
void __thiscall Weapon::getSolutionString(Weapon *this);
bool __thiscall Weapon::alwaysKnown(Weapon *this,Ship *param_1);
int __thiscall Weapon::getSpinUpPercent(Weapon *this,int param_1);
int __thiscall Weapon::getCurrentCalculatedPowerPercantage(Weapon *this,int param_1);
bool __thiscall Weapon::canFire(Weapon *this);
bool __thiscall Weapon::isDestroyed(Weapon *this);
bool __thiscall Weapon::damage(Weapon *this,int param_1,float param_2,DamageType param_3);
void __thiscall Weapon::destroy(Weapon *this);
void __thiscall Weapon::runHomeLogic(Weapon *this,float param_1);
void __thiscall Weapon::detonateWarhead(Weapon *this);
void __thiscall Weapon::runEmissionsLogic(Weapon *this,float param_1);
void __thiscall Weapon::runLogic(Weapon *this,float param_1);
void __thiscall Weapon::updateTarget(Weapon *this);
void __thiscall Weapon::runTravelLogic(Weapon *this,float param_1);
void __thiscall Weapon::runStopLogic(Weapon *this,float param_1);
void __thiscall Weapon::runAimLogic(Weapon *this,undefined4 param_1,undefined4 param_3);
void __thiscall Weapon::goActive(Weapon *this);
void __thiscall Weapon::setTarget(Weapon *this,GameObject *param_1);
void __thiscall Weapon::unsetTarget(Weapon *this);
