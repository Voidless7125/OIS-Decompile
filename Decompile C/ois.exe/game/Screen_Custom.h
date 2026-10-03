typedef struct Screen_Custom Screen_Custom, *PScreen_Custom;


struct Screen_Custom { // PlaceHolder Class Structure
};


void * __thiscall Screen_Custom::`vector_deleting_destructor'(Screen_Custom *this,uint param_1);
void __thiscall Screen_Custom::cleanup(Screen_Custom *this);
void __thiscall Screen_Custom::configure(Screen_Custom *this);
void __thiscall Screen_Custom::configureElements(Screen_Custom *this);
void __thiscall Screen_Custom::render(Screen_Custom *this);
ScreenElement * __thiscall Screen_Custom::renderPercentileBar(Screen_Custom *this,Widget *param_1);
ScreenElement * __thiscall Screen_Custom::renderBDBar(Screen_Custom *this,Widget *param_1);
ScreenElement * __thiscall Screen_Custom::renderButton(Screen_Custom *this,Widget *param_1,bool param_2);
ScreenElement * __thiscall Screen_Custom::renderEngPanel(Screen_Custom *this,Widget *param_1);
ScreenElement * __thiscall Screen_Custom::renderComponentStorage(Screen_Custom *this,Widget *param_1);
ScreenElement * __thiscall Screen_Custom::renderWeaponTubes(Screen_Custom *this,Widget *param_1);
ScreenElement * __thiscall Screen_Custom::renderImage(Screen_Custom *this,Widget *param_1);
ScreenElement * __thiscall Screen_Custom::renderIntroSequence(Screen_Custom *this,Widget *param_1);
ScreenElement * __thiscall Screen_Custom::renderAdShell(Screen_Custom *this,Widget *param_1);
ScreenElement * __thiscall Screen_Custom::renderNewsTicker(Screen_Custom *this,Widget *param_1);
ScreenElement * __thiscall Screen_Custom::renderShipHullState(Screen_Custom *this,Widget *param_1);
ScreenElement * __thiscall Screen_Custom::renderSensorWaveform(Screen_Custom *this,Widget *param_1);
ScreenElement * __thiscall Screen_Custom::renderSensorDisplay(Screen_Custom *this,Widget *param_1);
ScreenElement * __thiscall Screen_Custom::renderSelectedObjectSummary(Screen_Custom *this,Widget *param_1);
ScreenElement * __thiscall Screen_Custom::renderText(Screen_Custom *this,Widget *param_1);
ScreenElement * __thiscall Screen_Custom::renderHelmControl(Screen_Custom *this,Widget *param_1);
ScreenElement * __thiscall Screen_Custom::renderSlider(Screen_Custom *this,Widget *param_1);
ScreenElement * __thiscall Screen_Custom::renderTextBox(Screen_Custom *this,Widget *param_1);
ScreenElement * __thiscall Screen_Custom::renderCheckbox(Screen_Custom *this,Widget *param_1);
ScreenElement * __thiscall Screen_Custom::renderSystemBar(Screen_Custom *this,Widget *param_1);
ScreenElement * __thiscall Screen_Custom::renderSelector(Screen_Custom *this,Widget *param_1);
ScreenElement * __thiscall Screen_Custom::renderSelectTray(Screen_Custom *this,Widget *param_1);
void __thiscall Screen_Custom::clickOnObject(Screen_Custom *this,int param_1);
void __thiscall Screen_Custom::updateExistence(Screen_Custom *this,Widget *param_1,int param_2);
void __thiscall Screen_Custom::update(Screen_Custom *this,float param_1);
bool __thiscall Screen_Custom::onKeyPressed(Screen_Custom *this,KeyCode param_1,Event *param_2);
bool __thiscall Screen_Custom::onKeyReleased(Screen_Custom *this,KeyCode param_1,Event *param_2);
void __thiscall Screen_Custom::cancelAllKeys(Screen_Custom *this);
