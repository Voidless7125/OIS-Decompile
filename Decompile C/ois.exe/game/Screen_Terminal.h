typedef struct Screen_Terminal Screen_Terminal, *PScreen_Terminal;


struct Screen_Terminal { // PlaceHolder Class Structure
};


void * __thiscall Screen_Terminal::`scalar_deleting_destructor'(Screen_Terminal *this,uint param_1);
void __thiscall Screen_Terminal::configure(Screen_Terminal *this);
bool __thiscall Screen_Terminal::onKeyReleased(Screen_Terminal *this,KeyCode param_1,Event *param_2);
void __thiscall Screen_Terminal::executeCommand(Screen_Terminal *this,char *param_2);
void __thiscall Screen_Terminal::updateScreenCall(Screen_Terminal *this);
void __thiscall Screen_Terminal::cmd_Status(Screen_Terminal *this,char param_1);
void __thiscall Screen_Terminal::cmd_Power(Screen_Terminal *this,char param_1,int param_3,int param_4);
void __thiscall Screen_Terminal::cmd_Inv(Screen_Terminal *this,char param_1);
void __thiscall Screen_Terminal::cmd_Modules(Screen_Terminal *this,char param_1);
void __thiscall Screen_Terminal::cmd_Module(Screen_Terminal *this,char param_1,char *param_3,int param_4);
void __thiscall Screen_Terminal::showCommandList(Screen_Terminal *this);
void __thiscall Screen_Terminal::cmd_Rotate(Screen_Terminal *this,char param_1,char *param_3,int param_4);
void __thiscall Screen_Terminal::cmd_Burn(Screen_Terminal *this,char param_1,int param_3,int param_4);
