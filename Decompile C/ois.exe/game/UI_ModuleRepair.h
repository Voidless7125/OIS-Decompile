typedef struct UI_ModuleRepair UI_ModuleRepair, *PUI_ModuleRepair;


struct UI_ModuleRepair { // PlaceHolder Class Structure
};


UI_ModuleRepair * __thiscall UI_ModuleRepair::UI_ModuleRepair(UI_ModuleRepair *this,ScreenInterface *param_1,Widget *param_2,bool *param_3);
void * __thiscall UI_ModuleRepair::`vector_deleting_destructor'(UI_ModuleRepair *this,uint param_1);
void __thiscall UI_ModuleRepair::~UI_ModuleRepair(UI_ModuleRepair *this);
void __thiscall UI_ModuleRepair::cleanupRender(UI_ModuleRepair *this);
void __thiscall UI_ModuleRepair::renderLine(UI_ModuleRepair *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,char param_6);
void __thiscall UI_ModuleRepair::renderComponent(UI_ModuleRepair *this,int param_1,ShipModule *param_2,bool param_3);
void __thiscall UI_ModuleRepair::renderButton(UI_ModuleRepair *this);
void __thiscall UI_ModuleRepair::render(UI_ModuleRepair *this);
void __thiscall UI_ModuleRepair::specialDataCheckFunction(UI_ModuleRepair *this,float param_1);
void __thiscall UI_ModuleRepair::setScrewState(UI_ModuleRepair *this);
void __thiscall UI_ModuleRepair::syncAddonAndComponentStates(UI_ModuleRepair *this);
void __thiscall UI_ModuleRepair::setCoverState(UI_ModuleRepair *this);
bool __thiscall UI_ModuleRepair::runAnimations(UI_ModuleRepair *this,float param_1);
bool __thiscall UI_ModuleRepair::anyScrews(UI_ModuleRepair *this);
void __thiscall UI_ModuleRepair::mouseHoverUpdate(UI_ModuleRepair *this,undefined4 param_2,float param_3);
void __thiscall UI_ModuleRepair::mouseUp(UI_ModuleRepair *this,float param_2,float param_3);
int __thiscall UI_ModuleRepair::getComponentSlot(UI_ModuleRepair *this);
void __thiscall UI_ModuleRepair::dragOnto(UI_ModuleRepair *this,int param_1,int param_2,undefined4 param_4,float param_5);
basic_string<> * __thiscall UI_ModuleRepair::getDragLook(UI_ModuleRepair *this,basic_string<> *param_2,undefined4 param_3,float param_4);
int __thiscall UI_ModuleRepair::getDragValue(UI_ModuleRepair *this,undefined4 param_2,float param_3);
