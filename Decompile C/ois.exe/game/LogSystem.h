typedef struct LogSystem LogSystem, *PLogSystem;


struct LogSystem { // PlaceHolder Structure
};


void __thiscall LogSystem::runLogic(LogSystem *this,float param_1);
void __thiscall LogSystem::renderWarning(LogSystem *this);
void __thiscall LogSystem::addLogLine(LogSystem *this,LogPriority param_1,char *param_2,...);
void __thiscall LogSystem::cleanupWarning(LogSystem *this);
void __thiscall LogSystem::setHistoryItem(LogSystem *this,int param_1);
basic_string<> * __thiscall LogSystem::getLogAsStr(LogSystem *this);
