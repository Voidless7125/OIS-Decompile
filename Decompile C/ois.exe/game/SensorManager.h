typedef struct SensorManager SensorManager, *PSensorManager;


struct SensorManager { // PlaceHolder Class Structure
};


void __thiscall SensorManager::down(SensorManager *this,Ship *param_1);
void __thiscall SensorManager::up(SensorManager *this,Ship *param_1);
void __thiscall SensorManager::left(SensorManager *this,Ship *param_1);
void __thiscall SensorManager::right(SensorManager *this,Ship *param_1);
bool __thiscall SensorManager::keyPressed(SensorManager *this,KeyCode param_1);
