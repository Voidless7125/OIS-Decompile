typedef struct UIText UIText, *PUIText;


struct UIText { // PlaceHolder Structure
};


void __thiscall UIText::UIText(UIText *this,int param_1,undefined4 param_2,UIText param_4,void *param_5);
void * __thiscall UIText::`scalar_deleting_destructor'(UIText *this,uint param_1);
UIText * __cdecl UIText::create(undefined1 param_1,void *param_2);
UIText * __cdecl UIText::create(void *param_1);
void __thiscall UIText::~UIText(UIText *this);
void __cdecl UIText::translateColour(char param_1);
void __thiscall UIText::setText(UIText *this,char param_2,char param_3,basic_string<> *param_4);
void __thiscall UIText::cleanup(UIText *this);
void __thiscall UIText::cleanupRender(UIText *this);
int __cdecl UIText::generateLines(undefined4 *param_1);
void __thiscall UIText::update(UIText *this);
int __cdecl UIText::getRealWidthWithoutMacros(void *param_1);
void __cdecl UIText::getTextWithoutMacros(undefined4 *param_1);
int __cdecl UIText::getActualTextWidth(void *param_1);
void __thiscall UIText::setOpacity(UIText *this,uchar param_1);
