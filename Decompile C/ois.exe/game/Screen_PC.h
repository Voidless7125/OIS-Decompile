typedef struct Screen_PC Screen_PC, *PScreen_PC;


struct Screen_PC { // PlaceHolder Class Structure
};


void __thiscall Screen_PC::Screen_PC(Screen_PC *this,ScreenInterface *param_1,int param_2,int param_3);
void * __thiscall Screen_PC::`vector_deleting_destructor'(Screen_PC *this,uint param_1);
void __thiscall Screen_PC::configure(Screen_PC *this);
bool __thiscall Screen_PC::onKeyReleased(Screen_PC *this,KeyCode param_1,Event *param_2);
void __thiscall Screen_PC::renderBottomLine(Screen_PC *this);
void __thiscall Screen_PC::executeCommand(Screen_PC *this,char *param_2);
void __thiscall Screen_PC::updateScreenCall(Screen_PC *this);
void __thiscall Screen_PC::addString(Screen_PC *this,void *param_2);
void __thiscall Screen_PC::cmd_DIR(Screen_PC *this);
void __thiscall Screen_PC::cmd_VIEW(Screen_PC *this,char param_1,basic_string<> *param_3,int param_4);
void __thiscall Screen_PC::cmd_DEL(Screen_PC *this,char param_1,basic_string<> *param_3,int param_4);
void __thiscall Screen_PC::cmd_News(Screen_PC *this,char param_1);
void __thiscall Screen_PC::cmd_Email(Screen_PC *this,char param_1);
basic_string<> * __thiscall Screen_PC::getCurrentBootString(Screen_PC *this);
