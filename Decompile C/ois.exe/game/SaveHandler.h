typedef struct SaveHandler SaveHandler, *PSaveHandler;


struct SaveHandler { // PlaceHolder Structure
};


void __thiscall SaveHandler::loadLocalStats(SaveHandler *this);
void __thiscall SaveHandler::saveLocalStats(SaveHandler *this);
bool __thiscall SaveHandler::saveExists(SaveHandler *this,int param_1);
SaveMetaData * __thiscall SaveHandler::unpackMetaData(SaveHandler *this,_iobuf *param_1);
void __thiscall SaveHandler::packMetaData(SaveHandler *this,_iobuf *param_1);
SaveMetaData * __thiscall SaveHandler::metadataForSave(SaveHandler *this,int param_1);
void __thiscall SaveHandler::loadGame(SaveHandler *this);
void __thiscall SaveHandler::saveGame(SaveHandler *this);
void __cdecl SaveHandler::writeLengthString(undefined4 *param_1);
void __cdecl SaveHandler::readLengthString(_iobuf *param_1);
void __thiscall SaveHandler::saveGameV12(SaveHandler *this,_iobuf *param_1);
void __thiscall SaveHandler::loadGameV12(SaveHandler *this,_iobuf *param_1);
void __thiscall SaveHandler::loadGameV6(SaveHandler *this,_iobuf *param_1);
void __thiscall SaveHandler::loadGameV7(SaveHandler *this,_iobuf *param_1);
void __thiscall SaveHandler::loadGameV8(SaveHandler *this,_iobuf *param_1);
void __thiscall SaveHandler::loadGameV9(SaveHandler *this,_iobuf *param_1);
void __thiscall SaveHandler::loadGameV10(SaveHandler *this,_iobuf *param_1);
void __thiscall SaveHandler::loadGameV11(SaveHandler *this,_iobuf *param_1);
