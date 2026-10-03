typedef struct ShipClass ShipClass, *PShipClass;


struct ShipClass { // PlaceHolder Structure
};


ShipClass * __thiscall ShipClass::ShipClass(ShipClass *this,VesselType param_1);
ShipConfiguration * __thiscall ShipClass::getShipConfiguration(ShipClass *this,char *param_2);
void __thiscall ShipClass::unpackAndAddConfiguration(ShipClass *this,char *param_2,undefined4 param_3,undefined4 param_4,char *param_5,undefined8 param_6);
void __thiscall ShipClass::hullStrengthForSection(ShipClass *this,HullLocation param_1);
bool __thiscall ShipClass::canBeDockedWith(ShipClass *this);
