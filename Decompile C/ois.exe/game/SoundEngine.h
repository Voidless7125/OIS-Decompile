typedef struct SoundEngine SoundEngine, *PSoundEngine;


struct SoundEngine { // PlaceHolder Structure
};


void __thiscall SoundEngine::shutdown(SoundEngine *this);
int __thiscall SoundEngine::addSound(SoundEngine *this,int param_1,Sound param_2,int param_3,bool param_4,bool param_5,float param_6);
void __thiscall SoundEngine::removeAllSounds(SoundEngine *this);
void __thiscall SoundEngine::playSound(SoundEngine *this,Sound param_1,int param_2);
void __thiscall SoundEngine::playSound(SoundEngine *this,Ship *param_1,Sound param_2,int param_3);
void __thiscall SoundEngine::pauseSound(SoundEngine *this,int param_1);
void __thiscall SoundEngine::unpauseSound(SoundEngine *this,int param_1);
void __thiscall SoundEngine::setSoundSpace(SoundEngine *this,SoundSpace *param_1);
void __thiscall SoundEngine::resumeTrack(SoundEngine *this);
void __thiscall SoundEngine::playNewTrack(SoundEngine *this);
void __thiscall SoundEngine::resetSoundVolume(SoundEngine *this);
void __thiscall SoundEngine::setMusicVolume(SoundEngine *this,float param_1);
void __thiscall SoundEngine::runLogic(SoundEngine *this,float param_1);
void __thiscall SoundEngine::playRandomKeyPress(SoundEngine *this,Ship *param_1);
