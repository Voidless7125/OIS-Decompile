typedef struct ShipMechanics ShipMechanics, *PShipMechanics;


struct ShipMechanics { // PlaceHolder Structure
};


int __thiscall ShipMechanics::hullRepairCost(ShipMechanics *this,Ship *param_1,HullLocation param_2);
int __thiscall ShipMechanics::getRepairPoints(ShipMechanics *this,Ship *param_1);
void __thiscall ShipMechanics::performHullRepairAll(ShipMechanics *this,Ship *param_1);
void __thiscall ShipMechanics::itemiseHullRepairCost(ShipMechanics *this,Ship *param_1,TextEngine *param_2);
int __thiscall ShipMechanics::moduleRepairCost(ShipMechanics *this,Ship *param_1);
