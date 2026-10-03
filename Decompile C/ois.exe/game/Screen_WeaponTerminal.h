typedef struct Screen_WeaponTerminal Screen_WeaponTerminal, *PScreen_WeaponTerminal;


struct Screen_WeaponTerminal { // PlaceHolder Class Structure
};


void * __thiscall Screen_WeaponTerminal::`vector_deleting_destructor'(Screen_WeaponTerminal *this,uint param_1);
void __thiscall Screen_WeaponTerminal::configure(Screen_WeaponTerminal *this);
void __thiscall Screen_WeaponTerminal::executeCommand(Screen_WeaponTerminal *this,char *param_2);
void __thiscall Screen_WeaponTerminal::renderWelcomeMessage(Screen_WeaponTerminal *this);
void __thiscall Screen_WeaponTerminal::updateScreenCall(Screen_WeaponTerminal *this);
void __thiscall Screen_WeaponTerminal::renderBottomLine(Screen_WeaponTerminal *this);
void __thiscall Screen_WeaponTerminal::cmd_List(Screen_WeaponTerminal *this,char param_1);
void __thiscall Screen_WeaponTerminal::cmd_Inventory(Screen_WeaponTerminal *this);
void __thiscall Screen_WeaponTerminal::cmd_Buy(Screen_WeaponTerminal *this,char param_1,int param_3,int param_4);
void __thiscall Screen_WeaponTerminal::cmd_Info(Screen_WeaponTerminal *this,char param_1,basic_string<> *param_3,int param_4);
void __thiscall Screen_WeaponTerminal::showCommandList(Screen_WeaponTerminal *this);
void __thiscall Screen_WeaponTerminal::reset(Screen_WeaponTerminal *this);
