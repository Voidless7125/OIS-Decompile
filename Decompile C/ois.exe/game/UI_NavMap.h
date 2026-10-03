typedef struct UI_NavMap UI_NavMap, *PUI_NavMap;


struct UI_NavMap { // PlaceHolder Class Structure
};


UI_NavMap * __thiscall UI_NavMap::UI_NavMap(UI_NavMap *this,ScreenInterface *param_1,Widget *param_2,bool *param_3);
void * __thiscall UI_NavMap::`scalar_deleting_destructor'(UI_NavMap *this,uint param_1);
void __thiscall UI_NavMap::~UI_NavMap(UI_NavMap *this);
void __thiscall UI_NavMap::cleanupRender(UI_NavMap *this);
float __thiscall UI_NavMap::getIconScale(UI_NavMap *this);
float __thiscall UI_NavMap::getStellarScale(UI_NavMap *this);
void __thiscall UI_NavMap::render(UI_NavMap *this);
void __thiscall UI_NavMap::renderMiniMap(UI_NavMap *this);
void __thiscall UI_NavMap::sectorModeClick(UI_NavMap *this,float param_2,float param_3);
void __thiscall UI_NavMap::editorModeClick(UI_NavMap *this);
void __thiscall UI_NavMap::mouseHoverUpdate(UI_NavMap *this,undefined4 param_2,undefined4 param_3);
void __thiscall UI_NavMap::mouseUp(UI_NavMap *this,undefined4 param_2,undefined4 param_3);
void __thiscall UI_NavMap::specialDataCheckFunction(UI_NavMap *this,float param_1);
StellarObject * __thiscall UI_NavMap::getStellarObjectLook(UI_NavMap *this,StellarObject *param_1);
SensorData * __thiscall UI_NavMap::getShipLook(UI_NavMap *this,SensorData *param_1,bool param_2);
Ship * __thiscall UI_NavMap::getShipLook(UI_NavMap *this,Ship *param_1,bool param_2);
void __thiscall UI_NavMap::centreOfMap(UI_NavMap *this);
float * __thiscall UI_NavMap::positionForWorldPosition(UI_NavMap *this,float *param_2,float param_3,float param_4);
float * __thiscall UI_NavMap::worldPositionForPosition(UI_NavMap *this,float *param_2,float param_3,float param_4);
void __thiscall UI_NavMap::renderDetectionCone(UI_NavMap *this,SensorData *param_1,NM_MapObject *param_2,float param_3);
void __thiscall UI_NavMap::renderSensorObject(UI_NavMap *this,SensorData *param_1,float param_2);
void __thiscall UI_NavMap::renderCraft(UI_NavMap *this,Ship *param_1,SensorData *param_2,float param_3);
void __thiscall UI_NavMap::renderSector(UI_NavMap *this);
void __thiscall UI_NavMap::renderCluster(UI_NavMap *this);
bool __thiscall UI_NavMap::keyDown(UI_NavMap *this,KeyCode param_1);
bool __thiscall UI_NavMap::keyUp(UI_NavMap *this,KeyCode param_1);
void __thiscall UI_NavMap::cancelAllKeys(UI_NavMap *this);
