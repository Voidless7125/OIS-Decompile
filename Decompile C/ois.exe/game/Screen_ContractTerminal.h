typedef struct Screen_ContractTerminal Screen_ContractTerminal, *PScreen_ContractTerminal;


struct Screen_ContractTerminal { // PlaceHolder Class Structure
};


void * __thiscall Screen_ContractTerminal::`scalar_deleting_destructor'(Screen_ContractTerminal *this,uint param_1);
void __thiscall Screen_ContractTerminal::configure(Screen_ContractTerminal *this);
void __thiscall Screen_ContractTerminal::cmd_Cargo(Screen_ContractTerminal *this,char param_1);
bool __thiscall Screen_ContractTerminal::onKeyReleased(Screen_ContractTerminal *this,KeyCode param_1,Event *param_2);
void __thiscall Screen_ContractTerminal::executeCommand(Screen_ContractTerminal *this,char *param_2);
void __thiscall Screen_ContractTerminal::renderWelcomeMessage(Screen_ContractTerminal *this);
void __thiscall Screen_ContractTerminal::updateScreenCall(Screen_ContractTerminal *this);
void __thiscall Screen_ContractTerminal::renderBottomLine(Screen_ContractTerminal *this);
void __thiscall Screen_ContractTerminal::showCommandList(Screen_ContractTerminal *this);
void __thiscall Screen_ContractTerminal::reset(Screen_ContractTerminal *this);
void __thiscall Screen_ContractTerminal::cmd_List(Screen_ContractTerminal *this,char param_1);
void __thiscall Screen_ContractTerminal::cmd_Drop(Screen_ContractTerminal *this,char param_1);
void __thiscall Screen_ContractTerminal::cmd_Faction(Screen_ContractTerminal *this,char param_1,basic_string<> *param_3,int param_4);
void __thiscall Screen_ContractTerminal::cmd_License(Screen_ContractTerminal *this,char param_1,int param_3,int param_4);
void __thiscall Screen_ContractTerminal::cmd_Take(Screen_ContractTerminal *this,MetaGameAction *param_1,char *param_3,int param_4);
void __thiscall Screen_ContractTerminal::cmd_Current(Screen_ContractTerminal *this,char param_1);
void __thiscall Screen_ContractTerminal::cmd_Info(Screen_ContractTerminal *this,char param_1,char *param_3,int param_4);
