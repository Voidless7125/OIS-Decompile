typedef struct HardwareOutput HardwareOutput, *PHardwareOutput;


struct HardwareOutput { // PlaceHolder Structure
};


HardwareOutput * __cdecl HardwareOutput::getInstance(void);
void __thiscall HardwareOutput::shutdown(HardwareOutput *this);
void __thiscall HardwareOutput::findPorts(HardwareOutput *this);
void __thiscall HardwareOutput::initialisePort(HardwareOutput *this,int param_1);
void __thiscall HardwareOutput::addPort(HardwareOutput *this,char *param_2);
