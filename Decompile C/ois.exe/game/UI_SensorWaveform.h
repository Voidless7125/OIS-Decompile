typedef struct UI_SensorWaveform UI_SensorWaveform, *PUI_SensorWaveform;


struct UI_SensorWaveform { // PlaceHolder Class Structure
};


void * __thiscall UI_SensorWaveform::`scalar_deleting_destructor'(UI_SensorWaveform *this,uint param_1);
void __thiscall UI_SensorWaveform::cleanupRender(UI_SensorWaveform *this);
void __thiscall UI_SensorWaveform::renderPeak(UI_SensorWaveform *this,float *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_5);
void __thiscall UI_SensorWaveform::render(UI_SensorWaveform *this);
void __thiscall UI_SensorWaveform::renderDigital(UI_SensorWaveform *this);
void __thiscall UI_SensorWaveform::renderAnalog(UI_SensorWaveform *this);
void __thiscall UI_SensorWaveform::specialDataCheckFunction(UI_SensorWaveform *this,float param_1);
