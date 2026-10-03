typedef struct Screen_TradeTerminal Screen_TradeTerminal, *PScreen_TradeTerminal;


struct Screen_TradeTerminal { // PlaceHolder Class Structure
};


void __thiscall Screen_TradeTerminal::update(Screen_TradeTerminal *this,float param_1);
void * __thiscall Screen_TradeTerminal::`scalar_deleting_destructor'(Screen_TradeTerminal *this,uint param_1);
void __thiscall Screen_TradeTerminal::configure(Screen_TradeTerminal *this);
void __thiscall Screen_TradeTerminal::executeCommand(Screen_TradeTerminal *this,char *param_2);
void __thiscall Screen_TradeTerminal::renderWelcomeMessage(Screen_TradeTerminal *this);
void __thiscall Screen_TradeTerminal::updateScreenCall(Screen_TradeTerminal *this);
void __thiscall Screen_TradeTerminal::renderBottomLine(Screen_TradeTerminal *this);
void __thiscall Screen_TradeTerminal::cmd_List(Screen_TradeTerminal *this,char param_1,int param_3,int param_4);
void __thiscall Screen_TradeTerminal::cmd_Info(Screen_TradeTerminal *this,char param_1,basic_string<> *param_3,int param_4);
void __thiscall Screen_TradeTerminal::cmd_Buy(Screen_TradeTerminal *this,char param_1,char *param_3,int param_4);
void __thiscall Screen_TradeTerminal::cmd_Confirm(Screen_TradeTerminal *this);
void __thiscall Screen_TradeTerminal::cmd_Cancel(Screen_TradeTerminal *this);
void __thiscall Screen_TradeTerminal::cmd_Weapons(Screen_TradeTerminal *this,char param_1,int param_3,int param_4);
void __thiscall Screen_TradeTerminal::cmd_Sell(Screen_TradeTerminal *this,char param_1,char *param_3,int param_4);
void __thiscall Screen_TradeTerminal::cmd_Cargo(Screen_TradeTerminal *this,char param_1);
void __thiscall Screen_TradeTerminal::cmd_Passengers(Screen_TradeTerminal *this,char param_1);
void __thiscall Screen_TradeTerminal::cmd_Take(Screen_TradeTerminal *this,char param_1,char *param_3,int param_4);
void __thiscall Screen_TradeTerminal::showCommandList(Screen_TradeTerminal *this);
void __thiscall Screen_TradeTerminal::reset(Screen_TradeTerminal *this);
