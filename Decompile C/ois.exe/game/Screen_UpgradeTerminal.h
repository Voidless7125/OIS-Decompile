typedef struct Screen_UpgradeTerminal Screen_UpgradeTerminal, *PScreen_UpgradeTerminal;


struct Screen_UpgradeTerminal { // PlaceHolder Class Structure
};


void * __thiscall Screen_UpgradeTerminal::`vector_deleting_destructor'(Screen_UpgradeTerminal *this,uint param_1);
void __thiscall Screen_UpgradeTerminal::cleanup(Screen_UpgradeTerminal *this);
void __thiscall Screen_UpgradeTerminal::configure(Screen_UpgradeTerminal *this);
void __thiscall Screen_UpgradeTerminal::executeCommand(Screen_UpgradeTerminal *this,char *param_2);
void __thiscall Screen_UpgradeTerminal::renderWelcomeMessage(Screen_UpgradeTerminal *this);
void __thiscall Screen_UpgradeTerminal::updateScreenCall(Screen_UpgradeTerminal *this);
void __thiscall Screen_UpgradeTerminal::renderBottomLine(Screen_UpgradeTerminal *this);
void __thiscall Screen_UpgradeTerminal::showCommandList(Screen_UpgradeTerminal *this);
void __thiscall Screen_UpgradeTerminal::reset(Screen_UpgradeTerminal *this);
void __thiscall Screen_UpgradeTerminal::describeModule(Screen_UpgradeTerminal *this,ModuleSaleInstance *param_1);
void __thiscall Screen_UpgradeTerminal::cmd_List(Screen_UpgradeTerminal *this,char param_1,int param_3,int param_4);
void __thiscall Screen_UpgradeTerminal::cmd_Repair(Screen_UpgradeTerminal *this,ShipMechanics *param_1,ShipMechanics *param_3,int param_4);
void __thiscall Screen_UpgradeTerminal::cmd_Info(Screen_UpgradeTerminal *this,char param_1,int param_3,int param_4);
void __thiscall Screen_UpgradeTerminal::cmd_Pods(Screen_UpgradeTerminal *this,char param_1,int param_3,int param_4);
void __thiscall Screen_UpgradeTerminal::cmd_Buy(Screen_UpgradeTerminal *this,char param_1,undefined4 *param_3,int param_4);
void __thiscall Screen_UpgradeTerminal::cmd_Sell(Screen_UpgradeTerminal *this,char param_1,int param_3,int param_4);
void __thiscall Screen_UpgradeTerminal::cmd_Confirm(Screen_UpgradeTerminal *this,char param_1);
void __thiscall Screen_UpgradeTerminal::cmd_Cancel(Screen_UpgradeTerminal *this,char param_1);
void __thiscall Screen_UpgradeTerminal::cmd_Components(Screen_UpgradeTerminal *this,char param_1);
void __thiscall Screen_UpgradeTerminal::cmd_Modules(Screen_UpgradeTerminal *this,char param_1);
