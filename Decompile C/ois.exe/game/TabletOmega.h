typedef struct TabletOmega TabletOmega, *PTabletOmega;


struct TabletOmega { // PlaceHolder Class Structure
};


TabletOmega * __thiscall TabletOmega::TabletOmega(TabletOmega *this);
void __thiscall TabletOmega::renderTopFrame(TabletOmega *this,basic_string<> *param_1);
void __thiscall TabletOmega::renderBottomFrame(TabletOmega *this,basic_string<> *param_1);
void __thiscall TabletOmega::renderLine(undefined4 param_1_00,basic_string<> *param_1,int param_3,char *param_4);
void __thiscall TabletOmega::renderCenterLine(undefined4 param_1_00,basic_string<> *param_1,char *param_3);
void __thiscall TabletOmega::render(TabletOmega *this,bool param_1);
void __thiscall TabletOmega::renderHeader(TabletOmega *this);
void __thiscall TabletOmega::renderFooter(TabletOmega *this);
TabletTab * __thiscall TabletOmega::getTab(TabletOmega *this,int param_1);
bool __thiscall TabletOmega::keyPressed(TabletOmega *this,KeyCode param_1);
