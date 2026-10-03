typedef struct TopBar TopBar, *PTopBar;


struct TopBar { // PlaceHolder Structure
};


TopBar * __thiscall TopBar::TopBar(TopBar *this,bool param_1,bool param_2);
void __thiscall TopBar::~TopBar(TopBar *this);
void __thiscall TopBar::cleanupRender(TopBar *this);
void __thiscall TopBar::resetTabs(TopBar *this,int param_1);
void __thiscall TopBar::runLogic(TopBar *this,float param_1);
void __thiscall TopBar::render(TopBar *this);
void __thiscall TopBar::updateBarPosition(TopBar *this);
