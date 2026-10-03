typedef struct FogInstance FogInstance, *PFogInstance;


struct FogInstance { // PlaceHolder Structure
};


void __thiscall FogInstance::resetFog(FogInstance *this);
int __cdecl FogInstance::getChunk(float param_1);
bool __thiscall FogInstance::removeFogInRadius(FogInstance *this,int param_1,int param_2,undefined4 param_4,undefined4 param_5,float param_6);
bool __thiscall FogInstance::fogObscuresPoint(FogInstance *this,float param_2,float param_3);
