typedef struct TerminalEngine TerminalEngine, *PTerminalEngine;


struct TerminalEngine { // PlaceHolder Structure
};


TerminalEngine * __thiscall TerminalEngine::TerminalEngine(TerminalEngine *this);
void __thiscall TerminalEngine::executeCurrentCommand(TerminalEngine *this);
bool __thiscall TerminalEngine::keyReleased(TerminalEngine *this,KeyCode param_1);
void __thiscall TerminalEngine::renderNextChunkOfFile(TerminalEngine *this);
void * __thiscall TerminalEngine::`scalar_deleting_destructor'(TerminalEngine *this,uint param_1);
