typedef struct HardwareInterface HardwareInterface, *PHardwareInterface;


struct HardwareInterface { // PlaceHolder Class Structure
};


void __thiscall HardwareInterface::~HardwareInterface(HardwareInterface *this);
void __thiscall HardwareInterface::sendElementData(HardwareInterface *this,char param_1,int param_2);
void __thiscall HardwareInterface::sendLine(HardwareInterface *this,char *param_1,...);
void __thiscall HardwareInterface::runSyncLogic(HardwareInterface *this,float param_1);
void __thiscall HardwareInterface::runActiveLogic(HardwareInterface *this,float param_1);
void __thiscall HardwareInterface::updateDataRequests(HardwareInterface *this,float param_1);
void __thiscall HardwareInterface::forceUpdateDataRequests(HardwareInterface *this);
void __thiscall HardwareInterface::runLogic(HardwareInterface *this,float param_1);
