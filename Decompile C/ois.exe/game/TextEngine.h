typedef struct TextEngine TextEngine, *PTextEngine;


struct TextEngine { // PlaceHolder Structure
};


TextEngine * __thiscall TextEngine::TextEngine(TextEngine *this,TextField *param_1,int param_2,int param_3,int param_4,vector<> *param_5);
void __thiscall TextEngine::showDocument(TextEngine *this,undefined4 *param_2);
void __thiscall TextEngine::finishShowingDocument(TextEngine *this);
void __thiscall TextEngine::renderDocument(TextEngine *this);
void __thiscall TextEngine::renderDocumentFooter(TextEngine *this);
void __thiscall TextEngine::showList(TextEngine *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,basic_string<> *param_6);
void __thiscall TextEngine::renderList(TextEngine *this);
void __thiscall TextEngine::finishShowingList(TextEngine *this,bool param_1);
void __thiscall TextEngine::render(TextEngine *this);
bool __thiscall TextEngine::lineIsNull(undefined4 param_1,undefined4 *param_2);
bool __thiscall TextEngine::lineEndsWithSpace(undefined4 param_1,undefined4 *param_2);
void __thiscall TextEngine::addLineWithWrap(TextEngine *this,uint param_2,undefined4 *param_3);
void __thiscall TextEngine::addBlankLine(TextEngine *this);
void __thiscall TextEngine::addLine(TextEngine *this,void *param_2);
void __thiscall TextEngine::addLinef(TextEngine *this,char *param_1,...);
void __thiscall TextEngine::setBottomText(TextEngine *this,basic_string<> *param_2);
