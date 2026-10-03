typedef struct SensorData SensorData, *PSensorData;


struct SensorData { // PlaceHolder Structure
};


void __thiscall SensorData::~SensorData(SensorData *this);
SensorData * __thiscall SensorData::SensorData(SensorData *this,int param_1,int param_2,float param_3);
void __thiscall SensorData::getSolutionString(SensorData *this);
Vec2 * __thiscall SensorData::getPresumedLocation(SensorData *this);
void __thiscall SensorData::describeDetail(SensorData *this,bool param_1);
void __thiscall SensorData::describe(SensorData *this,bool param_1,char param_2);
bool __thiscall SensorData::canBeMooredWith(SensorData *this);
bool __thiscall SensorData::isSynthetic(SensorData *this);
bool __thiscall SensorData::analysed(SensorData *this);
