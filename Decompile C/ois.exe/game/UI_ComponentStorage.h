typedef struct UI_ComponentStorage UI_ComponentStorage, *PUI_ComponentStorage;


struct UI_ComponentStorage { // PlaceHolder Class Structure
};


void * __thiscall UI_ComponentStorage::`vector_deleting_destructor'(UI_ComponentStorage *this,uint param_1);
void __thiscall UI_ComponentStorage::cleanupRender(UI_ComponentStorage *this);
basic_string<> * __thiscall UI_ComponentStorage::getDragLook(UI_ComponentStorage *this,basic_string<> *param_2,undefined4 param_3,undefined4 param_4);
int __thiscall UI_ComponentStorage::getDragValue(UI_ComponentStorage *this,undefined4 param_2,undefined4 param_3);
void __thiscall UI_ComponentStorage::dragOnto(undefined4 param_1_00,int param_1,int param_2);
void __thiscall UI_ComponentStorage::specialDataCheckFunction(UI_ComponentStorage *this,float param_1);
void __thiscall UI_ComponentStorage::render(UI_ComponentStorage *this);
void __thiscall UI_ComponentStorage::mouseUp(UI_ComponentStorage *this,float param_2,float param_3);
int __thiscall UI_ComponentStorage::getElement(UI_ComponentStorage *this,float param_2,float param_3);
