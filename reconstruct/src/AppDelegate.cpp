// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall AppDelegate::initGLContextAttrs(AppDelegate *this)
void AppDelegate::initGLContextAttrs()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  // [cookie] local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  cocos2d::log("AppDelegate::initGLContextAttrs()");
  local_20 = 8;
  uStack_1c = 8;
  uStack_18 = 8;
  uStack_14 = 8;
  local_10 = 0x18;
  local_c = 8;
  cocos2d::GLView::setGLContextAttrs((GLContextAttrs *)&local_20);
  // [cookie] __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: bool __thiscall AppDelegate::applicationDidFinishLaunching(AppDelegate *this)
bool AppDelegate::applicationDidFinishLaunching()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff68[1] = {0};  // [pseudo] address of an unnamed stack slot
  char cVar1;
  undefined1 uVar2;
  Director *this_00;
  ModManager *this_01;
  FileUtils *pFVar3;
  Stats *this_02;
  int iVar4;
  char *pcVar5;
  GLViewImpl *this_03;
  Size *pSVar6;
  float *pfVar7;
  Scene *pSVar8;
  Layer *this_04;
  GameLogic *this_05;
  void *pvVar9;
  nothrow_t *pnVar10;
  std::string *pbVar12;
  ulonglong uVar11;
  char *local_70;
  int local_6c;
  undefined8 local_64;
  void *local_5c [5];
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b1239;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  cocos2d::log("AppDelegate::applicationDidFinishLaunching()");
  g_hasLoaded = true;
  this_00 = cocos2d::Director::getInstance();
  this_01 = Singleton<ModManager>::instance;
  if (Singleton<ModManager>::instance == (ModManager *)0x0) {
    this_01 = operator_new(0xc);
    Singleton<ModManager>::instance = this_01;
    *(undefined4 *)this_01 = 0;
    *(undefined4 *)(this_01 + 4) = 0;
    *(undefined4 *)(this_01 + 8) = 0;
  }
  (this_01)->initialise();
  pbVar12 = &this_006578b8;
  pFVar3 = cocos2d::FileUtils::getInstance();
  cocos2d::FileUtils::setDefaultResourceRootPath(pFVar3,pbVar12);
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  ghidra::str::assign((std::string *)local_2c,"assets/",7);
  // [seh] local_8 = 0;
  uVar11 = ZEXT48(local_2c);
  pFVar3 = cocos2d::FileUtils::getInstance();
  cocos2d::FileUtils::addSearchPath(pFVar3,(std::string *)uVar11,SUB81(uVar11 >> 0x20,0));
  // [seh] local_8 = 0xffffffff;
  if (0xf < local_18) {
    pnVar10 = (nothrow_t *)(local_18 + 1);
    pvVar9 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar10) {
      pvVar9 = *(void **)((int)local_2c[0] + -4);
      pnVar10 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar9,pnVar10);
  }
  OISConfiguration::configure();
  OISConfiguration::load();
  OISConfiguration::save();
  if (OISConfiguration::hardwareEnabled != false) {
    OISConfiguration::dumpCommands();
  }
  cVar1 = SteamAPI_Init();
  if (cVar1 == '\0') {
    MessageBoxA((HWND)0x0,
                "Steam initialisation error. Please ensure Steam is running and with an account which owns Objects in Space."
                ,"Steam Error",0);
    goto LAB_0040241c;
  }
  debugPrint("DETAIL","Steam initialised.");
  if (Singleton<Stats>::instance == (Stats *)0x0) {
    this_02 = operator_new(0x58);
    local_64 = (double)CONCAT44(this_02,(undefined4)local_64);
    // [seh] local_8 = 1;
    Singleton<Stats>::instance = (Stats *)new ((void *)(this_02)) Stats();
    // [seh] local_8 = 0xffffffff;
  }
  iVar4 = SteamInternal_ContextInit();
  if ((*(int *)(iVar4 + 0x14) != 0) &&
     (iVar4 = SteamInternal_ContextInit(), *(int *)(iVar4 + 4) != 0)) {
    iVar4 = SteamInternal_ContextInit();
    cVar1 = (**(code **)(**(int **)(iVar4 + 4) + 4))();
    if (cVar1 != '\0') {
      debugPrint("DETAIL","Requesting Steam Stats");
      iVar4 = SteamInternal_ContextInit();
      (**(code **)**(undefined4 **)(iVar4 + 0x14))();
    }
  }
  ghidra::str::ctor
            ((std::string *)&stack0xffffff68,
             (std::string *)&OISConfiguration::currentResolutionStr);
  splitStringBy();
  // [seh] local_8 = 2;
  if ((local_6c - (int)local_70) / 0x18 == 2) {
    pcVar5 = local_70;
    if (0xf < *(uint *)(local_70 + 0x14)) {
      pcVar5 = *(char **)local_70;
    }
    OISConfiguration::displayWidth = atoi(pcVar5);
    pcVar5 = local_70 + 0x18;
    if (0xf < *(uint *)(local_70 + 0x2c)) {
      pcVar5 = *(char **)pcVar5;
    }
    OISConfiguration::displayHeight = atoi(pcVar5);
    if (g_gameLogic[0x70] == (byte)0x0) {
      if ((OISConfiguration::displayWidth < 1) || (OISConfiguration::displayHeight < 1))
      goto LAB_004023fe;
    }
    else {
      OISConfiguration::displayWidth = 0x500;
      OISConfiguration::displayHeight = 0x2d0;
    }
    _screenSize = (float)OISConfiguration::displayWidth;
    DAT_0065db5c = (float)OISConfiguration::displayHeight;
    if (OISConfiguration::displayFullscreen == false) {
      debugPrint("GAME","Desired ScreenSize = %.0fx%.0f");
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      ghidra::str::assign((std::string *)local_44,"Objects in Space",0x10);
      // [seh] local_8._0_1_ = 4;
      cocos2d::Rect::Rect((Rect *)&stack0xffffff68,0.0,0.0,(float)OISConfiguration::displayWidth,
                          (float)OISConfiguration::displayHeight);
      this_03 = cocos2d::GLViewImpl::createWithRect(local_44);
      // [seh] local_8 = CONCAT31(local_8._1_3_,2);
      if (0xf < local_30) {
        pnVar10 = (nothrow_t *)(local_30 + 1);
        pvVar9 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar9 = *(void **)((int)local_44[0] + -4);
          pnVar10 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar9,pnVar10);
      }
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    }
    else {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      ghidra::str::assign((std::string *)local_2c,"Objects in Space",0x10);
      // [seh] local_8._0_1_ = 3;
      cocos2d::Rect::Rect((Rect *)&stack0xffffff68,0.0,0.0,(float)OISConfiguration::displayWidth,
                          (float)OISConfiguration::displayHeight);
      this_03 = cocos2d::GLViewImpl::createWithRect(local_2c);
      // [seh] local_8 = CONCAT31(local_8._1_3_,2);
      if (0xf < local_18) {
        pnVar10 = (nothrow_t *)(local_18 + 1);
        pvVar9 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar9 = *(void **)((int)local_2c[0] + -4);
          pnVar10 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar9,pnVar10);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      cocos2d::GLViewImpl::setFullscreen(this_03);
      pSVar6 = (Size *)(**(code **)(*(int *)this_03 + 0x20))();
      cocos2d::Size::operator=(&OSInterface::screenSize,pSVar6);
    }
    DAT_0065db64 = 720.0;
    _designSize = 1280.0;
    cocos2d::Director::setOpenGLView(this_00,(GLView *)this_03);
    pcVar5 = (char *)glGetString();
    ghidra::str::ctor((std::string *)local_5c,pcVar5);
    // [seh] local_8._0_1_ = 5;
    (**(code **)(*(int *)this_03 + 0x50))();
    iVar4 = (**(code **)(*(int *)this_03 + 0x54))();
    local_64._4_4_ = *(undefined4 *)(iVar4 + 4);
    pfVar7 = (float *)(**(code **)(*(int *)this_03 + 0x54))();
    debugPrint("GAME","Got design size %fx%f",(double)*pfVar7);
    OSInterface::cameraScale = _screenSize / _designSize;
    pfVar7 = (float *)(**(code **)(*(int *)this_03 + 0x20))();
    OSInterface::renderScale = *pfVar7 / _designSize;
    debugPrint("GAME","designSize: %fx%f",(double)_designSize);
    debugPrint("GAME","screenSize: %fx%f",(double)_screenSize);
    local_64 = (double)_designSize;
    pfVar7 = (float *)(**(code **)(*(int *)this_03 + 0x20))();
    debugPrint("GAME","Render scale = %f (%f / %f)",(double)OSInterface::renderScale,(double)*pfVar7
              );
    this_00[0x91] = (Director)0x0;
    cocos2d::Director::setAnimationInterval(this_00,0.016666668);
    (this_05)->createWorld();
    pSVar8 = cocos2d::Scene::create();
    this_04 = operator_new(0x298,&std::nothrow);
    local_64 = (double)CONCAT44(this_04,(undefined4)local_64);
    // [seh] local_8._0_1_ = 6;
    if (this_04 == (Layer *)0x0) {
      this_04 = (Layer *)0x0;
    }
    else {
      memset(this_04,0,0x298);
      cocos2d::Layer::Layer(this_04);
      *(undefined ***)this_04 = Game::vftable;
    }
    // [seh] local_8 = CONCAT31(local_8._1_3_,5);
    if (this_04 != (Layer *)0x0) {
      cVar1 = (**(code **)(*(int *)this_04 + 0x278))();
      if (cVar1 == '\0') {
        (*(code *)**(undefined4 **)this_04)();
      }
      else {
        cocos2d::Ref::autorelease((Ref *)this_04);
      }
    }
    (**(code **)(*(int *)pSVar8 + 0x10c))();
    s_gameScene = pSVar8;
    ghidra::any_singleton();
    if (s_gameScene != (Scene *)0x0) {
      (**(code **)(**(int **)(s_gameScene + 0x284) + 0x78))();
      (**(code **)(**(int **)(s_gameScene + 0x284) + 0xc4))();
    }
    cocos2d::Director::runWithScene(this_00,s_gameScene);
    if (0xf < local_48) {
      pnVar10 = (nothrow_t *)(local_48 + 1);
      pvVar9 = local_5c[0];
      if ((nothrow_t *)0xfff < pnVar10) {
        pvVar9 = *(void **)((int)local_5c[0] + -4);
        pnVar10 = (nothrow_t *)(local_48 + 0x24);
        if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar9,pnVar10);
    }
  }
  else {
LAB_004023fe:
    debugPrint("ERROR","ERROR: invalid res in log.");
  }
  ghidra::lib::vector___Tidy((ghidra::vector *)&local_70);
LAB_0040241c:
  // [seh] ExceptionList = local_10;
  // [cookie] uVar2 = __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


// Ghidra: void __thiscall AppDelegate::applicationWillClose(AppDelegate *this)
void AppDelegate::applicationWillClose()

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  uint uVar1;
  NetworkClient *pNVar2;
  SoundEngine *this_00;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b1272;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  if (g_gameLogic[0x71] != (byte)0x0) {
    pNVar2 = ghidra::any_singleton();
    if (*(int *)(pNVar2 + 0x20) != 0) {
      pNVar2 = ghidra::any_singleton();
      (pNVar2)->disconnectFromServer();
    }
  }
  if (ghidra::Singleton<void>::instance == (PresentationInterface *)0x0) {
    this_ = operator_new(0x418);
    // [seh] local_8 = 0;
    ghidra::Singleton<void>::instance =
         (PresentationInterface *)
         new ((void *)((PresentationInterface *)this_)) PresentationInterface();
    // [seh] local_8 = 0xffffffff;
  }
  SteamAPI_Shutdown(uVar1,this_);
  this_00 = ghidra::any_singleton();
  (this_00)->shutdown();
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall AppDelegate::applicationWillEnterForeground(AppDelegate *this)
void AppDelegate::applicationWillEnterForeground()

{
  PresentationInterface *this_00;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b1272;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if ((g_hasLoaded) && (ghidra::Singleton<void>::instance == (PresentationInterface *)0x0)) {
    this_00 = operator_new(0x418);
    // [seh] local_8 = 0;
    ghidra::Singleton<void>::instance =
         (PresentationInterface *)new ((void *)(this_00)) PresentationInterface();
  }
  // [seh] ExceptionList = local_10;
  return;
}
