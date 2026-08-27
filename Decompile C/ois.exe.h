typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef long long    longlong;
typedef char    sbyte;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
typedef short    wchar_t;
typedef unsigned short    word;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
#define code   void

typedef struct UI_Border UI_Border, *PUI_Border;

struct UI_Border { // PlaceHolder Class Structure
};

typedef struct ScreenElement ScreenElement, *PScreenElement;

struct ScreenElement { // PlaceHolder Class Structure
};

typedef struct UI_EngPanel UI_EngPanel, *PUI_EngPanel;

struct UI_EngPanel { // PlaceHolder Class Structure
};

typedef struct _s__RTTIBaseClassDescriptor _s__RTTIBaseClassDescriptor, *P_s__RTTIBaseClassDescriptor;

typedef struct _s__RTTIBaseClassDescriptor RTTIBaseClassDescriptor;

typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;

typedef struct PMD PMD, *PPMD;

typedef struct _s__RTTIClassHierarchyDescriptor _s__RTTIClassHierarchyDescriptor, *P_s__RTTIClassHierarchyDescriptor;

typedef struct _s__RTTIClassHierarchyDescriptor RTTIClassHierarchyDescriptor;

typedef int ptrdiff_t;

struct TypeDescriptor {
    void *pVFTable;
    void *spare;
    char name[0];
};

struct PMD {
    ptrdiff_t mdisp;
    ptrdiff_t pdisp;
    ptrdiff_t vdisp;
};

struct _s__RTTIBaseClassDescriptor {
    struct TypeDescriptor *pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    dword numContainedBases; // count of extended classes in BaseClassArray (RTTI 2)
    struct PMD where; // member displacement structure
    dword attributes; // bit flags
    RTTIClassHierarchyDescriptor *pClassHierarchyDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3) for class
};

struct _s__RTTIClassHierarchyDescriptor {
    dword signature;
    dword attributes; // bit flags
    dword numBaseClasses; // number of base classes (i.e. rtti1Count)
    RTTIBaseClassDescriptor **pBaseClassArray; // ref to BaseClassArray (RTTI 2)
};

typedef struct ShipBehaviour ShipBehaviour, *PShipBehaviour;

struct ShipBehaviour { // PlaceHolder Class Structure
};

typedef byte __uint8;

typedef struct _s_UnwindMapEntry _s_UnwindMapEntry, *P_s_UnwindMapEntry;

typedef struct _s_UnwindMapEntry UnwindMapEntry;

typedef int __ehstate_t;

struct _s_UnwindMapEntry {
    __ehstate_t toState;
    void (*action)(void);
};

typedef struct UIRectangle UIRectangle, *PUIRectangle;

struct UIRectangle { // PlaceHolder Class Structure
};

typedef struct ParticleEngine ParticleEngine, *PParticleEngine;

struct ParticleEngine { // PlaceHolder Class Structure
};

typedef struct Screen_Terminal Screen_Terminal, *PScreen_Terminal;

struct Screen_Terminal { // PlaceHolder Class Structure
};

typedef struct UI_WeaponTubes UI_WeaponTubes, *PUI_WeaponTubes;

struct UI_WeaponTubes { // PlaceHolder Class Structure
};

typedef struct Screen_UpgradeTerminal Screen_UpgradeTerminal, *PScreen_UpgradeTerminal;

struct Screen_UpgradeTerminal { // PlaceHolder Class Structure
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory:31;
    dword DataIsDirectory:1;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef struct UI_Menu UI_Menu, *PUI_Menu;

struct UI_Menu { // PlaceHolder Class Structure
};

typedef struct UI_Slider UI_Slider, *PUI_Slider;

struct UI_Slider { // PlaceHolder Class Structure
};

typedef struct Game Game, *PGame;

struct Game { // PlaceHolder Class Structure
};

typedef struct UI_StatusBar UI_StatusBar, *PUI_StatusBar;

struct UI_StatusBar { // PlaceHolder Class Structure
};

typedef struct Beacon Beacon, *PBeacon;

struct Beacon { // PlaceHolder Class Structure
};

typedef struct UI_SelectedObjectSummary UI_SelectedObjectSummary, *PUI_SelectedObjectSummary;

struct UI_SelectedObjectSummary { // PlaceHolder Class Structure
};

typedef struct _s_ESTypeList _s_ESTypeList, *P_s_ESTypeList;

typedef struct _s_ESTypeList ESTypeList;

typedef struct _s_HandlerType _s_HandlerType, *P_s_HandlerType;

typedef struct _s_HandlerType HandlerType;

struct _s_HandlerType {
    uint adjectives;
    struct TypeDescriptor *pType;
    ptrdiff_t dispCatchObj;
    void *addressOfHandler;
};

struct _s_ESTypeList {
    int nCount;
    HandlerType *pTypeArray;
};

typedef struct UI_BDBar UI_BDBar, *PUI_BDBar;

struct UI_BDBar { // PlaceHolder Class Structure
};

typedef struct CCallbackImpl<16> CCallbackImpl<16>, *PCCallbackImpl<16>;

struct CCallbackImpl<16> { // PlaceHolder Class Structure
};

typedef struct TabletInterface TabletInterface, *PTabletInterface;

struct TabletInterface { // PlaceHolder Class Structure
};

typedef struct RoomObject RoomObject, *PRoomObject;

struct RoomObject { // PlaceHolder Class Structure
};

typedef struct Screen_PC Screen_PC, *PScreen_PC;

struct Screen_PC { // PlaceHolder Class Structure
};

typedef struct UI_SystemBar UI_SystemBar, *PUI_SystemBar;

struct UI_SystemBar { // PlaceHolder Class Structure
};

typedef struct AIFollow AIFollow, *PAIFollow;

struct AIFollow { // PlaceHolder Class Structure
};

typedef struct Screen_ContractTerminal Screen_ContractTerminal, *PScreen_ContractTerminal;

struct Screen_ContractTerminal { // PlaceHolder Class Structure
};

typedef struct DummyObject DummyObject, *PDummyObject;

struct DummyObject { // PlaceHolder Class Structure
};

typedef struct UI_Selector UI_Selector, *PUI_Selector;

struct UI_Selector { // PlaceHolder Class Structure
};

typedef struct UI_Image UI_Image, *PUI_Image;

struct UI_Image { // PlaceHolder Class Structure
};

typedef struct TabletOmega TabletOmega, *PTabletOmega;

struct TabletOmega { // PlaceHolder Class Structure
};

typedef struct AppDelegate AppDelegate, *PAppDelegate;

struct AppDelegate { // PlaceHolder Class Structure
};

typedef struct CargoManager CargoManager, *PCargoManager;

struct CargoManager { // PlaceHolder Class Structure
};

typedef struct Ship Ship, *PShip;

struct Ship { // PlaceHolder Class Structure
};

typedef struct UI_Text UI_Text, *PUI_Text;

struct UI_Text { // PlaceHolder Class Structure
};

typedef struct Interface Interface, *PInterface;

struct Interface { // PlaceHolder Class Structure
};

typedef struct UI_Multimeter UI_Multimeter, *PUI_Multimeter;

struct UI_Multimeter { // PlaceHolder Class Structure
};

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef struct UI_Checkbox UI_Checkbox, *PUI_Checkbox;

struct UI_Checkbox { // PlaceHolder Class Structure
};

typedef ulonglong __uint64;

typedef struct UI_IconTray UI_IconTray, *PUI_IconTray;

struct UI_IconTray { // PlaceHolder Class Structure
};

typedef ushort __uint32;

typedef struct _s__RTTICompleteObjectLocator _s__RTTICompleteObjectLocator, *P_s__RTTICompleteObjectLocator;

typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;

struct _s__RTTICompleteObjectLocator {
    dword signature;
    dword offset; // offset of vbtable within class
    dword cdOffset; // constructor displacement offset
    struct TypeDescriptor *pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    RTTIClassHierarchyDescriptor *pClassDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3)
};

typedef struct UI_PowerDetailScreen UI_PowerDetailScreen, *PUI_PowerDetailScreen;

struct UI_PowerDetailScreen { // PlaceHolder Class Structure
};

typedef struct _s_TryBlockMapEntry _s_TryBlockMapEntry, *P_s_TryBlockMapEntry;

typedef struct _s_TryBlockMapEntry TryBlockMapEntry;

struct _s_TryBlockMapEntry {
    __ehstate_t tryLow;
    __ehstate_t tryHigh;
    __ehstate_t catchHigh;
    int nCatches;
    HandlerType *pHandlerArray;
};

typedef struct UI_ModuleRepair UI_ModuleRepair, *PUI_ModuleRepair;

struct UI_ModuleRepair { // PlaceHolder Class Structure
};

typedef struct AIHunt AIHunt, *PAIHunt;

struct AIHunt { // PlaceHolder Class Structure
};

typedef struct _s_FuncInfo _s_FuncInfo, *P_s_FuncInfo;

struct _s_FuncInfo {
    uint magicNumber_and_bbtFlags;
    __ehstate_t maxState;
    UnwindMapEntry *pUnwindMap;
    uint nTryBlocks;
    TryBlockMapEntry *pTryBlockMap;
    uint nIPMapEntries;
    void *pIPToStateMap;
    ESTypeList *pESTypeList;
    int EHFlags;
};

typedef wchar_t wchar;

typedef struct UI_Data UI_Data, *PUI_Data;

struct UI_Data { // PlaceHolder Class Structure
};

typedef struct UI_ComponentStorage UI_ComponentStorage, *PUI_ComponentStorage;

struct UI_ComponentStorage { // PlaceHolder Class Structure
};

typedef struct UI_SelectTray UI_SelectTray, *PUI_SelectTray;

struct UI_SelectTray { // PlaceHolder Class Structure
};

typedef struct CCallbackImpl<24> CCallbackImpl<24>, *PCCallbackImpl<24>;

struct CCallbackImpl<24> { // PlaceHolder Class Structure
};

typedef struct UI_SensorDisplay UI_SensorDisplay, *PUI_SensorDisplay;

struct UI_SensorDisplay { // PlaceHolder Class Structure
};

typedef struct CCallback<Stats,UserStatsReceived_t,0> CCallback<Stats,UserStatsReceived_t,0>, *PCCallback<Stats,UserStatsReceived_t,0>;

struct CCallback<Stats,UserStatsReceived_t,0> { // PlaceHolder Class Structure
};

typedef struct AIDesire AIDesire, *PAIDesire;

struct AIDesire { // PlaceHolder Class Structure
};

typedef struct OiSStackWalker OiSStackWalker, *POiSStackWalker;

struct OiSStackWalker { // PlaceHolder Class Structure
};

typedef struct AIPiracy AIPiracy, *PAIPiracy;

struct AIPiracy { // PlaceHolder Class Structure
};

typedef struct UI_DockVisualisation UI_DockVisualisation, *PUI_DockVisualisation;

struct UI_DockVisualisation { // PlaceHolder Class Structure
};

typedef struct AIScavenge AIScavenge, *PAIScavenge;

struct AIScavenge { // PlaceHolder Class Structure
};

typedef struct AITravel AITravel, *PAITravel;

struct AITravel { // PlaceHolder Class Structure
};

typedef struct UI_SensorWaveform UI_SensorWaveform, *PUI_SensorWaveform;

struct UI_SensorWaveform { // PlaceHolder Class Structure
};

typedef struct UI_HelmControl UI_HelmControl, *PUI_HelmControl;

struct UI_HelmControl { // PlaceHolder Class Structure
};

typedef struct ComputerSystemInterface ComputerSystemInterface, *PComputerSystemInterface;

struct ComputerSystemInterface { // PlaceHolder Class Structure
};

typedef struct CCallback<Stats,UserStatsStored_t,0> CCallback<Stats,UserStatsStored_t,0>, *PCCallback<Stats,UserStatsStored_t,0>;

struct CCallback<Stats,UserStatsStored_t,0> { // PlaceHolder Class Structure
};

typedef struct UI_SensorSelect UI_SensorSelect, *PUI_SensorSelect;

struct UI_SensorSelect { // PlaceHolder Class Structure
};

typedef int __int32;

typedef struct Screen_TradeTerminal Screen_TradeTerminal, *PScreen_TradeTerminal;

struct Screen_TradeTerminal { // PlaceHolder Class Structure
};

typedef struct Screen_WeaponTerminal Screen_WeaponTerminal, *PScreen_WeaponTerminal;

struct Screen_WeaponTerminal { // PlaceHolder Class Structure
};

typedef struct UI_DMenu UI_DMenu, *PUI_DMenu;

struct UI_DMenu { // PlaceHolder Class Structure
};

typedef struct UI_PowerScreen UI_PowerScreen, *PUI_PowerScreen;

struct UI_PowerScreen { // PlaceHolder Class Structure
};

typedef struct UI_AdShell UI_AdShell, *PUI_AdShell;

struct UI_AdShell { // PlaceHolder Class Structure
};

typedef struct UI_NavMap UI_NavMap, *PUI_NavMap;

struct UI_NavMap { // PlaceHolder Class Structure
};

typedef struct UI_TextField UI_TextField, *PUI_TextField;

struct UI_TextField { // PlaceHolder Class Structure
};

typedef struct SensorManager SensorManager, *PSensorManager;

struct SensorManager { // PlaceHolder Class Structure
};

typedef struct AIPatrol AIPatrol, *PAIPatrol;

struct AIPatrol { // PlaceHolder Class Structure
};

typedef ushort __uint16;

typedef sbyte __int8;

typedef struct UIAnimatedSprite UIAnimatedSprite, *PUIAnimatedSprite;

struct UIAnimatedSprite { // PlaceHolder Class Structure
};

typedef struct UI_IntroSequence UI_IntroSequence, *PUI_IntroSequence;

struct UI_IntroSequence { // PlaceHolder Class Structure
};

typedef struct Screen_Custom Screen_Custom, *PScreen_Custom;

struct Screen_Custom { // PlaceHolder Class Structure
};

typedef struct GameObject GameObject, *PGameObject;

struct GameObject { // PlaceHolder Class Structure
};

typedef struct MultiplayerTabletManager MultiplayerTabletManager, *PMultiplayerTabletManager;

struct MultiplayerTabletManager { // PlaceHolder Class Structure
};

typedef struct UI_Sheet UI_Sheet, *PUI_Sheet;

struct UI_Sheet { // PlaceHolder Class Structure
};

typedef struct _s_FuncInfo FuncInfo;

typedef struct UI_NewsTicker UI_NewsTicker, *PUI_NewsTicker;

struct UI_NewsTicker { // PlaceHolder Class Structure
};

typedef struct UI_TextBox UI_TextBox, *PUI_TextBox;

struct UI_TextBox { // PlaceHolder Class Structure
};

typedef struct HardwareInterface HardwareInterface, *PHardwareInterface;

struct HardwareInterface { // PlaceHolder Class Structure
};

typedef struct AIAttack AIAttack, *PAIAttack;

struct AIAttack { // PlaceHolder Class Structure
};

typedef struct Screen_RTComms Screen_RTComms, *PScreen_RTComms;

struct Screen_RTComms { // PlaceHolder Class Structure
};

typedef struct AIScan AIScan, *PAIScan;

struct AIScan { // PlaceHolder Class Structure
};

typedef struct UI_ShipHullState UI_ShipHullState, *PUI_ShipHullState;

struct UI_ShipHullState { // PlaceHolder Class Structure
};

typedef short __int16;

typedef struct UI_Button UI_Button, *PUI_Button;

struct UI_Button { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_PresentationInterface::*)(cocos2d::EventKeyboard::KeyCode,cocos2d::Event*),PresentationInterface*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,cocos2d::EventKeyboard::KeyCode,cocos2d::Event*> _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_PresentationInterface::*)(cocos2d::EventKeyboard::KeyCode,cocos2d::Event*),PresentationInterface*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,cocos2d::EventKeyboard::KeyCode,cocos2d::Event*>, *P_Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_PresentationInterface::*)(cocos2d::EventKeyboard::KeyCode,cocos2d::Event*),PresentationInterface*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,cocos2d::EventKeyboard::KeyCode,cocos2d::Event*>;

struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_PresentationInterface::*)(cocos2d::EventKeyboard::KeyCode,cocos2d::Event*),PresentationInterface*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,cocos2d::EventKeyboard::KeyCode,cocos2d::Event*> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<bool_(__cdecl*)(void*),bool,void*> _Func_impl_no_alloc<bool_(__cdecl*)(void*),bool,void*>, *P_Func_impl_no_alloc<bool_(__cdecl*)(void*),bool,void*>;

struct _Func_impl_no_alloc<bool_(__cdecl*)(void*),bool,void*> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_ContractTerminal::*)(bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_ContractTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_ContractTerminal::*)(bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_ContractTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>, *P_Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_ContractTerminal::*)(bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_ContractTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>;

struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_ContractTerminal::*)(bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_ContractTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_ComputerSystem::*)(void),ComputerSystem*&>,void> _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_ComputerSystem::*)(void),ComputerSystem*&>,void>, *P_Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_ComputerSystem::*)(void),ComputerSystem*&>,void>;

struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_ComputerSystem::*)(void),ComputerSystem*&>,void> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<bool_(__cdecl*)(Ship*,int,int,int),bool,Ship*,double,double,double> _Func_impl_no_alloc<bool_(__cdecl*)(Ship*,int,int,int),bool,Ship*,double,double,double>, *P_Func_impl_no_alloc<bool_(__cdecl*)(Ship*,int,int,int),bool,Ship*,double,double,double>;

struct _Func_impl_no_alloc<bool_(__cdecl*)(Ship*,int,int,int),bool,Ship*,double,double,double> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,bool_(__thiscall_ServerPresentationInterface::*)(int),ServerPresentationInterface*,std::_Ph<1>_const&>,bool,int> _Func_impl_no_alloc<std::_Binder<std::_Unforced,bool_(__thiscall_ServerPresentationInterface::*)(int),ServerPresentationInterface*,std::_Ph<1>_const&>,bool,int>, *P_Func_impl_no_alloc<std::_Binder<std::_Unforced,bool_(__thiscall_ServerPresentationInterface::*)(int),ServerPresentationInterface*,std::_Ph<1>_const&>,bool,int>;

struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,bool_(__thiscall_ServerPresentationInterface::*)(int),ServerPresentationInterface*,std::_Ph<1>_const&>,bool,int> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_WeaponTerminal::*)(void),Screen_WeaponTerminal*>,void> _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_WeaponTerminal::*)(void),Screen_WeaponTerminal*>,void>, *P_Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_WeaponTerminal::*)(void),Screen_WeaponTerminal*>,void>;

struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_WeaponTerminal::*)(void),Screen_WeaponTerminal*>,void> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_ComputerSystem::*)(int),ComputerSystem*,std::_Ph<1>_const&>,void,int> _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_ComputerSystem::*)(int),ComputerSystem*,std::_Ph<1>_const&>,void,int>, *P_Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_ComputerSystem::*)(int),ComputerSystem*,std::_Ph<1>_const&>,void,int>;

struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_ComputerSystem::*)(int),ComputerSystem*,std::_Ph<1>_const&>,void,int> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_ServerPresentationInterface::*)(int),ServerPresentationInterface*,std::_Ph<1>_const&>,void,int> _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_ServerPresentationInterface::*)(int),ServerPresentationInterface*,std::_Ph<1>_const&>,void,int>, *P_Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_ServerPresentationInterface::*)(int),ServerPresentationInterface*,std::_Ph<1>_const&>,void,int>;

struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_ServerPresentationInterface::*)(int),ServerPresentationInterface*,std::_Ph<1>_const&>,void,int> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_ContractTerminal::*)(void),Screen_ContractTerminal*>,void> _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_ContractTerminal::*)(void),Screen_ContractTerminal*>,void>, *P_Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_ContractTerminal::*)(void),Screen_ContractTerminal*>,void>;

struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_ContractTerminal::*)(void),Screen_ContractTerminal*>,void> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_ComputerSystem::*)(void),ComputerSystem*>,void> _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_ComputerSystem::*)(void),ComputerSystem*>,void>, *P_Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_ComputerSystem::*)(void),ComputerSystem*>,void>;

struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_ComputerSystem::*)(void),ComputerSystem*>,void> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_Terminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_Terminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_Terminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_Terminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>, *P_Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_Terminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_Terminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>;

struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_Terminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_Terminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_PC::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>),Screen_PC*,std::_Ph<1>_const&>,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_PC::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>),Screen_PC*,std::_Ph<1>_const&>,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>, *P_Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_PC::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>),Screen_PC*,std::_Ph<1>_const&>,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>;

struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_PC::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>),Screen_PC*,std::_Ph<1>_const&>,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<std::function<bool___cdecl(Ship*,int,int,int)>,bool,Ship*,double,double,double> _Func_impl_no_alloc<std::function<bool___cdecl(Ship*,int,int,int)>,bool,Ship*,double,double,double>, *P_Func_impl_no_alloc<std::function<bool___cdecl(Ship*,int,int,int)>,bool,Ship*,double,double,double>;

struct _Func_impl_no_alloc<std::function<bool___cdecl(Ship*,int,int,int)>,bool,Ship*,double,double,double> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_TradeTerminal::*)(bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_TradeTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_TradeTerminal::*)(bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_TradeTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>, *P_Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_TradeTerminal::*)(bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_TradeTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>;

struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_TradeTerminal::*)(bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_TradeTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<bool_(__cdecl*)(Ship*,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>),bool,Ship*,int,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_> _Func_impl_no_alloc<bool_(__cdecl*)(Ship*,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>),bool,Ship*,int,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>, *P_Func_impl_no_alloc<bool_(__cdecl*)(Ship*,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>),bool,Ship*,int,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>;

struct _Func_impl_no_alloc<bool_(__cdecl*)(Ship*,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>),bool,Ship*,int,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_PC::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_PC*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_PC::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_PC*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>, *P_Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_PC::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_PC*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>;

struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_PC::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_PC*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_UpgradeTerminal::*)(bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_UpgradeTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_UpgradeTerminal::*)(bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_UpgradeTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>, *P_Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_UpgradeTerminal::*)(bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_UpgradeTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>;

struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_UpgradeTerminal::*)(bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_UpgradeTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_TradeTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_TradeTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_TradeTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_TradeTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>, *P_Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_TradeTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_TradeTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>;

struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_TradeTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_TradeTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_WeaponTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_WeaponTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_WeaponTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_WeaponTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>, *P_Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_WeaponTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_WeaponTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>;

struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_WeaponTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_WeaponTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<std::function<bool___cdecl(Ship*,double,double,double)>,bool,Ship*,int,int,int> _Func_impl_no_alloc<std::function<bool___cdecl(Ship*,double,double,double)>,bool,Ship*,int,int,int>, *P_Func_impl_no_alloc<std::function<bool___cdecl(Ship*,double,double,double)>,bool,Ship*,int,int,int>;

struct _Func_impl_no_alloc<std::function<bool___cdecl(Ship*,double,double,double)>,bool,Ship*,int,int,int> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_UpgradeTerminal::*)(void),Screen_UpgradeTerminal*>,void> _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_UpgradeTerminal::*)(void),Screen_UpgradeTerminal*>,void>, *P_Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_UpgradeTerminal::*)(void),Screen_UpgradeTerminal*>,void>;

struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_UpgradeTerminal::*)(void),Screen_UpgradeTerminal*>,void> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_ContractTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_ContractTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_ContractTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_ContractTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>, *P_Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_ContractTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_ContractTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>;

struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_ContractTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_ContractTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_TradeTerminal::*)(void),Screen_TradeTerminal*>,void> _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_TradeTerminal::*)(void),Screen_TradeTerminal*>,void>, *P_Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_TradeTerminal::*)(void),Screen_TradeTerminal*>,void>;

struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_TradeTerminal::*)(void),Screen_TradeTerminal*>,void> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<double_(__cdecl*)(Ship*,int),double,Ship*,int> _Func_impl_no_alloc<double_(__cdecl*)(Ship*,int),double,Ship*,int>, *P_Func_impl_no_alloc<double_(__cdecl*)(Ship*,int),double,Ship*,int>;

struct _Func_impl_no_alloc<double_(__cdecl*)(Ship*,int),double,Ship*,int> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_WeaponTerminal::*)(bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_WeaponTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_WeaponTerminal::*)(bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_WeaponTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>, *P_Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_WeaponTerminal::*)(bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_WeaponTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>;

struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_WeaponTerminal::*)(bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_WeaponTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> { // PlaceHolder Class Structure
};

typedef struct function<bool___cdecl(Ship*,double,double,double)> function<bool___cdecl(Ship*,double,double,double)>, *Pfunction<bool___cdecl(Ship*,double,double,double)>;

struct function<bool___cdecl(Ship*,double,double,double)> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<void_(__cdecl*)(Menu*),void,Menu*> _Func_impl_no_alloc<void_(__cdecl*)(Menu*),void,Menu*>, *P_Func_impl_no_alloc<void_(__cdecl*)(Menu*),void,Menu*>;

struct _Func_impl_no_alloc<void_(__cdecl*)(Menu*),void,Menu*> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_PC::*)(void),Screen_PC*>,void> _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_PC::*)(void),Screen_PC*>,void>, *P_Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_PC::*)(void),Screen_PC*>,void>;

struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_PC::*)(void),Screen_PC*>,void> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_Terminal::*)(bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_Terminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_Terminal::*)(bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_Terminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>, *P_Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_Terminal::*)(bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_Terminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>;

struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_Terminal::*)(bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_Terminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<bool_(__cdecl*)(Ship*,double,double,double),bool,Ship*,double,double,double> _Func_impl_no_alloc<bool_(__cdecl*)(Ship*,double,double,double),bool,Ship*,double,double,double>, *P_Func_impl_no_alloc<bool_(__cdecl*)(Ship*,double,double,double),bool,Ship*,double,double,double>;

struct _Func_impl_no_alloc<bool_(__cdecl*)(Ship*,double,double,double),bool,Ship*,double,double,double> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_PresentationInterface::*)(cocos2d::Event*),PresentationInterface*,std::_Ph<1>_const&>,void,cocos2d::EventMouse*> _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_PresentationInterface::*)(cocos2d::Event*),PresentationInterface*,std::_Ph<1>_const&>,void,cocos2d::EventMouse*>, *P_Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_PresentationInterface::*)(cocos2d::Event*),PresentationInterface*,std::_Ph<1>_const&>,void,cocos2d::EventMouse*>;

struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_PresentationInterface::*)(cocos2d::Event*),PresentationInterface*,std::_Ph<1>_const&>,void,cocos2d::EventMouse*> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<bool_(__cdecl*)(Ship*,int,int,int),bool,Ship*,int,int,int> _Func_impl_no_alloc<bool_(__cdecl*)(Ship*,int,int,int),bool,Ship*,int,int,int>, *P_Func_impl_no_alloc<bool_(__cdecl*)(Ship*,int,int,int),bool,Ship*,int,int,int>;

struct _Func_impl_no_alloc<bool_(__cdecl*)(Ship*,int,int,int),bool,Ship*,int,int,int> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<class_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_(__cdecl*)(Ship*,int),std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,Ship*,int> _Func_impl_no_alloc<class_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_(__cdecl*)(Ship*,int),std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,Ship*,int>, *P_Func_impl_no_alloc<class_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_(__cdecl*)(Ship*,int),std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,Ship*,int>;

struct _Func_impl_no_alloc<class_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_(__cdecl*)(Ship*,int),std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,Ship*,int> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_PC::*)(bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_PC*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_PC::*)(bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_PC*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>, *P_Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_PC::*)(bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_PC*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>;

struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_PC::*)(bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_PC*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_Terminal::*)(void),Screen_Terminal*>,void> _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_Terminal::*)(void),Screen_Terminal*>,void>, *P_Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_Terminal::*)(void),Screen_Terminal*>,void>;

struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_Terminal::*)(void),Screen_Terminal*>,void> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_UpgradeTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_UpgradeTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_UpgradeTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_UpgradeTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>, *P_Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_UpgradeTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_UpgradeTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>;

struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_Screen_UpgradeTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_UpgradeTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>,void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> { // PlaceHolder Class Structure
};

typedef struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_RoomObject::*)(void),RoomObject*>,void> _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_RoomObject::*)(void),RoomObject*>,void>, *P_Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_RoomObject::*)(void),RoomObject*>,void>;

struct _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__thiscall_RoomObject::*)(void),RoomObject*>,void> { // PlaceHolder Class Structure
};

typedef struct _devicemodeW _devicemodeW, *P_devicemodeW;

typedef wchar_t WCHAR;

typedef ushort WORD;

typedef ulong DWORD;

typedef union _union_660 _union_660, *P_union_660;

typedef union _union_663 _union_663, *P_union_663;

typedef struct _struct_661 _struct_661, *P_struct_661;

typedef struct _struct_662 _struct_662, *P_struct_662;

typedef struct _POINTL _POINTL, *P_POINTL;

typedef struct _POINTL POINTL;

typedef long LONG;

struct _POINTL {
    LONG x;
    LONG y;
};

union _union_663 {
    DWORD dmDisplayFlags;
    DWORD dmNup;
};

struct _struct_662 {
    POINTL dmPosition;
    DWORD dmDisplayOrientation;
    DWORD dmDisplayFixedOutput;
};

struct _struct_661 {
    short dmOrientation;
    short dmPaperSize;
    short dmPaperLength;
    short dmPaperWidth;
    short dmScale;
    short dmCopies;
    short dmDefaultSource;
    short dmPrintQuality;
};

union _union_660 {
    struct _struct_661 field0;
    struct _struct_662 field1;
};

struct _devicemodeW {
    WCHAR dmDeviceName[32];
    WORD dmSpecVersion;
    WORD dmDriverVersion;
    WORD dmSize;
    WORD dmDriverExtra;
    DWORD dmFields;
    union _union_660 field6_0x4c;
    short dmColor;
    short dmDuplex;
    short dmYResolution;
    short dmTTOption;
    short dmCollate;
    WCHAR dmFormName[32];
    WORD dmLogPixels;
    DWORD dmBitsPerPel;
    DWORD dmPelsWidth;
    DWORD dmPelsHeight;
    union _union_663 field17_0xb4;
    DWORD dmDisplayFrequency;
    DWORD dmICMMethod;
    DWORD dmICMIntent;
    DWORD dmMediaType;
    DWORD dmDitherType;
    DWORD dmReserved1;
    DWORD dmReserved2;
    DWORD dmPanningWidth;
    DWORD dmPanningHeight;
};

typedef struct _devicemodeW DEVMODEW;

typedef struct _COMSTAT _COMSTAT, *P_COMSTAT;

struct _COMSTAT {
    DWORD fCtsHold:1;
    DWORD fDsrHold:1;
    DWORD fRlsdHold:1;
    DWORD fXoffHold:1;
    DWORD fXoffSent:1;
    DWORD fEof:1;
    DWORD fTxim:1;
    DWORD fReserved:25;
    DWORD cbInQue;
    DWORD cbOutQue;
};

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef ulong ULONG_PTR;

typedef union _union_518 _union_518, *P_union_518;

typedef void *HANDLE;

typedef struct _struct_519 _struct_519, *P_struct_519;

typedef void *PVOID;

struct _struct_519 {
    DWORD Offset;
    DWORD OffsetHigh;
};

union _union_518 {
    struct _struct_519 s;
    PVOID Pointer;
};

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_518 u;
    HANDLE hEvent;
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef void *LPVOID;

typedef int BOOL;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _DCB _DCB, *P_DCB;

typedef uchar BYTE;

struct _DCB {
    DWORD DCBlength;
    DWORD BaudRate;
    DWORD fBinary:1;
    DWORD fParity:1;
    DWORD fOutxCtsFlow:1;
    DWORD fOutxDsrFlow:1;
    DWORD fDtrControl:2;
    DWORD fDsrSensitivity:1;
    DWORD fTXContinueOnXoff:1;
    DWORD fOutX:1;
    DWORD fInX:1;
    DWORD fErrorChar:1;
    DWORD fNull:1;
    DWORD fRtsControl:2;
    DWORD fAbortOnError:1;
    DWORD fDummy2:17;
    WORD wReserved;
    WORD XonLim;
    WORD XoffLim;
    BYTE ByteSize;
    BYTE Parity;
    BYTE StopBits;
    char XonChar;
    char XoffChar;
    char ErrorChar;
    char EofChar;
    char EvtChar;
    WORD wReserved1;
};

typedef struct _STARTUPINFOW _STARTUPINFOW, *P_STARTUPINFOW;

typedef WCHAR *LPWSTR;

typedef BYTE *LPBYTE;

struct _STARTUPINFOW {
    DWORD cb;
    LPWSTR lpReserved;
    LPWSTR lpDesktop;
    LPWSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _DCB *LPDCB;

typedef struct _STARTUPINFOW *LPSTARTUPINFOW;

typedef struct _COMSTAT *LPCOMSTAT;

typedef struct _WIN32_FIND_DATAW _WIN32_FIND_DATAW, *P_WIN32_FIND_DATAW;

typedef struct _WIN32_FIND_DATAW *LPWIN32_FIND_DATAW;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME FILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

struct _WIN32_FIND_DATAW {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    WCHAR cFileName[260];
    WCHAR cAlternateFileName[14];
};

typedef struct _OVERLAPPED *LPOVERLAPPED;

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION *CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
};

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT CONTEXT;

typedef CONTEXT *PCONTEXT;

typedef PCONTEXT LPCONTEXT;

typedef struct _FLOATING_SAVE_AREA _FLOATING_SAVE_AREA, *P_FLOATING_SAVE_AREA;

typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

struct _FLOATING_SAVE_AREA {
    DWORD ControlWord;
    DWORD StatusWord;
    DWORD TagWord;
    DWORD ErrorOffset;
    DWORD ErrorSelector;
    DWORD DataOffset;
    DWORD DataSelector;
    BYTE RegisterArea[80];
    DWORD Cr0NpxState;
};

struct _CONTEXT {
    DWORD ContextFlags;
    DWORD Dr0;
    DWORD Dr1;
    DWORD Dr2;
    DWORD Dr3;
    DWORD Dr6;
    DWORD Dr7;
    FLOATING_SAVE_AREA FloatSave;
    DWORD SegGs;
    DWORD SegFs;
    DWORD SegEs;
    DWORD SegDs;
    DWORD Edi;
    DWORD Esi;
    DWORD Ebx;
    DWORD Edx;
    DWORD Ecx;
    DWORD Eax;
    DWORD Ebp;
    DWORD Eip;
    DWORD SegCs;
    DWORD EFlags;
    DWORD Esp;
    DWORD SegSs;
    BYTE ExtendedRegisters[512];
};

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (*PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef double ULONGLONG;

typedef char CHAR;

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

typedef double LONGLONG;

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef union _SLIST_HEADER _SLIST_HEADER, *P_SLIST_HEADER;

typedef struct _struct_299 _struct_299, *P_struct_299;

typedef struct _SINGLE_LIST_ENTRY _SINGLE_LIST_ENTRY, *P_SINGLE_LIST_ENTRY;

typedef struct _SINGLE_LIST_ENTRY SINGLE_LIST_ENTRY;

struct _SINGLE_LIST_ENTRY {
    struct _SINGLE_LIST_ENTRY *Next;
};

struct _struct_299 {
    SINGLE_LIST_ENTRY Next;
    WORD Depth;
    WORD Sequence;
};

union _SLIST_HEADER {
    ULONGLONG Alignment;
    struct _struct_299 s;
};

typedef WCHAR *LPCWSTR;

typedef union _SLIST_HEADER *PSLIST_HEADER;

typedef CHAR *LPCSTR;

typedef struct _OSVERSIONINFOA _OSVERSIONINFOA, *P_OSVERSIONINFOA;

struct _OSVERSIONINFOA {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    CHAR szCSDVersion[128];
};

typedef CHAR *LPSTR;

typedef struct _OSVERSIONINFOA *LPOSVERSIONINFOA;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef struct tm tm, *Ptm;

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
};

typedef uint UINT_PTR;

typedef ULONG_PTR SIZE_T;

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[50];
};

typedef struct in_addr in_addr, *Pin_addr;

typedef union _union_1226 _union_1226, *P_union_1226;

typedef struct _struct_1227 _struct_1227, *P_struct_1227;

typedef struct _struct_1228 _struct_1228, *P_struct_1228;

typedef ulong ULONG;

typedef uchar UCHAR;

typedef ushort USHORT;

struct _struct_1228 {
    USHORT s_w1;
    USHORT s_w2;
};

struct _struct_1227 {
    UCHAR s_b1;
    UCHAR s_b2;
    UCHAR s_b3;
    UCHAR s_b4;
};

union _union_1226 {
    struct _struct_1227 S_un_b;
    struct _struct_1228 S_un_w;
    ULONG S_addr;
};

struct in_addr {
    union _union_1226 S_un;
};

typedef struct _exception _exception, *P_exception;

struct _exception {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
};

typedef struct _ACTIVATION_CONTEXT _ACTIVATION_CONTEXT, *P_ACTIVATION_CONTEXT;

struct _ACTIVATION_CONTEXT {
};

typedef struct __vcrt_va_list_is_reference<charconst*const> __vcrt_va_list_is_reference<charconst*const>, *P__vcrt_va_list_is_reference<charconst*const>;

struct __vcrt_va_list_is_reference<charconst*const> {
    undefined field0_0x0;
};

typedef struct _RTL_CONDITION_VARIABLE _RTL_CONDITION_VARIABLE, *P_RTL_CONDITION_VARIABLE;

struct _RTL_CONDITION_VARIABLE {
    void *Ptr;
};

typedef void *_PIFV;

typedef uint *PUINT_PTR;

typedef struct _s__CatchableTypeArray _s__CatchableTypeArray, *P_s__CatchableTypeArray;

typedef struct _s__CatchableType _s__CatchableType, *P_s__CatchableType;

typedef struct _TypeDescriptor _TypeDescriptor, *P_TypeDescriptor;

typedef struct _PMD _PMD, *P_PMD;

struct _TypeDescriptor {
    void *pVFTable;
    void *spare;
    char name[0];
};

struct _PMD {
    int mdisp;
    int pdisp;
    int vdisp;
};

struct _s__CatchableType {
    uint properties;
    struct _TypeDescriptor *pType;
    struct _PMD thisDisplacement;
    int sizeOrOffset;
    void *copyFunction;
};

struct _s__CatchableTypeArray {
    int nCatchableTypes;
    struct _s__CatchableType *arrayOfCatchableTypes[0];
};

typedef struct _EXCEPTION_REGISTRATION_RECORD _EXCEPTION_REGISTRATION_RECORD, *P_EXCEPTION_REGISTRATION_RECORD;

struct _EXCEPTION_REGISTRATION_RECORD {
    struct _EXCEPTION_REGISTRATION_RECORD *Next;
    void *Handler;
};


// WARNING! conflicting data type names: /ois.pdb/CONTEXT - /winnt.h/CONTEXT


// WARNING! conflicting data type names: /ois.pdb/PRTL_CRITICAL_SECTION - /winnt.h/PRTL_CRITICAL_SECTION

typedef struct _TP_CLEANUP_GROUP _TP_CLEANUP_GROUP, *P_TP_CLEANUP_GROUP;

struct _TP_CLEANUP_GROUP {
};

typedef struct _IMAGE_LOAD_CONFIG_CODE_INTEGRITY _IMAGE_LOAD_CONFIG_CODE_INTEGRITY, *P_IMAGE_LOAD_CONFIG_CODE_INTEGRITY;

typedef struct _IMAGE_LOAD_CONFIG_CODE_INTEGRITY IMAGE_LOAD_CONFIG_CODE_INTEGRITY;

struct _IMAGE_LOAD_CONFIG_CODE_INTEGRITY {
    ushort Flags;
    ushort Catalog;
    ulong CatalogOffset;
    ulong Reserved;
};

typedef __int64 LONG64;

typedef struct __scrt_narrow_argv_policy __scrt_narrow_argv_policy, *P__scrt_narrow_argv_policy;

struct __scrt_narrow_argv_policy {
    undefined field0_0x0;
};


// WARNING! conflicting data type names: /ois.pdb/_STARTUPINFOW - /winbase.h/_STARTUPINFOW

typedef struct _STARTUPINFOW STARTUPINFOW;

typedef struct _s_ThrowInfo _s_ThrowInfo, *P_s_ThrowInfo;

typedef struct _s_ThrowInfo ThrowInfo;

typedef struct _s_CatchableTypeArray _s_CatchableTypeArray, *P_s_CatchableTypeArray;

typedef struct _s_CatchableType _s_CatchableType, *P_s_CatchableType;


// WARNING! conflicting data type names: /ois.pdb/TypeDescriptor - /TypeDescriptor


// WARNING! conflicting data type names: /ois.pdb/PMD - /ehdata.h/PMD

struct _s_ThrowInfo {
    uint attributes;
    void *pmfnUnwind;
    void *pForwardCompat;
    struct _s_CatchableTypeArray *pCatchableTypeArray;
};

struct _s_CatchableType {
    uint properties;
    struct TypeDescriptor *pType;
    struct PMD thisDisplacement;
    int sizeOrOffset;
    void *copyFunction;
};

struct _s_CatchableTypeArray {
    int nCatchableTypes;
    struct _s_CatchableType *arrayOfCatchableTypes[0];
};


// WARNING! conflicting data type names: /ois.pdb/LPSECURITY_ATTRIBUTES - /winbase.h/LPSECURITY_ATTRIBUTES

typedef struct __crt_locale_data __crt_locale_data, *P__crt_locale_data;

struct __crt_locale_data {
};

typedef enum tagAR_STATE {
    AR_ENABLED=0,
    AR_DISABLED=1,
    AR_SUPPRESSED=2,
    AR_REMOTESESSION=4,
    AR_MULTIMON=8,
    AR_NOSENSOR=16,
    AR_NOT_SUPPORTED=32,
    AR_DOCKED=64,
    AR_LAPTOP=128
} tagAR_STATE;

typedef enum tagAR_STATE AR_STATE;


// WARNING! conflicting data type names: /ois.pdb/_EXCEPTION_POINTERS - /excpt.h/_EXCEPTION_POINTERS

typedef struct _EXCEPTION_POINTERS EXCEPTION_POINTERS;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

struct HINSTANCE__ {
    int unused;
};


// WARNING! conflicting data type names: /ois.pdb/_s__RTTIBaseClassDescriptor - /_s__RTTIBaseClassDescriptor

typedef struct _lldiv_t _lldiv_t, *P_lldiv_t;

struct _lldiv_t {
    __int64 quot;
    __int64 rem;
};

typedef struct HINSTANCE__ *HMODULE;

typedef enum _EXCEPTION_DISPOSITION {
    ExceptionContinueExecution=0,
    ExceptionContinueSearch=1,
    ExceptionNestedException=2,
    ExceptionCollidedUnwind=3
} _EXCEPTION_DISPOSITION;

typedef enum _EXCEPTION_DISPOSITION EXCEPTION_DISPOSITION;

typedef struct sockaddr_in sockaddr_in, *Psockaddr_in;


// WARNING! conflicting data type names: /ois.pdb/in_addr - /inaddr.h/in_addr

struct sockaddr_in {
    ushort sin_family;
    ushort sin_port;
    struct in_addr sin_addr;
    char sin_zero[8];
};

typedef struct _TP_CALLBACK_INSTANCE _TP_CALLBACK_INSTANCE, *P_TP_CALLBACK_INSTANCE;

struct _TP_CALLBACK_INSTANCE {
};

typedef enum ReplacesCorHdrNumericDefines {
    COMIMAGE_FLAGS_ILONLY=1,
    COR_VTABLE_32BIT=1,
    IMAGE_COR_MIH_METHODRVA=1,
    NATIVE_TYPE_MAX_CB=1,
    COMIMAGE_FLAGS_32BITREQUIRED=2,
    COR_VERSION_MAJOR=2,
    COR_VERSION_MAJOR_V2=2,
    COR_VTABLE_64BIT=2,
    IMAGE_COR_MIH_EHRVA=2,
    COMIMAGE_FLAGS_IL_LIBRARY=4,
    COR_VTABLE_FROM_UNMANAGED=4,
    COR_VERSION_MINOR=5,
    COMIMAGE_FLAGS_STRONGNAMESIGNED=8,
    COR_DELETED_NAME_LENGTH=8,
    COR_VTABLEGAP_NAME_LENGTH=8,
    COR_VTABLE_FROM_UNMANAGED_RETAIN_APPDOMAIN=8,
    IMAGE_COR_MIH_BASICBLOCK=8,
    COMIMAGE_FLAGS_NATIVE_ENTRYPOINT=16,
    COR_VTABLE_CALL_MOST_DERIVED=16,
    IMAGE_COR_EATJ_THUNK_SIZE=32,
    COR_ILMETHOD_SECT_SMALL_MAX_DATASIZE=255,
    MAX_CLASS_NAME=1024,
    MAX_PACKAGE_NAME=1024,
    COMIMAGE_FLAGS_TRACKDEBUGDATA=65536,
    COMIMAGE_FLAGS_32BITPREFERRED=131072
} ReplacesCorHdrNumericDefines;

typedef struct _GUID _GUID, *P_GUID;

struct _GUID {
    ulong Data1;
    ushort Data2;
    ushort Data3;
    uchar Data4[8];
};

typedef struct _RS2_IMAGE_LOAD_CONFIG_DIRECTORY32 _RS2_IMAGE_LOAD_CONFIG_DIRECTORY32, *P_RS2_IMAGE_LOAD_CONFIG_DIRECTORY32;

typedef struct _RS2_IMAGE_LOAD_CONFIG_DIRECTORY32 RS2_IMAGE_LOAD_CONFIG_DIRECTORY;

struct _RS2_IMAGE_LOAD_CONFIG_DIRECTORY32 {
    ulong Size;
    ulong TimeDateStamp;
    ushort MajorVersion;
    ushort MinorVersion;
    ulong GlobalFlagsClear;
    ulong GlobalFlagsSet;
    ulong CriticalSectionDefaultTimeout;
    ulong DeCommitFreeBlockThreshold;
    ulong DeCommitTotalFreeThreshold;
    ulong LockPrefixTable;
    ulong MaximumAllocationSize;
    ulong VirtualMemoryThreshold;
    ulong ProcessHeapFlags;
    ulong ProcessAffinityMask;
    ushort CSDVersion;
    ushort DependentLoadFlags;
    ulong EditList;
    ulong SecurityCookie;
    ulong SEHandlerTable;
    ulong SEHandlerCount;
    ulong GuardCFCheckFunctionPointer;
    ulong GuardCFDispatchFunctionPointer;
    ulong GuardCFFunctionTable;
    ulong GuardCFFunctionCount;
    ulong GuardFlags;
    struct _IMAGE_LOAD_CONFIG_CODE_INTEGRITY CodeIntegrity;
    ulong GuardAddressTakenIatEntryTable;
    ulong GuardAddressTakenIatEntryCount;
    ulong GuardLongJumpTargetTable;
    ulong GuardLongJumpTargetCount;
    ulong DynamicValueRelocTable;
    ulong CHPEMetadataPointer;
    ulong GuardRFFailureRoutine;
    ulong GuardRFFailureRoutineFunctionPointer;
    ulong DynamicValueRelocTableOffset;
    ushort DynamicValueRelocTableSection;
    ushort Reserved2;
    ulong GuardRFVerifyStackPointerFunctionPointer;
    ulong HotPatchTableOffset;
    ulong Reserved3;
    ulong EnclaveConfigurationPointer;
};

typedef ulong TP_VERSION;

typedef struct _s_CatchableTypeArray CatchableTypeArray;

typedef bool __vcrt_bool;


// WARNING! conflicting data type names: /ois.pdb/_CONTEXT - /excpt.h/_CONTEXT

typedef struct _s__CatchableTypeArray _CatchableTypeArray;

typedef void *FARPROC;


// WARNING! conflicting data type names: /ois.pdb/LPCSTR - /winnt.h/LPCSTR


// WARNING! conflicting data type names: /ois.pdb/SIZE_T - /basetsd.h/SIZE_T

typedef long *PLONG;


// WARNING! conflicting data type names: /ois.pdb/_SECURITY_ATTRIBUTES - /winbase.h/_SECURITY_ATTRIBUTES

typedef struct WSAData WSAData, *PWSAData;

typedef struct WSAData *LPWSADATA;

struct WSAData {
    ushort wVersion;
    ushort wHighVersion;
    char szDescription[257];
    char szSystemStatus[129];
    ushort iMaxSockets;
    ushort iMaxUdpDg;
    char *lpVendorInfo;
};

typedef struct __crt_locale_data_public __crt_locale_data_public, *P__crt_locale_data_public;

struct __crt_locale_data_public {
    ushort *_locale_pctype;
    int _locale_mb_cur_max;
    uint _locale_lc_codepage;
};

typedef struct _EVENT_DATA_DESCRIPTOR _EVENT_DATA_DESCRIPTOR, *P_EVENT_DATA_DESCRIPTOR;

typedef union _EVENT_DATA_DESCRIPTOR_u_12 _EVENT_DATA_DESCRIPTOR_u_12, *P_EVENT_DATA_DESCRIPTOR_u_12;

typedef struct _EVENT_DATA_DESCRIPTOR_u_12_s_1 _EVENT_DATA_DESCRIPTOR_u_12_s_1, *P_EVENT_DATA_DESCRIPTOR_u_12_s_1;

struct _EVENT_DATA_DESCRIPTOR_u_12_s_1 {
    uchar Type;
    uchar Reserved1;
    ushort Reserved2;
};

union _EVENT_DATA_DESCRIPTOR_u_12 {
    ulong Reserved;
    struct _EVENT_DATA_DESCRIPTOR_u_12_s_1 _s_1;
};

struct _EVENT_DATA_DESCRIPTOR {
    __uint64 Ptr;
    ulong Size;
    union _EVENT_DATA_DESCRIPTOR_u_12 field2_0xc;
};


// WARNING! conflicting data type names: /ois.pdb/_LIST_ENTRY - /winnt.h/_LIST_ENTRY

typedef struct _TP_POOL _TP_POOL, *P_TP_POOL;

struct _TP_POOL {
};


// WARNING! conflicting data type names: /ois.pdb/_SINGLE_LIST_ENTRY - /winnt.h/_SINGLE_LIST_ENTRY

typedef struct _IMAGE_NT_HEADERS _IMAGE_NT_HEADERS, *P_IMAGE_NT_HEADERS;

typedef struct _IMAGE_FILE_HEADER _IMAGE_FILE_HEADER, *P_IMAGE_FILE_HEADER;

typedef struct _IMAGE_OPTIONAL_HEADER _IMAGE_OPTIONAL_HEADER, *P_IMAGE_OPTIONAL_HEADER;

typedef struct _IMAGE_DATA_DIRECTORY _IMAGE_DATA_DIRECTORY, *P_IMAGE_DATA_DIRECTORY;

struct _IMAGE_FILE_HEADER {
    ushort Machine;
    ushort NumberOfSections;
    ulong TimeDateStamp;
    ulong PointerToSymbolTable;
    ulong NumberOfSymbols;
    ushort SizeOfOptionalHeader;
    ushort Characteristics;
};

struct _IMAGE_DATA_DIRECTORY {
    ulong VirtualAddress;
    ulong Size;
};

struct _IMAGE_OPTIONAL_HEADER {
    ushort Magic;
    uchar MajorLinkerVersion;
    uchar MinorLinkerVersion;
    ulong SizeOfCode;
    ulong SizeOfInitializedData;
    ulong SizeOfUninitializedData;
    ulong AddressOfEntryPoint;
    ulong BaseOfCode;
    ulong BaseOfData;
    ulong ImageBase;
    ulong SectionAlignment;
    ulong FileAlignment;
    ushort MajorOperatingSystemVersion;
    ushort MinorOperatingSystemVersion;
    ushort MajorImageVersion;
    ushort MinorImageVersion;
    ushort MajorSubsystemVersion;
    ushort MinorSubsystemVersion;
    ulong Win32VersionValue;
    ulong SizeOfImage;
    ulong SizeOfHeaders;
    ulong CheckSum;
    ushort Subsystem;
    ushort DllCharacteristics;
    ulong SizeOfStackReserve;
    ulong SizeOfStackCommit;
    ulong SizeOfHeapReserve;
    ulong SizeOfHeapCommit;
    ulong LoaderFlags;
    ulong NumberOfRvaAndSizes;
    struct _IMAGE_DATA_DIRECTORY DataDirectory[16];
};

struct _IMAGE_NT_HEADERS {
    ulong Signature;
    struct _IMAGE_FILE_HEADER FileHeader;
    struct _IMAGE_OPTIONAL_HEADER OptionalHeader;
};

typedef struct _EXCEPTION_REGISTRATION_RECORD *PEXCEPTION_REGISTRATION_RECORD;

typedef struct _RS2_IMAGE_LOAD_CONFIG_DIRECTORY32 RS2_IMAGE_LOAD_CONFIG_DIRECTORY32;

typedef int *LPBOOL;


// WARNING! conflicting data type names: /ois.pdb/LPSTR - /winnt.h/LPSTR

typedef struct _s__ThrowInfo _s__ThrowInfo, *P_s__ThrowInfo;

struct _s__ThrowInfo {
    uint attributes;
    void *pmfnUnwind;
    void *pForwardCompat;
    struct _s__CatchableTypeArray *pCatchableTypeArray;
};


// WARNING! conflicting data type names: /ois.pdb/_EXCEPTION_RECORD - /excpt.h/_EXCEPTION_RECORD

typedef enum wrapEncodedKERNEL32Functions {
    eFlsAlloc=0,
    eFlsFree=1,
    eFlsGetValue=2,
    eFlsSetValue=3,
    eInitializeCriticalSectionEx=4,
    eInitOnceExecuteOnce=5,
    eCreateEventExW=6,
    eCreateSemaphoreW=7,
    eCreateSemaphoreExW=8,
    eCreateThreadpoolTimer=9,
    eSetThreadpoolTimer=10,
    eWaitForThreadpoolTimerCallbacks=11,
    eCloseThreadpoolTimer=12,
    eCreateThreadpoolWait=13,
    eSetThreadpoolWait=14,
    eCloseThreadpoolWait=15,
    eFlushProcessWriteBuffers=16,
    eFreeLibraryWhenCallbackReturns=17,
    eGetCurrentProcessorNumber=18,
    eCreateSymbolicLinkW=19,
    eGetCurrentPackageId=20,
    eGetTickCount64=21,
    eGetFileInformationByHandleEx=22,
    eSetFileInformationByHandle=23,
    eGetSystemTimePreciseAsFileTime=24,
    eInitializeConditionVariable=25,
    eWakeConditionVariable=26,
    eWakeAllConditionVariable=27,
    eSleepConditionVariableCS=28,
    eInitializeSRWLock=29,
    eAcquireSRWLockExclusive=30,
    eTryAcquireSRWLockExclusive=31,
    eReleaseSRWLockExclusive=32,
    eSleepConditionVariableSRW=33,
    eCreateThreadpoolWork=34,
    eSubmitThreadpoolWork=35,
    eCloseThreadpoolWork=36,
    eCompareStringEx=37,
    eGetLocaleInfoEx=38,
    eLCMapStringEx=39,
    eMaxKernel32Function=40
} wrapEncodedKERNEL32Functions;

typedef enum _crt_argv_mode {
    _crt_argv_no_arguments=0,
    _crt_argv_unexpanded_arguments=1,
    _crt_argv_expanded_arguments=2
} _crt_argv_mode;

typedef struct _s__RTTIBaseClassArray _s__RTTIBaseClassArray, *P_s__RTTIBaseClassArray;

struct _s__RTTIBaseClassArray {
    struct _s__RTTIBaseClassDescriptor *arrayOfBaseClassDescriptors[0];
};

typedef struct _TP_POOL *PTP_POOL;

typedef struct type_info type_info, *Ptype_info;

typedef struct __std_type_info_data __std_type_info_data, *P__std_type_info_data;

struct __std_type_info_data {
    char *_UndecoratedName;
    char _DecoratedName[1];
};

struct type_info {
    int _padding_;
    struct __std_type_info_data _Data;
};

typedef struct __scrt_file_policy __scrt_file_policy, *P__scrt_file_policy;

struct __scrt_file_policy {
    undefined field0_0x0;
};

typedef struct __vcrt_va_list_is_reference<__crt_locale_pointers*const> __vcrt_va_list_is_reference<__crt_locale_pointers*const>, *P__vcrt_va_list_is_reference<__crt_locale_pointers*const>;

struct __vcrt_va_list_is_reference<__crt_locale_pointers*const> {
    undefined field0_0x0;
};

typedef struct _EVENT_DESCRIPTOR _EVENT_DESCRIPTOR, *P_EVENT_DESCRIPTOR;

typedef struct _EVENT_DESCRIPTOR EVENT_DESCRIPTOR;

struct _EVENT_DESCRIPTOR {
    ushort Id;
    uchar Version;
    uchar Channel;
    uchar Level;
    uchar Opcode;
    ushort Task;
    __uint64 Keyword;
};

typedef struct in6_addr in6_addr, *Pin6_addr;

struct in6_addr {
};

typedef struct _IMAGE_NT_HEADERS *PIMAGE_NT_HEADERS;

typedef struct _RTL_CONDITION_VARIABLE *PCONDITION_VARIABLE;

typedef uint rsize_t;

typedef void *_beginthreadex_proc_type;

typedef struct _TP_CLEANUP_GROUP *PTP_CLEANUP_GROUP;

typedef enum <unnamed-enum-DISPLAYCONFIG_SCANLINE_ORDERING_UNSPECIFIED> {
    DISPLAYCONFIG_SCANLINE_ORDERING_FORCE_UINT32=-1,
    DISPLAYCONFIG_SCANLINE_ORDERING_UNSPECIFIED=0,
    DISPLAYCONFIG_SCANLINE_ORDERING_PROGRESSIVE=1,
    DISPLAYCONFIG_SCANLINE_ORDERING_INTERLACED=2,
    DISPLAYCONFIG_SCANLINE_ORDERING_INTERLACED_UPPERFIELDFIRST=2,
    DISPLAYCONFIG_SCANLINE_ORDERING_INTERLACED_LOWERFIELDFIRST=3
} <unnamed-enum-DISPLAYCONFIG_SCANLINE_ORDERING_UNSPECIFIED>;

typedef struct _EVENT_DATA_DESCRIPTOR *PEVENT_DATA_DESCRIPTOR;


// WARNING! conflicting data type names: /ois.pdb/_RTL_CRITICAL_SECTION - /winnt.h/_RTL_CRITICAL_SECTION

typedef struct _TP_CALLBACK_ENVIRON_V3 _TP_CALLBACK_ENVIRON_V3, *P_TP_CALLBACK_ENVIRON_V3;

typedef struct _TP_CALLBACK_ENVIRON_V3 TP_CALLBACK_ENVIRON_V3;

typedef struct <anonymous-tag> <anonymous-tag>, *P<anonymous-tag>;

typedef enum _TP_CALLBACK_PRIORITY {
    TP_CALLBACK_PRIORITY_HIGH=0,
    TP_CALLBACK_PRIORITY_NORMAL=1,
    TP_CALLBACK_PRIORITY_LOW=2,
    TP_CALLBACK_PRIORITY_COUNT=3,
    TP_CALLBACK_PRIORITY_INVALID=3
} _TP_CALLBACK_PRIORITY;

struct <anonymous-tag> {
    ulong LongFunction:1;
    ulong Persistent:1;
    ulong Private:30;
};

struct _TP_CALLBACK_ENVIRON_V3 {
    ulong Version;
    struct _TP_POOL *Pool;
    struct _TP_CLEANUP_GROUP *CleanupGroup;
    void *CleanupGroupCancelCallback;
    void *RaceDll;
    struct _ACTIVATION_CONTEXT *ActivationContext;
    void *FinalizationCallback;
    struct <anonymous-tag> u;
    enum _TP_CALLBACK_PRIORITY CallbackPriority;
    ulong Size;
};

typedef struct __scrt_winmain_policy __scrt_winmain_policy, *P__scrt_winmain_policy;

struct __scrt_winmain_policy {
    undefined field0_0x0;
};

typedef struct _INTERFACE_INFO _INTERFACE_INFO, *P_INTERFACE_INFO;

typedef union sockaddr_gen sockaddr_gen, *Psockaddr_gen;

typedef struct sockaddr sockaddr, *Psockaddr;

typedef struct sockaddr_in6_old sockaddr_in6_old, *Psockaddr_in6_old;

struct sockaddr_in6_old {
    short sin6_family;
    ushort sin6_port;
    ulong sin6_flowinfo;
    struct in6_addr sin6_addr;
    undefined field4_0x9;
    undefined field5_0xa;
    undefined field6_0xb;
    undefined field7_0xc;
    undefined field8_0xd;
    undefined field9_0xe;
    undefined field10_0xf;
    undefined field11_0x10;
    undefined field12_0x11;
    undefined field13_0x12;
    undefined field14_0x13;
    undefined field15_0x14;
    undefined field16_0x15;
    undefined field17_0x16;
    undefined field18_0x17;
};

struct sockaddr {
};

union sockaddr_gen {
    struct sockaddr Address;
    struct sockaddr_in AddressIn;
    struct sockaddr_in6_old AddressIn6;
};

struct _INTERFACE_INFO {
    ulong iiFlags;
    union sockaddr_gen iiAddress;
    union sockaddr_gen iiBroadcastAddress;
    union sockaddr_gen iiNetmask;
};

typedef bool __crt_bool;

typedef struct __vcrt_assert_va_start_is_not_reference<wchar_tconst*const> __vcrt_assert_va_start_is_not_reference<wchar_tconst*const>, *P__vcrt_assert_va_start_is_not_reference<wchar_tconst*const>;

struct __vcrt_assert_va_start_is_not_reference<wchar_tconst*const> {
    undefined field0_0x0;
};

typedef struct _EVENT_DESCRIPTOR *PCEVENT_DESCRIPTOR;

typedef struct RakStringCleanup RakStringCleanup, *PRakStringCleanup;

struct RakStringCleanup {
    undefined field0_0x0;
};

typedef wchar *PUWSTR;

typedef void *destructor_type;

typedef struct __crt_multibyte_data __crt_multibyte_data, *P__crt_multibyte_data;

struct __crt_multibyte_data {
};

typedef void *__scrt_dllmain_type;

typedef struct $_s__CatchableTypeArray$_extraBytes_8 $_s__CatchableTypeArray$_extraBytes_8, *P$_s__CatchableTypeArray$_extraBytes_8;

struct $_s__CatchableTypeArray$_extraBytes_8 {
    int nCatchableTypes;
    struct _s__CatchableType *arrayOfCatchableTypes[2];
};

typedef __uint64 DWORD64;

typedef struct __vcrt_assert_va_start_is_not_reference<__crt_locale_pointers*> __vcrt_assert_va_start_is_not_reference<__crt_locale_pointers*>, *P__vcrt_assert_va_start_is_not_reference<__crt_locale_pointers*>;

struct __vcrt_assert_va_start_is_not_reference<__crt_locale_pointers*> {
    undefined field0_0x0;
};

typedef enum _TP_CALLBACK_PRIORITY TP_CALLBACK_PRIORITY;


// WARNING! conflicting data type names: /ois.pdb/FILETIME - /WinDef.h/FILETIME

typedef void *PTP_CLEANUP_GROUP_CANCEL_CALLBACK;

typedef struct _IMAGE_TLS_DIRECTORY32 _IMAGE_TLS_DIRECTORY32, *P_IMAGE_TLS_DIRECTORY32;

typedef struct _IMAGE_TLS_DIRECTORY32 IMAGE_TLS_DIRECTORY32;

typedef union _IMAGE_TLS_DIRECTORY32_u_20 _IMAGE_TLS_DIRECTORY32_u_20, *P_IMAGE_TLS_DIRECTORY32_u_20;

typedef struct _IMAGE_TLS_DIRECTORY32_u_20_s_1 _IMAGE_TLS_DIRECTORY32_u_20_s_1, *P_IMAGE_TLS_DIRECTORY32_u_20_s_1;

struct _IMAGE_TLS_DIRECTORY32_u_20_s_1 {
    ulong Reserved0:20;
    ulong Alignment:4;
    ulong Reserved1:8;
};

union _IMAGE_TLS_DIRECTORY32_u_20 {
    ulong Characteristics;
    struct _IMAGE_TLS_DIRECTORY32_u_20_s_1 _s_1;
};

struct _IMAGE_TLS_DIRECTORY32 {
    ulong StartAddressOfRawData;
    ulong EndAddressOfRawData;
    ulong AddressOfIndex;
    ulong AddressOfCallBacks;
    ulong SizeOfZeroFill;
    union _IMAGE_TLS_DIRECTORY32_u_20 field5_0x14;
};

typedef struct __vcrt_va_list_is_reference<wchar_tconst*> __vcrt_va_list_is_reference<wchar_tconst*>, *P__vcrt_va_list_is_reference<wchar_tconst*>;

struct __vcrt_va_list_is_reference<wchar_tconst*> {
    undefined field0_0x0;
};

typedef struct _iobuf _iobuf, *P_iobuf;

struct _iobuf {
    void *_Placeholder;
};

typedef struct timeval timeval, *Ptimeval;

struct timeval {
    long tv_sec;
    long tv_usec;
};

typedef struct __type_info_node __type_info_node, *P__type_info_node;


// WARNING! conflicting data type names: /ois.pdb/_SLIST_HEADER - /winnt.h/_SLIST_HEADER

struct __type_info_node {
    union _SLIST_HEADER _Header;
};

typedef char *va_list;

typedef struct _IMAGE_SECTION_HEADER _IMAGE_SECTION_HEADER, *P_IMAGE_SECTION_HEADER;

typedef struct _IMAGE_SECTION_HEADER *PIMAGE_SECTION_HEADER;

typedef union <unnamed-type-Misc> <unnamed-type-Misc>, *P<unnamed-type-Misc>;

union <unnamed-type-Misc> {
};

struct _IMAGE_SECTION_HEADER {
    uchar Name[8];
    union <unnamed-type-Misc> Misc;
    undefined field2_0x9;
    undefined field3_0xa;
    undefined field4_0xb;
    ulong VirtualAddress;
    ulong SizeOfRawData;
    ulong PointerToRawData;
    ulong PointerToRelocations;
    ulong PointerToLinenumbers;
    ushort NumberOfRelocations;
    ushort NumberOfLinenumbers;
    ulong Characteristics;
};

typedef struct _ldiv_t _ldiv_t, *P_ldiv_t;

typedef struct _ldiv_t ldiv_t;

struct _ldiv_t {
    long quot;
    long rem;
};

typedef void *PTP_SIMPLE_CALLBACK;

typedef int socklen_t;


// WARNING! conflicting data type names: /ois.pdb/GUID - /GUID

typedef __int64 *PLONG64;

typedef uchar BOOLEAN;


// WARNING! conflicting data type names: /ois.pdb/LPCWSTR - /winnt.h/LPCWSTR

typedef struct __scrt_nofile_policy __scrt_nofile_policy, *P__scrt_nofile_policy;

struct __scrt_nofile_policy {
    undefined field0_0x0;
};

typedef struct __scrt_wide_environment_policy __scrt_wide_environment_policy, *P__scrt_wide_environment_policy;

struct __scrt_wide_environment_policy {
    undefined field0_0x0;
};


// WARNING! conflicting data type names: /ois.pdb/_FLOATING_SAVE_AREA - /winnt.h/_FLOATING_SAVE_AREA

typedef struct _NT_TIB _NT_TIB, *P_NT_TIB;

typedef union _NT_TIB_u_16 _NT_TIB_u_16, *P_NT_TIB_u_16;

union _NT_TIB_u_16 {
    void *FiberData;
    ulong Version;
};

struct _NT_TIB {
    struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList;
    void *StackBase;
    void *StackLimit;
    void *SubSystemTib;
    union _NT_TIB_u_16 field4_0x10;
    void *ArbitraryUserPointer;
    struct _NT_TIB *Self;
};

typedef struct _TP_CALLBACK_INSTANCE *PTP_CALLBACK_INSTANCE;

typedef struct DatagramHeaderFormat DatagramHeaderFormat, *PDatagramHeaderFormat;

typedef struct uint24_t uint24_t, *Puint24_t;

struct uint24_t {
    uint val;
};

struct DatagramHeaderFormat {
    struct uint24_t datagramNumber;
    float AS;
    bool isACK;
    bool isNAK;
    bool isPacketPair;
    bool hasBAndAS;
    bool isContinuousSend;
    bool needsBAndAs;
    bool isValid;
};


// WARNING! conflicting data type names: /ois.pdb/LPBYTE - /WinDef.h/LPBYTE


// WARNING! conflicting data type names: /ois.pdb/_RTL_CRITICAL_SECTION_DEBUG - /winnt.h/_RTL_CRITICAL_SECTION_DEBUG

typedef struct _IMAGE_TLS_DIRECTORY32 IMAGE_TLS_DIRECTORY;


// WARNING! conflicting data type names: /ois.pdb/LPTOP_LEVEL_EXCEPTION_FILTER - /winbase.h/LPTOP_LEVEL_EXCEPTION_FILTER


// WARNING! conflicting data type names: /ois.pdb/WCHAR - /winnt.h/WCHAR

typedef long HRESULT;

typedef union FT FT, *PFT;


// WARNING! conflicting data type names: /ois.pdb/_FILETIME - /WinDef.h/_FILETIME

union FT {
    __uint64 ft_scalar;
    struct _FILETIME ft_struct;
};

typedef enum JOB_OBJECT_IO_RATE_CONTROL_FLAGS {
    JOB_OBJECT_IO_RATE_CONTROL_ENABLE=1,
    JOB_OBJECT_IO_RATE_CONTROL_STANDALONE_VOLUME=2,
    JOB_OBJECT_IO_RATE_CONTROL_VALID_FLAGS=3
} JOB_OBJECT_IO_RATE_CONTROL_FLAGS;


// WARNING! conflicting data type names: /ois.pdb/LARGE_INTEGER - /winnt.h/LARGE_INTEGER


// WARNING! conflicting data type names: /ois.pdb/wchar_t - /wchar_t


// WARNING! conflicting data type names: /ois.pdb/IMAGE_DOS_HEADER - /DOS/IMAGE_DOS_HEADER


// WARNING! conflicting data type names: /ois.pdb/PCONTEXT - /winnt.h/PCONTEXT

typedef struct WSAStartupSingleton WSAStartupSingleton, *PWSAStartupSingleton;

struct WSAStartupSingleton {
    undefined field0_0x0;
};

typedef void *PEXCEPTION_ROUTINE;

typedef struct _IMAGE_NT_HEADERS *PIMAGE_NT_HEADERS32;

typedef void *terminate_handler;

typedef struct _IMAGE_DOS_HEADER _IMAGE_DOS_HEADER, *P_IMAGE_DOS_HEADER;

struct _IMAGE_DOS_HEADER {
    ushort e_magic;
    ushort e_cblp;
    ushort e_cp;
    ushort e_crlc;
    ushort e_cparhdr;
    ushort e_minalloc;
    ushort e_maxalloc;
    ushort e_ss;
    ushort e_sp;
    ushort e_csum;
    ushort e_ip;
    ushort e_cs;
    ushort e_lfarlc;
    ushort e_ovno;
    ushort e_res[4];
    ushort e_oemid;
    ushort e_oeminfo;
    ushort e_res2[10];
    long e_lfanew;
};

typedef short SHORT;

typedef struct _onexit_table_t _onexit_table_t, *P_onexit_table_t;

struct _onexit_table_t {
    void *_first;
    void *_last;
    void *_end;
};

typedef enum PacketPriority {
    IMMEDIATE_PRIORITY=0,
    HIGH_PRIORITY=1,
    MEDIUM_PRIORITY=2,
    LOW_PRIORITY=3,
    NUMBER_OF_PRIORITIES=4
} PacketPriority;

typedef struct StrAndBool StrAndBool, *PStrAndBool;

struct StrAndBool {
    char *str;
    bool b;
};

typedef struct _EXCEPTION_REGISTRATION_RECORD EXCEPTION_REGISTRATION_RECORD;

typedef void *PIMAGE_TLS_CALLBACK;


// WARNING! conflicting data type names: /ois.pdb/EXCEPTION_RECORD - /winnt.h/EXCEPTION_RECORD


// WARNING! conflicting data type names: /ois.pdb/PTOP_LEVEL_EXCEPTION_FILTER - /winbase.h/PTOP_LEVEL_EXCEPTION_FILTER

typedef struct __crt_locale_pointers __crt_locale_pointers, *P__crt_locale_pointers;

struct __crt_locale_pointers {
    struct __crt_locale_data *locinfo;
    struct __crt_multibyte_data *mbcinfo;
};

typedef wchar *PCUWSTR;

typedef struct __vcrt_va_list_is_reference<wchar_tconst*const> __vcrt_va_list_is_reference<wchar_tconst*const>, *P__vcrt_va_list_is_reference<wchar_tconst*const>;

struct __vcrt_va_list_is_reference<wchar_tconst*const> {
    undefined field0_0x0;
};

typedef union __m128 __m128, *P__m128;

union __m128 {
    float m128_f32[4];
    __uint64 m128_u64[2];
    char m128_i8[16];
    short m128_i16[8];
    int m128_i32[4];
    __int64 m128_i64[2];
    uchar m128_u8[16];
    ushort m128_u16[8];
    uint m128_u32[4];
};


// WARNING! conflicting data type names: /ois.pdb/PEXCEPTION_RECORD - /winnt.h/PEXCEPTION_RECORD

typedef void *_PMFN;

typedef enum JOB_OBJECT_NET_RATE_CONTROL_FLAGS {
    JOB_OBJECT_NET_RATE_CONTROL_ENABLE=1,
    JOB_OBJECT_NET_RATE_CONTROL_MAX_BANDWIDTH=2,
    JOB_OBJECT_NET_RATE_CONTROL_DSCP_TAG=4,
    JOB_OBJECT_NET_RATE_CONTROL_VALID_FLAGS=7
} JOB_OBJECT_NET_RATE_CONTROL_FLAGS;

typedef enum _RTC_ErrorNumber {
    _RTC_CHKSTK=0,
    _RTC_CVRT_LOSS_INFO=1,
    _RTC_CORRUPT_STACK=2,
    _RTC_UNINIT_LOCAL_USE=3,
    _RTC_CORRUPTED_ALLOCA=4,
    _RTC_ILLEGAL=5
} _RTC_ErrorNumber;

typedef struct EHExceptionRecord EHExceptionRecord, *PEHExceptionRecord;

typedef struct EHParameters EHParameters, *PEHParameters;

struct EHParameters {
    ulong magicNumber;
    void *pExceptionObject;
    struct _s_ThrowInfo *pThrowInfo;
};

struct EHExceptionRecord {
    ulong ExceptionCode;
    ulong ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    void *ExceptionAddress;
    ulong NumberParameters;
    struct EHParameters params;
};

typedef enum DISPLAYCONFIG_SCANLINE_ORDERING {
    DISPLAYCONFIG_SCANLINE_ORDERING_FORCE_UINT32=-1,
    DISPLAYCONFIG_SCANLINE_ORDERING_UNSPECIFIED=0,
    DISPLAYCONFIG_SCANLINE_ORDERING_PROGRESSIVE=1,
    DISPLAYCONFIG_SCANLINE_ORDERING_INTERLACED=2,
    DISPLAYCONFIG_SCANLINE_ORDERING_INTERLACED_UPPERFIELDFIRST=2,
    DISPLAYCONFIG_SCANLINE_ORDERING_INTERLACED_LOWERFIELDFIRST=3
} DISPLAYCONFIG_SCANLINE_ORDERING;

typedef ulong u_long;

typedef struct _SINGLE_LIST_ENTRY SLIST_ENTRY;

typedef struct _NT_TIB *PNT_TIB;


// WARNING! conflicting data type names: /ois.pdb/_s__RTTIClassHierarchyDescriptor - /_s__RTTIClassHierarchyDescriptor

typedef struct _TEB _TEB, *P_TEB;

struct _TEB {
};

typedef char *PCHAR;


// WARNING! conflicting data type names: /ois.pdb/_s__RTTICompleteObjectLocator - /_s__RTTICompleteObjectLocator

typedef void *HLOCAL;

typedef struct _EXCEPTION_POINTERS *PEXCEPTION_POINTERS;

typedef struct __scrt_no_environment_policy __scrt_no_environment_policy, *P__scrt_no_environment_policy;

struct __scrt_no_environment_policy {
    undefined field0_0x0;
};

typedef short *PSHORT;

typedef struct hostent hostent, *Phostent;

struct hostent {
    char *h_name;
    char **h_aliases;
    short h_addrtype;
    short h_length;
    char **h_addr_list;
};


// WARNING! conflicting data type names: /ois.pdb/_exception - /math.h/_exception

typedef struct HuffmanEncodingTreeNode HuffmanEncodingTreeNode, *PHuffmanEncodingTreeNode;

struct HuffmanEncodingTreeNode {
    uchar value;
    uint weight;
    struct HuffmanEncodingTreeNode *left;
    struct HuffmanEncodingTreeNode *right;
    struct HuffmanEncodingTreeNode *parent;
};


// WARNING! conflicting data type names: /ois.pdb/LPSTARTUPINFOW - /winbase.h/LPSTARTUPINFOW

typedef enum DefaultMessageIDTypes {
    ID_CONNECTED_PING=0,
    ID_UNCONNECTED_PING=1,
    ID_UNCONNECTED_PING_OPEN_CONNECTIONS=2,
    ID_CONNECTED_PONG=3,
    ID_DETECT_LOST_CONNECTIONS=4,
    ID_OPEN_CONNECTION_REQUEST_1=5,
    ID_OPEN_CONNECTION_REPLY_1=6,
    ID_OPEN_CONNECTION_REQUEST_2=7,
    ID_OPEN_CONNECTION_REPLY_2=8,
    ID_CONNECTION_REQUEST=9,
    ID_REMOTE_SYSTEM_REQUIRES_PUBLIC_KEY=10,
    ID_OUR_SYSTEM_REQUIRES_SECURITY=11,
    ID_PUBLIC_KEY_MISMATCH=12,
    ID_OUT_OF_BAND_INTERNAL=13,
    ID_SND_RECEIPT_ACKED=14,
    ID_SND_RECEIPT_LOSS=15,
    ID_CONNECTION_REQUEST_ACCEPTED=16,
    ID_CONNECTION_ATTEMPT_FAILED=17,
    ID_ALREADY_CONNECTED=18,
    ID_NEW_INCOMING_CONNECTION=19,
    ID_NO_FREE_INCOMING_CONNECTIONS=20,
    ID_DISCONNECTION_NOTIFICATION=21,
    ID_CONNECTION_LOST=22,
    ID_CONNECTION_BANNED=23,
    ID_INVALID_PASSWORD=24,
    ID_INCOMPATIBLE_PROTOCOL_VERSION=25,
    ID_IP_RECENTLY_CONNECTED=26,
    ID_TIMESTAMP=27,
    ID_UNCONNECTED_PONG=28,
    ID_ADVERTISE_SYSTEM=29,
    ID_DOWNLOAD_PROGRESS=30,
    ID_REMOTE_DISCONNECTION_NOTIFICATION=31,
    ID_REMOTE_CONNECTION_LOST=32,
    ID_REMOTE_NEW_INCOMING_CONNECTION=33,
    ID_FILE_LIST_TRANSFER_HEADER=34,
    ID_FILE_LIST_TRANSFER_FILE=35,
    ID_FILE_LIST_REFERENCE_PUSH_ACK=36,
    ID_DDT_DOWNLOAD_REQUEST=37,
    ID_TRANSPORT_STRING=38,
    ID_REPLICA_MANAGER_CONSTRUCTION=39,
    ID_REPLICA_MANAGER_SCOPE_CHANGE=40,
    ID_REPLICA_MANAGER_SERIALIZE=41,
    ID_REPLICA_MANAGER_DOWNLOAD_STARTED=42,
    ID_REPLICA_MANAGER_DOWNLOAD_COMPLETE=43,
    ID_RAKVOICE_OPEN_CHANNEL_REQUEST=44,
    ID_RAKVOICE_OPEN_CHANNEL_REPLY=45,
    ID_RAKVOICE_CLOSE_CHANNEL=46,
    ID_RAKVOICE_DATA=47,
    ID_AUTOPATCHER_GET_CHANGELIST_SINCE_DATE=48,
    ID_AUTOPATCHER_CREATION_LIST=49,
    ID_AUTOPATCHER_DELETION_LIST=50,
    ID_AUTOPATCHER_GET_PATCH=51,
    ID_AUTOPATCHER_PATCH_LIST=52,
    ID_AUTOPATCHER_REPOSITORY_FATAL_ERROR=53,
    ID_AUTOPATCHER_CANNOT_DOWNLOAD_ORIGINAL_UNMODIFIED_FILES=54,
    ID_AUTOPATCHER_FINISHED_INTERNAL=55,
    ID_AUTOPATCHER_FINISHED=56,
    ID_AUTOPATCHER_RESTART_APPLICATION=57,
    ID_NAT_PUNCHTHROUGH_REQUEST=58,
    ID_NAT_CONNECT_AT_TIME=59,
    ID_NAT_GET_MOST_RECENT_PORT=60,
    ID_NAT_CLIENT_READY=61,
    ID_NAT_TARGET_NOT_CONNECTED=62,
    ID_NAT_TARGET_UNRESPONSIVE=63,
    ID_NAT_CONNECTION_TO_TARGET_LOST=64,
    ID_NAT_ALREADY_IN_PROGRESS=65,
    ID_NAT_PUNCHTHROUGH_FAILED=66,
    ID_NAT_PUNCHTHROUGH_SUCCEEDED=67,
    ID_READY_EVENT_SET=68,
    ID_READY_EVENT_UNSET=69,
    ID_READY_EVENT_ALL_SET=70,
    ID_READY_EVENT_QUERY=71,
    ID_LOBBY_GENERAL=72,
    ID_RPC_REMOTE_ERROR=73,
    ID_RPC_PLUGIN=74,
    ID_FILE_LIST_REFERENCE_PUSH=75,
    ID_READY_EVENT_FORCE_ALL_SET=76,
    ID_ROOMS_EXECUTE_FUNC=77,
    ID_ROOMS_LOGON_STATUS=78,
    ID_ROOMS_HANDLE_CHANGE=79,
    ID_LOBBY2_SEND_MESSAGE=80,
    ID_LOBBY2_SERVER_ERROR=81,
    ID_FCM2_NEW_HOST=82,
    ID_FCM2_REQUEST_FCMGUID=83,
    ID_FCM2_RESPOND_CONNECTION_COUNT=84,
    ID_FCM2_INFORM_FCMGUID=85,
    ID_FCM2_UPDATE_MIN_TOTAL_CONNECTION_COUNT=86,
    ID_FCM2_VERIFIED_JOIN_START=87,
    ID_FCM2_VERIFIED_JOIN_CAPABLE=88,
    ID_FCM2_VERIFIED_JOIN_FAILED=89,
    ID_FCM2_VERIFIED_JOIN_ACCEPTED=90,
    ID_FCM2_VERIFIED_JOIN_REJECTED=91,
    ID_UDP_PROXY_GENERAL=92,
    ID_SQLite3_EXEC=93,
    ID_SQLite3_UNKNOWN_DB=94,
    ID_SQLLITE_LOGGER=95,
    ID_NAT_TYPE_DETECTION_REQUEST=96,
    ID_NAT_TYPE_DETECTION_RESULT=97,
    ID_ROUTER_2_INTERNAL=98,
    ID_ROUTER_2_FORWARDING_NO_PATH=99,
    ID_ROUTER_2_FORWARDING_ESTABLISHED=100,
    ID_ROUTER_2_REROUTED=101,
    ID_TEAM_BALANCER_INTERNAL=102,
    ID_TEAM_BALANCER_REQUESTED_TEAM_FULL=103,
    ID_TEAM_BALANCER_REQUESTED_TEAM_LOCKED=104,
    ID_TEAM_BALANCER_TEAM_REQUESTED_CANCELLED=105,
    ID_TEAM_BALANCER_TEAM_ASSIGNED=106,
    ID_LIGHTSPEED_INTEGRATION=107,
    ID_XBOX_LOBBY=108,
    ID_TWO_WAY_AUTHENTICATION_INCOMING_CHALLENGE_SUCCESS=109,
    ID_TWO_WAY_AUTHENTICATION_OUTGOING_CHALLENGE_SUCCESS=110,
    ID_TWO_WAY_AUTHENTICATION_INCOMING_CHALLENGE_FAILURE=111,
    ID_TWO_WAY_AUTHENTICATION_OUTGOING_CHALLENGE_FAILURE=112,
    ID_TWO_WAY_AUTHENTICATION_OUTGOING_CHALLENGE_TIMEOUT=113,
    ID_TWO_WAY_AUTHENTICATION_NEGOTIATION=114,
    ID_CLOUD_POST_REQUEST=115,
    ID_CLOUD_RELEASE_REQUEST=116,
    ID_CLOUD_GET_REQUEST=117,
    ID_CLOUD_GET_RESPONSE=118,
    ID_CLOUD_UNSUBSCRIBE_REQUEST=119,
    ID_CLOUD_SERVER_TO_SERVER_COMMAND=120,
    ID_CLOUD_SUBSCRIPTION_NOTIFICATION=121,
    ID_LIB_VOICE=122,
    ID_RELAY_PLUGIN=123,
    ID_NAT_REQUEST_BOUND_ADDRESSES=124,
    ID_NAT_RESPOND_BOUND_ADDRESSES=125,
    ID_FCM2_UPDATE_USER_CONTEXT=126,
    ID_RESERVED_3=127,
    ID_RESERVED_4=128,
    ID_RESERVED_5=129,
    ID_RESERVED_6=130,
    ID_RESERVED_7=131,
    ID_RESERVED_8=132,
    ID_RESERVED_9=133,
    ID_USER_PACKET_ENUM=134
} DefaultMessageIDTypes;

typedef struct _s__RTTIBaseClassDescriptor __RTTIBaseClassDescriptor;

typedef void *_PVFV;

typedef uint __UDPSOCKET__;

typedef struct _TP_CALLBACK_ENVIRON_V3 *PTP_CALLBACK_ENVIRON;

typedef struct _iobuf FILE;

typedef struct _RTL_CONDITION_VARIABLE RTL_CONDITION_VARIABLE;

typedef struct $_TypeDescriptor$_extraBytes_19 $_TypeDescriptor$_extraBytes_19, *P$_TypeDescriptor$_extraBytes_19;

struct $_TypeDescriptor$_extraBytes_19 {
    void *pVFTable;
    void *spare;
    char name[19];
};

typedef uchar StringTableType;

typedef struct _s__CatchableType _CatchableType;

typedef struct _EXCEPTION_POINTERS *LPEXCEPTION_POINTERS;

typedef wchar *LPCWCH;

typedef union __m64 __m64, *P__m64;

union __m64 {
    __uint64 m64_u64;
    float m64_f32[2];
    char m64_i8[8];
    short m64_i16[4];
    int m64_i32[2];
    __int64 m64_i64;
    uchar m64_u8[8];
    ushort m64_u16[4];
    uint m64_u32[2];
};

typedef struct __std_exception_data __std_exception_data, *P__std_exception_data;

struct __std_exception_data {
    char *_What;
    bool _DoFree;
};

typedef struct __vcrt_va_list_is_reference<__crt_locale_pointers*> __vcrt_va_list_is_reference<__crt_locale_pointers*>, *P__vcrt_va_list_is_reference<__crt_locale_pointers*>;

struct __vcrt_va_list_is_reference<__crt_locale_pointers*> {
    undefined field0_0x0;
};

typedef void *PCOOKIE_CHECK;

typedef struct _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;

typedef uint UINT;

typedef struct _RTL_CRITICAL_SECTION *PCRITICAL_SECTION;

typedef enum __scrt_module_type {
    dll=0,
    exe=1
} __scrt_module_type;


// WARNING! conflicting data type names: /ois.pdb/ULONGLONG - /winnt.h/ULONGLONG

typedef void *_onexit_t;


// WARNING! conflicting data type names: /ois.pdb/_LARGE_INTEGER - /winnt.h/_LARGE_INTEGER

typedef uint size_t;

typedef int errno_t;

typedef enum PacketReliability {
    UNRELIABLE=0,
    UNRELIABLE_SEQUENCED=1,
    RELIABLE=2,
    RELIABLE_ORDERED=3,
    RELIABLE_SEQUENCED=4,
    UNRELIABLE_WITH_ACK_RECEIPT=5,
    RELIABLE_WITH_ACK_RECEIPT=6,
    RELIABLE_ORDERED_WITH_ACK_RECEIPT=7,
    NUMBER_OF_RELIABILITIES=8
} PacketReliability;

typedef struct _s__RTTIBaseClassArray __RTTIBaseClassArray;

typedef struct _NT_TIB NT_TIB;

typedef enum ISA_AVAILABILITY {
    __ISA_AVAILABLE_ARMNT=0,
    __ISA_AVAILABLE_X86=0,
    __ISA_AVAILABLE_NEON=1,
    __ISA_AVAILABLE_SSE2=1,
    __ISA_AVAILABLE_NEON_ARM64=2,
    __ISA_AVAILABLE_SSE42=2,
    __ISA_AVAILABLE_AVX=3,
    __ISA_AVAILABLE_ENFSTRG=4,
    __ISA_AVAILABLE_AVX2=5
} ISA_AVAILABILITY;


// WARNING! conflicting data type names: /ois.pdb/LIST_ENTRY - /winnt.h/LIST_ENTRY

typedef struct WSAData WSADATA;

typedef void *EXCEPTION_ROUTINE;


// WARNING! conflicting data type names: /ois.pdb/LPWSTR - /winnt.h/LPWSTR

typedef long LONG_PTR;

typedef struct __crt_locale_pointers *_locale_t;

typedef void *PMFN;

typedef uint __TCPSOCKET__;

typedef struct _s_CatchableType CatchableType;

typedef struct __scrt_main_policy __scrt_main_policy, *P__scrt_main_policy;

struct __scrt_main_policy {
    undefined field0_0x0;
};

typedef uint uintptr_t;

typedef struct __vcrt_va_list_is_reference<unsignedcharconst*> __vcrt_va_list_is_reference<unsignedcharconst*>, *P__vcrt_va_list_is_reference<unsignedcharconst*>;

struct __vcrt_va_list_is_reference<unsignedcharconst*> {
    undefined field0_0x0;
};

typedef enum __scrt_native_startup_state {
    uninitialized=0,
    initializing=1,
    initialized=2
} __scrt_native_startup_state;

typedef struct __vcrt_assert_va_start_is_not_reference<wchar_tconst*> __vcrt_assert_va_start_is_not_reference<wchar_tconst*>, *P__vcrt_assert_va_start_is_not_reference<wchar_tconst*>;

struct __vcrt_assert_va_start_is_not_reference<wchar_tconst*> {
    undefined field0_0x0;
};

typedef struct _s__RTTIClassHierarchyDescriptor __RTTIClassHierarchyDescriptor;

typedef enum _USER_ACTIVITY_PRESENCE {
    PowerUserPresent=0,
    PowerUserNotPresent=1,
    PowerUserInactive=2,
    PowerUserInvalid=3,
    PowerUserMaximum=3
} _USER_ACTIVITY_PRESENCE;

typedef struct $_s__CatchableTypeArray$_extraBytes_12 $_s__CatchableTypeArray$_extraBytes_12, *P$_s__CatchableTypeArray$_extraBytes_12;

struct $_s__CatchableTypeArray$_extraBytes_12 {
    int nCatchableTypes;
    struct _s__CatchableType *arrayOfCatchableTypes[3];
};

typedef struct _IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY;

typedef char *LPCCH;

typedef struct $_TypeDescriptor$_extraBytes_20 $_TypeDescriptor$_extraBytes_20, *P$_TypeDescriptor$_extraBytes_20;

struct $_TypeDescriptor$_extraBytes_20 {
    void *pVFTable;
    void *spare;
    char name[20];
};

typedef struct __vcrt_assert_va_start_is_not_reference<charconst*const> __vcrt_assert_va_start_is_not_reference<charconst*const>, *P__vcrt_assert_va_start_is_not_reference<charconst*const>;

struct __vcrt_assert_va_start_is_not_reference<charconst*const> {
    undefined field0_0x0;
};

typedef struct __vcrt_assert_va_start_is_not_reference<unsignedcharconst*> __vcrt_assert_va_start_is_not_reference<unsignedcharconst*>, *P__vcrt_assert_va_start_is_not_reference<unsignedcharconst*>;

struct __vcrt_assert_va_start_is_not_reference<unsignedcharconst*> {
    undefined field0_0x0;
};

typedef enum <unnamed-enum-__crt_maximum_pointer_shift> {
    __crt_maximum_pointer_shift=32
} <unnamed-enum-__crt_maximum_pointer_shift>;

typedef struct $_TypeDescriptor$_extraBytes_24 $_TypeDescriptor$_extraBytes_24, *P$_TypeDescriptor$_extraBytes_24;

struct $_TypeDescriptor$_extraBytes_24 {
    void *pVFTable;
    void *spare;
    char name[24];
};

typedef struct _IMAGE_DOS_HEADER *PIMAGE_DOS_HEADER;

typedef struct $_TypeDescriptor$_extraBytes_21 $_TypeDescriptor$_extraBytes_21, *P$_TypeDescriptor$_extraBytes_21;

struct $_TypeDescriptor$_extraBytes_21 {
    void *pVFTable;
    void *spare;
    char name[21];
};

typedef void *constructor_type;

typedef struct $_TypeDescriptor$_extraBytes_27 $_TypeDescriptor$_extraBytes_27, *P$_TypeDescriptor$_extraBytes_27;

struct $_TypeDescriptor$_extraBytes_27 {
    void *pVFTable;
    void *spare;
    char name[27];
};

typedef struct $_TypeDescriptor$_extraBytes_28 $_TypeDescriptor$_extraBytes_28, *P$_TypeDescriptor$_extraBytes_28;

struct $_TypeDescriptor$_extraBytes_28 {
    void *pVFTable;
    void *spare;
    char name[28];
};

typedef void *_tls_callback_type;

typedef struct __scrt_wide_argv_policy __scrt_wide_argv_policy, *P__scrt_wide_argv_policy;

struct __scrt_wide_argv_policy {
    undefined field0_0x0;
};

typedef struct _FILETIME *LPFILETIME;


// WARNING! conflicting data type names: /ois.pdb/PSLIST_HEADER - /winnt.h/PSLIST_HEADER

typedef struct _IMAGE_OPTIONAL_HEADER IMAGE_OPTIONAL_HEADER32;

typedef struct _INTERFACE_INFO INTERFACE_INFO;


// WARNING! conflicting data type names: /ois.pdb/PRTL_CRITICAL_SECTION_DEBUG - /winnt.h/PRTL_CRITICAL_SECTION_DEBUG

typedef struct __vcrt_assert_va_start_is_not_reference<__crt_locale_pointers*const> __vcrt_assert_va_start_is_not_reference<__crt_locale_pointers*const>, *P__vcrt_assert_va_start_is_not_reference<__crt_locale_pointers*const>;

struct __vcrt_assert_va_start_is_not_reference<__crt_locale_pointers*const> {
    undefined field0_0x0;
};

typedef struct _RTL_CRITICAL_SECTION CRITICAL_SECTION;

typedef struct _IMAGE_FILE_HEADER IMAGE_FILE_HEADER;

typedef struct _lldiv_t lldiv_t;

typedef uchar *PBYTE;


// WARNING! conflicting data type names: /ois.pdb/FLOATING_SAVE_AREA - /winnt.h/FLOATING_SAVE_AREA

typedef struct _EVENT_DESCRIPTOR *PEVENT_DESCRIPTOR;

typedef enum _crt_app_type {
    _crt_unknown_app=0,
    _crt_console_app=1,
    _crt_gui_app=2
} _crt_app_type;

typedef struct __scrt_no_argv_policy __scrt_no_argv_policy, *P__scrt_no_argv_policy;

struct __scrt_no_argv_policy {
    undefined field0_0x0;
};

typedef struct __scrt_narrow_environment_policy __scrt_narrow_environment_policy, *P__scrt_narrow_environment_policy;

struct __scrt_narrow_environment_policy {
    undefined field0_0x0;
};

typedef struct __crt_fast_encoded_nullptr_t __crt_fast_encoded_nullptr_t, *P__crt_fast_encoded_nullptr_t;

struct __crt_fast_encoded_nullptr_t {
    undefined field0_0x0;
};


// WARNING! conflicting data type names: /ois.pdb/LONGLONG - /winnt.h/LONGLONG


// WARNING! conflicting data type names: /ois.pdb/LPCRITICAL_SECTION - /winbase.h/LPCRITICAL_SECTION

typedef struct _RTL_CONDITION_VARIABLE CONDITION_VARIABLE;

typedef struct __scrt_enclavemain_policy __scrt_enclavemain_policy, *P__scrt_enclavemain_policy;

struct __scrt_enclavemain_policy {
    undefined field0_0x0;
};

typedef enum <unnamed-enum-__the_value> {
    __the_value=0
} <unnamed-enum-__the_value>;

typedef union <unnamed-type-S_un> <unnamed-type-S_un>, *P<unnamed-type-S_un>;

union <unnamed-type-S_un> {
};

typedef struct exception exception, *Pexception;

struct exception {
    int _padding_;
    struct __std_exception_data _Data;
};

typedef void *nullptr_t;

typedef struct bad_alloc bad_alloc, *Pbad_alloc;

struct bad_alloc {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
};

typedef struct hash<double> hash<double>, *Phash<double>;

struct hash<double> {
    undefined field0_0x0;
};

typedef struct bad_cast bad_cast, *Pbad_cast;

struct bad_cast {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
};

typedef struct nothrow_t nothrow_t, *Pnothrow_t;

struct nothrow_t {
    undefined field0_0x0;
};

typedef struct _Fnv1a_hasher _Fnv1a_hasher, *P_Fnv1a_hasher;

struct _Fnv1a_hasher {
    uint _Val;
};

typedef struct bad_exception bad_exception, *Pbad_exception;

struct bad_exception {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
};

typedef struct hash<float> hash<float>, *Phash<float>;

struct hash<float> {
    undefined field0_0x0;
};

typedef struct bad_typeid bad_typeid, *Pbad_typeid;

struct bad_typeid {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
};

typedef struct hash<longdouble> hash<longdouble>, *Phash<longdouble>;

struct hash<longdouble> {
    undefined field0_0x0;
};

typedef struct exception_ptr exception_ptr, *Pexception_ptr;

struct exception_ptr {
    void *_Data1;
    void *_Data2;
};

typedef struct hash<std::nullptr_t> hash<std::nullptr_t>, *Phash<std::nullptr_t>;

struct hash<std::nullptr_t> {
    undefined field0_0x0;
};

typedef struct __non_rtti_object __non_rtti_object, *P__non_rtti_object;

struct __non_rtti_object {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
};

typedef struct nested_exception nested_exception, *Pnested_exception;

struct nested_exception {
    int _padding_;
    struct exception_ptr _Exc;
};

typedef struct bad_array_new_length bad_array_new_length, *Pbad_array_new_length;

struct bad_array_new_length {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
};

typedef struct _SLIST_HEADER_s_1 _SLIST_HEADER_s_1, *P_SLIST_HEADER_s_1;

struct _SLIST_HEADER_s_1 {
    struct _SINGLE_LIST_ENTRY Next;
    ushort Depth;
    ushort CpuId;
};

typedef union <unnamed-type-u> <unnamed-type-u>, *P<unnamed-type-u>;

union <unnamed-type-u> {
};

typedef struct _LARGE_INTEGER_s_0 _LARGE_INTEGER_s_0, *P_LARGE_INTEGER_s_0;

struct _LARGE_INTEGER_s_0 {
    ulong LowPart;
    long HighPart;
};


// WARNING! conflicting data type names: /ois.pdb/_LARGE_INTEGER/<unnamed-type-u> - /ois.pdb/_TP_CALLBACK_ENVIRON_V3/<unnamed-type-u>

typedef struct SocketLayerOverride SocketLayerOverride, *PSocketLayerOverride;

struct SocketLayerOverride {
};

typedef struct SystemAddress SystemAddress, *PSystemAddress;

typedef union <unnamed-type-address> <unnamed-type-address>, *P<unnamed-type-address>;

union <unnamed-type-address> {
};

struct SystemAddress {
    union <unnamed-type-address> address;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    ushort debugPort;
    ushort systemIndex;
};

typedef struct RNS2EventHandler RNS2EventHandler, *PRNS2EventHandler;

struct RNS2EventHandler {
};

typedef struct PluginInterface2 PluginInterface2, *PPluginInterface2;

struct PluginInterface2 {
};

typedef struct RakPeerInterface RakPeerInterface, *PRakPeerInterface;

struct RakPeerInterface {
};

typedef enum RNS2Type {
    RNS2T_WINDOWS_STORE_8=0,
    RNS2T_PS3=1,
    RNS2T_PS4=2,
    RNS2T_CHROME=3,
    RNS2T_VITA=4,
    RNS2T_XBOX_360=5,
    RNS2T_XBOX_720=6,
    RNS2T_WINDOWS=7,
    RNS2T_LINUX=8
} RNS2Type;

typedef struct RakNetSocket2 RakNetSocket2, *PRakNetSocket2;

struct RakNetSocket2 {
};

typedef struct SocketDescriptor SocketDescriptor, *PSocketDescriptor;

struct SocketDescriptor {
};

typedef struct RNS2_BerkleyBindParameters RNS2_BerkleyBindParameters, *PRNS2_BerkleyBindParameters;

struct RNS2_BerkleyBindParameters {
    ushort port;
    char *hostAddress;
    ushort addressFamily;
    int type;
    int protocol;
    bool nonBlockingSocket;
    int setBroadcast;
    int setIPHdrIncl;
    int doNotFragment;
    int pollingThreadPriority;
    struct RNS2EventHandler *eventHandler;
    ushort remotePortRakNetWasStartedOn_PS3_PS4_PSP2;
};

typedef struct TCPInterface TCPInterface, *PTCPInterface;

typedef struct List<RakNet::PluginInterface2*> List<RakNet::PluginInterface2*>, *PList<RakNet::PluginInterface2*>;

typedef struct LocklessUint32_t LocklessUint32_t, *PLocklessUint32_t;

typedef struct Queue<RakNet::Packet*> Queue<RakNet::Packet*>, *PQueue<RakNet::Packet*>;

typedef struct RemoteClient RemoteClient, *PRemoteClient;

typedef struct ThreadsafeAllocatingQueue<RakNet::Packet> ThreadsafeAllocatingQueue<RakNet::Packet>, *PThreadsafeAllocatingQueue<RakNet::Packet>;

typedef struct ThreadsafeAllocatingQueue<RakNet::SystemAddress> ThreadsafeAllocatingQueue<RakNet::SystemAddress>, *PThreadsafeAllocatingQueue<RakNet::SystemAddress>;

typedef struct ThreadsafeAllocatingQueue<RakNet::RemoteClient*> ThreadsafeAllocatingQueue<RakNet::RemoteClient*>, *PThreadsafeAllocatingQueue<RakNet::RemoteClient*>;

typedef struct SimpleMutex SimpleMutex, *PSimpleMutex;

typedef struct Queue<RakNet::SystemAddress> Queue<RakNet::SystemAddress>, *PQueue<RakNet::SystemAddress>;

typedef struct List<unsignedint> List<unsignedint>, *PList<unsignedint>;

typedef struct Packet Packet, *PPacket;

typedef struct ByteQueue ByteQueue, *PByteQueue;

typedef struct MemoryPool<RakNet::Packet> MemoryPool<RakNet::Packet>, *PMemoryPool<RakNet::Packet>;

typedef struct MemoryPool<RakNet::SystemAddress> MemoryPool<RakNet::SystemAddress>, *PMemoryPool<RakNet::SystemAddress>;

typedef struct Queue<RakNet::SystemAddress*> Queue<RakNet::SystemAddress*>, *PQueue<RakNet::SystemAddress*>;

typedef struct MemoryPool<RakNet::RemoteClient*> MemoryPool<RakNet::RemoteClient*>, *PMemoryPool<RakNet::RemoteClient*>;

typedef struct Queue<RakNet::RemoteClient**> Queue<RakNet::RemoteClient**>, *PQueue<RakNet::RemoteClient**>;

typedef struct Page Page, *PPage;


// WARNING! conflicting data type names: /ois.pdb/DataStructures/MemoryPool<RakNet::SystemAddress>/Page - /ois.pdb/DataStructures/MemoryPool<RakNet::Packet>/Page


// WARNING! conflicting data type names: /ois.pdb/DataStructures/MemoryPool<RakNet::RemoteClient*>/Page - /ois.pdb/DataStructures/MemoryPool<RakNet::Packet>/Page

typedef struct MemoryWithPage MemoryWithPage, *PMemoryWithPage;

struct Packet {
};

struct MemoryPool<RakNet::RemoteClient*> {
    struct Page *availablePages;
    struct Page *unavailablePages;
    int availablePagesSize;
    int unavailablePagesSize;
    int memoryPoolPageSize;
};

struct ByteQueue {
    char *data;
    uint readOffset;
    uint writeOffset;
    uint lengthAllocated;
};

struct Queue<RakNet::Packet*> {
    struct Packet **array;
    uint head;
    uint tail;
    uint allocation_size;
};

struct SimpleMutex {
    struct _RTL_CRITICAL_SECTION criticalSection;
};

struct MemoryPool<RakNet::Packet> {
    struct Page *availablePages;
    struct Page *unavailablePages;
    int availablePagesSize;
    int unavailablePagesSize;
    int memoryPoolPageSize;
};

struct ThreadsafeAllocatingQueue<RakNet::Packet> {
    struct MemoryPool<RakNet::Packet> memoryPool;
    struct SimpleMutex memoryPoolMutex;
    struct Queue<RakNet::Packet*> queue;
    struct SimpleMutex queueMutex;
};

struct List<RakNet::PluginInterface2*> {
};

struct List<unsignedint> {
};

struct Queue<RakNet::RemoteClient**> {
    struct RemoteClient ***array;
    uint head;
    uint tail;
    uint allocation_size;
};

struct ThreadsafeAllocatingQueue<RakNet::RemoteClient*> {
    struct MemoryPool<RakNet::RemoteClient*> memoryPool;
    struct SimpleMutex memoryPoolMutex;
    struct Queue<RakNet::RemoteClient**> queue;
    struct SimpleMutex queueMutex;
};

struct LocklessUint32_t {
};

struct MemoryPool<RakNet::SystemAddress> {
    struct Page *availablePages;
    struct Page *unavailablePages;
    int availablePagesSize;
    int unavailablePagesSize;
    int memoryPoolPageSize;
};

struct Queue<RakNet::SystemAddress*> {
    struct SystemAddress **array;
    uint head;
    uint tail;
    uint allocation_size;
};

struct ThreadsafeAllocatingQueue<RakNet::SystemAddress> {
    struct MemoryPool<RakNet::SystemAddress> memoryPool;
    struct SimpleMutex memoryPoolMutex;
    struct Queue<RakNet::SystemAddress*> queue;
    struct SimpleMutex queueMutex;
};

struct Queue<RakNet::SystemAddress> {
    struct SystemAddress *array;
    uint head;
    uint tail;
    uint allocation_size;
};

struct TCPInterface {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    struct List<RakNet::PluginInterface2*> messageHandlerList;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    struct LocklessUint32_t isStarted;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    struct LocklessUint32_t threadRunning;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    uint listenSocket;
    struct Queue<RakNet::Packet*> headPush;
    struct Queue<RakNet::Packet*> tailPush;
    struct RemoteClient *remoteClients;
    int remoteClientsLength;
    struct ThreadsafeAllocatingQueue<RakNet::Packet> incomingMessages;
    struct ThreadsafeAllocatingQueue<RakNet::SystemAddress> newIncomingConnections;
    struct ThreadsafeAllocatingQueue<RakNet::SystemAddress> lostConnections;
    struct ThreadsafeAllocatingQueue<RakNet::SystemAddress> requestedCloseConnections;
    struct ThreadsafeAllocatingQueue<RakNet::RemoteClient*> newRemoteClients;
    struct SimpleMutex completedConnectionAttemptMutex;
    struct SimpleMutex failedConnectionAttemptMutex;
    struct Queue<RakNet::SystemAddress> completedConnectionAttempts;
    struct Queue<RakNet::SystemAddress> failedConnectionAttempts;
    int threadPriority;
    struct List<unsignedint> blockingSocketList;
    undefined field40_0x23d;
    undefined field41_0x23e;
    undefined field42_0x23f;
    undefined field43_0x240;
    undefined field44_0x241;
    undefined field45_0x242;
    undefined field46_0x243;
    undefined field47_0x244;
    undefined field48_0x245;
    undefined field49_0x246;
    undefined field50_0x247;
    struct SimpleMutex blockingSocketListMutex;
};

struct Page {
    struct MemoryWithPage **availableStack;
    int availableStackSize;
    struct MemoryWithPage *block;
    struct Page *next;
    struct Page *prev;
};

struct MemoryWithPage {
    struct Packet userMemory;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    undefined field32_0x20;
    undefined field33_0x21;
    undefined field34_0x22;
    undefined field35_0x23;
    undefined field36_0x24;
    undefined field37_0x25;
    undefined field38_0x26;
    undefined field39_0x27;
    undefined field40_0x28;
    undefined field41_0x29;
    undefined field42_0x2a;
    undefined field43_0x2b;
    undefined field44_0x2c;
    undefined field45_0x2d;
    undefined field46_0x2e;
    undefined field47_0x2f;
    undefined field48_0x30;
    undefined field49_0x31;
    undefined field50_0x32;
    undefined field51_0x33;
    undefined field52_0x34;
    undefined field53_0x35;
    undefined field54_0x36;
    undefined field55_0x37;
    struct Page *parentPage;
    undefined field57_0x3c;
    undefined field58_0x3d;
    undefined field59_0x3e;
    undefined field60_0x3f;
};

struct RemoteClient {
    uint socket;
    struct SystemAddress systemAddress;
    struct ByteQueue outgoingData;
    bool isActive;
    struct SimpleMutex outgoingDataMutex;
    struct SimpleMutex isActiveMutex;
};

typedef struct RakNetStatistics RakNetStatistics, *PRakNetStatistics;

struct RakNetStatistics {
    __uint64 valueOverLastSecond[7];
    __uint64 runningTotal[7];
    __uint64 connectionStartTime;
    bool isLimitedByCongestionControl;
    __uint64 BPSLimitByCongestionControl;
    bool isLimitedByOutgoingBandwidthLimit;
    __uint64 BPSLimitByOutgoingBandwidthLimit;
    uint messageInSendBuffer[4];
    double bytesInSendBuffer[4];
    uint messagesInResendBuffer;
    __uint64 bytesInResendBuffer;
    float packetlossLastSecond;
    float packetlossTotal;
};

typedef struct RNS2_SendParameters RNS2_SendParameters, *PRNS2_SendParameters;

struct RNS2_SendParameters {
    char *data;
    int length;
    struct SystemAddress systemAddress;
    int ttl;
};

typedef enum RNS2BindResult {
    BR_SUCCESS=0,
    BR_REQUIRES_RAKNET_SUPPORT_IPV6_DEFINE=1,
    BR_FAILED_TO_BIND_SOCKET=2,
    BR_FAILED_SEND_TEST=3
} RNS2BindResult;

typedef enum PluginReceiveResult {
    RR_STOP_PROCESSING_AND_DEALLOCATE=0,
    RR_CONTINUE_PROCESSING=1,
    RR_STOP_PROCESSING=2
} PluginReceiveResult;

typedef struct StringCompressor StringCompressor, *PStringCompressor;

typedef struct Map<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>> Map<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>>, *PMap<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>>;

typedef struct OrderedList<int,DataStructures::Map<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>>::MapNode,&DataStructures::Map<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>>::NodeComparisonFunc> OrderedList<int,DataStructures::Map<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>>::MapNode,&DataStructures::Map<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>>::NodeComparisonFunc>, *POrderedList<int,DataStructures::Map<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>>::MapNode,&DataStructures::Map<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>>::NodeComparisonFunc>;

typedef struct List<DataStructures::Map<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>>::MapNode> List<DataStructures::Map<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>>::MapNode>, *PList<DataStructures::Map<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>>::MapNode>;

typedef struct MapNode MapNode, *PMapNode;

typedef struct HuffmanEncodingTree HuffmanEncodingTree, *PHuffmanEncodingTree;

typedef struct CharacterEncoding CharacterEncoding, *PCharacterEncoding;

struct List<DataStructures::Map<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>>::MapNode> {
    struct MapNode *listArray;
    uint list_size;
    uint allocation_size;
};

struct OrderedList<int,DataStructures::Map<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>>::MapNode,&DataStructures::Map<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>>::NodeComparisonFunc> {
    struct List<DataStructures::Map<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>>::MapNode> orderedList;
};

struct Map<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>> {
    struct OrderedList<int,DataStructures::Map<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>>::MapNode,&DataStructures::Map<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>>::NodeComparisonFunc> mapNodeList;
    uint lastSearchIndex;
    int lastSearchKey;
    bool lastSearchIndexValid;
};

struct StringCompressor {
    struct Map<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>> huffmanEncodingTrees;
};

struct MapNode {
    int mapNodeKey;
    struct HuffmanEncodingTree *mapNodeData;
};

struct CharacterEncoding {
    uchar *encoding;
    ushort bitLength;
};

struct HuffmanEncodingTree {
    struct HuffmanEncodingTreeNode *root;
    struct CharacterEncoding encodingTable[256];
};

typedef int RNS2Socket;

typedef struct IRNS2_Berkley IRNS2_Berkley, *PIRNS2_Berkley;

struct IRNS2_Berkley {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    undefined field32_0x20;
    undefined field33_0x21;
    undefined field34_0x22;
    undefined field35_0x23;
};

typedef struct RNS2_Windows_Linux_360 RNS2_Windows_Linux_360, *PRNS2_Windows_Linux_360;

struct RNS2_Windows_Linux_360 {
    undefined field0_0x0;
};

typedef struct InternalPacket InternalPacket, *PInternalPacket;

struct InternalPacket {
};

typedef struct RNS2RecvStruct RNS2RecvStruct, *PRNS2RecvStruct;

struct RNS2RecvStruct {
};

typedef struct RakThread RakThread, *PRakThread;

struct RakThread {
    undefined field0_0x0;
};

typedef struct RakNetRandom RakNetRandom, *PRakNetRandom;

struct RakNetRandom {
    uint state[625];
    uint *next;
    int left;
};

typedef struct InternalPacketRefCountedData InternalPacketRefCountedData, *PInternalPacketRefCountedData;

struct InternalPacketRefCountedData {
};

typedef struct AddressOrGUID AddressOrGUID, *PAddressOrGUID;

typedef struct RakNetGUID RakNetGUID, *PRakNetGUID;

struct RakNetGUID {
    __uint64 g;
    ushort systemIndex;
};

struct AddressOrGUID {
    struct RakNetGUID rakNetGuid;
    struct SystemAddress systemAddress;
};

typedef struct RakString RakString, *PRakString;

struct RakString {
};

typedef struct StringTable StringTable, *PStringTable;

typedef struct OrderedList<char*,StrAndBool,&RakNet::StrAndBoolComp> OrderedList<char*,StrAndBool,&RakNet::StrAndBoolComp>, *POrderedList<char*,StrAndBool,&RakNet::StrAndBoolComp>;

typedef struct List<StrAndBool> List<StrAndBool>, *PList<StrAndBool>;

struct List<StrAndBool> {
    struct StrAndBool *listArray;
    uint list_size;
    uint allocation_size;
};

struct OrderedList<char*,StrAndBool,&RakNet::StrAndBoolComp> {
    struct List<StrAndBool> orderedList;
};

struct StringTable {
    struct OrderedList<char*,StrAndBool,&RakNet::StrAndBoolComp> orderedStringList;
};

typedef enum RNSPerSecondMetrics {
    USER_MESSAGE_BYTES_PUSHED=0,
    USER_MESSAGE_BYTES_SENT=1,
    USER_MESSAGE_BYTES_RESENT=2,
    USER_MESSAGE_BYTES_RECEIVED_PROCESSED=3,
    USER_MESSAGE_BYTES_RECEIVED_IGNORED=4,
    ACTUAL_BYTES_SENT=5,
    ACTUAL_BYTES_RECEIVED=6,
    RNS_PER_SECOND_METRICS_COUNT=7
} RNSPerSecondMetrics;

typedef struct PublicKey PublicKey, *PPublicKey;

struct PublicKey {
};

typedef struct SplitPacketChannel SplitPacketChannel, *PSplitPacketChannel;

struct SplitPacketChannel {
};

typedef struct BitStream BitStream, *PBitStream;

struct BitStream {
    uint numberOfBitsUsed;
    uint numberOfBitsAllocated;
    uint readOffset;
    uchar *data;
    bool copyData;
    uchar stackData[256];
};

typedef struct SignaledEvent SignaledEvent, *PSignaledEvent;

struct SignaledEvent {
};

typedef struct RemoteSystemIndex RemoteSystemIndex, *PRemoteSystemIndex;

struct RemoteSystemIndex {
};

typedef struct ReliabilityLayer ReliabilityLayer, *PReliabilityLayer;

struct ReliabilityLayer {
};

typedef struct RakPeer RakPeer, *PRakPeer;

struct RakPeer {
};

typedef enum PI2_LostConnectionReason {
    LCR_CLOSED_BY_USER=0,
    LCR_DISCONNECTION_NOTIFICATION=1,
    LCR_CONNECTION_LOST=2
} PI2_LostConnectionReason;

typedef enum ConnectionState {
    IS_PENDING=0,
    IS_CONNECTING=1,
    IS_CONNECTED=2,
    IS_DISCONNECTING=3,
    IS_SILENTLY_DISCONNECTING=4,
    IS_DISCONNECTED=5,
    IS_NOT_CONNECTED=6
} ConnectionState;

typedef struct RakNetSocket2Allocator RakNetSocket2Allocator, *PRakNetSocket2Allocator;

struct RakNetSocket2Allocator {
    undefined field0_0x0;
};

typedef enum ConnectionAttemptResult {
    CONNECTION_ATTEMPT_STARTED=0,
    INVALID_PARAMETER=1,
    CANNOT_RESOLVE_DOMAIN_NAME=2,
    ALREADY_CONNECTED_TO_ENDPOINT=3,
    CONNECTION_ATTEMPT_ALREADY_IN_PROGRESS=4,
    SECURITY_INITIALIZATION_FAILED=5
} ConnectionAttemptResult;

typedef enum PI2_FailedConnectionAttemptReason {
    FCAR_CONNECTION_ATTEMPT_FAILED=0,
    FCAR_ALREADY_CONNECTED=1,
    FCAR_NO_FREE_INCOMING_CONNECTIONS=2,
    FCAR_SECURITY_PUBLIC_KEY_MISMATCH=3,
    FCAR_CONNECTION_BANNED=4,
    FCAR_INVALID_PASSWORD=5,
    FCAR_INCOMPATIBLE_PROTOCOL=6,
    FCAR_IP_RECENTLY_CONNECTED=7,
    FCAR_REMOTE_SYSTEM_REQUIRES_PUBLIC_KEY=8,
    FCAR_OUR_SYSTEM_REQUIRES_SECURITY=9,
    FCAR_PUBLIC_KEY_MISMATCH=10
} PI2_FailedConnectionAttemptReason;

typedef struct SocketLayer SocketLayer, *PSocketLayer;

struct SocketLayer {
    undefined field0_0x0;
};

typedef struct InternalPacketFixedSizeTransmissionHeader InternalPacketFixedSizeTransmissionHeader, *PInternalPacketFixedSizeTransmissionHeader;

struct InternalPacketFixedSizeTransmissionHeader {
};

typedef struct CCRakNetSlidingWindow CCRakNetSlidingWindow, *PCCRakNetSlidingWindow;

struct CCRakNetSlidingWindow {
};

typedef struct BPSTracker BPSTracker, *PBPSTracker;

struct BPSTracker {
};

typedef uchar MessageID;

typedef struct RNS2_Windows RNS2_Windows, *PRNS2_Windows;

struct RNS2_Windows {
    int _padding_;
    int _padding_;
    int _padding_;
    int _padding_;
    int _padding_;
    int _padding_;
    int _padding_;
    int _padding_;
    int _padding_;
    int _padding_;
    int _padding_;
    int _padding_;
    int _padding_;
    int _padding_;
    int _padding_;
    int _padding_;
    int _padding_;
    int _padding_;
    int _padding_;
    int _padding_;
    int _padding_;
    int _padding_;
    int _padding_;
    int _padding_;
    struct SocketLayerOverride *slo;
};

typedef enum StartupResult {
    RAKNET_STARTED=0,
    RAKNET_ALREADY_STARTED=1,
    INVALID_SOCKET_DESCRIPTORS=2,
    INVALID_MAX_CONNECTIONS=3,
    SOCKET_FAMILY_NOT_SUPPORTED=4,
    SOCKET_PORT_ALREADY_IN_USE=5,
    SOCKET_FAILED_TO_BIND=6,
    SOCKET_FAILED_TEST_SEND=7,
    PORT_CANNOT_BE_ZERO=8,
    FAILED_TO_CREATE_NETWORK_THREAD=9,
    COULD_NOT_GENERATE_GUID=10,
    STARTUP_OTHER_FAILURE=11
} StartupResult;

typedef struct RNS2_Berkley RNS2_Berkley, *PRNS2_Berkley;

struct RNS2_Berkley {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    undefined field32_0x20;
    undefined field33_0x21;
    undefined field34_0x22;
    undefined field35_0x23;
    int rns2Socket;
    struct RNS2_BerkleyBindParameters binding;
    struct LocklessUint32_t isRecvFromLoopThreadActive;
    undefined field39_0x59;
    undefined field40_0x5a;
    undefined field41_0x5b;
    bool endThreads;
    undefined field43_0x5d;
    undefined field44_0x5e;
    undefined field45_0x5f;
};

typedef struct BanStruct BanStruct, *PBanStruct;

struct BanStruct {
};

typedef struct RequestedConnectionStruct RequestedConnectionStruct, *PRequestedConnectionStruct;

struct RequestedConnectionStruct {
};

typedef struct BufferedCommandStruct BufferedCommandStruct, *PBufferedCommandStruct;

struct BufferedCommandStruct {
};

typedef struct SocketQueryOutput SocketQueryOutput, *PSocketQueryOutput;

struct SocketQueryOutput {
};

typedef struct RemoteSystemStruct RemoteSystemStruct, *PRemoteSystemStruct;

struct RemoteSystemStruct {
};

typedef enum ConnectMode {
    NO_ACTION=0,
    DISCONNECT_ASAP=1,
    DISCONNECT_ASAP_SILENTLY=2,
    DISCONNECT_ON_NO_ACK=3,
    REQUESTED_CONNECTION=4,
    HANDLING_CONNECTION_REQUEST=5,
    UNVERIFIED_SENDER=6,
    CONNECTED=7
} ConnectMode;

typedef struct ThisPtrPlusSysAddr ThisPtrPlusSysAddr, *PThisPtrPlusSysAddr;

struct ThisPtrPlusSysAddr {
    struct TCPInterface *tcpInterface;
    struct SystemAddress systemAddress;
    bool useSSL;
    char bindAddress[64];
    ushort socketFamily;
};

typedef struct DatagramHistoryNode DatagramHistoryNode, *PDatagramHistoryNode;

struct DatagramHistoryNode {
};

typedef struct MessageNumberNode MessageNumberNode, *PMessageNumberNode;

struct MessageNumberNode {
};

typedef struct UnreliableWithAckReceiptNode UnreliableWithAckReceiptNode, *PUnreliableWithAckReceiptNode;

struct UnreliableWithAckReceiptNode {
};

typedef struct SharedString SharedString, *PSharedString;

struct SharedString {
    struct SimpleMutex *refCountMutex;
    uint refCount;
    uint bytesUsed;
    char *bigString;
    char *c_str;
    char smallString[112];
};

typedef struct TimeAndValue2 TimeAndValue2, *PTimeAndValue2;

struct TimeAndValue2 {
};

typedef struct event_receiverAttribute event_receiverAttribute, *Pevent_receiverAttribute;

typedef enum type_e {
    native=0,
    com=1,
    managed=2
} type_e;

struct event_receiverAttribute {
    enum type_e type;
    bool layout_dependent;
};

typedef struct event_sourceAttribute event_sourceAttribute, *Pevent_sourceAttribute;

typedef enum optimize_e {
    speed=0,
    size=1
} optimize_e;

struct event_sourceAttribute {
    enum type_e type;
    enum optimize_e optimize;
    bool decorate;
};

typedef struct moduleAttribute moduleAttribute, *PmoduleAttribute;


// WARNING! conflicting data type names: /ois.pdb/__vc_attributes/moduleAttribute/type_e - /ois.pdb/__vc_attributes/event_receiverAttribute/type_e

struct moduleAttribute {
    enum type_e type;
    char *name;
    char *version;
    char *uuid;
    int lcid;
    bool control;
    char *helpstring;
    int helpstringcontext;
    char *helpstringdll;
    char *helpfile;
    int helpcontext;
    bool hidden;
    bool restricted;
    char *custom;
    char *resource_name;
};

typedef struct threadingAttribute threadingAttribute, *PthreadingAttribute;

typedef enum threading_e {
    apartment=1,
    single=2,
    free=3,
    neutral=4,
    both=5
} threading_e;

struct threadingAttribute {
    enum threading_e value;
};

typedef struct aggregatableAttribute aggregatableAttribute, *PaggregatableAttribute;


// WARNING! conflicting data type names: /ois.pdb/__vc_attributes/aggregatableAttribute/type_e - /ois.pdb/__vc_attributes/event_receiverAttribute/type_e

struct aggregatableAttribute {
    enum type_e type;
};

typedef struct v1_alttypeAttribute v1_alttypeAttribute, *Pv1_alttypeAttribute;


// WARNING! conflicting data type names: /ois.pdb/__vc_attributes/helper_attributes/v1_alttypeAttribute/type_e - /ois.pdb/__vc_attributes/event_receiverAttribute/type_e

struct v1_alttypeAttribute {
    enum type_e type;
};

typedef struct usageAttribute usageAttribute, *PusageAttribute;

struct usageAttribute {
    uint value;
};

typedef enum usage_e {
    eAnyUsage=0,
    eCoClassUsage=1,
    eCOMInterfaceUsage=2,
    eInterfaceUsage=6,
    eMemberUsage=8,
    eMethodUsage=16,
    eInterfaceMethodUsage=32,
    eInterfaceMemberUsage=64,
    eCoClassMemberUsage=128,
    eCoClassMethodUsage=256,
    eGlobalMethodUsage=768,
    eGlobalDataUsage=1024,
    eClassUsage=2048,
    eInterfaceParameterUsage=4096,
    eMethodParameterUsage=12288,
    eIDLModuleUsage=16384,
    eAnonymousUsage=32768,
    eTypedefUsage=65536,
    eUnionUsage=131072,
    eEnumUsage=262144,
    eDefineTagUsage=524288,
    eStructUsage=1048576,
    eLocalUsage=2097152,
    eAnyIDLUsage=4161535,
    ePropertyUsage=4194304,
    eEventUsage=8388608,
    eModuleUsage=16777216,
    eTemplateUsage=16777216,
    eIllegalUsage=33554432,
    eAsynchronousUsage=67108864
} usage_e;

typedef struct MemoryPool<RakNet::InternalPacketRefCountedData> MemoryPool<RakNet::InternalPacketRefCountedData>, *PMemoryPool<RakNet::InternalPacketRefCountedData>;

struct MemoryPool<RakNet::InternalPacketRefCountedData> {
};

typedef struct List<RakNet::SystemAddress> List<RakNet::SystemAddress>, *PList<RakNet::SystemAddress>;

struct List<RakNet::SystemAddress> {
    struct SystemAddress *listArray;
    uint list_size;
    uint allocation_size;
};

typedef struct OrderedList<RakNet::SystemAddress,DataStructures::Map<RakNet::SystemAddress,DataStructures::ByteQueue*,&DataStructures::defaultMapKeyComparison<RakNet::SystemAddress>>::MapNode,&DataStructures::Map<RakNet::SystemAddress,DataStructures::ByteQueue*,&DataStructures::defaultMapKeyComparison<RakNet::SystemAddress>>::NodeComparisonFunc> OrderedList<RakNet::SystemAddress,DataStructures::Map<RakNet::SystemAddress,DataStructures::ByteQueue*,&DataStructures::defaultMapKeyComparison<RakNet::SystemAddress>>::MapNode,&DataStructures::Map<RakNet::SystemAddress,DataStructures::ByteQueue*,&DataStructures::defaultMapKeyComparison<RakNet::SystemAddress>>::NodeComparisonFunc>, *POrderedList<RakNet::SystemAddress,DataStructures::Map<RakNet::SystemAddress,DataStructures::ByteQueue*,&DataStructures::defaultMapKeyComparison<RakNet::SystemAddress>>::MapNode,&DataStructures::Map<RakNet::SystemAddress,DataStructures::ByteQueue*,&DataStructures::defaultMapKeyComparison<RakNet::SystemAddress>>::NodeComparisonFunc>;

typedef struct List<DataStructures::Map<RakNet::SystemAddress,DataStructures::ByteQueue*,&DataStructures::defaultMapKeyComparison<RakNet::SystemAddress>>::MapNode> List<DataStructures::Map<RakNet::SystemAddress,DataStructures::ByteQueue*,&DataStructures::defaultMapKeyComparison<RakNet::SystemAddress>>::MapNode>, *PList<DataStructures::Map<RakNet::SystemAddress,DataStructures::ByteQueue*,&DataStructures::defaultMapKeyComparison<RakNet::SystemAddress>>::MapNode>;


// WARNING! conflicting data type names: /ois.pdb/DataStructures/Map<RakNet::SystemAddress,DataStructures::ByteQueue*,&DataStructures::defaultMapKeyComparison<RakNet::SystemAddress>>/MapNode - /ois.pdb/DataStructures/Map<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>>/MapNode

struct List<DataStructures::Map<RakNet::SystemAddress,DataStructures::ByteQueue*,&DataStructures::defaultMapKeyComparison<RakNet::SystemAddress>>::MapNode> {
    struct MapNode *listArray;
    uint list_size;
    uint allocation_size;
};

struct OrderedList<RakNet::SystemAddress,DataStructures::Map<RakNet::SystemAddress,DataStructures::ByteQueue*,&DataStructures::defaultMapKeyComparison<RakNet::SystemAddress>>::MapNode,&DataStructures::Map<RakNet::SystemAddress,DataStructures::ByteQueue*,&DataStructures::defaultMapKeyComparison<RakNet::SystemAddress>>::NodeComparisonFunc> {
    struct List<DataStructures::Map<RakNet::SystemAddress,DataStructures::ByteQueue*,&DataStructures::defaultMapKeyComparison<RakNet::SystemAddress>>::MapNode> orderedList;
};

typedef struct RangeList<RakNet::uint24_t> RangeList<RakNet::uint24_t>, *PRangeList<RakNet::uint24_t>;

typedef struct OrderedList<RakNet::uint24_t,DataStructures::RangeNode<RakNet::uint24_t>,&DataStructures::RangeNodeComp<RakNet::uint24_t>> OrderedList<RakNet::uint24_t,DataStructures::RangeNode<RakNet::uint24_t>,&DataStructures::RangeNodeComp<RakNet::uint24_t>>, *POrderedList<RakNet::uint24_t,DataStructures::RangeNode<RakNet::uint24_t>,&DataStructures::RangeNodeComp<RakNet::uint24_t>>;

struct OrderedList<RakNet::uint24_t,DataStructures::RangeNode<RakNet::uint24_t>,&DataStructures::RangeNodeComp<RakNet::uint24_t>> {
};

struct RangeList<RakNet::uint24_t> {
    struct OrderedList<RakNet::uint24_t,DataStructures::RangeNode<RakNet::uint24_t>,&DataStructures::RangeNodeComp<RakNet::uint24_t>> ranges;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
};

typedef struct List<RakNet::RakNetStatistics> List<RakNet::RakNetStatistics>, *PList<RakNet::RakNetStatistics>;

struct List<RakNet::RakNetStatistics> {
    struct RakNetStatistics *listArray;
    uint list_size;
    uint allocation_size;
};

typedef struct OrderedList<unsignedshort,RakNet::SplitPacketChannel*,&RakNet::SplitPacketChannelComp> OrderedList<unsignedshort,RakNet::SplitPacketChannel*,&RakNet::SplitPacketChannelComp>, *POrderedList<unsignedshort,RakNet::SplitPacketChannel*,&RakNet::SplitPacketChannelComp>;

struct OrderedList<unsignedshort,RakNet::SplitPacketChannel*,&RakNet::SplitPacketChannelComp> {
};

typedef struct List<RakNet::ReliabilityLayer::UnreliableWithAckReceiptNode> List<RakNet::ReliabilityLayer::UnreliableWithAckReceiptNode>, *PList<RakNet::ReliabilityLayer::UnreliableWithAckReceiptNode>;

struct List<RakNet::ReliabilityLayer::UnreliableWithAckReceiptNode> {
};

typedef struct List<RakNet::RakNetSocket2*> List<RakNet::RakNetSocket2*>, *PList<RakNet::RakNetSocket2*>;

struct List<RakNet::RakNetSocket2*> {
    struct RakNetSocket2 **listArray;
    uint list_size;
    uint allocation_size;
};

typedef struct Queue<RakNet::InternalPacket*> Queue<RakNet::InternalPacket*>, *PQueue<RakNet::InternalPacket*>;

struct Queue<RakNet::InternalPacket*> {
};

typedef struct List<DataStructures::RangeNode<RakNet::uint24_t>> List<DataStructures::RangeNode<RakNet::uint24_t>>, *PList<DataStructures::RangeNode<RakNet::uint24_t>>;

struct List<DataStructures::RangeNode<RakNet::uint24_t>> {
};

typedef struct MemoryPool<RakNet::RemoteSystemIndex> MemoryPool<RakNet::RemoteSystemIndex>, *PMemoryPool<RakNet::RemoteSystemIndex>;


// WARNING! conflicting data type names: /ois.pdb/DataStructures/MemoryPool<RakNet::RemoteSystemIndex>/Page - /ois.pdb/DataStructures/MemoryPool<RakNet::Packet>/Page

struct MemoryPool<RakNet::RemoteSystemIndex> {
    struct Page *availablePages;
    struct Page *unavailablePages;
    int availablePagesSize;
    int unavailablePagesSize;
    int memoryPoolPageSize;
};

typedef struct List<RakNet::RakNetGUID> List<RakNet::RakNetGUID>, *PList<RakNet::RakNetGUID>;

struct List<RakNet::RakNetGUID> {
    struct RakNetGUID *listArray;
    uint list_size;
    uint allocation_size;
};

typedef struct List<RakNet::RakPeer::BanStruct*> List<RakNet::RakPeer::BanStruct*>, *PList<RakNet::RakPeer::BanStruct*>;

struct List<RakNet::RakPeer::BanStruct*> {
    struct BanStruct **listArray;
    uint list_size;
    uint allocation_size;
};

typedef struct Queue<bool> Queue<bool>, *PQueue<bool>;

struct Queue<bool> {
};

typedef struct MemoryPool<RakNet::InternalPacket> MemoryPool<RakNet::InternalPacket>, *PMemoryPool<RakNet::InternalPacket>;

struct MemoryPool<RakNet::InternalPacket> {
};

typedef struct MemoryPool<RakNet::RakPeer::SocketQueryOutput> MemoryPool<RakNet::RakPeer::SocketQueryOutput>, *PMemoryPool<RakNet::RakPeer::SocketQueryOutput>;


// WARNING! conflicting data type names: /ois.pdb/DataStructures/MemoryPool<RakNet::RakPeer::SocketQueryOutput>/Page - /ois.pdb/DataStructures/MemoryPool<RakNet::Packet>/Page

struct MemoryPool<RakNet::RakPeer::SocketQueryOutput> {
    struct Page *availablePages;
    struct Page *unavailablePages;
    int availablePagesSize;
    int unavailablePagesSize;
    int memoryPoolPageSize;
};

typedef struct List<RakNet::RakString> List<RakNet::RakString>, *PList<RakNet::RakString>;

struct List<RakNet::RakString> {
    struct RakString *listArray;
    uint list_size;
    uint allocation_size;
};

typedef struct MemoryPool<RakNet::ReliabilityLayer::MessageNumberNode> MemoryPool<RakNet::ReliabilityLayer::MessageNumberNode>, *PMemoryPool<RakNet::ReliabilityLayer::MessageNumberNode>;

struct MemoryPool<RakNet::ReliabilityLayer::MessageNumberNode> {
};

typedef struct List<bool> List<bool>, *PList<bool>;

struct List<bool> {
};

typedef struct RangeNode<RakNet::uint24_t> RangeNode<RakNet::uint24_t>, *PRangeNode<RakNet::uint24_t>;

struct RangeNode<RakNet::uint24_t> {
};

typedef struct Queue<RakNet::RakPeer::SocketQueryOutput*> Queue<RakNet::RakPeer::SocketQueryOutput*>, *PQueue<RakNet::RakPeer::SocketQueryOutput*>;

struct Queue<RakNet::RakPeer::SocketQueryOutput*> {
    struct SocketQueryOutput **array;
    uint head;
    uint tail;
    uint allocation_size;
};

typedef struct List<RakNet::SplitPacketChannel*> List<RakNet::SplitPacketChannel*>, *PList<RakNet::SplitPacketChannel*>;

struct List<RakNet::SplitPacketChannel*> {
};

typedef struct MemoryPool<RakNet::RakPeer::BufferedCommandStruct> MemoryPool<RakNet::RakPeer::BufferedCommandStruct>, *PMemoryPool<RakNet::RakPeer::BufferedCommandStruct>;


// WARNING! conflicting data type names: /ois.pdb/DataStructures/MemoryPool<RakNet::RakPeer::BufferedCommandStruct>/Page - /ois.pdb/DataStructures/MemoryPool<RakNet::Packet>/Page

struct MemoryPool<RakNet::RakPeer::BufferedCommandStruct> {
    struct Page *availablePages;
    struct Page *unavailablePages;
    int availablePagesSize;
    int unavailablePagesSize;
    int memoryPoolPageSize;
};

typedef struct Queue<RakNet::BPSTracker::TimeAndValue2> Queue<RakNet::BPSTracker::TimeAndValue2>, *PQueue<RakNet::BPSTracker::TimeAndValue2>;

struct Queue<RakNet::BPSTracker::TimeAndValue2> {
};

typedef struct Queue<RakNet::RNS2RecvStruct*> Queue<RakNet::RNS2RecvStruct*>, *PQueue<RakNet::RNS2RecvStruct*>;

struct Queue<RakNet::RNS2RecvStruct*> {
    struct RNS2RecvStruct **array;
    uint head;
    uint tail;
    uint allocation_size;
};

typedef struct LinkedList<HuffmanEncodingTreeNode*> LinkedList<HuffmanEncodingTreeNode*>, *PLinkedList<HuffmanEncodingTreeNode*>;

struct LinkedList<HuffmanEncodingTreeNode*> {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
};

typedef struct ThreadsafeAllocatingQueue<RakNet::RakPeer::SocketQueryOutput> ThreadsafeAllocatingQueue<RakNet::RakPeer::SocketQueryOutput>, *PThreadsafeAllocatingQueue<RakNet::RakPeer::SocketQueryOutput>;

struct ThreadsafeAllocatingQueue<RakNet::RakPeer::SocketQueryOutput> {
    struct MemoryPool<RakNet::RakPeer::SocketQueryOutput> memoryPool;
    struct SimpleMutex memoryPoolMutex;
    struct Queue<RakNet::RakPeer::SocketQueryOutput*> queue;
    struct SimpleMutex queueMutex;
};

typedef struct List<RakNet::RakString::SharedString*> List<RakNet::RakString::SharedString*>, *PList<RakNet::RakString::SharedString*>;

struct List<RakNet::RakString::SharedString*> {
    struct SharedString **listArray;
    uint list_size;
    uint allocation_size;
};

typedef struct Queue<RakNet::RakPeer::BufferedCommandStruct*> Queue<RakNet::RakPeer::BufferedCommandStruct*>, *PQueue<RakNet::RakPeer::BufferedCommandStruct*>;

struct Queue<RakNet::RakPeer::BufferedCommandStruct*> {
    struct BufferedCommandStruct **array;
    uint head;
    uint tail;
    uint allocation_size;
};

typedef struct List<RakNet::InternalPacket*> List<RakNet::InternalPacket*>, *PList<RakNet::InternalPacket*>;

struct List<RakNet::InternalPacket*> {
};

typedef struct List<DataStructures::Heap<unsigned__int64,RakNet::InternalPacket*,0>::HeapNode> List<DataStructures::Heap<unsigned__int64,RakNet::InternalPacket*,0>::HeapNode>, *PList<DataStructures::Heap<unsigned__int64,RakNet::InternalPacket*,0>::HeapNode>;

struct List<DataStructures::Heap<unsigned__int64,RakNet::InternalPacket*,0>::HeapNode> {
};

typedef struct ThreadsafeAllocatingQueue<RakNet::RakPeer::BufferedCommandStruct> ThreadsafeAllocatingQueue<RakNet::RakPeer::BufferedCommandStruct>, *PThreadsafeAllocatingQueue<RakNet::RakPeer::BufferedCommandStruct>;

struct ThreadsafeAllocatingQueue<RakNet::RakPeer::BufferedCommandStruct> {
    struct MemoryPool<RakNet::RakPeer::BufferedCommandStruct> memoryPool;
    struct SimpleMutex memoryPoolMutex;
    struct Queue<RakNet::RakPeer::BufferedCommandStruct*> queue;
    struct SimpleMutex queueMutex;
};

typedef struct Heap<unsigned__int64,RakNet::InternalPacket*,0> Heap<unsigned__int64,RakNet::InternalPacket*,0>, *PHeap<unsigned__int64,RakNet::InternalPacket*,0>;

struct Heap<unsigned__int64,RakNet::InternalPacket*,0> {
};

typedef struct Queue<HuffmanEncodingTreeNode*> Queue<HuffmanEncodingTreeNode*>, *PQueue<HuffmanEncodingTreeNode*>;

struct Queue<HuffmanEncodingTreeNode*> {
    struct HuffmanEncodingTreeNode **array;
    uint head;
    uint tail;
    uint allocation_size;
};

typedef struct Queue<RakNet::RakPeer::RequestedConnectionStruct*> Queue<RakNet::RakPeer::RequestedConnectionStruct*>, *PQueue<RakNet::RakPeer::RequestedConnectionStruct*>;

struct Queue<RakNet::RakPeer::RequestedConnectionStruct*> {
    struct RequestedConnectionStruct **array;
    uint head;
    uint tail;
    uint allocation_size;
};

typedef struct CircularLinkedList<HuffmanEncodingTreeNode*> CircularLinkedList<HuffmanEncodingTreeNode*>, *PCircularLinkedList<HuffmanEncodingTreeNode*>;

typedef struct node node, *Pnode;

struct CircularLinkedList<HuffmanEncodingTreeNode*> {
    uint list_size;
    struct node *root;
    struct node *position;
};

struct node {
    struct HuffmanEncodingTreeNode *item;
    struct node *previous;
    struct node *next;
};

typedef struct Map<RakNet::SystemAddress,DataStructures::ByteQueue*,&DataStructures::defaultMapKeyComparison<RakNet::SystemAddress>> Map<RakNet::SystemAddress,DataStructures::ByteQueue*,&DataStructures::defaultMapKeyComparison<RakNet::SystemAddress>>, *PMap<RakNet::SystemAddress,DataStructures::ByteQueue*,&DataStructures::defaultMapKeyComparison<RakNet::SystemAddress>>;

struct Map<RakNet::SystemAddress,DataStructures::ByteQueue*,&DataStructures::defaultMapKeyComparison<RakNet::SystemAddress>> {
    struct OrderedList<RakNet::SystemAddress,DataStructures::Map<RakNet::SystemAddress,DataStructures::ByteQueue*,&DataStructures::defaultMapKeyComparison<RakNet::SystemAddress>>::MapNode,&DataStructures::Map<RakNet::SystemAddress,DataStructures::ByteQueue*,&DataStructures::defaultMapKeyComparison<RakNet::SystemAddress>>::NodeComparisonFunc> mapNodeList;
    uint lastSearchIndex;
    struct SystemAddress lastSearchKey;
    bool lastSearchIndexValid;
};

typedef struct Queue<RakNet::ReliabilityLayer::DatagramHistoryNode> Queue<RakNet::ReliabilityLayer::DatagramHistoryNode>, *PQueue<RakNet::ReliabilityLayer::DatagramHistoryNode>;

struct Queue<RakNet::ReliabilityLayer::DatagramHistoryNode> {
};


// WARNING! conflicting data type names: /ois.pdb/DataStructures/MemoryPool<RakNet::InternalPacketRefCountedData>/MemoryWithPage - /ois.pdb/DataStructures/MemoryPool<RakNet::Packet>/MemoryWithPage


// WARNING! conflicting data type names: /ois.pdb/DataStructures/MemoryPool<RakNet::InternalPacketRefCountedData>/Page - /ois.pdb/DataStructures/MemoryPool<RakNet::Packet>/Page

typedef struct HeapNode HeapNode, *PHeapNode;

struct HeapNode {
    __uint64 weight;
    struct InternalPacket *data;
};


// WARNING! conflicting data type names: /ois.pdb/DataStructures/MemoryPool<RakNet::RemoteClient*>/MemoryWithPage - /ois.pdb/DataStructures/MemoryPool<RakNet::Packet>/MemoryWithPage


// WARNING! conflicting data type names: /ois.pdb/DataStructures/MemoryPool<RakNet::RakPeer::BufferedCommandStruct>/MemoryWithPage - /ois.pdb/DataStructures/MemoryPool<RakNet::Packet>/MemoryWithPage


// WARNING! conflicting data type names: /ois.pdb/DataStructures/MemoryPool<RakNet::InternalPacket>/MemoryWithPage - /ois.pdb/DataStructures/MemoryPool<RakNet::Packet>/MemoryWithPage


// WARNING! conflicting data type names: /ois.pdb/DataStructures/MemoryPool<RakNet::InternalPacket>/Page - /ois.pdb/DataStructures/MemoryPool<RakNet::Packet>/Page


// WARNING! conflicting data type names: /ois.pdb/DataStructures/MemoryPool<RakNet::RakPeer::SocketQueryOutput>/MemoryWithPage - /ois.pdb/DataStructures/MemoryPool<RakNet::Packet>/MemoryWithPage


// WARNING! conflicting data type names: /ois.pdb/DataStructures/MemoryPool<RakNet::SystemAddress>/MemoryWithPage - /ois.pdb/DataStructures/MemoryPool<RakNet::Packet>/MemoryWithPage


// WARNING! conflicting data type names: /ois.pdb/DataStructures/MemoryPool<RakNet::ReliabilityLayer::MessageNumberNode>/MemoryWithPage - /ois.pdb/DataStructures/MemoryPool<RakNet::Packet>/MemoryWithPage


// WARNING! conflicting data type names: /ois.pdb/DataStructures/MemoryPool<RakNet::ReliabilityLayer::MessageNumberNode>/Page - /ois.pdb/DataStructures/MemoryPool<RakNet::Packet>/Page


// WARNING! conflicting data type names: /ois.pdb/DataStructures/MemoryPool<RakNet::RemoteSystemIndex>/MemoryWithPage - /ois.pdb/DataStructures/MemoryPool<RakNet::Packet>/MemoryWithPage


// WARNING! conflicting data type names: /WinDef.h/LPFILETIME - /ois.pdb/LPFILETIME


// WARNING! conflicting data type names: /WinDef.h/FARPROC - /ois.pdb/FARPROC

typedef struct HICON__ HICON__, *PHICON__;

struct HICON__ {
    int unused;
};

typedef struct tagRECT tagRECT, *PtagRECT;

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

typedef DWORD *LPDWORD;

typedef struct tagRECT *LPRECT;

typedef struct HICON__ *HICON;

typedef uint *PUINT;

typedef void *LPCVOID;


// WARNING! conflicting data type names: /WinDef.h/HINSTANCE - /ois.pdb/HINSTANCE

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

struct HWND__ {
    int unused;
};


// WARNING! conflicting data type names: /WinDef.h/HMODULE - /ois.pdb/HMODULE

typedef HICON HCURSOR;


// WARNING! conflicting data type names: /PE/IMAGE_OPTIONAL_HEADER32 - /ois.pdb/IMAGE_OPTIONAL_HEADER32

typedef struct Var Var, *PVar;

struct Var {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset:31;
    dword NameIsString:1;
};

typedef struct IMAGE_THUNK_DATA32 IMAGE_THUNK_DATA32, *PIMAGE_THUNK_DATA32;

struct IMAGE_THUNK_DATA32 {
    dword StartAddressOfRawData;
    dword EndAddressOfRawData;
    dword AddressOfIndex;
    dword AddressOfCallBacks;
    dword SizeOfZeroFill;
    dword Characteristics;
};


// WARNING! conflicting data type names: /PE/IMAGE_LOAD_CONFIG_CODE_INTEGRITY - /ois.pdb/IMAGE_LOAD_CONFIG_CODE_INTEGRITY

typedef struct IMAGE_DEBUG_DIRECTORY IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;

struct IMAGE_DEBUG_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword Type;
    dword SizeOfData;
    dword AddressOfRawData;
    dword PointerToRawData;
};


// WARNING! conflicting data type names: /PE/IMAGE_FILE_HEADER - /ois.pdb/IMAGE_FILE_HEADER

typedef struct IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

struct IMAGE_NT_HEADERS32 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER32 OptionalHeader;
};

typedef struct StringFileInfo StringFileInfo, *PStringFileInfo;

struct StringFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

struct IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};


// WARNING! conflicting data type names: /PE/StringTable - /ois.pdb/RakNet/StringTable

typedef struct IMAGE_RESOURCE_DIR_STRING_U_18 IMAGE_RESOURCE_DIR_STRING_U_18, *PIMAGE_RESOURCE_DIR_STRING_U_18;

struct IMAGE_RESOURCE_DIR_STRING_U_18 {
    word Length;
    wchar16 NameString[9];
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct VS_VERSION_INFO VS_VERSION_INFO, *PVS_VERSION_INFO;

struct VS_VERSION_INFO {
    word StructLength;
    word ValueLength;
    word StructType;
    wchar16 Info[16];
    byte Padding[2];
    dword Signature;
    word StructVersion[2];
    word FileVersion[4];
    word ProductVersion[4];
    dword FileFlagsMask[2];
    dword FileFlags;
    dword FileOS;
    dword FileType;
    dword FileSubtype;
    dword FileTimestamp;
};


// WARNING! conflicting data type names: /PE/IMAGE_DATA_DIRECTORY - /ois.pdb/IMAGE_DATA_DIRECTORY

typedef struct IMAGE_BASE_RELOCATION IMAGE_BASE_RELOCATION, *PIMAGE_BASE_RELOCATION;

struct IMAGE_BASE_RELOCATION {
    dword VirtualAddress;
    dword SizeOfBlock;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct VarFileInfo VarFileInfo, *PVarFileInfo;

struct VarFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef enum IMAGE_GUARD_FLAGS {
    IMAGE_GUARD_CF_INSTRUMENTED=256,
    IMAGE_GUARD_CFW_INSTRUMENTED=512,
    IMAGE_GUARD_CF_FUNCTION_TABLE_PRESENT=1024,
    IMAGE_GUARD_SECURITY_COOKIE_UNUSED=2048,
    IMAGE_GUARD_PROTECT_DELAYLOAD_IAT=4096,
    IMAGE_GUARD_DELAYLOAD_IAT_IN_ITS_OWN_SECTION=8192,
    IMAGE_GUARD_CF_EXPORT_SUPPRESSION_INFO_PRESENT=16384,
    IMAGE_GUARD_CF_ENABLE_EXPORT_SUPPRESSION=32768,
    IMAGE_GUARD_CF_LONGJUMP_TABLE_PRESENT=65536,
    IMAGE_GUARD_RF_INSTRUMENTED=131072,
    IMAGE_GUARD_RF_ENABLE=262144,
    IMAGE_GUARD_RF_STRICT=524288,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_1=268435456,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_2=536870912,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_4=1073741824,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_8=2147483648
} IMAGE_GUARD_FLAGS;

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct IMAGE_DIRECTORY_ENTRY_EXPORT IMAGE_DIRECTORY_ENTRY_EXPORT, *PIMAGE_DIRECTORY_ENTRY_EXPORT;

struct IMAGE_DIRECTORY_ENTRY_EXPORT {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    ImageBaseOffset32 Name;
    dword Base;
    dword NumberOfFunctions;
    dword NumberOfNames;
    ImageBaseOffset32 AddressOfFunctions;
    ImageBaseOffset32 AddressOfNames;
    ImageBaseOffset32 AddressOfNameOrdinals;
};

typedef struct StringInfo StringInfo, *PStringInfo;

struct StringInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_LOAD_CONFIG_DIRECTORY32 IMAGE_LOAD_CONFIG_DIRECTORY32, *PIMAGE_LOAD_CONFIG_DIRECTORY32;

struct IMAGE_LOAD_CONFIG_DIRECTORY32 {
    dword Size;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword GlobalFlagsClear;
    dword GlobalFlagsSet;
    dword CriticalSectionDefaultTimeout;
    dword DeCommitFreeBlockThreshold;
    dword DeCommitTotalFreeThreshold;
    pointer32 LockPrefixTable;
    dword MaximumAllocationSize;
    dword VirtualMemoryThreshold;
    dword ProcessHeapFlags;
    dword ProcessAffinityMask;
    word CsdVersion;
    word DependentLoadFlags;
    pointer32 EditList;
    pointer32 SecurityCookie;
    pointer32 SEHandlerTable;
    dword SEHandlerCount;
    pointer32 GuardCFCCheckFunctionPointer;
    pointer32 GuardCFDispatchFunctionPointer;
    pointer32 GuardCFFunctionTable;
    dword GuardCFFunctionCount;
    enum IMAGE_GUARD_FLAGS GuardFlags;
    struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY CodeIntegrity;
    pointer32 GuardAddressTakenIatEntryTable;
    dword GuardAddressTakenIatEntryCount;
    pointer32 GuardLongJumpTargetTable;
    dword GuardLongJumpTargetCount;
    pointer32 DynamicValueRelocTable;
    pointer32 CHPEMetadataPointer;
    pointer32 GuardRFFailureRoutine;
    pointer32 GuardRFFailureRoutineFunctionPointer;
    dword DynamicValueRelocTableOffset;
    word DynamicValueRelocTableSection;
    word Reserved1;
    pointer32 GuardRFVerifyStackPointerFunctionPointer;
    dword HotPatchTableOffset;
    dword Reserved2;
    dword Reserved3;
};


// WARNING! conflicting data type names: /mbstring.h/_iobuf - /ois.pdb/_iobuf


// WARNING! conflicting data type names: /mbstring.h/FILE - /ois.pdb/FILE


// WARNING! conflicting data type names: /ehdata.h/PMFN - /ois.pdb/PMFN


// WARNING! conflicting data type names: /ehdata.h/_s_CatchableType - /ois.pdb/_s_CatchableType


// WARNING! conflicting data type names: /ehdata.h/CatchableType - /ois.pdb/CatchableType


// WARNING! conflicting data type names: /ehdata.h/TypeDescriptor - /TypeDescriptor


// WARNING! conflicting data type names: /ehdata.h/CatchableTypeArray - /ois.pdb/CatchableTypeArray


// WARNING! conflicting data type names: /ehdata.h/ThrowInfo - /ois.pdb/ThrowInfo


// WARNING! conflicting data type names: /ehdata.h/_s_ThrowInfo - /ois.pdb/_s_ThrowInfo


// WARNING! conflicting data type names: /ehdata.h/_s_CatchableTypeArray - /ois.pdb/_s_CatchableTypeArray


// WARNING! conflicting data type names: /winsock.h/WSADATA - /ois.pdb/WSADATA

typedef UINT_PTR SOCKET;

typedef ushort u_short;


// WARNING! conflicting data type names: /winsock.h/LPWSADATA - /ois.pdb/LPWSADATA


// WARNING! conflicting data type names: /winsock.h/sockaddr - /ois.pdb/sockaddr


// WARNING! conflicting data type names: /winsock.h/WSAData - /ois.pdb/WSAData

typedef struct Packet_SetAddon Packet_SetAddon, *PPacket_SetAddon;

struct Packet_SetAddon { // PlaceHolder Structure
};

typedef struct LogLine LogLine, *PLogLine;

struct LogLine { // PlaceHolder Structure
};

typedef struct Widget Widget, *PWidget;

struct Widget { // PlaceHolder Structure
};

typedef struct PathNode PathNode, *PPathNode;

struct PathNode { // PlaceHolder Structure
};

typedef struct SystemManager SystemManager, *PSystemManager;

struct SystemManager { // PlaceHolder Structure
};

typedef struct Packet_SetScenarioState Packet_SetScenarioState, *PPacket_SetScenarioState;

struct Packet_SetScenarioState { // PlaceHolder Structure
};

typedef struct DockingRequest DockingRequest, *PDockingRequest;

struct DockingRequest { // PlaceHolder Structure
};

typedef struct Weapon Weapon, *PWeapon;

struct Weapon { // PlaceHolder Structure
};

typedef struct BankTransaction BankTransaction, *PBankTransaction;

struct BankTransaction { // PlaceHolder Structure
};

typedef struct PowerManager PowerManager, *PPowerManager;

struct PowerManager { // PlaceHolder Structure
};

typedef struct NetworkClient NetworkClient, *PNetworkClient;

struct NetworkClient { // PlaceHolder Structure
};

typedef struct PathContext PathContext, *PPathContext;

struct PathContext { // PlaceHolder Structure
};

typedef struct CargoState CargoState, *PCargoState;

struct CargoState { // PlaceHolder Structure
};

typedef struct PresentationInterface PresentationInterface, *PPresentationInterface;

struct PresentationInterface { // PlaceHolder Structure
};

typedef struct CommsData CommsData, *PCommsData;

struct CommsData { // PlaceHolder Structure
};

typedef struct IllegalGood IllegalGood, *PIllegalGood;

struct IllegalGood { // PlaceHolder Structure
};

typedef struct ButtonElement ButtonElement, *PButtonElement;

struct ButtonElement { // PlaceHolder Structure
};

typedef struct NSMSectorInfo NSMSectorInfo, *PNSMSectorInfo;

struct NSMSectorInfo { // PlaceHolder Structure
};

typedef struct ModuleSaleInstance ModuleSaleInstance, *PModuleSaleInstance;

struct ModuleSaleInstance { // PlaceHolder Structure
};

typedef struct MenuManager MenuManager, *PMenuManager;

struct MenuManager { // PlaceHolder Structure
};

typedef struct Packet_SyncValueString Packet_SyncValueString, *PPacket_SyncValueString;

struct Packet_SyncValueString { // PlaceHolder Structure
};

typedef struct BasicEngine BasicEngine, *PBasicEngine;

struct BasicEngine { // PlaceHolder Structure
};

typedef struct AuthorityManager AuthorityManager, *PAuthorityManager;

struct AuthorityManager { // PlaceHolder Structure
};

typedef struct ShipSaleSet ShipSaleSet, *PShipSaleSet;

struct ShipSaleSet { // PlaceHolder Structure
};

typedef struct SectorEditor SectorEditor, *PSectorEditor;

struct SectorEditor { // PlaceHolder Structure
};

typedef struct NavMarker NavMarker, *PNavMarker;

struct NavMarker { // PlaceHolder Structure
};

typedef struct InputOption InputOption, *PInputOption;

struct InputOption { // PlaceHolder Structure
};

typedef struct CameraPos CameraPos, *PCameraPos;

struct CameraPos { // PlaceHolder Structure
};

typedef struct TabletManager TabletManager, *PTabletManager;

struct TabletManager { // PlaceHolder Structure
};

typedef struct Junk Junk, *PJunk;

struct Junk { // PlaceHolder Structure
};

typedef struct Packet_AddShip Packet_AddShip, *PPacket_AddShip;

struct Packet_AddShip { // PlaceHolder Structure
};

typedef struct <lambda_4755c59c3a9e60a5b049353a7584df55> <lambda_4755c59c3a9e60a5b049353a7584df55>, *P<lambda_4755c59c3a9e60a5b049353a7584df55>;

struct <lambda_4755c59c3a9e60a5b049353a7584df55> { // PlaceHolder Structure
};

typedef struct RoomCharacterClass RoomCharacterClass, *PRoomCharacterClass;

struct RoomCharacterClass { // PlaceHolder Structure
};

typedef struct Selectable Selectable, *PSelectable;

struct Selectable { // PlaceHolder Structure
};

typedef struct HazardCategory HazardCategory, *PHazardCategory;

struct HazardCategory { // PlaceHolder Structure
};

typedef struct Menu Menu, *PMenu;

struct Menu { // PlaceHolder Structure
};

typedef struct SoundSpace SoundSpace, *PSoundSpace;

struct SoundSpace { // PlaceHolder Structure
};

typedef struct TradeLocation TradeLocation, *PTradeLocation;

struct TradeLocation { // PlaceHolder Structure
};

typedef struct Screen_Renderer Screen_Renderer, *PScreen_Renderer;

struct Screen_Renderer { // PlaceHolder Structure
};

typedef struct SyntheticObject SyntheticObject, *PSyntheticObject;

struct SyntheticObject { // PlaceHolder Structure
};

typedef struct ServerShipState ServerShipState, *PServerShipState;

struct ServerShipState { // PlaceHolder Structure
};

typedef struct DockProcessElement DockProcessElement, *PDockProcessElement;

struct DockProcessElement { // PlaceHolder Structure
};

typedef struct LocationManager LocationManager, *PLocationManager;

struct LocationManager { // PlaceHolder Structure
};

typedef struct ServerInfoState ServerInfoState, *PServerInfoState;

struct ServerInfoState { // PlaceHolder Structure
};

typedef struct BankAccount BankAccount, *PBankAccount;

struct BankAccount { // PlaceHolder Structure
};

typedef struct Packet_UpdateSensorWaveform Packet_UpdateSensorWaveform, *PPacket_UpdateSensorWaveform;

struct Packet_UpdateSensorWaveform { // PlaceHolder Structure
};

typedef struct FlagManager FlagManager, *PFlagManager;

struct FlagManager { // PlaceHolder Structure
};

typedef struct EmailDraft EmailDraft, *PEmailDraft;

struct EmailDraft { // PlaceHolder Structure
};

typedef struct BankEngine BankEngine, *PBankEngine;

struct BankEngine { // PlaceHolder Structure
};

typedef struct NetworkData NetworkData, *PNetworkData;

struct NetworkData { // PlaceHolder Structure
};

typedef struct NetworkServer NetworkServer, *PNetworkServer;

struct NetworkServer { // PlaceHolder Structure
};

typedef struct TextEngine TextEngine, *PTextEngine;

struct TextEngine { // PlaceHolder Structure
};

typedef struct BountyManager BountyManager, *PBountyManager;

struct BountyManager { // PlaceHolder Structure
};

typedef struct ConversationManager ConversationManager, *PConversationManager;

struct ConversationManager { // PlaceHolder Structure
};

typedef struct PrivateCommElement PrivateCommElement, *PPrivateCommElement;

struct PrivateCommElement { // PlaceHolder Structure
};

typedef struct SensorData SensorData, *PSensorData;

struct SensorData { // PlaceHolder Structure
};

typedef struct Room Room, *PRoom;

struct Room { // PlaceHolder Structure
};

typedef struct Packet_CargoState Packet_CargoState, *PPacket_CargoState;

struct Packet_CargoState { // PlaceHolder Structure
};

typedef struct ContractCommand ContractCommand, *PContractCommand;

struct ContractCommand { // PlaceHolder Structure
};

typedef struct GameLogic GameLogic, *PGameLogic;

struct GameLogic { // PlaceHolder Structure
};

typedef struct Email Email, *PEmail;

struct Email { // PlaceHolder Structure
};

typedef struct GameData GameData, *PGameData;

struct GameData { // PlaceHolder Structure
};

typedef struct EmailManager EmailManager, *PEmailManager;

struct EmailManager { // PlaceHolder Structure
};

typedef struct ShipComponent ShipComponent, *PShipComponent;

struct ShipComponent { // PlaceHolder Structure
};

typedef struct GameCharacter GameCharacter, *PGameCharacter;

struct GameCharacter { // PlaceHolder Structure
};

typedef struct CounterMeasure CounterMeasure, *PCounterMeasure;

struct CounterMeasure { // PlaceHolder Structure
};

typedef struct MetaGameAction MetaGameAction, *PMetaGameAction;

struct MetaGameAction { // PlaceHolder Structure
};

typedef struct ModuleConfiguration ModuleConfiguration, *PModuleConfiguration;

struct ModuleConfiguration { // PlaceHolder Structure
};

typedef struct <lambda_c1b8c41cb4019640539cfd828748c4d4> <lambda_c1b8c41cb4019640539cfd828748c4d4>, *P<lambda_c1b8c41cb4019640539cfd828748c4d4>;

struct <lambda_c1b8c41cb4019640539cfd828748c4d4> { // PlaceHolder Structure
};

typedef struct ModuleRenderData ModuleRenderData, *PModuleRenderData;

struct ModuleRenderData { // PlaceHolder Structure
};

typedef struct ComponentInterface ComponentInterface, *PComponentInterface;

struct ComponentInterface { // PlaceHolder Structure
};

typedef struct JumpGateRoute JumpGateRoute, *PJumpGateRoute;

struct JumpGateRoute { // PlaceHolder Structure
};

typedef struct ComputerSystem ComputerSystem, *PComputerSystem;

struct ComputerSystem { // PlaceHolder Structure
};

typedef struct Stats Stats, *PStats;

struct Stats { // PlaceHolder Structure
};

typedef struct CargoHold CargoHold, *PCargoHold;

struct CargoHold { // PlaceHolder Structure
};

typedef struct Contract Contract, *PContract;

struct Contract { // PlaceHolder Structure
};

typedef struct CSteamAPIContext CSteamAPIContext, *PCSteamAPIContext;

struct CSteamAPIContext { // PlaceHolder Structure
};

typedef struct WeaponState WeaponState, *PWeaponState;

struct WeaponState { // PlaceHolder Structure
};

typedef struct Packet_SendMessage Packet_SendMessage, *PPacket_SendMessage;

struct Packet_SendMessage { // PlaceHolder Structure
};

typedef struct class_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_(__cdecl*&&)(Ship*,int) class_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_(__cdecl*&&)(Ship*,int), *Pclass_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_(__cdecl*&&)(Ship*,int);

struct class_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_(__cdecl*&&)(Ship*,int) { // PlaceHolder Structure
};

typedef struct WaveformPeak WaveformPeak, *PWaveformPeak;

struct WaveformPeak { // PlaceHolder Structure
};

typedef struct ModManager ModManager, *PModManager;

struct ModManager { // PlaceHolder Structure
};

typedef struct TradeEngine TradeEngine, *PTradeEngine;

struct TradeEngine { // PlaceHolder Structure
};

typedef struct LiveMessage LiveMessage, *PLiveMessage;

struct LiveMessage { // PlaceHolder Structure
};

typedef struct UIText UIText, *PUIText;

struct UIText { // PlaceHolder Structure
};

typedef struct Packet_HullState Packet_HullState, *PPacket_HullState;

struct Packet_HullState { // PlaceHolder Structure
};

typedef struct CommsManager CommsManager, *PCommsManager;

struct CommsManager { // PlaceHolder Structure
};

typedef struct ContractClass ContractClass, *PContractClass;

struct ContractClass { // PlaceHolder Structure
};

typedef struct Packet_SyncValueNumerical Packet_SyncValueNumerical, *PPacket_SyncValueNumerical;

struct Packet_SyncValueNumerical { // PlaceHolder Structure
};

typedef struct ShipSyncNode ShipSyncNode, *PShipSyncNode;

struct ShipSyncNode { // PlaceHolder Structure
};

typedef struct Sector Sector, *PSector;

struct Sector { // PlaceHolder Structure
};

typedef struct BountyClass BountyClass, *PBountyClass;

struct BountyClass { // PlaceHolder Structure
};

typedef struct FlagTimeToSet FlagTimeToSet, *PFlagTimeToSet;

struct FlagTimeToSet { // PlaceHolder Structure
};

typedef struct ConversationOption ConversationOption, *PConversationOption;

struct ConversationOption { // PlaceHolder Structure
};

typedef struct Command Command, *PCommand;

struct Command { // PlaceHolder Structure
};

typedef struct Faction Faction, *PFaction;

struct Faction { // PlaceHolder Structure
};

typedef struct PrivateCommOption PrivateCommOption, *PPrivateCommOption;

struct PrivateCommOption { // PlaceHolder Structure
};

typedef struct Good Good, *PGood;

struct Good { // PlaceHolder Structure
};

typedef struct Packet_DataRequest Packet_DataRequest, *PPacket_DataRequest;

struct Packet_DataRequest { // PlaceHolder Structure
};

typedef struct Packet_SetModuleDetails Packet_SetModuleDetails, *PPacket_SetModuleDetails;

struct Packet_SetModuleDetails { // PlaceHolder Structure
};

typedef struct ScreenTab ScreenTab, *PScreenTab;

struct ScreenTab { // PlaceHolder Structure
};

typedef struct DateTime DateTime, *PDateTime;

struct DateTime { // PlaceHolder Structure
};

typedef struct PlayerGuidedToPort PlayerGuidedToPort, *PPlayerGuidedToPort;

struct PlayerGuidedToPort { // PlaceHolder Structure
};

typedef struct SoundLet SoundLet, *PSoundLet;

struct SoundLet { // PlaceHolder Structure
};

typedef struct BootElement BootElement, *PBootElement;

struct BootElement { // PlaceHolder Structure
};

typedef struct ServerPresentationInterface ServerPresentationInterface, *PServerPresentationInterface;

struct ServerPresentationInterface { // PlaceHolder Structure
};

typedef struct FMOD_CREATESOUNDEXINFO FMOD_CREATESOUNDEXINFO, *PFMOD_CREATESOUNDEXINFO;

struct FMOD_CREATESOUNDEXINFO { // PlaceHolder Structure
};

typedef struct Packet_UpdateSensorDataAdvanced Packet_UpdateSensorDataAdvanced, *PPacket_UpdateSensorDataAdvanced;

struct Packet_UpdateSensorDataAdvanced { // PlaceHolder Structure
};

typedef struct ConsoleDamage ConsoleDamage, *PConsoleDamage;

struct ConsoleDamage { // PlaceHolder Structure
};

typedef struct Packet_SetClientInfo Packet_SetClientInfo, *PPacket_SetClientInfo;

struct Packet_SetClientInfo { // PlaceHolder Structure
};

typedef struct UpgradeCommand UpgradeCommand, *PUpgradeCommand;

struct UpgradeCommand { // PlaceHolder Structure
};

typedef struct ShipClass ShipClass, *PShipClass;

struct ShipClass { // PlaceHolder Structure
};

typedef struct Requirement Requirement, *PRequirement;

struct Requirement { // PlaceHolder Structure
};

typedef struct StackWalkerInternal StackWalkerInternal, *PStackWalkerInternal;

struct StackWalkerInternal { // PlaceHolder Structure
};

typedef struct ContractCargoInstance ContractCargoInstance, *PContractCargoInstance;

struct ContractCargoInstance { // PlaceHolder Structure
};

typedef struct TradeItemInstance TradeItemInstance, *PTradeItemInstance;

struct TradeItemInstance { // PlaceHolder Structure
};

typedef struct Conversation Conversation, *PConversation;

struct Conversation { // PlaceHolder Structure
};

typedef struct WeaponClass WeaponClass, *PWeaponClass;

struct WeaponClass { // PlaceHolder Structure
};

typedef struct ScreenLayout ScreenLayout, *PScreenLayout;

struct ScreenLayout { // PlaceHolder Structure
};

typedef struct ExtraSpawned ExtraSpawned, *PExtraSpawned;

struct ExtraSpawned { // PlaceHolder Structure
};

typedef struct Infopedia Infopedia, *PInfopedia;

struct Infopedia { // PlaceHolder Structure
};

typedef struct Packet_RunCommand Packet_RunCommand, *PPacket_RunCommand;

struct Packet_RunCommand { // PlaceHolder Structure
};

typedef struct Packet_WeaponCommand Packet_WeaponCommand, *PPacket_WeaponCommand;

struct Packet_WeaponCommand { // PlaceHolder Structure
};

typedef struct Structure Structure, *PStructure;

struct Structure { // PlaceHolder Structure
};

typedef struct UserStatsStored_t UserStatsStored_t, *PUserStatsStored_t;

struct UserStatsStored_t { // PlaceHolder Structure
};

typedef struct InputCommand InputCommand, *PInputCommand;

struct InputCommand { // PlaceHolder Structure
};

typedef struct StateModifier StateModifier, *PStateModifier;

struct StateModifier { // PlaceHolder Structure
};

typedef struct ShipMechanics ShipMechanics, *PShipMechanics;

struct ShipMechanics { // PlaceHolder Structure
};

typedef struct NavPoint NavPoint, *PNavPoint;

struct NavPoint { // PlaceHolder Structure
};

typedef struct NPCShipManager NPCShipManager, *PNPCShipManager;

struct NPCShipManager { // PlaceHolder Structure
};

typedef struct NotesManager NotesManager, *PNotesManager;

struct NotesManager { // PlaceHolder Structure
};

typedef struct FogInstance FogInstance, *PFogInstance;

struct FogInstance { // PlaceHolder Structure
};

typedef struct SaveMetaData SaveMetaData, *PSaveMetaData;

struct SaveMetaData { // PlaceHolder Structure
};

typedef struct AnimationFrames AnimationFrames, *PAnimationFrames;

struct AnimationFrames { // PlaceHolder Structure
};

typedef struct ListData ListData, *PListData;

struct ListData { // PlaceHolder Structure
};

typedef struct ContractManager ContractManager, *PContractManager;

struct ContractManager { // PlaceHolder Structure
};

typedef struct <lambda_38fb7828f6004e9a4c6a38bfc6df7f44> <lambda_38fb7828f6004e9a4c6a38bfc6df7f44>, *P<lambda_38fb7828f6004e9a4c6a38bfc6df7f44>;

struct <lambda_38fb7828f6004e9a4c6a38bfc6df7f44> { // PlaceHolder Structure
};

typedef struct Destination Destination, *PDestination;

struct Destination { // PlaceHolder Structure
};

typedef struct AnimationSet AnimationSet, *PAnimationSet;

struct AnimationSet { // PlaceHolder Structure
};

typedef struct PossibleLocation PossibleLocation, *PPossibleLocation;

struct PossibleLocation { // PlaceHolder Structure
};

typedef struct Pather Pather, *PPather;

struct Pather { // PlaceHolder Structure
};

typedef struct ComponentInterfaceInstance ComponentInterfaceInstance, *PComponentInterfaceInstance;

struct ComponentInterfaceInstance { // PlaceHolder Structure
};

typedef struct ServerUserState ServerUserState, *PServerUserState;

struct ServerUserState { // PlaceHolder Structure
};

typedef struct Packet_SetModuleBasicSettings Packet_SetModuleBasicSettings, *PPacket_SetModuleBasicSettings;

struct Packet_SetModuleBasicSettings { // PlaceHolder Structure
};

typedef struct WaveformData WaveformData, *PWaveformData;

struct WaveformData { // PlaceHolder Structure
};

typedef struct PassengerManager PassengerManager, *PPassengerManager;

struct PassengerManager { // PlaceHolder Structure
};

typedef struct Waypoint Waypoint, *PWaypoint;

struct Waypoint { // PlaceHolder Structure
};

typedef struct ShipSale ShipSale, *PShipSale;

struct ShipSale { // PlaceHolder Structure
};

typedef struct NameManager NameManager, *PNameManager;

struct NameManager { // PlaceHolder Structure
};

typedef struct UserStatsReceived_t UserStatsReceived_t, *PUserStatsReceived_t;

struct UserStatsReceived_t { // PlaceHolder Structure
};

typedef struct HackEngine HackEngine, *PHackEngine;

struct HackEngine { // PlaceHolder Structure
};

typedef struct EmailDraftSet EmailDraftSet, *PEmailDraftSet;

struct EmailDraftSet { // PlaceHolder Structure
};

typedef struct Packet_SetComponent Packet_SetComponent, *PPacket_SetComponent;

struct Packet_SetComponent { // PlaceHolder Structure
};

typedef struct MouseCursor MouseCursor, *PMouseCursor;

struct MouseCursor { // PlaceHolder Structure
};

typedef struct SoundEngine SoundEngine, *PSoundEngine;

struct SoundEngine { // PlaceHolder Structure
};

typedef struct HardwareOutput HardwareOutput, *PHardwareOutput;

struct HardwareOutput { // PlaceHolder Structure
};

typedef struct FictionData FictionData, *PFictionData;

struct FictionData { // PlaceHolder Structure
};

typedef struct Analytics Analytics, *PAnalytics;

struct Analytics { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/word - /word

typedef struct ShipModuleClass ShipModuleClass, *PShipModuleClass;

struct ShipModuleClass { // PlaceHolder Structure
};

typedef struct WeaponCommand WeaponCommand, *PWeaponCommand;

struct WeaponCommand { // PlaceHolder Structure
};

typedef struct HullDamageChance HullDamageChance, *PHullDamageChance;

struct HullDamageChance { // PlaceHolder Structure
};

typedef struct ConversationElement ConversationElement, *PConversationElement;

struct ConversationElement { // PlaceHolder Structure
};

typedef undefined std::nullptr_t;

typedef struct TerminalEngine TerminalEngine, *PTerminalEngine;

struct TerminalEngine { // PlaceHolder Structure
};

typedef struct Packet_ServerInfoAdvanced Packet_ServerInfoAdvanced, *PPacket_ServerInfoAdvanced;

struct Packet_ServerInfoAdvanced { // PlaceHolder Structure
};

typedef struct ShipChatter ShipChatter, *PShipChatter;

struct ShipChatter { // PlaceHolder Structure
};

typedef struct Mod Mod, *PMod;

struct Mod { // PlaceHolder Structure
};

typedef struct Resolution Resolution, *PResolution;

struct Resolution { // PlaceHolder Structure
};

typedef struct SensorSelectionElement SensorSelectionElement, *PSensorSelectionElement;

struct SensorSelectionElement { // PlaceHolder Structure
};

typedef struct Shop Shop, *PShop;

struct Shop { // PlaceHolder Structure
};

typedef struct Scenario Scenario, *PScenario;

struct Scenario { // PlaceHolder Structure
};

typedef struct bool_(__cdecl*&&)(Ship*,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>) bool_(__cdecl*&&)(Ship*,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>), *Pbool_(__cdecl*&&)(Ship*,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>);

struct bool_(__cdecl*&&)(Ship*,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>) { // PlaceHolder Structure
};

typedef struct HullStrength HullStrength, *PHullStrength;

struct HullStrength { // PlaceHolder Structure
};

typedef struct Bounty Bounty, *PBounty;

struct Bounty { // PlaceHolder Structure
};

typedef struct RoomEditor RoomEditor, *PRoomEditor;

struct RoomEditor { // PlaceHolder Structure
};

typedef struct Key Key, *PKey;

struct Key { // PlaceHolder Structure
};

typedef enum FMOD_RESULT {
} FMOD_RESULT;

typedef struct ShipConfiguration ShipConfiguration, *PShipConfiguration;

struct ShipConfiguration { // PlaceHolder Structure
};

typedef struct Packet_SetScenario Packet_SetScenario, *PPacket_SetScenario;

struct Packet_SetScenario { // PlaceHolder Structure
};

typedef struct <lambda_f4fd5ca79072ce85a36b5022cfb0e6d1> <lambda_f4fd5ca79072ce85a36b5022cfb0e6d1>, *P<lambda_f4fd5ca79072ce85a36b5022cfb0e6d1>;

struct <lambda_f4fd5ca79072ce85a36b5022cfb0e6d1> { // PlaceHolder Structure
};

typedef struct JumpPoint JumpPoint, *PJumpPoint;

struct JumpPoint { // PlaceHolder Structure
};

typedef struct Pool<PathNode> Pool<PathNode>, *PPool<PathNode>;

struct Pool<PathNode> { // PlaceHolder Structure
};

typedef struct PrivateCommsManager PrivateCommsManager, *PPrivateCommsManager;

struct PrivateCommsManager { // PlaceHolder Structure
};

typedef struct LogSystem LogSystem, *PLogSystem;

struct LogSystem { // PlaceHolder Structure
};

typedef struct InputConfiguration InputConfiguration, *PInputConfiguration;

struct InputConfiguration { // PlaceHolder Structure
};

typedef struct <lambda_ab246b20b9526e2ef7792587e4298a77> <lambda_ab246b20b9526e2ef7792587e4298a77>, *P<lambda_ab246b20b9526e2ef7792587e4298a77>;

struct <lambda_ab246b20b9526e2ef7792587e4298a77> { // PlaceHolder Structure
};

typedef struct CharacterLocation CharacterLocation, *PCharacterLocation;

struct CharacterLocation { // PlaceHolder Structure
};

typedef struct TextField TextField, *PTextField;

struct TextField { // PlaceHolder Structure
};

typedef struct ShipInstance ShipInstance, *PShipInstance;

struct ShipInstance { // PlaceHolder Structure
};

typedef struct PrivateComm PrivateComm, *PPrivateComm;

struct PrivateComm { // PlaceHolder Structure
};

typedef struct EngineeringSlotLocation EngineeringSlotLocation, *PEngineeringSlotLocation;

struct EngineeringSlotLocation { // PlaceHolder Structure
};

typedef struct ShipModule ShipModule, *PShipModule;

struct ShipModule { // PlaceHolder Structure
};

typedef struct StackWalker StackWalker, *PStackWalker;

struct StackWalker { // PlaceHolder Structure
};

typedef struct Passenger Passenger, *PPassenger;

struct Passenger { // PlaceHolder Structure
};

typedef struct CargoPod CargoPod, *PCargoPod;

struct CargoPod { // PlaceHolder Structure
};

typedef struct ServerMenu ServerMenu, *PServerMenu;

struct ServerMenu { // PlaceHolder Structure
};

typedef struct SpaceStation SpaceStation, *PSpaceStation;

struct SpaceStation { // PlaceHolder Structure
};

typedef struct ScreenInterface ScreenInterface, *PScreenInterface;

struct ScreenInterface { // PlaceHolder Structure
};

typedef struct SyntheticObjectCargoInstance SyntheticObjectCargoInstance, *PSyntheticObjectCargoInstance;

struct SyntheticObjectCargoInstance { // PlaceHolder Structure
};

typedef struct EmailInstance EmailInstance, *PEmailInstance;

struct EmailInstance { // PlaceHolder Structure
};

typedef struct Packet_SetGoLiveState Packet_SetGoLiveState, *PPacket_SetGoLiveState;

struct Packet_SetGoLiveState { // PlaceHolder Structure
};

typedef struct JunkManager JunkManager, *PJunkManager;

struct JunkManager { // PlaceHolder Structure
};

typedef struct PassengerInstance PassengerInstance, *PPassengerInstance;

struct PassengerInstance { // PlaceHolder Structure
};

typedef struct ShipChatterData ShipChatterData, *PShipChatterData;

struct ShipChatterData { // PlaceHolder Structure
};

typedef struct TabletTab TabletTab, *PTabletTab;

struct TabletTab { // PlaceHolder Structure
};

typedef struct MenuItem MenuItem, *PMenuItem;

struct MenuItem { // PlaceHolder Structure
};

typedef struct ComponentClass ComponentClass, *PComponentClass;

struct ComponentClass { // PlaceHolder Structure
};

typedef struct DataRequest DataRequest, *PDataRequest;

struct DataRequest { // PlaceHolder Structure
};

typedef struct SensorDataStates SensorDataStates, *PSensorDataStates;

struct SensorDataStates { // PlaceHolder Structure
};

typedef struct StellarObject StellarObject, *PStellarObject;

struct StellarObject { // PlaceHolder Structure
};

typedef struct NM_MapObject NM_MapObject, *PNM_MapObject;

struct NM_MapObject { // PlaceHolder Structure
};

typedef struct SaveHandler SaveHandler, *PSaveHandler;

struct SaveHandler { // PlaceHolder Structure
};

typedef struct Zone Zone, *PZone;

struct Zone { // PlaceHolder Structure
};

typedef struct TopBar TopBar, *PTopBar;

struct TopBar { // PlaceHolder Structure
};

typedef struct Article Article, *PArticle;

struct Article { // PlaceHolder Structure
};

typedef struct WaypointState WaypointState, *PWaypointState;

struct WaypointState { // PlaceHolder Structure
};

typedef struct SyncNode SyncNode, *PSyncNode;

struct SyncNode { // PlaceHolder Structure
};

typedef struct LineData LineData, *PLineData;

struct LineData { // PlaceHolder Structure
};

typedef struct CommsCommand CommsCommand, *PCommsCommand;

struct CommsCommand { // PlaceHolder Structure
};

typedef struct RoomCharacter RoomCharacter, *PRoomCharacter;

struct RoomCharacter { // PlaceHolder Structure
};

typedef struct CharacterAnimationManager CharacterAnimationManager, *PCharacterAnimationManager;

struct CharacterAnimationManager { // PlaceHolder Structure
};

typedef struct GLContextAttrs GLContextAttrs, *PGLContextAttrs;

struct GLContextAttrs { // PlaceHolder Structure
};

typedef struct ClientInfo ClientInfo, *PClientInfo;

struct ClientInfo { // PlaceHolder Structure
};

typedef struct ScreenData ScreenData, *PScreenData;

struct ScreenData { // PlaceHolder Structure
};

typedef struct Message Message, *PMessage;

struct Message { // PlaceHolder Structure
};

typedef struct Dice Dice, *PDice;

struct Dice { // PlaceHolder Structure
};

typedef struct Packet_ServerAdmin Packet_ServerAdmin, *PPacket_ServerAdmin;

struct Packet_ServerAdmin { // PlaceHolder Structure
};

typedef struct ServerMenuItem ServerMenuItem, *PServerMenuItem;

struct ServerMenuItem { // PlaceHolder Structure
};

typedef struct <unnamed-type-m_shipState> <unnamed-type-m_shipState>, *P<unnamed-type-m_shipState>;

struct <unnamed-type-m_shipState> { // PlaceHolder Structure
};

typedef struct <unnamed-type-m_currentServerDetails> <unnamed-type-m_currentServerDetails>, *P<unnamed-type-m_currentServerDetails>;

struct <unnamed-type-m_currentServerDetails> { // PlaceHolder Structure
};

typedef enum LogPriority {
} LogPriority;

typedef enum ShipDataInputType {
} ShipDataInputType;

typedef enum CaptainStyle {
} CaptainStyle;

typedef enum GoodContainmentOption {
} GoodContainmentOption;

typedef struct <unnamed-type-surrounds> <unnamed-type-surrounds>, *P<unnamed-type-surrounds>;

struct <unnamed-type-surrounds> { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/EMetaGameAction/MetaGameAction - /Demangler/MetaGameAction

typedef enum ShipLook {
} ShipLook;

typedef struct CallstackEntry CallstackEntry, *PCallstackEntry;

struct CallstackEntry { // PlaceHolder Structure
};

typedef enum CallstackEntryType {
} CallstackEntryType;

typedef enum ScenarioCategory {
} ScenarioCategory;

typedef enum CraftPurpose {
} CraftPurpose;

typedef enum ShipDataType {
} ShipDataType;

typedef enum ComponentCategory {
} ComponentCategory;

typedef struct map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,float,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>_> map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,float,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>_>, *Pmap<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,float,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>_>;

struct map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,float,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>_> { // PlaceHolder Structure
};

typedef struct allocator<InputCommand> allocator<InputCommand>, *Pallocator<InputCommand>;

struct allocator<InputCommand> { // PlaceHolder Structure
};

typedef struct allocator<BootElement> allocator<BootElement>, *Pallocator<BootElement>;

struct allocator<BootElement> { // PlaceHolder Structure
};

typedef struct _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>_>_> _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>_>_>, *P_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>_>_>;

struct _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>_>_> { // PlaceHolder Structure
};

typedef struct _Func_class<bool,Ship*,double,double,double> _Func_class<bool,Ship*,double,double,double>, *P_Func_class<bool,Ship*,double,double,double>;

struct _Func_class<bool,Ship*,double,double,double> { // PlaceHolder Structure
};

typedef struct pair<cocos2d::EventKeyboard::KeyCode_const_,char> pair<cocos2d::EventKeyboard::KeyCode_const_,char>, *Ppair<cocos2d::EventKeyboard::KeyCode_const_,char>;

struct pair<cocos2d::EventKeyboard::KeyCode_const_,char> { // PlaceHolder Structure
};

typedef struct pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>_>_>,bool> pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>_>_>,bool>, *Ppair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>_>_>,bool>;

struct pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>_>_>,bool> { // PlaceHolder Structure
};

typedef struct _Tree_node<class_PathNode*,void*> _Tree_node<class_PathNode*,void*>, *P_Tree_node<class_PathNode*,void*>;

struct _Tree_node<class_PathNode*,void*> { // PlaceHolder Structure
};

typedef struct vector<HullDamageChance,std::allocator<HullDamageChance>_> vector<HullDamageChance,std::allocator<HullDamageChance>_>, *Pvector<HullDamageChance,std::allocator<HullDamageChance>_>;

struct vector<HullDamageChance,std::allocator<HullDamageChance>_> { // PlaceHolder Structure
};

typedef struct allocator<ListData> allocator<ListData>, *Pallocator<ListData>;

struct allocator<ListData> { // PlaceHolder Structure
};

typedef struct vector<cocos2d::Touch*,std::allocator<cocos2d::Touch*>_> vector<cocos2d::Touch*,std::allocator<cocos2d::Touch*>_>, *Pvector<cocos2d::Touch*,std::allocator<cocos2d::Touch*>_>;

struct vector<cocos2d::Touch*,std::allocator<cocos2d::Touch*>_> { // PlaceHolder Structure
};

typedef struct tuple<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&&> tuple<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&&>, *Ptuple<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&&>;

struct tuple<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&&> { // PlaceHolder Structure
};

typedef struct map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_>_> map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_>_>, *Pmap<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_>_>;

struct map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_>_> { // PlaceHolder Structure
};

typedef struct _Uninitialized_backout_al<CommsCommand*,std::allocator<CommsCommand>_> _Uninitialized_backout_al<CommsCommand*,std::allocator<CommsCommand>_>, *P_Uninitialized_backout_al<CommsCommand*,std::allocator<CommsCommand>_>;

struct _Uninitialized_backout_al<CommsCommand*,std::allocator<CommsCommand>_> { // PlaceHolder Structure
};

typedef struct vector<CommsCommand,std::allocator<CommsCommand>_> vector<CommsCommand,std::allocator<CommsCommand>_>, *Pvector<CommsCommand,std::allocator<CommsCommand>_>;

struct vector<CommsCommand,std::allocator<CommsCommand>_> { // PlaceHolder Structure
};

typedef struct _Func_base<void,cocos2d::EventKeyboard::KeyCode,cocos2d::Event*> _Func_base<void,cocos2d::EventKeyboard::KeyCode,cocos2d::Event*>, *P_Func_base<void,cocos2d::EventKeyboard::KeyCode,cocos2d::Event*>;

struct _Func_base<void,cocos2d::EventKeyboard::KeyCode,cocos2d::Event*> { // PlaceHolder Structure
};

typedef struct vector<cocos2d::Vec2,std::allocator<cocos2d::Vec2>_> vector<cocos2d::Vec2,std::allocator<cocos2d::Vec2>_>, *Pvector<cocos2d::Vec2,std::allocator<cocos2d::Vec2>_>;

struct vector<cocos2d::Vec2,std::allocator<cocos2d::Vec2>_> { // PlaceHolder Structure
};

typedef struct _String_iterator<std::_String_val<std::_Simple_types<char>_>_> _String_iterator<std::_String_val<std::_Simple_types<char>_>_>, *P_String_iterator<std::_String_val<std::_Simple_types<char>_>_>;

struct _String_iterator<std::_String_val<std::_Simple_types<char>_>_> { // PlaceHolder Structure
};

typedef struct vector<WaveformPeak,std::allocator<WaveformPeak>_> vector<WaveformPeak,std::allocator<WaveformPeak>_>, *Pvector<WaveformPeak,std::allocator<WaveformPeak>_>;

struct vector<WaveformPeak,std::allocator<WaveformPeak>_> { // PlaceHolder Structure
};

typedef struct _Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>,void*> _Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>,void*>, *P_Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>,void*>;

struct _Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>,void*> { // PlaceHolder Structure
};

typedef struct _Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>,0>_> _Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>,0>_>, *P_Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>,0>_>;

struct _Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>,0>_> { // PlaceHolder Structure
};

typedef struct _Func_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,Ship*,int> _Func_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,Ship*,int>, *P_Func_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,Ship*,int>;

struct _Func_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,Ship*,int> { // PlaceHolder Structure
};

typedef struct _Binder<std::_Unforced,void_(__thiscall_Screen_UpgradeTerminal::*)(void),Screen_UpgradeTerminal*> _Binder<std::_Unforced,void_(__thiscall_Screen_UpgradeTerminal::*)(void),Screen_UpgradeTerminal*>, *P_Binder<std::_Unforced,void_(__thiscall_Screen_UpgradeTerminal::*)(void),Screen_UpgradeTerminal*>;

struct _Binder<std::_Unforced,void_(__thiscall_Screen_UpgradeTerminal::*)(void),Screen_UpgradeTerminal*> { // PlaceHolder Structure
};

typedef struct _Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_>,0>_> _Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_>,0>_>, *P_Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_>,0>_>;

struct _Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_>,0>_> { // PlaceHolder Structure
};

typedef struct _String_iterator<class_std::_String_val<struct_std::_Simple_types<char>_>_> _String_iterator<class_std::_String_val<struct_std::_Simple_types<char>_>_>, *P_String_iterator<class_std::_String_val<struct_std::_Simple_types<char>_>_>;

struct _String_iterator<class_std::_String_val<struct_std::_Simple_types<char>_>_> { // PlaceHolder Structure
};

typedef struct _Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> _Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>, *P_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>;

struct _Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> { // PlaceHolder Structure
};

typedef struct _Binder<std::_Unforced,void_(__thiscall_PresentationInterface::*)(cocos2d::Event*),PresentationInterface*,std::_Ph<1>_const&> _Binder<std::_Unforced,void_(__thiscall_PresentationInterface::*)(cocos2d::Event*),PresentationInterface*,std::_Ph<1>_const&>, *P_Binder<std::_Unforced,void_(__thiscall_PresentationInterface::*)(cocos2d::Event*),PresentationInterface*,std::_Ph<1>_const&>;

struct _Binder<std::_Unforced,void_(__thiscall_PresentationInterface::*)(cocos2d::Event*),PresentationInterface*,std::_Ph<1>_const&> { // PlaceHolder Structure
};

typedef struct _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>, *P_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>;

struct _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> { // PlaceHolder Structure
};

typedef struct function<void___cdecl(class_cocos2d::EventMouse*)> function<void___cdecl(class_cocos2d::EventMouse*)>, *Pfunction<void___cdecl(class_cocos2d::EventMouse*)>;

struct function<void___cdecl(class_cocos2d::EventMouse*)> { // PlaceHolder Structure
};

typedef struct function<class_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>___cdecl(Ship*,int)> function<class_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>___cdecl(Ship*,int)>, *Pfunction<class_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>___cdecl(Ship*,int)>;

struct function<class_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>___cdecl(Ship*,int)> { // PlaceHolder Structure
};

typedef struct _Tree_node<PathNode*,void*> _Tree_node<PathNode*,void*>, *P_Tree_node<PathNode*,void*>;

struct _Tree_node<PathNode*,void*> { // PlaceHolder Structure
};

typedef struct _Binder<std::_Unforced,void_(__thiscall_Screen_Terminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_Terminal*,std::_Ph<1>_const&,std::_Ph<2>_const&> _Binder<std::_Unforced,void_(__thiscall_Screen_Terminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_Terminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>, *P_Binder<std::_Unforced,void_(__thiscall_Screen_Terminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_Terminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>;

struct _Binder<std::_Unforced,void_(__thiscall_Screen_Terminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_Terminal*,std::_Ph<1>_const&,std::_Ph<2>_const&> { // PlaceHolder Structure
};

typedef struct function<bool___cdecl(Ship*,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>)> function<bool___cdecl(Ship*,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>)>, *Pfunction<bool___cdecl(Ship*,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>)>;

struct function<bool___cdecl(Ship*,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>)> { // PlaceHolder Structure
};

typedef struct vector<class_MusicTrack*,class_std::allocator<class_MusicTrack*>_> vector<class_MusicTrack*,class_std::allocator<class_MusicTrack*>_>, *Pvector<class_MusicTrack*,class_std::allocator<class_MusicTrack*>_>;

struct vector<class_MusicTrack*,class_std::allocator<class_MusicTrack*>_> { // PlaceHolder Structure
};

typedef struct vector<EDifficultyMode::DifficultyMode,std::allocator<EDifficultyMode::DifficultyMode>_> vector<EDifficultyMode::DifficultyMode,std::allocator<EDifficultyMode::DifficultyMode>_>, *Pvector<EDifficultyMode::DifficultyMode,std::allocator<EDifficultyMode::DifficultyMode>_>;

struct vector<EDifficultyMode::DifficultyMode,std::allocator<EDifficultyMode::DifficultyMode>_> { // PlaceHolder Structure
};

typedef struct _Tree_node<std::pair<int_const_,int>,void*> _Tree_node<std::pair<int_const_,int>,void*>, *P_Tree_node<std::pair<int_const_,int>,void*>;

struct _Tree_node<std::pair<int_const_,int>,void*> { // PlaceHolder Structure
};

typedef struct allocator<Shop> allocator<Shop>, *Pallocator<Shop>;

struct allocator<Shop> { // PlaceHolder Structure
};

typedef struct _Binder<std::_Unforced,void_(__thiscall_Screen_ContractTerminal::*)(void),Screen_ContractTerminal*> _Binder<std::_Unforced,void_(__thiscall_Screen_ContractTerminal::*)(void),Screen_ContractTerminal*>, *P_Binder<std::_Unforced,void_(__thiscall_Screen_ContractTerminal::*)(void),Screen_ContractTerminal*>;

struct _Binder<std::_Unforced,void_(__thiscall_Screen_ContractTerminal::*)(void),Screen_ContractTerminal*> { // PlaceHolder Structure
};

typedef struct pair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,FogInstance*>_>_>_>,std::_Tree_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<int_const_,class_FogInstance*>_>_>_>_> pair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,FogInstance*>_>_>_>,std::_Tree_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<int_const_,class_FogInstance*>_>_>_>_>, *Ppair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,FogInstance*>_>_>_>,std::_Tree_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<int_const_,class_FogInstance*>_>_>_>_>;

struct pair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,FogInstance*>_>_>_>,std::_Tree_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<int_const_,class_FogInstance*>_>_>_>_> { // PlaceHolder Structure
};

typedef struct _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_> _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>, *P_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>;

struct _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_> { // PlaceHolder Structure
};

typedef struct _Tree_node<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>,void*> _Tree_node<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>,void*>, *P_Tree_node<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>,void*>;

struct _Tree_node<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>,void*> { // PlaceHolder Structure
};

typedef struct _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_> _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_>, *P_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_>;

struct _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_> { // PlaceHolder Structure
};

typedef struct function<void___cdecl(enum_cocos2d::EventKeyboard::KeyCode,class_cocos2d::Event*)> function<void___cdecl(enum_cocos2d::EventKeyboard::KeyCode,class_cocos2d::Event*)>, *Pfunction<void___cdecl(enum_cocos2d::EventKeyboard::KeyCode,class_cocos2d::Event*)>;

struct function<void___cdecl(enum_cocos2d::EventKeyboard::KeyCode,class_cocos2d::Event*)> { // PlaceHolder Structure
};

typedef struct _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<cocos2d::EventKeyboard::KeyCode_const_,char>_>_>_> _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<cocos2d::EventKeyboard::KeyCode_const_,char>_>_>_>, *P_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<cocos2d::EventKeyboard::KeyCode_const_,char>_>_>_>;

struct _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<cocos2d::EventKeyboard::KeyCode_const_,char>_>_>_> { // PlaceHolder Structure
};

typedef struct _Func_base<bool,Ship*,int,int,int> _Func_base<bool,Ship*,int,int,int>, *P_Func_base<bool,Ship*,int,int,int>;

struct _Func_base<bool,Ship*,int,int,int> { // PlaceHolder Structure
};

typedef struct _Tree<class_std::_Tmap_traits<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,struct_std::less<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>,class_std::allocator<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>,0>_> _Tree<class_std::_Tmap_traits<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,struct_std::less<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>,class_std::allocator<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>,0>_>, *P_Tree<class_std::_Tmap_traits<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,struct_std::less<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>,class_std::allocator<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>,0>_>;

struct _Tree<class_std::_Tmap_traits<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,struct_std::less<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>,class_std::allocator<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>,0>_> { // PlaceHolder Structure
};

typedef struct _Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>,0>_> _Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>,0>_>, *P_Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>,0>_>;

struct _Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>,0>_> { // PlaceHolder Structure
};

typedef struct _Tree<std::_Tmap_traits<int,FogInstance*,std::less<int>,std::allocator<std::pair<int_const_,FogInstance*>_>,0>_> _Tree<std::_Tmap_traits<int,FogInstance*,std::less<int>,std::allocator<std::pair<int_const_,FogInstance*>_>,0>_>, *P_Tree<std::_Tmap_traits<int,FogInstance*,std::less<int>,std::allocator<std::pair<int_const_,FogInstance*>_>,0>_>;

struct _Tree<std::_Tmap_traits<int,FogInstance*,std::less<int>,std::allocator<std::pair<int_const_,FogInstance*>_>,0>_> { // PlaceHolder Structure
};

typedef struct function<void___cdecl(class_Menu*)> function<void___cdecl(class_Menu*)>, *Pfunction<void___cdecl(class_Menu*)>;

struct function<void___cdecl(class_Menu*)> { // PlaceHolder Structure
};

typedef struct vector<cocos2d::Rect,std::allocator<cocos2d::Rect>_> vector<cocos2d::Rect,std::allocator<cocos2d::Rect>_>, *Pvector<cocos2d::Rect,std::allocator<cocos2d::Rect>_>;

struct vector<cocos2d::Rect,std::allocator<cocos2d::Rect>_> { // PlaceHolder Structure
};

typedef struct vector<ScreenTab,std::allocator<ScreenTab>_> vector<ScreenTab,std::allocator<ScreenTab>_>, *Pvector<ScreenTab,std::allocator<ScreenTab>_>;

struct vector<ScreenTab,std::allocator<ScreenTab>_> { // PlaceHolder Structure
};

typedef struct allocator<CameraPos> allocator<CameraPos>, *Pallocator<CameraPos>;

struct allocator<CameraPos> { // PlaceHolder Structure
};

typedef struct forward_iterator_tag forward_iterator_tag, *Pforward_iterator_tag;

struct forward_iterator_tag { // PlaceHolder Structure
};

typedef struct _Uninitialized_backout_al<Requirement*,std::allocator<Requirement>_> _Uninitialized_backout_al<Requirement*,std::allocator<Requirement>_>, *P_Uninitialized_backout_al<Requirement*,std::allocator<Requirement>_>;

struct _Uninitialized_backout_al<Requirement*,std::allocator<Requirement>_> { // PlaceHolder Structure
};

typedef struct pair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>_>_>,std::_Tree_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,class_std::vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_>_>_>_> pair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>_>_>,std::_Tree_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,class_std::vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_>_>_>_>, *Ppair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>_>_>,std::_Tree_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,class_std::vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_>_>_>_>;

struct pair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>_>_>,std::_Tree_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,class_std::vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_>_>_>_> { // PlaceHolder Structure
};

typedef struct _Uninitialized_backout_al<JumpGateRoute*,std::allocator<JumpGateRoute>_> _Uninitialized_backout_al<JumpGateRoute*,std::allocator<JumpGateRoute>_>, *P_Uninitialized_backout_al<JumpGateRoute*,std::allocator<JumpGateRoute>_>;

struct _Uninitialized_backout_al<JumpGateRoute*,std::allocator<JumpGateRoute>_> { // PlaceHolder Structure
};

typedef struct pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>_>_>,bool> pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>_>_>,bool>, *Ppair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>_>_>,bool>;

struct pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>_>_>,bool> { // PlaceHolder Structure
};

typedef struct vector<EngineeringSlotLocation,std::allocator<EngineeringSlotLocation>_> vector<EngineeringSlotLocation,std::allocator<EngineeringSlotLocation>_>, *Pvector<EngineeringSlotLocation,std::allocator<EngineeringSlotLocation>_>;

struct vector<EngineeringSlotLocation,std::allocator<EngineeringSlotLocation>_> { // PlaceHolder Structure
};

typedef struct function<void___cdecl(Menu*)> function<void___cdecl(Menu*)>, *Pfunction<void___cdecl(Menu*)>;

struct function<void___cdecl(Menu*)> { // PlaceHolder Structure
};

typedef struct _Binder<std::_Unforced,void_(__thiscall_Screen_WeaponTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_WeaponTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&> _Binder<std::_Unforced,void_(__thiscall_Screen_WeaponTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_WeaponTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>, *P_Binder<std::_Unforced,void_(__thiscall_Screen_WeaponTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_WeaponTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>;

struct _Binder<std::_Unforced,void_(__thiscall_Screen_WeaponTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_WeaponTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&> { // PlaceHolder Structure
};

typedef struct _Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>,0>_> _Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>,0>_>, *P_Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>,0>_>;

struct _Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>,0>_> { // PlaceHolder Structure
};

typedef struct _Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,Variable>,void*> _Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,Variable>,void*>, *P_Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,Variable>,void*>;

struct _Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,Variable>,void*> { // PlaceHolder Structure
};

typedef struct _Uninitialized_backout_al<PrivateCommOption*,std::allocator<PrivateCommOption>_> _Uninitialized_backout_al<PrivateCommOption*,std::allocator<PrivateCommOption>_>, *P_Uninitialized_backout_al<PrivateCommOption*,std::allocator<PrivateCommOption>_>;

struct _Uninitialized_backout_al<PrivateCommOption*,std::allocator<PrivateCommOption>_> { // PlaceHolder Structure
};

typedef struct map<int,int,std::less<int>,std::allocator<std::pair<int_const_,int>_>_> map<int,int,std::less<int>,std::allocator<std::pair<int_const_,int>_>_>, *Pmap<int,int,std::less<int>,std::allocator<std::pair<int_const_,int>_>_>;

struct map<int,int,std::less<int>,std::allocator<std::pair<int_const_,int>_>_> { // PlaceHolder Structure
};

typedef struct _Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>,0>_> _Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>,0>_>, *P_Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>,0>_>;

struct _Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>,0>_> { // PlaceHolder Structure
};

typedef struct vector<CameraPos,std::allocator<CameraPos>_> vector<CameraPos,std::allocator<CameraPos>_>, *Pvector<CameraPos,std::allocator<CameraPos>_>;

struct vector<CameraPos,std::allocator<CameraPos>_> { // PlaceHolder Structure
};

typedef struct _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_> _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_>, *P_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_>;

struct _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_> { // PlaceHolder Structure
};

typedef struct _Func_base<bool,Ship*,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> _Func_base<bool,Ship*,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>, *P_Func_base<bool,Ship*,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>;

struct _Func_base<bool,Ship*,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> { // PlaceHolder Structure
};

typedef struct _Tree<std::_Tmap_traits<cocos2d::EventKeyboard::KeyCode,char,std::less<cocos2d::EventKeyboard::KeyCode>,std::allocator<std::pair<cocos2d::EventKeyboard::KeyCode_const_,char>_>,0>_> _Tree<std::_Tmap_traits<cocos2d::EventKeyboard::KeyCode,char,std::less<cocos2d::EventKeyboard::KeyCode>,std::allocator<std::pair<cocos2d::EventKeyboard::KeyCode_const_,char>_>,0>_>, *P_Tree<std::_Tmap_traits<cocos2d::EventKeyboard::KeyCode,char,std::less<cocos2d::EventKeyboard::KeyCode>,std::allocator<std::pair<cocos2d::EventKeyboard::KeyCode_const_,char>_>,0>_>;

struct _Tree<std::_Tmap_traits<cocos2d::EventKeyboard::KeyCode,char,std::less<cocos2d::EventKeyboard::KeyCode>,std::allocator<std::pair<cocos2d::EventKeyboard::KeyCode_const_,char>_>,0>_> { // PlaceHolder Structure
};

typedef struct _Func_base<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> _Func_base<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>, *P_Func_base<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>;

struct _Func_base<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> { // PlaceHolder Structure
};

typedef struct vector<BootElement,std::allocator<BootElement>_> vector<BootElement,std::allocator<BootElement>_>, *Pvector<BootElement,std::allocator<BootElement>_>;

struct vector<BootElement,std::allocator<BootElement>_> { // PlaceHolder Structure
};

typedef struct _Tree_node<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,void*> _Tree_node<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,void*>, *P_Tree_node<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,void*>;

struct _Tree_node<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,void*> { // PlaceHolder Structure
};

typedef struct _Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_> _Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>, *P_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>;

struct _Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_> { // PlaceHolder Structure
};

typedef struct _Binder<std::_Unforced,void_(__thiscall_Screen_PC::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_PC*,std::_Ph<1>_const&,std::_Ph<2>_const&> _Binder<std::_Unforced,void_(__thiscall_Screen_PC::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_PC*,std::_Ph<1>_const&,std::_Ph<2>_const&>, *P_Binder<std::_Unforced,void_(__thiscall_Screen_PC::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_PC*,std::_Ph<1>_const&,std::_Ph<2>_const&>;

struct _Binder<std::_Unforced,void_(__thiscall_Screen_PC::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_PC*,std::_Ph<1>_const&,std::_Ph<2>_const&> { // PlaceHolder Structure
};

typedef struct function<void___cdecl(class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>)> function<void___cdecl(class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>)>, *Pfunction<void___cdecl(class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>)>;

struct function<void___cdecl(class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>)> { // PlaceHolder Structure
};

typedef struct _Binder<std::_Unforced,void_(__thiscall_Screen_WeaponTerminal::*)(void),Screen_WeaponTerminal*> _Binder<std::_Unforced,void_(__thiscall_Screen_WeaponTerminal::*)(void),Screen_WeaponTerminal*>, *P_Binder<std::_Unforced,void_(__thiscall_Screen_WeaponTerminal::*)(void),Screen_WeaponTerminal*>;

struct _Binder<std::_Unforced,void_(__thiscall_Screen_WeaponTerminal::*)(void),Screen_WeaponTerminal*> { // PlaceHolder Structure
};

typedef struct map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>_> map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>_>, *Pmap<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>_>;

struct map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>_> { // PlaceHolder Structure
};

typedef struct _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<cocos2d::EventKeyboard::KeyCode_const_,char>_>_>_> _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<cocos2d::EventKeyboard::KeyCode_const_,char>_>_>_>, *P_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<cocos2d::EventKeyboard::KeyCode_const_,char>_>_>_>;

struct _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<cocos2d::EventKeyboard::KeyCode_const_,char>_>_>_> { // PlaceHolder Structure
};

typedef struct _Func_class<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> _Func_class<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>, *P_Func_class<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>;

struct _Func_class<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> { // PlaceHolder Structure
};

typedef struct _Uninitialized_backout_al<Destination*,std::allocator<Destination>_> _Uninitialized_backout_al<Destination*,std::allocator<Destination>_>, *P_Uninitialized_backout_al<Destination*,std::allocator<Destination>_>;

struct _Uninitialized_backout_al<Destination*,std::allocator<Destination>_> { // PlaceHolder Structure
};

typedef struct _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,FogInstance*>_>_>_> _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,FogInstance*>_>_>_>, *P_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,FogInstance*>_>_>_>;

struct _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,FogInstance*>_>_>_> { // PlaceHolder Structure
};

typedef struct _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,int>_>_>_> _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,int>_>_>_>, *P_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,int>_>_>_>;

struct _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,int>_>_>_> { // PlaceHolder Structure
};

typedef struct _Func_class<bool,class_Ship*,double,double,double> _Func_class<bool,class_Ship*,double,double,double>, *P_Func_class<bool,class_Ship*,double,double,double>;

struct _Func_class<bool,class_Ship*,double,double,double> { // PlaceHolder Structure
};

typedef struct function<void___cdecl(void)> function<void___cdecl(void)>, *Pfunction<void___cdecl(void)>;

struct function<void___cdecl(void)> { // PlaceHolder Structure
};

typedef struct _Binder<std::_Unforced,void_(__thiscall_Screen_UpgradeTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_UpgradeTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&> _Binder<std::_Unforced,void_(__thiscall_Screen_UpgradeTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_UpgradeTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>, *P_Binder<std::_Unforced,void_(__thiscall_Screen_UpgradeTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_UpgradeTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>;

struct _Binder<std::_Unforced,void_(__thiscall_Screen_UpgradeTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_UpgradeTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&> { // PlaceHolder Structure
};

typedef struct _Uninitialized_backout_al<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>*,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> _Uninitialized_backout_al<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>*,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>, *P_Uninitialized_backout_al<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>*,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>;

struct _Uninitialized_backout_al<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>*,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> { // PlaceHolder Structure
};

typedef struct _Tree<std::_Tmap_traits<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<int>,std::allocator<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,0>_> _Tree<std::_Tmap_traits<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<int>,std::allocator<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,0>_>, *P_Tree<std::_Tmap_traits<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<int>,std::allocator<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,0>_>;

struct _Tree<std::_Tmap_traits<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<int>,std::allocator<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,0>_> { // PlaceHolder Structure
};

typedef struct _Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_>,0>_> _Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_>,0>_>, *P_Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_>,0>_>;

struct _Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_>,0>_> { // PlaceHolder Structure
};

typedef struct vector<Shop,std::allocator<Shop>_> vector<Shop,std::allocator<Shop>_>, *Pvector<Shop,std::allocator<Shop>_>;

struct vector<Shop,std::allocator<Shop>_> { // PlaceHolder Structure
};

typedef struct _One_then_variadic_args_t _One_then_variadic_args_t, *P_One_then_variadic_args_t;

struct _One_then_variadic_args_t { // PlaceHolder Structure
};

typedef struct _Func_base<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> _Func_base<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>, *P_Func_base<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>;

struct _Func_base<void,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> { // PlaceHolder Structure
};

typedef struct tuple<int&&> tuple<int&&>, *Ptuple<int&&>;

struct tuple<int&&> { // PlaceHolder Structure
};

typedef struct _Func_base<void,cocos2d::EventMouse*> _Func_base<void,cocos2d::EventMouse*>, *P_Func_base<void,cocos2d::EventMouse*>;

struct _Func_base<void,cocos2d::EventMouse*> { // PlaceHolder Structure
};

typedef struct vector<JunkContent*,std::allocator<JunkContent*>_> vector<JunkContent*,std::allocator<JunkContent*>_>, *Pvector<JunkContent*,std::allocator<JunkContent*>_>;

struct vector<JunkContent*,std::allocator<JunkContent*>_> { // PlaceHolder Structure
};

typedef struct vector<JumpPoint*,std::allocator<JumpPoint*>_> vector<JumpPoint*,std::allocator<JumpPoint*>_>, *Pvector<JumpPoint*,std::allocator<JumpPoint*>_>;

struct vector<JumpPoint*,std::allocator<JumpPoint*>_> { // PlaceHolder Structure
};

typedef struct _Uninitialized_backout_al<InputCommand*,std::allocator<InputCommand>_> _Uninitialized_backout_al<InputCommand*,std::allocator<InputCommand>_>, *P_Uninitialized_backout_al<InputCommand*,std::allocator<InputCommand>_>;

struct _Uninitialized_backout_al<InputCommand*,std::allocator<InputCommand>_> { // PlaceHolder Structure
};

typedef struct _Binder<std::_Unforced,void_(__thiscall_PresentationInterface::*)(cocos2d::EventKeyboard::KeyCode,cocos2d::Event*),PresentationInterface*,std::_Ph<1>_const&,std::_Ph<2>_const&> _Binder<std::_Unforced,void_(__thiscall_PresentationInterface::*)(cocos2d::EventKeyboard::KeyCode,cocos2d::Event*),PresentationInterface*,std::_Ph<1>_const&,std::_Ph<2>_const&>, *P_Binder<std::_Unforced,void_(__thiscall_PresentationInterface::*)(cocos2d::EventKeyboard::KeyCode,cocos2d::Event*),PresentationInterface*,std::_Ph<1>_const&,std::_Ph<2>_const&>;

struct _Binder<std::_Unforced,void_(__thiscall_PresentationInterface::*)(cocos2d::EventKeyboard::KeyCode,cocos2d::Event*),PresentationInterface*,std::_Ph<1>_const&,std::_Ph<2>_const&> { // PlaceHolder Structure
};

typedef struct allocator<word> allocator<word>, *Pallocator<word>;

struct allocator<word> { // PlaceHolder Structure
};

typedef struct allocator<DockProcessElement> allocator<DockProcessElement>, *Pallocator<DockProcessElement>;

struct allocator<DockProcessElement> { // PlaceHolder Structure
};

typedef struct _Tree_node<std::pair<int_const_,FogInstance*>,void*> _Tree_node<std::pair<int_const_,FogInstance*>,void*>, *P_Tree_node<std::pair<int_const_,FogInstance*>,void*>;

struct _Tree_node<std::pair<int_const_,FogInstance*>,void*> { // PlaceHolder Structure
};

typedef struct _Func_base<void> _Func_base<void>, *P_Func_base<void>;

struct _Func_base<void> { // PlaceHolder Structure
};

typedef struct vector<JumpGateRoute,std::allocator<JumpGateRoute>_> vector<JumpGateRoute,std::allocator<JumpGateRoute>_>, *Pvector<JumpGateRoute,std::allocator<JumpGateRoute>_>;

struct vector<JumpGateRoute,std::allocator<JumpGateRoute>_> { // PlaceHolder Structure
};

typedef struct vector<std::vector<word,std::allocator<word>_>,std::allocator<std::vector<word,std::allocator<word>_>_>_> vector<std::vector<word,std::allocator<word>_>,std::allocator<std::vector<word,std::allocator<word>_>_>_>, *Pvector<std::vector<word,std::allocator<word>_>,std::allocator<std::vector<word,std::allocator<word>_>_>_>;

struct vector<std::vector<word,std::allocator<word>_>,std::allocator<std::vector<word,std::allocator<word>_>_>_> { // PlaceHolder Structure
};

typedef struct _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>_>_> _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>_>_>, *P_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>_>_>;

struct _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>_>_> { // PlaceHolder Structure
};

typedef struct _Vector_const_iterator<std::_Vector_val<std::_Simple_types<Waypoint>_>_> _Vector_const_iterator<std::_Vector_val<std::_Simple_types<Waypoint>_>_>, *P_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Waypoint>_>_>;

struct _Vector_const_iterator<std::_Vector_val<std::_Simple_types<Waypoint>_>_> { // PlaceHolder Structure
};

typedef struct _Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>,void*> _Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>,void*>, *P_Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>,void*>;

struct _Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>,void*> { // PlaceHolder Structure
};

typedef struct _Binder<std::_Unforced,void_(__thiscall_Screen_Terminal::*)(void),Screen_Terminal*> _Binder<std::_Unforced,void_(__thiscall_Screen_Terminal::*)(void),Screen_Terminal*>, *P_Binder<std::_Unforced,void_(__thiscall_Screen_Terminal::*)(void),Screen_Terminal*>;

struct _Binder<std::_Unforced,void_(__thiscall_Screen_Terminal::*)(void),Screen_Terminal*> { // PlaceHolder Structure
};

typedef struct vector<word,std::allocator<word>_> vector<word,std::allocator<word>_>, *Pvector<word,std::allocator<word>_>;

struct vector<word,std::allocator<word>_> { // PlaceHolder Structure
};

typedef struct function<double___cdecl(class_Ship*,int)> function<double___cdecl(class_Ship*,int)>, *Pfunction<double___cdecl(class_Ship*,int)>;

struct function<double___cdecl(class_Ship*,int)> { // PlaceHolder Structure
};

typedef struct _Func_class<bool,Ship*,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> _Func_class<bool,Ship*,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>, *P_Func_class<bool,Ship*,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>;

struct _Func_class<bool,Ship*,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> { // PlaceHolder Structure
};

typedef struct function<void___cdecl(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>)> function<void___cdecl(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>)>, *Pfunction<void___cdecl(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>)>;

struct function<void___cdecl(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>)> { // PlaceHolder Structure
};

typedef struct vector<ListData,std::allocator<ListData>_> vector<ListData,std::allocator<ListData>_>, *Pvector<ListData,std::allocator<ListData>_>;

struct vector<ListData,std::allocator<ListData>_> { // PlaceHolder Structure
};

typedef struct vector<Widget,std::allocator<Widget>_> vector<Widget,std::allocator<Widget>_>, *Pvector<Widget,std::allocator<Widget>_>;

struct vector<Widget,std::allocator<Widget>_> { // PlaceHolder Structure
};

typedef struct _Func_class<bool,int> _Func_class<bool,int>, *P_Func_class<bool,int>;

struct _Func_class<bool,int> { // PlaceHolder Structure
};

typedef struct tuple<cocos2d::EventKeyboard::KeyCode_const&> tuple<cocos2d::EventKeyboard::KeyCode_const&>, *Ptuple<cocos2d::EventKeyboard::KeyCode_const&>;

struct tuple<cocos2d::EventKeyboard::KeyCode_const&> { // PlaceHolder Structure
};

typedef struct _Func_base<double,Ship*,int> _Func_base<double,Ship*,int>, *P_Func_base<double,Ship*,int>;

struct _Func_base<double,Ship*,int> { // PlaceHolder Structure
};

typedef struct allocator<PrivateCommElement> allocator<PrivateCommElement>, *Pallocator<PrivateCommElement>;

struct allocator<PrivateCommElement> { // PlaceHolder Structure
};

typedef struct tuple<> tuple<>, *Ptuple<>;

struct tuple<> { // PlaceHolder Structure
};

typedef struct vector<class_WaveformPeak,class_std::allocator<class_WaveformPeak>_> vector<class_WaveformPeak,class_std::allocator<class_WaveformPeak>_>, *Pvector<class_WaveformPeak,class_std::allocator<class_WaveformPeak>_>;

struct vector<class_WaveformPeak,class_std::allocator<class_WaveformPeak>_> { // PlaceHolder Structure
};

typedef struct _Func_base<bool,void*> _Func_base<bool,void*>, *P_Func_base<bool,void*>;

struct _Func_base<bool,void*> { // PlaceHolder Structure
};

typedef struct vector<Resolution,std::allocator<Resolution>_> vector<Resolution,std::allocator<Resolution>_>, *Pvector<Resolution,std::allocator<Resolution>_>;

struct vector<Resolution,std::allocator<Resolution>_> { // PlaceHolder Structure
};

typedef struct _String_const_iterator<std::_String_val<std::_Simple_types<char>_>_> _String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>, *P_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>;

struct _String_const_iterator<std::_String_val<std::_Simple_types<char>_>_> { // PlaceHolder Structure
};

typedef struct pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>_>_>,bool> pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>_>_>,bool>, *Ppair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>_>_>,bool>;

struct pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>_>_>,bool> { // PlaceHolder Structure
};

typedef struct allocator<ScreenData> allocator<ScreenData>, *Pallocator<ScreenData>;

struct allocator<ScreenData> { // PlaceHolder Structure
};

typedef struct function<bool___cdecl(cocos2d::Node*)> function<bool___cdecl(cocos2d::Node*)>, *Pfunction<bool___cdecl(cocos2d::Node*)>;

struct function<bool___cdecl(cocos2d::Node*)> { // PlaceHolder Structure
};

typedef struct vector<Destination,std::allocator<Destination>_> vector<Destination,std::allocator<Destination>_>, *Pvector<Destination,std::allocator<Destination>_>;

struct vector<Destination,std::allocator<Destination>_> { // PlaceHolder Structure
};

typedef struct function<bool___cdecl(class_Ship*,double,double,double)> function<bool___cdecl(class_Ship*,double,double,double)>, *Pfunction<bool___cdecl(class_Ship*,double,double,double)>;

struct function<bool___cdecl(class_Ship*,double,double,double)> { // PlaceHolder Structure
};

typedef struct _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>_>_> _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>_>_>, *P_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>_>_>;

struct _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>_>_> { // PlaceHolder Structure
};

typedef struct _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_>_>,std::_Iterator_base0> _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_>_>,std::_Iterator_base0>, *P_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_>_>,std::_Iterator_base0>;

struct _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_>_>,std::_Iterator_base0> { // PlaceHolder Structure
};

typedef struct _Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,Variable,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,Variable>_>,0>_> _Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,Variable,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,Variable>_>,0>_>, *P_Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,Variable,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,Variable>_>,0>_>;

struct _Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,Variable,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,Variable>_>,0>_> { // PlaceHolder Structure
};

typedef struct _Func_base<void,int> _Func_base<void,int>, *P_Func_base<void,int>;

struct _Func_base<void,int> { // PlaceHolder Structure
};

typedef struct vector<ShipChatter_Element*,std::allocator<ShipChatter_Element*>_> vector<ShipChatter_Element*,std::allocator<ShipChatter_Element*>_>, *Pvector<ShipChatter_Element*,std::allocator<ShipChatter_Element*>_>;

struct vector<ShipChatter_Element*,std::allocator<ShipChatter_Element*>_> { // PlaceHolder Structure
};

typedef struct vector<PrivateCommElement,std::allocator<PrivateCommElement>_> vector<PrivateCommElement,std::allocator<PrivateCommElement>_>, *Pvector<PrivateCommElement,std::allocator<PrivateCommElement>_>;

struct vector<PrivateCommElement,std::allocator<PrivateCommElement>_> { // PlaceHolder Structure
};

typedef struct function<void___cdecl(cocos2d::EventKeyboard::KeyCode,cocos2d::Event*)> function<void___cdecl(cocos2d::EventKeyboard::KeyCode,cocos2d::Event*)>, *Pfunction<void___cdecl(cocos2d::EventKeyboard::KeyCode,cocos2d::Event*)>;

struct function<void___cdecl(cocos2d::EventKeyboard::KeyCode,cocos2d::Event*)> { // PlaceHolder Structure
};

typedef struct allocator<cocos2d::Rect> allocator<cocos2d::Rect>, *Pallocator<cocos2d::Rect>;

struct allocator<cocos2d::Rect> { // PlaceHolder Structure
};

typedef struct allocator<std::_Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>,void*>_> allocator<std::_Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>,void*>_>, *Pallocator<std::_Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>,void*>_>;

struct allocator<std::_Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>,void*>_> { // PlaceHolder Structure
};

typedef struct vector<ModuleRenderData,std::allocator<ModuleRenderData>_> vector<ModuleRenderData,std::allocator<ModuleRenderData>_>, *Pvector<ModuleRenderData,std::allocator<ModuleRenderData>_>;

struct vector<ModuleRenderData,std::allocator<ModuleRenderData>_> { // PlaceHolder Structure
};

typedef struct pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool> pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>, *Ppair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>;

struct pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool> { // PlaceHolder Structure
};

typedef struct allocator<MouseCursor> allocator<MouseCursor>, *Pallocator<MouseCursor>;

struct allocator<MouseCursor> { // PlaceHolder Structure
};

typedef struct vector<Passenger*,std::allocator<Passenger*>_> vector<Passenger*,std::allocator<Passenger*>_>, *Pvector<Passenger*,std::allocator<Passenger*>_>;

struct vector<Passenger*,std::allocator<Passenger*>_> { // PlaceHolder Structure
};

typedef struct pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>, *Ppair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>;

struct pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> { // PlaceHolder Structure
};

typedef struct _Binder<std::_Unforced,void_(__thiscall_Screen_PC::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>),Screen_PC*,std::_Ph<1>_const&> _Binder<std::_Unforced,void_(__thiscall_Screen_PC::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>),Screen_PC*,std::_Ph<1>_const&>, *P_Binder<std::_Unforced,void_(__thiscall_Screen_PC::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>),Screen_PC*,std::_Ph<1>_const&>;

struct _Binder<std::_Unforced,void_(__thiscall_Screen_PC::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>),Screen_PC*,std::_Ph<1>_const&> { // PlaceHolder Structure
};

typedef struct vector<Contract*,std::allocator<Contract*>_> vector<Contract*,std::allocator<Contract*>_>, *Pvector<Contract*,std::allocator<Contract*>_>;

struct vector<Contract*,std::allocator<Contract*>_> { // PlaceHolder Structure
};

typedef struct _Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>,void*> _Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>,void*>, *P_Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>,void*>;

struct _Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>,void*> { // PlaceHolder Structure
};

typedef struct _Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>,0>_> _Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>,0>_>, *P_Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>,0>_>;

struct _Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>,0>_> { // PlaceHolder Structure
};

typedef struct vector<PathNode*,std::allocator<PathNode*>_> vector<PathNode*,std::allocator<PathNode*>_>, *Pvector<PathNode*,std::allocator<PathNode*>_>;

struct vector<PathNode*,std::allocator<PathNode*>_> { // PlaceHolder Structure
};

typedef struct vector<UpgradeCommand,std::allocator<UpgradeCommand>_> vector<UpgradeCommand,std::allocator<UpgradeCommand>_>, *Pvector<UpgradeCommand,std::allocator<UpgradeCommand>_>;

struct vector<UpgradeCommand,std::allocator<UpgradeCommand>_> { // PlaceHolder Structure
};

typedef struct pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int> pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>, *Ppair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>;

struct pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int> { // PlaceHolder Structure
};

typedef struct _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_>_>_> _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_>_>_>, *P_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_>_>_>;

struct _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_>_>_> { // PlaceHolder Structure
};

typedef struct _Uninitialized_backout_al<Widget*,std::allocator<Widget>_> _Uninitialized_backout_al<Widget*,std::allocator<Widget>_>, *P_Uninitialized_backout_al<Widget*,std::allocator<Widget>_>;

struct _Uninitialized_backout_al<Widget*,std::allocator<Widget>_> { // PlaceHolder Structure
};

typedef struct vector<double,std::allocator<double>_> vector<double,std::allocator<double>_>, *Pvector<double,std::allocator<double>_>;

struct vector<double,std::allocator<double>_> { // PlaceHolder Structure
};

typedef struct vector<DockProcessElement,std::allocator<DockProcessElement>_> vector<DockProcessElement,std::allocator<DockProcessElement>_>, *Pvector<DockProcessElement,std::allocator<DockProcessElement>_>;

struct vector<DockProcessElement,std::allocator<DockProcessElement>_> { // PlaceHolder Structure
};

typedef struct allocator<BankTransaction> allocator<BankTransaction>, *Pallocator<BankTransaction>;

struct allocator<BankTransaction> { // PlaceHolder Structure
};

typedef struct _Func_base<void,Menu*> _Func_base<void,Menu*>, *P_Func_base<void,Menu*>;

struct _Func_base<void,Menu*> { // PlaceHolder Structure
};

typedef struct vector<Selectable,std::allocator<Selectable>_> vector<Selectable,std::allocator<Selectable>_>, *Pvector<Selectable,std::allocator<Selectable>_>;

struct vector<Selectable,std::allocator<Selectable>_> { // PlaceHolder Structure
};

typedef struct pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>, *Ppair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>;

struct pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> { // PlaceHolder Structure
};

typedef struct _Tree_comp_alloc<std::_Tset_traits<PathNode*,PathContext::NodeTotalWeightCompare,std::allocator<PathNode*>,1>_> _Tree_comp_alloc<std::_Tset_traits<PathNode*,PathContext::NodeTotalWeightCompare,std::allocator<PathNode*>,1>_>, *P_Tree_comp_alloc<std::_Tset_traits<PathNode*,PathContext::NodeTotalWeightCompare,std::allocator<PathNode*>,1>_>;

struct _Tree_comp_alloc<std::_Tset_traits<PathNode*,PathContext::NodeTotalWeightCompare,std::allocator<PathNode*>,1>_> { // PlaceHolder Structure
};

typedef struct vector<InputCommand,std::allocator<InputCommand>_> vector<InputCommand,std::allocator<InputCommand>_>, *Pvector<InputCommand,std::allocator<InputCommand>_>;

struct vector<InputCommand,std::allocator<InputCommand>_> { // PlaceHolder Structure
};

typedef struct vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_> vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>, *Pvector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>;

struct vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_> { // PlaceHolder Structure
};

typedef struct _Vector_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_SoundLet*>_>_> _Vector_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_SoundLet*>_>_>, *P_Vector_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_SoundLet*>_>_>;

struct _Vector_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_SoundLet*>_>_> { // PlaceHolder Structure
};

typedef struct _Tree_comp_alloc<std::_Tmap_traits<int,int,std::less<int>,std::allocator<std::pair<int_const_,int>_>,0>_> _Tree_comp_alloc<std::_Tmap_traits<int,int,std::less<int>,std::allocator<std::pair<int_const_,int>_>,0>_>, *P_Tree_comp_alloc<std::_Tmap_traits<int,int,std::less<int>,std::allocator<std::pair<int_const_,int>_>,0>_>;

struct _Tree_comp_alloc<std::_Tmap_traits<int,int,std::less<int>,std::allocator<std::pair<int_const_,int>_>,0>_> { // PlaceHolder Structure
};

typedef struct allocator<ModuleRenderData> allocator<ModuleRenderData>, *Pallocator<ModuleRenderData>;

struct allocator<ModuleRenderData> { // PlaceHolder Structure
};

typedef struct _Func_base<bool,Ship*,double,double,double> _Func_base<bool,Ship*,double,double,double>, *P_Func_base<bool,Ship*,double,double,double>;

struct _Func_base<bool,Ship*,double,double,double> { // PlaceHolder Structure
};

typedef struct _Tree_node<std::pair<cocos2d::EventKeyboard::KeyCode_const_,char>,void*> _Tree_node<std::pair<cocos2d::EventKeyboard::KeyCode_const_,char>,void*>, *P_Tree_node<std::pair<cocos2d::EventKeyboard::KeyCode_const_,char>,void*>;

struct _Tree_node<std::pair<cocos2d::EventKeyboard::KeyCode_const_,char>,void*> { // PlaceHolder Structure
};

typedef struct vector<ContractCommand,std::allocator<ContractCommand>_> vector<ContractCommand,std::allocator<ContractCommand>_>, *Pvector<ContractCommand,std::allocator<ContractCommand>_>;

struct vector<ContractCommand,std::allocator<ContractCommand>_> { // PlaceHolder Structure
};

typedef struct tuple<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&> tuple<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&>, *Ptuple<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&>;

struct tuple<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&> { // PlaceHolder Structure
};

typedef struct vector<struct_word,class_std::allocator<struct_word>_> vector<struct_word,class_std::allocator<struct_word>_>, *Pvector<struct_word,class_std::allocator<struct_word>_>;

struct vector<struct_word,class_std::allocator<struct_word>_> { // PlaceHolder Structure
};

typedef struct allocator<char> allocator<char>, *Pallocator<char>;

struct allocator<char> { // PlaceHolder Structure
};

typedef struct _Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>,void*> _Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>,void*>, *P_Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>,void*>;

struct _Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>,void*> { // PlaceHolder Structure
};

typedef struct allocator<Destination> allocator<Destination>, *Pallocator<Destination>;

struct allocator<Destination> { // PlaceHolder Structure
};

typedef struct function<void___cdecl(int)> function<void___cdecl(int)>, *Pfunction<void___cdecl(int)>;

struct function<void___cdecl(int)> { // PlaceHolder Structure
};

typedef struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>, *Pbasic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>;

struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct allocator<NavMarker> allocator<NavMarker>, *Pallocator<NavMarker>;

struct allocator<NavMarker> { // PlaceHolder Structure
};

typedef struct map<cocos2d::EventKeyboard::KeyCode,char,std::less<cocos2d::EventKeyboard::KeyCode>,std::allocator<std::pair<cocos2d::EventKeyboard::KeyCode_const_,char>_>_> map<cocos2d::EventKeyboard::KeyCode,char,std::less<cocos2d::EventKeyboard::KeyCode>,std::allocator<std::pair<cocos2d::EventKeyboard::KeyCode_const_,char>_>_>, *Pmap<cocos2d::EventKeyboard::KeyCode,char,std::less<cocos2d::EventKeyboard::KeyCode>,std::allocator<std::pair<cocos2d::EventKeyboard::KeyCode_const_,char>_>_>;

struct map<cocos2d::EventKeyboard::KeyCode,char,std::less<cocos2d::EventKeyboard::KeyCode>,std::allocator<std::pair<cocos2d::EventKeyboard::KeyCode_const_,char>_>_> { // PlaceHolder Structure
};

typedef struct _Binder<std::_Unforced,void_(__thiscall_Screen_TradeTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_TradeTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&> _Binder<std::_Unforced,void_(__thiscall_Screen_TradeTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_TradeTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>, *P_Binder<std::_Unforced,void_(__thiscall_Screen_TradeTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_TradeTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>;

struct _Binder<std::_Unforced,void_(__thiscall_Screen_TradeTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_TradeTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&> { // PlaceHolder Structure
};

typedef struct allocator<CommsCommand> allocator<CommsCommand>, *Pallocator<CommsCommand>;

struct allocator<CommsCommand> { // PlaceHolder Structure
};

typedef struct _Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>,0>_> _Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>,0>_>, *P_Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>,0>_>;

struct _Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>,0>_> { // PlaceHolder Structure
};

typedef struct vector<UIText*,std::allocator<UIText*>_> vector<UIText*,std::allocator<UIText*>_>, *Pvector<UIText*,std::allocator<UIText*>_>;

struct vector<UIText*,std::allocator<UIText*>_> { // PlaceHolder Structure
};

typedef struct vector<ComponentInterface*,std::allocator<ComponentInterface*>_> vector<ComponentInterface*,std::allocator<ComponentInterface*>_>, *Pvector<ComponentInterface*,std::allocator<ComponentInterface*>_>;

struct vector<ComponentInterface*,std::allocator<ComponentInterface*>_> { // PlaceHolder Structure
};

typedef struct _Uninitialized_backout_al<SensorSelectionElement*,std::allocator<SensorSelectionElement>_> _Uninitialized_backout_al<SensorSelectionElement*,std::allocator<SensorSelectionElement>_>, *P_Uninitialized_backout_al<SensorSelectionElement*,std::allocator<SensorSelectionElement>_>;

struct _Uninitialized_backout_al<SensorSelectionElement*,std::allocator<SensorSelectionElement>_> { // PlaceHolder Structure
};

typedef struct _Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,float,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>,0>_> _Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,float,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>,0>_>, *P_Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,float,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>,0>_>;

struct _Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,float,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>,0>_> { // PlaceHolder Structure
};

typedef struct function<void___cdecl(cocos2d::EventMouse*)> function<void___cdecl(cocos2d::EventMouse*)>, *Pfunction<void___cdecl(cocos2d::EventMouse*)>;

struct function<void___cdecl(cocos2d::EventMouse*)> { // PlaceHolder Structure
};

typedef struct allocator<SensorSelectionElement> allocator<SensorSelectionElement>, *Pallocator<SensorSelectionElement>;

struct allocator<SensorSelectionElement> { // PlaceHolder Structure
};

typedef struct basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>, *Pbasic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>;

struct basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> { // PlaceHolder Structure
};

typedef struct _Func_base<bool,int> _Func_base<bool,int>, *P_Func_base<bool,int>;

struct _Func_base<bool,int> { // PlaceHolder Structure
};

typedef struct _Uninitialized_backout_al<word*,std::allocator<word>_> _Uninitialized_backout_al<word*,std::allocator<word>_>, *P_Uninitialized_backout_al<word*,std::allocator<word>_>;

struct _Uninitialized_backout_al<word*,std::allocator<word>_> { // PlaceHolder Structure
};

typedef struct _Uninitialized_backout_al<cocos2d::Rect*,std::allocator<cocos2d::Rect>_> _Uninitialized_backout_al<cocos2d::Rect*,std::allocator<cocos2d::Rect>_>, *P_Uninitialized_backout_al<cocos2d::Rect*,std::allocator<cocos2d::Rect>_>;

struct _Uninitialized_backout_al<cocos2d::Rect*,std::allocator<cocos2d::Rect>_> { // PlaceHolder Structure
};

typedef struct allocator<UpgradeCommand> allocator<UpgradeCommand>, *Pallocator<UpgradeCommand>;

struct allocator<UpgradeCommand> { // PlaceHolder Structure
};

typedef struct _Tree_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<class_PathNode*>_>_> _Tree_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<class_PathNode*>_>_>, *P_Tree_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<class_PathNode*>_>_>;

struct _Tree_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<class_PathNode*>_>_> { // PlaceHolder Structure
};

typedef struct _Vector_iterator<std::_Vector_val<std::_Simple_types<Waypoint>_>_> _Vector_iterator<std::_Vector_val<std::_Simple_types<Waypoint>_>_>, *P_Vector_iterator<std::_Vector_val<std::_Simple_types<Waypoint>_>_>;

struct _Vector_iterator<std::_Vector_val<std::_Simple_types<Waypoint>_>_> { // PlaceHolder Structure
};

typedef struct vector<PlayerGuidedToPort,std::allocator<PlayerGuidedToPort>_> vector<PlayerGuidedToPort,std::allocator<PlayerGuidedToPort>_>, *Pvector<PlayerGuidedToPort,std::allocator<PlayerGuidedToPort>_>;

struct vector<PlayerGuidedToPort,std::allocator<PlayerGuidedToPort>_> { // PlaceHolder Structure
};

typedef struct map<int,FogInstance*,std::less<int>,std::allocator<std::pair<int_const_,FogInstance*>_>_> map<int,FogInstance*,std::less<int>,std::allocator<std::pair<int_const_,FogInstance*>_>_>, *Pmap<int,FogInstance*,std::less<int>,std::allocator<std::pair<int_const_,FogInstance*>_>_>;

struct map<int,FogInstance*,std::less<int>,std::allocator<std::pair<int_const_,FogInstance*>_>_> { // PlaceHolder Structure
};

typedef struct function<bool___cdecl(int)> function<bool___cdecl(int)>, *Pfunction<bool___cdecl(int)>;

struct function<bool___cdecl(int)> { // PlaceHolder Structure
};

typedef struct _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<PathNode*>_>_> _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<PathNode*>_>_>, *P_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<PathNode*>_>_>;

struct _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<PathNode*>_>_> { // PlaceHolder Structure
};

typedef struct allocator<std::vector<word,std::allocator<word>_>_> allocator<std::vector<word,std::allocator<word>_>_>, *Pallocator<std::vector<word,std::allocator<word>_>_>;

struct allocator<std::vector<word,std::allocator<word>_>_> { // PlaceHolder Structure
};

typedef struct function<void___cdecl(class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)> function<void___cdecl(class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)>, *Pfunction<void___cdecl(class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)>;

struct function<void___cdecl(class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)> { // PlaceHolder Structure
};

typedef struct vector<cocos2d::ui::Scale9Sprite*,std::allocator<cocos2d::ui::Scale9Sprite*>_> vector<cocos2d::ui::Scale9Sprite*,std::allocator<cocos2d::ui::Scale9Sprite*>_>, *Pvector<cocos2d::ui::Scale9Sprite*,std::allocator<cocos2d::ui::Scale9Sprite*>_>;

struct vector<cocos2d::ui::Scale9Sprite*,std::allocator<cocos2d::ui::Scale9Sprite*>_> { // PlaceHolder Structure
};

typedef struct vector<AnimationFrames*,std::allocator<AnimationFrames*>_> vector<AnimationFrames*,std::allocator<AnimationFrames*>_>, *Pvector<AnimationFrames*,std::allocator<AnimationFrames*>_>;

struct vector<AnimationFrames*,std::allocator<AnimationFrames*>_> { // PlaceHolder Structure
};

typedef struct vector<ServerShipState*,std::allocator<ServerShipState*>_> vector<ServerShipState*,std::allocator<ServerShipState*>_>, *Pvector<ServerShipState*,std::allocator<ServerShipState*>_>;

struct vector<ServerShipState*,std::allocator<ServerShipState*>_> { // PlaceHolder Structure
};

typedef struct vector<class_Requirement,class_std::allocator<class_Requirement>_> vector<class_Requirement,class_std::allocator<class_Requirement>_>, *Pvector<class_Requirement,class_std::allocator<class_Requirement>_>;

struct vector<class_Requirement,class_std::allocator<class_Requirement>_> { // PlaceHolder Structure
};

typedef struct pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float> pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>, *Ppair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>;

struct pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float> { // PlaceHolder Structure
};

typedef struct _Binder<std::_Unforced,void_(__thiscall_Screen_PC::*)(void),Screen_PC*> _Binder<std::_Unforced,void_(__thiscall_Screen_PC::*)(void),Screen_PC*>, *P_Binder<std::_Unforced,void_(__thiscall_Screen_PC::*)(void),Screen_PC*>;

struct _Binder<std::_Unforced,void_(__thiscall_Screen_PC::*)(void),Screen_PC*> { // PlaceHolder Structure
};

typedef struct allocator<Command> allocator<Command>, *Pallocator<Command>;

struct allocator<Command> { // PlaceHolder Structure
};

typedef struct allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>, *Pallocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>;

struct allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> { // PlaceHolder Structure
};

typedef struct vector<ScreenData,std::allocator<ScreenData>_> vector<ScreenData,std::allocator<ScreenData>_>, *Pvector<ScreenData,std::allocator<ScreenData>_>;

struct vector<ScreenData,std::allocator<ScreenData>_> { // PlaceHolder Structure
};

typedef struct _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_> _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>, *P_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>;

struct _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_> { // PlaceHolder Structure
};

typedef struct _Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>_> _Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>_>, *P_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>_>;

struct _Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>_> { // PlaceHolder Structure
};

typedef struct vector<NSMSectorInfo,std::allocator<NSMSectorInfo>_> vector<NSMSectorInfo,std::allocator<NSMSectorInfo>_>, *Pvector<NSMSectorInfo,std::allocator<NSMSectorInfo>_>;

struct vector<NSMSectorInfo,std::allocator<NSMSectorInfo>_> { // PlaceHolder Structure
};

typedef struct _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,FogInstance*>_>_>_> _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,FogInstance*>_>_>_>, *P_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,FogInstance*>_>_>_>;

struct _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,FogInstance*>_>_>_> { // PlaceHolder Structure
};

typedef struct vector<NavMarker,std::allocator<NavMarker>_> vector<NavMarker,std::allocator<NavMarker>_>, *Pvector<NavMarker,std::allocator<NavMarker>_>;

struct vector<NavMarker,std::allocator<NavMarker>_> { // PlaceHolder Structure
};

typedef struct vector<class_PrivateCommOption,class_std::allocator<class_PrivateCommOption>_> vector<class_PrivateCommOption,class_std::allocator<class_PrivateCommOption>_>, *Pvector<class_PrivateCommOption,class_std::allocator<class_PrivateCommOption>_>;

struct vector<class_PrivateCommOption,class_std::allocator<class_PrivateCommOption>_> { // PlaceHolder Structure
};

typedef struct vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>, *Pvector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>;

struct vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> { // PlaceHolder Structure
};

typedef struct _Tree_val<std::_Tree_simple_types<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> _Tree_val<std::_Tree_simple_types<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>, *P_Tree_val<std::_Tree_simple_types<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>;

struct _Tree_val<std::_Tree_simple_types<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> { // PlaceHolder Structure
};

typedef struct vector<MetaGameAction*,std::allocator<MetaGameAction*>_> vector<MetaGameAction*,std::allocator<MetaGameAction*>_>, *Pvector<MetaGameAction*,std::allocator<MetaGameAction*>_>;

struct vector<MetaGameAction*,std::allocator<MetaGameAction*>_> { // PlaceHolder Structure
};

typedef struct vector<WeaponCommand,std::allocator<WeaponCommand>_> vector<WeaponCommand,std::allocator<WeaponCommand>_>, *Pvector<WeaponCommand,std::allocator<WeaponCommand>_>;

struct vector<WeaponCommand,std::allocator<WeaponCommand>_> { // PlaceHolder Structure
};

typedef struct _Tree<std::_Tset_traits<PathNode*,PathContext::NodeTotalWeightCompare,std::allocator<PathNode*>,1>_> _Tree<std::_Tset_traits<PathNode*,PathContext::NodeTotalWeightCompare,std::allocator<PathNode*>,1>_>, *P_Tree<std::_Tset_traits<PathNode*,PathContext::NodeTotalWeightCompare,std::allocator<PathNode*>,1>_>;

struct _Tree<std::_Tset_traits<PathNode*,PathContext::NodeTotalWeightCompare,std::allocator<PathNode*>,1>_> { // PlaceHolder Structure
};

typedef struct pair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>_>_>,std::_Tree_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,bool>_>_>_>_> pair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>_>_>,std::_Tree_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,bool>_>_>_>_>, *Ppair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>_>_>,std::_Tree_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,bool>_>_>_>_>;

struct pair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>_>_>,std::_Tree_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,bool>_>_>_>_> { // PlaceHolder Structure
};

typedef struct _Vector_const_iterator<std::_Vector_val<std::_Simple_types<Contract*>_>_> _Vector_const_iterator<std::_Vector_val<std::_Simple_types<Contract*>_>_>, *P_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Contract*>_>_>;

struct _Vector_const_iterator<std::_Vector_val<std::_Simple_types<Contract*>_>_> { // PlaceHolder Structure
};

typedef struct _Uninitialized_backout_al<NavMarker*,std::allocator<NavMarker>_> _Uninitialized_backout_al<NavMarker*,std::allocator<NavMarker>_>, *P_Uninitialized_backout_al<NavMarker*,std::allocator<NavMarker>_>;

struct _Uninitialized_backout_al<NavMarker*,std::allocator<NavMarker>_> { // PlaceHolder Structure
};

typedef struct _Uninitialized_backout_al<MouseCursor*,std::allocator<MouseCursor>_> _Uninitialized_backout_al<MouseCursor*,std::allocator<MouseCursor>_>, *P_Uninitialized_backout_al<MouseCursor*,std::allocator<MouseCursor>_>;

struct _Uninitialized_backout_al<MouseCursor*,std::allocator<MouseCursor>_> { // PlaceHolder Structure
};

typedef struct _Func_class<void,int> _Func_class<void,int>, *P_Func_class<void,int>;

struct _Func_class<void,int> { // PlaceHolder Structure
};

typedef struct basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>, *Pbasic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>;

struct basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> { // PlaceHolder Structure
};

typedef struct pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,int>_>_>_>,bool> pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,int>_>_>_>,bool>, *Ppair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,int>_>_>_>,bool>;

struct pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,int>_>_>_>,bool> { // PlaceHolder Structure
};

typedef struct function<double___cdecl(Ship*,int)> function<double___cdecl(Ship*,int)>, *Pfunction<double___cdecl(Ship*,int)>;

struct function<double___cdecl(Ship*,int)> { // PlaceHolder Structure
};

typedef struct _Tree_comp_alloc<std::_Tmap_traits<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<int>,std::allocator<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,0>_> _Tree_comp_alloc<std::_Tmap_traits<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<int>,std::allocator<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,0>_>, *P_Tree_comp_alloc<std::_Tmap_traits<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<int>,std::allocator<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,0>_>;

struct _Tree_comp_alloc<std::_Tmap_traits<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<int>,std::allocator<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,0>_> { // PlaceHolder Structure
};

typedef struct allocator<ScreenTab> allocator<ScreenTab>, *Pallocator<ScreenTab>;

struct allocator<ScreenTab> { // PlaceHolder Structure
};

typedef struct _Tree_comp_alloc<std::_Tmap_traits<cocos2d::EventKeyboard::KeyCode,char,std::less<cocos2d::EventKeyboard::KeyCode>,std::allocator<std::pair<cocos2d::EventKeyboard::KeyCode_const_,char>_>,0>_> _Tree_comp_alloc<std::_Tmap_traits<cocos2d::EventKeyboard::KeyCode,char,std::less<cocos2d::EventKeyboard::KeyCode>,std::allocator<std::pair<cocos2d::EventKeyboard::KeyCode_const_,char>_>,0>_>, *P_Tree_comp_alloc<std::_Tmap_traits<cocos2d::EventKeyboard::KeyCode,char,std::less<cocos2d::EventKeyboard::KeyCode>,std::allocator<std::pair<cocos2d::EventKeyboard::KeyCode_const_,char>_>,0>_>;

struct _Tree_comp_alloc<std::_Tmap_traits<cocos2d::EventKeyboard::KeyCode,char,std::less<cocos2d::EventKeyboard::KeyCode>,std::allocator<std::pair<cocos2d::EventKeyboard::KeyCode_const_,char>_>,0>_> { // PlaceHolder Structure
};

typedef struct map<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<int>,std::allocator<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> map<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<int>,std::allocator<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>, *Pmap<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<int>,std::allocator<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>;

struct map<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<int>,std::allocator<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> { // PlaceHolder Structure
};

typedef struct _Vector_iterator<std::_Vector_val<std::_Simple_types<Contract*>_>_> _Vector_iterator<std::_Vector_val<std::_Simple_types<Contract*>_>_>, *P_Vector_iterator<std::_Vector_val<std::_Simple_types<Contract*>_>_>;

struct _Vector_iterator<std::_Vector_val<std::_Simple_types<Contract*>_>_> { // PlaceHolder Structure
};

typedef struct vector<UI_NavMap*,std::allocator<UI_NavMap*>_> vector<UI_NavMap*,std::allocator<UI_NavMap*>_>, *Pvector<UI_NavMap*,std::allocator<UI_NavMap*>_>;

struct vector<UI_NavMap*,std::allocator<UI_NavMap*>_> { // PlaceHolder Structure
};

typedef struct vector<MouseCursor,std::allocator<MouseCursor>_> vector<MouseCursor,std::allocator<MouseCursor>_>, *Pvector<MouseCursor,std::allocator<MouseCursor>_>;

struct vector<MouseCursor,std::allocator<MouseCursor>_> { // PlaceHolder Structure
};

typedef struct pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_> pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>, *Ppair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>;

struct pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_> { // PlaceHolder Structure
};

typedef struct allocator<PlayerGuidedToPort> allocator<PlayerGuidedToPort>, *Pallocator<PlayerGuidedToPort>;

struct allocator<PlayerGuidedToPort> { // PlaceHolder Structure
};

typedef struct vector<Waypoint,std::allocator<Waypoint>_> vector<Waypoint,std::allocator<Waypoint>_>, *Pvector<Waypoint,std::allocator<Waypoint>_>;

struct vector<Waypoint,std::allocator<Waypoint>_> { // PlaceHolder Structure
};

typedef struct pair<int_const_,int> pair<int_const_,int>, *Ppair<int_const_,int>;

struct pair<int_const_,int> { // PlaceHolder Structure
};

typedef struct function<bool___cdecl(Ship*,int,int,int)> function<bool___cdecl(Ship*,int,int,int)>, *Pfunction<bool___cdecl(Ship*,int,int,int)>;

struct function<bool___cdecl(Ship*,int,int,int)> { // PlaceHolder Structure
};

typedef struct _Uninitialized_backout_al<Command*,std::allocator<Command>_> _Uninitialized_backout_al<Command*,std::allocator<Command>_>, *P_Uninitialized_backout_al<Command*,std::allocator<Command>_>;

struct _Uninitialized_backout_al<Command*,std::allocator<Command>_> { // PlaceHolder Structure
};

typedef struct allocator<PrivateCommOption> allocator<PrivateCommOption>, *Pallocator<PrivateCommOption>;

struct allocator<PrivateCommOption> { // PlaceHolder Structure
};

typedef struct allocator<JumpGateRoute> allocator<JumpGateRoute>, *Pallocator<JumpGateRoute>;

struct allocator<JumpGateRoute> { // PlaceHolder Structure
};

typedef struct vector<MusicTrack*,std::allocator<MusicTrack*>_> vector<MusicTrack*,std::allocator<MusicTrack*>_>, *Pvector<MusicTrack*,std::allocator<MusicTrack*>_>;

struct vector<MusicTrack*,std::allocator<MusicTrack*>_> { // PlaceHolder Structure
};

typedef struct _Binder<std::_Unforced,void_(__thiscall_Screen_ContractTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_ContractTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&> _Binder<std::_Unforced,void_(__thiscall_Screen_ContractTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_ContractTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>, *P_Binder<std::_Unforced,void_(__thiscall_Screen_ContractTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_ContractTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&>;

struct _Binder<std::_Unforced,void_(__thiscall_Screen_ContractTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_ContractTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&> { // PlaceHolder Structure
};

typedef struct _Func_base<void,bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> _Func_base<void,bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>, *P_Func_base<void,bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>;

struct _Func_base<void,bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> { // PlaceHolder Structure
};

typedef struct input_iterator_tag input_iterator_tag, *Pinput_iterator_tag;

struct input_iterator_tag { // PlaceHolder Structure
};

typedef struct allocator<ExtraSpawned> allocator<ExtraSpawned>, *Pallocator<ExtraSpawned>;

struct allocator<ExtraSpawned> { // PlaceHolder Structure
};

typedef struct vector<PrivateCommOption,std::allocator<PrivateCommOption>_> vector<PrivateCommOption,std::allocator<PrivateCommOption>_>, *Pvector<PrivateCommOption,std::allocator<PrivateCommOption>_>;

struct vector<PrivateCommOption,std::allocator<PrivateCommOption>_> { // PlaceHolder Structure
};

typedef struct vector<Requirement,std::allocator<Requirement>_> vector<Requirement,std::allocator<Requirement>_>, *Pvector<Requirement,std::allocator<Requirement>_>;

struct vector<Requirement,std::allocator<Requirement>_> { // PlaceHolder Structure
};

typedef struct _Binder<std::_Unforced,void_(__thiscall_Screen_TradeTerminal::*)(void),Screen_TradeTerminal*> _Binder<std::_Unforced,void_(__thiscall_Screen_TradeTerminal::*)(void),Screen_TradeTerminal*>, *P_Binder<std::_Unforced,void_(__thiscall_Screen_TradeTerminal::*)(void),Screen_TradeTerminal*>;

struct _Binder<std::_Unforced,void_(__thiscall_Screen_TradeTerminal::*)(void),Screen_TradeTerminal*> { // PlaceHolder Structure
};

typedef struct vector<BasicLine,std::allocator<BasicLine>_> vector<BasicLine,std::allocator<BasicLine>_>, *Pvector<BasicLine,std::allocator<BasicLine>_>;

struct vector<BasicLine,std::allocator<BasicLine>_> { // PlaceHolder Structure
};

typedef struct vector<BankTransaction,std::allocator<BankTransaction>_> vector<BankTransaction,std::allocator<BankTransaction>_>, *Pvector<BankTransaction,std::allocator<BankTransaction>_>;

struct vector<BankTransaction,std::allocator<BankTransaction>_> { // PlaceHolder Structure
};

typedef struct _Func_class<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,Ship*,int> _Func_class<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,Ship*,int>, *P_Func_class<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,Ship*,int>;

struct _Func_class<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,Ship*,int> { // PlaceHolder Structure
};

typedef struct map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>_> map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>_>, *Pmap<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>_>;

struct map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>_> { // PlaceHolder Structure
};

typedef struct vector<HullStrength,std::allocator<HullStrength>_> vector<HullStrength,std::allocator<HullStrength>_>, *Pvector<HullStrength,std::allocator<HullStrength>_>;

struct vector<HullStrength,std::allocator<HullStrength>_> { // PlaceHolder Structure
};

typedef struct _Vector_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_> _Vector_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>, *P_Vector_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>;

struct _Vector_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_> { // PlaceHolder Structure
};

typedef struct _Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,float,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>,0>_> _Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,float,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>,0>_>, *P_Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,float,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>,0>_>;

struct _Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,float,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>,0>_> { // PlaceHolder Structure
};

typedef struct _Uninitialized_backout_al<CameraPos*,std::allocator<CameraPos>_> _Uninitialized_backout_al<CameraPos*,std::allocator<CameraPos>_>, *P_Uninitialized_backout_al<CameraPos*,std::allocator<CameraPos>_>;

struct _Uninitialized_backout_al<CameraPos*,std::allocator<CameraPos>_> { // PlaceHolder Structure
};

typedef struct _Vector_iterator<std::_Vector_val<std::_Simple_types<SoundLet*>_>_> _Vector_iterator<std::_Vector_val<std::_Simple_types<SoundLet*>_>_>, *P_Vector_iterator<std::_Vector_val<std::_Simple_types<SoundLet*>_>_>;

struct _Vector_iterator<std::_Vector_val<std::_Simple_types<SoundLet*>_>_> { // PlaceHolder Structure
};

typedef struct _Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>,void*> _Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>,void*>, *P_Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>,void*>;

struct _Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>,void*> { // PlaceHolder Structure
};

typedef struct function<void___cdecl(bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>)> function<void___cdecl(bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>)>, *Pfunction<void___cdecl(bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>)>;

struct function<void___cdecl(bool,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>)> { // PlaceHolder Structure
};

typedef struct basic_string<char,std::char_traits<char>,std::allocator<char>_> basic_string<char,std::char_traits<char>,std::allocator<char>_>, *Pbasic_string<char,std::char_traits<char>,std::allocator<char>_>;

struct basic_string<char,std::char_traits<char>,std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>_>_> _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>_>_>, *P_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>_>_>;

struct _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>_>_> { // PlaceHolder Structure
};

typedef struct _Tree<std::_Tmap_traits<int,int,std::less<int>,std::allocator<std::pair<int_const_,int>_>,0>_> _Tree<std::_Tmap_traits<int,int,std::less<int>,std::allocator<std::pair<int_const_,int>_>,0>_>, *P_Tree<std::_Tmap_traits<int,int,std::less<int>,std::allocator<std::pair<int_const_,int>_>,0>_>;

struct _Tree<std::_Tmap_traits<int,int,std::less<int>,std::allocator<std::pair<int_const_,int>_>,0>_> { // PlaceHolder Structure
};

typedef struct _Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> _Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>, *P_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>;

struct _Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> { // PlaceHolder Structure
};

typedef struct vector<InputOption*,std::allocator<InputOption*>_> vector<InputOption*,std::allocator<InputOption*>_>, *Pvector<InputOption*,std::allocator<InputOption*>_>;

struct vector<InputOption*,std::allocator<InputOption*>_> { // PlaceHolder Structure
};

typedef struct pair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<PathNode*>_>_>,bool> pair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<PathNode*>_>_>,bool>, *Ppair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<PathNode*>_>_>,bool>;

struct pair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<PathNode*>_>_>,bool> { // PlaceHolder Structure
};

typedef struct _Uninitialized_backout_al<ScreenData*,std::allocator<ScreenData>_> _Uninitialized_backout_al<ScreenData*,std::allocator<ScreenData>_>, *P_Uninitialized_backout_al<ScreenData*,std::allocator<ScreenData>_>;

struct _Uninitialized_backout_al<ScreenData*,std::allocator<ScreenData>_> { // PlaceHolder Structure
};

typedef struct _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>_>_> _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>_>_>, *P_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>_>_>;

struct _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>_>_> { // PlaceHolder Structure
};

typedef struct _Not_a_node_tag _Not_a_node_tag, *P_Not_a_node_tag;

struct _Not_a_node_tag { // PlaceHolder Structure
};

typedef struct map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_> map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>, *Pmap<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>;

struct map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_> { // PlaceHolder Structure
};

typedef struct _String_val<std::_Simple_types<char>_> _String_val<std::_Simple_types<char>_>, *P_String_val<std::_Simple_types<char>_>;

struct _String_val<std::_Simple_types<char>_> { // PlaceHolder Structure
};

typedef struct _Tree_unchecked_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,int>_>_>,struct_std::_Iterator_base0> _Tree_unchecked_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,int>_>_>,struct_std::_Iterator_base0>, *P_Tree_unchecked_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,int>_>_>,struct_std::_Iterator_base0>;

struct _Tree_unchecked_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,int>_>_>,struct_std::_Iterator_base0> { // PlaceHolder Structure
};

typedef struct piecewise_construct_t piecewise_construct_t, *Ppiecewise_construct_t;

struct piecewise_construct_t { // PlaceHolder Structure
};

typedef struct function<void___cdecl(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>)> function<void___cdecl(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>)>, *Pfunction<void___cdecl(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>)>;

struct function<void___cdecl(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>)> { // PlaceHolder Structure
};

typedef struct _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,int>_>_>_> _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,int>_>_>_>, *P_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,int>_>_>_>;

struct _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,int>_>_>_> { // PlaceHolder Structure
};

typedef struct pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>,bool> pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>,bool>, *Ppair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>,bool>;

struct pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>,bool> { // PlaceHolder Structure
};

typedef struct vector<SensorSelectionElement,std::allocator<SensorSelectionElement>_> vector<SensorSelectionElement,std::allocator<SensorSelectionElement>_>, *Pvector<SensorSelectionElement,std::allocator<SensorSelectionElement>_>;

struct vector<SensorSelectionElement,std::allocator<SensorSelectionElement>_> { // PlaceHolder Structure
};

typedef struct _Uninitialized_backout_al<Selectable*,std::allocator<Selectable>_> _Uninitialized_backout_al<Selectable*,std::allocator<Selectable>_>, *P_Uninitialized_backout_al<Selectable*,std::allocator<Selectable>_>;

struct _Uninitialized_backout_al<Selectable*,std::allocator<Selectable>_> { // PlaceHolder Structure
};

typedef struct allocator<Widget> allocator<Widget>, *Pallocator<Widget>;

struct allocator<Widget> { // PlaceHolder Structure
};

typedef struct pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,FogInstance*>_>_>_>,bool> pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,FogInstance*>_>_>_>,bool>, *Ppair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,FogInstance*>_>_>_>,bool>;

struct pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,FogInstance*>_>_>_>,bool> { // PlaceHolder Structure
};

typedef struct vector<ExtraSpawned,std::allocator<ExtraSpawned>_> vector<ExtraSpawned,std::allocator<ExtraSpawned>_>, *Pvector<ExtraSpawned,std::allocator<ExtraSpawned>_>;

struct vector<ExtraSpawned,std::allocator<ExtraSpawned>_> { // PlaceHolder Structure
};

typedef struct pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_>,bool> pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_>,bool>, *Ppair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_>,bool>;

struct pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_>,bool> { // PlaceHolder Structure
};

typedef struct _Copy_tag _Copy_tag, *P_Copy_tag;

struct _Copy_tag { // PlaceHolder Structure
};

typedef enum SyntheticObjectType {
} SyntheticObjectType;

typedef enum CommsType {
} CommsType;


// WARNING! conflicting data type names: /Demangler/EShop/Shop - /Demangler/Shop

typedef enum OrbitState {
} OrbitState;

typedef enum TabletScreenType {
} TabletScreenType;

typedef enum ComparisonCheckType {
} ComparisonCheckType;

typedef enum ModuleSlotType {
} ModuleSlotType;

typedef struct <unnamed-type-teamDetails> <unnamed-type-teamDetails>, *P<unnamed-type-teamDetails>;

struct <unnamed-type-teamDetails> { // PlaceHolder Structure
};

typedef enum DifficultyMode {
} DifficultyMode;

typedef enum DamageAngle {
} DamageAngle;

typedef struct IMAGEHLP_MODULE64_V3 IMAGEHLP_MODULE64_V3, *PIMAGEHLP_MODULE64_V3;

struct IMAGEHLP_MODULE64_V3 { // PlaceHolder Structure
};

typedef enum HullDamageState {
} HullDamageState;

typedef enum PrivateCommOptionType {
} PrivateCommOptionType;

typedef enum FollowMode {
} FollowMode;

typedef enum ShipCommand {
} ShipCommand;

typedef enum RequestType {
} RequestType;

typedef enum ShipDataCheckType {
} ShipDataCheckType;

typedef enum DamageType {
} DamageType;

typedef enum Quadrant {
} Quadrant;

typedef enum ScenarioType {
} ScenarioType;

typedef enum NavPointType {
} NavPointType;

typedef enum Sound {
} Sound;

typedef enum CharacterMouthState {
} CharacterMouthState;

typedef enum MeshCategory {
} MeshCategory;

typedef enum StellarCategory {
} StellarCategory;

typedef enum TravelState {
} TravelState;

typedef enum HullLocation {
} HullLocation;

typedef struct V3F_C4B_T2F_Quad V3F_C4B_T2F_Quad, *PV3F_C4B_T2F_Quad;

struct V3F_C4B_T2F_Quad { // PlaceHolder Structure
};

typedef struct SpriteFrameCache SpriteFrameCache, *PSpriteFrameCache;

struct SpriteFrameCache { // PlaceHolder Structure
};

typedef struct Component Component, *PComponent;

struct Component { // PlaceHolder Structure
};

typedef struct __Set __Set, *P__Set;

struct __Set { // PlaceHolder Structure
};

typedef struct FileUtils FileUtils, *PFileUtils;

struct FileUtils { // PlaceHolder Structure
};

typedef struct Size Size, *PSize;

struct Size { // PlaceHolder Structure
};

typedef struct Node Node, *PNode;

struct Node { // PlaceHolder Structure
};

typedef struct Color3B Color3B, *PColor3B;

struct Color3B { // PlaceHolder Structure
};

typedef struct Ray Ray, *PRay;

struct Ray { // PlaceHolder Structure
};

typedef struct Scheduler Scheduler, *PScheduler;

struct Scheduler { // PlaceHolder Structure
};

typedef struct Ref Ref, *PRef;

struct Ref { // PlaceHolder Structure
};

typedef struct Mat4 Mat4, *PMat4;

struct Mat4 { // PlaceHolder Structure
};

typedef struct __Double __Double, *P__Double;

struct __Double { // PlaceHolder Structure
};

typedef struct Vector<cocos2d::Node*> Vector<cocos2d::Node*>, *PVector<cocos2d::Node*>;

struct Vector<cocos2d::Node*> { // PlaceHolder Structure
};

typedef struct Vec2 Vec2, *PVec2;

struct Vec2 { // PlaceHolder Structure
};

typedef struct Vec3 Vec3, *PVec3;

struct Vec3 { // PlaceHolder Structure
};

typedef struct FadeIn FadeIn, *PFadeIn;

struct FadeIn { // PlaceHolder Structure
};

typedef struct __Float __Float, *P__Float;

struct __Float { // PlaceHolder Structure
};

typedef struct Animate3D Animate3D, *PAnimate3D;

struct Animate3D { // PlaceHolder Structure
};

typedef struct EventDispatcher EventDispatcher, *PEventDispatcher;

struct EventDispatcher { // PlaceHolder Structure
};

typedef struct Scene Scene, *PScene;

struct Scene { // PlaceHolder Structure
};

typedef struct Rect Rect, *PRect;

struct Rect { // PlaceHolder Structure
};

typedef struct __Integer __Integer, *P__Integer;

struct __Integer { // PlaceHolder Structure
};

typedef struct RotateTo RotateTo, *PRotateTo;

struct RotateTo { // PlaceHolder Structure
};

typedef struct Director Director, *PDirector;

struct Director { // PlaceHolder Structure
};

typedef struct Event Event, *PEvent;

struct Event { // PlaceHolder Structure
};

typedef struct Renderer Renderer, *PRenderer;

struct Renderer { // PlaceHolder Structure
};

typedef struct Mesh Mesh, *PMesh;

struct Mesh { // PlaceHolder Structure
};

typedef struct EventListener EventListener, *PEventListener;

struct EventListener { // PlaceHolder Structure
};

typedef struct RepeatForever RepeatForever, *PRepeatForever;

struct RepeatForever { // PlaceHolder Structure
};

typedef struct PolygonInfo PolygonInfo, *PPolygonInfo;

struct PolygonInfo { // PlaceHolder Structure
};

typedef struct GLView GLView, *PGLView;

struct GLView { // PlaceHolder Structure
};

typedef struct EventMouse EventMouse, *PEventMouse;

struct EventMouse { // PlaceHolder Structure
};

typedef struct Clonable Clonable, *PClonable;

struct Clonable { // PlaceHolder Structure
};

typedef struct DirectionLight DirectionLight, *PDirectionLight;

struct DirectionLight { // PlaceHolder Structure
};

typedef struct FadeOut FadeOut, *PFadeOut;

struct FadeOut { // PlaceHolder Structure
};

typedef struct AffineTransform AffineTransform, *PAffineTransform;

struct AffineTransform { // PlaceHolder Structure
};

typedef struct EaseInOut EaseInOut, *PEaseInOut;

struct EaseInOut { // PlaceHolder Structure
};

typedef struct Application Application, *PApplication;

struct Application { // PlaceHolder Structure
};

typedef struct Animation3D Animation3D, *PAnimation3D;

struct Animation3D { // PlaceHolder Structure
};

typedef struct SpotLight SpotLight, *PSpotLight;

struct SpotLight { // PlaceHolder Structure
};

typedef struct Texture2D Texture2D, *PTexture2D;

struct Texture2D { // PlaceHolder Structure
};

typedef struct GLProgram GLProgram, *PGLProgram;

struct GLProgram { // PlaceHolder Structure
};

typedef struct BlendFunc BlendFunc, *PBlendFunc;

struct BlendFunc { // PlaceHolder Structure
};

typedef struct ActionManager ActionManager, *PActionManager;

struct ActionManager { // PlaceHolder Structure
};

typedef struct SpriteFrame SpriteFrame, *PSpriteFrame;

struct SpriteFrame { // PlaceHolder Structure
};

typedef struct ActionInterval ActionInterval, *PActionInterval;

struct ActionInterval { // PlaceHolder Structure
};

typedef struct Sprite3D Sprite3D, *PSprite3D;

struct Sprite3D { // PlaceHolder Structure
};

typedef struct Quaternion Quaternion, *PQuaternion;

struct Quaternion { // PlaceHolder Structure
};

typedef enum TextHAlignment {
} TextHAlignment;

typedef struct Layer Layer, *PLayer;

struct Layer { // PlaceHolder Structure
};

typedef struct RenderTexture RenderTexture, *PRenderTexture;

struct RenderTexture { // PlaceHolder Structure
};

typedef struct Acceleration Acceleration, *PAcceleration;

struct Acceleration { // PlaceHolder Structure
};

typedef struct GLViewImpl GLViewImpl, *PGLViewImpl;

struct GLViewImpl { // PlaceHolder Structure
};

typedef struct AABB AABB, *PAABB;

struct AABB { // PlaceHolder Structure
};

typedef struct Label Label, *PLabel;

struct Label { // PlaceHolder Structure
};

typedef struct FiniteTimeAction FiniteTimeAction, *PFiniteTimeAction;

struct FiniteTimeAction { // PlaceHolder Structure
};

typedef struct GLProgramState GLProgramState, *PGLProgramState;

struct GLProgramState { // PlaceHolder Structure
};

typedef struct PointLight PointLight, *PPointLight;

struct PointLight { // PlaceHolder Structure
};

typedef struct SpriteBatchNode SpriteBatchNode, *PSpriteBatchNode;

struct SpriteBatchNode { // PlaceHolder Structure
};

typedef struct Camera Camera, *PCamera;

struct Camera { // PlaceHolder Structure
};

typedef struct __Bool __Bool, *P__Bool;

struct __Bool { // PlaceHolder Structure
};

typedef struct Sequence Sequence, *PSequence;

struct Sequence { // PlaceHolder Structure
};

typedef struct DelayTime DelayTime, *PDelayTime;

struct DelayTime { // PlaceHolder Structure
};

typedef struct CallFunc CallFunc, *PCallFunc;

struct CallFunc { // PlaceHolder Structure
};

typedef struct BaseLight BaseLight, *PBaseLight;

struct BaseLight { // PlaceHolder Structure
};

typedef struct AmbientLight AmbientLight, *PAmbientLight;

struct AmbientLight { // PlaceHolder Structure
};

typedef struct EventListenerMouse EventListenerMouse, *PEventListenerMouse;

struct EventListenerMouse { // PlaceHolder Structure
};

typedef struct Action Action, *PAction;

struct Action { // PlaceHolder Structure
};

typedef struct Touch Touch, *PTouch;

struct Touch { // PlaceHolder Structure
};

typedef enum LanguageType {
} LanguageType;

typedef struct EventListenerKeyboard EventListenerKeyboard, *PEventListenerKeyboard;

struct EventListenerKeyboard { // PlaceHolder Structure
};

typedef enum TextVAlignment {
} TextVAlignment;

typedef struct Sprite Sprite, *PSprite;

struct Sprite { // PlaceHolder Structure
};

typedef enum SetIntervalReason {
} SetIntervalReason;

typedef struct _TexParams _TexParams, *P_TexParams;

struct _TexParams { // PlaceHolder Structure
};

typedef enum Platform {
} Platform;

typedef enum DispatchMode {
} DispatchMode;

typedef struct Scale9Sprite Scale9Sprite, *PScale9Sprite;

struct Scale9Sprite { // PlaceHolder Structure
};

typedef enum KeyCode {
} KeyCode;

typedef struct OrderedList<unsigned_short,RakNet::SplitPacketChannel*,&int___cdecl_RakNet::SplitPacketChannelComp(unsigned_short_const&,struct_RakNet::SplitPacketChannel*_const&)> OrderedList<unsigned_short,RakNet::SplitPacketChannel*,&int___cdecl_RakNet::SplitPacketChannelComp(unsigned_short_const&,struct_RakNet::SplitPacketChannel*_const&)>, *POrderedList<unsigned_short,RakNet::SplitPacketChannel*,&int___cdecl_RakNet::SplitPacketChannelComp(unsigned_short_const&,struct_RakNet::SplitPacketChannel*_const&)>;

struct OrderedList<unsigned_short,RakNet::SplitPacketChannel*,&int___cdecl_RakNet::SplitPacketChannelComp(unsigned_short_const&,struct_RakNet::SplitPacketChannel*_const&)> { // PlaceHolder Structure
};

typedef struct List<class_RakNet::RakNetSocket2*> List<class_RakNet::RakNetSocket2*>, *PList<class_RakNet::RakNetSocket2*>;

struct List<class_RakNet::RakNetSocket2*> { // PlaceHolder Structure
};

typedef struct List<unsigned_int> List<unsigned_int>, *PList<unsigned_int>;

struct List<unsigned_int> { // PlaceHolder Structure
};

typedef struct Heap<unsigned___int64,RakNet::InternalPacket*,0> Heap<unsigned___int64,RakNet::InternalPacket*,0>, *PHeap<unsigned___int64,RakNet::InternalPacket*,0>;

struct Heap<unsigned___int64,RakNet::InternalPacket*,0> { // PlaceHolder Structure
};

typedef struct List<DataStructures::RangeNode<RakNet::uint24_t>_> List<DataStructures::RangeNode<RakNet::uint24_t>_>, *PList<DataStructures::RangeNode<RakNet::uint24_t>_>;

struct List<DataStructures::RangeNode<RakNet::uint24_t>_> { // PlaceHolder Structure
};

typedef struct Map<int,RakNet::HuffmanEncodingTree*,&int___cdecl_DataStructures::defaultMapKeyComparison<int>(int_const&,int_const&)> Map<int,RakNet::HuffmanEncodingTree*,&int___cdecl_DataStructures::defaultMapKeyComparison<int>(int_const&,int_const&)>, *PMap<int,RakNet::HuffmanEncodingTree*,&int___cdecl_DataStructures::defaultMapKeyComparison<int>(int_const&,int_const&)>;

struct Map<int,RakNet::HuffmanEncodingTree*,&int___cdecl_DataStructures::defaultMapKeyComparison<int>(int_const&,int_const&)> { // PlaceHolder Structure
};

typedef struct List<DataStructures::Heap<unsigned___int64,RakNet::InternalPacket*,0>::HeapNode> List<DataStructures::Heap<unsigned___int64,RakNet::InternalPacket*,0>::HeapNode>, *PList<DataStructures::Heap<unsigned___int64,RakNet::InternalPacket*,0>::HeapNode>;

struct List<DataStructures::Heap<unsigned___int64,RakNet::InternalPacket*,0>::HeapNode> { // PlaceHolder Structure
};

typedef struct OrderedList<int,DataStructures::Map<int,RakNet::HuffmanEncodingTree*,&int___cdecl_DataStructures::defaultMapKeyComparison<int>(int_const&,int_const&)>::MapNode,&public:_static_int___cdecl_DataStructures::Map<int,class_RakNet::HuffmanEncodingTree*,&int___cdecl_DataStructures::defaultMapKeyComparison<int>(int_const&,int_const&)>::NodeComparisonFunc(int_const&,struct_DataStructures::Map<int,class_RakNet::HuffmanEncodingTree*,&int___cdecl_DataStructures::defaultMapKeyComparison<int>(int_const&,int_const&)>::MapNode_const&)> OrderedList<int,DataStructures::Map<int,RakNet::HuffmanEncodingTree*,&int___cdecl_DataStructures::defaultMapKeyComparison<int>(int_const&,int_const&)>::MapNode,&public:_static_int___cdecl_DataStructures::Map<int,class_RakNet::HuffmanEncodingTree*,&int___cdecl_DataStructures::defaultMapKeyComparison<int>(int_const&,int_const&)>::NodeComparisonFunc(int_const&,struct_DataStructures::Map<int,class_RakNet::HuffmanEncodingTree*,&int___cdecl_DataStructures::defaultMapKeyComparison<int>(int_const&,int_const&)>::MapNode_const&)>, *POrderedList<int,DataStructures::Map<int,RakNet::HuffmanEncodingTree*,&int___cdecl_DataStructures::defaultMapKeyComparison<int>(int_const&,int_const&)>::MapNode,&public:_static_int___cdecl_DataStructures::Map<int,class_RakNet::HuffmanEncodingTree*,&int___cdecl_DataStructures::defaultMapKeyComparison<int>(int_const&,int_const&)>::NodeComparisonFunc(int_const&,struct_DataStructures::Map<int,class_RakNet::HuffmanEncodingTree*,&int___cdecl_DataStructures::defaultMapKeyComparison<int>(int_const&,int_const&)>::MapNode_const&)>;

struct OrderedList<int,DataStructures::Map<int,RakNet::HuffmanEncodingTree*,&int___cdecl_DataStructures::defaultMapKeyComparison<int>(int_const&,int_const&)>::MapNode,&public:_static_int___cdecl_DataStructures::Map<int,class_RakNet::HuffmanEncodingTree*,&int___cdecl_DataStructures::defaultMapKeyComparison<int>(int_const&,int_const&)>::NodeComparisonFunc(int_const&,struct_DataStructures::Map<int,class_RakNet::HuffmanEncodingTree*,&int___cdecl_DataStructures::defaultMapKeyComparison<int>(int_const&,int_const&)>::MapNode_const&)> { // PlaceHolder Structure
};

typedef struct OrderedList<RakNet::uint24_t,DataStructures::RangeNode<RakNet::uint24_t>,&int___cdecl_DataStructures::RangeNodeComp<struct_RakNet::uint24_t>(struct_RakNet::uint24_t_const&,struct_DataStructures::RangeNode<struct_RakNet::uint24_t>_const&)> OrderedList<RakNet::uint24_t,DataStructures::RangeNode<RakNet::uint24_t>,&int___cdecl_DataStructures::RangeNodeComp<struct_RakNet::uint24_t>(struct_RakNet::uint24_t_const&,struct_DataStructures::RangeNode<struct_RakNet::uint24_t>_const&)>, *POrderedList<RakNet::uint24_t,DataStructures::RangeNode<RakNet::uint24_t>,&int___cdecl_DataStructures::RangeNodeComp<struct_RakNet::uint24_t>(struct_RakNet::uint24_t_const&,struct_DataStructures::RangeNode<struct_RakNet::uint24_t>_const&)>;

struct OrderedList<RakNet::uint24_t,DataStructures::RangeNode<RakNet::uint24_t>,&int___cdecl_DataStructures::RangeNodeComp<struct_RakNet::uint24_t>(struct_RakNet::uint24_t_const&,struct_DataStructures::RangeNode<struct_RakNet::uint24_t>_const&)> { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/DataStructures/Heap<unsigned___int64,RakNet::InternalPacket*,0>/HeapNode - /ois.pdb/DataStructures/Heap<unsigned__int64,RakNet::InternalPacket*,0>/HeapNode


// WARNING! conflicting data type names: /Demangler/DataStructures/Map<int,RakNet::HuffmanEncodingTree*,&int___cdecl_DataStructures::defaultMapKeyComparison<int>(int_const&,int_const&)>/MapNode - /ois.pdb/DataStructures/Map<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>>/MapNode

typedef enum CaptainExperience {
} CaptainExperience;

typedef enum ShipTextDataType {
} ShipTextDataType;

typedef enum VesselType {
} VesselType;

typedef enum CharacterPosition {
} CharacterPosition;

typedef enum CharacterEyeState {
} CharacterEyeState;

typedef enum SyncVarType {
} SyncVarType;

typedef enum ModuleType {
} ModuleType;

typedef enum OverlaySegment {
} OverlaySegment;


// WARNING! conflicting data type names: /Demangler/FMOD/Sound - /Demangler/ESound/Sound

typedef struct Channel Channel, *PChannel;

struct Channel { // PlaceHolder Structure
};

typedef struct ChannelGroup ChannelGroup, *PChannelGroup;

struct ChannelGroup { // PlaceHolder Structure
};

typedef struct System System, *PSystem;

struct System { // PlaceHolder Structure
};

typedef enum ScreenType {
} ScreenType;


// WARNING! conflicting data type names: /stdlib.h/_onexit_t - /ois.pdb/_onexit_t

typedef struct lconv lconv, *Plconv;

struct lconv {
    char *decimal_point;
    char *thousands_sep;
    char *grouping;
    char *int_curr_symbol;
    char *currency_symbol;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    wchar_t *_W_decimal_point;
    wchar_t *_W_thousands_sep;
    wchar_t *_W_int_curr_symbol;
    wchar_t *_W_currency_symbol;
    wchar_t *_W_mon_decimal_point;
    wchar_t *_W_mon_thousands_sep;
    wchar_t *_W_positive_sign;
    wchar_t *_W_negative_sign;
};

typedef struct threadlocaleinfostruct threadlocaleinfostruct, *Pthreadlocaleinfostruct;

typedef struct threadlocaleinfostruct *pthreadlocinfo;

typedef struct localerefcount localerefcount, *Plocalerefcount;

typedef struct localerefcount locrefcount;

typedef struct __lc_time_data __lc_time_data, *P__lc_time_data;

struct __lc_time_data {
    char *wday_abbr[7];
    char *wday[7];
    char *month_abbr[12];
    char *month[12];
    char *ampm[2];
    char *ww_sdatefmt;
    char *ww_ldatefmt;
    char *ww_timefmt;
    int ww_caltype;
    int refcount;
    wchar_t *_W_wday_abbr[7];
    wchar_t *_W_wday[7];
    wchar_t *_W_month_abbr[12];
    wchar_t *_W_month[12];
    wchar_t *_W_ampm[2];
    wchar_t *_W_ww_sdatefmt;
    wchar_t *_W_ww_ldatefmt;
    wchar_t *_W_ww_timefmt;
    wchar_t *_W_ww_locale_name;
};

struct localerefcount {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
};

struct threadlocaleinfostruct {
    int refcount;
    uint lc_codepage;
    uint lc_collate_cp;
    uint lc_time_cp;
    locrefcount lc_category[6];
    int lc_clike;
    int mb_cur_max;
    int *lconv_intl_refcount;
    int *lconv_num_refcount;
    int *lconv_mon_refcount;
    struct lconv *lconv;
    int *ctype1_refcount;
    ushort *ctype1;
    ushort *pctype;
    uchar *pclmap;
    uchar *pcumap;
    struct __lc_time_data *lc_time_curr;
    wchar_t *locale_name[6];
};

typedef longlong __time64_t;


// WARNING! conflicting data type names: /crtdefs.h/rsize_t - /ois.pdb/rsize_t

typedef struct localeinfo_struct localeinfo_struct, *Plocaleinfo_struct;

typedef struct threadmbcinfostruct threadmbcinfostruct, *Pthreadmbcinfostruct;

typedef struct threadmbcinfostruct *pthreadmbcinfo;

struct threadmbcinfostruct {
    int refcount;
    int mbcodepage;
    int ismbcodepage;
    ushort mbulinfo[6];
    uchar mbctype[257];
    uchar mbcasemap[256];
    wchar_t *mblocalename;
};

struct localeinfo_struct {
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
};


// WARNING! conflicting data type names: /crtdefs.h/_locale_t - /ois.pdb/_locale_t




void _dynamic_initializer_for__firstTimeBonusStr__(void);
void FUN_00401110(void);
void FUN_00401230(void);
void FUN_00401370(void);
void FUN_004014f0(void);
void FUN_00401760(void);
void FUN_004019b0(void);
void `dynamic_initializer_for_'rnr''(void);
void `dynamic_initializer_for_'RakNet::RakString::freeList''(void);
void `dynamic_initializer_for_'cleanup''(void);
void __cdecl std::_Adjust_manually_vector_aligned(void **param_1,uint *param_2);
void __thiscall Analytics::logEvent(undefined4 param_1,void *param_2);
void __thiscall word::~word(word *this);
void __thiscall DataStructures::RangeNode<>::~RangeNode<>(RangeNode<> *this);
void __cdecl std::_Deallocate<8,0>(void *param_1,uint param_2);
Clonable * __thiscall cocos2d::__Bool::clone(__Bool *this);
Clonable * __thiscall cocos2d::__Integer::clone(__Integer *this);
Clonable * __thiscall cocos2d::__Float::clone(__Float *this);
Clonable * __thiscall cocos2d::__Double::clone(__Double *this);
void * __thiscall AppDelegate::`vector_deleting_destructor'(AppDelegate *this,uint param_1);
void __thiscall AppDelegate::initGLContextAttrs(AppDelegate *this);
bool __thiscall AppDelegate::applicationDidFinishLaunching(AppDelegate *this);
void __thiscall AppDelegate::applicationWillClose(AppDelegate *this);
void __thiscall AppDelegate::applicationWillEnterForeground(AppDelegate *this);
NetworkClient * __cdecl Singleton<>::getInstance(void);
Stats * __cdecl Singleton<Stats>::getInstance(void);
PresentationInterface * __cdecl Singleton<>::getInstance(void);
basic_string<> * __thiscall std::vector<>::operator[](vector<> *this,uint param_1);
uint __thiscall std::vector<>::size(vector<> *this);
void __thiscall std::vector<>::~vector<>(vector<> *this);
char * __thiscall std::basic_string<>::c_str(basic_string<> *this);
basic_string<> * __thiscall std::basic_string<>::basic_string<>(basic_string<> *this,char *param_1);
basic_string<> * __thiscall std::basic_string<>::basic_string<>(basic_string<> *this,basic_string<> *param_1);
void __thiscall std::vector<>::_Tidy(vector<> *this);
void __thiscall std::vector<>::_Destroy(vector<> *this,basic_string<> *param_1,basic_string<> *param_2);
void __thiscall std::basic_string<>::_Tidy_init(basic_string<> *this);
basic_string<> * __thiscall std::basic_string<>::operator=(basic_string<> *this,char *param_1);
basic_string<> * __thiscall std::basic_string<>::assign(basic_string<> *this,char *param_1,uint param_2);
void __thiscall std::basic_string<>::_Construct_lv_contents(basic_string<> *this,basic_string<> *param_1);
void __thiscall std::allocator<>::deallocate(allocator<> *this,basic_string<> *param_1,uint param_2);
void __cdecl std::_Destroy_range<>(basic_string<> *param_1,basic_string<> *param_2,allocator<> *param_3);
_String_val<> * __thiscall std::_String_val<>::_String_val<>(_String_val<> *this);
void __cdecl std::basic_string<>::_Xlen(void);
_Compressed_pair<> * __thiscall std::_Compressed_pair<>::_Compressed_pair<><>(_Compressed_pair<> *this);
void * __thiscall Game::`scalar_deleting_destructor'(Game *this,uint param_1);
HardwareOutput * __cdecl HardwareOutput::getInstance(void);
bool __thiscall Game::init(Game *this);
void __thiscall Game::update(Game *this,float param_1);
NetworkServer * __cdecl Singleton<>::getInstance(void);
SoundEngine * __cdecl Singleton<>::getInstance(void);
ServerPresentationInterface * __cdecl Singleton<>::getInstance(void);
basic_string<> * __thiscall std::basic_string<>::basic_string<>(basic_string<> *this);
bool __cdecl std::operator!=<>(basic_string<> *param_1,char *param_2);
bool __cdecl std::operator==<>(basic_string<> *param_1,char *param_2);
bool __cdecl std::_Traits_equal<>(char *param_1,uint param_2,char *param_3,uint param_4);
bool __thiscall std::basic_string<>::_Equal(basic_string<> *this,char *param_1);
void __thiscall std::vector<>::~vector<>(vector<> *this);
void __thiscall std::vector<>::push_back(vector<> *this,basic_string<> *param_1);
void __thiscall std::vector<>::push_back(vector<> *this,basic_string<> *param_1);
void __thiscall std::vector<>::_Emplace_back_with_unused_capacity<>(vector<> *this,basic_string<> *param_1);
uint __thiscall std::basic_string<>::substr(basic_string<> *this,uint param_1,uint param_2);
uint __thiscall RakNet::RakPeer::GetMaximumIncomingConnections(RakPeer *this);
char * __thiscall std::basic_string<>::operator[](basic_string<> *this,uint param_1);
basic_string<> * __thiscall std::basic_string<>::append(basic_string<> *this,char *param_1);
basic_string<> * __thiscall std::basic_string<>::append(basic_string<> *this,basic_string<> *param_1);
basic_string<> * __thiscall std::basic_string<>::basic_string<>(basic_string<> *this,basic_string<> *param_1);
void __thiscall std::basic_string<>::push_back(basic_string<> *this,char param_1);
basic_string<> * __thiscall std::basic_string<>::append(basic_string<> *this,char *param_1,uint param_2);
_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buyheadnode(_Tree_comp_alloc<> *this);
void __cdecl std::_String_val<>::_Xran(void);
basic_string<> * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,basic_string<> *param_1,basic_string<> *param_2);
basic_string<> * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,basic_string<> *param_1,basic_string<> *param_2);
void __fastcall Catch_All@00403ca7(vector<> *param_1);
basic_string<> * __thiscall std::basic_string<>::_Reallocate_grow_by<>(basic_string<> *this,uint param_1,undefined4 param_3,void *param_4,size_t param_5);
void __cdecl std::vector<>::_Xlength(void);
void __thiscall std::vector<>::_Change_array(vector<> *this,basic_string<> *param_1,uint param_2,uint param_3);
basic_string<> * __cdecl std::_Uninitialized_move<>(basic_string<> *param_1,basic_string<> *param_2,basic_string<> *param_3,allocator<> *param_4);
void __thiscall std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this);
void __thiscall GameObject::getLocation(GameObject *this);
bool __thiscall Ship::isSpaceShip(Ship *this);
bool __thiscall Ship::isSpaceStation(Ship *this);
float __thiscall Ship::getSpeed(Ship *this);
int __thiscall Ship::getNextSensorID(Ship *this);
bool __thiscall ScreenElement::keyUp(ScreenElement *this,KeyCode param_1);
Beacon * __thiscall Beacon::Beacon(Beacon *this,void *param_2);
PossibleLocation * __thiscall PossibleLocation::PossibleLocation(PossibleLocation *this,void *param_2);
void * __thiscall Requirement::`scalar_deleting_destructor'(Requirement *this,uint param_1);
void __thiscall LocationManager::getNewLocation(LocationManager *this);
GameLogic * __thiscall GameLogic::GameLogic(GameLogic *this);
void __thiscall std::map<>::~map<>(map<> *this);
SpaceStation * __thiscall GameLogic::getNearestTowLocation(GameLogic *this);
void __thiscall GameLogic::createWorld(GameLogic *this);
void __thiscall GameLogic::initialiseClient(GameLogic *this,bool param_1);
void __thiscall GameLogic::shutDownCurrentScenario(GameLogic *this);
void * __thiscall Bounty::`scalar_deleting_destructor'(Bounty *this,uint param_1);
void __thiscall GameLogic::initialiseScenario(GameLogic *this);
void __thiscall PassengerInstance::~PassengerInstance(PassengerInstance *this);
void __thiscall GameLogic::completeMultiplayerScenario(GameLogic *this,int param_1);
void __thiscall GameLogic::completeSingleplayerScenario(GameLogic *this,bool param_1);
void __thiscall GameLogic::runPlayerDockLogic(GameLogic *this);
void __thiscall GameLogic::addSyntheticInstances(GameLogic *this);
void __thiscall GameLogic::resetSyntheticInstances(GameLogic *this);
void __thiscall GameLogic::clearShipsInScenario(GameLogic *this,bool param_1);
void __thiscall GameLogic::removeNonPlayedShips(GameLogic *this);
void __thiscall GameLogic::resetShipsInScenario(GameLogic *this,bool param_1);
void __thiscall GameLogic::recheckStoryShips(GameLogic *this);
void __thiscall GameLogic::spawnShip(GameLogic *this,ShipInstance *param_1);
float __thiscall GameLogic::getOrbitChangeTime(GameLogic *this,OrbitState param_1,Ship *param_2);
bool __thiscall GameLogic::runShipLogic(GameLogic *this,Ship *param_1,float param_2,bool param_3);
bool __thiscall GameLogic::safeForTimeCompression(GameLogic *this,basic_string<> *param_1);
void __thiscall GameLogic::runStateCheckLogic(GameLogic *this);
void __thiscall GameLogic::runTimeLogic(GameLogic *this,float param_1);
void __thiscall GameLogic::runServerLogic(GameLogic *this,float param_1);
void __thiscall GameLogic::runClientLogic(GameLogic *this,float param_1);
void __thiscall GameLogic::dropDebrisFromShip(GameLogic *this,Ship *param_1);
void __thiscall GameLogic::removeShipOnSettingFlag(undefined4 param_1,char *param_2);
void __thiscall GameLogic::entirelyRemoveShip(GameLogic *this,Ship *param_1,bool param_2);
int __thiscall GameLogic::convertedTimeInHours(GameLogic *this);
void __thiscall GameLogic::setHazardState(undefined4 param_1_00,int param_1);
int __thiscall GameLogic::calculateJumpDestination(GameLogic *this,int param_1,int param_2);
SpaceStation * __thiscall GameLogic::generateSpaceStation(undefined4 param_1,basic_string<> *param_2);
Ship * __thiscall GameLogic::generateShip(undefined4 param_1,undefined4 param_2,int param_3,void *param_4);
void __thiscall GameLogic::switchPlayerShipTo(GameLogic *this,Ship *param_1);
ModuleType __thiscall GameLogic::getModuleTypeForIdentifier(undefined4 param_1,void *param_2);
void __thiscall GameLogic::addComponentFilter(GameLogic *this,int param_1,ComponentCategory param_2);
void __thiscall GameLogic::addComponentFilterData(GameLogic *this,int param_1,basic_string<> *param_3);
void __thiscall GameLogic::removeSyntheticObject(GameLogic *this,SyntheticObject *param_1);
void __thiscall GameLogic::removeSensorDataFor(GameLogic *this,Ship *param_1);
void __thiscall SensorData::~SensorData(SensorData *this);
void __thiscall WaveformData::~WaveformData(WaveformData *this);
void __thiscall GameLogic::addCountermeasure(GameLogic *this,int param_1,float param_3,float param_4,undefined4 param_5,undefined4 param_6,basic_string<> *param_7);
CounterMeasure * __thiscall GameLogic::getClosestCounterMeasureTo(undefined4 param_1_00,CounterMeasure *param_1,undefined4 param_3,undefined4 param_4,char *param_5);
void __thiscall GameLogic::addExplosionSensorData(undefined4 param_1_00,undefined4 param_1,float param_3,float param_4);
void __thiscall GameLogic::explosion(undefined4 param_1_00,int param_1,int param_2,int param_4,undefined4 param_5,float param_6,float param_7);
DifficultyMode __cdecl getDifficulty(void *param_1);
void __thiscall GameLogic::clearPlayerBounties(GameLogic *this);
void __thiscall GameLogic::clearPlayerContracts(GameLogic *this);
void * __thiscall Contract::`scalar_deleting_destructor'(Contract *this,uint param_1);
bool __thiscall GameLogic::playerHasContract(GameLogic *this);
int __thiscall GameLogic::contractAmountLeftToDeliver(undefined4 param_1,char *param_2);
bool __thiscall GameLogic::hasPassenger(GameLogic *this);
int __thiscall GameLogic::getDeliveringGoodValueInPlayerContracts(undefined4 param_1,char *param_2);
int __thiscall GameLogic::getPurchaseGoodValueInPlayerContracts(undefined4 param_1,char *param_2);
void __thiscall GameLogic::trackGoodsBought(undefined4 param_1,int param_2,char *param_3);
void __thiscall GameLogic::checkContracts(GameLogic *this);
bool __thiscall GameLogic::playerHostilePiratesInSector(GameLogic *this,int param_1);
bool __thiscall GameLogic::zoneActive(GameLogic *this,Zone *param_1);
void __thiscall GameLogic::writeObituary(GameLogic *this);
void __thiscall GameLogic::skipIntroSequence(GameLogic *this);
void __thiscall GameLogic::setTimeCompressionText(undefined4 param_1,basic_string<> *param_2);
void __thiscall GameLogic::setCombatDifficulty(GameLogic *this,int param_1);
void __thiscall GameLogic::setEconomyDifficulty(GameLogic *this,int param_1);
void __thiscall GameLogic::setStartBonus(GameLogic *this,int param_1);
void __thiscall GameLogic::setStartLocation(GameLogic *this,int param_1);
void __thiscall GameLogic::reportSmuggler(GameLogic *this);
void __thiscall GameLogic::reportPirate(undefined4 param_1,void *param_2);
void __thiscall GameLogic::reportPirate(GameLogic *this,int param_1);
void __thiscall GameLogic::getCurrentLocalServers(GameLogic *this);
void __thiscall GameLogic::setLocalServer(GameLogic *this,char *param_2);
void __thiscall GameLogic::getCurrentPlayersAndShips(GameLogic *this);
bool __thiscall GameLogic::canTakeShip(GameLogic *this);
PowerManager * __cdecl Singleton<>::getInstance(void);
NetworkData * __cdecl Singleton<>::getInstance(void);
AuthorityManager * __cdecl Singleton<>::getInstance(void);
BountyManager * __cdecl Singleton<>::getInstance(void);
NotesManager * __cdecl Singleton<>::getInstance(void);
TabletManager * __cdecl Singleton<>::getInstance(void);
FictionData * __cdecl Singleton<>::getInstance(void);
Infopedia * __cdecl Singleton<Infopedia>::getInstance(void);
JunkManager * __cdecl Singleton<>::getInstance(void);
PrivateCommsManager * __cdecl Singleton<>::getInstance(void);
EmailManager * __cdecl Singleton<>::getInstance(void);
SaveHandler * __cdecl Singleton<>::getInstance(void);
ConversationManager * __cdecl Singleton<>::getInstance(void);
void __thiscall std::vector<>::push_back(vector<> *this,UIText **param_1);
void __thiscall std::vector<>::~vector<>(vector<> *this);
SectorEditor * __cdecl Singleton<>::getInstance(void);
RoomEditor * __cdecl Singleton<RoomEditor>::getInstance(void);
NPCShipManager * __cdecl Singleton<>::getInstance(void);
void __thiscall std::vector<>::erase(vector<> *this,undefined4 *param_2,void *param_3,void *param_4);
NameManager * __cdecl Singleton<>::getInstance(void);
TradeEngine * __cdecl Singleton<>::getInstance(void);
CommsManager * __cdecl Singleton<>::getInstance(void);
FlagManager * __cdecl Singleton<>::getInstance(void);
Pather * __cdecl Singleton<Pather>::getInstance(void);
JumpPoint ** __thiscall std::vector<>::operator[](vector<> *this,uint param_1);
uint __thiscall std::vector<>::size(vector<> *this);
int * __thiscall std::map<>::operator[](map<> *this,basic_string<> *param_1);
void __thiscall std::vector<>::push_back(vector<> *this,InputOption **param_1);
Vec2 * __thiscall std::vector<>::operator[](vector<> *this,uint param_1);
uint __thiscall std::vector<>::size(vector<> *this);
basic_string<> * __thiscall std::map<>::operator[](map<> *this,int *param_1);
basic_string<> * __thiscall std::vector<>::_Unchecked_end(vector<> *this);
basic_string<> * __thiscall std::vector<>::_Unchecked_begin(vector<> *this);
void __thiscall std::basic_string<>::end(basic_string<> *this);
void __thiscall std::basic_string<>::begin(basic_string<> *this);
basic_string<> * __thiscall std::basic_string<>::operator=(basic_string<> *this,basic_string<> *param_1);
basic_string<> * __thiscall std::basic_string<>::operator=(basic_string<> *this,basic_string<> *param_1);
void __thiscall std::vector<>::~vector<>(vector<> *this);
void __thiscall std::_Tree<>::_Erase(_Tree<> *this,_Tree_node<> *param_1);
_Tree_unchecked_const_iterator<> * __thiscall std::_Tree_unchecked_const_iterator<>::operator++(_Tree_unchecked_const_iterator<> *this);
void __thiscall std::_Tree<>::_Erase(_Tree<> *this,_Tree_node<> *param_1);
int * __thiscall std::_Tree<>::erase(undefined4 param_1,int *param_2,_Tree<> *param_3,_Tree<> *param_4);
void __thiscall std::_Tree<>::erase(_Tree<> *this,int *param_2,int *param_3);
_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buyheadnode(_Tree_comp_alloc<> *this);
_Tree_node<> * __thiscall std::_Tree_val<>::_Extract(_Tree_val<> *this,_Tree_node<> *param_2);
_Tree_node<> * __thiscall std::_Tree_val<>::_Extract(_Tree_val<> *this,_Tree_node<> *param_2);
_Tree_node<> * __cdecl std::_Tree_val<>::_Max(_Tree_node<> *param_1);
void __thiscall std::_Tree_val<>::_Rrotate(_Tree_val<> *this,_Tree_node<> *param_1);
void __thiscall std::_Tree_val<>::_Lrotate(_Tree_val<> *this,_Tree_node<> *param_1);
bool __cdecl std::operator!=<>(basic_string<> *param_1,basic_string<> *param_2);
void __cdecl std::transform<>(char *param_1,char *param_2,undefined1 *param_3);
void __cdecl std::remove<>(undefined4 param_1,word *param_2);
bool __cdecl std::operator==<>(char *param_1,basic_string<> *param_2);
undefined4 * __cdecl std::remove<>(int *param_1,int *param_2);
AnimationFrames ** __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,AnimationFrames **param_1,AnimationFrames **param_2);
MetaGameAction ** __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,MetaGameAction **param_1,MetaGameAction **param_2);
basic_string<> * __cdecl std::_Move_unchecked<>(basic_string<> *param_1,basic_string<> *param_2,basic_string<> *param_3);
void __thiscall std::_Tree<>::_Eqrange<>(_Tree<> *this,basic_string<> *param_1);
void __thiscall std::vector<>::_Change_array(vector<> *this,PathNode **param_1,uint param_2,uint param_3);
bool __thiscall std::basic_string<>::_Equal(basic_string<> *this,basic_string<> *param_1);
basic_string<> * __cdecl std::_Find_unchecked<>(basic_string<> *param_1,basic_string<> *param_2,basic_string<> *param_3);
void __thiscall std::_Tree<>::lower_bound(_Tree<> *this,basic_string<> *param_1);
_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buynode<>(_Tree_comp_alloc<> *this,piecewise_construct_t *param_1,tuple<> *param_2,tuple<> *param_3);
void __fastcall Catch_All@0041497c(_Tree_comp_alloc<> *param_1);
undefined4 * __thiscall std::_Tree<>::_Insert_hint<>(_Tree<> *this,undefined4 *param_2,pair<> *param_3,_Tree_node<> *param_4);
void __fastcall Catch_All@00414f44(_Tree<> *param_1);
_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buynode<>(_Tree_comp_alloc<> *this,piecewise_construct_t *param_1,tuple<int&&> *param_2,tuple<> *param_3);
undefined4 * __thiscall std::_Tree<>::_Insert_hint<>(_Tree<> *this,undefined4 *param_2,_Tree<> *param_3,_Tree_node<> *param_4);
void __fastcall Catch_All@004151f4(_Tree<> *param_1);
void __thiscall std::_Tree_comp_alloc<>::_Freenode0(_Tree_comp_alloc<> *this,_Tree_node<> *param_1);
_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buynode0(_Tree_comp_alloc<> *this);
void __thiscall std::_Tree<>::_Destroy_if_node(_Tree<> *this,_Tree_node<> *param_1);
_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buynode0(_Tree_comp_alloc<> *this);
void __thiscall std::_Tree<>::_Destroy_if_node(_Tree<> *this,_Tree_node<> *param_1);
void __thiscall std::_Tree<>::_Insert_at<>(_Tree<> *this,bool param_1,_Tree_node<> *param_2,pair<> *param_3,_Tree_node<> *param_4);
void __thiscall std::_Tree<>::_Insert_nohint<>(_Tree<> *this,bool param_1,pair<> *param_2,_Tree_node<> *param_3);
void __fastcall Catch_All@004157e0(_Tree<> *param_1);
void __thiscall std::_Tree<>::_Insert_at<>(_Tree<> *this,bool param_1,_Tree_node<> *param_2,pair<> *param_3,_Tree_node<> *param_4);
void __thiscall std::_Tree<>::_Insert_nohint<>(_Tree<> *this,bool param_1,pair<> *param_2,_Tree_node<> *param_3);
void __fastcall Catch_All@00415b97(_Tree<> *param_1);
__uint64 * ___local_stdio_printf_options(void);
int __cdecl __vsnprintf_l(char *_DstBuf,size_t _MaxCount,char *_Format,_locale_t _Locale,va_list _ArgList);
int __cdecl _sprintf(char *_Dest,char *_Format,...);
void __thiscall std::function<>::~function<>(function<> *this);
void __thiscall DataRequest::DataRequest(DataRequest *this,undefined4 param_2,int param_3,void *param_4);
void __thiscall HardwareOutput::shutdown(HardwareOutput *this);
void __thiscall HardwareOutput::findPorts(HardwareOutput *this);
void __thiscall HardwareOutput::initialisePort(HardwareOutput *this,int param_1);
void __thiscall HardwareInterface::~HardwareInterface(HardwareInterface *this);
void __thiscall HardwareInterface::sendElementData(HardwareInterface *this,char param_1,int param_2);
void __thiscall HardwareInterface::sendLine(HardwareInterface *this,char *param_1,...);
void __thiscall HardwareInterface::runSyncLogic(HardwareInterface *this,float param_1);
void __thiscall InputCommand::~InputCommand(InputCommand *this);
void __thiscall HardwareInterface::runActiveLogic(HardwareInterface *this,float param_1);
void __thiscall HardwareInterface::updateDataRequests(HardwareInterface *this,float param_1);
void __thiscall HardwareInterface::forceUpdateDataRequests(HardwareInterface *this);
void __thiscall HardwareInterface::runLogic(HardwareInterface *this,float param_1);
void __thiscall HardwareOutput::addPort(HardwareOutput *this,char *param_2);
bool __thiscall std::function<>::operator_bool(function<> *this);
function<> * __thiscall std::function<>::operator=(function<> *this,function<> *param_1);
void __thiscall std::vector<>::erase(vector<> *this,undefined4 *param_2,basic_string<> *param_3);
void __thiscall std::vector<>::_Destroy(vector<> *this,InputCommand *param_1,InputCommand *param_2);
void __thiscall std::allocator<>::deallocate(allocator<> *this,PrivateCommElement *param_1,uint param_2);
void __thiscall std::_Func_class<>::_Set(_Func_class<> *this,_Func_base<> *param_1);
bool __thiscall std::_Func_class<>::operator()(_Func_class<> *this,undefined4 param_1,undefined4 param_2,void *param_4);
bool __thiscall std::_Func_class<>::operator()(_Func_class<> *this,Ship *param_1,double param_2,double param_3,double param_4);
function<> * __thiscall std::function<>::function<><>(function<> *this);
InputCommand * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,InputCommand *param_1,InputCommand *param_2);
void __fastcall Catch_All@004180b4(vector<> *param_1);
void __cdecl std::_Destroy_range<>(InputCommand *param_1,InputCommand *param_2,allocator<> *param_3);
InputCommand * __thiscall std::vector<>::_Umove(vector<> *this,InputCommand *param_1,InputCommand *param_2,InputCommand *param_3);
void __thiscall std::_Func_impl_no_alloc<>::_Delete_this(_Func_impl_no_alloc<> *this,bool param_1);
void * __thiscall std::_Func_impl_no_alloc<>::_Get(_Func_impl_no_alloc<> *this);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<> * __thiscall std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1);
_Func_base<> * __thiscall std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1);
bool __thiscall std::_Func_impl_no_alloc<>::_Do_call(_Func_impl_no_alloc<> *this,Ship **param_1,double *param_2,double *param_3,double *param_4);
_Func_impl_no_alloc<> * __thiscall std::_Func_impl_no_alloc<>::_Func_impl_no_alloc<><>(_Func_impl_no_alloc<> *this,function<> *param_1);
_Func_impl_no_alloc<> * __cdecl std::_Global_new<>(function<> *param_1);
void Catch_All@0041847d(uint param_1);
void __thiscall std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this);
_Func_impl_no_alloc<> * __cdecl std::_Global_new<>(function<> *param_1);
void Catch_All@0041850f(uint param_1);
void __thiscall Interface::~Interface(Interface *this);
void __thiscall ModManager::initialise(ModManager *this);
Mod * __thiscall ModManager::getModInfo(undefined4 param_1,basic_string<> *param_2);
void __thiscall std::map<>::~map<>(map<> *this);
void __thiscall ModManager::getFolders(undefined4 param_1,vector<> *param_2,char *param_3,int param_4,int param_5,int param_6,undefined8 param_7);
uint __thiscall std::_Tree<>::count(_Tree<> *this,basic_string<> *param_1);
basic_string<> * __thiscall std::map<>::operator[](map<> *this,basic_string<> *param_1);
void __thiscall std::basic_string<>::~basic_string<>(basic_string<> *this);
void __thiscall std::_Tree_comp_alloc<>::~_Tree_comp_alloc<>(_Tree_comp_alloc<> *this);
void __thiscall std::_Tree<>::_Tidy(_Tree<> *this);
void __thiscall std::basic_string<>::_Tidy_deallocate(basic_string<> *this);
void __thiscall std::_Tree<>::erase(_Tree<> *this,undefined4 *param_2,_Tree<> *param_3,_Tree<> *param_4);
_Tree_node<> * __thiscall std::_Tree_val<>::_Extract(_Tree_val<> *this,_Tree_node<> *param_2);
void __thiscall std::_Tree<>::_Erase(_Tree<> *this,_Tree_node<> *param_1);
basic_string<> * __thiscall std::basic_string<>::_Reallocate_grow_by<>(basic_string<> *this,undefined4 param_1,undefined4 param_3,undefined2 param_4);
void __thiscall std::pair<>::~pair<>(pair<> *this);
void __thiscall std::map<>::_Try_emplace<>(map<> *this,basic_string<> *param_1);
void __thiscall std::basic_string<>::_Construct<char*>(basic_string<> *this,char *param_1,char *param_2);
void Catch_All@0041a06a(void);
basic_string<> * __thiscall std::basic_string<>::_Reallocate_grow_by<>(basic_string<> *this,uint param_1);
_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buynode<>(_Tree_comp_alloc<> *this,piecewise_construct_t *param_1,tuple<> *param_2,tuple<> *param_3);
undefined4 * __thiscall std::_Tree<>::_Insert_hint<>(_Tree<> *this,undefined4 *param_2,pair<> *param_3,_Tree_node<> *param_4);
void __fastcall Catch_All@0041a7c4(_Tree<> *param_1);
void __thiscall std::_Tree_comp_alloc<>::_Freenode0(_Tree_comp_alloc<> *this,_Tree_node<> *param_1);
_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buynode0(_Tree_comp_alloc<> *this);
void __thiscall std::_Tree<>::_Destroy_if_node(_Tree<> *this,_Tree_node<> *param_1);
void __thiscall std::_Tree<>::_Insert_at<>(_Tree<> *this,bool param_1,_Tree_node<> *param_2,pair<> *param_3,_Tree_node<> *param_4);
void __thiscall std::_Tree<>::_Insert_nohint<>(_Tree<> *this,bool param_1,pair<> *param_2,_Tree_node<> *param_3);
void __fastcall Catch_All@0041acf1(_Tree<> *param_1);
AddressOrGUID * __thiscall RakNet::AddressOrGUID::AddressOrGUID(AddressOrGUID *this,RakNetGUID *param_1);
void __thiscall NetworkClient::initialise(NetworkClient *this);
bool __thiscall NetworkClient::validServer(undefined4 param_1,void *param_2);
void __thiscall NetworkClient::connectToServer(NetworkClient *this,char *param_1,int param_2);
void switchD_0041b083::caseD_1(void);
void __thiscall NetworkClient::disconnectFromServer(NetworkClient *this);
void __thiscall NetworkClient::runLogic(NetworkClient *this,float param_1);
void __thiscall NetworkClient::addChatLogItem(NetworkClient *this,void *param_2);
LogLine * __thiscall LogLine::LogLine(LogLine *this,void *param_2);
void __thiscall NetworkData::sendSetClientInfo(undefined4 param_1,void *param_2);
void __thiscall NetworkData::sendShipCommand(NetworkData *this,int param_1,double param_2,double param_3,double param_4);
void __thiscall NetworkData::sendAddShip(undefined4 param_1_00,undefined4 param_1,undefined4 param_3,undefined4 param_4,undefined4 param_5,void *param_6);
void __thiscall NetworkData::sendSync(NetworkData *this,RakNetGUID param_1,SyncNode *param_2);
void __thiscall Packet_SyncValueString::~Packet_SyncValueString(Packet_SyncValueString *this);
void __thiscall NetworkData::sendSetModule(undefined4 param_1_00,int param_1,int param_3_00,undefined4 param_4,undefined4 param_5,undefined4 param_2,undefined4 param_3,undefined4 *param_8);
void __thiscall NetworkData::sendSetModuleBasicSettings(NetworkData *this,RakNetGUID param_1,int param_2,int param_3,ShipModule *param_4);
void __thiscall NetworkData::sendSetModuleDetails(NetworkData *this,RakNetGUID param_1,int param_2,int param_3,ShipModule *param_4);
void __thiscall NetworkData::sendSetComponent(NetworkData *this,RakNetGUID param_1,ShipModule *param_2,int param_3);
void __thiscall NetworkData::sendServerInfoBasic(undefined4 param_1_00,undefined4 param_1,undefined4 param_3,undefined4 param_4,undefined4 param_5,void *param_6);
void __thiscall ServerInfoState::~ServerInfoState(ServerInfoState *this);
void __thiscall NetworkData::sendServerInfoAdvanced(undefined4 param_1_00,undefined4 param_1,undefined4 param_3,undefined4 param_4,undefined4 param_5,void *param_6);
void __thiscall NetworkData::sendSetAddon(NetworkData *this,RakNetGUID param_1,ShipModule *param_2,int param_3);
void __thiscall NetworkData::sendUpdateSensorDataBasic(NetworkData *this,RakNetGUID param_1,SensorData *param_2);
void __thiscall NetworkData::sendUpdateSensorDataAdvanced(NetworkData *this,RakNetGUID param_1,SensorData *param_2);
void __thiscall NetworkData::sendUpdateSensorWaveform(NetworkData *this,RakNetGUID param_1,SensorData *param_2);
void __thiscall NetworkData::sendLog(NetworkData *this,RakNetGUID param_1,LogLine *param_2);
void __thiscall NetworkData::sendChatLineToServer(undefined4 param_1,undefined4 *param_2);
void __thiscall NetworkData::sendPresentationCommand(NetworkData *this,RakNetGUID param_1,int param_2,float param_3,float param_4);
void __thiscall NetworkData::unpackSetScenario(NetworkData *this,Packet_SetScenario *param_1);
void __thiscall NetworkData::sendChatLineFromServer(undefined4 param_1,void *param_2);
void __thiscall NetworkData::sendMessageToClient(undefined4 param_1_00,undefined4 *param_1,undefined4 *param_3);
void __thiscall NetworkData::unpackSetScenarioState(NetworkData *this,Packet_SetScenarioState *param_1);
void __thiscall NetworkData::unpackSetCargoComponents(NetworkData *this,Packet_CargoState *param_1);
void __thiscall NetworkData::unpackSetModuleBasicSettings(NetworkData *this,Packet_SetModuleBasicSettings *param_1);
void __thiscall NetworkData::unpackSetModuleDetails(NetworkData *this,Packet_SetModuleDetails *param_1);
void __thiscall NetworkData::unpackSetComponent(NetworkData *this,Packet_SetComponent *param_1);
void __thiscall NetworkData::unpackSetAddon(NetworkData *this,Packet_SetAddon *param_1);
void __thiscall NetworkData::unpackUpdateSensorDataAdvanced(NetworkData *this,Packet_UpdateSensorDataAdvanced *param_1);
void __thiscall NetworkData::unpackUpdateSensorWaveform(NetworkData *this,Packet_UpdateSensorWaveform *param_1);
void __thiscall NetworkData::unpackDataRequest(NetworkData *this,RakNetGUID param_1,Packet_DataRequest *param_2);
void __thiscall NetworkData::unpackServerAdmin(NetworkData *this,RakNetGUID param_1,Packet_ServerAdmin *param_2);
void __thiscall NetworkData::unpackSetGoLiveState(NetworkData *this,RakNetGUID param_1,Packet_SetGoLiveState *param_2);
void __thiscall NetworkData::unpackSetClientInfo(NetworkData *this,RakNetGUID param_1,Packet_SetClientInfo *param_2);
void __thiscall NetworkData::unpackReceiveMessageFromServer(NetworkData *this,Packet_SendMessage *param_1);
void __thiscall NetworkData::unpackReceiveMessageFromClient(NetworkData *this,RakNetGUID param_1,Packet_SendMessage *param_2);
void __thiscall NetworkData::unpackWeaponCommand(NetworkData *this,Packet_WeaponCommand *param_1);
void __thiscall NetworkData::unpackSetHullState(NetworkData *this,Packet_HullState *param_1);
void __thiscall NetworkData::unpackServerInfoAdvanced(NetworkData *this,Packet_ServerInfoAdvanced *param_1);
void * __thiscall ServerUserState::`scalar_deleting_destructor'(ServerUserState *this,uint param_1);
void __thiscall ServerShipState::~ServerShipState(ServerShipState *this);
void __thiscall NetworkData::unpackAddShip(NetworkData *this,RakNetGUID param_1,Packet_AddShip *param_2);
void __thiscall NetworkData::unpackRunCommand(NetworkData *this,RakNetGUID param_1,Packet_RunCommand *param_2);
void __thiscall NetworkData::unpackSyncNumerical(NetworkData *this,Packet_SyncValueNumerical *param_1);
Waypoint * __thiscall std::vector<>::operator[](vector<> *this,uint param_1);
uint __thiscall std::vector<>::size(vector<> *this);
void __thiscall std::vector<>::~vector<>(vector<> *this);
void __thiscall std::vector<>::clear(vector<> *this);
int * __thiscall std::map<>::operator[](map<> *this,int *param_1);
Waypoint * __thiscall std::vector<>::_Emplace_reallocate<Waypoint>(vector<> *this,Waypoint *param_1,Waypoint *param_2);
HullDamageChance * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,HullDamageChance *param_1,HullDamageChance *param_2);
Waypoint * __thiscall std::vector<>::_Umove(vector<> *this,Waypoint *param_1,Waypoint *param_2,Waypoint *param_3);
_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buynode<>(_Tree_comp_alloc<> *this,piecewise_construct_t *param_1,tuple<int&&> *param_2,tuple<> *param_3);
undefined4 * __thiscall std::_Tree<>::_Insert_hint<>(_Tree<> *this,undefined4 *param_2,pair<> *param_3,_Tree_node<> *param_4);
void __fastcall Catch_All@004217bb(_Tree<> *param_1);
_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buynode0(_Tree_comp_alloc<> *this);
void __thiscall std::_Tree<>::_Destroy_if_node(_Tree<> *this,_Tree_node<> *param_1);
void __thiscall std::_Tree<>::_Insert_at<>(_Tree<> *this,bool param_1,_Tree_node<> *param_2,pair<> *param_3,_Tree_node<> *param_4);
void __thiscall std::_Tree<>::_Insert_nohint<>(_Tree<> *this,bool param_1,pair<> *param_2,_Tree_node<> *param_3);
void __fastcall Catch_All@00421b8f(_Tree<> *param_1);
int __cdecl __vfprintf_l(FILE *_File,char *_Format,_locale_t _Locale,va_list _ArgList);
int __cdecl _printf(char *_Format,...);
SyncNode * __thiscall SyncNode::SyncNode(SyncNode *this,int param_1,SyncVarType param_2,void *param_3);
void __thiscall WaypointState::setState(WaypointState *this);
bool __thiscall WaypointState::checkState(WaypointState *this);
void __thiscall CargoState::setState(CargoState *this);
bool __thiscall WeaponState::checkState(WeaponState *this);
bool __thiscall SensorDataStates::checkWaveform(SensorDataStates *this);
bool __thiscall SensorDataStates::checkAdvancedDetails(SensorDataStates *this);
bool __thiscall ServerInfoState::checkAdvancedDetails(ServerInfoState *this);
void * __thiscall ClientInfo::`scalar_deleting_destructor'(ClientInfo *this,uint param_1);
bool __thiscall NetworkServer::shipHasConnectedClient(NetworkServer *this,char *param_2);
void __thiscall NetworkServer::sendSound(NetworkServer *this,undefined4 param_2,undefined4 param_3,char *param_4);
void __thiscall NetworkServer::sendLog(NetworkServer *this,LogLine *param_2,char *param_3);
void __thiscall NetworkServer::sendShipDetailsToClient(NetworkServer *this,int param_1,int param_3,undefined4 param_4,int param_5,void *param_6);
void __thiscall NetworkServer::recheckShipsToSync(NetworkServer *this);
void __thiscall ShipSyncNode::~ShipSyncNode(ShipSyncNode *this);
ShipSyncNode * __thiscall NetworkServer::startSyncingShip(NetworkServer *this,basic_string<> *param_2);
void __thiscall NetworkServer::addOrRemoveComponent(NetworkServer *this,char *param_2);
void __thiscall NetworkServer::removeWeapon(NetworkServer *this,int param_2,char *param_3);
void __thiscall NetworkServer::stopSyncingModule(NetworkServer *this,int param_2,char *param_3);
void __thiscall NetworkServer::startSyncingCargoState(NetworkServer *this,ShipSyncNode *param_1);
void __thiscall NetworkServer::startSyncingWaypoints(NetworkServer *this,ShipSyncNode *param_1);
void __thiscall NetworkServer::startSyncingModuleState(NetworkServer *this,ShipSyncNode *param_1,ShipModule *param_2);
void __thiscall NetworkServer::startSyncingHullState(NetworkServer *this,ShipSyncNode *param_1,int param_2);
void __thiscall NetworkServer::startSyncingServerInfoState(NetworkServer *this);
void __thiscall NetworkServer::startSyncingWeapon(NetworkServer *this,ShipSyncNode *param_1,int param_2,Weapon *param_3);
void __thiscall NetworkServer::startSyncingSensorDataState(NetworkServer *this,ShipSyncNode *param_1,SensorData *param_2);
void __thiscall NetworkServer::runLogic(NetworkServer *this,float param_1);
void __thiscall NetworkServer::runSyncCheck(NetworkServer *this,float param_1,bool param_2);
void __thiscall SensorDataStates::~SensorDataStates(SensorDataStates *this);
ClientInfo * __thiscall NetworkServer::addClientInfo(NetworkServer *this,int param_1,int param_3,undefined4 param_4,undefined4 param_5,basic_string<> *param_6);
void __thiscall NetworkServer::removeClientInfo(NetworkServer *this,RakNetGUID param_1);
void __thiscall NetworkServer::parseRemoteCommand(undefined4 param_1_00,undefined1 *param_1,void *param_3);
void __thiscall NetworkServer::forceSessionToBegin(NetworkServer *this);
vector<> * __thiscall std::vector<>::vector<>(vector<> *this,vector<> *param_1);
HullStrength * __thiscall std::vector<>::operator[](vector<> *this,uint param_1);
uint __thiscall std::vector<>::size(vector<> *this);
void __thiscall std::vector<>::push_back(vector<> *this,Vec2 *param_1);
vector<> * __thiscall std::vector<>::vector<>(vector<> *this);
Vec2 * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,Vec2 *param_1,Vec2 *param_2);
void __thiscall std::vector<>::_Change_array(vector<> *this,Vec2 *param_1,uint param_2,uint param_3);
TerminalEngine * __thiscall TerminalEngine::TerminalEngine(TerminalEngine *this);
void __thiscall TerminalEngine::executeCurrentCommand(TerminalEngine *this);
bool __thiscall TerminalEngine::keyReleased(TerminalEngine *this,KeyCode param_1);
void __thiscall TerminalEngine::renderNextChunkOfFile(TerminalEngine *this);
vector<> * __thiscall std::vector<>::operator=(vector<> *this,vector<> *param_1);
vector<> * __thiscall std::vector<>::vector<>(vector<> *this,vector<> *param_1);
void Catch_All@0042bb65(void);
void __thiscall std::basic_string<>::erase(basic_string<> *this,int *param_2,int param_3);
bool __thiscall std::vector<>::_Buy(vector<> *this,uint param_1);
void __thiscall std::_Func_class<>::operator()(_Func_class<> *this,void *param_2);
basic_string<> * __thiscall std::vector<>::_Ucopy<>(vector<> *this,basic_string<> *param_1,basic_string<> *param_2,basic_string<> *param_3);
int __cdecl _vsnprintf(char *_Dest,size_t _Count,char *_Format,va_list _Args);
TextEngine * __thiscall TextEngine::TextEngine(TextEngine *this,TextField *param_1,int param_2,int param_3,int param_4,vector<> *param_5);
void __thiscall TextEngine::showDocument(TextEngine *this,undefined4 *param_2);
void __thiscall TextEngine::finishShowingDocument(TextEngine *this);
void __thiscall TextEngine::renderDocument(TextEngine *this);
void __thiscall TextEngine::renderDocumentFooter(TextEngine *this);
void __thiscall TextEngine::showList(TextEngine *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,basic_string<> *param_6);
void __thiscall TextEngine::renderList(TextEngine *this);
void __thiscall TextEngine::finishShowingList(TextEngine *this,bool param_1);
void __thiscall TextEngine::render(TextEngine *this);
bool __thiscall TextEngine::lineIsNull(undefined4 param_1,undefined4 *param_2);
bool __thiscall TextEngine::lineEndsWithSpace(undefined4 param_1,undefined4 *param_2);
void __thiscall TextEngine::addLineWithWrap(TextEngine *this,uint param_2,undefined4 *param_3);
void __thiscall TextEngine::addBlankLine(TextEngine *this);
void __thiscall TextEngine::addLine(TextEngine *this,void *param_2);
void __thiscall TextEngine::addLinef(TextEngine *this,char *param_1,...);
void __thiscall TextEngine::setBottomText(TextEngine *this,basic_string<> *param_2);
function<> * __thiscall std::function<>::operator=(function<> *this,function<> *param_1);
basic_string<> * __thiscall std::basic_string<>::operator=(basic_string<> *this,char param_1);
void __thiscall std::_Func_class<>::_Swap(_Func_class<> *this,_Func_class<> *param_1);
void __thiscall std::_Func_class<void,int>::operator()(_Func_class<void,int> *this,int param_1);
void __thiscall std::vector<>::_Assign_range<>(vector<> *this,basic_string<> *param_1,basic_string<> *param_2);
basic_string<> * __cdecl std::_Copy_unchecked<>(basic_string<> *param_1,basic_string<> *param_2,basic_string<> *param_3);
void __thiscall CharacterAnimationManager::addAnimation(CharacterAnimationManager *this,basic_string<> *param_2);
basic_string<> * __thiscall CharacterAnimationManager::getRandomAnimation(CharacterAnimationManager *this,basic_string<> *param_2,void *param_3);
AnimationSet * __thiscall CharacterAnimationManager::getSet(CharacterAnimationManager *this,char *param_2);
basic_string<> * __thiscall CharacterLocation::CharacterLocation(CharacterLocation *this,void *param_2);
void __thiscall GameCharacter::addAddition(GameCharacter *this,undefined4 *param_2);
uint __thiscall std::basic_string<>::find(basic_string<> *this,char *param_1,uint param_2);
uint __cdecl std::_Traits_find<>(char *param_1,uint param_2,uint param_3,char *param_4,uint param_5);
void __thiscall LiveMessage::generateRealMessage(LiveMessage *this);
void __thiscall CommsManager::reset(CommsManager *this);
void * __thiscall LiveMessage::`scalar_deleting_destructor'(LiveMessage *this,uint param_1);
void __thiscall CommsManager::addLiveMessage(CommsManager *this,undefined4 param_1,basic_string<> *param_3);
PrivateCommOption * __thiscall PrivateCommOption::PrivateCommOption(PrivateCommOption *this,undefined4 param_1,undefined4 param_2,void *param_4);
void __thiscall PrivateCommOption::setActionFunction(PrivateCommOption *this,void *param_2);
void __thiscall PrivateCommOption::setExistFunction(PrivateCommOption *this,void *param_2);
void __thiscall PrivateComm::reset(PrivateComm *this);
basic_string<> * __thiscall PrivateComm::describeSource(PrivateComm *this);
void __thiscall PrivateComm::render(PrivateComm *this,basic_string<> *param_1,basic_string<> *param_2);
void __thiscall PrivateComm::changeElement(PrivateComm *this,int param_1);
int __thiscall PrivateComm::getNextValidElement(PrivateComm *this);
int __thiscall PrivateComm::getValidatedElement(PrivateComm *this);
int __thiscall PrivateComm::selectElement(PrivateComm *this);
void __thiscall std::vector<>::~vector<>(vector<> *this);
function<> * __thiscall std::function<>::function<>(function<> *this);
void __thiscall std::vector<>::_Destroy(vector<> *this,PrivateCommElement *param_1,PrivateCommElement *param_2);
void __thiscall std::vector<>::_Tidy(vector<> *this);
void __thiscall std::vector<>::_Tidy(vector<> *this);
void __thiscall std::vector<>::_Destroy(vector<> *this,PrivateCommOption *param_1,PrivateCommOption *param_2);
void __thiscall std::allocator<>::deallocate(allocator<> *this,PrivateCommOption *param_1,uint param_2);
function<> * __thiscall std::function<>::operator=<>(function<> *this,function<> *param_1);
void __thiscall PrivateCommElement::~PrivateCommElement(PrivateCommElement *this);
void __thiscall PrivateCommOption::~PrivateCommOption(PrivateCommOption *this);
ConversationOption * __thiscall ConversationOption::ConversationOption(ConversationOption *this,undefined4 param_1,undefined4 param_2,void *param_4);
void __thiscall PrivateCommsManager::reset(PrivateCommsManager *this);
bool __thiscall PrivateCommsManager::keyPressed(PrivateCommsManager *this,KeyCode param_1);
int __thiscall PrivateCommsManager::firstValidConversationOption(PrivateCommsManager *this);
void __thiscall PrivateCommsManager::activateCurrentConversationElement(PrivateCommsManager *this);
void __thiscall PrivateCommsManager::switchTo(PrivateCommsManager *this,int param_1);
void __thiscall PrivateCommsManager::cancelCurrentHail(PrivateCommsManager *this);
void __thiscall PrivateCommsManager::goBackToList(PrivateCommsManager *this);
bool __thiscall PrivateCommsManager::runSecureSpaceStationBBSLogic(PrivateCommsManager *this,float param_1);
bool __thiscall PrivateCommsManager::runSecureShipHailLogic(PrivateCommsManager *this,float param_1);
void __thiscall PrivateCommsManager::runLogic(PrivateCommsManager *this,float param_1);
void __thiscall PrivateCommsManager::renderConversation(PrivateCommsManager *this,float param_1);
void __thiscall PrivateCommsManager::renderComm(PrivateCommsManager *this,float param_1);
void __thiscall PrivateCommsManager::addGarbageChar(PrivateCommsManager *this,char param_1);
void __thiscall PrivateCommsManager::render(PrivateCommsManager *this,bool param_1,bool param_2);
void __thiscall PrivateCommsManager::renderList(PrivateCommsManager *this);
void __thiscall PrivateCommsManager::renderCurrentConversationElement(PrivateCommsManager *this);
bool __thiscall PrivateCommsManager::hasValidOptionInCurrentElement(PrivateCommsManager *this);
void __thiscall PrivateComm::~PrivateComm(PrivateComm *this);
bool __thiscall PrivateCommsManager::regenerateList(PrivateCommsManager *this);
void __thiscall PrivateCommsManager::generateSpaceStationComms(PrivateCommsManager *this,PrivateComm *param_1,SpaceStation *param_2);
void __thiscall PrivateCommsManager::generateShipComms(PrivateCommsManager *this,Ship *param_1);
void __thiscall std::vector<>::emplace_back<>(vector<> *this,PrivateCommElement *param_1);
void __thiscall std::vector<>::clear(vector<> *this);
void __thiscall std::vector<>::push_back(vector<> *this,PrivateCommOption *param_1);
PrivateCommElement * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,PrivateCommElement *param_1,PrivateCommElement *param_2);
void __fastcall Catch_All@00436723(vector<> *param_1);
PrivateCommOption * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,PrivateCommOption *param_1,PrivateCommOption *param_2);
void __fastcall Catch_All@004368df(vector<> *param_1);
PrivateCommOption * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,PrivateCommOption *param_1,PrivateCommOption *param_2);
void __fastcall Catch_All@00436a9f(vector<> *param_1);
PrivateCommOption * __thiscall PrivateCommOption::PrivateCommOption(PrivateCommOption *this,PrivateCommOption *param_1);
PrivateCommOption * __thiscall PrivateCommOption::PrivateCommOption(PrivateCommOption *this,PrivateCommOption *param_1);
void __thiscall std::vector<>::_Change_array(vector<> *this,PrivateCommOption *param_1,uint param_2,uint param_3);
void __thiscall std::vector<>::_Umove_if_noexcept(vector<> *this,PrivateCommOption *param_1,PrivateCommOption *param_2,PrivateCommOption *param_3);
PrivateCommOption * __thiscall std::vector<>::_Umove(vector<> *this,PrivateCommOption *param_1,PrivateCommOption *param_2,PrivateCommOption *param_3);
vector<> * __thiscall std::vector<>::vector<>(vector<> *this,vector<> *param_1);
void Catch_All@00437000(void);
vector<> * __thiscall std::vector<>::vector<>(vector<> *this,vector<> *param_1);
void Catch_All@00437169(void);
PrivateCommElement * __cdecl std::_Uninitialized_move<>(PrivateCommElement *param_1,PrivateCommElement *param_2,PrivateCommElement *param_3,allocator<> *param_4);
void __thiscall std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this);
void __thiscall std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this);
float __thiscall ShipComponent::getDamageAsModifier(ShipComponent *this);
bool __thiscall ComponentClass::isAddon(ComponentClass *this);
ComponentInterface * __cdecl ComponentInterface::getInterface(char *param_1);
int __thiscall ComponentInterfaceInstance::getComponentCount(ComponentInterfaceInstance *this);
void __thiscall ComponentInterfaceInstance::applyConfiguration(ComponentInterfaceInstance *this,ModuleConfiguration *param_1);
bool __thiscall ComponentInterfaceInstance::setActive(ComponentInterfaceInstance *this,int param_1);
int __thiscall ComponentInterfaceInstance::damagePercent(ComponentInterfaceInstance *this);
void __thiscall ComponentInterfaceInstance::damageAtLocation(ComponentInterfaceInstance *this,int param_1,DamageType param_2,int param_3,int param_4);
void __thiscall ComponentInterfaceInstance::damage(ComponentInterfaceInstance *this,int param_1,DamageType param_2);
int __thiscall ComponentInterfaceInstance::getEfficiencyPercent(ComponentInterfaceInstance *this);
float __thiscall ComponentInterfaceInstance::getEmissionsModifier(ComponentInterfaceInstance *this);
float __thiscall ComponentInterfaceInstance::getPowerModifier(ComponentInterfaceInstance *this);
void __thiscall CargoManager::render(CargoManager *this,TabletScreenType param_1);
void __thiscall CargoManager::keyHit(CargoManager *this,KeyCode param_1);
void __thiscall ComputerSystemInterface::setScreenSize(ComputerSystemInterface *this,int param_1,int param_2);
ConversationElement * __thiscall ConversationManager::addConversationElement(ConversationManager *this,void *param_2);
void __thiscall ConversationManager::addConversationReq(ConversationManager *this,void *param_2);
ConversationOption * __thiscall ConversationManager::addConversationOption(ConversationManager *this,void *param_2);
void __thiscall ConversationManager::addConversationOptionReq(ConversationManager *this,void *param_2);
void __thiscall ConversationManager::addConversationOptionAction(ConversationManager *this,void *param_2);
void __thiscall ConversationManager::addConversationElementAction(ConversationManager *this,void *param_2);
Conversation * __thiscall ConversationManager::getConversation(ConversationManager *this,int param_2,char param_3,char *param_4);
int __thiscall ConversationManager::hasConversationToForce(ConversationManager *this,char *param_2);
void __thiscall Ship::shipDocking(Ship *this,Ship *param_1);
void __thiscall ConversationManager::keyHit(ConversationManager *this,KeyCode param_1);
void __thiscall ConversationManager::performElementActions(ConversationManager *this,ConversationElement *param_1);
Message * __thiscall Message::Message(Message *this,undefined4 param_1,void *param_3);
Email * __thiscall Email::Email(Email *this,void *param_2);
void __thiscall MenuItem::~MenuItem(MenuItem *this);
EmailInstance * __thiscall EmailInstance::EmailInstance(EmailInstance *this);
void * __thiscall EmailInstance::`scalar_deleting_destructor'(EmailInstance *this,uint param_1);
void __thiscall EmailManager::resetState(EmailManager *this);
Email * __thiscall EmailManager::getEmail(EmailManager *this,char *param_2);
EmailDraftSet * __thiscall EmailManager::getDraftSet(EmailManager *this,char *param_2);
void __thiscall EmailManager::markEmailSent(EmailManager *this,char *param_2);
void __thiscall EmailManager::sendEmail(EmailManager *this,CommsData *param_1,Email *param_2);
void __thiscall EmailManager::getEmailStateText(EmailManager *this);
void __thiscall EmailManager::runLogic(EmailManager *this,CommsData *param_1,float param_2,bool param_3);
int __thiscall EmailManager::getUnsentEmailCount(EmailManager *this);
int __thiscall EmailManager::getUnreadEmailCount(EmailManager *this);
int __thiscall EmailManager::getUnreadNewsArticleCount(EmailManager *this);
int __thiscall EmailManager::getDraftCount(EmailManager *this);
void __thiscall EmailManager::syncEmails(EmailManager *this,CommsData *param_1);
void __thiscall EmailManager::addCustomEmail(EmailManager *this,basic_string<> *param_2);
void __thiscall MultiplayerTabletManager::render(MultiplayerTabletManager *this,TabletScreenType param_1);
void __thiscall MultiplayerTabletManager::keyHit(MultiplayerTabletManager *this,KeyCode param_1);
void __thiscall MultiplayerTabletManager::renderStatus(MultiplayerTabletManager *this);
void __thiscall MultiplayerTabletManager::renderScenario(MultiplayerTabletManager *this);
ListData * __thiscall ListData::ListData(ListData *this,undefined4 param_1,void *param_3);
void __thiscall NotesManager::populateNotes(NotesManager *this,vector<> *param_1);
void __thiscall ListData::~ListData(ListData *this);
void __thiscall NotesManager::getSelectedNotesText(NotesManager *this);
void __cdecl std::_Default_allocator_traits<>::construct<>(allocator<ListData> *param_1,ListData *param_2,ListData *param_3);
ListData * __thiscall std::vector<>::_Emplace_reallocate<ListData>(vector<> *this,ListData *param_1,ListData *param_2);
void __thiscall std::vector<>::_Change_array(vector<> *this,ListData *param_1,uint param_2,uint param_3);
void __thiscall std::vector<>::_Destroy(vector<> *this,ListData *param_1,ListData *param_2);
void __thiscall std::allocator<ListData>::deallocate(allocator<ListData> *this,ListData *param_1,uint param_2);
void __thiscall SensorManager::down(SensorManager *this,Ship *param_1);
void __thiscall SensorManager::up(SensorManager *this,Ship *param_1);
void __thiscall SensorManager::left(SensorManager *this,Ship *param_1);
void __thiscall SensorManager::right(SensorManager *this,Ship *param_1);
bool __thiscall SensorManager::keyPressed(SensorManager *this,KeyCode param_1);
void __thiscall TabletInterface::render(TabletInterface *this,TabletScreenType param_1);
void __thiscall TabletInterface::keyHit(TabletInterface *this,KeyCode param_1);
Dice * __thiscall Dice::Dice(Dice *this,int param_1,int param_2,int param_3);
Widget * __thiscall Widget::Widget(Widget *this);
Zone * __thiscall Zone::Zone(Zone *this);
IllegalGood * __thiscall IllegalGood::IllegalGood(IllegalGood *this);
EngineeringSlotLocation * __thiscall EngineeringSlotLocation::EngineeringSlotLocation(EngineeringSlotLocation *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_5,undefined4 param_6,undefined4 param_7);
void __thiscall ModuleRenderData::~ModuleRenderData(ModuleRenderData *this);
ScreenData * __thiscall ScreenData::ScreenData(ScreenData *this);
FlagTimeToSet * __thiscall FlagTimeToSet::FlagTimeToSet(FlagTimeToSet *this);
PlayerGuidedToPort * __thiscall PlayerGuidedToPort::PlayerGuidedToPort(PlayerGuidedToPort *this,void *param_2);
bool __cdecl stringStartsWith(uchar *param_1,char *param_2);
LineData * __thiscall LineData::LineData(LineData *this,uchar *param_1);
void __cdecl parseLines(char *param_1,_func_void_uchar_ptr *param_2,bool param_3);
bool __cdecl DataLoader::loadNewsArticle(undefined4 *param_1);
bool __cdecl DataLoader::loadInfoArticle(void *param_1);
void __cdecl DataLoader::loadChatter(void *param_1);
void __cdecl DataLoader::loadAllChatter(void);
void __cdecl DataLoader::createSector(void);
void __cdecl DataLoader::createGameState(void);
void __cdecl DataLoader::createJunkSpawn(void);
void __cdecl DataLoader::createPlanet(void);
void __cdecl DataLoader::createTextMarker(void);
void __cdecl DataLoader::createNebula(void);
void __cdecl DataLoader::createAsteroidField(void);
void __cdecl DataLoader::createMoon(void);
void __cdecl DataLoader::createPassengerQuirk(void);
void __cdecl DataLoader::createPassenger(void *param_1);
void __cdecl DataLoader::createPassengers(void);
void __cdecl DataLoader::createJunk(void);
void __cdecl DataLoader::createJumpPoint(void);
void __cdecl DataLoader::createSpawnPoint(void);
void __cdecl DataLoader::createZone(void);
void __cdecl DataLoader::createNavpoint(void);
void __cdecl DataLoader::createStar(void);
void __cdecl DataLoader::addBootElement(void *param_1);
void __cdecl DataLoader::addModuleConfiguration(void *param_1);
void __cdecl DataLoader::createModule(void);
void __cdecl DataLoader::createHazard(void);
void __cdecl DataLoader::createGood(void);
void __cdecl DataLoader::createTradeLocation(void);
ShipSaleSet * __thiscall ShipSaleSet::ShipSaleSet(ShipSaleSet *this);
ShipSale * __thiscall ShipSale::ShipSale(ShipSale *this);
void __cdecl DataLoader::addDockingElement(void *param_1);
void __thiscall DockProcessElement::~DockProcessElement(DockProcessElement *this);
void __cdecl DataLoader::addHullDamageChanceElement(basic_string<> *param_1,int param_2);
void __cdecl DataLoader::addHullStrengthElement(basic_string<> *param_1,int param_2);
void __cdecl DataLoader::createShipClass(void);
void __cdecl DataLoader::addComponentInterfaceSlot(void *param_1);
void __cdecl DataLoader::addComponentInterfaceLine(void *param_1);
void __cdecl DataLoader::createComponentInterface(void);
void __cdecl DataLoader::createComponentClass(void);
void __cdecl DataLoader::addCharacterOverlay(void *param_1);
void __cdecl DataLoader::addCharacterComponent(void *param_1);
void __cdecl DataLoader::addCharacterAddition(void *param_1);
void __cdecl DataLoader::createTrack(void);
void __cdecl DataLoader::createAds(void);
void __cdecl DataLoader::createEmotes(void);
void __cdecl DataLoader::createAnimationFrames(void);
void __cdecl DataLoader::createCharacterClass(void);
void __cdecl DataLoader::createCharacter(void);
void __cdecl DataLoader::createConversation(void);
void __cdecl DataLoader::createConversationElement(void);
void __cdecl DataLoader::createConversationOption(void);
void __cdecl DataLoader::createContract(void);
void __cdecl DataLoader::createWeaponClass(void);
void __cdecl DataLoader::createDepot(void);
void __cdecl DataLoader::createSpaceStation(void);
void __cdecl DataLoader::createJumpgate(void);
void __cdecl DataLoader::configureLocations(LocationManager *param_1);
void __cdecl DataLoader::configureWidgetExistValues(basic_string<> *param_1);
void __cdecl DataLoader::configureTextDataForWidget(void *param_1);
void __cdecl DataLoader::createWidget(void *param_1);
void __thiscall Widget::~Widget(Widget *this);
void __cdecl DataLoader::checkAndCreateWidget(void *param_1);
void __cdecl DataLoader::createScreen(void);
void __thiscall MouseCursor::~MouseCursor(MouseCursor *this);
void __cdecl DataLoader::createScenario(void);
void __cdecl DataLoader::createNavMarker(void);
void __cdecl DataLoader::addShipDestination(void **param_1);
void __cdecl DataLoader::createShip(void);
void __cdecl DataLoader::createCharacterAnimationSet(void);
void __cdecl DataLoader::createStats(void);
void __cdecl DataLoader::createTimedFlags(void);
void __cdecl DataLoader::createTimedFlag(void);
void __cdecl DataLoader::createEmailFileMetaData(void);
void __cdecl DataLoader::createEmail(void);
void __cdecl DataLoader::createDraftSet(void);
void __cdecl DataLoader::createDraft(void);
void __cdecl DataLoader::createSynthetic(void);
void __fastcall FUN_00474d49(undefined4 *param_1,undefined4 param_2,uint param_3);
void __cdecl DataLoader::createFaction(void);
void __cdecl DataLoader::createStoryNote(void);
void __cdecl DataLoader::createRoom(void);
void __cdecl DataLoader::createRoomObject(void);
void __thiscall ScreenData::~ScreenData(ScreenData *this);
void __cdecl DataLoader::parseGeneric(uchar *param_1);
uint __thiscall std::_Tree<>::count(_Tree<> *this,basic_string<> *param_1);
PassengerManager * __cdecl Singleton<>::getInstance(void);
ShipChatterData * __cdecl Singleton<>::getInstance(void);
CharacterAnimationManager * __cdecl Singleton<>::getInstance(void);
void __thiscall std::vector<>::push_back(vector<> *this,PlayerGuidedToPort *param_1);
void __thiscall std::vector<>::push_back(vector<> *this,ScreenData *param_1);
void __thiscall std::vector<>::push_back(vector<> *this,Destination *param_1);
void __thiscall std::vector<>::push_back(vector<> *this,EngineeringSlotLocation *param_1);
void __thiscall std::vector<>::~vector<>(vector<> *this);
void __thiscall std::vector<>::~vector<>(vector<> *this);
vector<> * __thiscall std::map<>::operator[](map<> *this,basic_string<> *param_1);
vector<> * __thiscall std::map<>::operator[](map<> *this,basic_string<> *param_1);
basic_string<> * __thiscall std::map<>::operator[](map<> *this,basic_string<> *param_1);
void __thiscall std::_Tree<>::_Erase(_Tree<> *this,_Tree_node<> *param_1);
void __thiscall std::vector<>::_Tidy(vector<> *this);
void __thiscall std::vector<>::_Destroy(vector<> *this,MouseCursor *param_1,MouseCursor *param_2);
void __thiscall std::allocator<NavMarker>::deallocate(allocator<NavMarker> *this,NavMarker *param_1,uint param_2);
void __thiscall std::vector<>::_Destroy(vector<> *this,Widget *param_1,Widget *param_2);
void __thiscall std::allocator<Widget>::deallocate(allocator<Widget> *this,Widget *param_1,uint param_2);
_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buyheadnode(_Tree_comp_alloc<> *this);
_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buyheadnode(_Tree_comp_alloc<> *this);
NavMarker * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,NavMarker *param_1,NavMarker *param_2);
void __fastcall Catch_All@0047dde4(vector<> *param_1);
void __cdecl std::_Default_allocator_traits<>::construct<>(allocator<> *param_1,PlayerGuidedToPort *param_2,PlayerGuidedToPort *param_3);
PlayerGuidedToPort * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,PlayerGuidedToPort *param_1,PlayerGuidedToPort *param_2);
NSMSectorInfo * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,NSMSectorInfo *param_1,NSMSectorInfo *param_2);
ScreenData * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,ScreenData *param_1,ScreenData *param_2);
void __fastcall Catch_All@0047e4bc(vector<> *param_1);
ComponentInterface ** __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,ComponentInterface **param_1,ComponentInterface **param_2);
Destination * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,Destination *param_1,Destination *param_2);
void __fastcall Catch_All@0047e827(vector<> *param_1);
DockProcessElement * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,DockProcessElement *param_1,DockProcessElement *param_2);
void __fastcall Catch_All@0047ea4f(vector<> *param_1);
EngineeringSlotLocation * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,EngineeringSlotLocation *param_1,EngineeringSlotLocation *param_2);
MouseCursor * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,MouseCursor *param_1,MouseCursor *param_2);
void __fastcall Catch_All@0047ee8a(vector<> *param_1);
Widget * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,Widget *param_1,Widget *param_2);
void __fastcall Catch_All@0047f0dc(vector<> *param_1);
BootElement * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,BootElement *param_1,BootElement *param_2);
void __fastcall Catch_All@0047f2b0(vector<> *param_1);
basic_string<> * __thiscall std::basic_string<>::_Reallocate_grow_by<>(basic_string<> *this);
void __thiscall std::_Tree<>::_Eqrange<>(_Tree<> *this,basic_string<> *param_1);
ScreenData * __thiscall ScreenData::ScreenData(ScreenData *this,ScreenData *param_1);
Widget * __thiscall Widget::Widget(Widget *this,Widget *param_1);
void __thiscall std::pair<>::~pair<>(pair<> *this);
void __thiscall std::vector<>::_Destroy(vector<> *this,NavMarker *param_1,NavMarker *param_2);
NavMarker * __thiscall std::vector<>::_Umove(vector<> *this,NavMarker *param_1,NavMarker *param_2,NavMarker *param_3);
uint __thiscall std::vector<>::size(vector<> *this);
void __thiscall std::vector<>::_Destroy(vector<> *this,ScreenData *param_1,ScreenData *param_2);
ScreenData * __thiscall std::vector<>::_Umove(vector<> *this,ScreenData *param_1,ScreenData *param_2,ScreenData *param_3);
void __thiscall std::allocator<ScreenData>::deallocate(allocator<ScreenData> *this,ScreenData *param_1,uint param_2);
void __thiscall std::vector<>::_Change_array(vector<> *this,Destination *param_1,uint param_2,uint param_3);
void __thiscall std::vector<>::_Destroy(vector<> *this,Destination *param_1,Destination *param_2);
void __thiscall std::vector<>::_Umove_if_noexcept(vector<> *this,Destination *param_1,Destination *param_2,Destination *param_3);
Destination * __thiscall std::vector<>::_Umove(vector<> *this,Destination *param_1,Destination *param_2,Destination *param_3);
void __thiscall std::allocator<>::deallocate(allocator<> *this,Destination *param_1,uint param_2);
void __thiscall std::vector<>::_Destroy(vector<> *this,DockProcessElement *param_1,DockProcessElement *param_2);
void __thiscall std::allocator<>::deallocate(allocator<> *this,DockProcessElement *param_1,uint param_2);
EngineeringSlotLocation * __thiscall std::vector<>::_Umove(vector<> *this,EngineeringSlotLocation *param_1,EngineeringSlotLocation *param_2,EngineeringSlotLocation *param_3);
MouseCursor * __thiscall std::vector<>::_Umove(vector<> *this,MouseCursor *param_1,MouseCursor *param_2,MouseCursor *param_3);
Widget * __thiscall std::vector<>::_Umove(vector<> *this,Widget *param_1,Widget *param_2,Widget *param_3);
void __thiscall std::vector<>::_Destroy(vector<> *this,BootElement *param_1,BootElement *param_2);
void __thiscall std::allocator<word>::deallocate(allocator<word> *this,word *param_1,uint param_2);
void __thiscall std::map<>::_Try_emplace<>(map<> *this,basic_string<> *param_1);
void __cdecl std::_Destroy_range<>(NavMarker *param_1,NavMarker *param_2,allocator<NavMarker> *param_3);
void __cdecl std::_Destroy_range<>(Destination *param_1,Destination *param_2,allocator<> *param_3);
void __cdecl std::_Destroy_range<>(DockProcessElement *param_1,DockProcessElement *param_2,allocator<> *param_3);
DockProcessElement * __cdecl std::_Uninitialized_move<>(DockProcessElement *param_1,DockProcessElement *param_2,DockProcessElement *param_3,allocator<> *param_4);
void __cdecl std::_Destroy_range<>(BootElement *param_1,BootElement *param_2,allocator<> *param_3);
BootElement * __cdecl std::_Uninitialized_move<>(BootElement *param_1,BootElement *param_2,BootElement *param_3,allocator<> *param_4);
_Tree<> * __thiscall std::_Tree<>::_Tree<><>(_Tree<> *this,_Tree<> *param_1,allocator<> *param_2);
void Catch_All@0048054d(void);
MouseCursor * __cdecl std::_Uninitialized_copy<>(MouseCursor *param_1,MouseCursor *param_2,MouseCursor *param_3,allocator<> *param_4);
void __thiscall std::_Tree<>::lower_bound(_Tree<> *this,basic_string<> *param_1);
void __thiscall std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this);
void __thiscall std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this);
void __thiscall std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this);
void __thiscall std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this);
void __thiscall std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this);
_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buynode<>(_Tree_comp_alloc<> *this,piecewise_construct_t *param_1,tuple<> *param_2,tuple<> *param_3);
undefined4 * __thiscall FUN_004807e0(void *this,undefined4 *param_1,pair<> *param_2,_Tree_node<> *param_3);
void __fastcall Catch_All@00480dab(_Tree<> *param_1);
_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buynode<>(_Tree_comp_alloc<> *this,piecewise_construct_t *param_1,tuple<> *param_2,tuple<> *param_3);
void __fastcall Catch_All@00480e3a(_Tree_comp_alloc<> *param_1);
_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buynode<>(_Tree_comp_alloc<> *this,piecewise_construct_t *param_1,tuple<> *param_2,tuple<> *param_3);
void __fastcall Catch_All@00480ec7(_Tree_comp_alloc<> *param_1);
_Tree_node<> * __thiscall std::_Tree<>::_Copy_nodes<>(_Tree<> *this,undefined4 *param_1,undefined4 param_2,undefined4 param_4);
void Catch_All@00480f7f(void);
void __thiscall std::_Tree_comp_alloc<>::_Freenode0(_Tree_comp_alloc<> *this,_Tree_node<> *param_1);
_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buynode0(_Tree_comp_alloc<> *this);
void __thiscall std::_Tree<>::_Destroy_if_node(_Tree<> *this,_Tree_node<> *param_1);
void __thiscall std::_Tree<>::_Insert_at<>(_Tree<> *this,bool param_1,_Tree_node<> *param_2,pair<> *param_3,_Tree_node<> *param_4);
void __thiscall std::_Tree<>::_Insert_nohint<>(_Tree<> *this,bool param_1,pair<> *param_2,_Tree_node<> *param_3);
void __fastcall Catch_All@004814e1(_Tree<> *param_1);
Widget * __thiscall Widget::Widget(Widget *this,Widget *param_1);
_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buynode<>(_Tree_comp_alloc<> *this,pair<> *param_1);
void __fastcall Catch_All@00481999(_Tree_comp_alloc<> *param_1);
bool __thiscall BankAccount::addTransaction(BankAccount *this,undefined4 param_1,int param_2,void *param_4);
void __thiscall BankTransaction::~BankTransaction(BankTransaction *this);
BankAccount * __thiscall BankEngine::openAccount(BankEngine *this,void *param_2);
BankTransaction * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,BankTransaction *param_1,BankTransaction *param_2);
void __cdecl std::_Destroy_range<>(BankTransaction *param_1,BankTransaction *param_2,allocator<> *param_3);
BankTransaction * __cdecl std::_Uninitialized_move<>(BankTransaction *param_1,BankTransaction *param_2,BankTransaction *param_3,allocator<> *param_4);
void __thiscall Bounty::describeThreeLines(Bounty *this);
BountyClass * __thiscall BountyClass::BountyClass(BountyClass *this);
void __thiscall BountyManager::completeBounty(BountyManager *this,Bounty *param_1);
void * __thiscall ContractCargoInstance::`scalar_deleting_destructor'(ContractCargoInstance *this,uint param_1);
int __thiscall Contract::hoursLeft(Contract *this);
void __thiscall Contract::describeThreeLines(Contract *this,bool param_1,bool param_2);
void __thiscall Contract::describeShort(Contract *this);
void __thiscall Contract::describeShortToVector(Contract *this);
void __thiscall Contract::performContractCompletion(Contract *this);
void __thiscall Contract::performContractFailure(Contract *this);
void __thiscall ContractClass::~ContractClass(ContractClass *this);
ContractClass * __thiscall ContractManager::getRandomContractClassForLocation(undefined4 param_1_00,uint param_1,int param_3,int param_4,undefined4 param_5,void *param_6);
ContractClass * __thiscall ContractManager::getContractClassForIdentifier(undefined4 param_1,char *param_2);
Contract * __thiscall ContractManager::generateContract(void);
Passenger * __thiscall Passenger::Passenger(Passenger *this);
void __thiscall Passenger::addQuirk(undefined4 param_1,undefined4 *param_2);
void __thiscall PassengerInstance::PassengerInstance(PassengerInstance *this,Passenger *param_1);
void __thiscall PassengerInstance::pickup(PassengerInstance *this);
void __thiscall PassengerInstance::leaveAngry(PassengerInstance *this);
void __thiscall PassengerInstance::leave(PassengerInstance *this);
vector<> * __thiscall PassengerManager::getValidPassengersForLocation(PassengerManager *this,vector<> *param_2,char *param_3);
void __thiscall TradeEngine::TradeEngine(TradeEngine *this);
void __thiscall Shop::~Shop(Shop *this);
TradeLocation * __thiscall TradeEngine::getTradeLocation(TradeEngine *this,char param_2,char *param_3);
void __thiscall TradeEngine::repopulateCurrentContracts(TradeEngine *this);
void __thiscall TradeEngine::getShopHeader(TradeEngine *this,Shop param_1);
void __thiscall TradeEngine::populateCargoItems(TradeEngine *this,vector<> *param_1,bool param_2);
bool __thiscall TradeEngine::checkCargoItems(TradeEngine *this,vector<> *param_1,bool param_2);
void __thiscall TradeEngine::populateCargoComponentItems(TradeEngine *this,vector<> *param_1);
bool __thiscall TradeEngine::checkCargoComponentItems(TradeEngine *this,vector<> *param_1);
void __thiscall TradeEngine::populateShopItems(TradeEngine *this,vector<> *param_1);
bool __thiscall TradeEngine::checkShopItems(TradeEngine *this,vector<> *param_1);
void __thiscall TradeEngine::populateWireItems(TradeEngine *this,vector<> *param_1);
bool __thiscall TradeEngine::checkWireItems(TradeEngine *this,vector<> *param_1);
void __thiscall TradeEngine::populateWireCargoItems(TradeEngine *this,vector<> *param_1);
bool __thiscall TradeEngine::checkWireCargoItems(TradeEngine *this,vector<> *param_1);
void __thiscall TradeEngine::populateShopComponentItems(TradeEngine *this,vector<> *param_1);
bool __thiscall TradeEngine::checkShopComponentItems(TradeEngine *this,vector<> *param_1);
void __thiscall TradeEngine::clearComponentSelection(TradeEngine *this);
void __thiscall TradeEngine::resetModuleFilter(TradeEngine *this);
void __thiscall TradeEngine::clearModuleSelection(TradeEngine *this);
void __thiscall TradeEngine::resetComponentFilter(TradeEngine *this);
void __thiscall TradeEngine::resetStates(TradeEngine *this);
void __thiscall TradeEngine::regenerateAllShipsForSale(TradeEngine *this);
bool __thiscall TradeEngine::currentCommodityPurchaseValid(TradeEngine *this,TextEngine *param_1);
bool __thiscall TradeEngine::currentBlackMarketPurchaseValid(TradeEngine *this,TextEngine *param_1);
bool __thiscall TradeEngine::currentComponentPurchaseValid(TradeEngine *this,TextEngine *param_1);
bool __thiscall TradeEngine::currentPurchaseValid(TradeEngine *this,Shop param_1,TextEngine *param_2);
bool __thiscall TradeEngine::currentCommoditySaleValid(TradeEngine *this,TextEngine *param_1);
bool __thiscall TradeEngine::currentBlackMarketSaleValid(TradeEngine *this,TextEngine *param_1);
bool __thiscall TradeEngine::currentSaleValid(TradeEngine *this,Shop param_1,TextEngine *param_2);
int __thiscall TradeEngine::maxCanAffordForCurrentTrade(TradeEngine *this,Shop param_1);
int __thiscall TradeEngine::maxForCurrentTrade(TradeEngine *this,Shop param_1);
void __thiscall TradeEngine::selectRightSide(TradeEngine *this,Shop param_1);
void __thiscall TradeEngine::selectLeftSide(TradeEngine *this,Shop param_1);
int __thiscall TradeEngine::getBestAmountToSellOf(TradeEngine *this,int param_1);
void __thiscall TradeEngine::getCurrentTopStr(TradeEngine *this,Shop param_1);
Shop __thiscall TradeEngine::getCurrentIcon(TradeEngine *this,Shop param_1);
void __thiscall TradeEngine::performCommodityTrade(TradeEngine *this,TextEngine *param_1);
void __thiscall TradeEngine::performBlackMarketTrade(TradeEngine *this,TextEngine *param_1);
void __thiscall TradeEngine::performComponentTrade(TradeEngine *this,TextEngine *param_1);
void __thiscall TradeEngine::performTrade(TradeEngine *this,Shop param_1,TextEngine *param_2);
int __thiscall TradeEngine::getMaxLoanSize(TradeEngine *this);
void __thiscall TradeEngine::populateCommerceMenu(TradeEngine *this,vector<> *param_1);
void __thiscall TradeEngine::populateCompanies(TradeEngine *this,vector<> *param_1);
void __thiscall TradeEngine::getCompanyStr(TradeEngine *this);
bool __thiscall TradeEngine::performPurchaseLicense(TradeEngine *this);
bool __thiscall TradeEngine::canPurchaseLicense(TradeEngine *this);
void __thiscall TradeEngine::populateContracts(TradeEngine *this,vector<> *param_1);
bool __thiscall TradeEngine::canTakeCurrentContract(TradeEngine *this);
void __thiscall TradeEngine::getContractStr(TradeEngine *this);
bool __thiscall TradeEngine::canDeliverContract(TradeEngine *this);
bool __thiscall TradeEngine::deliverContract(TradeEngine *this);
bool __thiscall TradeEngine::canTakeContract(TradeEngine *this);
bool __thiscall TradeEngine::takeContract(TradeEngine *this);
void __thiscall TradeEngine::populateBanks(TradeEngine *this,vector<> *param_1);
bool __thiscall TradeEngine::checkBanks(TradeEngine *this,vector<> *param_1);
void __thiscall TradeEngine::getLoanStr(TradeEngine *this);
bool __thiscall TradeEngine::currentLoanValid(TradeEngine *this);
bool __thiscall TradeEngine::currentRepaymentValid(TradeEngine *this);
void __thiscall TradeEngine::takeLoan(TradeEngine *this);
void __thiscall TradeEngine::repayLoan(TradeEngine *this);
bool __thiscall TradeEngine::mechanicCanUpgradePod(TradeEngine *this,int param_1);
bool __thiscall TradeEngine::mechanicCanBuyModule(TradeEngine *this);
void __thiscall TradeEngine::getMechanicStatus(TradeEngine *this);
void __thiscall TradeEngine::getPodStatus(TradeEngine *this);
void __thiscall TradeEngine::getModuleStatus(TradeEngine *this);
void __thiscall TradeEngine::getHullSectionStatus(TradeEngine *this);
bool __thiscall TradeEngine::canBuyArmament(TradeEngine *this,Ship *param_1,int param_2);
bool __thiscall TradeEngine::canSellArmament(TradeEngine *this,Ship *param_1,int param_2);
bool __thiscall TradeEngine::performSellArmament(TradeEngine *this);
void __thiscall Weapon::~Weapon(Weapon *this);
void __thiscall TradeEngine::getArmamentStatus(TradeEngine *this);
bool __thiscall TradeEngine::performRepair(TradeEngine *this);
bool __thiscall TradeEngine::performSellPod(TradeEngine *this);
bool __thiscall TradeEngine::performModuleTransaction(TradeEngine *this);
bool __thiscall TradeEngine::performUpgradePod(TradeEngine *this,int param_1);
void __thiscall TradeEngine::populateMechanicMenu(TradeEngine *this,vector<> *param_1);
void __thiscall TradeEngine::populateMechanicHullParts(TradeEngine *this,vector<> *param_1);
bool __thiscall TradeEngine::checkMechanicHullParts(TradeEngine *this,vector<> *param_1);
void __thiscall TradeEngine::populateMechanicPods(TradeEngine *this,vector<> *param_1);
bool __thiscall TradeEngine::checkMechanicPods(TradeEngine *this,vector<> *param_1);
void __thiscall TradeEngine::populateMechanicModules(TradeEngine *this,vector<> *param_1);
bool __thiscall TradeEngine::checkMechanicModules(TradeEngine *this,vector<> *param_1);
void __thiscall TradeEngine::populateMechanicArmaments(TradeEngine *this,vector<> *param_1);
void __thiscall TradeEngine::populateShips(TradeEngine *this,vector<> *param_1);
void __thiscall TradeEngine::getShipSelectedText(TradeEngine *this);
bool __thiscall TradeEngine::shipCanBuy(TradeEngine *this);
void __thiscall TradeEngine::performBuyShip(TradeEngine *this);
void __thiscall TradeEngine::populatePassengers(TradeEngine *this,vector<> *param_1);
bool __thiscall TradeEngine::checkPassengers(TradeEngine *this,vector<> *param_1);
void __thiscall TradeEngine::getPassengerInfo(TradeEngine *this);
void __thiscall TradeEngine::getCargoViewText(TradeEngine *this);
void __thiscall TradeEngine::populateBountyItems(TradeEngine *this,vector<> *param_1);
bool __thiscall TradeEngine::checkBountyItems(TradeEngine *this,vector<> *param_1);
void __thiscall TradeEngine::getBountyStr(TradeEngine *this);
bool __thiscall TradeEngine::performTakeBounty(TradeEngine *this);
ShipMechanics * __cdecl Singleton<>::getInstance(void);
void __thiscall std::vector<>::~vector<>(vector<> *this);
void __cdecl std::_Default_allocator_traits<>::construct<Shop,Shop>(allocator<Shop> *param_1,Shop *param_2,Shop *param_3);
Shop * __thiscall std::vector<>::_Emplace_reallocate<Shop>(vector<> *this,Shop *param_1,Shop *param_2);
void __cdecl std::_Destroy_range<>(Shop *param_1,Shop *param_2,allocator<Shop> *param_3);
void __thiscall std::map<>::_Try_emplace<int_const&>(map<> *this,int *param_1);
TradeItemInstance * __thiscall TradeItemInstance::TradeItemInstance(TradeItemInstance *this,int param_1);
void __thiscall TradeLocation::~TradeLocation(TradeLocation *this);
void * __thiscall TradeItemInstance::`scalar_deleting_destructor'(TradeItemInstance *this,uint param_1);
void __thiscall Faction::~Faction(Faction *this);
void __thiscall TradeLocation::addTradeItemInstance(TradeLocation *this,TradeItemInstance *param_1,bool param_2);
void __thiscall TradeLocation::addContractGoods(TradeLocation *this,char *param_2);
void __thiscall TradeLocation::removeGoods(TradeLocation *this,int param_1,int param_2);
void __thiscall TradeLocation::soldGood(TradeLocation *this,int param_1,int param_2);
int __thiscall TradeLocation::goodAmountWire(TradeLocation *this,int param_1);
bool __thiscall TradeLocation::doesBuyWire(TradeLocation *this,int param_1);
void __thiscall TradeLocation::itemiseSaleDetailsWire(TradeLocation *this,int param_1,int param_2);
int __thiscall TradeLocation::goodAmount(TradeLocation *this,char *param_2);
int __thiscall TradeLocation::goodAmount(TradeLocation *this,int param_1);
void __thiscall TradeLocation::clearGoods(TradeLocation *this,bool param_1);
int __thiscall TradeLocation::singleBaseGoodCost(TradeLocation *this,int param_1,bool param_2);
int __thiscall TradeLocation::singleGoodCost(TradeLocation *this,int param_1,bool param_2);
int __thiscall TradeLocation::goodCost(TradeLocation *this,int param_1,int param_2,bool param_3);
int __thiscall TradeLocation::singleGoodCostWire(TradeLocation *this,int param_1,bool param_2);
int __thiscall TradeLocation::goodCostWire(TradeLocation *this,int param_1,int param_2,bool param_3);
void __thiscall TradeLocation::itemiseSaleDetails(TradeLocation *this,int param_1,int param_2);
void __thiscall TradeLocation::getCurrentTradeSummary(TradeLocation *this);
void __thiscall TradeLocation::getCurrentBuyPrices(TradeLocation *this);
void __thiscall TradeLocation::getCurrentContractSummary(TradeLocation *this);
void __thiscall TradeLocation::getCurrentPassengerSummary(TradeLocation *this);
bool __thiscall TradeLocation::doesBuy(TradeLocation *this,int param_1);
void __thiscall TradeLocation::resetAndRepopulate(TradeLocation *this);
void __thiscall TradeLocation::resetContracts(TradeLocation *this);
void __thiscall TradeLocation::clearContracts(TradeLocation *this);
void __thiscall TradeLocation::populateContracts(TradeLocation *this);
void __thiscall TradeLocation::restockWithContracts(TradeLocation *this);
void __thiscall TradeLocation::addRandomComponents(TradeLocation *this);
void __thiscall TradeLocation::addRandomModules(TradeLocation *this);
void __thiscall TradeLocation::clearShipsForSale(TradeLocation *this);
void __thiscall TradeLocation::regenerateShipsForSale(TradeLocation *this);
void __thiscall TradeLocation::generateShip(TradeLocation *this,ShipSale *param_1);
bool __thiscall ConversationOption::checkReq(ConversationOption *this,CargoHold *param_1,BankAccount *param_2);
ConversationElement * __thiscall ConversationElement::ConversationElement(ConversationElement *this,int param_1,int param_2);
Conversation * __thiscall Conversation::Conversation(Conversation *this,undefined4 param_1,void *param_3);
ConversationElement * __thiscall Conversation::getElement(Conversation *this,int param_1);
ConversationOption * __thiscall ConversationElement::getOption(ConversationElement *this,int param_1);
void __thiscall Faction::getAccess(Faction *this);
bool __thiscall Faction::officeAtLocation(Faction *this,char *param_2);
void __thiscall Faction::modifyState(Faction *this,int param_1);
int __thiscall Faction::getCurrentTier(Faction *this);
int __thiscall Faction::amountCanBorrow(Faction *this);
void __thiscall Faction::runDayEndLogic(Faction *this);
void __thiscall Faction::repay(Faction *this,int param_1);
Faction * __thiscall FictionData::getFactionForNumber(FictionData *this,int param_1);
Faction * __thiscall FictionData::getFactionForID(FictionData *this,char *param_2);
ComparisonCheckType __cdecl comparisonFromString(void *param_1);
void __thiscall FlagManager::setFlag(FlagManager *this,char *param_2);
bool __thiscall FlagManager::flagSet(FlagManager *this,void *param_2);
void __thiscall FlagManager::reset(FlagManager *this);
void __thiscall FlagManager::runFlagLogic(FlagManager *this,float param_1,FlagTimeToSet *param_2);
void __thiscall FlagManager::runLogic(FlagManager *this,float param_1);
FlagTimeToSet * __thiscall FlagManager::addFlagToSet(FlagManager *this);
void __thiscall Requirement::Requirement(Requirement *this,undefined4 *param_2);
bool __thiscall Requirement::checkReq(Requirement *this,CargoHold *param_1,BankAccount *param_2);
float * __thiscall std::map<>::operator[](map<> *this,basic_string<> *param_1);
bool * __thiscall std::map<>::operator[](map<> *this,basic_string<> *param_1);
undefined4 * __thiscall std::_Tree<>::_Insert_hint<>(_Tree<> *this,undefined4 *param_2,pair<> *param_3,_Tree_node<> *param_4);
void __fastcall Catch_All@004a34cf(_Tree<> *param_1);
_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buynode<>(_Tree_comp_alloc<> *this,piecewise_construct_t *param_1,tuple<> *param_2,tuple<> *param_3);
void __fastcall Catch_All@004a3559(_Tree_comp_alloc<> *param_1);
void __thiscall std::_Tree<>::_Insert_at<>(_Tree<> *this,bool param_1,_Tree_node<> *param_2,pair<> *param_3,_Tree_node<> *param_4);
void __thiscall std::_Tree<>::_Insert_nohint<>(_Tree<> *this,bool param_1,pair<> *param_2,_Tree_node<> *param_3);
void __fastcall Catch_All@004a3900(_Tree<> *param_1);
void __thiscall Infopedia::setArticle(Infopedia *this,void *param_2);
void __thiscall Infopedia::setArticle(Infopedia *this,int param_1);
void __thiscall Infopedia::refilterArticles(Infopedia *this);
MetaGameAction * __thiscall MetaGameAction::MetaGameAction(MetaGameAction *this,int param_1,basic_string<> *param_3);
void __thiscall MetaGameAction::perform(MetaGameAction *this);
void __thiscall NameManager::loadNames(NameManager *this);
void __thiscall NameManager::generateFreighterName(NameManager *this);
void __thiscall NameManager::generatePirateName(NameManager *this);
void __thiscall NameManager::generatePoliceName(NameManager *this);
void __thiscall NameManager::loadLinesFromFile(undefined4 param_1,undefined4 *param_2,void *param_3);
void __thiscall NameManager::generateBuyableName(NameManager *this);
void __thiscall NameManager::addRego(NameManager *this,void *param_2);
void __thiscall NameManager::generateGeneralRego(NameManager *this);
void __thiscall NameManager::getLocationForRego(undefined4 param_1,basic_string<> *param_2,char *param_3);
void __thiscall NameManager::generatePoliceRego(NameManager *this);
bool __thiscall NameManager::regoExists(NameManager *this,char *param_2);
GameData * __thiscall GameData::GameData(GameData *this);
void __thiscall GameData::<>::~<>(<> *this);
void __thiscall GameData::<>::~<>(<> *this);
Ship * __thiscall GameData::getShipWithinDistance(undefined4 param_1_00,int param_1,int param_3,char param_4);
Ship * __thiscall GameData::getShipWithID(GameData *this,int param_1);
SpaceStation * __thiscall GameData::getSpaceStation(undefined4 param_1,char *param_2);
Sector * __thiscall GameData::getSectorOfShip(undefined4 param_1,char *param_2);
Ship * __thiscall GameData::getShipWithRego(undefined4 param_1,char *param_2);
Sector * __thiscall GameData::getSectorWithID(GameData *this,int param_1);
Sector * __thiscall GameData::getSectorWithShortName(undefined4 param_1,char *param_2);
HazardCategory * __thiscall GameData::getNebulaHazardCategory(GameData *this,int param_1);
HazardCategory * __thiscall GameData::getAsteroidHazardCategory(GameData *this,int param_1);
Structure * __thiscall GameData::getStructure(GameData *this,char param_2,char *param_3);
Room * __thiscall GameData::getRoom(undefined4 param_1,void *param_2);
GameCharacter * __thiscall GameData::getCharacter(undefined4 param_1,char *param_2);
GameCharacter * __thiscall GameData::getExtraWithTag(undefined4 param_1,void *param_2);
void __thiscall GameData::setUniqueObjects(undefined4 param_1,int param_2,byte param_3,void *param_4);
GameCharacter * __thiscall GameData::getCharacterAtSpawnPoint(undefined4 param_1,char *param_2);
CharacterLocation * __thiscall GameData::getCharacterLocationAtSpawnPoint(undefined4 param_1,char *param_2);
ShipModuleClass * __thiscall GameData::getModuleClassWithIdentifier(undefined4 param_1,char *param_2);
ShipClass * __thiscall GameData::getShipClassWithIdentifier(undefined4 param_1,char *param_2);
WeaponClass * __thiscall GameData::getWeaponClassWithIdentifier(undefined4 param_1,char *param_2);
ScreenLayout * __thiscall GameData::getScreenLayout(undefined4 param_1,char *param_2);
Scenario * __thiscall GameData::getScenario(undefined4 param_1,char *param_2);
Good * __thiscall GameData::getGoodWithShortName(undefined4 param_1,char *param_2);
Good * __thiscall GameData::getGood(GameData *this,int param_1);
StellarObject * __thiscall GameData::getStellarObjectWithinDistance(undefined4 param_1_00,int param_1,undefined4 param_3,undefined4 param_4,float param_5);
StateModifier * __thiscall GameData::getStateModifier(undefined4 param_1,char *param_2);
void __thiscall GameData::resetStateModifiers(GameData *this);
Quadrant __cdecl quadrantFor(float param_1,float param_2);
Quadrant __cdecl getQuadrant(void *param_1);
Quadrant __cdecl invertQuadrant(Quadrant param_1);
void __thiscall GameObject::setLocation(GameObject *this,float param_2,float param_3);
bool __thiscall AuthorityManager::shipHasBeenScanned(AuthorityManager *this,void *param_2);
void __thiscall AuthorityManager::haveScannedShip(AuthorityManager *this,void *param_2);
void __thiscall AuthorityManager::reportBelligerant(AuthorityManager *this,char param_2,void *param_3);
uint __thiscall std::_Tree<>::count(_Tree<> *this,basic_string<> *param_1);
Junk * __thiscall JunkManager::getRandomJunkForSector(JunkManager *this,Sector *param_1);
void __thiscall JunkManager::generateJunkForSector(JunkManager *this,Sector *param_1,undefined4 param_3,undefined4 param_4);
void __thiscall NPCShipManager::generateNewFreighter(NPCShipManager *this,int param_1);
void __thiscall NPCShipManager::setFreighterDestination(NPCShipManager *this,Ship *param_1,SpaceStation *param_2);
void __thiscall NPCShipManager::generateNewPoliceVessel(NPCShipManager *this,int param_1);
Ship * __thiscall NPCShipManager::generateNewMilitaryVessel(NPCShipManager *this,int param_1);
Ship * __thiscall NPCShipManager::generateNewPirateVessel(NPCShipManager *this,int param_1);
Ship * __thiscall NPCShipManager::generateVesselFromBounty(NPCShipManager *this,Bounty *param_1);
SpaceStation * __thiscall NPCShipManager::getRandomSpaceStation(NPCShipManager *this,int param_1,Ship *param_2);
void __thiscall NPCShipManager::removeAllShipsInSector(NPCShipManager *this,int param_1);
void __thiscall NPCShipManager::reset(NPCShipManager *this);
void __thiscall NPCShipManager::runSectorLogic(NPCShipManager *this,int param_1);
void __thiscall NPCShipManager::runPoliceVesselLogic(NPCShipManager *this,Ship *param_1);
void __thiscall std::vector<>::~vector<>(vector<> *this);
bool __thiscall ShipModule::isAtHighPower(ShipModule *this);
void __thiscall PowerManager::populateListData(PowerManager *this,vector<> *param_1);
void __thiscall PowerManager::getDetailInformation(PowerManager *this);
void __cdecl std::_Default_allocator_traits<>::construct<>(allocator<ListData> *param_1,ListData *param_2,ListData *param_3);
ListData * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,ListData *param_1,ListData *param_2);
void __fastcall Catch_All@004adf8f(vector<> *param_1);
bool __thiscall ShipModule::hasBooted(ShipModule *this);
bool __thiscall Weapon::isSpinningUp(Weapon *this);
ShipModule * __thiscall ShipModule::ShipModule(ShipModule *this,ShipModuleClass *param_1);
void __thiscall ShipModule::resetDefaultEMCONState(ShipModule *this);
int __thiscall ShipModule::getWidth(ShipModule *this);
int __thiscall ShipModule::getHeight(ShipModule *this);
void __thiscall ShipModule::drainPower(ShipModule *this,float param_1);
float __thiscall ShipModule::getCurrentPowerDrain(ShipModule *this);
void __thiscall ShipModule::generatePower(ShipModule *this,float param_1);
bool __thiscall ShipModule::isDestroyed(ShipModule *this);
bool __thiscall ShipModule::isDamaged(ShipModule *this);
int __thiscall ShipModule::getValue(ShipModule *this);
float __thiscall ShipModule::getInvertedEfficiencyFloat(ShipModule *this);
int __thiscall ShipModule::getFreeHousingSlots(ShipModule *this);
void __thiscall ShipModule::removeAllHousedObjects(ShipModule *this);
int __thiscall ShipModule::getHousedObjectCount(ShipModule *this);
bool __thiscall ShipModule::validHousedWeaponInSlot(ShipModule *this,int param_1);
float __thiscall ShipModule::actualMaxPowerStorage(ShipModule *this);
float __thiscall ShipModule::getCurrentGenerationRate(ShipModule *this);
float __thiscall ShipModule::getCurrentLADARRange(ShipModule *this);
float __thiscall ShipModule::getCurrentJumpRange(ShipModule *this);
void __thiscall ShipModule::damageModule(ShipModule *this,int param_1,int param_2);
bool __thiscall ShipModule::isFunctional(ShipModule *this,bool param_1);
void __thiscall ShipModule::disconnect(ShipModule *this,Ship *param_1);
void __thiscall ShipModule::connect(ShipModule *this,Ship *param_1);
float __thiscall ShipModule::runLogic(ShipModule *this,float param_1,Ship *param_2);
ModuleSlotType __cdecl getModuleSlotTypeForString(void *param_1);
ShipModuleClass * __thiscall ShipModuleClass::ShipModuleClass(ShipModuleClass *this,undefined4 param_1,undefined4 param_2,void *param_4);
ModuleSlotType __cdecl ShipModuleClass::getSlotTypeForModuleType(ModuleType param_1);
ModuleConfiguration * __thiscall ShipModuleClass::getRandomConfigurationOfType(ShipModuleClass *this,int param_1);
void __thiscall std::vector<>::~vector<>(vector<> *this);
void __cdecl writeTextToFile(undefined4 *param_1);
void __cdecl writeString(undefined4 *param_1);
void __cdecl writeBoolean(undefined4 param_1,undefined4 *param_2);
void __cdecl OISConfiguration::configure(void);
void __cdecl OISConfiguration::setOptimalResolution(void);
void __cdecl OISConfiguration::setRes(void);
void __cdecl OISConfiguration::dumpCommands(void);
void __cdecl OISConfiguration::load(void);
void __cdecl OISConfiguration::save(void);
InputConfiguration * __cdecl Singleton<>::getInstance(void);
Resolution * __thiscall std::vector<>::_Emplace_reallocate<Resolution>(vector<> *this,Resolution *param_1,Resolution *param_2);
void __thiscall DateTime::setFromString(DateTime *this,void *param_2);
void __thiscall DateTime::parseDate(DateTime *this,void *param_2);
void __thiscall DateTime::decrement(DateTime *this,int param_1);
void __thiscall CommsData::clearState(CommsData *this);
int __thiscall CommsData::getDraftCount(CommsData *this);
bool __thiscall CommsData::articleRead(CommsData *this,void *param_2);
void __thiscall ComputerSystem::renderArticle(ComputerSystem *this,CommsData *param_1,int param_2);
void __thiscall ComputerSystem::sendCurrentDraft(ComputerSystem *this);
void __thiscall EmailDraft::~EmailDraft(EmailDraft *this);
void __thiscall ComputerSystem::doneWithDraft(ComputerSystem *this);
void __thiscall ComputerSystem::showDrafts(ComputerSystem *this);
void __thiscall ComputerSystem::doneWithEmail(ComputerSystem *this);
void __thiscall ComputerSystem::showEmails(ComputerSystem *this);
void __thiscall ComputerSystem::doneWithArticle(ComputerSystem *this);
void __thiscall ComputerSystem::showArticles(ComputerSystem *this);
void __thiscall ComputerSystem::doneWithFile(ComputerSystem *this);
Article * __thiscall ComputerSystem::getArticle(ComputerSystem *this,char *param_2);
void __thiscall ComputerSystem::renderEmail(ComputerSystem *this,CommsData *param_1,int param_2);
int __thiscall ComputerSystem::getMostRecentArticles(ComputerSystem *this,int param_1,bool param_2);
void __thiscall ComputerSystem::renderArticles(ComputerSystem *this,CommsData *param_1);
void __thiscall ComputerSystem::selectedArticle(ComputerSystem *this,int param_1);
void __thiscall ComputerSystem::renderEmails(ComputerSystem *this,CommsData *param_1);
void __thiscall ComputerSystem::renderDraft(ComputerSystem *this,CommsData *param_1,int param_2);
void __thiscall ComputerSystem::renderDrafts(ComputerSystem *this,int param_1,basic_string<> *param_3);
void __thiscall ComputerSystem::selectedEmail(ComputerSystem *this,int param_1);
void __thiscall ComputerSystem::selectedDraft(ComputerSystem *this,int param_1);
void __thiscall ComputerSystem::runArticleLogic(ComputerSystem *this,float param_1);
void __thiscall ComputerSystem::syncArticles(ComputerSystem *this,CommsData *param_1,uint param_2);
void __thiscall ComputerSystem::renderFiles(ComputerSystem *this,int param_1);
void __thiscall std::_Func_impl_no_alloc<>::_Delete_this(_Func_impl_no_alloc<> *this,bool param_1);
void * __thiscall std::_Func_impl_no_alloc<>::_Get(_Func_impl_no_alloc<> *this);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<void,int> * __thiscall std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1);
void __thiscall std::_Func_impl_no_alloc<>::_Delete_this(_Func_impl_no_alloc<> *this,bool param_1);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<void> * __thiscall std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1);
void __thiscall std::_Func_impl_no_alloc<>::_Do_call(_Func_impl_no_alloc<> *this);
void __thiscall std::_Func_impl_no_alloc<>::_Do_call(_Func_impl_no_alloc<> *this,int *param_1);
bool __thiscall Article::readyToPublish(Article *this,bool param_1);
bool __thiscall Article::runLogic(Article *this,float param_1);
SaveMetaData * __thiscall SaveMetaData::SaveMetaData(SaveMetaData *this);
ConsoleDamage * __thiscall ConsoleDamage::ConsoleDamage(ConsoleDamage *this,void *param_2);
void __thiscall SaveMetaData::~SaveMetaData(SaveMetaData *this);
void __thiscall SaveHandler::loadLocalStats(SaveHandler *this);
void __thiscall SaveHandler::saveLocalStats(SaveHandler *this);
bool __thiscall SaveHandler::saveExists(SaveHandler *this,int param_1);
SaveMetaData * __thiscall SaveHandler::unpackMetaData(SaveHandler *this,_iobuf *param_1);
void __cdecl writeMetaDataStr(void *param_1);
void __thiscall SaveHandler::packMetaData(SaveHandler *this,_iobuf *param_1);
SaveMetaData * __thiscall SaveHandler::metadataForSave(SaveHandler *this,int param_1);
void __thiscall SaveHandler::loadGame(SaveHandler *this);
void __thiscall SaveHandler::saveGame(SaveHandler *this);
void __cdecl SaveHandler::writeLengthString(undefined4 *param_1);
void __cdecl SaveHandler::readLengthString(_iobuf *param_1);
void __thiscall SaveHandler::saveGameV12(SaveHandler *this,_iobuf *param_1);
void __thiscall SaveHandler::loadGameV12(SaveHandler *this,_iobuf *param_1);
void * __thiscall CargoHold::`scalar_deleting_destructor'(CargoHold *this,uint param_1);
void __cdecl V12::saveStats(_iobuf *param_1);
void __cdecl V8::loadStats(_iobuf *param_1);
void __cdecl V12::saveFogOfWarState(_iobuf *param_1);
void __cdecl V9::loadFogOfWarState(_iobuf *param_1);
void __cdecl V12::saveEmails(_iobuf *param_1);
void __cdecl V9::loadEmails(_iobuf *param_1);
void __cdecl V12::saveFlags(_iobuf *param_1);
void __cdecl V7::loadFlags(_iobuf *param_1);
void __cdecl V10::loadStatesActive(_iobuf *param_1);
void __cdecl V12::saveFactionStates(_iobuf *param_1);
void __cdecl V12::savePlayerContracts(_iobuf *param_1);
void __cdecl V12::loadPlayerContracts(_iobuf *param_1);
void __cdecl V12::writeBounty(_iobuf *param_1,Bounty *param_2);
Bounty * __cdecl V8::readBounty(_iobuf *param_1);
void __cdecl V12::saveSpaceStationStates(_iobuf *param_1);
void __cdecl V12::loadSpaceStationStates(_iobuf *param_1);
void __cdecl V12::writeTradeItem(_iobuf *param_1,TradeItemInstance *param_2);
TradeItemInstance * __cdecl V11::readTradeItem(_iobuf *param_1);
void __cdecl V12::writeContract(_iobuf *param_1,Contract *param_2);
Contract * __cdecl V11::readContract(_iobuf *param_1);
void __cdecl V12::writeCargo(_iobuf *param_1,CargoHold *param_2);
CargoHold * __cdecl V12::readCargo(_iobuf *param_1);
void __cdecl V12::saveShip(_iobuf *param_1,Ship *param_2);
Ship * __cdecl V12::loadShip(_iobuf *param_1);
void __cdecl V12::savePassenger(_iobuf *param_1);
void __cdecl V11::loadPassenger(_iobuf *param_1);
void __cdecl V12::writeShipModule(_iobuf *param_1,ShipModule *param_2);
ShipModule * __cdecl V12::readShipModule(_iobuf *param_1);
void __thiscall SaveHandler::loadGameV6(SaveHandler *this,_iobuf *param_1);
void __cdecl V6::loadEmails(_iobuf *param_1);
void __cdecl V6::loadStatesActive(_iobuf *param_1);
Bounty * __cdecl V6::readBounty(_iobuf *param_1);
void __cdecl V6::loadSpaceStationStates(_iobuf *param_1);
Contract * __cdecl V8::readContract(_iobuf *param_1);
CargoHold * __cdecl V11::readCargo(_iobuf *param_1);
void __cdecl V7::loadShips(_iobuf *param_1);
ShipModule * __cdecl V6::readShipModule(_iobuf *param_1);
void __thiscall SaveHandler::loadGameV7(SaveHandler *this,_iobuf *param_1);
void __cdecl V7::loadEmails(_iobuf *param_1);
void __cdecl V8::loadSpaceStationStates(_iobuf *param_1);
void __thiscall SaveHandler::loadGameV8(SaveHandler *this,_iobuf *param_1);
void __cdecl V8::loadEmails(_iobuf *param_1);
void __cdecl V8::loadShips(_iobuf *param_1);
ShipModule * __cdecl V8::readShipModule(_iobuf *param_1);
void __thiscall SaveHandler::loadGameV9(SaveHandler *this,_iobuf *param_1);
void __cdecl V9::loadPlayerContracts(_iobuf *param_1);
void __cdecl V9::loadSpaceStationStates(_iobuf *param_1);
void __cdecl V9::loadShips(_iobuf *param_1);
void __thiscall SaveHandler::loadGameV10(SaveHandler *this,_iobuf *param_1);
void __cdecl V10::loadSpaceStationStates(_iobuf *param_1);
void __cdecl V11::loadShips(_iobuf *param_1);
void __thiscall SaveHandler::loadGameV11(SaveHandler *this,_iobuf *param_1);
void __cdecl V11::loadSpaceStationStates(_iobuf *param_1);
ShipInstance * __thiscall ShipInstance::ShipInstance(ShipInstance *this,Scenario *param_1);
void __thiscall std::map<>::~map<>(map<> *this);
bool __thiscall ShipInstance::readyToSpawn(ShipInstance *this);
ScenarioCategory __cdecl getScenarioCategory(void *param_1);
ScenarioType __cdecl getScenarioType(void *param_1);
Scenario * __thiscall Scenario::Scenario(Scenario *this);
<> * __thiscall Scenario::<>::<>(<> *this);
void __thiscall Scenario::<>::~<>(<> *this);
void __thiscall Scenario::checkCompletionStates(Scenario *this);
void __thiscall Scenario::messageScenarioState(Scenario *this);
void __thiscall std::vector<>::~vector<>(vector<> *this);
void __thiscall std::vector<>::~vector<>(vector<> *this);
_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buyheadnode(_Tree_comp_alloc<> *this);
void __thiscall std::_Tree<>::_Erase(_Tree<> *this,_Tree_node<> *param_1);
Quadrant __thiscall GameObject::getQuadrant(GameObject *this);
bool __thiscall Ship::isJumpGate(Ship *this);
bool __cdecl ShipData::checkResolutionChanged(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkSOSActive(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkShipDisabled(Ship *param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkSOSCanBeActivated(Ship *param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkClusterMode(int param_1,int param_2,void *param_3);
bool __cdecl ShipData::checkPCEAlarm(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkIsEMCONMode(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkNominal(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkWarning(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkInDanger(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkInAsteroidField(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkInNebula(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkNavTargetSelected(Ship *param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanAddWaypoint(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkValidTravelTargetSelected(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkMainEngineBurning(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkHasSelectedDestination(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkEngCurrentModuleCanOpen(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkEngNoTrayItemSelected(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanTeleport(undefined4 param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkEngIsRepairing(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkEngModuleCanBeConnected(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkIsDockedOrDocking(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkNotDocked(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkNotDockedOrMultiplayer(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkNotDockedOrMultiplayerOrTutorial(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkNotDockedWithStation(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkIsDockedWithStation(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkIsDockedWithDepot(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkNeedToPayForJumpgate(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanActivateJumpgate(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkIsDockedWithJumpgate(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkDockedWithEarthgate(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanChangeDetails(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkIsDocking(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkIsUndocking(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkIsFullyDocked(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkShowSpaceDisc(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkDontShowSpaceDisc(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkTube1Selected(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkTube2Selected(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkTube3Selected(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkTube4Selected(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkTube5Selected(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkTube6Selected(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkTube7Selected(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkTube8Selected(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkNotDocking(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkNotUndocking(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanOpenAirlock(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkNavMapInSectorMode(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkIsInFreeSpace(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkIsInOrbit(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkIsInStandardOrbit(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkIsInHighOrbit(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkIsInPolarOrbit(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkNotInStandardOrbit(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkNotInHighOrbit(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkNotInPolarOrbit(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkIsChangingOrbit(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkIsLeavingOrbit(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkIsEnteringOrbit(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkIsCorrectingOrbit(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkIsInStableOrbit(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanRepairHullAtDepot(Ship *param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCannotRepairHullAtDepot(Ship *param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanRepairModulesAtDepot(Ship *param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCannotRepairModulesAtDepot(Ship *param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanRearmAtDepot(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCannotRearmAtDepot(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanBuyCMAtDepot(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCannotBuyCMAtDepot(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkHasDockingPermission(Ship *param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkNeedsDockingPermission(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkHasUndockingPermission(Ship *param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkNeedsUndockingPermission(Ship *param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanGetUndockingPermission(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCannotGetUndockingPermission(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkAnyAirlockOpen(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkAllAirlocksSealed(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanUndock(Ship *param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkDockedButCannotUndock(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkIFFActive(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkSelectedNavObjectCanCommunicate(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkOwesMoneyToDockedStation(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkOwesMoneyToDockedStationAndCanPay(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkOwesMoneyToDockedStationAndCannotPay(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkAirlocksClosedButNeedsUndockPermission(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanJumpInTutorial(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanDetectCassandraInTutorial(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkIsMoving(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkHasCoursePlotted(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCoursePlottedNotEngaged(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkAutoPilotEngaged(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkAutoPilotNotEngaged(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkDockedWithJumpgate(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkPwrReactorOff(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkPwrReactorOn(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanRotate(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkRCSBurning(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkRCSBurningCW(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkRCSBurningCCW(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkIsStationary(Ship *param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanComeToFullStop(Ship *param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanSetTarget(Ship *param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanChangeTarget(Ship *param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCannotSetOrChangeTarget(Ship *param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkTubeHasExp(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkTubeHasEmp(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkTubeCanBeArmed(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkTubeCanBePoweredDown(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkTubeCanBeDisabled(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkTubeHasTorpedo(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkTubeHasMine(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkTubeHasProbe(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkTubeCanSpinUp(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkTubeLinked(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkTubeSpinningUp(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkTubeEmpty(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkTubeLaunched(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkTubeCanFire(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkTubeCanLaunch(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleReactorUndamaged(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleReactorDamaged(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleReactorDestroyed(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleReactorConnected(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleReactorFunctioning(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleMainDriveUndamaged(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleMainDriveDamaged(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleMainDriveDestroyed(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleMainDriveConnected(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleRCSUndamaged(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleRCSDamaged(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleRCSDestroyed(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleRCSConnected(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleCommsUndamaged(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleCommsDamaged(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleCommsDestroyed(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleCommsConnected(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleBatt1Undamaged(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleBatt1Damaged(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleBatt1Destroyed(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleBatt1Connected(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleBatt2Undamaged(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleBatt3Undamaged(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleBatt3Damaged(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleBatt3Destroyed(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleBatt3Connected(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleHelmUndamaged(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleHelmDamaged(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleHelmDestroyed(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleHelmConnected(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleSensorsUndamaged(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleSensorsDamaged(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleSensorsDestroyed(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleSensorsConnected(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleNavComUndamaged(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleNavComDamaged(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleNavComDestroyed(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleNavComConnected(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleWeaponUndamaged(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleWeaponDamaged(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleWeaponDestroyed(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleWeaponConnected(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleJumpDriveUndamaged(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleJumpDriveDamaged(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleJumpDriveDestroyed(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleJumpDriveConnected(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleBooting(int param_1,int param_2,void *param_3);
bool __cdecl ShipData::checkModuleDisconnected(int param_1,int param_2,void *param_3);
bool __cdecl ShipData::checkCanSetJumpDestination(Ship *param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanNotSetJumpDestination(Ship *param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanSpinUpJumpDrive(Ship *param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanNotSpinUpJumpDrive(Ship *param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanDischargeJumpDrive(Ship *param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanNotDischargeJumpDrive(Ship *param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkHasJumpDrive(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkHasNoJumpDrive(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkJumpDriveSpinningUp(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkJumpDriveCalculating(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkJumpDriveCalculated(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkJumpDriveSpunUp(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanCalculateJump(Ship *param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanNotCalculateJump(Ship *param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanJump(Ship *param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanNotJump(Ship *param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkPwrLowPowerWarning(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkPwrIsDraining(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkPwrIsGenerating(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkIsTurnedOff(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkIsTurnedOn(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkSensorsHistoryLocked(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkSensorsNavLinked(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkSensorsAuto(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkLADARFunctional(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkMainDriveFunctional(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkLADARActive(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkLADARInActive(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkModuleOpen(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkNoModuleOpen(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkEngCurrentModuleOn(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkEngCurrentModuleOff(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkPwrHasModuleSelected(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkPwrCurrentModuleOn(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkPwrCurrentModuleOff(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkPwrCurrentModuleEmconOn(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkPwrCurrentModuleEmconOff(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkPwrCanRaisePriority(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkPwrCanLowerPriority(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCounterMeasureExists(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCounterMeasureCanLaunch(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCounterMeasureCannotLaunch(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkPDSExists(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkPDSActive(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkPDSInactive(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCommsAutosyncOn(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkPDLActive(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkJumpDriveActive(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkLADARDetected(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkMenuMain(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkSubmenuOptions(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkSubmenuInput(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkSubmenuNews(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkSubmenuCredits(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkSubmenuGameOver(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkHasPurchase(int param_1,int param_2,void *param_3);
bool __cdecl ShipData::checkValidPurchase(int param_1,Shop param_2,void *param_3);
bool __cdecl ShipData::checkInvalidPurchase(int param_1,Shop param_2,void *param_3);
bool __cdecl ShipData::checkHasSale(int param_1,int param_2,void *param_3);
bool __cdecl ShipData::checkValidSale(int param_1,Shop param_2,void *param_3);
bool __cdecl ShipData::checkInvalidSale(int param_1,Shop param_2,void *param_3);
bool __cdecl ShipData::checkHasPurchaseOrSale(int param_1,int param_2,void *param_3);
bool __cdecl ShipData::checkCommerceAtMenu(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCommerceNotAtMenu(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCommerceMenuIs(int param_1,int param_2,void *param_3);
bool __cdecl ShipData::checkCommerceTermCanPurchaseLicense(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCommerceTermCannotPurchaseLicense(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCommerceTermLoanGiverSelected(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCommerceTermLoanGiverNotSelected(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCommerceTermRepayingLoan(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCommerceTermCanDeliverContract(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCommerceTermCannotDeliverContract(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCommerceTermCanTakeContract(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCommerceTermCannotTakeContract(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCommerceTermCanTakePassenger(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCommerceTermCannotTakePassenger(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCommerceTermCanTakeBounty(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCommerceTermCannotTakeBounty(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCommerceTermLoanValid(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCommerceTermLoanInvalid(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCommerceTermRepaymentValid(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCommerceTermRepaymentInvalid(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkWireVisible(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkMechanicAtMenu(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkMechanicAt(int param_1,int param_2,void *param_3);
bool __cdecl ShipData::checkMechanicCanRepair(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkMechanicCannotRepair(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkMechanicCanBuyPod(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkMechanicCannotBuyPod(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkMechanicCanSellPod(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkMechanicCannotSellPod(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkMechanicCanUpgradePod(int param_1,int param_2,void *param_3);
bool __cdecl ShipData::checkMechanicCannotUpgradePod(int param_1,GoodContainmentOption param_2,void *param_3);
bool __cdecl ShipData::checkMechanicCanBuyModule(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkMechanicCannotBuyModule(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkMechanicCanSellModule(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkMechanicCannotSellModule(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkBuyingModules(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkShipCanBuy(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkShipCannotBuy(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkMechanicCanBuyArmament(Ship *param_1,int param_2,void *param_3);
bool __cdecl ShipData::checkMechanicCannotBuyArmament(int param_1,int param_2,void *param_3);
bool __cdecl ShipData::checkMechanicCanSellArmament(Ship *param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkMechanicCannotSellArmament(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanHack(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCannotHack(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkIsHacking(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkHackUnitFunctional(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkBeingHailed(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkShouldShowCargoScreen(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkIsMoored(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkIsMooredToCargo(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkHasGrapplingArm(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkGrapplingArmInUse(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanGrappleFromMoored(Ship *param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanGrappleFromShip(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkMooredWreckHasNotDownloadedData(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkMooredWreckHasDownloadedData(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkMooredWreckHasUnclampedCargo(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkMooredWreckHasNotUnclampedCargo(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanBoardBrokerShip(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCannotBoardBrokerShip(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkIsViewingSelectedShip(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkIsNotViewingSelectedShip(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkHasEmailsToDownload(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkStartingNewGame(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkNewGameOptions(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkConversationActive(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkMusicPlaying(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkMusicNotPlaying(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanUseMusic(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanJettisonComponent(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanJettisonCargo(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanJettisonAllCargo(int param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanBeginDock(Ship *param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCannotBeginDock(Ship *param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkFlagSet(undefined4 param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkFlagNotSet(undefined4 param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkMenuCanBeginGame(undefined4 param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkMenuCanBeginStory(undefined4 param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkMenuCanDeleteSave(undefined4 param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkMenuCanConfirmDelete(undefined4 param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkConnectedToServer(undefined4 param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanConnectToServer(undefined4 param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCannotConnectToServer(undefined4 param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanDisconnectFromServer(undefined4 param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCannotSendReadyState(undefined4 param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanSendReadyStateToServer(undefined4 param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanRemoveReadyStateFromServer(undefined4 param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanSendChatMessage(undefined4 param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCannotSendChatMessage(undefined4 param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkSmugglerDetected(undefined4 param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCanTakeShip(undefined4 param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkCannotTakeShip(undefined4 param_1,undefined4 param_2,void *param_3);
bool __cdecl ShipData::checkNothing(int param_1,undefined4 param_2,void *param_3);
void __cdecl ShipData::getCheckFunction(ShipDataCheckType param_1);
bool __cdecl isShipDataType(void *param_1);
ShipDataType __cdecl getShipDataType(void *param_1);
ShipDataCheckType __cdecl getShipCheckDataType(void *param_1);
ShipTextDataType __cdecl getShipTextDataType(void *param_1);
bool __cdecl isShipTextDataType(void *param_1);
uint * __cdecl ShipData::replaceSubstring(uint param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,undefined4 param_6,undefined4 *param_7);
void __cdecl ShipData::stringWithVars(int param_1,int param_2,void *param_3);
basic_string<> * __thiscall std::basic_string<>::replace(basic_string<> *this,uint param_1,uint param_2,char *param_3,uint param_4);
function<> * __thiscall std::function<>::function<><>(function<> *this,_func_bool_Ship_ptr_int_basic_string<> *param_1);
basic_string<> * __thiscall std::basic_string<>::_Reallocate_grow_by<>(basic_string<> *this,uint param_1,undefined4 param_3,size_t param_4,int param_5,void *param_6,size_t param_7);
bool_(__cdecl*&&)(Ship*,int,std::basic_string<>) * __cdecl std::move<>(_func_bool_Ship_ptr_int_basic_string<> **param_1);
void __thiscall std::_Func_class<>::_Reset<>(_Func_class<> *this,bool_(__cdecl*&&)(Ship*,int,std::basic_string<>) *param_1);
void __thiscall std::_Func_impl_no_alloc<>::_Delete_this(_Func_impl_no_alloc<> *this,bool param_1);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<> * __thiscall std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1);
bool __thiscall std::_Func_impl_no_alloc<>::_Do_call(_Func_impl_no_alloc<> *this,Ship **param_1,int *param_2,basic_string<> *param_3);
ShipDataInputType __cdecl getShipDataInputType(undefined4 *param_1);
void * __cdecl getShipCheckDataPointer(ShipDataInputType param_1);
void __cdecl getShipCheckDataPossibleValues(ShipDataInputType param_1);
void __cdecl runDataInputSync(ShipDataInputType param_1);
bool __cdecl shipDataCanPrev(ShipDataInputType param_1);
bool __cdecl shipDataCanNext(ShipDataInputType param_1);
void __cdecl shipDataChangePrev(ShipDataInputType param_1);
void __cdecl shipDataChangeNext(ShipDataInputType param_1);
void __cdecl shipDataChangeTo(ShipDataInputType param_1,int param_2);
void __cdecl populateListData(ShipDataInputType param_1,vector<> *param_2);
bool __cdecl checkListDataChanged(ShipDataInputType param_1,vector<> *param_2);
int __cdecl shipDataMax(ShipDataInputType param_1);
bool __cdecl ShipInterface::doBurnMainEngine(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doStopMainEngine(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doToggleMainEngine(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doCancelAP(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doClearCourse(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doRemoveLastWaypoint(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doPlotCourse(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doEngageCourse(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doFullStop(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doRotateTo(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doFireRCSCW(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doFireRCSCCW(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doStopRCS(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doToggleEMCON(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doActiveEMCONMode(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doDeactivateEMCONMode(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doEnableLADAR(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doDisableLADAR(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doToggleLADAR(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doActivatePDS(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doDectivatePDS(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doTogglePDS(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doFireCM(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doMainDrivePowerIncrease(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doMainDrivePowerDecrease(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doPwrCurrentModulePowerIncrease(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doPwrCurrentModulePowerDecrease(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doEngConnectCurrentModule(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doEngDisconnectCurrentModule(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doEngOpenCurrentModule(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doEngCloseCurrentModule(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doEngRepairCurrentComponent(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doToggleMapMode(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doTogglePwrCurrentModuleEmcon(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doTogglePwrCurrentModulePower(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doPwrRaisePriority(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doPwrLowerPriority(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doPwrSelectModule(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doEngSelectModule(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doEngMoveComponent(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doEngUnmountComponent(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doEngMountComponent(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doSelectComponent(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doEngSelectComponent(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doEngToggleScrew(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doEngToggleShield(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doAlterServerSetting(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doJmpSetJumpDestination(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doJmpSpinUpJumpDrive(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doJmpDischargeJumpDrive(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doJmpCalculateJumpSolution(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doJmpBeginJump(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doTutorialJump(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doTradeToMax(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doPerformTrade(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doCancelTrade(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doCommerceBackToMenu(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doCommerceGetLicense(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doCommerceTakeLoan(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doCommerceRepayLoan(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doCommerceTakeContract(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doCommerceDeliverContract(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doCommerceTakePassenger(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doCommerceTakeBounty(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doViewWire(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doDock(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doUndock(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doBreakOrbit(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doChangeToStandardOrbit(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doChangeToHighOrbit(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doChangeToPolarOrbit(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doSpinUpWeapon(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doPowerDownWeapon(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doFireWeapon(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doUnlinkWeapon(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doArmWeapon(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doDisableWeapon(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doSetWeaponTarget(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doRequestDockingPermission(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doRequestUndockingPermission(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doRescindDockingPermission(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doRescindUndockingPermission(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doPayForJumpgate(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doActivateJumpgate(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doPayDockedStation(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doChangeDetails(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doTeleportShip(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doActivateIFF(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doDeactivateIFF(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doToggleIFF(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doTurnOnSOS(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doTurnOffSOS(Ship *param_1,int param_2,int param_3,int param_4);
bool __thiscall RakNet::RakPeer::IsNetworkSimulatorActive(RakPeer *this);
bool __cdecl ShipInterface::doSetViewShip(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doLeaveShip(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doCommunicateWithSelected(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doCommsSync(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doCommsTurnOnAuto(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doCommsTurnOffAuto(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doMooredWreckUnlockCargo(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doMooredWreckDownloadData(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doShipCargoDown(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doShipCargoUp(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doMooredCargoDown(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doMooredCargoUp(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doJettisonCargo(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doMoveModule(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doJettisonComponent(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doJettisonAllCargo(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doTransferCargoFromShip(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doTransferCargoFromMoored(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doHack(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doRepairHullAtDepot(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doRepairModulesAtDepot(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doRearmAtDepot(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doBuyCMAtDepot(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doMapClick(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doConnectModule(Ship *param_1,ShipModule *param_2);
bool __cdecl ShipInterface::doToggleReactor(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doDisconnectReactor(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doConnectReactor(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doToggleHelm(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doDisconnectHelm(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doConnectHelm(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doToggleRCS(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doDisconnectRCS(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doConnectRCS(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doToggleMainDrive(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doDisconnectMainDrive(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doConnectMainDrive(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doToggleComms(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doDisconnectComms(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doConnectComms(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doToggleWeap(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doDisconnectWeap(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doConnectWeap(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doToggleJumpDrive(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doDisconnectJumpDrive(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doConnectJumpDrive(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doToggleBatt1(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doDisconnectBatt1(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doConnectBatt1(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doToggleBatt2(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doDisconnectBatt2(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doConnectBatt2(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doToggleBatt3(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doDisconnectBatt3(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doConnectBatt3(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doToggleNavCom(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doDisconnectNavCom(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doConnectNavCom(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doToggleSensors(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doDisconnectSensors(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doConnectSensors(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doTurnOnShip(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doTurnOffShip(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doSensorSelectDown(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doSensorSelectUp(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doSensorSelectRight(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doSensorSelectLeft(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doSensorSetNavAndSensorLinked(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doSensorUnsetNavAndSensorLinked(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doSensorSetHistoryLocked(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doSensorUnsetHistoryLocked(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doSensorSetAuto(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doSensorUnsetAuto(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doSelectTube(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doDeselectTube(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doSelectTube1(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doSelectTube2(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doSelectTube3(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doSelectTube4(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doSelectTube5(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doMechanicToMenu(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doMechanicRepair(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doMechanicBuyPod(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doMechanicSellPod(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doMechanicUpgradePod(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doMechanicCancelModule(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doMechanicModuleTransaction(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doMechanicBuyArmament(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doMechanicSellArmament(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doBuyShip(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doNextTrack(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doPrevTrack(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doPauseTrack(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doResumeTrack(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doQuitToMenu(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doQuitToOS(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doRoomLeft(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doRoomRight(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doTimeSlower(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doTimeFaster(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doBeginGame(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doDeleteSave(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doSwitchToMenu(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doConnectToServer(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doDisconnectFromServer(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doSendChatMessage(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doSendReadyCommand(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doMoveCargo(Ship *param_1,int param_2,int param_3,int param_4);
bool __cdecl ShipInterface::doSendServerCommand(Ship *param_1,int param_2,int param_3,int param_4);
void __cdecl ShipInterface::getShipCommandFunction(ShipCommand param_1);
ShipCommand __cdecl getShipCommandType(void *param_1);
void __cdecl ShipInterface::stationBeepHigh(Ship *param_1);
void __cdecl ShipInterface::commerceBeep(Ship *param_1);
void __cdecl ShipInterface::soundHigh(Ship *param_1);
void __cdecl ShipInterface::soundLow(Ship *param_1);
void __cdecl ShipInterface::soundError(Ship *param_1);
void __thiscall std::vector<>::erase(vector<> *this,undefined4 *param_2,undefined4 *param_3);
function<> * __thiscall std::function<>::function<><>(function<> *this,_func_bool_Ship_ptr_int_int_int *param_1);
function<> * __thiscall std::function<>::function<><>(function<> *this);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<> * __thiscall std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1);
_Func_base<> * __thiscall std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<> * __thiscall std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1);
bool __thiscall std::_Func_impl_no_alloc<>::_Do_call(_Func_impl_no_alloc<> *this,Ship **param_1,int *param_2,int *param_3,int *param_4);
bool __thiscall std::_Func_impl_no_alloc<>::_Do_call(_Func_impl_no_alloc<> *this,Ship **param_1,int *param_2,int *param_3,int *param_4);
_Func_impl_no_alloc<> * __thiscall std::_Func_impl_no_alloc<>::_Func_impl_no_alloc<><>(_Func_impl_no_alloc<> *this,function<> *param_1);
_Func_impl_no_alloc<> * __cdecl std::_Global_new<>(function<> *param_1);
void Catch_All@004ebecd(uint param_1);
_Func_impl_no_alloc<> * __cdecl std::_Global_new<>(function<> *param_1);
void Catch_All@004ebf4f(uint param_1);
void __cdecl ShipNumericalData::getDataFunction(ShipDataType param_1);
double __cdecl ShipNumericalData::getPowerFlow(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getPowerFlowPercent(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getPowerLevel(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getPowerLevelPercent(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getPowerGeneration(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getPowerGenerationPercent(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getPowerDrain(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getPowerDrainPercent(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getDirection(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getMotionAngle(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getDesiredDirection(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getCurrentSpeed(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getCurrentSpeedPercent(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::returnNothing(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getInteriorPressure(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getExteriorPressure(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getAirlockPressure(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getCurrentDistanceToNavObject(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getCurrentBearingToNavObject(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getNebulaDensity(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getTubeSelected(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getTemperature(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getAmountOwedToDockedStation(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getAmountOwedToCommsStation(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getTubeSpinUpPercent(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getCurrentTubeSpinUpPercent(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getEngCurrentRepairPercent(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getJumpSolution(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getHullHeatTemperature(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getSolarRadiationPercent(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getMainDrivePowerLevel(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getGrappleArmPercentage(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getHackPercentage(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getPendingEmails(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getReadEmails(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getUnreadEmails(Ship *param_1,int param_2);
double __cdecl ShipNumericalData::getPlayerCredits(Ship *param_1,int param_2);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<> * __thiscall std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1);
double __thiscall std::_Func_impl_no_alloc<>::_Do_call(_Func_impl_no_alloc<> *this,Ship **param_1,int *param_2);
bool __thiscall Weapon::isWeapon(Weapon *this);
_Func_class<> * __cdecl ShipTextData::getTextDataFunction(ShipTextDataType param_1);
Ship * __cdecl ShipTextData::getCopyrightText(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getVersionNotes(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::returnNoString(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getShipName(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getOwnshipCorpLogo(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getDesiredOrbit(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getOrbit(Ship *param_1,int param_2);
void __cdecl ShipTextData::getEngComponentFilename(Ship *param_1,int param_2);
void __cdecl ShipTextData::getEngAddonFilename(Ship *param_1,int param_2);
void __cdecl ShipTextData::getEngComponentData(Ship *param_1,int param_2);
void __cdecl ShipTextData::getEngAddonData(Ship *param_1,int param_2);
void __cdecl ShipTextData::getComponentInfo(Ship *param_1,int param_2);
void __cdecl ShipTextData::getEngModuleName(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getJmpDestination(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getJmpSolState(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getJmpSpinState(Ship *param_1,int param_2);
void __cdecl ShipTextData::getHullCondition(Ship *param_1,int param_2);
void __cdecl ShipTextData::getEngComponentRepair(Ship *param_1,int param_2);
void __cdecl ShipTextData::getEngModuleRepair(Ship *param_1,int param_2);
void __cdecl ShipTextData::getEngModuleStats(Ship *param_1,int param_2);
void __cdecl ShipTextData::getEngModuleData(Ship *param_1,int param_2);
void __cdecl ShipTextData::getEngineeringSummary(Ship *param_1,int param_2);
void __cdecl ShipTextData::getStealthRating(Ship *param_1,int param_2);
void __cdecl ShipTextData::getTubeSummary(Ship *param_1,int param_2);
void __cdecl ShipTextData::getTubeAdvancedSummary(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getSSName(Ship *param_1,int param_2);
void __cdecl ShipTextData::getSSDockingBayString(Ship *param_1,int param_2);
void __cdecl ShipTextData::getSSDockingPermit(Ship *param_1,int param_2);
void __cdecl ShipTextData::getSSRegistration(Ship *param_1,int param_2);
void __cdecl ShipTextData::getSSChangeDetails(Ship *param_1,int param_2);
void __cdecl ShipTextData::getDockingProcessString(Ship *param_1,int param_2);
void __cdecl ShipTextData::getUndockingProcessString(Ship *param_1,int param_2);
void __cdecl ShipTextData::getJumpgateState(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getRTCommsScreen(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getPrivateCommsScreen(Ship *param_1,int param_2);
void __cdecl ShipTextData::getSpaceReadings(Ship *param_1,int param_2);
void __cdecl ShipTextData::getSensorWaveformSummary(Ship *param_1,int param_2);
void __cdecl ShipTextData::getSensorFilterState(Ship *param_1,int param_2);
void __cdecl ShipTextData::getCMState(Ship *param_1,int param_2);
void __cdecl ShipTextData::getCommsSyncData(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getCommsSyncState(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getCommsDamageState(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getCommsModel(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getCommsEmailState(Ship *param_1,int param_2);
void __cdecl ShipTextData::getMooringState(Ship *param_1,int param_2);
void __cdecl ShipTextData::getMooredObjectState(Ship *param_1,int param_2);
void __cdecl ShipTextData::getMooredCargoState(Ship *param_1,int param_2);
void __cdecl ShipTextData::getShipCargoState(Ship *param_1,int param_2);
void __cdecl ShipTextData::getShipCargoDetails(Ship *param_1,int param_2);
void __cdecl ShipTextData::getDepotState(Ship *param_1,int param_2);
void __cdecl ShipTextData::getCassandraDetails(Ship *param_1,int param_2);
void __cdecl ShipTextData::getRemoraDockDetails(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getInfopediaArticleDetails(Ship *param_1,int param_2);
void __cdecl ShipTextData::getCassandraDockingBay(Ship *param_1,int param_2);
void __cdecl ShipTextData::getMooredCargoDetails(Ship *param_1,int param_2);
void __cdecl ShipTextData::getPDSState(Ship *param_1,int param_2);
void __cdecl ShipTextData::getSensorSummary(Ship *param_1,int param_2);
void __cdecl ShipTextData::getSensorAdditional(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getTabletSummary(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getTabletTranslate(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getTabletNotes(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getOmegaTabletHeader(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getCargoViewText(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getEmailStateText(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getPlayerNote(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getMusicPlayer(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getOmegaTabletScreen(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getOmegaTabletFooter(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getShopStr(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getTradeStrBottom(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getTradeStrTop(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getTradeStrFull(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getTradeCommodityIcon(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getCompanyStr(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getLoanStr(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getContractStr(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getBountyStr(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getPassengerInfo(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getMechanicStatusStr(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getMechanicPodStatusStr(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getMechanicModuleStatusStr(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getMechanicHullSectionStatusStr(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getMechanicArmamentStatusStr(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getSelectedPodIcon(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getShipSelectedText(Ship *param_1,int param_2);
void __cdecl ShipTextData::getWreckStatusText(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getCredits(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getGameOverText(Ship *param_1,int param_2);
void __cdecl ShipTextData::getLogStr(Ship *param_1,int param_2);
void __cdecl ShipTextData::getSelectedScenarioStr(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getPowerRoomDetail(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getMultiplayerChat(Ship *param_1,int param_2);
void __cdecl ShipTextData::getWaypointETA(Ship *param_1,int param_2);
void __cdecl ShipTextData::getNavCurrentState(Ship *param_1,int param_2);
Ship * __cdecl ShipTextData::getLocalServerStr(Ship *param_1,int param_2);
void __cdecl ShipTextData::getCurrentServerDetails(Ship *param_1,int param_2);
function<> * __thiscall std::function<>::function<><>(function<> *this,_func_basic_string<>_Ship_ptr_int *param_1);
void __thiscall std::_Func_class<>::_Reset<>(_Func_class<> *this,class_std::basic_string<>_(__cdecl*&&)(Ship*,int) *param_1);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<> * __thiscall std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1);
void __thiscall std::_Func_impl_no_alloc<>::_Do_call(_Func_impl_no_alloc<> *this,Ship **param_1,int *param_2);
void __thiscall AIAttack::recalculateLogic(AIAttack *this);
void __thiscall AIAttack::runLogic(AIAttack *this,float param_1);
void __thiscall AIAttack::enterState(AIAttack *this);
void __thiscall AIAttack::leaveState(AIAttack *this);
void __thiscall AIDesire::removeDesireTarget(AIDesire *this,GameObject *param_1);
void __thiscall AIDesire::removeSensorObject(AIDesire *this,SensorData *param_1);
void __thiscall AIDesire::~AIDesire(AIDesire *this);
basic_string<> * __thiscall AIDesire::describe(AIDesire *this);
void * __thiscall AIDesire::`vector_deleting_destructor'(AIDesire *this,uint param_1);
void * __thiscall AIFollow::`scalar_deleting_destructor'(AIFollow *this,uint param_1);
void __thiscall AIFollow::recalculateLogic(AIFollow *this);
void __thiscall AIFollow::runLogic(AIFollow *this,float param_1);
void __thiscall AIFollow::removeDesireTarget(AIFollow *this,GameObject *param_1);
void __thiscall AIFollow::enterState(AIFollow *this);
void __thiscall AIFollow::leaveState(AIFollow *this);
void __thiscall AIHunt::recalculateLogic(AIHunt *this);
void __thiscall AIHunt::enterState(AIHunt *this);
void __thiscall AIHunt::hitTravelLocation(AIHunt *this);
void __thiscall AIHunt::doneAtLocation(AIHunt *this);
void __thiscall AIHunt::runTravelLogic(AIHunt *this,float param_1);
void __thiscall AIHunt::runLurkLogic(AIHunt *this,float param_1);
void __thiscall AIHunt::runLogic(AIHunt *this,float param_1);
void __thiscall AIPatrol::doneAtLocation(AIPatrol *this);
void __thiscall AIPatrol::enterState(AIPatrol *this);
void __thiscall AIPatrol::leaveState(AIPatrol *this);
void __thiscall AIPatrol::runLogic(AIPatrol *this,float param_1);
void __thiscall AIPatrol::runZoneBreachLogic(AIPatrol *this,float param_1);
void __thiscall AIPatrol::removeDesireTarget(AIPatrol *this,GameObject *param_1);
bool __thiscall AIPatrol::hasBeenWarned(AIPatrol *this,void *param_2);
void __thiscall AIPatrol::vesselFailedHackingMe(AIPatrol *this,Ship *param_1);
void __thiscall AIPatrol::vesselHackedMe(AIPatrol *this,Ship *param_1);
int __thiscall AIPiracy::shipWeight(AIPiracy *this,SensorData *param_1);
void __thiscall AIPiracy::ignoreVessel(AIPiracy *this,void *param_2);
void __thiscall AIPiracy::recalculateLogic(AIPiracy *this);
void __thiscall AIPiracy::runLogic(AIPiracy *this,float param_1);
void __thiscall AIPiracy::enterState(AIPiracy *this);
void __thiscall AIPiracy::leaveState(AIPiracy *this);
void __thiscall AIPiracy::runApproachTargetLogic(AIPiracy *this,float param_1);
void __thiscall AIPiracy::removeDesireTarget(AIPiracy *this,GameObject *param_1);
void __thiscall AIPiracy::removeSensorObject(AIPiracy *this,SensorData *param_1);
char * __thiscall AIPiracy::describe(AIPiracy *this);
void __thiscall AIScan::recalculateLogic(AIScan *this);
void __thiscall AIScan::runLogic(AIScan *this,float param_1);
void __thiscall AIScan::enterState(AIScan *this);
void __thiscall AIScan::leaveState(AIScan *this);
basic_string<> * __thiscall AIScan::describe(AIScan *this);
void __thiscall AIScavenge::recalculateLogic(AIScavenge *this);
void __thiscall AIScavenge::enterState(AIScavenge *this);
void __thiscall AIScavenge::leaveState(AIScavenge *this);
void __thiscall AIScavenge::runLogic(AIScavenge *this,float param_1);
void __thiscall AIScavenge::removeDesireTarget(AIScavenge *this,GameObject *param_1);
void __thiscall AITravel::runLogic(AITravel *this,float param_1);
bool __thiscall Destination::operator==(Destination *this,float param_2,float param_3,char *param_4);
AIDesire * __thiscall AIDesire::AIDesire(AIDesire *this,undefined4 param_1,void *param_3);
AITravel * __thiscall AITravel::AITravel(AITravel *this,Ship *param_1);
void * __thiscall AITravel::`vector_deleting_destructor'(AITravel *this,uint param_1);
void * __thiscall AIScan::`scalar_deleting_destructor'(AIScan *this,uint param_1);
void * __thiscall AIPiracy::`vector_deleting_destructor'(AIPiracy *this,uint param_1);
void * __thiscall AIHunt::`vector_deleting_destructor'(AIHunt *this,uint param_1);
void * __thiscall AIScavenge::`vector_deleting_destructor'(AIScavenge *this,uint param_1);
AIAttack * __thiscall AIAttack::AIAttack(AIAttack *this,Ship *param_1);
CaptainStyle __cdecl getCaptainStyle(void *param_1);
CaptainExperience __cdecl getCaptainExperience(void *param_1);
ShipLook __cdecl getShipLookup(void *param_1);
ShipBehaviour * __thiscall ShipBehaviour::ShipBehaviour(ShipBehaviour *this,Ship *param_1,CraftPurpose param_2);
void __thiscall ShipBehaviour::<>::~<>(<> *this);
void __thiscall ShipBehaviour::~ShipBehaviour(ShipBehaviour *this);
void __thiscall ShipBehaviour::configureShipDesires(ShipBehaviour *this);
void __thiscall ShipBehaviour::detectWeaponLaunch(ShipBehaviour *this,Ship *param_1,Weapon *param_2);
void __thiscall ShipBehaviour::forgetPiracyTarget(ShipBehaviour *this,Ship *param_1);
void __thiscall ShipBehaviour::runLogic(ShipBehaviour *this,float param_1);
bool __thiscall ShipBehaviour::hasSentMessageForFlag(ShipBehaviour *this,char *param_2);
void __thiscall ShipBehaviour::updateSurroundingData(ShipBehaviour *this);
void __thiscall ShipBehaviour::giveTravelTask(ShipBehaviour *this,GameObject *param_1,bool param_2);
void __thiscall ShipBehaviour::merchant_runLogic(ShipBehaviour *this,float param_1);
bool __thiscall ShipBehaviour::respondToPirateDemand(ShipBehaviour *this,Ship *param_1);
void __thiscall ShipBehaviour::general_runLogic(ShipBehaviour *this,float param_1);
void __thiscall ShipBehaviour::runGeneralDestinationLogic(ShipBehaviour *this,float param_1);
int __thiscall ShipBehaviour::getNextTubeWithValidWeapon(ShipBehaviour *this);
void __thiscall ShipBehaviour::correctWaypointsToFlyWith(ShipBehaviour *this,Ship *param_1,FollowMode param_2);
Destination * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,Destination *param_1,Destination *param_2);
void __fastcall Catch_All@00506f2b(vector<> *param_1);
bool __thiscall CargoPod::hasAllOptions(CargoPod *this);
bool __thiscall CargoPod::hasNoOptions(CargoPod *this);
bool __thiscall CargoPod::hasOption(CargoPod *this,GoodContainmentOption param_1);
basic_string<> * __thiscall CargoPod::describeAddons(CargoPod *this);
void __thiscall CargoHold::describePod(CargoHold *this,int param_1,bool param_2);
void __thiscall CargoHold::configureSlots(CargoHold *this,int param_1,int param_2);
int __thiscall CargoHold::totalUnitsFree(CargoHold *this);
basic_string<> * __thiscall CargoHold::describeCargo(CargoHold *this,bool param_1);
bool __thiscall CargoHold::addToHold(CargoHold *this,int param_1,int param_2,int param_3);
void __thiscall CargoHold::removeFromHold(CargoHold *this,int param_1,int param_2,int param_3);
void __thiscall CargoHold::removeFromHold(CargoHold *this,Good *param_1,int param_2,int param_3);
int __thiscall CargoHold::getPodSellCost(CargoHold *this,int param_1);
bool __thiscall CargoHold::addPod(CargoHold *this,int param_1);
bool __thiscall CargoHold::podExists(CargoHold *this,int param_1);
void __thiscall CargoHold::removePod(CargoHold *this,int param_1);
void __thiscall CargoHold::addOption(CargoHold *this,int param_1,GoodContainmentOption param_2);
int __thiscall CargoHold::amountCanHold(CargoHold *this,Good *param_1);
int __thiscall CargoHold::amountCanHold(CargoHold *this,GoodContainmentOption param_1);
int __thiscall CargoHold::totalBaseValue(CargoHold *this);
int __thiscall CargoHold::amountHeld(CargoHold *this,int param_1);
int __thiscall CargoHold::amountHeld(CargoHold *this,GoodContainmentOption param_1);
void __thiscall CargoHold::addComponent(CargoHold *this,ShipComponent *param_1);
bool __thiscall CargoHold::hasComponent(CargoHold *this,int param_1);
void __thiscall CargoHold::removeComponent(CargoHold *this,ShipComponent *param_1);
GoodContainmentOption __cdecl getContainmentOption(void *param_1);
void __thiscall HackEngine::failHack(HackEngine *this,Ship *param_1);
void __thiscall HackEngine::performHack(HackEngine *this,Ship *param_1,CommsData *param_2,BankAccount *param_3);
void __thiscall WaveformData::addPeak(WaveformData *this,float param_1,int param_2);
SensorData * __thiscall SensorData::SensorData(SensorData *this,int param_1,int param_2,float param_3);
void __thiscall SensorData::getSolutionString(SensorData *this);
Vec2 * __thiscall SensorData::getPresumedLocation(SensorData *this);
void __thiscall SensorData::describeDetail(SensorData *this,bool param_1);
void __thiscall SensorData::describe(SensorData *this,bool param_1,char param_2);
bool __thiscall SensorData::canBeMooredWith(SensorData *this);
bool __thiscall SensorData::isSynthetic(SensorData *this);
bool __thiscall SensorData::analysed(SensorData *this);
float __thiscall WaveformData::getStrength(WaveformData *this);
Ship * __thiscall Ship::Ship(Ship *this,int param_2,int param_3,basic_string<> *param_4);
void __thiscall std::map<>::~map<>(map<> *this);
void __thiscall Ship::~Ship(Ship *this);
void __thiscall Conversation::~Conversation(Conversation *this);
void __thiscall Ship::initialiseBehaviour(Ship *this,CraftPurpose param_1,int param_2,int param_3);
void __thiscall Ship::log(undefined4 param_1,int param_2,char *param_3,...);
void __thiscall Ship::setNoFog(Ship *this);
void __thiscall Ship::setFullFog(Ship *this);
void __thiscall Ship::removeAllFog(Ship *this);
double __thiscall Ship::relativeAngleToLocation(Ship *this,undefined4 param_2,undefined4 param_3);
double __thiscall Ship::relativeAngleToObject(Ship *this,GameObject *param_1);
double __thiscall Ship::trueAngleToPosition(Ship *this,float param_2);
double __thiscall Ship::trueAngleToObject(Ship *this,GameObject *param_1);
SensorData * __thiscall Ship::getMostDangerousSensorObject(Ship *this);
void __thiscall Ship::selectNextValidSensorObject(Ship *this);
void __thiscall Ship::selectPrevValidSensorObject(Ship *this);
void __thiscall Ship::setEmcon(Ship *this,bool param_1);
bool __thiscall Ship::hullDamaged(Ship *this);
bool __thiscall Ship::isDestroyed(Ship *this);
HullDamageState __thiscall Ship::getDamageStateForHullSection(Ship *this,HullLocation param_1);
int __thiscall Ship::getHullDamagePercent(Ship *this);
int __thiscall Ship::getDamageAmountForHullSection(Ship *this,HullLocation param_1);
void __thiscall Ship::setSector(Ship *this,int param_1);
void __thiscall Ship::giveFullPower(Ship *this);
void __thiscall Ship::addModulesWithConfig(Ship *this,void *param_2);
void __thiscall Ship::setDefaultEMCONSettings(Ship *this);
bool __thiscall Ship::reactorOnline(Ship *this);
SensorData * __thiscall Ship::getSensorDataNear(Ship *this);
SensorData * __thiscall Ship::getSensorDataForShipID(Ship *this,int param_1);
SensorData * __thiscall Ship::getSensorDataForSyntheticObjectID(Ship *this,int param_1);
SensorData * __thiscall Ship::getSensorData(Ship *this,int param_1);
bool __thiscall Ship::getLinkedProbeDetectionOf(Ship *this,Ship *param_1);
bool __thiscall Ship::canCurrentlyDetect(Ship *this,Ship *param_1);
void __thiscall Ship::removeSensorDataForSyntheticID(Ship *this,int param_1);
void __thiscall Ship::removeSensorData(Ship *this,SensorData *param_1);
void __thiscall Ship::clearSensorData(Ship *this);
bool __thiscall Ship::alwaysKnown(Ship *this,Ship *param_1);
void __thiscall Ship::runPassiveSensorLogic(Ship *this,float param_1);
float __thiscall Ship::getWaveform(Ship *this,float param_1);
bool __thiscall Ship::isDisabled(Ship *this,bool param_1);
Ship * __thiscall Ship::performSensorScan(Ship *this,float param_1);
bool __thiscall Ship::canUseWeapons(Ship *this);
void __thiscall Ship::removeWeapon(Ship *this,Weapon *param_1);
int __thiscall Ship::maxWeapons(Ship *this);
bool __thiscall Ship::weaponSpunUp(Ship *this);
bool __thiscall Ship::hasWeaponFired(Ship *this,char *param_2);
int __thiscall Ship::addWeapon(Ship *this,WeaponClass *param_1,int param_2);
void __thiscall Ship::fireWeapon(Ship *this,int param_1);
HullLocation __thiscall Ship::getDamageLocationForAngle(Ship *this,DamageAngle param_1);
void __thiscall Ship::destroy(Ship *this);
bool __thiscall Ship::damage(Ship *this,int param_1,float param_2,DamageType param_3,Ship *param_4);
void __thiscall Ship::repairConsoleDamage(Ship *this);
void __thiscall Ship::damageConsole(Ship *this);
ConsoleDamage * __thiscall Ship::getConsoleDamage(Ship *this,char *param_2);
int __thiscall Ship::getValue(Ship *this);
bool __thiscall Ship::hasCargo(Ship *this);
bool __thiscall Ship::hasEmptyPodSlot(Ship *this);
int __thiscall Ship::getNextEmptyCargoPod(Ship *this);
void __thiscall Ship::setDocked(Ship *this,Ship *param_1,bool param_2,bool param_3);
void __thiscall Ship::dockWith(Ship *this,Ship *param_1,bool param_2);
void __thiscall Ship::undock(Ship *this,bool param_1);
void __thiscall Ship::detectsWeaponLaunchFiredAtIt(Ship *this,Ship *param_1);
bool __thiscall Ship::isDocked(Ship *this);
bool __thiscall Ship::isUndocking(Ship *this);
void __thiscall Ship::runDockLogic(Ship *this,float param_1);
void __thiscall Ship::runOrbitLogic(Ship *this,float param_1);
void __thiscall Ship::clearSelectPoints(Ship *this);
void __thiscall Ship::beginJump(Ship *this,undefined4 param_1,undefined4 param_3,undefined4 param_4);
void __thiscall Ship::performSectorChange(Ship *this,int param_1);
void __thiscall Ship::dischargeJumpDrive(Ship *this);
void __thiscall Ship::runJumpLogic(Ship *this,float param_1);
void __thiscall Ship::runLogic(Ship *this,float param_1);
void __thiscall Ship::runSensorLogic(Ship *this,float param_1);
bool __thiscall Ship::canDetectPlayerShip(Ship *this);
void __thiscall Ship::addSensorGhost(Ship *this,int param_1,int param_2,int param_3,float param_4);
void __thiscall Ship::takeHazardDamage(Ship *this);
void __thiscall Ship::runCommsLogic(Ship *this,float param_1);
void __thiscall Ship::runHeatLogic(Ship *this,float param_1);
void __thiscall Ship::runHazardLogic(Ship *this,float param_1);
void __thiscall Ship::resetBurnVector(Ship *this);
void __thiscall Ship::switchTravelState(Ship *this,TravelState param_1);
void __thiscall Ship::runMotionLogic(Ship *this,float param_1);
void __thiscall Ship::performAllStopLogic(Ship *this,float param_1);
void __thiscall Ship::setMotionAngle(Ship *this,float param_1);
float __thiscall Ship::getMotionAngle(Ship *this);
void __thiscall Ship::cancelAutopilot(Ship *this);
float __thiscall Ship::distanceToDecelerateFromFull(Ship *this);
void __thiscall Ship::rotateTo(Ship *this,float param_1);
void __thiscall Ship::addWaypoint(Ship *this,undefined4 param_2,undefined4 param_3);
void __thiscall Ship::addWaypoint(Ship *this,GameObject *param_1);
void __thiscall Ship::getNextWaypointLocation(Ship *this);
void __thiscall Ship::getFinalWaypointLocation(Ship *this);
GameObject * __thiscall Ship::getFinalWaypointObject(Ship *this);
Waypoint * __thiscall Ship::getFinalWaypoint(Ship *this);
void __thiscall Ship::setWaypointFlags(Ship *this);
void __thiscall Ship::clearWaypointFlags(Ship *this);
void __thiscall Ship::travelTo(Ship *this,NavPoint *param_1);
void __thiscall Ship::cancelTravel(Ship *this);
void __thiscall Ship::mapCourseTo(Ship *this,undefined4 param_2,undefined4 param_3);
void __thiscall Ship::mapCourseTo(Ship *this,NavPoint *param_1);
void __thiscall Ship::mapCourseTo(Ship *this,Ship *param_1);
void __thiscall Ship::executeCourse(Ship *this,int param_1,int param_2);
void __thiscall Ship::pathComplete(Ship *this,PathNode *param_1);
bool __thiscall Ship::isTravellingByAutopilot(Ship *this);
bool __thiscall Ship::isStopping(Ship *this);
void __thiscall Ship::setSpeed(Ship *this,float param_1);
void __thiscall Ship::accelerate(Ship *this,double param_1);
void __thiscall Ship::allStop(Ship *this);
Conversation * __thiscall Ship::getForcedConversation(Ship *this,bool param_1);
Conversation * __thiscall Ship::getConversation(Ship *this,bool param_1,bool param_2);
void __thiscall Ship::generateSaleDescription(Ship *this,ModuleType param_1,ModuleType param_2);
undefined4 * __thiscall std::vector<>::insert(vector<> *this,undefined4 *param_2,Waypoint *param_3,Waypoint *param_4);
void __thiscall std::vector<>::~vector<>(vector<> *this);
vector<> * __thiscall std::vector<>::operator=(vector<> *this,vector<> *param_1);
vector<> * __thiscall std::vector<>::operator=(vector<> *this,vector<> *param_1);
void __thiscall std::_Tree<>::erase(_Tree<> *this,undefined4 *param_2,int *param_3,int *param_4);
void __thiscall std::_Tree<>::_Eqrange<int>(_Tree<> *this,int *param_1);
void __thiscall std::vector<>::_Assign_range<>(vector<> *this,undefined4 *param_1,undefined4 *param_2);
void __thiscall ShipChatter::runLogic(ShipChatter *this,float param_1);
int __thiscall ShipChatter::getCurrentTransmissionQuality(ShipChatter *this);
void __thiscall ShipChatter::addMessage(ShipChatter *this,undefined4 param_1,basic_string<> *param_3);
HullLocation __cdecl getHullLocationForString(undefined4 *param_1);
ShipClass * __thiscall ShipClass::ShipClass(ShipClass *this,VesselType param_1);
ShipConfiguration * __thiscall ShipClass::getShipConfiguration(ShipClass *this,char *param_2);
void __thiscall ShipClass::unpackAndAddConfiguration(ShipClass *this,char *param_2,undefined4 param_3,undefined4 param_4,char *param_5,undefined8 param_6);
void __thiscall ShipClass::hullStrengthForSection(ShipClass *this,HullLocation param_1);
bool __thiscall ShipClass::canBeDockedWith(ShipClass *this);
void __thiscall Destination::Destination(Destination *this,undefined4 param_2,undefined4 param_3,void *param_4);
int __thiscall ShipMechanics::hullRepairCost(ShipMechanics *this,Ship *param_1,HullLocation param_2);
int __thiscall ShipMechanics::getRepairPoints(ShipMechanics *this,Ship *param_1);
void __thiscall ShipMechanics::performHullRepairAll(ShipMechanics *this,Ship *param_1);
void __thiscall ShipMechanics::itemiseHullRepairCost(ShipMechanics *this,Ship *param_1,TextEngine *param_2);
int __thiscall ShipMechanics::moduleRepairCost(ShipMechanics *this,Ship *param_1);
SpaceStation * __thiscall SpaceStation::SpaceStation(SpaceStation *this,undefined4 param_1,void *param_3);
void __thiscall SpaceStation::shipUndocking(SpaceStation *this,Ship *param_1);
void __thiscall SpaceStation::shipDocking(SpaceStation *this,Ship *param_1);
bool __thiscall SpaceStation::shipHasPaidForUse(SpaceStation *this,char *param_2);
bool __thiscall SpaceStation::requestUndockingClearance(SpaceStation *this,Ship *param_1,bool param_2);
void __thiscall SpaceStation::regenerateExtras(SpaceStation *this);
void __thiscall ExtraSpawned::~ExtraSpawned(ExtraSpawned *this);
basic_string<> * __thiscall SpaceStation::getTagFor(SpaceStation *this,basic_string<> *param_2,char *param_3);
void __thiscall SpaceStation::dockShip(SpaceStation *this,Ship *param_1);
bool __thiscall SpaceStation::shipHasDockingClearance(SpaceStation *this,Ship *param_1);
bool __thiscall SpaceStation::shipHasUndockingClearance(SpaceStation *this,Ship *param_1);
DockingRequest * __thiscall SpaceStation::getDockingRequest(SpaceStation *this,Ship *param_1);
void __thiscall SpaceStation::runLogic(SpaceStation *this,float param_1);
void __thiscall SpaceStation::checkExistState(SpaceStation *this);
void __thiscall SpaceStation::addAmount(SpaceStation *this,int param_1);
void __thiscall SpaceStation::removeAmount(SpaceStation *this,int param_1);
int __thiscall SpaceStation::getCurrentAmountOwed(SpaceStation *this);
void __thiscall SpaceStation::clearPassengers(SpaceStation *this);
void __thiscall SpaceStation::populatePassengers(SpaceStation *this);
ExtraSpawned * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,ExtraSpawned *param_1,ExtraSpawned *param_2);
void __cdecl std::_Destroy_range<>(ExtraSpawned *param_1,ExtraSpawned *param_2,allocator<> *param_3);
ExtraSpawned * __cdecl std::_Uninitialized_move<>(ExtraSpawned *param_1,ExtraSpawned *param_2,ExtraSpawned *param_3,allocator<> *param_4);
Weapon * __thiscall Weapon::Weapon(Weapon *this,Ship *param_1,WeaponClass *param_2);
void __thiscall Weapon::getSolutionString(Weapon *this);
bool __thiscall Weapon::alwaysKnown(Weapon *this,Ship *param_1);
int __thiscall Weapon::getSpinUpPercent(Weapon *this,int param_1);
int __thiscall Weapon::getCurrentCalculatedPowerPercantage(Weapon *this,int param_1);
bool __thiscall Weapon::canFire(Weapon *this);
bool __thiscall Weapon::isDestroyed(Weapon *this);
bool __thiscall Weapon::damage(Weapon *this,int param_1,float param_2,DamageType param_3);
void __thiscall Weapon::destroy(Weapon *this);
void __thiscall Weapon::runHomeLogic(Weapon *this,float param_1);
void __thiscall Weapon::detonateWarhead(Weapon *this);
void __thiscall Weapon::runEmissionsLogic(Weapon *this,float param_1);
void __thiscall Weapon::runLogic(Weapon *this,float param_1);
void __thiscall Weapon::updateTarget(Weapon *this);
void __thiscall Weapon::runTravelLogic(Weapon *this,float param_1);
void __thiscall Weapon::runStopLogic(Weapon *this,float param_1);
void __thiscall Weapon::runAimLogic(Weapon *this,undefined4 param_1,undefined4 param_3);
void __thiscall Weapon::goActive(Weapon *this);
void __thiscall Weapon::setTarget(Weapon *this,GameObject *param_1);
void __thiscall Weapon::unsetTarget(Weapon *this);
void __cdecl SteamInternal_OnContextInit(void *param_1);
bool __thiscall CSteamAPIContext::Init(CSteamAPIContext *this);
void __thiscall Stats::Stats(Stats *this);
void __thiscall CCallback<>::~CCallback<>(CCallback<> *this);
void __thiscall CCallback<>::~CCallback<>(CCallback<> *this);
void __thiscall Stats::setBinaryStat(Stats *this,void *param_2);
void __thiscall Stats::setStat(Stats *this,void *param_2);
void __thiscall Stats::addStat(Stats *this,int param_2,void *param_3);
bool __thiscall Stats::storeStats(Stats *this);
void __thiscall Stats::onUserStatsReceived(Stats *this,UserStatsReceived_t *param_1);
void __thiscall Stats::onUserStatsStored(Stats *this,UserStatsStored_t *param_1);
bool __thiscall Stats::hasCustomStat(Stats *this,void *param_2);
float __thiscall Stats::getCustomStat(Stats *this,void *param_2);
void __thiscall Stats::setCustomStat(Stats *this,void *param_2);
int * __thiscall std::map<>::operator[](map<> *this,basic_string<> *param_1);
int __thiscall CCallbackImpl<16>::GetCallbackSizeBytes(CCallbackImpl<16> *this);
void __thiscall CCallbackImpl<16>::Run(CCallbackImpl<16> *this,void *param_1,bool param_2,__uint64 param_3);
int __thiscall CCallbackImpl<24>::GetCallbackSizeBytes(CCallbackImpl<24> *this);
void __thiscall CCallback<>::Run(CCallback<> *this,void *param_1);
_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buynode<>(_Tree_comp_alloc<> *this,piecewise_construct_t *param_1,tuple<> *param_2,tuple<> *param_3);
void __thiscall FogInstance::resetFog(FogInstance *this);
int __cdecl FogInstance::getChunk(float param_1);
bool __thiscall FogInstance::removeFogInRadius(FogInstance *this,int param_1,int param_2,undefined4 param_4,undefined4 param_5,float param_6);
bool __thiscall FogInstance::fogObscuresPoint(FogInstance *this,float param_2,float param_3);
void __thiscall NavPoint::removeAdjacentNavpoint(NavPoint *this,int param_1);
Faction * __thiscall Sector::getMainFaction(Sector *this);
Zone * __thiscall Sector::getZone(Sector *this,float param_2,float param_3,char param_4);
SyntheticObject * __thiscall Sector::getSyntheticObjectWithID(Sector *this,int param_1);
SyntheticObject * __thiscall Sector::addSyntheticObject(Sector *this,int param_1);
void __thiscall Sector::removeSyntheticObject(Sector *this,SyntheticObject *param_1);
void __thiscall Sector::addStellarObject(Sector *this,StellarObject *param_1);
StellarObject * __thiscall Sector::getStellarObjectNear(Sector *this);
void __thiscall Sector::removeWeapon(Sector *this,Weapon *param_1);
void __thiscall Sector::removeAllWeapons(Sector *this);
void __thiscall Sector::removeShip(Sector *this,Ship *param_1);
Ship * __thiscall Sector::getShip(Sector *this,int param_1);
Ship * __thiscall Sector::getShip(Sector *this,char *param_2);
Ship * __thiscall Sector::getShipClosestTo(Sector *this,int param_2);
Ship * __thiscall Sector::getSpaceStationClosestTo(Sector *this);
float __thiscall Sector::getAngleToNearestStar(Sector *this,undefined4 param_2,undefined4 param_3);
float __thiscall Sector::getSolarRadiationAt(Sector *this);
void __thiscall Sector::clearBounties(Sector *this);
void __thiscall Sector::setNewBounties(Sector *this);
NavPoint * __thiscall Sector::getNavPointNear(Sector *this);
NavPoint * __thiscall Sector::getNavPointNearZoneSet(Sector *this,char *param_2);
int __thiscall Sector::getNavMeshIDClosestTo(Sector *this,undefined4 param_2,undefined4 param_3,char param_4);
NavPoint * __thiscall Sector::getNavPoint(Sector *this,int param_1,NavPointType param_2);
NavPoint * __thiscall Sector::getNavPoint(Sector *this,int param_1);
NavPoint * __thiscall Sector::getRandomNavPoint(Sector *this,MeshCategory param_1);
NavPoint * __thiscall Sector::getRandomNavPointNotNear(Sector *this,int param_1);
void __thiscall Sector::repopulateTradeLocations(Sector *this);
StellarObject * __thiscall StellarObject::StellarObject(StellarObject *this,int param_1,StellarCategory param_2);
SyntheticObjectCargoInstance * __thiscall SyntheticObjectCargoInstance::SyntheticObjectCargoInstance(SyntheticObjectCargoInstance *this,undefined4 param_1,void *param_3);
SyntheticObject * __thiscall SyntheticObject::SyntheticObject(SyntheticObject *this,SyntheticObjectType param_1);
void __thiscall SyntheticObject::~SyntheticObject(SyntheticObject *this);
bool __thiscall CounterMeasure::runLogic(CounterMeasure *this,float param_1);
int __thiscall SyntheticObject::getNextEmptyCargoPod(SyntheticObject *this);
void __thiscall SystemManager::generatePower(SystemManager *this,float param_1);
bool __thiscall SystemManager::drawPower(SystemManager *this,float param_1);
ShipModule * __thiscall SystemManager::addEmptyModule(SystemManager *this,int param_1,void *param_3);
bool __thiscall SystemManager::addModule(SystemManager *this,ShipModule *param_1,int param_2);
void __thiscall SystemManager::removeModule(SystemManager *this,ShipModule *param_1);
bool __thiscall SystemManager::canAddModule(SystemManager *this,ShipModule *param_1);
ShipModule * __thiscall SystemManager::getModule(SystemManager *this,ModuleType param_1,bool param_2);
void __thiscall SystemManager::connectModulesOfType(SystemManager *this,ModuleType param_1);
void __thiscall SystemManager::disconnectModulesOfType(SystemManager *this,ModuleType param_1);
ShipModule * __thiscall SystemManager::getModule(SystemManager *this,int param_1);
int __thiscall SystemManager::getSlotForType(SystemManager *this,ModuleType param_1);
float __thiscall SystemManager::getMaxBatteryStorage(SystemManager *this);
float __thiscall SystemManager::getMaxTheoreticalPowerGeneration(SystemManager *this);
ShipModule * __thiscall SystemManager::getBattery(SystemManager *this,int param_1);
int __thiscall SystemManager::getCurrentPowerPercentage(SystemManager *this);
float __thiscall SystemManager::totalCurrentPower(SystemManager *this);
float __thiscall SystemManager::totalPossiblePower(SystemManager *this);
void __thiscall SystemManager::resetHardware(SystemManager *this,int param_1);
float __thiscall SystemManager::totalPowerDrain(SystemManager *this);
float __thiscall SystemManager::totalPowerGeneration(SystemManager *this);
void __thiscall SystemManager::runAttritionLogic(SystemManager *this,float param_1);
void __thiscall SystemManager::newDamage(SystemManager *this,HullLocation param_1,float param_2,DamageType param_3);
void __thiscall SystemManager::damage(SystemManager *this,HullLocation param_1,float param_2,DamageType param_3);
void * __thiscall RoomEditor::`vector_deleting_destructor'(RoomEditor *this,uint param_1);
void __thiscall RoomEditor::describeCurrentState(RoomEditor *this);
void __thiscall RoomEditor::setLightObjectsVisible(RoomEditor *this,bool param_1);
void * __thiscall SectorEditor::`scalar_deleting_destructor'(SectorEditor *this,uint param_1);
void __thiscall SectorEditor::disable(SectorEditor *this);
void __thiscall SectorEditor::linkNavPoint(SectorEditor *this,undefined4 param_2,undefined4 param_3);
void __thiscall SectorEditor::addAsteroid(SectorEditor *this);
void __thiscall SectorEditor::describeCurrentState(SectorEditor *this);
Key * __thiscall Key::Key(Key *this,undefined4 param_1,void *param_3);
InputOption * __thiscall InputOption::InputOption(InputOption *this,void *param_2);
InputConfiguration * __thiscall InputConfiguration::InputConfiguration(InputConfiguration *this);
void __thiscall InputConfiguration::setOption(InputConfiguration *this,ShipCommand param_1,KeyCode param_2);
void __thiscall InputConfiguration::populateInputConfig(InputConfiguration *this,vector<> *param_1);
void __thiscall LogSystem::runLogic(LogSystem *this,float param_1);
void __thiscall LogSystem::renderWarning(LogSystem *this);
void __thiscall LogSystem::addLogLine(LogSystem *this,LogPriority param_1,char *param_2,...);
void * __thiscall LogLine::`scalar_deleting_destructor'(LogLine *this,uint param_1);
void __thiscall LogSystem::cleanupWarning(LogSystem *this);
void __thiscall LogSystem::setHistoryItem(LogSystem *this,int param_1);
basic_string<> * __thiscall LogSystem::getLogAsStr(LogSystem *this);
void __cdecl MenuConfiguration::configureMenus(void);
bool __cdecl MenuConfiguration::saveSlotIsSelected(void *param_1);
void __cdecl MenuConfiguration::updateWithSaveSlots(Menu *param_1);
void __cdecl MenuConfiguration::updateWithMultiplayerOptions(Menu *param_1);
void __cdecl MenuConfiguration::updateWithSinglePlayerScenarioCategories(Menu *param_1);
bool __cdecl MenuConfiguration::scenarioIsSelected(void *param_1);
MenuManager * __cdecl Singleton<>::getInstance(void);
function<> * __thiscall std::function<>::operator=<>(function<> *this,_func_void_Menu_ptr *param_1);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<bool,void*> * __thiscall std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<void,Menu*> * __thiscall std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1);
void __thiscall std::_Func_impl_no_alloc<>::_Do_call(_Func_impl_no_alloc<> *this,Menu **param_1);
MenuItem * __thiscall MenuItem::MenuItem(MenuItem *this,undefined4 param_1,void *param_3);
Menu * __thiscall Menu::Menu(Menu *this,undefined4 param_1,void *param_3);
void * __thiscall Menu::`scalar_deleting_destructor'(Menu *this,uint param_1);
void __thiscall Menu::~Menu(Menu *this);
void __thiscall Menu::removeAllItems(Menu *this);
bool __thiscall Menu::triggerValid(undefined4 param_1,void *param_2);
Menu * __thiscall MenuManager::getMenu(MenuManager *this,int param_1);
void __thiscall MenuManager::resetGame(MenuManager *this);
void * __thiscall ParticleEngine::`scalar_deleting_destructor'(ParticleEngine *this,uint param_1);
void __thiscall ParticleEngine::runlogic(ParticleEngine *this,float param_1);
bool __cdecl PresentationData::checkRoomObjectState(int param_1,int param_2,void *param_3);
bool __cdecl PresentationData::checkHasSelectedDirection(int param_1,undefined4 param_2,void *param_3);
bool __cdecl PresentationData::checkNavMapLockedToShip(int param_1,int param_2,void *param_3);
bool __cdecl PresentationData::doMoveMapLeft(Ship *param_1,double param_2,double param_3,double param_4);
bool __cdecl PresentationData::doMoveMapRight(Ship *param_1,double param_2,double param_3,double param_4);
bool __cdecl PresentationData::doMoveMapUp(Ship *param_1,double param_2,double param_3,double param_4);
bool __cdecl PresentationData::doMoveMapDown(Ship *param_1,double param_2,double param_3,double param_4);
bool __cdecl PresentationData::doMapZoomIn(Ship *param_1,double param_2,double param_3,double param_4);
bool __cdecl PresentationData::doMapZoomOut(Ship *param_1,double param_2,double param_3,double param_4);
bool __cdecl PresentationData::doRecenterMapOnShip(Ship *param_1,double param_2,double param_3,double param_4);
void __cdecl PresentationData::moveMap(float param_1,float param_2);
bool __cdecl PresentationData::isLocalCommand(int param_1);
void __cdecl PresentationData::getShipCommandFunction(int param_1);
_Func_base<> * __thiscall std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<> * __thiscall std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1);
bool __thiscall std::_Func_impl_no_alloc<>::_Do_call(_Func_impl_no_alloc<> *this,Ship **param_1,double *param_2,double *param_3,double *param_4);
bool __thiscall std::_Func_impl_no_alloc<>::_Do_call(_Func_impl_no_alloc<> *this,Ship **param_1,double *param_2,double *param_3,double *param_4);
bool __thiscall RoomObject::isCharacter(RoomObject *this);
Node * __thiscall PresentationInterface::PresentationInterface(PresentationInterface *this);
void * __thiscall PresentationInterface::`scalar_deleting_destructor'(PresentationInterface *this,uint param_1);
void __thiscall PresentationInterface::~PresentationInterface(PresentationInterface *this);
void __thiscall PresentationInterface::configureSoundForShip(PresentationInterface *this);
void __thiscall PresentationInterface::runFullFadeLogic(PresentationInterface *this,float param_1);
void __thiscall PresentationInterface::update(PresentationInterface *this,float param_1);
void __thiscall PresentationInterface::boardDockedVessel(PresentationInterface *this,Ship *param_1);
void __thiscall PresentationInterface::leaveDockedVessel(PresentationInterface *this,Ship *param_1);
void __thiscall PresentationInterface::boardMooredStructure(PresentationInterface *this,Ship *param_1);
void __thiscall PresentationInterface::setAirlockStates(PresentationInterface *this,Ship *param_1,bool param_2);
void __thiscall PresentationInterface::changeRoom(PresentationInterface *this,int param_1);
void __thiscall PresentationInterface::cleanupCurrentRoom(PresentationInterface *this);
void __thiscall PresentationInterface::showRoom(PresentationInterface *this,int param_1);
void __thiscall PresentationInterface::onKeyPressed(PresentationInterface *this,KeyCode param_1,Event *param_2);
void __thiscall PresentationInterface::switchToConsoleID(PresentationInterface *this,int param_1);
void __thiscall PresentationInterface::quitToMenu(PresentationInterface *this);
void __thiscall PresentationInterface::onKeyReleased(PresentationInterface *this,KeyCode param_1,Event *param_2);
void __thiscall PresentationInterface::resetSpaceStationScreens(PresentationInterface *this);
bool __thiscall PresentationInterface::tabletActive(PresentationInterface *this);
void __thiscall PresentationInterface::showTablet(PresentationInterface *this,int param_1);
void __thiscall PresentationInterface::setTabletScreen(PresentationInterface *this,int param_1);
void __thiscall PresentationInterface::hideTablet(PresentationInterface *this,bool param_1);
void __thiscall PresentationInterface::hideTabletInstantly(PresentationInterface *this);
void __thiscall PresentationInterface::switchToPComms(PresentationInterface *this);
void __thiscall PresentationInterface::setMessageFocus(PresentationInterface *this,RoomObject *param_1);
void __thiscall PresentationInterface::switchToHelmControlAfterUndocking(PresentationInterface *this);
void __thiscall PresentationInterface::moveToRTCommsStation(PresentationInterface *this);
char __thiscall PresentationInterface::keycodeToChar(PresentationInterface *this,KeyCode param_1,bool param_2,bool param_3);
void __thiscall PresentationInterface::eventLocationToLocation(PresentationInterface *this,EventMouse *param_1);
void __thiscall PresentationInterface::onMouseMove(PresentationInterface *this,Event *param_1);
void __thiscall PresentationInterface::onMouseUp(PresentationInterface *this,Event *param_1);
void __thiscall PresentationInterface::onMouseDown(PresentationInterface *this,Event *param_1);
void __thiscall PresentationInterface::onMouseScroll(PresentationInterface *this,Event *param_1);
bool __cdecl PresentationInterface::doToggleRoomObject(Ship *param_1,double param_2,double param_3,double param_4);
void __thiscall PresentationInterface::moveToCameraPos(PresentationInterface *this,int param_1,float param_2);
basic_string<> * __thiscall PresentationInterface::getConsoleToDamage(PresentationInterface *this);
void __thiscall PresentationInterface::addShake(PresentationInterface *this,char *param_2);
void __thiscall PresentationInterface::switchJumpMode(PresentationInterface *this,bool param_1);
void __thiscall PresentationInterface::switchEmconMode(PresentationInterface *this,bool param_1);
void __thiscall PresentationInterface::runCameraLogic(PresentationInterface *this,float param_1);
void __thiscall PresentationInterface::runLightLogic(PresentationInterface *this,float param_1);
void __thiscall PresentationInterface::giveEmoteToCharacter(PresentationInterface *this,char *param_2);
bool __thiscall PresentationInterface::talkToCharacter(PresentationInterface *this,undefined4 param_2,char *param_3);
void __thiscall PresentationInterface::flicker(PresentationInterface *this,int param_1);
void __thiscall PresentationInterface::exitGame(PresentationInterface *this);
bool __thiscall PresentationInterface::hasForcedConversationPending(PresentationInterface *this);
void * __thiscall ServerPresentationInterface::`scalar_deleting_destructor'(ServerPresentationInterface *this,uint param_1);
void __thiscall ServerPresentationInterface::~ServerPresentationInterface(ServerPresentationInterface *this);
void __thiscall ServerPresentationInterface::renderOutlines(ServerPresentationInterface *this);
void __thiscall ServerPresentationInterface::update(ServerPresentationInterface *this,float param_1);
void __thiscall ServerPresentationInterface::configureMenus(ServerPresentationInterface *this);
void __thiscall ServerPresentationInterface::renderServerMenu(ServerPresentationInterface *this);
void __thiscall ServerPresentationInterface::quit(ServerPresentationInterface *this,int param_1);
void __thiscall ServerPresentationInterface::forceStart(ServerPresentationInterface *this,int param_1);
void __thiscall ServerPresentationInterface::setScenario(ServerPresentationInterface *this,int param_1);
bool __thiscall ServerPresentationInterface::difficultySelected(ServerPresentationInterface *this,int param_1);
void __thiscall ServerPresentationInterface::setDifficulty(ServerPresentationInterface *this,int param_1);
ServerMenuItem * __thiscall ServerMenuItem::ServerMenuItem(ServerMenuItem *this,undefined4 param_1,void *param_3);
ServerMenu * __thiscall ServerMenu::ServerMenu(ServerMenu *this,void *param_2);
void __thiscall ServerMenu::~ServerMenu(ServerMenu *this);
char * __thiscall std::map<>::operator[](map<> *this,KeyCode *param_1);
bool __thiscall std::_Func_class<bool,int>::operator()(_Func_class<bool,int> *this,int param_1);
function<> * __thiscall std::function<>::operator=<>(function<> *this,_Binder<> *param_1);
function<> * __thiscall std::function<>::operator=<>(function<> *this,_Binder<> *param_1);
void __thiscall std::_Func_impl_no_alloc<>::_Delete_this(_Func_impl_no_alloc<> *this,bool param_1);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<bool,int> * __thiscall std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<void,int> * __thiscall std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1);
void __thiscall std::_Func_impl_no_alloc<>::_Do_call(_Func_impl_no_alloc<> *this,int *param_1);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<> * __thiscall std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<> * __thiscall std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1);
void __thiscall std::_Func_impl_no_alloc<>::_Do_call(_Func_impl_no_alloc<> *this,KeyCode *param_1,Event **param_2);
_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buynode<>(_Tree_comp_alloc<> *this,piecewise_construct_t *param_1,tuple<> *param_2,tuple<> *param_3);
undefined4 * __thiscall std::_Tree<>::_Insert_hint<>(_Tree<> *this,undefined4 *param_2,pair<> *param_3,_Tree_node<> *param_4);
void __fastcall Catch_All@0053664d(_Tree<> *param_1);
void __thiscall PresentationInterface::`vcall'{776,{flat}}'_}'(PresentationInterface *this);
void __thiscall PresentationInterface::`vcall'{780,{flat}}'_}'(PresentationInterface *this);
bool __thiscall Room::recheckCharacterRenders(Room *this);
void __thiscall Room::render(Room *this,float param_1,Node *param_2);
void __thiscall CameraPos::~CameraPos(CameraPos *this);
void __thiscall Room::cleanupRoom(Room *this);
RoomObject * __thiscall Room::newObject(Room *this);
void __thiscall Room::runLogic(Room *this,float param_1);
ScreenInterface * __thiscall Room::getConsoleInterface(Room *this,int param_1);
Screen_Renderer * __thiscall Room::getConsole(Room *this,int param_1);
RoomObject * __thiscall Room::getObjectForScreenID(Room *this,int param_1);
RoomObject * __thiscall Room::getObject(Room *this,int param_1);
RoomObject * __thiscall Room::getObjectClickedOn(Room *this,float param_2,float param_3);
basic_string<> * __thiscall Room::getObjectTooltipText(undefined4 param_1,basic_string<> *param_2,float param_3,float param_4);
void __thiscall std::vector<>::_Destroy(vector<> *this,CameraPos *param_1,CameraPos *param_2);
void __thiscall std::allocator<CameraPos>::deallocate(allocator<CameraPos> *this,CameraPos *param_1,uint param_2);
CameraPos * __thiscall std::vector<>::_Emplace_reallocate<CameraPos>(vector<> *this,CameraPos *param_1,CameraPos *param_2);
void __fastcall Catch_All@005378a8(vector<> *param_1);
CameraPos * __thiscall std::vector<>::_Umove(vector<> *this,CameraPos *param_1,CameraPos *param_2,CameraPos *param_3);
void __thiscall std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this);
CharacterMouthState __cdecl getCharacterMouthState(void *param_1);
CharacterEyeState __cdecl getCharacterEyeState(void *param_1);
OverlaySegment __cdecl getOverlaySegment(void *param_1);
RoomCharacter * __thiscall RoomCharacter::RoomCharacter(RoomCharacter *this,void *param_2);
void __thiscall RoomCharacter::renderHeadOverlays(RoomCharacter *this,RoomObject *param_1);
void __thiscall RoomCharacter::renderOverlay(RoomCharacter *this,RoomObject *param_1,int param_2);
void __thiscall RoomCharacter::renderCharacterOverlays(RoomCharacter *this,RoomObject *param_1);
void __thiscall RoomCharacter::renderCharacter(RoomCharacter *this,RoomObject *param_1);
void __thiscall RoomCharacter::setTextures(RoomCharacter *this,RoomObject *param_1);
CharacterPosition __cdecl getCharacterPosition(void *param_1);
RoomObject * __thiscall RoomObject::RoomObject(RoomObject *this);
void __thiscall RoomObject::cleanupObject(RoomObject *this);
bool __thiscall RoomObject::spawnPointCheck(RoomObject *this);
void __thiscall RoomObject::updateRotationForCamera(RoomObject *this);
void __thiscall RoomObject::render(RoomObject *this,Node *param_1);
undefined * Catch@0053bf4c(void);
void FUN_0053bf8e(void);
void __thiscall RoomObject::setMesh(RoomObject *this,bool param_2,Texture2D *param_3,char *param_4);
void __thiscall RoomObject::setMesh(RoomObject *this,bool param_2,void *param_3);
void __thiscall RoomObject::runAnimation(RoomObject *this);
void __thiscall RoomObject::animationDoneCallback(RoomObject *this);
void __thiscall RoomObject::switchToScreen(RoomObject *this,int param_1);
void __thiscall RoomObject::recheckValidScreens(RoomObject *this);
void __thiscall RoomObject::nextValidScreen(RoomObject *this);
void __thiscall RoomObject::renderAllScreens(RoomObject *this);
void __thiscall RoomObject::generateScreen(RoomObject *this,int param_1);
bool __thiscall RoomObject::isInteractAble(RoomObject *this);
void __thiscall RoomObject::resetScreen(RoomObject *this,bool param_1);
void __thiscall RoomObject::resetTopBars(RoomObject *this,bool param_1);
void __thiscall RoomObject::resetTopBar(RoomObject *this,bool param_1);
basic_string<> * __thiscall RoomObject::describe(RoomObject *this);
void __thiscall RoomObject::resetPosition(RoomObject *this);
void __thiscall RoomObject::movePosition(RoomObject *this);
void __thiscall RoomObject::updatePosition(RoomObject *this);
void __thiscall RoomObject::recheckTabs(RoomObject *this);
void __thiscall RoomObject::runLogic(RoomObject *this,float param_1);
void __thiscall RoomObject::clearTextureElements(RoomObject *this);
void __thiscall RoomObject::addTextureElement(RoomObject *this,undefined4 param_2,undefined4 *param_3);
Sprite * __thiscall RoomObject::getTextureElement(RoomObject *this,char *param_2);
void __thiscall RoomObject::unsetCharacter(RoomObject *this);
void __thiscall RoomObject::setCharacter(RoomObject *this,int param_2,void *param_3);
void __thiscall std::vector<>::~vector<>(vector<> *this);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<void> * __thiscall std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1);
basic_string<> * __thiscall Screen_Renderer::getCurrentBootString(Screen_Renderer *this);
UpgradeCommand * __thiscall UpgradeCommand::UpgradeCommand(UpgradeCommand *this,void *param_2);
void * __thiscall Screen_ContractTerminal::`scalar_deleting_destructor'(Screen_ContractTerminal *this,uint param_1);
void * __thiscall TerminalEngine::`scalar_deleting_destructor'(TerminalEngine *this,uint param_1);
void __thiscall Screen_ContractTerminal::configure(Screen_ContractTerminal *this);
void __thiscall Command::~Command(Command *this);
void __thiscall Screen_ContractTerminal::cmd_Cargo(Screen_ContractTerminal *this,char param_1);
bool __thiscall Screen_Renderer::onKeyReleased(Screen_Renderer *this,KeyCode param_1,Event *param_2);
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
void FUN_0054098f(void);
void __thiscall Screen_ContractTerminal::cmd_Take(Screen_ContractTerminal *this,MetaGameAction *param_1,char *param_3,int param_4);
void __thiscall Screen_ContractTerminal::cmd_Current(Screen_ContractTerminal *this,char param_1);
void __thiscall Screen_ContractTerminal::cmd_Info(Screen_ContractTerminal *this,char param_1,char *param_3,int param_4);
void __thiscall std::vector<>::~vector<>(vector<> *this);
void __thiscall std::vector<>::_Destroy(vector<> *this,ContractCommand *param_1,ContractCommand *param_2);
void __thiscall std::allocator<>::deallocate(allocator<> *this,UpgradeCommand *param_1,uint param_2);
function<> * __thiscall std::function<>::operator=<>(function<> *this,_Binder<> *param_1);
function<> * __thiscall std::function<>::operator=<>(function<> *this,_Binder<> *param_1);
void __cdecl std::_Default_allocator_traits<>::construct<>(allocator<Command> *param_1,Command *param_2,Command *param_3);
WeaponCommand * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,WeaponCommand *param_1,WeaponCommand *param_2);
void __fastcall Catch_All@00541d02(vector<> *param_1);
ContractCommand * __thiscall std::vector<>::_Umove(vector<> *this,ContractCommand *param_1,ContractCommand *param_2,ContractCommand *param_3);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<> * __thiscall std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1);
void __thiscall std::_Func_impl_no_alloc<>::_Do_call(_Func_impl_no_alloc<> *this,bool *param_1,vector<> *param_2);
void __thiscall std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<void> * __thiscall std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<> * __thiscall std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1);
void __thiscall std::_Func_impl_no_alloc<>::_Do_call(_Func_impl_no_alloc<> *this,basic_string<> *param_1,vector<> *param_2);
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
double * __thiscall std::vector<>::_Emplace_reallocate<double>(vector<> *this,double *param_1,double *param_2);
void __thiscall std::vector<>::_Assign_range<>(vector<> *this,int param_1,int param_2);
MouseCursor * __cdecl std::_Copy_unchecked<>(MouseCursor *param_1,MouseCursor *param_2,MouseCursor *param_3);
CommsCommand * __thiscall CommsCommand::CommsCommand(CommsCommand *this,void *param_2);
void __thiscall Screen_PC::Screen_PC(Screen_PC *this,ScreenInterface *param_1,int param_2,int param_3);
void * __thiscall Screen_PC::`vector_deleting_destructor'(Screen_PC *this,uint param_1);
void __thiscall CommsCommand::~CommsCommand(CommsCommand *this);
void __thiscall Screen_PC::configure(Screen_PC *this);
void __thiscall Screen_TradeTerminal::update(Screen_TradeTerminal *this,float param_1);
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
void __thiscall std::vector<>::~vector<>(vector<> *this);
void __thiscall std::vector<>::_Destroy(vector<> *this,CommsCommand *param_1,CommsCommand *param_2);
void __thiscall std::allocator<>::deallocate(allocator<> *this,CommsCommand *param_1,uint param_2);
function<> * __thiscall std::function<>::operator=<>(function<> *this,_Binder<> *param_1);
function<> * __thiscall std::function<>::operator=<>(function<> *this,_Binder<> *param_1);
function<> * __thiscall std::function<>::operator=<>(function<> *this,_Binder<> *param_1);
void __cdecl std::_Default_allocator_traits<>::construct<>(allocator<> *param_1,CommsCommand *param_2,CommsCommand *param_3);
CommsCommand * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,CommsCommand *param_1,CommsCommand *param_2);
void __fastcall Catch_All@00549be4(vector<> *param_1);
CommsCommand * __thiscall std::vector<>::_Umove(vector<> *this,CommsCommand *param_1,CommsCommand *param_2,CommsCommand *param_3);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<void> * __thiscall std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<> * __thiscall std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1);
void __thiscall std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<> * __thiscall std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<void> * __thiscall std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<> * __thiscall std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1);
void __thiscall std::_Func_impl_no_alloc<>::_Do_call(_Func_impl_no_alloc<> *this,basic_string<> *param_1);
void * __thiscall Screen_Renderer::`scalar_deleting_destructor'(Screen_Renderer *this,uint param_1);
void __thiscall Screen_Renderer::~Screen_Renderer(Screen_Renderer *this);
void __thiscall RakNet::RakPeer::ApplyNetworkSimulator(RakPeer *this,float param_1,ushort param_2,ushort param_3);
void * __thiscall Screen_RTComms::`scalar_deleting_destructor'(Screen_RTComms *this,uint param_1);
void __thiscall Screen_RTComms::configure(Screen_RTComms *this);
void __thiscall Screen_RTComms::update(Screen_RTComms *this,float param_1);
bool __thiscall Screen_RTComms::onKeyPressed(Screen_RTComms *this,KeyCode param_1,Event *param_2);
bool __thiscall Screen_RTComms::onKeyReleased(Screen_RTComms *this,KeyCode param_1,Event *param_2);
void __thiscall Screen_RTComms::render(Screen_RTComms *this);
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
function<> * __thiscall std::function<>::operator=<>(function<> *this,_Binder<> *param_1);
function<> * __thiscall std::function<>::operator=<>(function<> *this,_Binder<> *param_1);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<> * __thiscall std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<void> * __thiscall std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<> * __thiscall std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1);
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
function<> * __thiscall std::function<>::operator=<>(function<> *this,_Binder<> *param_1);
function<> * __thiscall std::function<>::operator=<>(function<> *this,_Binder<> *param_1);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<> * __thiscall std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<void> * __thiscall std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<> * __thiscall std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1);
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
function<> * __thiscall std::function<>::operator=<>(function<> *this,_Binder<> *param_1);
function<> * __thiscall std::function<>::operator=<>(function<> *this,_Binder<> *param_1);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<> * __thiscall std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<void> * __thiscall std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<> * __thiscall std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1);
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
function<> * __thiscall std::function<>::operator=<>(function<> *this,_Binder<> *param_1);
function<> * __thiscall std::function<>::operator=<>(function<> *this,_Binder<> *param_1);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<> * __thiscall std::_Func_impl_no_alloc<>::_Copy(_Func_impl_no_alloc<> *this,void *param_1);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<void> * __thiscall std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1);
type_info * __thiscall std::_Func_impl_no_alloc<>::_Target_type(_Func_impl_no_alloc<> *this);
_Func_base<> * __thiscall std::_Func_impl_no_alloc<>::_Move(_Func_impl_no_alloc<> *this,void *param_1);
void __thiscall ScreenElement::mouseDown(void);
bool __thiscall ScreenElement::canDrag(ScreenElement *this);
int __thiscall ScreenElement::getDragID(ScreenElement *this);
basic_string<> * __thiscall ScreenElement::getDragLook(undefined4 param_1,basic_string<> *param_2);
int __thiscall ScreenElement::getDragValue(ScreenElement *this);
void __thiscall ScreenElement::dragOnto(void);
ScreenElement * __thiscall ScreenElement::ScreenElement(ScreenElement *this,ScreenInterface *param_1,Widget *param_2,bool *param_3);
void * __thiscall ScreenElement::`vector_deleting_destructor'(ScreenElement *this,uint param_1);
void __thiscall ScreenElement::~ScreenElement(ScreenElement *this);
void __thiscall ScreenElement::setActive(ScreenElement *this,bool param_1);
bool __thiscall ScreenElement::containsPoint(ScreenElement *this);
ScreenInterface * __thiscall ScreenInterface::ScreenInterface(ScreenInterface *this,RoomObject *param_1,ScreenType param_2,bool param_3,Sprite3D *param_4,int param_5,int param_6,ScreenLayout *param_7);
void __thiscall ScreenInterface::~ScreenInterface(ScreenInterface *this);
void __thiscall ScreenInterface::setToolTip(ScreenInterface *this,basic_string<> *param_2);
void __thiscall ScreenInterface::clearToolTip(ScreenInterface *this);
void __thiscall ScreenInterface::cleanupScreen(ScreenInterface *this);
void __thiscall ScreenInterface::setMouseCursor(ScreenInterface *this,basic_string<> *param_2);
void __thiscall ScreenInterface::setMouseOverlay(ScreenInterface *this,void *param_2);
void __thiscall ScreenInterface::updateMouseCursor(ScreenInterface *this);
void __thiscall ScreenInterface::onMouseMove(ScreenInterface *this,float param_2,float param_3);
void __thiscall ScreenInterface::onMouseUp(ScreenInterface *this,float param_2,float param_3);
void __thiscall ScreenInterface::onMouseDown(ScreenInterface *this,float param_2,float param_3);
void __thiscall ScreenInterface::updateMousePosition(ScreenInterface *this,bool param_1,bool param_2);
ScreenElement * __thiscall ScreenInterface::getElementAtPosition(ScreenInterface *this,undefined4 param_2,undefined4 param_3);
void __thiscall ScreenInterface::update(ScreenInterface *this,float param_1,bool param_2);
void __thiscall Widget::unpackExistFunction(Widget *this,void *param_2);
void __thiscall Widget::unpackOptions(Widget *this,int param_2,int param_3,undefined4 param_4,uint param_5);
bool __thiscall Widget::getOptionAsBool(Widget *this,void *param_2);
bool __thiscall Widget::hasOption(Widget *this,void *param_2);
basic_string<> * __thiscall Widget::getOption(Widget *this,basic_string<> *param_2,void *param_3);
Sound __cdecl getSound(void *param_1);
SoundLet * __thiscall SoundLet::SoundLet(SoundLet *this,int param_1,char *param_2,bool param_3,float param_4);
void __thiscall SoundEngine::shutdown(SoundEngine *this);
int __thiscall SoundEngine::addSound(SoundEngine *this,int param_1,Sound param_2,int param_3,bool param_4,bool param_5,float param_6);
void __thiscall SoundEngine::removeAllSounds(SoundEngine *this);
void * __thiscall SoundLet::`scalar_deleting_destructor'(SoundLet *this,uint param_1);
void __thiscall SoundEngine::playSound(SoundEngine *this,Sound param_1,int param_2);
void __thiscall SoundEngine::playSound(SoundEngine *this,Ship *param_1,Sound param_2,int param_3);
void __thiscall SoundEngine::pauseSound(SoundEngine *this,int param_1);
void __thiscall SoundEngine::unpauseSound(SoundEngine *this,int param_1);
void __thiscall SoundEngine::setSoundSpace(SoundEngine *this,SoundSpace *param_1);
void __thiscall SoundEngine::resumeTrack(SoundEngine *this);
void __thiscall SoundEngine::playNewTrack(SoundEngine *this);
void __thiscall SoundEngine::resetSoundVolume(SoundEngine *this);
void __thiscall SoundEngine::setMusicVolume(SoundEngine *this,float param_1);
void __thiscall SoundEngine::runLogic(SoundEngine *this,float param_1);
void __thiscall SoundEngine::playRandomKeyPress(SoundEngine *this,Ship *param_1);
Room * __thiscall Structure::getRoom(Structure *this,int param_1);
void __thiscall TabletManager::getTabletSummary(TabletManager *this);
void __thiscall TabletManager::getNotes(TabletManager *this);
void __thiscall TabletManager::getTranslateString(TabletManager *this);
void __thiscall TabletManager::selectElement(TabletManager *this);
void __thiscall TabletManager::runLogic(TabletManager *this,float param_1);
bool __thiscall TabletManager::keyPressed(TabletManager *this,KeyCode param_1);
void __thiscall TabletManager::performMetaGameAction(TabletManager *this,MetaGameAction *param_1,CargoHold *param_2,BankAccount *param_3);
void __thiscall TabletManager::setElement(TabletManager *this,int param_1);
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
void * __thiscall DummyObject::`vector_deleting_destructor'(DummyObject *this,uint param_1);
void __thiscall UIText::UIText(UIText *this,int param_1,undefined4 param_2,UIText param_4,void *param_5);
void * __thiscall UIText::`scalar_deleting_destructor'(UIText *this,uint param_1);
UIText * __cdecl UIText::create(undefined1 param_1,void *param_2);
UIText * __cdecl UIText::create(void *param_1);
void __thiscall UIText::~UIText(UIText *this);
void __cdecl UIText::translateColour(char param_1);
void __thiscall UIText::setText(UIText *this,char param_2,char param_3,basic_string<> *param_4);
void __thiscall UIText::cleanup(UIText *this);
void __thiscall UIText::cleanupRender(UIText *this);
int __cdecl UIText::generateLines(undefined4 *param_1);
void __thiscall UIText::update(UIText *this);
int __cdecl UIText::getRealWidthWithoutMacros(void *param_1);
void __cdecl UIText::getTextWithoutMacros(undefined4 *param_1);
int __cdecl UIText::getActualTextWidth(void *param_1);
void __thiscall UIText::setOpacity(UIText *this,uchar param_1);
void __thiscall std::vector<>::~vector<>(vector<> *this);
void __thiscall std::vector<>::~vector<>(vector<> *this);
void __thiscall std::vector<>::_Tidy(vector<> *this);
void __thiscall std::vector<>::_Destroy(vector<> *this,word *param_1,word *param_2);
void __thiscall std::vector<>::_Destroy(vector<> *this,vector<> *param_1,vector<> *param_2);
void __thiscall std::allocator<>::deallocate(allocator<> *this,vector<> *param_1,uint param_2);
vector<> * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,vector<> *param_1,vector<> *param_2);
void __fastcall Catch_All@00560d56(vector<> *param_1);
word * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,word *param_1,word *param_2);
void __fastcall Catch_All@00560f1c(vector<> *param_1);
void __cdecl std::_Destroy_range<>(word *param_1,word *param_2,allocator<word> *param_3);
vector<> * __thiscall std::vector<>::vector<>(vector<> *this,vector<> *param_1);
void Catch_All@005610e1(void);
vector<> * __cdecl std::_Uninitialized_move<>(vector<> *param_1,vector<> *param_2,vector<> *param_3,allocator<> *param_4);
word * __cdecl std::_Uninitialized_move<>(word *param_1,word *param_2,word *param_3,allocator<word> *param_4);
void __thiscall std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this);
void * __thiscall DummyObject::`vector_deleting_destructor'`adjustor{632}'(DummyObject *this,uint param_1);
void __thiscall TextField::TextField(TextField *this,ScreenInterface *param_1,Widget *param_2,bool *param_3,int param_4,int param_5,void *param_7);
void * __thiscall TextField::`scalar_deleting_destructor'(TextField *this,uint param_1);
void __thiscall TextField::cleanupRender(TextField *this);
void __thiscall TextField::setText(TextField *this,undefined4 param_1,int param_2,undefined4 *param_4);
void __thiscall TextField::update(TextField *this);
void __thiscall TextField::paintBackground(TextField *this,undefined4 param_2,undefined4 param_3,int param_4,int param_5);
TopBar * __thiscall TopBar::TopBar(TopBar *this,bool param_1,bool param_2);
void __thiscall TopBar::~TopBar(TopBar *this);
void __thiscall TopBar::cleanupRender(TopBar *this);
void __thiscall TopBar::resetTabs(TopBar *this,int param_1);
void __thiscall TopBar::runLogic(TopBar *this,float param_1);
void __thiscall TopBar::render(TopBar *this);
void __thiscall TopBar::updateBarPosition(TopBar *this);
void __thiscall std::vector<>::~vector<>(vector<> *this);
void __thiscall std::vector<>::_Destroy(vector<> *this,ScreenTab *param_1,ScreenTab *param_2);
ScreenTab * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,ScreenTab *param_1,ScreenTab *param_2);
void __fastcall Catch_All@00563a7a(vector<> *param_1);
void __thiscall std::vector<>::_Range_construct_or_tidy<>(vector<> *this,basic_string<> *param_1,basic_string<> *param_2);
void Catch_All@00563b4e(void);
void __cdecl std::_Destroy_range<>(ScreenTab *param_1,ScreenTab *param_2,allocator<ScreenTab> *param_3);
ScreenTab * __cdecl std::_Uninitialized_move<>(ScreenTab *param_1,ScreenTab *param_2,ScreenTab *param_3,allocator<ScreenTab> *param_4);
void * __thiscall UIAnimatedSprite::`vector_deleting_destructor'(UIAnimatedSprite *this,uint param_1);
void __thiscall UIAnimatedSprite::render(UIAnimatedSprite *this);
Node * __thiscall UIRectangle::UIRectangle(UIRectangle *this,int param_1,int param_2);
void * __thiscall UIRectangle::`vector_deleting_destructor'(UIRectangle *this,uint param_1);
void __thiscall UIRectangle::cleanupAll(UIRectangle *this);
void __thiscall UIRectangle::setColour(UIRectangle *this,undefined4 param_2);
void * __thiscall UI_AdShell::`vector_deleting_destructor'(UI_AdShell *this,uint param_1);
void __thiscall UI_TextField::cleanup(UI_TextField *this);
void __thiscall UI_AdShell::cleanupRender(UI_AdShell *this);
void __thiscall UI_AdShell::render(UI_AdShell *this);
void __thiscall UI_AdShell::specialDataCheckFunction(UI_AdShell *this,float param_1);
void __thiscall UI_BDBar::setValue(UI_BDBar *this,double param_1);
void __thiscall UI_BDBar::UI_BDBar(UI_BDBar *this,ScreenInterface *param_1,Widget *param_2,bool *param_3,float param_4,int param_5,int param_6);
void * __thiscall UI_BDBar::`scalar_deleting_destructor'(UI_BDBar *this,uint param_1);
void __thiscall UI_BDBar::cleanupRender(UI_BDBar *this);
void __thiscall UI_BDBar::render(UI_BDBar *this);
void * __thiscall UI_Border::`scalar_deleting_destructor'(UI_Border *this,uint param_1);
void __thiscall UI_DockVisualisation::cleanupRender(UI_DockVisualisation *this);
void __thiscall UI_Border::render(UI_Border *this);
void __thiscall UI_Button::setValue(UI_Button *this,double param_1);
void * __thiscall UI_Button::`vector_deleting_destructor'(UI_Button *this,uint param_1);
void __thiscall UI_Button::cleanupRender(UI_Button *this);
void __thiscall UI_Button::render(UI_Button *this);
bool __thiscall UI_Button::keyUp(UI_Button *this,KeyCode param_1);
void * __thiscall UI_Checkbox::`scalar_deleting_destructor'(UI_Checkbox *this,uint param_1);
void __thiscall UI_Checkbox::cleanupRender(UI_Checkbox *this);
void __thiscall UI_Checkbox::render(UI_Checkbox *this);
void __thiscall UI_Checkbox::specialDataCheckFunction(UI_Checkbox *this,float param_1);
void __thiscall UI_Checkbox::mouseUp(UI_Checkbox *this);
void * __thiscall UI_ComponentStorage::`vector_deleting_destructor'(UI_ComponentStorage *this,uint param_1);
void __thiscall UI_ComponentStorage::cleanupRender(UI_ComponentStorage *this);
basic_string<> * __thiscall UI_ComponentStorage::getDragLook(UI_ComponentStorage *this,basic_string<> *param_2,undefined4 param_3,undefined4 param_4);
int __thiscall UI_ComponentStorage::getDragValue(UI_ComponentStorage *this,undefined4 param_2,undefined4 param_3);
void __thiscall UI_ComponentStorage::dragOnto(undefined4 param_1_00,int param_1,int param_2);
void __thiscall UI_ComponentStorage::specialDataCheckFunction(UI_ComponentStorage *this,float param_1);
void __thiscall UI_ComponentStorage::render(UI_ComponentStorage *this);
void __thiscall UI_ComponentStorage::mouseUp(UI_ComponentStorage *this,float param_2,float param_3);
void FUN_0056720f(double param_1,double param_2);
int __thiscall UI_ComponentStorage::getElement(UI_ComponentStorage *this,float param_2,float param_3);
void * __thiscall UI_Data::`scalar_deleting_destructor'(UI_Data *this,uint param_1);
void __thiscall UI_Data::cleanupRender(UI_Data *this);
void __thiscall UI_Data::render(UI_Data *this);
void __thiscall UI_Data::specialDataCheckFunction(UI_Data *this,float param_1);
void __thiscall UI_DMenu::UI_DMenu(UI_DMenu *this,ScreenInterface *param_1,Widget *param_2,bool *param_3);
void * __thiscall UI_DMenu::`vector_deleting_destructor'(UI_DMenu *this,uint param_1);
void __thiscall UI_DMenu::~UI_DMenu(UI_DMenu *this);
void __thiscall UI_DMenu::cleanupRender(UI_DMenu *this);
void __thiscall UI_DMenu::render(UI_DMenu *this);
bool __thiscall UI_DMenu::updatePressedButton(UI_DMenu *this,float param_2,float param_3);
void __thiscall UI_DMenu::specialDataCheckFunction(UI_DMenu *this,float param_1);
void __thiscall UI_DMenu::mouseMove(UI_DMenu *this,undefined4 param_2,undefined4 param_3);
void __thiscall UI_DMenu::mouseUp(UI_DMenu *this,undefined4 param_2,undefined4 param_3);
void __thiscall UI_DMenu::mouseHoverCancel(UI_DMenu *this);
void __thiscall std::vector<>::~vector<>(vector<> *this);
void __thiscall std::vector<>::~vector<>(vector<> *this);
void __thiscall std::vector<>::_Destroy(vector<> *this,Rect *param_1,Rect *param_2);
void __thiscall std::allocator<>::deallocate(allocator<> *this,Rect *param_1,uint param_2);
Rect * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,Rect *param_1,Rect *param_2);
void __fastcall Catch_All@00568ee5(vector<> *param_1);
void __thiscall std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this);
void * __thiscall UI_DockVisualisation::`vector_deleting_destructor'(UI_DockVisualisation *this,uint param_1);
void __thiscall UI_DockVisualisation::render(UI_DockVisualisation *this);
void * __thiscall UI_EngPanel::`scalar_deleting_destructor'(UI_EngPanel *this,uint param_1);
void __thiscall UI_EngPanel::~UI_EngPanel(UI_EngPanel *this);
void __thiscall UI_EngPanel::cleanupRender(UI_EngPanel *this);
bool __thiscall UI_EngPanel::keyUp(UI_EngPanel *this,KeyCode param_1);
void __thiscall UI_EngPanel::render(UI_EngPanel *this);
void __thiscall UI_EngPanel::mouseUp(UI_EngPanel *this,float param_2,float param_3);
void __thiscall UI_EngPanel::mouseHoverUpdate(UI_EngPanel *this,float param_2,float param_3);
void __thiscall UI_EngPanel::specialDataCheckFunction(UI_EngPanel *this,float param_1);
basic_string<> * __thiscall UI_EngPanel::getDragLook(UI_EngPanel *this,basic_string<> *param_2,float param_3,float param_4);
int __thiscall UI_EngPanel::getDragValue(UI_EngPanel *this,float param_2,float param_3);
void __thiscall UI_EngPanel::dragOnto(UI_EngPanel *this,int param_1,int param_2,float param_4,float param_5);
void * __thiscall UI_HelmControl::`scalar_deleting_destructor'(UI_HelmControl *this,uint param_1);
void __thiscall UI_HelmControl::cleanupRender(UI_HelmControl *this);
void __thiscall UI_HelmControl::render(UI_HelmControl *this);
void __thiscall UI_HelmControl::specialDataCheckFunction(UI_HelmControl *this,float param_1);
void __thiscall UI_HelmControl::mouseUp(UI_HelmControl *this,float param_2,float param_3);
void __thiscall UI_IconTray::UI_IconTray(UI_IconTray *this,ScreenInterface *param_1,Widget *param_2,bool *param_3);
void * __thiscall UI_IconTray::`scalar_deleting_destructor'(UI_IconTray *this,uint param_1);
void __thiscall UI_IconTray::~UI_IconTray(UI_IconTray *this);
void __thiscall UI_IconTray::cleanupRender(UI_IconTray *this);
void __thiscall UI_IconTray::render(UI_IconTray *this);
void __thiscall UI_IconTray::specialDataCheckFunction(UI_IconTray *this,float param_1);
void __thiscall UI_IconTray::mouseHoverUpdate(UI_IconTray *this,float param_2,float param_3);
void __thiscall UI_IconTray::mouseHoverCancel(UI_IconTray *this);
void __thiscall UI_IconTray::mouseMove(UI_IconTray *this,float param_2,float param_3);
void __thiscall UI_IconTray::mouseUp(UI_IconTray *this,float param_2,float param_3);
void __thiscall UI_Sheet::mouseCancel(UI_Sheet *this);
bool __thiscall UI_IconTray::canNext(UI_IconTray *this);
basic_string<> * __thiscall UI_IconTray::getDragLook(UI_IconTray *this,basic_string<> *param_2,float param_3,float param_4);
int __thiscall UI_IconTray::getDragValue(UI_IconTray *this,float param_2,float param_3);
void __thiscall UI_IconTray::dragOnto(UI_IconTray *this,undefined4 param_1,int param_2,float param_4,float param_5);
UI_Image * __thiscall UI_Image::UI_Image(UI_Image *this,ScreenInterface *param_1,Widget *param_2,bool *param_3,undefined4 param_5,undefined4 param_6,void *param_7);
void * __thiscall UI_Image::`vector_deleting_destructor'(UI_Image *this,uint param_1);
void __thiscall UI_Image::~UI_Image(UI_Image *this);
void __thiscall UI_Image::cleanupRender(UI_Image *this);
void __thiscall UI_Image::render(UI_Image *this);
void __thiscall UI_Image::cacheFrames(UI_Image *this);
void __thiscall UI_Image::specialDataCheckFunction(UI_Image *this,float param_1);
void * __thiscall UI_IntroSequence::`vector_deleting_destructor'(UI_IntroSequence *this,uint param_1);
void __thiscall UI_IntroSequence::cleanupRender(UI_IntroSequence *this);
void __thiscall UI_IntroSequence::render(UI_IntroSequence *this);
void __thiscall UI_IntroSequence::specialDataCheckFunction(UI_IntroSequence *this,float param_1);
bool __thiscall UI_IntroSequence::keyUp(UI_IntroSequence *this,KeyCode param_1);
ButtonElement * __thiscall ButtonElement::ButtonElement(ButtonElement *this,undefined4 param_1,void *param_3);
void __thiscall ButtonElement::render(ButtonElement *this,int param_1,vector<> *param_2,vector<> *param_3,Node *param_4);
UI_Menu * __thiscall UI_Menu::UI_Menu(UI_Menu *this,ScreenInterface *param_1,Widget *param_2,bool *param_3);
void * __thiscall UI_Menu::`scalar_deleting_destructor'(UI_Menu *this,uint param_1);
void __thiscall UI_Menu::~UI_Menu(UI_Menu *this);
void __thiscall UI_Menu::cleanupRender(UI_Menu *this);
bool __thiscall UI_Menu::recheckButtonPressed(UI_Menu *this,float param_2,float param_3);
void __thiscall UI_Menu::render(UI_Menu *this);
void __thiscall UI_Menu::specialDataCheckFunction(UI_Menu *this,float param_1);
void __thiscall UI_Menu::mouseMove(UI_Menu *this,undefined4 param_2,float param_3);
void __thiscall UI_Menu::mouseUp(UI_Menu *this,undefined4 param_2,float param_3);
void __thiscall UI_Menu::mouseHoverCancel(UI_Menu *this);
bool __thiscall UI_Menu::triggerButton(UI_Menu *this,ButtonElement *param_1);
void __thiscall UI_Menu::runTrigger(UI_Menu *this,void *param_2);
void __thiscall UI_Menu::clearMenu(UI_Menu *this);
void __thiscall UI_Menu::removeButtonData(UI_Menu *this);
void __thiscall UI_Menu::changedMenu(UI_Menu *this);
bool __thiscall UI_Menu::canNext(UI_Menu *this);
void __thiscall UI_Menu::updateButtonSelected(UI_Menu *this);
void __thiscall UI_Menu::performPrev(UI_Menu *this);
void __thiscall UI_Menu::performNext(UI_Menu *this);
bool __thiscall UI_Menu::keyDown(UI_Menu *this,KeyCode param_1);
bool __thiscall UI_Menu::keyUp(UI_Menu *this,KeyCode param_1);
bool __thiscall UI_Menu::containsPoint(UI_Menu *this,undefined4 param_2,undefined4 param_3);
UI_ModuleRepair * __thiscall UI_ModuleRepair::UI_ModuleRepair(UI_ModuleRepair *this,ScreenInterface *param_1,Widget *param_2,bool *param_3);
void * __thiscall UI_ModuleRepair::`vector_deleting_destructor'(UI_ModuleRepair *this,uint param_1);
void __thiscall UI_ModuleRepair::~UI_ModuleRepair(UI_ModuleRepair *this);
void __thiscall UI_ModuleRepair::cleanupRender(UI_ModuleRepair *this);
void __thiscall UI_ModuleRepair::renderLine(UI_ModuleRepair *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,char param_6);
void __thiscall UI_ModuleRepair::renderComponent(UI_ModuleRepair *this,int param_1,ShipModule *param_2,bool param_3);
void __thiscall Selectable::~Selectable(Selectable *this);
void __thiscall UI_ModuleRepair::renderButton(UI_ModuleRepair *this);
void __thiscall UI_ModuleRepair::render(UI_ModuleRepair *this);
void __thiscall UI_ModuleRepair::specialDataCheckFunction(UI_ModuleRepair *this,float param_1);
void __thiscall UI_ModuleRepair::setScrewState(UI_ModuleRepair *this);
void __thiscall UI_ModuleRepair::syncAddonAndComponentStates(UI_ModuleRepair *this);
void __thiscall UI_ModuleRepair::setCoverState(UI_ModuleRepair *this);
bool __thiscall UI_ModuleRepair::runAnimations(UI_ModuleRepair *this,float param_1);
bool __thiscall UI_ModuleRepair::anyScrews(UI_ModuleRepair *this);
void __thiscall UI_ModuleRepair::mouseHoverUpdate(UI_ModuleRepair *this,undefined4 param_2,float param_3);
void __thiscall UI_ModuleRepair::mouseUp(UI_ModuleRepair *this,float param_2,float param_3);
int __thiscall UI_ModuleRepair::getComponentSlot(UI_ModuleRepair *this);
void __thiscall UI_ModuleRepair::dragOnto(UI_ModuleRepair *this,int param_1,int param_2,undefined4 param_4,float param_5);
basic_string<> * __thiscall UI_ModuleRepair::getDragLook(UI_ModuleRepair *this,basic_string<> *param_2,undefined4 param_3,float param_4);
int __thiscall UI_ModuleRepair::getDragValue(UI_ModuleRepair *this,undefined4 param_2,float param_3);
void __thiscall std::vector<>::~vector<>(vector<> *this);
void __thiscall std::vector<>::_Destroy(vector<> *this,Selectable *param_1,Selectable *param_2);
void __thiscall std::allocator<>::deallocate(allocator<> *this,JumpGateRoute *param_1,uint param_2);
Selectable * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,Selectable *param_1,Selectable *param_2);
void __fastcall Catch_All@00574ae5(vector<> *param_1);
void __thiscall std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this);
void * __thiscall UI_Multimeter::`scalar_deleting_destructor'(UI_Multimeter *this,uint param_1);
void __thiscall UI_Multimeter::cleanupRender(UI_Multimeter *this);
void __thiscall UI_Multimeter::render(UI_Multimeter *this);
void __thiscall UI_Multimeter::specialDataCheckFunction(UI_Multimeter *this,float param_1);
NM_MapObject * __thiscall NM_MapObject::NM_MapObject(NM_MapObject *this,undefined4 param_1,void *param_3);
UI_NavMap * __thiscall UI_NavMap::UI_NavMap(UI_NavMap *this,ScreenInterface *param_1,Widget *param_2,bool *param_3);
void * __thiscall UI_NavMap::`scalar_deleting_destructor'(UI_NavMap *this,uint param_1);
void __thiscall UI_NavMap::~UI_NavMap(UI_NavMap *this);
void __thiscall UI_NavMap::cleanupRender(UI_NavMap *this);
float __thiscall UI_NavMap::getIconScale(UI_NavMap *this);
float __thiscall UI_NavMap::getStellarScale(UI_NavMap *this);
void __thiscall UI_NavMap::render(UI_NavMap *this);
void __thiscall UI_NavMap::renderMiniMap(UI_NavMap *this);
void __thiscall UI_NavMap::sectorModeClick(UI_NavMap *this,float param_2,float param_3);
void __thiscall UI_NavMap::editorModeClick(UI_NavMap *this);
void __thiscall UI_NavMap::mouseHoverUpdate(UI_NavMap *this,undefined4 param_2,undefined4 param_3);
void __thiscall UI_NavMap::mouseUp(UI_NavMap *this,undefined4 param_2,undefined4 param_3);
void __thiscall UI_NavMap::specialDataCheckFunction(UI_NavMap *this,float param_1);
StellarObject * __thiscall UI_NavMap::getStellarObjectLook(UI_NavMap *this,StellarObject *param_1);
SensorData * __thiscall UI_NavMap::getShipLook(UI_NavMap *this,SensorData *param_1,bool param_2);
Ship * __thiscall UI_NavMap::getShipLook(UI_NavMap *this,Ship *param_1,bool param_2);
void __thiscall UI_NavMap::centreOfMap(UI_NavMap *this);
float * __thiscall UI_NavMap::positionForWorldPosition(UI_NavMap *this,float *param_2,float param_3,float param_4);
float * __thiscall UI_NavMap::worldPositionForPosition(UI_NavMap *this,float *param_2,float param_3,float param_4);
void __thiscall UI_NavMap::renderDetectionCone(UI_NavMap *this,SensorData *param_1,NM_MapObject *param_2,float param_3);
void __thiscall UI_NavMap::renderSensorObject(UI_NavMap *this,SensorData *param_1,float param_2);
void __thiscall UI_NavMap::renderCraft(UI_NavMap *this,Ship *param_1,SensorData *param_2,float param_3);
void __thiscall UI_NavMap::renderSector(UI_NavMap *this);
void __thiscall UI_NavMap::renderCluster(UI_NavMap *this);
void __thiscall JumpGateRoute::~JumpGateRoute(JumpGateRoute *this);
bool __thiscall UI_NavMap::keyDown(UI_NavMap *this,KeyCode param_1);
bool __thiscall UI_NavMap::keyUp(UI_NavMap *this,KeyCode param_1);
void __thiscall UI_NavMap::cancelAllKeys(UI_NavMap *this);
NavMarker * __thiscall std::vector<>::operator[](vector<> *this,uint param_1);
void __thiscall std::vector<>::~vector<>(vector<> *this);
void __thiscall std::vector<>::_Destroy(vector<> *this,JumpGateRoute *param_1,JumpGateRoute *param_2);
UI_NavMap ** __thiscall std::vector<>::_Emplace_reallocate<UI_NavMap*>(vector<> *this,UI_NavMap **param_1,UI_NavMap **param_2);
JumpGateRoute * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,JumpGateRoute *param_1,JumpGateRoute *param_2);
void __fastcall Catch_All@0057f08d(vector<> *param_1);
void __cdecl std::_Destroy_range<>(JumpGateRoute *param_1,JumpGateRoute *param_2,allocator<> *param_3);
JumpGateRoute * __thiscall std::vector<>::_Umove(vector<> *this,JumpGateRoute *param_1,JumpGateRoute *param_2,JumpGateRoute *param_3);
void __thiscall std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this);
void * __thiscall UI_NewsTicker::`scalar_deleting_destructor'(UI_NewsTicker *this,uint param_1);
void __thiscall UI_NewsTicker::~UI_NewsTicker(UI_NewsTicker *this);
void __thiscall UI_NewsTicker::cleanupRender(UI_NewsTicker *this);
void __thiscall UI_NewsTicker::render(UI_NewsTicker *this);
void __thiscall UI_NewsTicker::specialDataCheckFunction(UI_NewsTicker *this,float param_1);
void * __thiscall UI_PowerDetailScreen::`vector_deleting_destructor'(UI_PowerDetailScreen *this,uint param_1);
void __thiscall UI_PowerDetailScreen::cleanupRender(UI_PowerDetailScreen *this);
void __thiscall UI_PowerDetailScreen::render(UI_PowerDetailScreen *this);
void __thiscall UI_PowerDetailScreen::specialDataCheckFunction(UI_PowerDetailScreen *this,float param_1);
void __thiscall UI_PowerDetailScreen::updateText(UI_PowerDetailScreen *this);
void __thiscall UI_PowerDetailScreen::updateRender(UI_PowerDetailScreen *this);
void * __thiscall UI_PowerScreen::`vector_deleting_destructor'(UI_PowerScreen *this,uint param_1);
void __thiscall UI_PowerScreen::~UI_PowerScreen(UI_PowerScreen *this);
void __thiscall UI_PowerScreen::cleanupRender(UI_PowerScreen *this);
void __thiscall UI_PowerScreen::render(UI_PowerScreen *this);
void __thiscall UI_PowerScreen::renderModule(UI_PowerScreen *this,ShipModule *param_1,int param_2,int param_3);
void __thiscall UI_PowerScreen::updateRender(UI_PowerScreen *this);
bool __thiscall UI_PowerScreen::updateEmissionState(UI_PowerScreen *this,Sprite *param_1,ShipModule *param_2);
void __thiscall UI_PowerScreen::specialDataCheckFunction(UI_PowerScreen *this,float param_1);
void __thiscall UI_PowerScreen::mouseUp(UI_PowerScreen *this,float param_2,float param_3);
void __thiscall UI_PowerScreen::mouseHoverUpdate(UI_PowerScreen *this,float param_2,float param_3);
Sprite * __thiscall UI_PowerScreen::renderEmcon(UI_PowerScreen *this,bool param_1);
void __thiscall std::vector<>::_Destroy(vector<> *this,ModuleRenderData *param_1,ModuleRenderData *param_2);
ModuleRenderData * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,ModuleRenderData *param_1,ModuleRenderData *param_2);
void __fastcall Catch_All@00582418(vector<> *param_1);
void __cdecl std::_Destroy_range<>(ModuleRenderData *param_1,ModuleRenderData *param_2,allocator<> *param_3);
ModuleRenderData * __cdecl std::_Uninitialized_move<>(ModuleRenderData *param_1,ModuleRenderData *param_2,ModuleRenderData *param_3,allocator<> *param_4);
void * __thiscall UI_SelectedObjectSummary::`vector_deleting_destructor'(UI_SelectedObjectSummary *this,uint param_1);
void __thiscall UI_SelectedObjectSummary::cleanupRender(UI_SelectedObjectSummary *this);
void __thiscall UI_SelectedObjectSummary::render(UI_SelectedObjectSummary *this);
void __thiscall UI_SelectedObjectSummary::specialDataCheckFunction(UI_SelectedObjectSummary *this,float param_1);
void * __thiscall UI_Selector::`scalar_deleting_destructor'(UI_Selector *this,uint param_1);
void __thiscall UI_Selector::cleanupRender(UI_Selector *this);
void __thiscall UI_Selector::render(UI_Selector *this);
void __thiscall UI_Selector::specialDataCheckFunction(UI_Selector *this,float param_1);
void __thiscall UI_Selector::mouseMove(UI_Selector *this,undefined4 param_2,undefined4 param_3);
void __thiscall UI_Selector::mouseUp(UI_Selector *this,undefined4 param_2,undefined4 param_3);
void __thiscall UI_Selector::mouseCancel(UI_Selector *this);
bool __thiscall UI_Selector::checkButtonStates(UI_Selector *this,float param_2);
void * __thiscall UI_SelectTray::`vector_deleting_destructor'(UI_SelectTray *this,uint param_1);
void __thiscall UI_SelectTray::~UI_SelectTray(UI_SelectTray *this);
void __thiscall UI_SelectTray::cleanupRender(UI_SelectTray *this);
void __thiscall UI_SelectTray::render(UI_SelectTray *this);
void __thiscall UI_SelectTray::mouseMove(UI_SelectTray *this,undefined4 param_2,undefined4 param_3);
void __thiscall UI_SelectTray::mouseUp(UI_SelectTray *this,float param_2,float param_3);
void __thiscall UI_SelectTray::mouseCancel(UI_SelectTray *this);
bool __thiscall UI_SelectTray::checkButtonStates(UI_SelectTray *this,float param_2,float param_3);
void * __thiscall UI_SensorDisplay::`scalar_deleting_destructor'(UI_SensorDisplay *this,uint param_1);
void __thiscall UI_SensorDisplay::cleanupRender(UI_SensorDisplay *this);
void __thiscall UI_SensorDisplay::render(UI_SensorDisplay *this);
void __thiscall UI_SensorDisplay::specialDataCheckFunction(UI_SensorDisplay *this,float param_1);
void __thiscall UI_SensorDisplay::getText(UI_SensorDisplay *this);
void * __thiscall UI_SensorSelect::`vector_deleting_destructor'(UI_SensorSelect *this,uint param_1);
bool __thiscall UI_SensorSelect::renderDesiredText(UI_SensorSelect *this);
void __thiscall UI_SensorSelect::render(UI_SensorSelect *this);
void __thiscall UI_SensorSelect::specialDataCheckFunction(UI_SensorSelect *this,float param_1);
void __thiscall std::vector<>::~vector<>(vector<> *this);
void __thiscall std::vector<>::_Tidy(vector<> *this);
SensorSelectionElement * __thiscall std::vector<>::_Emplace_reallocate<>(vector<> *this,SensorSelectionElement *param_1,SensorSelectionElement *param_2);
void __thiscall std::vector<>::_Assign_range<>(vector<> *this,SensorSelectionElement *param_1,SensorSelectionElement *param_2);
SensorSelectionElement * __cdecl std::_Uninitialized_move<>(SensorSelectionElement *param_1,SensorSelectionElement *param_2,SensorSelectionElement *param_3,allocator<> *param_4);
SensorSelectionElement * __thiscall std::vector<>::_Ucopy<>(vector<> *this,SensorSelectionElement *param_1,SensorSelectionElement *param_2,SensorSelectionElement *param_3);
SensorSelectionElement * __cdecl std::_Copy_unchecked<>(SensorSelectionElement *param_1,SensorSelectionElement *param_2,SensorSelectionElement *param_3);
void __thiscall std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this);
void * __thiscall UI_SensorWaveform::`scalar_deleting_destructor'(UI_SensorWaveform *this,uint param_1);
void __thiscall UI_SensorWaveform::cleanupRender(UI_SensorWaveform *this);
void __thiscall UI_SensorWaveform::renderPeak(UI_SensorWaveform *this,float *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_5);
void __thiscall UI_SensorWaveform::render(UI_SensorWaveform *this);
void __thiscall UI_SensorWaveform::renderDigital(UI_SensorWaveform *this);
void __thiscall UI_SensorWaveform::renderAnalog(UI_SensorWaveform *this);
void __thiscall UI_SensorWaveform::specialDataCheckFunction(UI_SensorWaveform *this,float param_1);
void __thiscall UI_Sheet::UI_Sheet(UI_Sheet *this,ScreenInterface *param_1,Widget *param_2,bool *param_3);
void * __thiscall UI_Sheet::`scalar_deleting_destructor'(UI_Sheet *this,uint param_1);
void __thiscall UI_Sheet::~UI_Sheet(UI_Sheet *this);
void __thiscall UI_Sheet::cleanupRender(UI_Sheet *this);
void __thiscall UI_Sheet::render(UI_Sheet *this);
void __thiscall UI_Sheet::specialDataCheckFunction(UI_Sheet *this,float param_1);
void __thiscall UI_Sheet::mouseMove(UI_Sheet *this,float param_2,float param_3);
void __thiscall UI_Sheet::mouseUp(UI_Sheet *this,float param_2,float param_3);
bool __thiscall UI_Sheet::keyUp(UI_Sheet *this,KeyCode param_1);
UI_ShipHullState * __thiscall UI_ShipHullState::UI_ShipHullState(UI_ShipHullState *this,ScreenInterface *param_1,Widget *param_2,bool *param_3);
void * __thiscall UI_ShipHullState::`vector_deleting_destructor'(UI_ShipHullState *this,uint param_1);
void __thiscall UI_ShipHullState::cleanupRender(UI_ShipHullState *this);
void __thiscall UI_ShipHullState::render(UI_ShipHullState *this);
bool __thiscall UI_ShipHullState::checkState(UI_ShipHullState *this,float param_1);
void __thiscall UI_ShipHullState::specialDataCheckFunction(UI_ShipHullState *this,float param_1);
void * __thiscall UI_Slider::`vector_deleting_destructor'(UI_Slider *this,uint param_1);
void __thiscall UI_Slider::cleanupRender(UI_Slider *this);
void __thiscall UI_Slider::render(UI_Slider *this);
void __thiscall UI_Slider::specialDataCheckFunction(UI_Slider *this,float param_1);
void __thiscall UI_Slider::mouseMove(UI_Slider *this,undefined4 param_2,undefined4 param_3);
void __thiscall UI_Slider::mouseUp(UI_Slider *this,float param_2);
void __thiscall UI_StatusBar::setValue(UI_StatusBar *this,double param_1);
UI_StatusBar * __thiscall UI_StatusBar::UI_StatusBar(UI_StatusBar *this,ScreenInterface *param_1,Widget *param_2,bool *param_3,float param_4,float param_5,int param_6,int param_7);
void * __thiscall UI_StatusBar::`vector_deleting_destructor'(UI_StatusBar *this,uint param_1);
void __thiscall UI_StatusBar::render(UI_StatusBar *this);
void * __thiscall UI_SystemBar::`scalar_deleting_destructor'(UI_SystemBar *this,uint param_1);
void __thiscall UI_SystemBar::render(UI_SystemBar *this);
void __thiscall UI_Text::setValue(UI_Text *this,double param_1);
void * __thiscall UI_Text::`vector_deleting_destructor'(UI_Text *this,uint param_1);
void __thiscall UI_Text::cleanupRender(UI_Text *this);
void __thiscall UI_Text::render(UI_Text *this);
void * __thiscall UI_TextBox::`scalar_deleting_destructor'(UI_TextBox *this,uint param_1);
void __thiscall UI_TextBox::cleanupRender(UI_TextBox *this);
void __thiscall UI_TextBox::render(UI_TextBox *this);
void __thiscall UI_TextBox::specialDataCheckFunction(UI_TextBox *this,float param_1);
void __thiscall UI_TextBox::giveFocus(UI_TextBox *this);
void __thiscall UI_TextBox::loseFocus(UI_TextBox *this);
bool __thiscall UI_TextBox::keyDown(UI_TextBox *this,KeyCode param_1);
bool __thiscall UI_TextBox::keyUp(UI_TextBox *this,KeyCode param_1);
void __thiscall UI_TextField::UI_TextField(UI_TextField *this,ScreenInterface *param_1,Widget *param_2,bool *param_3);
void * __thiscall UI_TextField::`vector_deleting_destructor'(UI_TextField *this,uint param_1);
void __thiscall UI_TextField::~UI_TextField(UI_TextField *this);
void __thiscall UI_TextField::cleanupRender(UI_TextField *this);
void __thiscall UI_TextField::render(UI_TextField *this);
void __thiscall UI_TextField::specialDataCheckFunction(UI_TextField *this,float param_1);
void __thiscall UI_TextField::mouseDown(UI_TextField *this,undefined4 param_2,undefined4 param_3);
void __thiscall UI_TextField::mouseUp(UI_TextField *this,undefined4 param_2,undefined4 param_3);
void __thiscall UI_TextField::mouseCancel(UI_TextField *this);
void __thiscall UI_TextField::resetButtonsValid(UI_TextField *this);
void __thiscall UI_TextField::updatePressedStates(UI_TextField *this,float param_2,float param_3);
void * __thiscall UI_WeaponTubes::`scalar_deleting_destructor'(UI_WeaponTubes *this,uint param_1);
void __thiscall UI_WeaponTubes::~UI_WeaponTubes(UI_WeaponTubes *this);
void __thiscall UI_WeaponTubes::cleanupRender(UI_WeaponTubes *this);
void __thiscall UI_WeaponTubes::render(UI_WeaponTubes *this);
void __thiscall UI_WeaponTubes::specialDataCheckFunction(UI_WeaponTubes *this,float param_1);
void __thiscall UI_WeaponTubes::mouseHoverUpdate(UI_WeaponTubes *this,float param_2);
void __thiscall UI_WeaponTubes::mouseUp(undefined4 param_1,float param_2);
void __cdecl OSInterface::initialiseOSFunctions(void);
void __cdecl OSInterface::getSoundLocationForAsset(char *param_1);
void __cdecl OSInterface::getLocationForAsset(char *param_1);
uchar * __cdecl OSInterface::getDataFromFile(basic_string<> *param_1);
void __cdecl OSInterface::getBaseDirectory(void);
void __cdecl OSInterface::getModDirectory(void);
void __cdecl OSInterface::getSaveDirectory(void);
void __cdecl OSInterface::listFiles(void *param_1);
void __cdecl OSInterface::getCorrectedWorldPosition(void);
Pather * __thiscall Pather::Pather(Pather *this);
void * __thiscall Pather::`vector_deleting_destructor'(Pather *this,uint param_1);
void __thiscall Pather::runLogic(Pather *this,float param_1);
void __thiscall Pather::resetSector(Pather *this);
PathNode * __thiscall Pather::calculatePath(Pather *this,PathContext *param_1,uint param_2,bool param_3);
void __thiscall PathContext::~PathContext(PathContext *this);
void __thiscall PathContext::reset(PathContext *this);
void __thiscall std::_Tree<>::clear(_Tree<> *this);
void __thiscall std::vector<>::_Reallocate_exactly(vector<> *this,uint param_1);
void __thiscall std::_Tree<>::_Erase(_Tree<> *this,_Tree_node<> *param_1);
undefined4 * __thiscall std::_Tree<>::erase(_Tree<> *this,undefined4 *param_2,int *param_3,int *param_4);
_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buyheadnode(_Tree_comp_alloc<> *this);
void __thiscall Pool<PathNode>::~Pool<PathNode>(Pool<PathNode> *this);
PathNode * __thiscall Pool<PathNode>::TakeObject(Pool<PathNode> *this);
undefined4 * __thiscall std::_Tree<>::_Insert_hint<>(_Tree<> *this,undefined4 *param_2,int *param_3,int *param_4,undefined4 param_5);
void Catch_All@005929e3(void);
void __thiscall std::_Tree<>::_Insert_nohint<>(_Tree<> *this,undefined4 *param_1,char param_2,int *param_4,undefined4 param_5);
void Catch_All@00592aa3(void);
void __thiscall std::_Tree<>::_Insert_at<>(_Tree<> *this,undefined4 *param_1,char param_2,undefined4 *param_3,PathNode **param_5);
_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buynode<>(_Tree_comp_alloc<> *this,PathNode **param_1);
_Tree_node<> * __thiscall std::_Tree_comp_alloc<>::_Buynode0(_Tree_comp_alloc<> *this);
int __cdecl _fprintf(FILE *_File,char *_Format,...);
float __cdecl fastDistance(Vec2 *param_1,Vec2 *param_2);
void __cdecl debugPrint(char *param_1,char *param_2,...);
int __cdecl random(int param_1);
int __cdecl diceRoll(Dice *param_1);
int __cdecl diceRoll(int param_1,int param_2,int param_3);
void __cdecl unpackDiceFromString(void *param_1);
void __cdecl safeStrCpy(char *param_1);
void __cdecl strWithMaxLength(word *param_1);
Sprite * __cdecl loadSprite(void *param_1);
Sprite * __cdecl loadSprite(void *param_1);
void __cdecl setTexParams(Texture2D *param_1);
void __cdecl strUsingArgs(char *param_1,...);
void __cdecl stripWhiteSpaceFromBeginning(char *param_1);
void __cdecl loadMapFromFile(void *param_1);
void __cdecl loadLinesFromFile(void *param_1);
void __cdecl unpackDiceString(void *param_1);
void __cdecl unpackReadableDiceString(void *param_1);
bool __cdecl stringContains(void *param_1);
void __cdecl replaceCharactersInString(undefined4 *param_1);
void __cdecl firstWordSeparated(char *param_1);
void __cdecl splitStringBy(undefined4 *param_1);
float __cdecl angleInDegreesFrom(float param_1,undefined4 param_2,float param_3);
void __cdecl positionFromPoint(void);
void __cdecl positionDelta(float param_1,float param_2);
void __cdecl randomPositionWithinRadius(undefined4 param_1,undefined4 param_2);
float __cdecl differenceBetweenAngles(float param_1,float param_2);
void __cdecl printFloatAsMinsAndSeconds(float param_1);
void __fastcall FUN_00595000(char *param_1,uint param_2,char *param_3);
StackWalkerInternal * __thiscall StackWalkerInternal::StackWalkerInternal(StackWalkerInternal *this,StackWalker *param_1,void *param_2);
int __thiscall StackWalkerInternal::Init(StackWalkerInternal *this,char *param_1);
int __thiscall StackWalkerInternal::GetModuleListPSAPI(StackWalkerInternal *this,void *param_1);
ulong __thiscall StackWalkerInternal::LoadModule(StackWalkerInternal *this,void *param_1,char *param_2,char *param_3,__uint64 param_4,ulong param_5);
int __thiscall StackWalkerInternal::GetModuleInfo(StackWalkerInternal *this,void *param_1,__uint64 param_2,IMAGEHLP_MODULE64_V3 *param_3);
void * __thiscall OiSStackWalker::`scalar_deleting_destructor'(OiSStackWalker *this,uint param_1);
void __thiscall StackWalker::~StackWalker(StackWalker *this);
int __thiscall StackWalker::LoadModules(StackWalker *this);
int __thiscall StackWalker::ShowCallstack(StackWalker *this,void *param_1,_CONTEXT *param_2,_func_int_void_ptr___uint64_void_ptr_ulong_ulong_ptr_void_ptr *param_3,void *param_4);
int StackWalker::myReadProcMem(void *param_1,__uint64 param_2,void *param_3,ulong param_4,ulong *param_5);
void __thiscall StackWalker::OnLoadModule(StackWalker *this,char *param_1,char *param_2,__uint64 param_3,ulong param_4,ulong param_5,char *param_6,char *param_7,__uint64 param_8);
void __thiscall StackWalker::OnCallstackEntry(StackWalker *this,CallstackEntryType param_1,CallstackEntry *param_2);
void __thiscall StackWalker::OnDbgHelpErr(StackWalker *this,char *param_1,ulong param_2,__uint64 param_3);
void __thiscall StackWalker::OnSymInit(StackWalker *this,char *param_1,ulong param_2,char *param_3);
void __thiscall StackWalker::OnOutput(StackWalker *this,char *param_1);
int __cdecl _snprintf_s<1024>(char *param_1,uint param_2,char *param_3,...);
void __thiscall OiSStackWalker::~OiSStackWalker(OiSStackWalker *this);
void __thiscall OiSStackWalker::OnOutput(OiSStackWalker *this,char *param_1);
long crashHandler(_EXCEPTION_POINTERS *param_1);
void _WinMain@16(void);
void __thiscall RakNet::BitStream::Write<>(BitStream *this,uint24_t *param_1);
bool __thiscall RakNet::BitStream::Read<>(BitStream *this,uint24_t *param_1);
RNS2_SendParameters * __thiscall RakNet::RNS2_SendParameters::RNS2_SendParameters(RNS2_SendParameters *this);
void __thiscall RakNet::BPSTracker::Push1(BPSTracker *this,__uint64 param_1,__uint64 param_2);
BPSTracker * __thiscall RakNet::BPSTracker::BPSTracker(BPSTracker *this);
void __thiscall RakNet::BPSTracker::~BPSTracker(BPSTracker *this);
void __thiscall RakNet::BPSTracker::Reset(BPSTracker *this,char *param_1,uint param_2);
void __thiscall DatagramHeaderFormat::Serialize(DatagramHeaderFormat *this,BitStream *param_1);
void __thiscall DatagramHeaderFormat::Deserialize(DatagramHeaderFormat *this,BitStream *param_1);
int __cdecl RakNet::SplitPacketChannelComp(ushort *param_1,SplitPacketChannel **param_2);
ReliabilityLayer * __thiscall RakNet::ReliabilityLayer::ReliabilityLayer(ReliabilityLayer *this);
void __thiscall RakNet::ReliabilityLayer::~ReliabilityLayer(ReliabilityLayer *this);
void __thiscall RakNet::ReliabilityLayer::Reset(ReliabilityLayer *this,bool param_1,int param_2,bool param_3);
void __thiscall RakNet::ReliabilityLayer::InitializeVariables(ReliabilityLayer *this);
void __thiscall RakNet::ReliabilityLayer::FreeThreadSafeMemory(ReliabilityLayer *this);
bool __thiscall RakNet::ReliabilityLayer::HandleSocketReceiveFromConnectedPlayer(ReliabilityLayer *this,char *param_1,uint param_2,SystemAddress *param_3,List<> *param_4,int param_5,RakNetSocket2 *param_6,RakNetRandom *param_7,__uint64 param_8,BitStream *param_9);
bool __thiscall RakNet::ReliabilityLayer::Send(ReliabilityLayer *this,char *param_1,uint param_2,PacketPriority param_3,PacketReliability param_4,uchar param_5,bool param_6,int param_7,__uint64 param_8,uint param_9);
void __thiscall RakNet::ReliabilityLayer::Update(ReliabilityLayer *this,RakNetSocket2 *param_1,SystemAddress *param_2,int param_3,__uint64 param_4,uint param_5,List<> *param_6,RakNetRandom *param_7,BitStream *param_8);
uint __thiscall RakNet::ReliabilityLayer::RemovePacketFromResendListAndDeleteOlderReliableSequenced(ReliabilityLayer *this,uint24_t param_1,__uint64 param_2,List<> *param_3,SystemAddress *param_4);
uint __thiscall RakNet::ReliabilityLayer::WriteToBitStreamFromInternalPacket(ReliabilityLayer *this,BitStream *param_1,InternalPacket *param_2,__uint64 param_3);
InternalPacket * __thiscall RakNet::ReliabilityLayer::CreateInternalPacketFromBitStream(ReliabilityLayer *this,BitStream *param_1,__uint64 param_2);
void __thiscall RakNet::ReliabilityLayer::SplitPacket(ReliabilityLayer *this,InternalPacket *param_1);
void __thiscall RakNet::ReliabilityLayer::InsertIntoSplitPacketList(ReliabilityLayer *this,InternalPacket *param_1,__uint64 param_2);
InternalPacket * __thiscall RakNet::ReliabilityLayer::BuildPacketFromSplitPacketList(ReliabilityLayer *this,ushort param_1,__uint64 param_2,RakNetSocket2 *param_3,SystemAddress *param_4,RakNetRandom *param_5,BitStream *param_6);
RakNetStatistics * __thiscall RakNet::ReliabilityLayer::GetStatistics(ReliabilityLayer *this,RakNetStatistics *param_1);
void __thiscall RakNet::ReliabilityLayer::ClearPacketsAndDatagrams(ReliabilityLayer *this);
void __thiscall RakNet::ReliabilityLayer::SendACKs(ReliabilityLayer *this,RakNetSocket2 *param_1,SystemAddress *param_2,__uint64 param_3,RakNetRandom *param_4,BitStream *param_5);
InternalPacket * __thiscall RakNet::ReliabilityLayer::AllocateFromInternalPacketPool(ReliabilityLayer *this);
void __thiscall RakNet::ReliabilityLayer::ReleaseToInternalPacketPool(ReliabilityLayer *this,InternalPacket *param_1);
MessageNumberNode * __thiscall RakNet::ReliabilityLayer::GetMessageNumberNodeByDatagramIndex(ReliabilityLayer *this,uint24_t param_1,__uint64 *param_2);
void __thiscall RakNet::ReliabilityLayer::RemoveFromDatagramHistory(ReliabilityLayer *this,uint24_t param_1);
void __thiscall RakNet::ReliabilityLayer::AllocInternalPacketData(ReliabilityLayer *this,InternalPacket *param_1,InternalPacketRefCountedData **param_2,uchar *param_3,uchar *param_4);
void __thiscall RakNet::ReliabilityLayer::FreeInternalPacketData(ReliabilityLayer *this,InternalPacket *param_1,char *param_2,uint param_3);
__uint64 __thiscall RakNet::ReliabilityLayer::GetNextWeight(ReliabilityLayer *this,int param_1);
void __thiscall RakNet::BitStream::Write<>(BitStream *this,ushort *param_1);
bool __thiscall RakNet::BitStream::Read<>(BitStream *this,ushort *param_1);
void __thiscall DataStructures::Heap<>::~Heap<>(Heap<> *this);
void __thiscall DataStructures::List<>::Insert(List<> *this,uint *param_1,char *param_2,uint param_3);
void __thiscall DataStructures::List<>::Preallocate(List<> *this,uint param_1,char *param_2,uint param_3);
void __thiscall DataStructures::Queue<>::~Queue<>(Queue<> *this);
void __thiscall DataStructures::Queue<>::Push(Queue<> *this,HuffmanEncodingTreeNode **param_1,char *param_2,uint param_3);
void __thiscall DataStructures::Queue<>::Push(Queue<> *this,DatagramHistoryNode *param_1,char *param_2,uint param_3);
void __thiscall DataStructures::MemoryPool<>::~MemoryPool<>(MemoryPool<> *this);
MessageNumberNode * __thiscall DataStructures::MemoryPool<>::Allocate(MemoryPool<> *this,char *param_1,uint param_2);
void __thiscall DataStructures::MemoryPool<>::Clear(MemoryPool<> *this,char *param_1,uint param_2);
void __thiscall DataStructures::List<>::RemoveAtIndex(List<> *this,uint param_1);
Heap<> * __thiscall DataStructures::Heap<>::Heap<>(Heap<> *this);
void __thiscall DataStructures::Heap<>::Push(Heap<> *this,__uint64 *param_1,InternalPacket **param_2,char *param_3,uint param_4);
InternalPacket * __thiscall DataStructures::Heap<>::Pop(Heap<> *this,uint param_1);
void __thiscall DataStructures::OrderedList<>::~OrderedList<>(OrderedList<> *this);
uint __thiscall DataStructures::OrderedList<>::GetIndexFromKey(OrderedList<> *this,ushort *param_1,bool *param_2,_func_int_ushort_ptr_SplitPacketChannel_ptr_ptr *param_3);
uint __thiscall DataStructures::OrderedList<>::Insert(OrderedList<> *this,ushort *param_1,SplitPacketChannel **param_2,bool param_3,char *param_4,uint param_5,_func_int_ushort_ptr_SplitPacketChannel_ptr_ptr *param_6);
void __thiscall DataStructures::Queue<bool>::Push(Queue<bool> *this,bool *param_1,char *param_2,uint param_3);
uint __thiscall DataStructures::Queue<bool>::Size(Queue<bool> *this);
void __thiscall DataStructures::List<bool>::Push(List<bool> *this,bool *param_1,char *param_2,uint param_3);
void __thiscall DataStructures::List<>::Preallocate(List<> *this,uint param_1,char *param_2,uint param_3);
void __thiscall DataStructures::RangeList<>::~RangeList<>(RangeList<> *this);
void __thiscall DataStructures::RangeList<>::Insert(RangeList<> *this,uint24_t param_1);
void __thiscall DataStructures::RangeList<>::Clear(RangeList<> *this);
uint __thiscall DataStructures::RangeList<>::Serialize(RangeList<> *this,BitStream *param_1,uint param_2,bool param_3);
bool __thiscall DataStructures::RangeList<>::Deserialize(RangeList<> *this,BitStream *param_1);
void __thiscall DataStructures::List<>::Insert(List<> *this,HeapNode *param_1,char *param_2,uint param_3);
void __thiscall DataStructures::OrderedList<>::~OrderedList<>(OrderedList<> *this);
uint __thiscall DataStructures::OrderedList<>::GetIndexFromKey(OrderedList<> *this,uint24_t *param_1,bool *param_2,_func_int_uint24_t_ptr_RangeNode<>_ptr *param_3);
TimeAndValue2 * __cdecl RakNet::OP_NEW_ARRAY<>(int param_1,char *param_2,uint param_3);
void __thiscall DataStructures::List<>::Insert(List<> *this,RangeNode<> *param_1,char *param_2,uint param_3);
void __thiscall DataStructures::List<>::Insert(List<> *this,RangeNode<> *param_1,uint param_2,char *param_3,uint param_4);
RangeNode<> * __cdecl RakNet::OP_NEW_ARRAY<>(int param_1,char *param_2,uint param_3);
bool __thiscall RakNet::SystemAddress::operator==(SystemAddress *this,SystemAddress *param_1);
void __thiscall RakNet::SystemAddress::ToString(SystemAddress *this,bool param_1,char *param_2,char param_3);
void __thiscall RakNet::SystemAddress::FixForIPVersion(SystemAddress *this,SystemAddress *param_1);
bool __thiscall RakNet::SystemAddress::SetBinaryAddress(SystemAddress *this,char *param_1,char param_2);
bool __thiscall RakNet::SystemAddress::FromStringExplicitPort(SystemAddress *this,char *param_1,ushort param_2,int param_3);
RakNetGUID * __thiscall RakNet::RakNetGUID::RakNetGUID(RakNetGUID *this);
void __thiscall RakNet::RakNetGUID::ToString(RakNetGUID *this,char *param_1);
bool __thiscall RakNet::AddressOrGUID::IsUndefined(AddressOrGUID *this);
AddressOrGUID * __thiscall RakNet::AddressOrGUID::AddressOrGUID(AddressOrGUID *this,AddressOrGUID *param_1);
AddressOrGUID * __thiscall RakNet::AddressOrGUID::AddressOrGUID(AddressOrGUID *this,SystemAddress *param_1);
AddressOrGUID * __thiscall RakNet::AddressOrGUID::operator=(AddressOrGUID *this,SystemAddress *param_1);
void __thiscall RakNet::RNS2EventHandler::~RNS2EventHandler(RNS2EventHandler *this);
void * __thiscall RakNet::RNS2EventHandler::`vector_deleting_destructor'(RNS2EventHandler *this,uint param_1);
void __thiscall RakNet::RakPeerInterface::~RakPeerInterface(RakPeerInterface *this);
void * __thiscall RakNet::RakPeerInterface::`vector_deleting_destructor'(RakPeerInterface *this,uint param_1);
Packet * __thiscall RakNet::RakPeer::AllocPacket(RakPeer *this,uint param_1,char *param_2,uint param_3);
Packet * __thiscall RakNet::RakPeer::AllocPacket(RakPeer *this,uint param_1,uchar *param_2,char *param_3,uint param_4);
RakPeer * __thiscall RakNet::RakPeer::RakPeer(RakPeer *this);
void * __thiscall RakNet::RakPeer::`vector_deleting_destructor'(RakPeer *this,uint param_1);
void __thiscall DataStructures::ThreadsafeAllocatingQueue<>::~ThreadsafeAllocatingQueue<>(ThreadsafeAllocatingQueue<> *this);
void __thiscall RakNet::RakPeer::~RakPeer(RakPeer *this);
StartupResult __thiscall RakNet::RakPeer::Startup(RakPeer *this,uint param_1,SocketDescriptor *param_2,uint param_3,int param_4);
bool __thiscall RakNet::RakPeer::InitializeSecurity(RakPeer *this,char *param_1,char *param_2,bool param_3);
void __thiscall RakNet::RakPeer::AddToSecurityExceptionList(RakPeer *this,char *param_1);
void __thiscall RakNet::RakPeer::RemoveFromSecurityExceptionList(RakPeer *this,char *param_1);
bool __thiscall RakNet::RakPeer::IsInSecurityExceptionList(RakPeer *this,char *param_1);
void __thiscall RakNet::RakPeer::SetMaximumIncomingConnections(RakPeer *this,ushort param_1);
ushort __thiscall RakNet::RakPeer::NumberOfConnections(RakPeer *this);
void __thiscall RakNet::RakPeer::SetIncomingPassword(RakPeer *this,char *param_1,int param_2);
void __thiscall RakNet::RakPeer::GetIncomingPassword(RakPeer *this,char *param_1,int *param_2);
ConnectionAttemptResult __thiscall RakNet::RakPeer::Connect(RakPeer *this,char *param_1,ushort param_2,char *param_3,int param_4,PublicKey *param_5,uint param_6,uint param_7,uint param_8,uint param_9);
ConnectionAttemptResult __thiscall RakNet::RakPeer::ConnectWithSocket(RakPeer *this,char *param_1,ushort param_2,char *param_3,int param_4,RakNetSocket2 *param_5,PublicKey *param_6,uint param_7,uint param_8,uint param_9);
void __thiscall RakNet::RakPeer::Shutdown(RakPeer *this,uint param_1,uchar param_2,PacketPriority param_3);
bool __thiscall RakNet::RakPeer::IsActive(RakPeer *this);
bool __thiscall RakNet::RakPeer::GetConnectionList(RakPeer *this,SystemAddress *param_1,ushort *param_2);
uint __thiscall RakNet::RakPeer::GetNextSendReceipt(RakPeer *this);
uint __thiscall RakNet::RakPeer::IncrementNextSendReceipt(RakPeer *this);
uint __thiscall RakNet::RakPeer::Send(RakPeer *this,char *param_1,int param_2,PacketPriority param_3,PacketReliability param_4,char param_5,AddressOrGUID param_6,bool param_7,uint param_8);
void __thiscall RakNet::RakPeer::SendLoopback(RakPeer *this,char *param_1,int param_2);
uint __thiscall RakNet::RakPeer::Send(RakPeer *this,BitStream *param_1,PacketPriority param_2,PacketReliability param_3,char param_4,AddressOrGUID param_5,bool param_6,uint param_7);
uint __thiscall RakNet::RakPeer::SendList(RakPeer *this,char **param_1,int *param_2,int param_3,PacketPriority param_4,PacketReliability param_5,char param_6,AddressOrGUID param_7,bool param_8,uint param_9);
Packet * __thiscall RakNet::RakPeer::Receive(RakPeer *this);
void __thiscall RakNet::RakPeer::DeallocatePacket(RakPeer *this,Packet *param_1);
uint __thiscall RakNet::RakPeer::GetMaximumNumberOfPeers(RakPeer *this);
void __thiscall RakNet::RakPeer::CloseConnection(RakPeer *this,AddressOrGUID param_1,bool param_2,uchar param_3,PacketPriority param_4);
void __thiscall RakNet::RakPeer::CancelConnectionAttempt(RakPeer *this,SystemAddress param_1);
ConnectionState __thiscall RakNet::RakPeer::GetConnectionState(RakPeer *this,AddressOrGUID param_1);
int __thiscall RakNet::RakPeer::GetIndexFromSystemAddress(RakPeer *this,SystemAddress param_1);
SystemAddress * __thiscall RakNet::RakPeer::GetSystemAddressFromIndex(RakPeer *this,SystemAddress *__return_storage_ptr__,uint param_1);
RakNetGUID * __thiscall RakNet::RakPeer::GetGUIDFromIndex(RakPeer *this,RakNetGUID *__return_storage_ptr__,uint param_1);
void __thiscall RakNet::RakPeer::GetSystemList(RakPeer *this,List<> *param_1,List<> *param_2);
void __thiscall RakNet::RakPeer::AddToBanList(RakPeer *this,char *param_1,uint param_2);
void __thiscall RakNet::RakPeer::RemoveFromBanList(RakPeer *this,char *param_1);
void __thiscall RakNet::RakPeer::ClearBanList(RakPeer *this);
void __thiscall RakNet::RakPeer::SetLimitIPConnectionFrequency(RakPeer *this,bool param_1);
bool __thiscall RakNet::RakPeer::IsBanned(RakPeer *this,char *param_1);
void __thiscall RakNet::RakPeer::Ping(RakPeer *this,SystemAddress param_1);
bool __thiscall RakNet::RakPeer::Ping(RakPeer *this,char *param_1,ushort param_2,bool param_3,uint param_4);
int __thiscall RakNet::RakPeer::GetAveragePing(RakPeer *this,AddressOrGUID param_1);
int __thiscall RakNet::RakPeer::GetLastPing(RakPeer *this,AddressOrGUID param_1);
int __thiscall RakNet::RakPeer::GetLowestPing(RakPeer *this,AddressOrGUID param_1);
void __thiscall RakNet::RakPeer::SetOccasionalPing(RakPeer *this,bool param_1);
__uint64 __thiscall RakNet::RakPeer::GetClockDifferential(RakPeer *this,AddressOrGUID param_1);
__uint64 __thiscall RakNet::RakPeer::GetClockDifferentialInt(RakPeer *this,RemoteSystemStruct *param_1);
void __thiscall RakNet::RakPeer::SetOfflinePingResponse(RakPeer *this,char *param_1,uint param_2);
void __thiscall RakNet::RakPeer::GetOfflinePingResponse(RakPeer *this,char **param_1,uint *param_2);
SystemAddress * __thiscall RakNet::RakPeer::GetInternalID(RakPeer *this,SystemAddress *__return_storage_ptr__,SystemAddress param_1,int param_2);
void __thiscall RakNet::RakPeer::SetInternalID(RakPeer *this,SystemAddress param_1,int param_2);
SystemAddress * __thiscall RakNet::RakPeer::GetExternalID(RakPeer *this,SystemAddress *__return_storage_ptr__,SystemAddress param_1);
RakNetGUID * __thiscall RakNet::RakPeer::GetMyGUID(RakPeer *this,RakNetGUID *__return_storage_ptr__);
SystemAddress * __thiscall RakNet::RakPeer::GetMyBoundAddress(RakPeer *this,SystemAddress *__return_storage_ptr__,int param_1);
RakNetGUID * __thiscall RakNet::RakPeer::GetGuidFromSystemAddress(RakPeer *this,SystemAddress param_1);
SystemAddress * __thiscall RakNet::RakPeer::GetSystemAddressFromGuid(RakPeer *this,SystemAddress *__return_storage_ptr__,RakNetGUID param_1);
bool __thiscall RakNet::RakPeer::GetClientPublicKeyFromSystemAddress(RakPeer *this,SystemAddress param_1,char *param_2);
void __thiscall RakNet::RakPeer::SetTimeoutTime(RakPeer *this,uint param_1,SystemAddress param_2);
uint __thiscall RakNet::RakPeer::GetTimeoutTime(RakPeer *this,SystemAddress param_1);
int __thiscall RakNet::RakPeer::GetMTUSize(RakPeer *this,SystemAddress param_1);
uint __thiscall RakNet::RakPeer::GetNumberOfAddresses(RakPeer *this);
char * __thiscall RakNet::RakPeer::GetLocalIP(RakPeer *this,uint param_1);
bool __thiscall RakNet::RakPeer::IsLocalIP(RakPeer *this,char *param_1);
void __thiscall RakNet::RakPeer::AllowConnectionResponseIPMigration(RakPeer *this,bool param_1);
bool __thiscall RakNet::RakPeer::AdvertiseSystem(RakPeer *this,char *param_1,ushort param_2,char *param_3,int param_4,uint param_5);
void __thiscall RakNet::RakPeer::SetSplitMessageProgressInterval(RakPeer *this,int param_1);
int __thiscall RakNet::RakPeer::GetSplitMessageProgressInterval(RakPeer *this);
void __thiscall RakNet::RakPeer::SetUnreliableTimeout(RakPeer *this,uint param_1);
void __thiscall RakNet::RakPeer::SendTTL(RakPeer *this,char *param_1,ushort param_2,int param_3,uint param_4);
void __thiscall RakNet::RakPeer::AttachPlugin(RakPeer *this,PluginInterface2 *param_1);
void __thiscall RakNet::RakPeer::DetachPlugin(RakPeer *this,PluginInterface2 *param_1);
void __thiscall RakNet::RakPeer::PushBackPacket(RakPeer *this,Packet *param_1,bool param_2);
void __thiscall RakNet::RakPeer::ChangeSystemAddress(RakPeer *this,RakNetGUID param_1,SystemAddress *param_2);
Packet * __thiscall RakNet::RakPeer::AllocatePacket(RakPeer *this,uint param_1);
RakNetSocket2 * __thiscall RakNet::RakPeer::GetSocket(RakPeer *this,SystemAddress param_1);
void __thiscall RakNet::RakPeer::GetSockets(RakPeer *this,List<> *param_1);
void __thiscall RakNet::RakPeer::ReleaseSockets(RakPeer *this,List<> *param_1);
void __thiscall RakNet::RakPeer::SetPerConnectionOutgoingBandwidthLimit(RakPeer *this,uint param_1);
void __thiscall RakNet::RakPeer::WriteOutOfBandHeader(RakPeer *this,BitStream *param_1);
void __thiscall RakNet::RakPeer::SetUserUpdateThread(RakPeer *this,_func_void_RakPeerInterface_ptr_void_ptr *param_1,void *param_2);
void __thiscall RakNet::RakPeer::SetIncomingDatagramEventHandler(RakPeer *this,_func_bool_RNS2RecvStruct_ptr *param_1);
bool __thiscall RakNet::RakPeer::SendOutOfBand(RakPeer *this,char *param_1,ushort param_2,char *param_3,uint param_4,uint param_5);
RakNetStatistics * __thiscall RakNet::RakPeer::GetStatistics(RakPeer *this,SystemAddress param_1,RakNetStatistics *param_2);
void __thiscall RakNet::RakPeer::GetStatisticsList(RakPeer *this,List<> *param_1,List<> *param_2,List<> *param_3);
bool __thiscall RakNet::RakPeer::GetStatistics(RakPeer *this,uint param_1,RakNetStatistics *param_2);
uint __thiscall RakNet::RakPeer::GetReceiveBufferSize(RakPeer *this);
int __thiscall RakNet::RakPeer::GetIndexFromSystemAddress(RakPeer *this,SystemAddress param_1,bool param_2);
ConnectionAttemptResult __thiscall RakNet::RakPeer::SendConnectionRequest(RakPeer *this,char *param_1,ushort param_2,char *param_3,int param_4,PublicKey *param_5,uint param_6,uint param_7,uint param_8,uint param_9,uint param_10);
ConnectionAttemptResult __thiscall RakNet::RakPeer::SendConnectionRequest(RakPeer *this,char *param_1,ushort param_2,char *param_3,int param_4,PublicKey *param_5,uint param_6,uint param_7,uint param_8,uint param_9,uint param_10,RakNetSocket2 *param_11);
RemoteSystemStruct * __thiscall RakNet::RakPeer::GetRemoteSystem(RakPeer *this,AddressOrGUID param_1,bool param_2,bool param_3);
RemoteSystemStruct * __thiscall RakNet::RakPeer::GetRemoteSystemFromSystemAddress(RakPeer *this,SystemAddress param_1,bool param_2,bool param_3);
RemoteSystemStruct * __thiscall RakNet::RakPeer::GetRemoteSystemFromGUID(RakPeer *this,RakNetGUID param_1,bool param_2);
void __thiscall RakNet::RakPeer::ParseConnectionRequestPacket(RakPeer *this,RemoteSystemStruct *param_1,SystemAddress *param_2,char *param_3,int param_4);
void __thiscall RakNet::RakPeer::OnConnectionRequest(RakPeer *this,RemoteSystemStruct *param_1,__uint64 param_2);
void __thiscall RakNet::RakPeer::NotifyAndFlagForShutdown(RakPeer *this,SystemAddress param_1,bool param_2,uchar param_3,PacketPriority param_4);
RemoteSystemStruct * __thiscall RakNet::RakPeer::AssignSystemAddressToRemoteSystemList(RakPeer *this,SystemAddress param_1,ConnectMode param_2,RakNetSocket2 *param_3,bool *param_4,SystemAddress param_5,int param_6,RakNetGUID param_7,bool param_8);
void __thiscall RakNet::RakPeer::ReferenceRemoteSystem(RakPeer *this,SystemAddress *param_1,uint param_2);
void __thiscall RakNet::RakPeer::DereferenceRemoteSystem(RakPeer *this,SystemAddress *param_1);
uint __thiscall RakNet::RakPeer::GetRemoteSystemIndex(RakPeer *this,SystemAddress *param_1);
bool __thiscall RakNet::RakPeer::IsLoopbackAddress(RakPeer *this,AddressOrGUID *param_1,bool param_2);
bool __thiscall RakNet::RakPeer::AllowIncomingConnections(RakPeer *this);
void __thiscall RakNet::RakPeer::DeallocRNS2RecvStruct(RakPeer *this,RNS2RecvStruct *param_1,char *param_2,uint param_3);
RNS2RecvStruct * __thiscall RakNet::RakPeer::AllocRNS2RecvStruct(RakPeer *this,char *param_1,uint param_2);
void __thiscall RakNet::RakPeer::ClearBufferedPackets(RakPeer *this);
void __thiscall RakNet::RakPeer::PingInternal(RakPeer *this,SystemAddress param_1,bool param_2,PacketReliability param_3);
void __thiscall RakNet::RakPeer::CloseConnectionInternal(RakPeer *this,AddressOrGUID *param_1,bool param_2,bool param_3,uchar param_4,PacketPriority param_5);
void __thiscall RakNet::RakPeer::SendBuffered(RakPeer *this,char *param_1,uint param_2,PacketPriority param_3,PacketReliability param_4,char param_5,AddressOrGUID param_6,bool param_7,ConnectMode param_8,uint param_9);
void __thiscall RakNet::RakPeer::SendBufferedList(RakPeer *this,char **param_1,int *param_2,int param_3,PacketPriority param_4,PacketReliability param_5,char param_6,AddressOrGUID param_7,bool param_8,ConnectMode param_9,uint param_10);
bool __thiscall RakNet::RakPeer::SendImmediate(RakPeer *this,char *param_1,uint param_2,PacketPriority param_3,PacketReliability param_4,char param_5,AddressOrGUID param_6,bool param_7,bool param_8,__uint64 param_9,uint param_10);
void __thiscall RakNet::RakPeer::OnConnectedPong(RakPeer *this,__uint64 param_1,__uint64 param_2,RemoteSystemStruct *param_3);
void __thiscall RakNet::RakPeer::ClearBufferedCommands(RakPeer *this);
void __thiscall RakNet::RakPeer::ClearSocketQueryOutput(RakPeer *this);
void __thiscall RakNet::RakPeer::AddPacketToProducer(RakPeer *this,Packet *param_1);
__uint64 __cdecl RakNet::RakPeerInterface::Get64BitUniqueRandomNumber(void);
bool __cdecl RakNet::ProcessOfflineNetworkPacket(SystemAddress param_1,char *param_2,int param_3,RakPeer *param_4,RakNetSocket2 *param_5,bool *param_6,__uint64 param_7);
void __cdecl RakNet::ProcessNetworkPacket(SystemAddress param_1,char *param_2,int param_3,RakPeer *param_4,RakNetSocket2 *param_5,__uint64 param_6,BitStream *param_7);
void __thiscall RakNet::RakPeer::DerefAllSockets(RakPeer *this);
uint __thiscall RakNet::RakPeer::GetRakNetSocketFromUserConnectionSocketIndex(RakPeer *this,uint param_1);
bool __thiscall RakNet::RakPeer::RunUpdateCycle(RakPeer *this,BitStream *param_1);
void __thiscall RakNet::RakPeer::OnRNS2Recv(RakPeer *this,RNS2RecvStruct *param_1);
uint RakNet::UpdateNetworkLoop(void *param_1);
void __thiscall RakNet::RakPeer::CallPluginCallbacks(RakPeer *this,List<> *param_1,Packet *param_2);
void __thiscall RakNet::RakPeer::FillIPList(RakPeer *this);
void __thiscall RakNet::BitStream::Write<>(BitStream *this,__uint64 *param_1);
void __thiscall RakNet::BitStream::Write<>(BitStream *this,uint *param_1);
bool __thiscall RakNet::BitStream::Read<>(BitStream *this,__uint64 *param_1);
void __thiscall DataStructures::List<>::Push(List<> *this,SystemAddress *param_1,char *param_2,uint param_3);
void __thiscall DataStructures::List<>::Push(List<> *this,RakNetGUID *param_1,char *param_2,uint param_3);
List<> * __thiscall DataStructures::List<>::operator=(List<> *this,List<> *param_1);
void __thiscall DataStructures::List<>::RemoveAtIndex(List<> *this,uint param_1);
void __thiscall DataStructures::Queue<>::RemoveAtIndex(Queue<> *this,uint param_1);
void __thiscall DataStructures::ThreadsafeAllocatingQueue<>::Push(ThreadsafeAllocatingQueue<> *this,BufferedCommandStruct *param_1);
BufferedCommandStruct * __thiscall DataStructures::ThreadsafeAllocatingQueue<>::Allocate(ThreadsafeAllocatingQueue<> *this,char *param_1,uint param_2);
SocketQueryOutput * __thiscall DataStructures::ThreadsafeAllocatingQueue<>::Allocate(ThreadsafeAllocatingQueue<> *this,char *param_1,uint param_2);
void __thiscall DataStructures::List<>::~List<>(List<> *this);
void __thiscall DataStructures::List<>::Insert(List<> *this,RakString *param_1,char *param_2,uint param_3);
Packet * __thiscall DataStructures::MemoryPool<>::Allocate(MemoryPool<> *this,char *param_1,uint param_2);
void __thiscall DataStructures::MemoryPool<>::Release(MemoryPool<> *this,Packet *param_1,char *param_2,uint param_3);
RemoteSystemStruct * __thiscall RakNet::RakPeer::RemoteSystemStruct::RemoteSystemStruct(RemoteSystemStruct *this);
void __thiscall RakNet::RakPeer::RemoteSystemStruct::~RemoteSystemStruct(RemoteSystemStruct *this);
void __thiscall DataStructures::MemoryPool<>::Release(MemoryPool<> *this,BufferedCommandStruct *param_1,char *param_2,uint param_3);
void __thiscall DataStructures::MemoryPool<>::Release(MemoryPool<> *this,SocketQueryOutput *param_1,char *param_2,uint param_3);
SystemAddress * __cdecl RakNet::OP_NEW_ARRAY<>(int param_1,char *param_2,uint param_3);
void * __thiscall RakNet::RakPeer::`vector_deleting_destructor'`adjustor{4}'(RakPeer *this,uint param_1);
void * __cdecl RakNet::_RakMalloc_Ex(uint param_1,char *param_2,uint param_3);
void * __cdecl RakNet::_RakRealloc_Ex(void *param_1,uint param_2,char *param_3,uint param_4);
void __cdecl RakNet::_RakFree_Ex(void *param_1,char *param_2,uint param_3);
__uint64 __cdecl GetTimeUS_Windows(void);
BitStream * __thiscall RakNet::BitStream::BitStream(BitStream *this);
void __thiscall RakNet::BitStream::~BitStream(BitStream *this);
void __thiscall RakNet::BitStream::Write(BitStream *this,char *param_1,uint param_2);
void __thiscall RakNet::BitStream::Write(BitStream *this,BitStream *param_1,uint param_2);
void __thiscall RakNet::BitStream::WriteAlignedBytes(BitStream *this,uchar *param_1,uint param_2);
void __thiscall RakNet::BitStream::WriteBits(BitStream *this,uchar *param_1,uint param_2,bool param_3);
bool __thiscall RakNet::BitStream::ReadBits(BitStream *this,uchar *param_1,uint param_2,bool param_3);
void __thiscall RakNet::BitStream::AddBitsAndReallocate(BitStream *this,uint param_1);
void __thiscall RakNet::BitStream::WriteAlignedVar16(BitStream *this,char *param_1);
bool __thiscall RakNet::BitStream::ReadAlignedVar16(BitStream *this,char *param_1);
void __thiscall RakNet::BitStream::WriteAlignedVar32(BitStream *this,char *param_1);
bool __thiscall RakNet::BitStream::ReadAlignedVar32(BitStream *this,char *param_1);
char * __fastcall _Itoa(int param_1,char *param_2);
RNS2BindResult __thiscall RakNet::RNS2_Berkley::BindSharedIPV4(RNS2_Berkley *this,RNS2_BerkleyBindParameters *param_1,char *param_2,uint param_3);
void * __thiscall RakNet::RakNetSocket2::`vector_deleting_destructor'(RakNetSocket2 *this,uint param_1);
RNS2BindResult __thiscall RakNet::RNS2_Berkley::BindShared(RNS2_Berkley *this,RNS2_BerkleyBindParameters *param_1,char *param_2,uint param_3);
uint RakNet::RNS2_Berkley::RecvFromLoop(void *param_1);
void * __thiscall RakNet::RNS2_Berkley::`vector_deleting_destructor'(RNS2_Berkley *this,uint param_1);
void __thiscall RakNet::RNS2_Berkley::BlockOnStopRecvPollingThread(RNS2_Berkley *this);
void * __thiscall RakNet::RNS2_Windows::`vector_deleting_destructor'(RNS2_Windows *this,uint param_1);
RNS2BindResult __thiscall RakNet::RNS2_Windows::Bind(RNS2_Windows *this,RNS2_BerkleyBindParameters *param_1,char *param_2,uint param_3);
int __thiscall RakNet::RNS2_Windows::Send(RNS2_Windows *this,RNS2_SendParameters *param_1,char *param_2,uint param_3);
uint __cdecl SuperFastHashIncremental(char *param_1,int param_2,uint param_3);
void __cdecl WSAStartupSingleton::AddRef(void);
SimpleMutex * __cdecl GetPoolMutex(void);
RakString * __thiscall RakNet::RakString::RakString(RakString *this);
char * __thiscall RakNet::RakString::RakString(RakString *this,char *param_1,...);
void __thiscall RakNet::RakString::~RakString(RakString *this);
bool __thiscall RakNet::RakString::IPAddressMatch(RakString *this,char *param_1);
void __cdecl RakNet::RakString::FreeMemoryNoMutex(void);
void __thiscall RakNet::RakString::Allocate(RakString *this,uint param_1);
void __thiscall RakNet::RakString::Assign(RakString *this,char *param_1);
void __thiscall RakNet::RakString::Assign(RakString *this,char *param_1,char *param_2);
void __thiscall RakNet::RakString::Free(RakString *this);
void __thiscall DataStructures::List<>::Insert(List<> *this,SharedString **param_1,char *param_2,uint param_3);
SimpleMutex * __thiscall RakNet::SimpleMutex::SimpleMutex(SimpleMutex *this);
void __thiscall RakNet::SimpleMutex::~SimpleMutex(SimpleMutex *this);
void __cdecl RakNet::StringCompressor::AddReference(void);
void __cdecl RakNet::StringCompressor::RemoveReference(void);
void __thiscall DataStructures::Map<>::~Map<>(Map<> *this);
uint __thiscall DataStructures::OrderedList<>::GetIndexFromKey(OrderedList<> *this,int *param_1,bool *param_2,_func_int_int_ptr_MapNode_ptr *param_3);
uint __thiscall DataStructures::OrderedList<>::Insert(OrderedList<> *this,int *param_1,MapNode *param_2,bool param_3,char *param_4,uint param_5,_func_int_int_ptr_MapNode_ptr *param_6);
void __cdecl RakNet::StringTable::RemoveReference(void);
void __thiscall RakNet::HuffmanEncodingTree::FreeMemory(HuffmanEncodingTree *this);
void __thiscall RakNet::HuffmanEncodingTree::GenerateFromFrequencyTable(HuffmanEncodingTree *this,uint *param_1);
void __thiscall RakNet::HuffmanEncodingTree::InsertNodeIntoSortedList(HuffmanEncodingTree *this,HuffmanEncodingTreeNode *param_1,LinkedList<> *param_2);
void __thiscall DataStructures::LinkedList<>::~LinkedList<>(LinkedList<> *this);
void __thiscall DataStructures::CircularLinkedList<>::Insert(CircularLinkedList<> *this,HuffmanEncodingTreeNode **param_1);
void __thiscall DataStructures::CircularLinkedList<>::Clear(CircularLinkedList<> *this);
bool __thiscall cocos2d::Application::openURL(Application *this,basic_string<> *param_1);
void __thiscall cocos2d::Application::getVersion(Application *this);
Platform __thiscall cocos2d::Application::getTargetPlatform(Application *this);
char * __thiscall cocos2d::Application::getCurrentLanguageCode(Application *this);
LanguageType __thiscall cocos2d::Application::getCurrentLanguage(Application *this);
void __thiscall cocos2d::Application::setAnimationInterval(Application *this,float param_1);
void __thiscall cocos2d::Application::setAnimationInterval(Application *this,float param_1,SetIntervalReason param_2);
void __thiscall cocos2d::Node::disableCascadeColor(Node *this);
void __thiscall cocos2d::Node::updateCascadeColor(Node *this);
void __thiscall cocos2d::Node::disableCascadeOpacity(Node *this);
void __thiscall cocos2d::Node::updateCascadeOpacity(Node *this);
void __thiscall cocos2d::Node::setCameraMask(Node *this,ushort param_1,bool param_2);
bool __thiscall cocos2d::Node::isOpacityModifyRGB(Node *this);
void __thiscall cocos2d::Node::setOpacityModifyRGB(Node *this,bool param_1);
void __thiscall cocos2d::Node::setCascadeColorEnabled(Node *this,bool param_1);
bool __thiscall cocos2d::Node::isCascadeColorEnabled(Node *this);
void __thiscall cocos2d::Node::updateDisplayedColor(Node *this,Color3B *param_1);
void __thiscall cocos2d::Node::setColor(Node *this,Color3B *param_1);
Color3B * __thiscall cocos2d::Node::getDisplayedColor(Node *this);
Color3B * __thiscall cocos2d::Node::getColor(Node *this);
void __thiscall cocos2d::Node::setCascadeOpacityEnabled(Node *this,bool param_1);
bool __thiscall cocos2d::Node::isCascadeOpacityEnabled(Node *this);
void __thiscall cocos2d::Node::updateDisplayedOpacity(Node *this,uchar param_1);
void __thiscall cocos2d::Node::setOpacity(Node *this,uchar param_1);
uchar __thiscall cocos2d::Node::getDisplayedOpacity(Node *this);
uchar __thiscall cocos2d::Node::getOpacity(Node *this);
void __thiscall cocos2d::Node::removeAllComponents(Node *this);
bool __thiscall cocos2d::Node::removeComponent(Node *this,basic_string<> *param_1);
bool __thiscall cocos2d::Node::removeComponent(Node *this,Component *param_1);
bool __thiscall cocos2d::Node::addComponent(Node *this,Component *param_1);
void __thiscall cocos2d::Node::getWorldToNodeAffineTransform(Node *this);
void __thiscall cocos2d::Node::getWorldToNodeTransform(Node *this);
void __thiscall cocos2d::Node::getNodeToWorldAffineTransform(Node *this);
void __thiscall cocos2d::Node::getNodeToWorldTransform(Node *this);
void __thiscall cocos2d::Node::getParentToNodeAffineTransform(Node *this);
Mat4 * __thiscall cocos2d::Node::getParentToNodeTransform(Node *this);
void __thiscall cocos2d::Node::setNodeToParentTransform(Node *this,Mat4 *param_1);
void __thiscall cocos2d::Node::getNodeToParentAffineTransform(Node *this);
void __thiscall cocos2d::Node::getNodeToParentAffineTransform(Node *this,Node *param_1);
Mat4 * __thiscall cocos2d::Node::getNodeToParentTransform(Node *this);
void __thiscall cocos2d::Node::getNodeToParentTransform(Node *this,Node *param_1);
void __thiscall cocos2d::Node::updateTransform(Node *this);
void __thiscall cocos2d::Node::pause(Node *this);
void __thiscall cocos2d::Node::resume(Node *this);
void __thiscall cocos2d::Node::setScheduler(Node *this,Scheduler *param_1);
Action * __thiscall cocos2d::Node::runAction(Node *this,Action *param_1);
void __thiscall cocos2d::Node::setActionManager(Node *this,ActionManager *param_1);
void __thiscall cocos2d::Node::setEventDispatcher(Node *this,EventDispatcher *param_1);
void __thiscall cocos2d::Node::getBoundingBox(Node *this);
Scene * __thiscall cocos2d::Node::getScene(Node *this);
void __thiscall cocos2d::Node::visit(Node *this,Renderer *param_1,Mat4 *param_2,uint param_3);
void __thiscall cocos2d::Node::visit(Node *this);
void __thiscall cocos2d::Node::draw(Node *this,Renderer *param_1,Mat4 *param_2,uint param_3);
void __thiscall cocos2d::Node::draw(Node *this);
void __thiscall cocos2d::Node::cleanup(Node *this);
void __thiscall cocos2d::Node::onExitTransitionDidStart(Node *this);
void __thiscall cocos2d::Node::onExit(Node *this);
void __thiscall cocos2d::Node::onEnterTransitionDidFinish(Node *this);
void __thiscall cocos2d::Node::onEnter(Node *this);
bool __thiscall cocos2d::Node::isRunning(Node *this);
void __thiscall cocos2d::Node::setGLProgramState(Node *this,GLProgramState *param_1);
void __thiscall cocos2d::Node::setGLProgram(Node *this,GLProgram *param_1);
void __thiscall cocos2d::Node::setUserObject(Node *this,Ref *param_1);
void __thiscall cocos2d::Node::setUserData(Node *this,void *param_1);
void __thiscall cocos2d::Node::setName(Node *this,basic_string<> *param_1);
basic_string<> * __thiscall cocos2d::Node::getName(Node *this);
void __thiscall cocos2d::Node::setTag(Node *this,int param_1);
int __thiscall cocos2d::Node::getTag(Node *this);
void __thiscall cocos2d::Node::sortAllChildren(Node *this);
void __thiscall cocos2d::Node::reorderChild(Node *this,Node *param_1,int param_2);
void __thiscall cocos2d::Node::removeAllChildrenWithCleanup(Node *this,bool param_1);
void __thiscall cocos2d::Node::removeAllChildren(Node *this);
void __thiscall cocos2d::Node::removeChildByName(Node *this,basic_string<> *param_1,bool param_2);
void __thiscall cocos2d::Node::removeChildByTag(Node *this,int param_1,bool param_2);
void __thiscall cocos2d::Node::removeChild(Node *this,Node *param_1,bool param_2);
void __thiscall cocos2d::Node::removeFromParentAndCleanup(Node *this,bool param_1);
void __thiscall cocos2d::Node::removeFromParent(Node *this);
void __thiscall cocos2d::Node::setParent(Node *this,Node *param_1);
long __thiscall cocos2d::Node::getChildrenCount(Node *this);
void __thiscall cocos2d::Node::enumerateChildren(void);
Node * __thiscall cocos2d::Node::getChildByName(Node *this,basic_string<> *param_1);
Node * __thiscall cocos2d::Node::getChildByTag(Node *this,int param_1);
void __thiscall cocos2d::Node::addChild(Node *this,Node *param_1);
void __thiscall cocos2d::Node::addChild(Node *this,Node *param_1,int param_2);
void __thiscall cocos2d::Node::addChild(Node *this,Node *param_1,int param_2,int param_3);
void __thiscall cocos2d::Node::addChild(Node *this,Node *param_1,int param_2,basic_string<> *param_3);
bool __thiscall cocos2d::Node::isIgnoreAnchorPointForPosition(Node *this);
void __thiscall cocos2d::Node::setIgnoreAnchorPointForPosition(Node *this,bool param_1);
float __thiscall cocos2d::Node::getRotationSkewY(Node *this);
void __thiscall cocos2d::Node::setRotationSkewY(Node *this,float param_1);
float __thiscall cocos2d::Node::getRotationSkewX(Node *this);
void __thiscall cocos2d::Node::setRotationSkewX(Node *this,float param_1);
void __thiscall cocos2d::Node::getRotationQuat(Node *this);
void __thiscall cocos2d::Node::setRotationQuat(Node *this,Quaternion *param_1);
void __thiscall cocos2d::Node::getRotation3D(Node *this);
void __thiscall cocos2d::Node::setRotation3D(Node *this,Vec3 *param_1);
float __thiscall cocos2d::Node::getRotation(Node *this);
void __thiscall cocos2d::Node::setRotation(Node *this,float param_1);
bool __thiscall cocos2d::Node::isVisible(Node *this);
void __thiscall cocos2d::Node::setVisible(Node *this,bool param_1);
Size * __thiscall cocos2d::Node::getContentSize(Node *this);
void __thiscall cocos2d::Node::setContentSize(Node *this,Size *param_1);
Vec2 * __thiscall cocos2d::Node::getAnchorPointInPoints(Node *this);
Vec2 * __thiscall cocos2d::Node::getAnchorPoint(Node *this);
void __thiscall cocos2d::Node::setAnchorPoint(Node *this,Vec2 *param_1);
float __thiscall cocos2d::Node::getSkewY(Node *this);
void __thiscall cocos2d::Node::setSkewY(Node *this,float param_1);
float __thiscall cocos2d::Node::getSkewX(Node *this);
void __thiscall cocos2d::Node::setSkewX(Node *this,float param_1);
float __thiscall cocos2d::Node::getPositionZ(Node *this);
void __thiscall cocos2d::Node::setPositionZ(Node *this,float param_1);
void __thiscall cocos2d::Node::getPosition3D(Node *this);
void __thiscall cocos2d::Node::setPosition3D(Node *this,Vec3 *param_1);
float __thiscall cocos2d::Node::getPositionY(Node *this);
void __thiscall cocos2d::Node::setPositionY(Node *this,float param_1);
float __thiscall cocos2d::Node::getPositionX(Node *this);
void __thiscall cocos2d::Node::setPositionX(Node *this,float param_1);
Vec2 * __thiscall cocos2d::Node::getPositionNormalized(Node *this);
Vec2 * __thiscall cocos2d::Node::getPosition(Node *this);
void __thiscall cocos2d::Node::getPosition(Node *this,float *param_1,float *param_2);
void __thiscall cocos2d::Node::setPositionNormalized(Node *this,Vec2 *param_1);
void __thiscall cocos2d::Node::setPosition(Node *this,Vec2 *param_1);
void __thiscall cocos2d::Node::setPosition(Node *this,float param_1,float param_2);
float __thiscall cocos2d::Node::getScale(Node *this);
void __thiscall cocos2d::Node::setScale(Node *this,float param_1);
void __thiscall cocos2d::Node::setScale(Node *this,float param_1,float param_2);
float __thiscall cocos2d::Node::getScaleZ(Node *this);
void __thiscall cocos2d::Node::setScaleZ(Node *this,float param_1);
float __thiscall cocos2d::Node::getScaleY(Node *this);
void __thiscall cocos2d::Node::setScaleY(Node *this,float param_1);
float __thiscall cocos2d::Node::getScaleX(Node *this);
void __thiscall cocos2d::Node::setScaleX(Node *this,float param_1);
void __thiscall cocos2d::Node::setGlobalZOrder(Node *this,float param_1);
void __thiscall cocos2d::Node::_setLocalZOrder(Node *this,int param_1);
void __thiscall cocos2d::Node::setLocalZOrder(Node *this,int param_1);
bool __thiscall cocos2d::Layer::init(Layer *this);
void __thiscall cocos2d::Layer::getDescription(Layer *this);
void __thiscall cocos2d::Layer::setKeypadEnabled(Layer *this,bool param_1);
void __thiscall cocos2d::Layer::onKeyReleased(Layer *this,KeyCode param_1,Event *param_2);
void __thiscall cocos2d::Layer::onKeyPressed(Layer *this,KeyCode param_1,Event *param_2);
void __thiscall cocos2d::Layer::setKeyboardEnabled(Layer *this,bool param_1);
bool __thiscall cocos2d::Layer::isKeyboardEnabled(Layer *this);
void __thiscall cocos2d::Layer::setAccelerometerInterval(Layer *this,double param_1);
void __thiscall cocos2d::Layer::setAccelerometerEnabled(Layer *this,bool param_1);
bool __thiscall cocos2d::Layer::isAccelerometerEnabled(Layer *this);
bool __thiscall cocos2d::Layer::isSwallowsTouches(Layer *this);
void __thiscall cocos2d::Layer::setSwallowsTouches(Layer *this,bool param_1);
DispatchMode __thiscall cocos2d::Layer::getTouchMode(Layer *this);
void __thiscall cocos2d::Layer::setTouchMode(Layer *this,DispatchMode param_1);
void __thiscall cocos2d::Layer::onAcceleration(Layer *this,Acceleration *param_1,Event *param_2);
void __thiscall cocos2d::Layer::onTouchesCancelled(Layer *this,vector<> *param_1,Event *param_2);
void __thiscall cocos2d::Layer::onTouchesEnded(Layer *this,vector<> *param_1,Event *param_2);
void __thiscall cocos2d::Layer::onTouchesMoved(Layer *this,vector<> *param_1,Event *param_2);
void __thiscall cocos2d::Layer::onTouchesBegan(Layer *this,vector<> *param_1,Event *param_2);
void __thiscall cocos2d::Layer::onTouchCancelled(Layer *this,Touch *param_1,Event *param_2);
void __thiscall cocos2d::Layer::onTouchEnded(Layer *this,Touch *param_1,Event *param_2);
void __thiscall cocos2d::Layer::onTouchMoved(Layer *this,Touch *param_1,Event *param_2);
bool __thiscall cocos2d::Layer::onTouchBegan(Layer *this,Touch *param_1,Event *param_2);
void __thiscall cocos2d::Layer::ccTouchesCancelled(Layer *this,__Set *param_1,Event *param_2);
void __thiscall cocos2d::Layer::ccTouchesEnded(Layer *this,__Set *param_1,Event *param_2);
void __thiscall cocos2d::Layer::ccTouchesMoved(Layer *this,__Set *param_1,Event *param_2);
void __thiscall cocos2d::Layer::ccTouchesBegan(Layer *this,__Set *param_1,Event *param_2);
void __thiscall cocos2d::Layer::ccTouchCancelled(Layer *this,Touch *param_1,Event *param_2);
void __thiscall cocos2d::Layer::ccTouchEnded(Layer *this,Touch *param_1,Event *param_2);
void __thiscall cocos2d::Layer::ccTouchMoved(Layer *this,Touch *param_1,Event *param_2);
bool __thiscall cocos2d::Layer::ccTouchBegan(Layer *this,Touch *param_1,Event *param_2);
void __thiscall cocos2d::Layer::keyMenuClicked(Layer *this);
void __thiscall cocos2d::Layer::keyBackClicked(Layer *this);
bool __thiscall cocos2d::Layer::isKeypadEnabled(Layer *this);
void __thiscall cocos2d::Layer::keyReleased(Layer *this,int param_1);
void __thiscall cocos2d::Layer::keyPressed(Layer *this,int param_1);
void __thiscall cocos2d::Layer::registerWithTouchDispatcher(Layer *this);
void __thiscall cocos2d::Layer::didAccelerate(Layer *this,Acceleration *param_1);
void __thiscall cocos2d::Node::updateColor(Node *this);
void __thiscall cocos2d::Node::worldToNodeTransform(Node *this);
void __thiscall cocos2d::Node::nodeToWorldTransform(Node *this);
void __thiscall cocos2d::Node::parentToNodeTransform(Node *this);
void __thiscall cocos2d::Node::nodeToParentTransform(Node *this);
Scheduler * __thiscall cocos2d::Node::getScheduler(Node *this);
Scheduler * __thiscall cocos2d::Node::getScheduler(Node *this);
ActionManager * __thiscall cocos2d::Node::getActionManager(Node *this);
ActionManager * __thiscall cocos2d::Node::getActionManager(Node *this);
EventDispatcher * __thiscall cocos2d::Node::getEventDispatcher(Node *this);
void __thiscall cocos2d::Node::boundingBox(Node *this);
Ref * __thiscall cocos2d::Node::getUserObject(Node *this);
Ref * __thiscall cocos2d::Node::getUserObject(Node *this);
void * __thiscall cocos2d::Node::getUserData(Node *this);
void * __thiscall cocos2d::Node::getUserData(Node *this);
Node * __thiscall cocos2d::Node::getParent(Node *this);
Node * __thiscall cocos2d::Node::getParent(Node *this);
Vector<> * __thiscall cocos2d::Node::getChildren(Node *this);
Vector<> * __thiscall cocos2d::Node::getChildren(Node *this);
void __thiscall cocos2d::Node::ignoreAnchorPointForPosition(Node *this,bool param_1);
float __thiscall cocos2d::Node::getRotationY(Node *this);
void __thiscall cocos2d::Node::setRotationY(Node *this,float param_1);
float __thiscall cocos2d::Node::getRotationX(Node *this);
void __thiscall cocos2d::Node::setRotationX(Node *this,float param_1);
float __thiscall cocos2d::Node::getVertexZ(Node *this);
void __thiscall cocos2d::Node::setVertexZ(Node *this,float param_1);
Vec2 * __thiscall cocos2d::Node::getNormalizedPosition(Node *this);
void __thiscall cocos2d::Node::setNormalizedPosition(Node *this,Vec2 *param_1);
float __thiscall cocos2d::Node::getGlobalZOrder(Node *this);
int __thiscall cocos2d::Node::getZOrder(Node *this);
int __thiscall cocos2d::Node::getLocalZOrder(Node *this);
void __thiscall cocos2d::Node::setZOrder(Node *this,int param_1);
bool __thiscall cocos2d::Node::init(Node *this);
void __thiscall cocos2d::Node::update(Node *this,float param_1);
void __thiscall cocos2d::Node::getDescription(Node *this);
void __thiscall cocos2d::Sprite::setDirtyRecursively(Sprite *this,bool param_1);
void __thiscall cocos2d::Sprite::setReorderChildDirtyRecursively(Sprite *this);
void __thiscall cocos2d::Sprite::updateBlendFunc(Sprite *this);
void __thiscall cocos2d::Sprite::setVertexCoords(Sprite *this,Rect *param_1,V3F_C4B_T2F_Quad *param_2);
void __thiscall cocos2d::Sprite::setTextureCoords(Sprite *this,Rect *param_1);
void __thiscall cocos2d::Sprite::setTextureCoords(Sprite *this,Rect *param_1,V3F_C4B_T2F_Quad *param_2);
void __thiscall cocos2d::Sprite::updateColor(Sprite *this);
bool __thiscall cocos2d::Sprite::initWithFile(Sprite *this,basic_string<> *param_1);
bool __thiscall cocos2d::Sprite::initWithFile(Sprite *this,basic_string<> *param_1,Rect *param_2);
bool __thiscall cocos2d::Sprite::initWithSpriteFrameName(Sprite *this,basic_string<> *param_1);
bool __thiscall cocos2d::Sprite::initWithSpriteFrame(Sprite *this,SpriteFrame *param_1);
bool __thiscall cocos2d::Sprite::initWithPolygon(Sprite *this,PolygonInfo *param_1);
bool __thiscall cocos2d::Sprite::initWithTexture(Sprite *this,Texture2D *param_1);
bool __thiscall cocos2d::Sprite::initWithTexture(Sprite *this,Texture2D *param_1,Rect *param_2);
bool __thiscall cocos2d::Sprite::initWithTexture(Sprite *this,Texture2D *param_1,Rect *param_2,bool param_3);
bool __thiscall cocos2d::Sprite::init(Sprite *this);
bool __thiscall cocos2d::Sprite::isOpacityModifyRGB(Sprite *this);
void __thiscall cocos2d::Sprite::setOpacityModifyRGB(Sprite *this,bool param_1);
void __thiscall cocos2d::Sprite::draw(Sprite *this,Renderer *param_1,Mat4 *param_2,uint param_3);
void __thiscall cocos2d::Sprite::setVisible(Sprite *this,bool param_1);
void __thiscall cocos2d::Sprite::setIgnoreAnchorPointForPosition(Sprite *this,bool param_1);
void __thiscall cocos2d::Sprite::setContentSize(Sprite *this,Size *param_1);
void __thiscall cocos2d::Sprite::setAnchorPoint(Sprite *this,Vec2 *param_1);
void __thiscall cocos2d::Sprite::setPositionZ(Sprite *this,float param_1);
void __thiscall cocos2d::Sprite::sortAllChildren(Sprite *this);
void __thiscall cocos2d::Sprite::addChild(Sprite *this,Node *param_1,int param_2,int param_3);
void __thiscall cocos2d::Sprite::addChild(Sprite *this,Node *param_1,int param_2,basic_string<> *param_3);
void __thiscall cocos2d::Sprite::reorderChild(Sprite *this,Node *param_1,int param_2);
void __thiscall cocos2d::Sprite::removeAllChildrenWithCleanup(Sprite *this,bool param_1);
void __thiscall cocos2d::Sprite::removeChild(Sprite *this,Node *param_1,bool param_2);
void __thiscall cocos2d::Sprite::setSkewY(Sprite *this,float param_1);
void __thiscall cocos2d::Sprite::setSkewX(Sprite *this,float param_1);
void __thiscall cocos2d::Sprite::setRotationSkewY(Sprite *this,float param_1);
void __thiscall cocos2d::Sprite::setRotationSkewX(Sprite *this,float param_1);
void __thiscall cocos2d::Sprite::setRotation(Sprite *this,float param_1);
void __thiscall cocos2d::Sprite::setPosition(Sprite *this,Vec2 *param_1);
void __thiscall cocos2d::Sprite::setPosition(Sprite *this,float param_1,float param_2);
void __thiscall cocos2d::Sprite::setScale(Sprite *this,float param_1,float param_2);
void __thiscall cocos2d::Sprite::setScale(Sprite *this,float param_1);
void __thiscall cocos2d::Sprite::setScaleY(Sprite *this,float param_1);
void __thiscall cocos2d::Sprite::setScaleX(Sprite *this,float param_1);
void __thiscall cocos2d::Sprite::getDescription(Sprite *this);
void __thiscall cocos2d::Sprite::setDisplayFrameWithAnimationName(Sprite *this,basic_string<> *param_1,long param_2);
SpriteFrame * __thiscall cocos2d::Sprite::getSpriteFrame(Sprite *this);
bool __thiscall cocos2d::Sprite::isFrameDisplayed(Sprite *this,SpriteFrame *param_1);
void __thiscall cocos2d::Sprite::setSpriteFrame(Sprite *this,basic_string<> *param_1);
void __thiscall cocos2d::Sprite::setSpriteFrame(Sprite *this,SpriteFrame *param_1);
void __thiscall cocos2d::Sprite::getCenterRect(Sprite *this);
void __thiscall cocos2d::Sprite::setCenterRect(Sprite *this,Rect *param_1);
void __thiscall cocos2d::Sprite::getCenterRectNormalized(Sprite *this);
void __thiscall cocos2d::Sprite::setCenterRectNormalized(Sprite *this,Rect *param_1);
void __thiscall cocos2d::Sprite::setVertexRect(Sprite *this,Rect *param_1);
void __thiscall cocos2d::Sprite::setTextureRect(Sprite *this,Rect *param_1);
void __thiscall cocos2d::Sprite::setTextureRect(Sprite *this,Rect *param_1,bool param_2,Size *param_3);
Texture2D * __thiscall cocos2d::Sprite::getTexture(Sprite *this);
void __thiscall cocos2d::Sprite::setTexture(Sprite *this,basic_string<> *param_1);
void __thiscall cocos2d::Sprite::setTexture(Sprite *this,Texture2D *param_1);
void __thiscall cocos2d::Sprite::setBatchNode(Sprite *this,SpriteBatchNode *param_1);
SpriteBatchNode * __thiscall cocos2d::Sprite::getBatchNode(Sprite *this);
void __thiscall cocos2d::Sprite::updateTransform(Sprite *this);
BlendFunc * __thiscall cocos2d::Sprite::getBlendFunc(Sprite *this);
void __thiscall cocos2d::Sprite::setBlendFunc(Sprite *this,BlendFunc *param_1);
void __thiscall cocos2d::Sprite::setDirty(Sprite *this,bool param_1);
bool __thiscall cocos2d::Sprite::isDirty(Sprite *this);
SpriteFrame * __thiscall cocos2d::Sprite::displayFrame(Sprite *this);
SpriteFrame * __thiscall cocos2d::Sprite::getDisplayFrame(Sprite *this);
void __thiscall cocos2d::Sprite::setDisplayFrame(Sprite *this,SpriteFrame *param_1);
void __fastcall __security_check_cookie(int param_1);
void * __cdecl operator_new(uint param_1);
void __cdecl operator_delete(void *param_1,nothrow_t *param_2);
void __cdecl operator_delete[](void *param_1,uint param_2);
void `eh_vector_destructor_iterator'(void *param_1,uint param_2,uint param_3,_func_void_void_ptr *param_4);
void FUN_005af900(void);
void __ArrayUnwind(void *param_1,uint param_2,uint param_3,_func_void_void_ptr *param_4);
void * __thiscall type_info::`vector_deleting_destructor'(type_info *this,uint param_1);
void * __cdecl operator_new(uint param_1,nothrow_t *param_2);
undefined * Catch_All@005af9e4(void);
void FUN_005af9ec(void);
undefined4 __scrt_initialize_thread_safe_statics(void);
_func_int__RTL_CONDITION_VARIABLE_ptr__RTL_CRITICAL_SECTION_ptr_ulong * __cdecl __crt_fast_encode_pointer<>(_func_int__RTL_CONDITION_VARIABLE_ptr__RTL_CRITICAL_SECTION_ptr_ulong *param_1);
void __scrt_initialize_thread_safe_statics_platform_specific(void);
void __scrt_uninitialize_thread_safe_statics(void);
void __Init_thread_abort(undefined4 *param_1);
void __Init_thread_footer(int *param_1);
void __cdecl __Init_thread_header(int *param_1);
void __Init_thread_notify(void);
void __cdecl __Init_thread_wait(DWORD param_1);
int __cdecl find_pe_section(int param_1,uint param_2);
undefined4 ___scrt_acquire_startup_lock(void);
int __cdecl ___scrt_initialize_crt(int param_1,int param_2);
undefined4 __cdecl ___scrt_initialize_onexit_tables(int param_1);
uint __cdecl ___scrt_is_nonwritable_in_current_image(int param_1);
int __cdecl ___scrt_release_startup_lock(char param_1);
undefined1 __cdecl ___scrt_uninitialize_crt(Ship *param_1,char param_2);
_onexit_t __cdecl __onexit(_onexit_t _Func);
int __cdecl _atexit(_func_4879 *param_1);
void __cdecl ___raise_securityfailure(_EXCEPTION_POINTERS *param_1);
void __cdecl ___report_gsfailure(void);
void ___report_rangecheckfailure(void);
void __cdecl ___report_securityfailure(undefined4 param_1);
void `eh_vector_constructor_iterator'(void *param_1,uint param_2,uint param_3,_func_void_void_ptr *param_4,_func_void_void_ptr *param_5);
void FUN_005b0188(void);
void `eh_vector_copy_constructor_iterator'(void *param_1,void *param_2,uint param_3,uint param_4,_func_void_void_ptr_void_ptr *param_5,_func_void_void_ptr *param_6);
void FUN_005b0202(void);
void __cdecl operator_delete[](void *param_1);
void * __cdecl operator_new[](uint param_1);
void __cdecl pre_c_initialization(int param_1,int param_2,int param_3);
undefined4 post_pgo_initialization(void);
void pre_cpp_initialization(void);
int __scrt_common_main_seh(void);
void _WinMainCRTStartup(void);
bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this,bad_alloc *param_1);
bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this);
bad_array_new_length * __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this,bad_array_new_length *param_1);
bad_array_new_length * __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this);
exception * __thiscall std::exception::exception(exception *this,exception *param_1);
void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this);
void * __thiscall std::bad_alloc::`vector_deleting_destructor'(bad_alloc *this,uint param_1);
void __cdecl __scrt_throw_std_bad_alloc(void);
void __cdecl __scrt_throw_std_bad_array_new_length(void);
char * __thiscall std::exception::what(exception *this);
void __cdecl operator_delete(void *param_1);
void __cdecl __SEH_prolog4(undefined4 param_1,int param_2);
void __SEH_epilog4(void);
void __cdecl __except_handler4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void ___scrt_fastfail(void);
ushort ___scrt_get_show_window_mode(void);
int __cdecl ___scrt_initialize_mta(_exception *_Except);
int __cdecl ___scrt_exe_initialize_mta(_exception *_Except);
uint ___scrt_is_managed_app(void);
void ___scrt_set_unhandled_exception_filter(void);
undefined4 ___scrt_unhandled_exception_filter@4(int *param_1);
void __cdecl __crt_debugger_hook(int param_1);
undefined4 ___isa_available_init(void);
undefined4 __get_startup_argv_mode(void);
bool ___scrt_is_ucrt_dll_in_use(void);
uint __get_entropy(void);
void __cdecl ___security_init_cookie(void);
undefined4 __get_startup_file_mode(void);
void __cdecl __scrt_initialize_type_info(void);
void __initialize_default_precision(void);
__uint64 * ___local_stdio_scanf_options(void);
void ___scrt_initialize_default_local_stdio_options(void);
bool ___scrt_is_user_matherr_present(void);
undefined * ___scrt_get_dyn_tls_init_callback(void);
undefined * ___scrt_get_dyn_tls_dtor_callback(void);
void __RTC_Initialize(void);
void __RTC_Terminate(void);
void ___std_terminate(void);
void __cdecl __purecall(void);
void ___std_exception_copy(void);
void ___std_exception_destroy(void);
void __CxxThrowException@8(void *pExceptionObject,ThrowInfo *pThrowInfo);
void __cdecl __except_handler4_common(void);
void __cdecl memset(void *param_1,int param_2,size_t param_3);
void __cdecl free(void *param_1);
void __cdecl malloc(size_t param_1);
int __cdecl __callnewh(size_t _Size);
void __cdecl terminate(void);
void __cdecl __configure_narrow_argv(void);
void __cdecl __initialize_narrow_environment(void);
void __cdecl __initialize_onexit_table(void);
void __cdecl __register_onexit_function(void);
void __cdecl __crt_atexit(void);
void __cdecl __cexit(void);
void __cdecl __set_app_type(void);
void ___setusermatherr(void);
void __cdecl __get_narrow_winmain_command_line(void);
void __cdecl __initterm(void);
void __cdecl __initterm_e(void);
void __cdecl exit(int param_1);
void __cdecl __exit(int _Code);
errno_t __cdecl __set_fmode(int _Mode);
void __cdecl __register_thread_local_exe_atexit_callback(void);
int __cdecl __configthreadlocale(int _Flag);
void __cdecl __set_new_mode(void);
void ___p__commode(void);
errno_t __cdecl __controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask);
BOOL _IsProcessorFeaturePresent@4(DWORD ProcessorFeature);
undefined8 __alldvrm(uint param_1,uint param_2,uint param_3,uint param_4);
void __alloca_probe(void);
uint __alloca_probe_16(void);
uint __alloca_probe_8(void);
undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4);
ulonglong __ftoui3(void);
ulonglong __ftoul3(void);
ulonglong __ftol3(void);
ulonglong __fastcall __ftol3_NaN(int param_1);
ulonglong __fastcall __ftol3_work(int param_1);
ulonglong __fastcall __ftol3_common(undefined4 param_1);
undefined8 __fastcall __ftol3_arg_error(undefined4 param_1);
void __fastcall __ftol3_except(undefined4 param_1,int param_2);
void __dtoui3(void);
void __dtoul3(void);
uint __dtol3(void);
uint __fastcall __dtol3_NaN(int param_1);
ulonglong __fastcall __dtol3_work(int param_1);
void __ultod3(void);
void __ltod3(void);
ulonglong __fastcall __ftol2_sse(undefined4 param_1,undefined4 param_2);
int __ftol2_pentium4(void);
ulonglong __fastcall __ftol2_sse_excpt(undefined4 param_1,undefined4 param_2);
ulonglong __ftol2(void);
void __cdecl memchr(void *param_1,int param_2,size_t param_3);
void __cdecl memcpy(void *param_1,void *param_2,size_t param_3);
void __cdecl memmove(void *param_1,void *param_2,size_t param_3);
void __CIatan2(void);
void __CIfmod(void);
void __cdecl __libm_sse2_cos_precise(void);
void __cdecl __libm_sse2_sin_precise(void);
void __cdecl __except1(void);
void Unwind@005b11f0(void);
void Unwind@005b11f8(void);
void Unwind@005b1207(void);
void Unwind@005b120f(void);
void Unwind@005b1217(void);
void Unwind@005b121f(void);
void Unwind@005b1227(void);
void Unwind@005b1260(void);
void Unwind@005b1290(void);
void Unwind@005b12c0(void);
void Unwind@005b12f0(void);
void Unwind@005b1320(void);
void Unwind@005b1332(void);
void Unwind@005b133a(void);
void Unwind@005b1345(void);
void Unwind@005b1350(void);
void Unwind@005b135b(void);
void Unwind@005b1366(void);
void Unwind@005b13a0(void);
void Unwind@005b13af(void);
void Unwind@005b13ba(void);
void Unwind@005b13c5(void);
void Unwind@005b13d0(void);
void Unwind@005b13db(void);
void Unwind@005b1410(void);
void Unwind@005b1422(void);
void Unwind@005b142b(void);
void Unwind@005b1439(void);
void Unwind@005b1447(void);
void Unwind@005b1455(void);
void Unwind@005b14a0(void);
void Unwind@005b14d0(void);
void Unwind@005b14d8(void);
void Unwind@005b1500(void);
void Unwind@005b150a(void);
void Unwind@005b1514(void);
void Unwind@005b1540(void);
void Unwind@005b154a(void);
void Unwind@005b1554(void);
void Unwind@005b155e(void);
void Unwind@005b1590(void);
void Unwind@005b159a(void);
void Unwind@005b15a4(void);
void Unwind@005b15ae(void);
void Unwind@005b15e0(void);
void Unwind@005b15e8(void);
void Unwind@005b15f1(void);
void Unwind@005b15fc(void);
void Unwind@005b1604(void);
void Unwind@005b1630(void);
void Unwind@005b1660(void);
void Unwind@005b1690(void);
void Unwind@005b16a2(void);
void Unwind@005b16ad(void);
void Unwind@005b16b8(void);
void Unwind@005b16c6(void);
void Unwind@005b16d4(void);
void Unwind@005b16e2(void);
void Unwind@005b16f0(void);
void Unwind@005b16fe(void);
void Unwind@005b170c(void);
void Unwind@005b171a(void);
void Unwind@005b1728(void);
void Unwind@005b1736(void);
void Unwind@005b173e(void);
void Unwind@005b1746(void);
void Unwind@005b174e(void);
void Unwind@005b1756(void);
void Unwind@005b175e(void);
void Unwind@005b1766(void);
void Unwind@005b17b0(void);
void Unwind@005b17ca(void);
void Unwind@005b17e4(void);
void Unwind@005b17ed(void);
void Unwind@005b17f6(void);
void Unwind@005b1810(void);
void Unwind@005b182a(void);
void Unwind@005b1833(void);
void Unwind@005b1860(void);
void Unwind@005b1868(void);
void Unwind@005b1870(void);
void Unwind@005b1878(void);
void Unwind@005b18b0(void);
void Unwind@005b18bf(void);
void Unwind@005b1910(void);
void Unwind@005b1922(void);
void Unwind@005b192a(void);
void Unwind@005b1939(void);
void Unwind@005b1941(void);
void Unwind@005b1949(void);
void Unwind@005b1958(void);
void Unwind@005b1963(void);
void Unwind@005b196e(void);
void Unwind@005b1976(void);
void Unwind@005b1985(void);
void Unwind@005b19b0(void);
void Unwind@005b19b8(void);
void Unwind@005b19c0(void);
void Unwind@005b19c8(void);
void Unwind@005b19f0(void);
void Unwind@005b19f8(void);
void Unwind@005b1a00(void);
void Unwind@005b1a08(void);
void Unwind@005b1a10(void);
void Unwind@005b1a18(void);
void Unwind@005b1a50(void);
void Unwind@005b1a58(void);
void Unwind@005b1a60(void);
void Unwind@005b1a90(void);
void Unwind@005b1ac0(void);
void Unwind@005b1af0(void);
void Unwind@005b1b20(void);
void Unwind@005b1b28(void);
void Unwind@005b1b50(void);
void Unwind@005b1b58(void);
void Unwind@005b1b60(void);
void Unwind@005b1b68(void);
void Unwind@005b1b73(void);
void Unwind@005b1b7b(void);
void Unwind@005b1bb0(void);
void Unwind@005b1bb8(void);
void Unwind@005b1bc0(void);
void Unwind@005b1bc8(void);
void Unwind@005b1bda(void);
void Unwind@005b1be3(void);
void Unwind@005b1bec(void);
void Unwind@005b1bf5(void);
void Unwind@005b1bfd(void);
void Unwind@005b1c05(void);
void Unwind@005b1c0d(void);
void Unwind@005b1c15(void);
void Unwind@005b1c24(void);
void Unwind@005b1c2c(void);
void Unwind@005b1c35(void);
void Unwind@005b1c3e(void);
void Unwind@005b1c50(void);
void Unwind@005b1c58(void);
void Unwind@005b1c67(void);
void Unwind@005b1c6f(void);
void Unwind@005b1cb0(void);
void Unwind@005b1cbf(void);
void Unwind@005b1cc8(void);
void Unwind@005b1cd1(void);
void Unwind@005b1cda(void);
void Unwind@005b1ce3(void);
void Unwind@005b1d10(void);
void Unwind@005b1d2a(void);
void Unwind@005b1d60(void);
void Unwind@005b1d68(void);
void Unwind@005b1d90(void);
void Unwind@005b1d98(void);
void Unwind@005b1daa(void);
void Unwind@005b1df0(void);
void Unwind@005b1dfc(void);
void Unwind@005b1e0e(void);
void Unwind@005b1e40(void);
void Unwind@005b1e70(void);
void Unwind@005b1e79(void);
void Unwind@005b1ea0(void);
void Unwind@005b1ea9(void);
void Unwind@005b1eb2(void);
void Unwind@005b1ebb(void);
void Unwind@005b1ec3(void);
void Unwind@005b1ecc(void);
void Unwind@005b1ed5(void);
void Unwind@005b1f00(void);
void Unwind@005b1f08(void);
void Unwind@005b1f10(void);
void Unwind@005b1f18(void);
void Unwind@005b1f50(void);
void Unwind@005b1f58(void);
void Unwind@005b1f60(void);
void Unwind@005b1f68(void);
void Unwind@005b1f70(void);
void Unwind@005b1f82(void);
void Unwind@005b1fb0(void);
void Unwind@005b1fe0(void);
void Unwind@005b1fe8(void);
void Unwind@005b2010(void);
void Unwind@005b2040(void);
void Unwind@005b2048(void);
void Unwind@005b2051(void);
void Unwind@005b2080(void);
void Unwind@005b2088(void);
void Unwind@005b2091(void);
void Unwind@005b20ab(void);
void Unwind@005b20e0(void);
void Unwind@005b20ec(void);
void Unwind@005b2130(void);
void Unwind@005b2139(void);
void Unwind@005b2141(void);
void Unwind@005b214a(void);
void Unwind@005b2153(void);
void Unwind@005b215c(void);
void Unwind@005b2190(void);
void Unwind@005b21c0(void);
void Unwind@005b21c8(void);
void Unwind@005b2200(void);
void Unwind@005b2208(void);
void Unwind@005b2210(void);
void Unwind@005b2240(void);
void Unwind@005b2270(void);
void Unwind@005b2278(void);
void Unwind@005b2280(void);
void Unwind@005b2288(void);
void Unwind@005b2290(void);
void Unwind@005b2298(void);
void Unwind@005b22a0(void);
void Unwind@005b22a8(void);
void Unwind@005b22b0(void);
void Unwind@005b22b8(void);
void Unwind@005b22c0(void);
void Unwind@005b22c8(void);
void Unwind@005b22d0(void);
void Unwind@005b22d8(void);
void Unwind@005b22e0(void);
void Unwind@005b22e8(void);
void Unwind@005b22f0(void);
void Unwind@005b2320(void);
void Unwind@005b2332(void);
void Unwind@005b2360(void);
void Unwind@005b2390(void);
void Unwind@005b2398(void);
void Unwind@005b23a0(void);
void Unwind@005b23a8(void);
void Unwind@005b23b0(void);
void Unwind@005b23b8(void);
void Unwind@005b23c0(void);
void Unwind@005b23c8(void);
void Unwind@005b2400(void);
void Unwind@005b2430(void);
void Unwind@005b2449(void);
void Unwind@005b2480(void);
void Unwind@005b2488(void);
void Unwind@005b24c0(void);
void Unwind@005b24c8(void);
void Unwind@005b24d0(void);
void Unwind@005b2500(void);
void Unwind@005b2508(void);
void Unwind@005b2540(void);
void Unwind@005b254f(void);
void Unwind@005b2557(void);
void Unwind@005b2580(void);
void Unwind@005b25b0(void);
void Unwind@005b25bf(void);
void Unwind@005b25f0(void);
void Unwind@005b2620(void);
void Unwind@005b2650(void);
void Unwind@005b265f(void);
void Unwind@005b266a(void);
void Unwind@005b2690(void);
void Unwind@005b26c0(void);
void Unwind@005b26cf(void);
void Unwind@005b2700(void);
void Unwind@005b2810(void);
void Unwind@005b2818(void);
void Unwind@005b2823(void);
void Unwind@005b282e(void);
void Unwind@005b2836(void);
void Unwind@005b2870(void);
void Unwind@005b28a0(void);
void Unwind@005b28ab(void);
void Unwind@005b28b6(void);
void Unwind@005b28c8(void);
void Unwind@005b28d3(void);
void Unwind@005b28db(void);
void Unwind@005b28e3(void);
void Unwind@005b28eb(void);
void Unwind@005b28f6(void);
void Unwind@005b28fe(void);
void Unwind@005b2906(void);
void Unwind@005b2911(void);
void Unwind@005b2923(void);
void Unwind@005b2960(void);
void Unwind@005b2990(void);
void Unwind@005b2998(void);
void Unwind@005b29a0(void);
void Unwind@005b29b2(void);
void Unwind@005b29ba(void);
void Unwind@005b2a10(void);
void Unwind@005b2a40(void);
void Unwind@005b2a48(void);
void Unwind@005b2a70(void);
void Unwind@005b2a78(void);
void Unwind@005b2a80(void);
void Unwind@005b2ab0(void);
void Unwind@005b2ab8(void);
void Unwind@005b2ae0(void);
void Unwind@005b2b10(void);
void Unwind@005b2b60(void);
void Unwind@005b2b68(void);
void Unwind@005b2b73(void);
void Unwind@005b2b7b(void);
void Unwind@005b2b83(void);
void Unwind@005b2b8b(void);
void Unwind@005b2bc0(void);
void Unwind@005b2bc8(void);
void Unwind@005b2bd0(void);
void Unwind@005b2bd8(void);
void Unwind@005b2be0(void);
void Unwind@005b2be8(void);
void Unwind@005b2bf3(void);
void Unwind@005b2bfb(void);
void Unwind@005b2c03(void);
void Unwind@005b2c0b(void);
void Unwind@005b2c13(void);
void Unwind@005b2c50(void);
void Unwind@005b2c58(void);
void Unwind@005b2c7a(void);
void Unwind@005b2c82(void);
void Unwind@005b2c8a(void);
void Unwind@005b2d20(void);
void Unwind@005b2d50(void);
void Unwind@005b2d58(void);
void Unwind@005b2d60(void);
void Unwind@005b2d72(void);
void Unwind@005b2d81(void);
void Unwind@005b2d89(void);
void Unwind@005b2d9b(void);
void Unwind@005b2dc0(void);
void Unwind@005b2df0(void);
void Unwind@005b2df8(void);
void Unwind@005b2e30(void);
void Unwind@005b2e60(void);
void Unwind@005b2e90(void);
void Unwind@005b2ec0(void);
void Unwind@005b2ef0(void);
void Unwind@005b2f20(void);
void Unwind@005b2f50(void);
void Unwind@005b2f58(void);
void Unwind@005b2f90(void);
void Unwind@005b2fc0(void);
void Unwind@005b2ff0(void);
void Unwind@005b2ff8(void);
void Unwind@005b3000(void);
void Unwind@005b3008(void);
void Unwind@005b3030(void);
void Unwind@005b3049(void);
void Unwind@005b3051(void);
void Unwind@005b3059(void);
void Unwind@005b3061(void);
void Unwind@005b3069(void);
void Unwind@005b3071(void);
void Unwind@005b30a0(void);
void Unwind@005b30a8(void);
void Unwind@005b30b0(void);
void Unwind@005b30b8(void);
void Unwind@005b30f0(void);
void Unwind@005b30f8(void);
void Unwind@005b3100(void);
void Unwind@005b3108(void);
void Unwind@005b3140(void);
void Unwind@005b3148(void);
void Unwind@005b3150(void);
void Unwind@005b3180(void);
void Unwind@005b3188(void);
void Unwind@005b3200(void);
void Unwind@005b3230(void);
void Unwind@005b3238(void);
void Unwind@005b3240(void);
void Unwind@005b3248(void);
void Unwind@005b3250(void);
void Unwind@005b3290(void);
void Unwind@005b32c0(void);
void Unwind@005b32f0(void);
void Unwind@005b32f8(void);
void Unwind@005b3300(void);
void Unwind@005b3308(void);
void Unwind@005b3310(void);
void Unwind@005b3340(void);
void Unwind@005b3370(void);
void Unwind@005b3378(void);
void Unwind@005b3387(void);
void Unwind@005b3396(void);
void Unwind@005b33a5(void);
void Unwind@005b33b4(void);
void Unwind@005b33c3(void);
void Unwind@005b33d2(void);
void Unwind@005b33e1(void);
void Unwind@005b33f0(void);
void Unwind@005b33ff(void);
void Unwind@005b340e(void);
void Unwind@005b341d(void);
void Unwind@005b342c(void);
void Unwind@005b343b(void);
void Unwind@005b344a(void);
void Unwind@005b3459(void);
void Unwind@005b3468(void);
void Unwind@005b3477(void);
void Unwind@005b3486(void);
void Unwind@005b3495(void);
void Unwind@005b34a4(void);
void Unwind@005b34b3(void);
void Unwind@005b34c2(void);
void Unwind@005b34d1(void);
void Unwind@005b34e0(void);
void Unwind@005b34ef(void);
void Unwind@005b34fe(void);
void Unwind@005b350d(void);
void Unwind@005b351c(void);
void Unwind@005b352b(void);
void Unwind@005b353a(void);
void Unwind@005b3549(void);
void Unwind@005b3558(void);
void Unwind@005b3567(void);
void Unwind@005b3576(void);
void Unwind@005b3585(void);
void Unwind@005b3594(void);
void Unwind@005b35a3(void);
void Unwind@005b35b2(void);
void Unwind@005b35c1(void);
void Unwind@005b35d0(void);
void Unwind@005b35df(void);
void Unwind@005b35ee(void);
void Unwind@005b35fd(void);
void Unwind@005b360c(void);
void Unwind@005b361b(void);
void Unwind@005b362a(void);
void Unwind@005b3639(void);
void Unwind@005b3648(void);
void Unwind@005b3657(void);
void Unwind@005b3666(void);
void Unwind@005b3675(void);
void Unwind@005b3684(void);
void Unwind@005b3693(void);
void Unwind@005b36a2(void);
void Unwind@005b36b1(void);
void Unwind@005b36c0(void);
void Unwind@005b36cf(void);
void Unwind@005b36de(void);
void Unwind@005b36ed(void);
void Unwind@005b36fc(void);
void Unwind@005b370b(void);
void Unwind@005b371a(void);
void Unwind@005b3729(void);
void Unwind@005b3738(void);
void Unwind@005b3747(void);
void Unwind@005b3756(void);
void Unwind@005b3765(void);
void Unwind@005b3774(void);
void Unwind@005b37a0(void);
void Unwind@005b37d0(void);
void Unwind@005b3800(void);
void Unwind@005b3840(void);
void Unwind@005b3848(void);
void Unwind@005b3853(void);
void Unwind@005b385b(void);
void Unwind@005b3863(void);
void Unwind@005b386e(void);
void Unwind@005b3876(void);
void Unwind@005b387e(void);
void Unwind@005b3886(void);
void Unwind@005b388e(void);
void Unwind@005b3896(void);
void Unwind@005b389e(void);
void Unwind@005b38a6(void);
void Unwind@005b38e0(void);
void Unwind@005b38eb(void);
void Unwind@005b38f6(void);
void Unwind@005b3901(void);
void Unwind@005b390c(void);
void Unwind@005b3917(void);
void Unwind@005b3925(void);
void Unwind@005b3930(void);
void Unwind@005b393b(void);
void Unwind@005b3949(void);
void Unwind@005b3980(void);
void Unwind@005b39b0(void);
void Unwind@005b39b8(void);
void Unwind@005b39c0(void);
void Unwind@005b39c8(void);
void Unwind@005b39d0(void);
void Unwind@005b39d8(void);
void Unwind@005b39e0(void);
void Unwind@005b39e8(void);
void Unwind@005b39f0(void);
void Unwind@005b39f8(void);
void Unwind@005b3a00(void);
void Unwind@005b3a30(void);
void Unwind@005b3a38(void);
void Unwind@005b3a60(void);
void Unwind@005b3a68(void);
void Unwind@005b3a70(void);
void Unwind@005b3a78(void);
void Unwind@005b3a80(void);
void Unwind@005b3ab0(void);
void Unwind@005b3ac2(void);
void Unwind@005b3af0(void);
void Unwind@005b3b40(void);
void Unwind@005b3b70(void);
void Unwind@005b3ba0(void);
void Unwind@005b3bab(void);
void Unwind@005b3bb6(void);
void Unwind@005b3bc1(void);
void Unwind@005b3bcc(void);
void Unwind@005b3bda(void);
void Unwind@005b3be8(void);
void Unwind@005b3bf6(void);
void Unwind@005b3c04(void);
void Unwind@005b3c12(void);
void Unwind@005b3c20(void);
void Unwind@005b3c50(void);
void Unwind@005b3c58(void);
void Unwind@005b3c60(void);
void Unwind@005b3c68(void);
void Unwind@005b3c70(void);
void Unwind@005b3c78(void);
void Unwind@005b3c80(void);
void Unwind@005b3c8b(void);
void Unwind@005b3c96(void);
void Unwind@005b3cf0(void);
void Unwind@005b3d20(void);
void Unwind@005b3d28(void);
void Unwind@005b3d60(void);
void Unwind@005b3d6b(void);
void Unwind@005b3d76(void);
void Unwind@005b3d81(void);
void Unwind@005b3dc0(void);
void Unwind@005b3df0(void);
void Unwind@005b3df8(void);
void Unwind@005b3e00(void);
void Unwind@005b3e08(void);
void Unwind@005b3e10(void);
void Unwind@005b3e18(void);
void Unwind@005b3e20(void);
void Unwind@005b3e28(void);
void Unwind@005b3e60(void);
void Unwind@005b3e90(void);
void Unwind@005b3ec0(void);
void Unwind@005b3f20(void);
void Unwind@005b3f28(void);
void Unwind@005b3f50(void);
void Unwind@005b3f58(void);
void Unwind@005b3f80(void);
void Unwind@005b3f88(void);
void Unwind@005b3f90(void);
void Unwind@005b3f9b(void);
void Unwind@005b3fa6(void);
void Unwind@005b3fae(void);
void Unwind@005b3fb6(void);
void Unwind@005b3fe0(void);
void Unwind@005b3fe8(void);
void Unwind@005b4010(void);
void Unwind@005b4018(void);
void Unwind@005b4020(void);
void Unwind@005b4028(void);
void Unwind@005b4060(void);
void Unwind@005b4068(void);
void Unwind@005b4090(void);
void Unwind@005b4098(void);
void Unwind@005b40a0(void);
void Unwind@005b40ab(void);
void Unwind@005b40b6(void);
void Unwind@005b40c1(void);
void Unwind@005b40cc(void);
void Unwind@005b4100(void);
void Unwind@005b4108(void);
void Unwind@005b4140(void);
void Unwind@005b4148(void);
void Unwind@005b4150(void);
void Unwind@005b4158(void);
void Unwind@005b4190(void);
void Unwind@005b4198(void);
void Unwind@005b41c0(void);
void Unwind@005b41c8(void);
void Unwind@005b41d0(void);
void Unwind@005b4220(void);
void Unwind@005b4228(void);
void Unwind@005b4233(void);
void Unwind@005b4260(void);
void Unwind@005b4268(void);
void Unwind@005b4270(void);
void Unwind@005b42a0(void);
void Unwind@005b42a8(void);
void Unwind@005b42b0(void);
void Unwind@005b42e0(void);
void Unwind@005b42e8(void);
void Unwind@005b4320(void);
void Unwind@005b4328(void);
void Unwind@005b4330(void);
void Unwind@005b4338(void);
void Unwind@005b4370(void);
void Unwind@005b4378(void);
void Unwind@005b43b0(void);
void Unwind@005b43e0(void);
void Unwind@005b43e8(void);
void Unwind@005b43f0(void);
void Unwind@005b43f8(void);
void Unwind@005b4400(void);
void Unwind@005b4408(void);
void Unwind@005b4410(void);
void Unwind@005b4418(void);
void Unwind@005b4420(void);
void Unwind@005b4428(void);
void Unwind@005b4430(void);
void Unwind@005b4438(void);
void Unwind@005b4440(void);
void Unwind@005b4448(void);
void Unwind@005b4450(void);
void Unwind@005b4458(void);
void Unwind@005b4460(void);
void Unwind@005b4468(void);
void Unwind@005b4470(void);
void Unwind@005b44a0(void);
void Unwind@005b44a8(void);
void Unwind@005b44e0(void);
void Unwind@005b44e8(void);
void Unwind@005b44f0(void);
void Unwind@005b44f8(void);
void Unwind@005b4530(void);
void Unwind@005b4538(void);
void Unwind@005b4540(void);
void Unwind@005b4548(void);
void Unwind@005b4553(void);
void Unwind@005b455e(void);
void Unwind@005b4569(void);
void Unwind@005b4574(void);
void Unwind@005b457f(void);
void Unwind@005b458a(void);
void Unwind@005b4595(void);
void Unwind@005b45a0(void);
void Unwind@005b45ab(void);
void Unwind@005b45b6(void);
void Unwind@005b45c1(void);
void Unwind@005b45cc(void);
void Unwind@005b45da(void);
void Unwind@005b45e8(void);
void Unwind@005b45f3(void);
void Unwind@005b45fe(void);
void Unwind@005b460c(void);
void Unwind@005b461a(void);
void Unwind@005b4625(void);
void Unwind@005b4630(void);
void Unwind@005b463e(void);
void Unwind@005b464c(void);
void Unwind@005b466b(void);
void Unwind@005b4676(void);
void Unwind@005b4681(void);
void Unwind@005b468f(void);
void Unwind@005b469d(void);
void Unwind@005b46a8(void);
void Unwind@005b46b3(void);
void Unwind@005b46c1(void);
void Unwind@005b46cf(void);
void Unwind@005b46da(void);
void Unwind@005b46e2(void);
void Unwind@005b46ea(void);
void Unwind@005b46f5(void);
void Unwind@005b4700(void);
void Unwind@005b470e(void);
void Unwind@005b471c(void);
void Unwind@005b4727(void);
void Unwind@005b4732(void);
void Unwind@005b4740(void);
void Unwind@005b474e(void);
void Unwind@005b476d(void);
void Unwind@005b4778(void);
void Unwind@005b4783(void);
void Unwind@005b4791(void);
void Unwind@005b479f(void);
void Unwind@005b47be(void);
void Unwind@005b47c9(void);
void Unwind@005b47d4(void);
void Unwind@005b47df(void);
void Unwind@005b4820(void);
void Unwind@005b4832(void);
void Unwind@005b4841(void);
void Unwind@005b4850(void);
void Unwind@005b485f(void);
void Unwind@005b486e(void);
void Unwind@005b487d(void);
void Unwind@005b488c(void);
void Unwind@005b489b(void);
void Unwind@005b48aa(void);
void Unwind@005b48b9(void);
void Unwind@005b48c8(void);
void Unwind@005b48d7(void);
void Unwind@005b48e6(void);
void Unwind@005b48f5(void);
void Unwind@005b4904(void);
void Unwind@005b4913(void);
void Unwind@005b4922(void);
void Unwind@005b4931(void);
void Unwind@005b4940(void);
void Unwind@005b494f(void);
void Unwind@005b495e(void);
void Unwind@005b4970(void);
void Unwind@005b497f(void);
void Unwind@005b498e(void);
void Unwind@005b499d(void);
void Unwind@005b49e0(void);
void Unwind@005b49eb(void);
void Unwind@005b4a20(void);
void Unwind@005b4a2b(void);
void Unwind@005b4aa0(void);
void Unwind@005b4aab(void);
void Unwind@005b4ab6(void);
void Unwind@005b4abe(void);
void Unwind@005b4ac9(void);
void Unwind@005b4ad4(void);
void Unwind@005b4b00(void);
void Unwind@005b4b0b(void);
void Unwind@005b4b16(void);
void Unwind@005b4b1e(void);
void Unwind@005b4b29(void);
void Unwind@005b4b34(void);
void Unwind@005b4b60(void);
void Unwind@005b4b90(void);
void Unwind@005b4bc0(void);
void Unwind@005b4bc8(void);
void Unwind@005b4bf0(void);
void Unwind@005b4bf8(void);
void Unwind@005b4c20(void);
void Unwind@005b4c50(void);
void Unwind@005b4c58(void);
void Unwind@005b4c60(void);
void Unwind@005b4c68(void);
void Unwind@005b4ca0(void);
void Unwind@005b4ca8(void);
void Unwind@005b4cd0(void);
void Unwind@005b4cd8(void);
void Unwind@005b4ce0(void);
void Unwind@005b4d10(void);
void Unwind@005b4d18(void);
void Unwind@005b4d20(void);
void Unwind@005b4d50(void);
void Unwind@005b4d58(void);
void Unwind@005b4d60(void);
void Unwind@005b4d90(void);
void Unwind@005b4d98(void);
void Unwind@005b4da0(void);
void Unwind@005b4dd0(void);
void Unwind@005b4dd8(void);
void Unwind@005b4de0(void);
void Unwind@005b4e10(void);
void Unwind@005b4e40(void);
void Unwind@005b4e70(void);
void Unwind@005b4e78(void);
void Unwind@005b4e80(void);
void Unwind@005b4e88(void);
void Unwind@005b4e90(void);
void Unwind@005b4e9b(void);
void Unwind@005b4ea6(void);
void Unwind@005b4ed0(void);
void Unwind@005b4ed8(void);
void Unwind@005b4ee0(void);
void Unwind@005b4ee8(void);
void Unwind@005b4ef0(void);
void Unwind@005b4ef8(void);
void Unwind@005b4f00(void);
void Unwind@005b4f08(void);
void Unwind@005b4f10(void);
void Unwind@005b4f40(void);
void Unwind@005b4f70(void);
void Unwind@005b4f78(void);
void Unwind@005b4f80(void);
void Unwind@005b4f88(void);
void Unwind@005b4f90(void);
void Unwind@005b4f98(void);
void Unwind@005b4fd0(void);
void Unwind@005b5000(void);
void Unwind@005b5008(void);
void Unwind@005b5010(void);
void Unwind@005b5040(void);
void Unwind@005b5048(void);
void Unwind@005b5050(void);
void Unwind@005b5058(void);
void Unwind@005b5060(void);
void Unwind@005b5068(void);
void Unwind@005b5070(void);
void Unwind@005b5078(void);
void Unwind@005b50b0(void);
void Unwind@005b50b8(void);
void Unwind@005b50f0(void);
void Unwind@005b50f8(void);
void Unwind@005b5100(void);
void Unwind@005b510b(void);
void Unwind@005b5116(void);
void Unwind@005b5140(void);
void Unwind@005b514b(void);
void Unwind@005b5156(void);
void Unwind@005b5161(void);
void Unwind@005b5169(void);
void Unwind@005b5171(void);
void Unwind@005b517c(void);
void Unwind@005b5187(void);
void Unwind@005b518f(void);
void Unwind@005b519a(void);
void Unwind@005b51a5(void);
void Unwind@005b51ad(void);
void Unwind@005b51b8(void);
void Unwind@005b51f0(void);
void Unwind@005b51f8(void);
void Unwind@005b5200(void);
void Unwind@005b5208(void);
void Unwind@005b5210(void);
void Unwind@005b5218(void);
void Unwind@005b5220(void);
void Unwind@005b5228(void);
void Unwind@005b5230(void);
void Unwind@005b5238(void);
void Unwind@005b5240(void);
void Unwind@005b5248(void);
void Unwind@005b5250(void);
void Unwind@005b5258(void);
void Unwind@005b5260(void);
void Unwind@005b5268(void);
void Unwind@005b5270(void);
void Unwind@005b5278(void);
void Unwind@005b5280(void);
void Unwind@005b5288(void);
void Unwind@005b5290(void);
void Unwind@005b5298(void);
void Unwind@005b52d0(void);
void Unwind@005b52d8(void);
void Unwind@005b52e0(void);
void Unwind@005b52e8(void);
void Unwind@005b52f0(void);
void Unwind@005b52f8(void);
void Unwind@005b5330(void);
void Unwind@005b533b(void);
void Unwind@005b5346(void);
void Unwind@005b5351(void);
void Unwind@005b535f(void);
void Unwind@005b536d(void);
void Unwind@005b537b(void);
void Unwind@005b5389(void);
void Unwind@005b53c0(void);
void Unwind@005b53cb(void);
void Unwind@005b53d6(void);
void Unwind@005b53e1(void);
void Unwind@005b53ec(void);
void Unwind@005b53f7(void);
void Unwind@005b5405(void);
void Unwind@005b5413(void);
void Unwind@005b5421(void);
void Unwind@005b5450(void);
void Unwind@005b5458(void);
void Unwind@005b5460(void);
void Unwind@005b54b0(void);
void Unwind@005b54b8(void);
void Unwind@005b54e0(void);
void Unwind@005b54eb(void);
void Unwind@005b54f6(void);
void Unwind@005b5518(void);
void Unwind@005b5550(void);
void Unwind@005b5558(void);
void Unwind@005b5563(void);
void Unwind@005b556e(void);
void Unwind@005b5576(void);
void Unwind@005b557e(void);
void Unwind@005b5589(void);
void Unwind@005b5591(void);
void Unwind@005b55a3(void);
void Unwind@005b55b5(void);
void Unwind@005b55f0(void);
void Unwind@005b55f8(void);
void Unwind@005b5603(void);
void Unwind@005b560e(void);
void Unwind@005b5616(void);
void Unwind@005b561e(void);
void Unwind@005b5629(void);
void Unwind@005b5631(void);
void Unwind@005b563c(void);
void Unwind@005b5670(void);
void Unwind@005b5678(void);
void Unwind@005b5680(void);
void Unwind@005b5688(void);
void Unwind@005b5697(void);
void Unwind@005b56a6(void);
void Unwind@005b56ae(void);
void Unwind@005b56bd(void);
void Unwind@005b56c5(void);
void Unwind@005b56d4(void);
void Unwind@005b5700(void);
void Unwind@005b5708(void);
void Unwind@005b5710(void);
void Unwind@005b5718(void);
void Unwind@005b5720(void);
void Unwind@005b5750(void);
void Unwind@005b5758(void);
void Unwind@005b5760(void);
void Unwind@005b5768(void);
void Unwind@005b5770(void);
void Unwind@005b5778(void);
void Unwind@005b5780(void);
void Unwind@005b5788(void);
void Unwind@005b5790(void);
void Unwind@005b5798(void);
void Unwind@005b57a0(void);
void Unwind@005b57a8(void);
void Unwind@005b57b0(void);
void Unwind@005b57b8(void);
void Unwind@005b57c0(void);
void Unwind@005b57c8(void);
void Unwind@005b57d0(void);
void Unwind@005b57d8(void);
void Unwind@005b57e7(void);
void Unwind@005b57f2(void);
void Unwind@005b57fa(void);
void Unwind@005b5802(void);
void Unwind@005b580d(void);
void Unwind@005b581f(void);
void Unwind@005b5827(void);
void Unwind@005b582f(void);
void Unwind@005b5837(void);
void Unwind@005b583f(void);
void Unwind@005b584a(void);
void Unwind@005b5859(void);
void Unwind@005b5861(void);
void Unwind@005b5869(void);
void Unwind@005b5871(void);
void Unwind@005b58b0(void);
void Unwind@005b58b8(void);
void Unwind@005b58c0(void);
void Unwind@005b58c8(void);
void Unwind@005b58d0(void);
void Unwind@005b58d8(void);
void Unwind@005b58e0(void);
void Unwind@005b58e8(void);
void Unwind@005b58f0(void);
void Unwind@005b58f8(void);
void Unwind@005b5900(void);
void Unwind@005b5930(void);
void Unwind@005b5938(void);
void Unwind@005b5940(void);
void Unwind@005b594f(void);
void Unwind@005b5968(void);
void Unwind@005b5970(void);
void Unwind@005b597f(void);
void Unwind@005b59c0(void);
void Unwind@005b59c8(void);
void Unwind@005b59d0(void);
void Unwind@005b59d8(void);
void Unwind@005b59e0(void);
void Unwind@005b59e8(void);
void Unwind@005b59f0(void);
void Unwind@005b59f8(void);
void Unwind@005b5a00(void);
void Unwind@005b5a08(void);
void Unwind@005b5a10(void);
void Unwind@005b5a18(void);
void Unwind@005b5a20(void);
void Unwind@005b5a28(void);
void Unwind@005b5a60(void);
void Unwind@005b5a68(void);
void Unwind@005b5a70(void);
void Unwind@005b5a78(void);
void Unwind@005b5a80(void);
void Unwind@005b5ab0(void);
void Unwind@005b5ab8(void);
void Unwind@005b5ac0(void);
void Unwind@005b5ac8(void);
void Unwind@005b5ad0(void);
void Unwind@005b5ad8(void);
void Unwind@005b5ae0(void);
void Unwind@005b5b10(void);
void Unwind@005b5b18(void);
void Unwind@005b5b20(void);
void Unwind@005b5b28(void);
void Unwind@005b5b30(void);
void Unwind@005b5b38(void);
void Unwind@005b5b70(void);
void Unwind@005b5b78(void);
void Unwind@005b5b80(void);
void Unwind@005b5b88(void);
void Unwind@005b5b90(void);
void Unwind@005b5b98(void);
void Unwind@005b5ba0(void);
void Unwind@005b5ba8(void);
void Unwind@005b5bb0(void);
void Unwind@005b5bb8(void);
void Unwind@005b5bc0(void);
void Unwind@005b5bc8(void);
void Unwind@005b5bd0(void);
void Unwind@005b5bd8(void);
void Unwind@005b5be0(void);
void Unwind@005b5be8(void);
void Unwind@005b5bf0(void);
void Unwind@005b5bf8(void);
void Unwind@005b5c03(void);
void Unwind@005b5c0e(void);
void Unwind@005b5c19(void);
void Unwind@005b5c50(void);
void Unwind@005b5c58(void);
void Unwind@005b5c60(void);
void Unwind@005b5c68(void);
void Unwind@005b5c70(void);
void Unwind@005b5c78(void);
void Unwind@005b5c80(void);
void Unwind@005b5c88(void);
void Unwind@005b5c90(void);
void Unwind@005b5c98(void);
void Unwind@005b5ca0(void);
void Unwind@005b5ca8(void);
void Unwind@005b5cb0(void);
void Unwind@005b5cb8(void);
void Unwind@005b5cc7(void);
void Unwind@005b5ce0(void);
void Unwind@005b5ce8(void);
void Unwind@005b5cf7(void);
void Unwind@005b5d40(void);
void Unwind@005b5d48(void);
void Unwind@005b5d50(void);
void Unwind@005b5d58(void);
void Unwind@005b5d90(void);
void Unwind@005b5d98(void);
void Unwind@005b5da0(void);
void Unwind@005b5dd0(void);
void Unwind@005b5dd8(void);
void Unwind@005b5de0(void);
void Unwind@005b5de8(void);
void Unwind@005b5df0(void);
void Unwind@005b5df8(void);
void Unwind@005b5e00(void);
void Unwind@005b5e08(void);
void Unwind@005b5e10(void);
void Unwind@005b5e18(void);
void Unwind@005b5e20(void);
void Unwind@005b5e28(void);
void Unwind@005b5e30(void);
void Unwind@005b5e38(void);
void Unwind@005b5e47(void);
void Unwind@005b5e60(void);
void Unwind@005b5e68(void);
void Unwind@005b5e77(void);
void Unwind@005b5ec0(void);
void Unwind@005b5ec8(void);
void Unwind@005b5ed0(void);
void Unwind@005b5ed8(void);
void Unwind@005b5f10(void);
void Unwind@005b5f18(void);
void Unwind@005b5f2d(void);
void Unwind@005b5f35(void);
void Unwind@005b5f3d(void);
void Unwind@005b5f45(void);
void Unwind@005b5f4d(void);
void Unwind@005b5f55(void);
void Unwind@005b5f5d(void);
void Unwind@005b5f65(void);
void Unwind@005b5f6d(void);
void Unwind@005b5f75(void);
void Unwind@005b5f7d(void);
void Unwind@005b5f85(void);
void Unwind@005b5f8d(void);
void Unwind@005b5f95(void);
void Unwind@005b5f9d(void);
void Unwind@005b5fa5(void);
void Unwind@005b5fad(void);
void Unwind@005b5fb5(void);
void Unwind@005b5fbd(void);
void Unwind@005b5fc5(void);
void Unwind@005b5fcd(void);
void Unwind@005b5fd5(void);
void Unwind@005b5fdd(void);
void Unwind@005b5fe5(void);
void Unwind@005b5fed(void);
void Unwind@005b5ff5(void);
void Unwind@005b6030(void);
void Unwind@005b6038(void);
void Unwind@005b6040(void);
void Unwind@005b6048(void);
void Unwind@005b6050(void);
void Unwind@005b6058(void);
void Unwind@005b6060(void);
void Unwind@005b6068(void);
void Unwind@005b6070(void);
void Unwind@005b60a0(void);
void Unwind@005b60a8(void);
void Unwind@005b60b0(void);
void Unwind@005b60b8(void);
void Unwind@005b60c0(void);
void Unwind@005b60c8(void);
void Unwind@005b60d0(void);
void Unwind@005b60d8(void);
void Unwind@005b60e0(void);
void Unwind@005b6110(void);
void Unwind@005b6118(void);
void Unwind@005b6120(void);
void Unwind@005b6150(void);
void Unwind@005b6158(void);
void Unwind@005b6160(void);
void Unwind@005b6168(void);
void Unwind@005b6190(void);
void Unwind@005b6198(void);
void Unwind@005b61ad(void);
void Unwind@005b61cc(void);
void Unwind@005b61eb(void);
void Unwind@005b620d(void);
void Unwind@005b622f(void);
void Unwind@005b624e(void);
void Unwind@005b626d(void);
void Unwind@005b6278(void);
void Unwind@005b6283(void);
void Unwind@005b628b(void);
void Unwind@005b6293(void);
void Unwind@005b629b(void);
void Unwind@005b62a3(void);
void Unwind@005b62ab(void);
void Unwind@005b62b3(void);
void Unwind@005b62bb(void);
void Unwind@005b62c3(void);
void Unwind@005b62cb(void);
void Unwind@005b62d3(void);
void Unwind@005b62db(void);
void Unwind@005b62e3(void);
void Unwind@005b62eb(void);
void Unwind@005b62f3(void);
void Unwind@005b62fb(void);
void Unwind@005b6303(void);
void Unwind@005b630b(void);
void Unwind@005b6313(void);
void Unwind@005b631b(void);
void Unwind@005b6323(void);
void Unwind@005b632b(void);
void Unwind@005b6333(void);
void Unwind@005b633b(void);
void Unwind@005b6343(void);
void Unwind@005b634b(void);
void Unwind@005b6353(void);
void Unwind@005b635b(void);
void Unwind@005b6363(void);
void Unwind@005b636b(void);
void Unwind@005b6373(void);
void Unwind@005b637b(void);
void Unwind@005b6383(void);
void Unwind@005b638b(void);
void Unwind@005b6393(void);
void Unwind@005b639b(void);
void Unwind@005b63a3(void);
void Unwind@005b63ab(void);
void Unwind@005b63b3(void);
void Unwind@005b63bb(void);
void Unwind@005b63c3(void);
void Unwind@005b63ce(void);
void Unwind@005b63d6(void);
void Unwind@005b63de(void);
void Unwind@005b63e6(void);
void Unwind@005b6420(void);
void Unwind@005b6428(void);
void Unwind@005b6430(void);
void Unwind@005b6438(void);
void Unwind@005b6440(void);
void Unwind@005b6448(void);
void Unwind@005b6450(void);
void Unwind@005b6458(void);
void Unwind@005b6460(void);
void Unwind@005b6468(void);
void Unwind@005b64a0(void);
void Unwind@005b64a8(void);
void Unwind@005b64b0(void);
void Unwind@005b64b8(void);
void Unwind@005b64c0(void);
void Unwind@005b64c8(void);
void Unwind@005b64d0(void);
void Unwind@005b64d8(void);
void Unwind@005b64e0(void);
void Unwind@005b6510(void);
void Unwind@005b651b(void);
void Unwind@005b6526(void);
void Unwind@005b653b(void);
void Unwind@005b6543(void);
void Unwind@005b654b(void);
void Unwind@005b6556(void);
void Unwind@005b6561(void);
void Unwind@005b6569(void);
void Unwind@005b6571(void);
void Unwind@005b6579(void);
void Unwind@005b6581(void);
void Unwind@005b658c(void);
void Unwind@005b6594(void);
void Unwind@005b659f(void);
void Unwind@005b65a7(void);
void Unwind@005b65b2(void);
void Unwind@005b65ba(void);
void Unwind@005b65c2(void);
void Unwind@005b65ca(void);
void Unwind@005b65d5(void);
void Unwind@005b65e0(void);
void Unwind@005b65e8(void);
void Unwind@005b65f0(void);
void Unwind@005b6602(void);
void Unwind@005b660a(void);
void Unwind@005b6612(void);
void Unwind@005b661d(void);
void Unwind@005b6625(void);
void Unwind@005b6630(void);
void Unwind@005b6638(void);
void Unwind@005b6643(void);
void Unwind@005b664b(void);
void Unwind@005b665d(void);
void Unwind@005b6665(void);
void Unwind@005b666d(void);
void Unwind@005b6675(void);
void Unwind@005b6680(void);
void Unwind@005b6688(void);
void Unwind@005b6690(void);
void Unwind@005b6698(void);
void Unwind@005b66d0(void);
void Unwind@005b66d8(void);
void Unwind@005b66e0(void);
void Unwind@005b6710(void);
void Unwind@005b6740(void);
void Unwind@005b6770(void);
void Unwind@005b6778(void);
void Unwind@005b6780(void);
void Unwind@005b6788(void);
void Unwind@005b6790(void);
void Unwind@005b67a2(void);
void Unwind@005b67aa(void);
void Unwind@005b67b2(void);
void Unwind@005b67ba(void);
void Unwind@005b67c2(void);
void Unwind@005b67ca(void);
void Unwind@005b67d2(void);
void Unwind@005b67da(void);
void Unwind@005b67e2(void);
void Unwind@005b67ea(void);
void Unwind@005b67f2(void);
void Unwind@005b67fa(void);
void Unwind@005b6802(void);
void Unwind@005b680a(void);
void Unwind@005b6812(void);
void Unwind@005b681a(void);
void Unwind@005b6822(void);
void Unwind@005b682a(void);
void Unwind@005b6832(void);
void Unwind@005b683a(void);
void Unwind@005b6842(void);
void Unwind@005b684a(void);
void Unwind@005b6852(void);
void Unwind@005b685a(void);
void Unwind@005b6862(void);
void Unwind@005b686a(void);
void Unwind@005b6872(void);
void Unwind@005b687a(void);
void Unwind@005b6882(void);
void Unwind@005b688a(void);
void Unwind@005b6892(void);
void Unwind@005b689a(void);
void Unwind@005b68a2(void);
void Unwind@005b68aa(void);
void Unwind@005b68b2(void);
void Unwind@005b68ba(void);
void Unwind@005b68c2(void);
void Unwind@005b68ca(void);
void Unwind@005b68d2(void);
void Unwind@005b68da(void);
void Unwind@005b68e2(void);
void Unwind@005b68ea(void);
void Unwind@005b68f2(void);
void Unwind@005b68fa(void);
void Unwind@005b6902(void);
void Unwind@005b690a(void);
void Unwind@005b6912(void);
void Unwind@005b691a(void);
void Unwind@005b6922(void);
void Unwind@005b692a(void);
void Unwind@005b6932(void);
void Unwind@005b693a(void);
void Unwind@005b6942(void);
void Unwind@005b694a(void);
void Unwind@005b6952(void);
void Unwind@005b695a(void);
void Unwind@005b6962(void);
void Unwind@005b696b(void);
void Unwind@005b6973(void);
void Unwind@005b697b(void);
void Unwind@005b6984(void);
void Unwind@005b698c(void);
void Unwind@005b6994(void);
void Unwind@005b69d0(void);
void Unwind@005b69d8(void);
void Unwind@005b69e0(void);
void Unwind@005b6a10(void);
void Unwind@005b6a18(void);
void Unwind@005b6a20(void);
void Unwind@005b6a29(void);
void Unwind@005b6a32(void);
void Unwind@005b6a41(void);
void Unwind@005b6a4a(void);
void Unwind@005b6a70(void);
void Unwind@005b6a78(void);
void Unwind@005b6a80(void);
void Unwind@005b6a88(void);
void Unwind@005b6a90(void);
void Unwind@005b6a98(void);
void Unwind@005b6aa0(void);
void Unwind@005b6aa8(void);
void Unwind@005b6ab0(void);
void Unwind@005b6ab8(void);
void Unwind@005b6ac0(void);
void Unwind@005b6af0(void);
void Unwind@005b6b02(void);
void Unwind@005b6b1b(void);
void Unwind@005b6b23(void);
void Unwind@005b6b2b(void);
void Unwind@005b6b33(void);
void Unwind@005b6b3b(void);
void Unwind@005b6b43(void);
void Unwind@005b6b4b(void);
void Unwind@005b6b53(void);
void Unwind@005b6b5b(void);
void Unwind@005b6b63(void);
void Unwind@005b6b6b(void);
void Unwind@005b6b73(void);
void Unwind@005b6b8c(void);
void Unwind@005b6ba5(void);
void Unwind@005b6bad(void);
void Unwind@005b6bb5(void);
void Unwind@005b6bbd(void);
void Unwind@005b6bc5(void);
void Unwind@005b6bcd(void);
void Unwind@005b6c00(void);
void Unwind@005b6c08(void);
void Unwind@005b6c10(void);
void Unwind@005b6c1f(void);
void Unwind@005b6c50(void);
void Unwind@005b6c58(void);
void Unwind@005b6c60(void);
void Unwind@005b6c90(void);
void Unwind@005b6c98(void);
void Unwind@005b6ca0(void);
void Unwind@005b6cd0(void);
void Unwind@005b6cd8(void);
void Unwind@005b6ce0(void);
void Unwind@005b6ce8(void);
void Unwind@005b6cf0(void);
void Unwind@005b6d20(void);
void Unwind@005b6d28(void);
void Unwind@005b6d30(void);
void Unwind@005b6d38(void);
void Unwind@005b6d40(void);
void Unwind@005b6d70(void);
void Unwind@005b6d78(void);
void Unwind@005b6d80(void);
void Unwind@005b6d88(void);
void Unwind@005b6d90(void);
void Unwind@005b6d98(void);
void Unwind@005b6da0(void);
void Unwind@005b6da8(void);
void Unwind@005b6db0(void);
void Unwind@005b6db8(void);
void Unwind@005b6dc0(void);
void Unwind@005b6df0(void);
void Unwind@005b6e02(void);
void Unwind@005b6e0d(void);
void Unwind@005b6e18(void);
void Unwind@005b6e23(void);
void Unwind@005b6e2e(void);
void Unwind@005b6e39(void);
void Unwind@005b6e41(void);
void Unwind@005b6e49(void);
void Unwind@005b6e51(void);
void Unwind@005b6e59(void);
void Unwind@005b6e61(void);
void Unwind@005b6e69(void);
void Unwind@005b6e71(void);
void Unwind@005b6e79(void);
void Unwind@005b6e88(void);
void Unwind@005b6ea1(void);
void Unwind@005b6ea9(void);
void Unwind@005b6eb8(void);
void Unwind@005b6ed1(void);
void Unwind@005b6ed9(void);
void Unwind@005b6ee4(void);
void Unwind@005b6eec(void);
void Unwind@005b6ef4(void);
void Unwind@005b6eff(void);
void Unwind@005b6f07(void);
void Unwind@005b6f16(void);
void Unwind@005b6f1e(void);
void Unwind@005b6f26(void);
void Unwind@005b6f2e(void);
void Unwind@005b6f39(void);
void Unwind@005b6f41(void);
void Unwind@005b6f49(void);
void Unwind@005b6f58(void);
void Unwind@005b6f60(void);
void Unwind@005b6f68(void);
void Unwind@005b6f70(void);
void Unwind@005b6f78(void);
void Unwind@005b6f80(void);
void Unwind@005b6f88(void);
void Unwind@005b6f90(void);
void Unwind@005b6f9b(void);
void Unwind@005b6fa3(void);
void Unwind@005b6fab(void);
void Unwind@005b6fb3(void);
void Unwind@005b6ff0(void);
void Unwind@005b6ff8(void);
void Unwind@005b700a(void);
void Unwind@005b7023(void);
void Unwind@005b702b(void);
void Unwind@005b7033(void);
void Unwind@005b703b(void);
void Unwind@005b7043(void);
void Unwind@005b704b(void);
void Unwind@005b7053(void);
void Unwind@005b705b(void);
void Unwind@005b7063(void);
void Unwind@005b706b(void);
void Unwind@005b7073(void);
void Unwind@005b707b(void);
void Unwind@005b7083(void);
void Unwind@005b708b(void);
void Unwind@005b7093(void);
void Unwind@005b709b(void);
void Unwind@005b70a3(void);
void Unwind@005b70ab(void);
void Unwind@005b70b3(void);
void Unwind@005b70bb(void);
void Unwind@005b70c3(void);
void Unwind@005b70f0(void);
void Unwind@005b70f8(void);
void Unwind@005b7100(void);
void Unwind@005b7108(void);
void Unwind@005b7110(void);
void Unwind@005b7118(void);
void Unwind@005b7120(void);
void Unwind@005b7128(void);
void Unwind@005b7130(void);
void Unwind@005b7138(void);
void Unwind@005b7140(void);
void Unwind@005b7148(void);
void Unwind@005b7150(void);
void Unwind@005b7158(void);
void Unwind@005b7160(void);
void Unwind@005b7168(void);
void Unwind@005b7170(void);
void Unwind@005b7178(void);
void Unwind@005b7180(void);
void Unwind@005b7188(void);
void Unwind@005b7190(void);
void Unwind@005b7198(void);
void Unwind@005b71a0(void);
void Unwind@005b71a8(void);
void Unwind@005b71b0(void);
void Unwind@005b71b8(void);
void Unwind@005b71c0(void);
void Unwind@005b71c8(void);
void Unwind@005b71d0(void);
void Unwind@005b71d8(void);
void Unwind@005b71e0(void);
void Unwind@005b71e8(void);
void Unwind@005b71f0(void);
void Unwind@005b71f8(void);
void Unwind@005b7200(void);
void Unwind@005b7208(void);
void Unwind@005b7210(void);
void Unwind@005b7218(void);
void Unwind@005b7220(void);
void Unwind@005b7228(void);
void Unwind@005b7230(void);
void Unwind@005b7238(void);
void Unwind@005b7240(void);
void Unwind@005b7248(void);
void Unwind@005b7250(void);
void Unwind@005b7258(void);
void Unwind@005b7260(void);
void Unwind@005b7268(void);
void Unwind@005b7270(void);
void Unwind@005b7278(void);
void Unwind@005b7280(void);
void Unwind@005b7288(void);
void Unwind@005b7290(void);
void Unwind@005b7298(void);
void Unwind@005b72a0(void);
void Unwind@005b72a8(void);
void Unwind@005b72b0(void);
void Unwind@005b72b8(void);
void Unwind@005b72c0(void);
void Unwind@005b72c8(void);
void Unwind@005b72d0(void);
void Unwind@005b72d8(void);
void Unwind@005b72e0(void);
void Unwind@005b72e8(void);
void Unwind@005b72f0(void);
void Unwind@005b72f8(void);
void Unwind@005b7300(void);
void Unwind@005b7308(void);
void Unwind@005b7310(void);
void Unwind@005b7318(void);
void Unwind@005b7320(void);
void Unwind@005b7328(void);
void Unwind@005b7330(void);
void Unwind@005b7338(void);
void Unwind@005b7340(void);
void Unwind@005b7348(void);
void Unwind@005b7350(void);
void Unwind@005b7358(void);
void Unwind@005b7360(void);
void Unwind@005b7368(void);
void Unwind@005b7370(void);
void Unwind@005b7378(void);
void Unwind@005b7380(void);
void Unwind@005b7388(void);
void Unwind@005b7390(void);
void Unwind@005b7398(void);
void Unwind@005b73a0(void);
void Unwind@005b73a8(void);
void Unwind@005b73b0(void);
void Unwind@005b73b8(void);
void Unwind@005b73c0(void);
void Unwind@005b73c8(void);
void Unwind@005b73d0(void);
void Unwind@005b73d8(void);
void Unwind@005b73e0(void);
void Unwind@005b73e8(void);
void Unwind@005b73f0(void);
void Unwind@005b73f8(void);
void Unwind@005b7400(void);
void Unwind@005b7408(void);
void Unwind@005b7410(void);
void Unwind@005b7418(void);
void Unwind@005b7420(void);
void Unwind@005b7428(void);
void Unwind@005b7430(void);
void Unwind@005b7438(void);
void Unwind@005b7440(void);
void Unwind@005b7448(void);
void Unwind@005b7450(void);
void Unwind@005b7480(void);
void Unwind@005b7488(void);
void Unwind@005b7490(void);
void Unwind@005b7498(void);
void Unwind@005b74a0(void);
void Unwind@005b74a8(void);
void Unwind@005b74b0(void);
void Unwind@005b74b8(void);
void Unwind@005b74c0(void);
void Unwind@005b74c8(void);
void Unwind@005b74d0(void);
void Unwind@005b74d8(void);
void Unwind@005b74e0(void);
void Unwind@005b74e8(void);
void Unwind@005b74f0(void);
void Unwind@005b74f8(void);
void Unwind@005b7500(void);
void Unwind@005b7508(void);
void Unwind@005b7510(void);
void Unwind@005b7518(void);
void Unwind@005b7520(void);
void Unwind@005b7528(void);
void Unwind@005b7530(void);
void Unwind@005b7538(void);
void Unwind@005b7540(void);
void Unwind@005b7548(void);
void Unwind@005b7550(void);
void Unwind@005b7558(void);
void Unwind@005b7560(void);
void Unwind@005b7568(void);
void Unwind@005b7570(void);
void Unwind@005b7578(void);
void Unwind@005b7580(void);
void Unwind@005b7588(void);
void Unwind@005b7590(void);
void Unwind@005b7598(void);
void Unwind@005b75a0(void);
void Unwind@005b75a8(void);
void Unwind@005b75b0(void);
void Unwind@005b75b8(void);
void Unwind@005b75c0(void);
void Unwind@005b75c8(void);
void Unwind@005b75d0(void);
void Unwind@005b75d8(void);
void Unwind@005b75e0(void);
void Unwind@005b75e8(void);
void Unwind@005b75f0(void);
void Unwind@005b75f8(void);
void Unwind@005b7600(void);
void Unwind@005b7608(void);
void Unwind@005b7610(void);
void Unwind@005b7618(void);
void Unwind@005b7620(void);
void Unwind@005b7628(void);
void Unwind@005b7630(void);
void Unwind@005b7638(void);
void Unwind@005b7640(void);
void Unwind@005b7648(void);
void Unwind@005b7650(void);
void Unwind@005b7658(void);
void Unwind@005b7660(void);
void Unwind@005b7668(void);
void Unwind@005b7670(void);
void Unwind@005b7678(void);
void Unwind@005b7680(void);
void Unwind@005b7688(void);
void Unwind@005b7690(void);
void Unwind@005b7698(void);
void Unwind@005b76a0(void);
void Unwind@005b76a8(void);
void Unwind@005b76b0(void);
void Unwind@005b76b8(void);
void Unwind@005b76c0(void);
void Unwind@005b76c8(void);
void Unwind@005b76d0(void);
void Unwind@005b76d8(void);
void Unwind@005b76e0(void);
void Unwind@005b76e8(void);
void Unwind@005b76f0(void);
void Unwind@005b76f8(void);
void Unwind@005b7700(void);
void Unwind@005b7708(void);
void Unwind@005b7710(void);
void Unwind@005b7718(void);
void Unwind@005b7720(void);
void Unwind@005b7728(void);
void Unwind@005b7730(void);
void Unwind@005b7738(void);
void Unwind@005b7740(void);
void Unwind@005b7748(void);
void Unwind@005b7750(void);
void Unwind@005b7758(void);
void Unwind@005b7760(void);
void Unwind@005b7768(void);
void Unwind@005b7770(void);
void Unwind@005b7778(void);
void Unwind@005b7780(void);
void Unwind@005b7788(void);
void Unwind@005b7790(void);
void Unwind@005b7798(void);
void Unwind@005b77a0(void);
void Unwind@005b77a8(void);
void Unwind@005b77b0(void);
void Unwind@005b77b8(void);
void Unwind@005b77c0(void);
void Unwind@005b77c8(void);
void Unwind@005b77d0(void);
void Unwind@005b77d8(void);
void Unwind@005b77e0(void);
void Unwind@005b77e8(void);
void Unwind@005b77f0(void);
void Unwind@005b77f8(void);
void Unwind@005b7800(void);
void Unwind@005b7808(void);
void Unwind@005b7810(void);
void Unwind@005b7818(void);
void Unwind@005b7820(void);
void Unwind@005b7828(void);
void Unwind@005b7830(void);
void Unwind@005b7860(void);
void Unwind@005b7872(void);
void Unwind@005b787a(void);
void Unwind@005b7885(void);
void Unwind@005b7890(void);
void Unwind@005b789b(void);
void Unwind@005b78a6(void);
void Unwind@005b78b1(void);
void Unwind@005b78bf(void);
void Unwind@005b78c7(void);
void Unwind@005b78cf(void);
void Unwind@005b78d7(void);
void Unwind@005b78df(void);
void Unwind@005b78e7(void);
void Unwind@005b78ef(void);
void Unwind@005b78f7(void);
void Unwind@005b78ff(void);
void Unwind@005b7907(void);
void Unwind@005b790f(void);
void Unwind@005b7917(void);
void Unwind@005b791f(void);
void Unwind@005b7927(void);
void Unwind@005b792f(void);
void Unwind@005b7937(void);
void Unwind@005b793f(void);
void Unwind@005b7951(void);
void Unwind@005b796a(void);
void Unwind@005b7972(void);
void Unwind@005b7981(void);
void Unwind@005b799a(void);
void Unwind@005b79a2(void);
void Unwind@005b79aa(void);
void Unwind@005b79b2(void);
void Unwind@005b79ba(void);
void Unwind@005b79c2(void);
void Unwind@005b79ca(void);
void Unwind@005b79d2(void);
void Unwind@005b79da(void);
void Unwind@005b7a10(void);
void Unwind@005b7a18(void);
void Unwind@005b7a20(void);
void Unwind@005b7a28(void);
void Unwind@005b7a30(void);
void Unwind@005b7a42(void);
void Unwind@005b7a4a(void);
void Unwind@005b7a52(void);
void Unwind@005b7a5a(void);
void Unwind@005b7a65(void);
void Unwind@005b7a6d(void);
void Unwind@005b7a75(void);
void Unwind@005b7a7d(void);
void Unwind@005b7a85(void);
void Unwind@005b7a8d(void);
void Unwind@005b7a95(void);
void Unwind@005b7a9d(void);
void Unwind@005b7aa5(void);
void Unwind@005b7aad(void);
void Unwind@005b7ab5(void);
void Unwind@005b7abd(void);
void Unwind@005b7ac8(void);
void Unwind@005b7ad1(void);
void Unwind@005b7ad9(void);
void Unwind@005b7ae4(void);
void Unwind@005b7b20(void);
void Unwind@005b7b28(void);
void Unwind@005b7b33(void);
void Unwind@005b7b3b(void);
void Unwind@005b7b43(void);
void Unwind@005b7b4e(void);
void Unwind@005b7b59(void);
void Unwind@005b7b61(void);
void Unwind@005b7b69(void);
void Unwind@005b7b71(void);
void Unwind@005b7b79(void);
void Unwind@005b7b81(void);
void Unwind@005b7b89(void);
void Unwind@005b7b91(void);
void Unwind@005b7b99(void);
void Unwind@005b7bd0(void);
void Unwind@005b7bd8(void);
void Unwind@005b7be3(void);
void Unwind@005b7bee(void);
void Unwind@005b7bf9(void);
void Unwind@005b7c04(void);
void Unwind@005b7c0f(void);
void Unwind@005b7c17(void);
void Unwind@005b7c1f(void);
void Unwind@005b7c27(void);
void Unwind@005b7c2f(void);
void Unwind@005b7c37(void);
void Unwind@005b7c3f(void);
void Unwind@005b7c47(void);
void Unwind@005b7c52(void);
void Unwind@005b7c64(void);
void Unwind@005b7c6c(void);
void Unwind@005b7c7e(void);
void Unwind@005b7c86(void);
void Unwind@005b7c8e(void);
void Unwind@005b7c96(void);
void Unwind@005b7c9e(void);
void Unwind@005b7ca6(void);
void Unwind@005b7cae(void);
void Unwind@005b7cb6(void);
void Unwind@005b7cbe(void);
void Unwind@005b7cc6(void);
void Unwind@005b7cce(void);
void Unwind@005b7cd6(void);
void Unwind@005b7cde(void);
void Unwind@005b7ce6(void);
void Unwind@005b7cee(void);
void Unwind@005b7cf6(void);
void Unwind@005b7cfe(void);
void Unwind@005b7d06(void);
void Unwind@005b7d0e(void);
void Unwind@005b7d16(void);
void Unwind@005b7d1e(void);
void Unwind@005b7d29(void);
void Unwind@005b7d31(void);
void Unwind@005b7d39(void);
void Unwind@005b7d70(void);
void Unwind@005b7d78(void);
void Unwind@005b7d83(void);
void Unwind@005b7d8b(void);
void Unwind@005b7d96(void);
void Unwind@005b7da1(void);
void Unwind@005b7da9(void);
void Unwind@005b7db1(void);
void Unwind@005b7db9(void);
void Unwind@005b7dc1(void);
void Unwind@005b7dc9(void);
void Unwind@005b7dd1(void);
void Unwind@005b7dd9(void);
void Unwind@005b7de1(void);
void Unwind@005b7de9(void);
void Unwind@005b7e20(void);
void Unwind@005b7e39(void);
void Unwind@005b7e48(void);
void Unwind@005b7e61(void);
void Unwind@005b7e7a(void);
void Unwind@005b7e89(void);
void Unwind@005b7ea2(void);
void Unwind@005b7eaa(void);
void Unwind@005b7eb9(void);
void Unwind@005b7f00(void);
void Unwind@005b7f08(void);
void Unwind@005b7f10(void);
void Unwind@005b7f18(void);
void Unwind@005b7f20(void);
void Unwind@005b7f28(void);
void Unwind@005b7f30(void);
void Unwind@005b7f38(void);
void Unwind@005b7f40(void);
void Unwind@005b7f48(void);
void Unwind@005b7f50(void);
void Unwind@005b7f80(void);
void Unwind@005b7f88(void);
void Unwind@005b7f90(void);
void Unwind@005b7f98(void);
void Unwind@005b7fd0(void);
void Unwind@005b7fd8(void);
void Unwind@005b7fe0(void);
void Unwind@005b7feb(void);
void Unwind@005b7ff6(void);
void Unwind@005b7ffe(void);
void Unwind@005b8009(void);
void Unwind@005b8011(void);
void Unwind@005b8019(void);
void Unwind@005b8021(void);
void Unwind@005b8029(void);
void Unwind@005b8031(void);
void Unwind@005b803c(void);
void Unwind@005b8044(void);
void Unwind@005b80a0(void);
void Unwind@005b80a8(void);
void Unwind@005b80b0(void);
void Unwind@005b80e0(void);
void Unwind@005b80f5(void);
void Unwind@005b8100(void);
void Unwind@005b810e(void);
void Unwind@005b811c(void);
void Unwind@005b812a(void);
void Unwind@005b8138(void);
void Unwind@005b8140(void);
void Unwind@005b8148(void);
void Unwind@005b8150(void);
void Unwind@005b8158(void);
void Unwind@005b8160(void);
void Unwind@005b8168(void);
void Unwind@005b8170(void);
void Unwind@005b818f(void);
void Unwind@005b8197(void);
void Unwind@005b819f(void);
void Unwind@005b81a7(void);
void Unwind@005b81af(void);
void Unwind@005b81ba(void);
void Unwind@005b81c5(void);
void Unwind@005b81d1(void);
void Unwind@005b81d9(void);
void Unwind@005b81e1(void);
void Unwind@005b81e9(void);
void Unwind@005b81f1(void);
void Unwind@005b81fd(void);
void Unwind@005b8205(void);
void Unwind@005b820d(void);
void Unwind@005b8215(void);
void Unwind@005b821d(void);
void Unwind@005b8250(void);
void Unwind@005b8262(void);
void Unwind@005b826a(void);
void Unwind@005b8272(void);
void Unwind@005b827a(void);
void Unwind@005b8282(void);
void Unwind@005b828a(void);
void Unwind@005b8292(void);
void Unwind@005b829a(void);
void Unwind@005b82a2(void);
void Unwind@005b82aa(void);
void Unwind@005b82b2(void);
void Unwind@005b82ba(void);
void Unwind@005b82c2(void);
void Unwind@005b82ca(void);
void Unwind@005b82d2(void);
void Unwind@005b82da(void);
void Unwind@005b82e2(void);
void Unwind@005b82ea(void);
void Unwind@005b82f2(void);
void Unwind@005b82fd(void);
void Unwind@005b8305(void);
void Unwind@005b830d(void);
void Unwind@005b8315(void);
void Unwind@005b831d(void);
void Unwind@005b8325(void);
void Unwind@005b8330(void);
void Unwind@005b8338(void);
void Unwind@005b8340(void);
void Unwind@005b8348(void);
void Unwind@005b8350(void);
void Unwind@005b8358(void);
void Unwind@005b8360(void);
void Unwind@005b8368(void);
void Unwind@005b8370(void);
void Unwind@005b837b(void);
void Unwind@005b8383(void);
void Unwind@005b838e(void);
void Unwind@005b8396(void);
void Unwind@005b839e(void);
void Unwind@005b83a6(void);
void Unwind@005b83ae(void);
void Unwind@005b83b9(void);
void Unwind@005b83c1(void);
void Unwind@005b83c9(void);
void Unwind@005b83d1(void);
void Unwind@005b83dc(void);
void Unwind@005b83e4(void);
void Unwind@005b83ef(void);
void Unwind@005b83f7(void);
void Unwind@005b83ff(void);
void Unwind@005b8407(void);
void Unwind@005b840f(void);
void Unwind@005b8417(void);
void Unwind@005b841f(void);
void Unwind@005b8427(void);
void Unwind@005b8432(void);
void Unwind@005b843a(void);
void Unwind@005b8442(void);
void Unwind@005b844a(void);
void Unwind@005b8452(void);
void Unwind@005b845a(void);
void Unwind@005b8462(void);
void Unwind@005b846a(void);
void Unwind@005b8475(void);
void Unwind@005b847d(void);
void Unwind@005b8485(void);
void Unwind@005b848d(void);
void Unwind@005b8495(void);
void Unwind@005b849d(void);
void Unwind@005b84a5(void);
void Unwind@005b84ad(void);
void Unwind@005b84b5(void);
void Unwind@005b84bd(void);
void Unwind@005b84c5(void);
void Unwind@005b84cd(void);
void Unwind@005b84d5(void);
void Unwind@005b84dd(void);
void Unwind@005b84e5(void);
void Unwind@005b84ed(void);
void Unwind@005b850c(void);
void Unwind@005b852b(void);
void Unwind@005b8533(void);
void Unwind@005b853b(void);
void Unwind@005b8543(void);
void Unwind@005b854b(void);
void Unwind@005b8553(void);
void Unwind@005b855b(void);
void Unwind@005b8563(void);
void Unwind@005b856b(void);
void Unwind@005b8573(void);
void Unwind@005b857b(void);
void Unwind@005b8583(void);
void Unwind@005b858b(void);
void Unwind@005b8593(void);
void Unwind@005b859b(void);
void Unwind@005b85a3(void);
void Unwind@005b85ab(void);
void Unwind@005b85b3(void);
void Unwind@005b85bb(void);
void Unwind@005b85c3(void);
void Unwind@005b85cb(void);
void Unwind@005b85d3(void);
void Unwind@005b85db(void);
void Unwind@005b85e3(void);
void Unwind@005b85eb(void);
void Unwind@005b85f3(void);
void Unwind@005b85fb(void);
void Unwind@005b8603(void);
void Unwind@005b860b(void);
void Unwind@005b8613(void);
void Unwind@005b861b(void);
void Unwind@005b8623(void);
void Unwind@005b862b(void);
void Unwind@005b8633(void);
void Unwind@005b863b(void);
void Unwind@005b8643(void);
void Unwind@005b864b(void);
void Unwind@005b8653(void);
void Unwind@005b865b(void);
void Unwind@005b8663(void);
void Unwind@005b866b(void);
void Unwind@005b8673(void);
void Unwind@005b86b0(void);
void Unwind@005b86b8(void);
void Unwind@005b86c0(void);
void Unwind@005b86c8(void);
void Unwind@005b86d0(void);
void Unwind@005b86db(void);
void Unwind@005b86e4(void);
void Unwind@005b86ec(void);
void Unwind@005b8720(void);
void Unwind@005b8728(void);
void Unwind@005b8730(void);
void Unwind@005b8738(void);
void Unwind@005b8743(void);
void Unwind@005b874b(void);
void Unwind@005b8753(void);
void Unwind@005b875b(void);
void Unwind@005b8790(void);
void Unwind@005b879b(void);
void Unwind@005b87a6(void);
void Unwind@005b87ae(void);
void Unwind@005b87b6(void);
void Unwind@005b87c1(void);
void Unwind@005b87d6(void);
void Unwind@005b87de(void);
void Unwind@005b87e6(void);
void Unwind@005b87ee(void);
void Unwind@005b87f6(void);
void Unwind@005b87fe(void);
void Unwind@005b8806(void);
void Unwind@005b8811(void);
void Unwind@005b8819(void);
void Unwind@005b8821(void);
void Unwind@005b882c(void);
void Unwind@005b8834(void);
void Unwind@005b883c(void);
void Unwind@005b8844(void);
void Unwind@005b884c(void);
void Unwind@005b8854(void);
void Unwind@005b8866(void);
void Unwind@005b8885(void);
void Unwind@005b8890(void);
void Unwind@005b8898(void);
void Unwind@005b88a0(void);
void Unwind@005b88b2(void);
void Unwind@005b88d1(void);
void Unwind@005b88dc(void);
void Unwind@005b88e4(void);
void Unwind@005b88ec(void);
void Unwind@005b88f7(void);
void Unwind@005b88ff(void);
void Unwind@005b8907(void);
void Unwind@005b890f(void);
void Unwind@005b8918(void);
void Unwind@005b8920(void);
void Unwind@005b892c(void);
void Unwind@005b8934(void);
void Unwind@005b893c(void);
void Unwind@005b8944(void);
void Unwind@005b894c(void);
void Unwind@005b8954(void);
void Unwind@005b895c(void);
void Unwind@005b8964(void);
void Unwind@005b896d(void);
void Unwind@005b8975(void);
void Unwind@005b897d(void);
void Unwind@005b8985(void);
void Unwind@005b898d(void);
void Unwind@005b8995(void);
void Unwind@005b899d(void);
void Unwind@005b89a5(void);
void Unwind@005b89ad(void);
void Unwind@005b89b5(void);
void Unwind@005b89bd(void);
void Unwind@005b89c5(void);
void Unwind@005b89cd(void);
void Unwind@005b89d5(void);
void Unwind@005b89dd(void);
void Unwind@005b89e5(void);
void Unwind@005b89ed(void);
void Unwind@005b89f8(void);
void Unwind@005b8a00(void);
void Unwind@005b8a08(void);
void Unwind@005b8a10(void);
void Unwind@005b8a18(void);
void Unwind@005b8a23(void);
void Unwind@005b8a2b(void);
void Unwind@005b8a33(void);
void Unwind@005b8a3b(void);
void Unwind@005b8a43(void);
void Unwind@005b8a4c(void);
void Unwind@005b8a55(void);
void Unwind@005b8a5d(void);
void Unwind@005b8a65(void);
void Unwind@005b8a6d(void);
void Unwind@005b8a75(void);
void Unwind@005b8a7e(void);
void Unwind@005b8a86(void);
void Unwind@005b8a91(void);
void Unwind@005b8a99(void);
void Unwind@005b8aa1(void);
void Unwind@005b8aac(void);
void Unwind@005b8ab4(void);
void Unwind@005b8abc(void);
void Unwind@005b8ac4(void);
void Unwind@005b8acc(void);
void Unwind@005b8ad4(void);
void Unwind@005b8adc(void);
void Unwind@005b8ae4(void);
void Unwind@005b8aec(void);
void Unwind@005b8af4(void);
void Unwind@005b8afc(void);
void Unwind@005b8b04(void);
void Unwind@005b8b0c(void);
void Unwind@005b8b14(void);
void Unwind@005b8b1c(void);
void Unwind@005b8b24(void);
void Unwind@005b8b2c(void);
void Unwind@005b8b34(void);
void Unwind@005b8b3c(void);
void Unwind@005b8b44(void);
void Unwind@005b8b4c(void);
void Unwind@005b8b57(void);
void Unwind@005b8b62(void);
void Unwind@005b8b6a(void);
void Unwind@005b8b72(void);
void Unwind@005b8b7a(void);
void Unwind@005b8b82(void);
void Unwind@005b8b8d(void);
void Unwind@005b8b98(void);
void Unwind@005b8ba0(void);
void Unwind@005b8bab(void);
void Unwind@005b8bb3(void);
void Unwind@005b8bbb(void);
void Unwind@005b8bc3(void);
void Unwind@005b8bcb(void);
void Unwind@005b8bd3(void);
void Unwind@005b8bdb(void);
void Unwind@005b8be3(void);
void Unwind@005b8beb(void);
void Unwind@005b8bf3(void);
void Unwind@005b8bfb(void);
void Unwind@005b8c03(void);
void Unwind@005b8c0b(void);
void Unwind@005b8c13(void);
void Unwind@005b8c1b(void);
void Unwind@005b8c23(void);
void Unwind@005b8c2b(void);
void Unwind@005b8c33(void);
void Unwind@005b8c3b(void);
void Unwind@005b8c43(void);
void Unwind@005b8c4b(void);
void Unwind@005b8c53(void);
void Unwind@005b8c5b(void);
void Unwind@005b8c63(void);
void Unwind@005b8c6e(void);
void Unwind@005b8c79(void);
void Unwind@005b8c81(void);
void Unwind@005b8c89(void);
void Unwind@005b8cc0(void);
void Unwind@005b8cc8(void);
void Unwind@005b8cd0(void);
void Unwind@005b8cd8(void);
void Unwind@005b8ce0(void);
void Unwind@005b8ce8(void);
void Unwind@005b8cf0(void);
void Unwind@005b8cf8(void);
void Unwind@005b8d00(void);
void Unwind@005b8d30(void);
void Unwind@005b8d38(void);
void Unwind@005b8d40(void);
void Unwind@005b8d48(void);
void Unwind@005b8d57(void);
void Unwind@005b8d5f(void);
void Unwind@005b8d67(void);
void Unwind@005b8d6f(void);
void Unwind@005b8d77(void);
void Unwind@005b8db0(void);
void Unwind@005b8db8(void);
void Unwind@005b8dc0(void);
void Unwind@005b8dc8(void);
void Unwind@005b8dd0(void);
void Unwind@005b8ddf(void);
void Unwind@005b8de7(void);
void Unwind@005b8def(void);
void Unwind@005b8df7(void);
void Unwind@005b8dff(void);
void Unwind@005b8e07(void);
void Unwind@005b8e50(void);
void Unwind@005b8e58(void);
void Unwind@005b8e67(void);
void Unwind@005b8e80(void);
void Unwind@005b8e88(void);
void Unwind@005b8e97(void);
void Unwind@005b8eb0(void);
void Unwind@005b8eb8(void);
void Unwind@005b8ec0(void);
void Unwind@005b8ec8(void);
void Unwind@005b8f00(void);
void Unwind@005b8f30(void);
void Unwind@005b8f45(void);
void Unwind@005b8f64(void);
void Unwind@005b8f86(void);
void Unwind@005b8fa5(void);
void Unwind@005b8fc4(void);
void Unwind@005b8fe3(void);
void Unwind@005b8fee(void);
void Unwind@005b8ff9(void);
void Unwind@005b9004(void);
void Unwind@005b900f(void);
void Unwind@005b9017(void);
void Unwind@005b9029(void);
void Unwind@005b9048(void);
void Unwind@005b905a(void);
void Unwind@005b9079(void);
void Unwind@005b908b(void);
void Unwind@005b90af(void);
void Unwind@005b90c1(void);
void Unwind@005b90e5(void);
void Unwind@005b90ed(void);
void Unwind@005b90ff(void);
void Unwind@005b9123(void);
void Unwind@005b9135(void);
void Unwind@005b9159(void);
void Unwind@005b9161(void);
void Unwind@005b9173(void);
void Unwind@005b9197(void);
void Unwind@005b91a9(void);
void Unwind@005b91cd(void);
void Unwind@005b91d5(void);
void Unwind@005b91e7(void);
void Unwind@005b920b(void);
void Unwind@005b921d(void);
void Unwind@005b9241(void);
void Unwind@005b9249(void);
void Unwind@005b925b(void);
void Unwind@005b927f(void);
void Unwind@005b9291(void);
void Unwind@005b92b5(void);
void Unwind@005b92bd(void);
void Unwind@005b92cf(void);
void Unwind@005b92f3(void);
void Unwind@005b9305(void);
void Unwind@005b9329(void);
void Unwind@005b9331(void);
void Unwind@005b9343(void);
void Unwind@005b9367(void);
void Unwind@005b9379(void);
void Unwind@005b939d(void);
void Unwind@005b93a5(void);
void Unwind@005b93b7(void);
void Unwind@005b93db(void);
void Unwind@005b93ed(void);
void Unwind@005b9411(void);
void Unwind@005b9419(void);
void Unwind@005b942b(void);
void Unwind@005b944f(void);
void Unwind@005b9457(void);
void Unwind@005b9469(void);
void Unwind@005b94c0(void);
void Unwind@005b94c8(void);
void Unwind@005b94d0(void);
void Unwind@005b94d8(void);
void Unwind@005b94e0(void);
void Unwind@005b94ef(void);
void Unwind@005b9508(void);
void Unwind@005b9510(void);
void Unwind@005b9518(void);
void Unwind@005b9527(void);
void Unwind@005b9570(void);
void Unwind@005b9578(void);
void Unwind@005b9580(void);
void Unwind@005b9588(void);
void Unwind@005b9590(void);
void Unwind@005b959f(void);
void Unwind@005b95b8(void);
void Unwind@005b95c0(void);
void Unwind@005b95cf(void);
void Unwind@005b95e8(void);
void Unwind@005b95f7(void);
void Unwind@005b9610(void);
void Unwind@005b9618(void);
void Unwind@005b9627(void);
void Unwind@005b9640(void);
void Unwind@005b964f(void);
void Unwind@005b9668(void);
void Unwind@005b9677(void);
void Unwind@005b9690(void);
void Unwind@005b969f(void);
void Unwind@005b96b8(void);
void Unwind@005b96c7(void);
void Unwind@005b96e5(void);
void Unwind@005b96ed(void);
void Unwind@005b96fc(void);
void Unwind@005b971a(void);
void Unwind@005b9729(void);
void Unwind@005b9747(void);
void Unwind@005b974f(void);
void Unwind@005b975e(void);
void Unwind@005b977c(void);
void Unwind@005b978b(void);
void Unwind@005b97a9(void);
void Unwind@005b97b8(void);
void Unwind@005b97d6(void);
void Unwind@005b97de(void);
void Unwind@005b97ed(void);
void Unwind@005b980b(void);
void Unwind@005b9813(void);
void Unwind@005b9822(void);
void Unwind@005b9840(void);
void Unwind@005b984f(void);
void Unwind@005b986d(void);
void Unwind@005b9875(void);
void Unwind@005b9884(void);
void Unwind@005b98a2(void);
void Unwind@005b98b1(void);
void Unwind@005b98cf(void);
void Unwind@005b98d7(void);
void Unwind@005b98e6(void);
void Unwind@005b9904(void);
void Unwind@005b9913(void);
void Unwind@005b9931(void);
void Unwind@005b9939(void);
void Unwind@005b9948(void);
void Unwind@005b9966(void);
void Unwind@005b996e(void);
void Unwind@005b997d(void);
void Unwind@005b999b(void);
void Unwind@005b99d0(void);
void Unwind@005b99e2(void);
void Unwind@005b99ed(void);
void Unwind@005b99f8(void);
void Unwind@005b9a03(void);
void Unwind@005b9a0e(void);
void Unwind@005b9a19(void);
void Unwind@005b9a24(void);
void Unwind@005b9a32(void);
void Unwind@005b9a40(void);
void Unwind@005b9a4e(void);
void Unwind@005b9a5c(void);
void Unwind@005b9a6a(void);
void Unwind@005b9a72(void);
void Unwind@005b9a7a(void);
void Unwind@005b9a82(void);
void Unwind@005b9a8a(void);
void Unwind@005b9a92(void);
void Unwind@005b9a9a(void);
void Unwind@005b9aa2(void);
void Unwind@005b9aaa(void);
void Unwind@005b9ab2(void);
void Unwind@005b9aba(void);
void Unwind@005b9ac2(void);
void Unwind@005b9aca(void);
void Unwind@005b9ad2(void);
void Unwind@005b9ada(void);
void Unwind@005b9ae2(void);
void Unwind@005b9aea(void);
void Unwind@005b9af9(void);
void Unwind@005b9b01(void);
void Unwind@005b9b09(void);
void Unwind@005b9b11(void);
void Unwind@005b9b20(void);
void Unwind@005b9b28(void);
void Unwind@005b9b37(void);
void Unwind@005b9b50(void);
void Unwind@005b9b58(void);
void Unwind@005b9b67(void);
void Unwind@005b9bb0(void);
void Unwind@005b9bb8(void);
void Unwind@005b9bc0(void);
void Unwind@005b9bc8(void);
void Unwind@005b9bd0(void);
void Unwind@005b9bd8(void);
void Unwind@005b9be0(void);
void Unwind@005b9be8(void);
void Unwind@005b9bf0(void);
void Unwind@005b9bf8(void);
void Unwind@005b9c00(void);
void Unwind@005b9c08(void);
void Unwind@005b9c10(void);
void Unwind@005b9c18(void);
void Unwind@005b9c20(void);
void Unwind@005b9c28(void);
void Unwind@005b9c30(void);
void Unwind@005b9c38(void);
void Unwind@005b9c40(void);
void Unwind@005b9c48(void);
void Unwind@005b9c80(void);
void Unwind@005b9c88(void);
void Unwind@005b9c90(void);
void Unwind@005b9c9f(void);
void Unwind@005b9cb8(void);
void Unwind@005b9cc0(void);
void Unwind@005b9ccf(void);
void Unwind@005b9d10(void);
void Unwind@005b9d22(void);
void Unwind@005b9d2d(void);
void Unwind@005b9d38(void);
void Unwind@005b9d43(void);
void Unwind@005b9d4f(void);
void Unwind@005b9d5e(void);
void Unwind@005b9d66(void);
void Unwind@005b9d6e(void);
void Unwind@005b9d76(void);
void Unwind@005b9d7e(void);
void Unwind@005b9d86(void);
void Unwind@005b9d8e(void);
void Unwind@005b9d96(void);
void Unwind@005b9d9e(void);
void Unwind@005b9da6(void);
void Unwind@005b9dae(void);
void Unwind@005b9db6(void);
void Unwind@005b9dbe(void);
void Unwind@005b9dc6(void);
void Unwind@005b9dce(void);
void Unwind@005b9dd6(void);
void Unwind@005b9dde(void);
void Unwind@005b9de6(void);
void Unwind@005b9dee(void);
void Unwind@005b9df6(void);
void Unwind@005b9dfe(void);
void Unwind@005b9e30(void);
void Unwind@005b9e38(void);
void Unwind@005b9e43(void);
void Unwind@005b9e4e(void);
void Unwind@005b9e59(void);
void Unwind@005b9e64(void);
void Unwind@005b9e79(void);
void Unwind@005b9e81(void);
void Unwind@005b9e8c(void);
void Unwind@005b9e94(void);
void Unwind@005b9e9c(void);
void Unwind@005b9ea4(void);
void Unwind@005b9eac(void);
void Unwind@005b9eb4(void);
void Unwind@005b9ebc(void);
void Unwind@005b9ec4(void);
void Unwind@005b9ecc(void);
void Unwind@005b9ed4(void);
void Unwind@005b9edc(void);
void Unwind@005b9ee4(void);
void Unwind@005b9eec(void);
void Unwind@005b9ef4(void);
void Unwind@005b9efc(void);
void Unwind@005b9f04(void);
void Unwind@005b9f0c(void);
void Unwind@005b9f17(void);
void Unwind@005b9f1f(void);
void Unwind@005b9f27(void);
void Unwind@005b9f2f(void);
void Unwind@005b9f3a(void);
void Unwind@005b9f42(void);
void Unwind@005b9f4d(void);
void Unwind@005b9f58(void);
void Unwind@005b9f60(void);
void Unwind@005b9f6b(void);
void Unwind@005b9f76(void);
void Unwind@005b9f88(void);
void Unwind@005b9f93(void);
void Unwind@005b9f9b(void);
void Unwind@005b9fad(void);
void Unwind@005b9fb8(void);
void Unwind@005b9fc0(void);
void Unwind@005b9fcb(void);
void Unwind@005b9fd6(void);
void Unwind@005b9ff5(void);
void Unwind@005ba017(void);
void Unwind@005ba022(void);
void Unwind@005ba02d(void);
void Unwind@005ba038(void);
void Unwind@005ba043(void);
void Unwind@005ba04e(void);
void Unwind@005ba059(void);
void Unwind@005ba061(void);
void Unwind@005ba069(void);
void Unwind@005ba074(void);
void Unwind@005ba07f(void);
void Unwind@005ba08a(void);
void Unwind@005ba095(void);
void Unwind@005ba0a0(void);
void Unwind@005ba0a8(void);
void Unwind@005ba0c7(void);
void Unwind@005ba0e6(void);
void Unwind@005ba0ee(void);
void Unwind@005ba0f6(void);
void Unwind@005ba0fe(void);
void Unwind@005ba106(void);
void Unwind@005ba10e(void);
void Unwind@005ba116(void);
void Unwind@005ba11e(void);
void Unwind@005ba126(void);
void Unwind@005ba12e(void);
void Unwind@005ba136(void);
void Unwind@005ba141(void);
void Unwind@005ba14c(void);
void Unwind@005ba157(void);
void Unwind@005ba162(void);
void Unwind@005ba16d(void);
void Unwind@005ba175(void);
void Unwind@005ba17d(void);
void Unwind@005ba188(void);
void Unwind@005ba190(void);
void Unwind@005ba198(void);
void Unwind@005ba1a3(void);
void Unwind@005ba1ae(void);
void Unwind@005ba1b9(void);
void Unwind@005ba1c4(void);
void Unwind@005ba1cc(void);
void Unwind@005ba1d4(void);
void Unwind@005ba1dc(void);
void Unwind@005ba1e7(void);
void Unwind@005ba1ef(void);
void Unwind@005ba1f7(void);
void Unwind@005ba1ff(void);
void Unwind@005ba207(void);
void Unwind@005ba20f(void);
void Unwind@005ba217(void);
void Unwind@005ba21f(void);
void Unwind@005ba227(void);
void Unwind@005ba22f(void);
void Unwind@005ba23a(void);
void Unwind@005ba245(void);
void Unwind@005ba264(void);
void Unwind@005ba283(void);
void Unwind@005ba2a2(void);
void Unwind@005ba2c6(void);
void Unwind@005ba2ea(void);
void Unwind@005ba30e(void);
void Unwind@005ba316(void);
void Unwind@005ba31e(void);
void Unwind@005ba326(void);
void Unwind@005ba32e(void);
void Unwind@005ba336(void);
void Unwind@005ba33e(void);
void Unwind@005ba346(void);
void Unwind@005ba34e(void);
void Unwind@005ba356(void);
void Unwind@005ba35e(void);
void Unwind@005ba366(void);
void Unwind@005ba36e(void);
void Unwind@005ba376(void);
void Unwind@005ba37e(void);
void Unwind@005ba386(void);
void Unwind@005ba38e(void);
void Unwind@005ba396(void);
void Unwind@005ba39e(void);
void Unwind@005ba3a6(void);
void Unwind@005ba3ae(void);
void Unwind@005ba3b6(void);
void Unwind@005ba3c1(void);
void Unwind@005ba3cc(void);
void Unwind@005ba3d4(void);
void Unwind@005ba3dc(void);
void Unwind@005ba3e7(void);
void Unwind@005ba3ef(void);
void Unwind@005ba3f7(void);
void Unwind@005ba3ff(void);
void Unwind@005ba407(void);
void Unwind@005ba40f(void);
void Unwind@005ba417(void);
void Unwind@005ba422(void);
void Unwind@005ba42a(void);
void Unwind@005ba432(void);
void Unwind@005ba43d(void);
void Unwind@005ba445(void);
void Unwind@005ba44d(void);
void Unwind@005ba455(void);
void Unwind@005ba45d(void);
void Unwind@005ba465(void);
void Unwind@005ba470(void);
void Unwind@005ba478(void);
void Unwind@005ba480(void);
void Unwind@005ba488(void);
void Unwind@005ba490(void);
void Unwind@005ba4b4(void);
void Unwind@005ba4d8(void);
void Unwind@005ba4e0(void);
void Unwind@005ba4e8(void);
void Unwind@005ba4f0(void);
void Unwind@005ba4f8(void);
void Unwind@005ba500(void);
void Unwind@005ba508(void);
void Unwind@005ba510(void);
void Unwind@005ba518(void);
void Unwind@005ba520(void);
void Unwind@005ba528(void);
void Unwind@005ba530(void);
void Unwind@005ba53b(void);
void Unwind@005ba543(void);
void Unwind@005ba54b(void);
void Unwind@005ba553(void);
void Unwind@005ba55b(void);
void Unwind@005ba563(void);
void Unwind@005ba56b(void);
void Unwind@005ba573(void);
void Unwind@005ba57b(void);
void Unwind@005ba583(void);
void Unwind@005ba58b(void);
void Unwind@005ba593(void);
void Unwind@005ba59b(void);
void Unwind@005ba5a3(void);
void Unwind@005ba5ab(void);
void Unwind@005ba5b3(void);
void Unwind@005ba5bb(void);
void Unwind@005ba5c3(void);
void Unwind@005ba5cb(void);
void Unwind@005ba5d3(void);
void Unwind@005ba5db(void);
void Unwind@005ba5e3(void);
void Unwind@005ba5eb(void);
void Unwind@005ba5f3(void);
void Unwind@005ba5fb(void);
void Unwind@005ba603(void);
void Unwind@005ba640(void);
void Unwind@005ba670(void);
void Unwind@005ba67f(void);
void Unwind@005ba687(void);
void Unwind@005ba6b0(void);
void Unwind@005ba6b9(void);
void Unwind@005ba6c1(void);
void Unwind@005ba6f0(void);
void Unwind@005ba760(void);
void Unwind@005ba790(void);
void Unwind@005ba7e0(void);
void Unwind@005ba7eb(void);
void Unwind@005ba810(void);
void Unwind@005ba81b(void);
void Unwind@005ba826(void);
void Unwind@005ba82e(void);
void Unwind@005ba839(void);
void Unwind@005ba841(void);
void Unwind@005ba84f(void);
void Unwind@005ba85d(void);
void Unwind@005ba865(void);
void Unwind@005ba873(void);
void Unwind@005ba87b(void);
void Unwind@005ba889(void);
void Unwind@005ba891(void);
void Unwind@005ba8c0(void);
void Unwind@005ba8c8(void);
void Unwind@005ba8d3(void);
void Unwind@005ba900(void);
void Unwind@005ba908(void);
void Unwind@005ba930(void);
void Unwind@005ba960(void);
void Unwind@005ba990(void);
void Unwind@005ba9c0(void);
void Unwind@005ba9c8(void);
void Unwind@005baa90(void);
void Unwind@005baa9b(void);
void Unwind@005baaa6(void);
void Unwind@005baaae(void);
void Unwind@005baab9(void);
void Unwind@005baac1(void);
void Unwind@005baacf(void);
void Unwind@005baadd(void);
void Unwind@005baae5(void);
void Unwind@005baaf3(void);
void Unwind@005baafb(void);
void Unwind@005bab09(void);
void Unwind@005bab11(void);
void Unwind@005bab40(void);
void Unwind@005bab70(void);
void Unwind@005bab7b(void);
void Unwind@005bab83(void);
void Unwind@005bab92(void);
void Unwind@005bab9a(void);
void Unwind@005baba2(void);
void Unwind@005babaa(void);
void Unwind@005babb9(void);
void Unwind@005babc1(void);
void Unwind@005babc9(void);
void Unwind@005babd1(void);
void Unwind@005bac00(void);
void Unwind@005bac08(void);
void Unwind@005bac17(void);
void Unwind@005bac40(void);
void Unwind@005bac59(void);
void Unwind@005bac61(void);
void Unwind@005bac69(void);
void Unwind@005baca0(void);
void Unwind@005bacab(void);
void Unwind@005bace0(void);
void Unwind@005bacf9(void);
void Unwind@005bad12(void);
void Unwind@005bad1a(void);
void Unwind@005bad22(void);
void Unwind@005bad2a(void);
void Unwind@005bad32(void);
void Unwind@005bad41(void);
void Unwind@005bad49(void);
void Unwind@005bad80(void);
void Unwind@005bad88(void);
void Unwind@005bad90(void);
void Unwind@005bad98(void);
void Unwind@005bada0(void);
void Unwind@005bada8(void);
void Unwind@005badb0(void);
void Unwind@005badb8(void);
void Unwind@005badc0(void);
void Unwind@005badc8(void);
void Unwind@005badd0(void);
void Unwind@005badd8(void);
void Unwind@005bae10(void);
void Unwind@005bae29(void);
void Unwind@005bae60(void);
void Unwind@005bae79(void);
void Unwind@005bae81(void);
void Unwind@005bae89(void);
void Unwind@005bae91(void);
void Unwind@005bae99(void);
void Unwind@005baea1(void);
void Unwind@005baea9(void);
void Unwind@005baeb1(void);
void Unwind@005baee0(void);
void Unwind@005baee8(void);
void Unwind@005baef0(void);
void Unwind@005baef8(void);
void Unwind@005baf00(void);
void Unwind@005baf08(void);
void Unwind@005baf10(void);
void Unwind@005baf18(void);
void Unwind@005baf27(void);
void Unwind@005baf2f(void);
void Unwind@005baf60(void);
void Unwind@005baf68(void);
void Unwind@005baf70(void);
void Unwind@005baf78(void);
void Unwind@005baf80(void);
void Unwind@005baf88(void);
void Unwind@005baf90(void);
void Unwind@005bafc0(void);
void Unwind@005bafc8(void);
void Unwind@005bafd0(void);
void Unwind@005bafd8(void);
void Unwind@005bafea(void);
void Unwind@005baff2(void);
void Unwind@005bb020(void);
void Unwind@005bb028(void);
void Unwind@005bb03a(void);
void Unwind@005bb070(void);
void Unwind@005bb078(void);
void Unwind@005bb080(void);
void Unwind@005bb0b0(void);
void Unwind@005bb0b8(void);
void Unwind@005bb0e0(void);
void Unwind@005bb0eb(void);
void Unwind@005bb0f6(void);
void Unwind@005bb101(void);
void Unwind@005bb10c(void);
void Unwind@005bb140(void);
void Unwind@005bb170(void);
void Unwind@005bb178(void);
void Unwind@005bb180(void);
void Unwind@005bb188(void);
void Unwind@005bb190(void);
void Unwind@005bb1c0(void);
void Unwind@005bb1c8(void);
void Unwind@005bb1d7(void);
void Unwind@005bb1df(void);
void Unwind@005bb1ee(void);
void Unwind@005bb1f6(void);
void Unwind@005bb205(void);
void Unwind@005bb20d(void);
void Unwind@005bb215(void);
void Unwind@005bb21d(void);
void Unwind@005bb225(void);
void Unwind@005bb22d(void);
void Unwind@005bb235(void);
void Unwind@005bb23d(void);
void Unwind@005bb245(void);
void Unwind@005bb24d(void);
void Unwind@005bb255(void);
void Unwind@005bb290(void);
void Unwind@005bb298(void);
void Unwind@005bb2d0(void);
void Unwind@005bb2d8(void);
void Unwind@005bb2e3(void);
void Unwind@005bb2ee(void);
void Unwind@005bb2f9(void);
void Unwind@005bb304(void);
void Unwind@005bb30f(void);
void Unwind@005bb31d(void);
void Unwind@005bb32b(void);
void Unwind@005bb339(void);
void Unwind@005bb347(void);
void Unwind@005bb380(void);
void Unwind@005bb388(void);
void Unwind@005bb39a(void);
void Unwind@005bb3c0(void);
void Unwind@005bb3c8(void);
void Unwind@005bb3d0(void);
void Unwind@005bb3d8(void);
void Unwind@005bb410(void);
void Unwind@005bb41b(void);
void Unwind@005bb426(void);
void Unwind@005bb42e(void);
void Unwind@005bb439(void);
void Unwind@005bb444(void);
void Unwind@005bb44f(void);
void Unwind@005bb490(void);
void Unwind@005bb4c0(void);
void Unwind@005bb4c8(void);
void Unwind@005bb500(void);
void Unwind@005bb50b(void);
void Unwind@005bb513(void);
void Unwind@005bb51e(void);
void Unwind@005bb560(void);
void Unwind@005bb56b(void);
void Unwind@005bb5a0(void);
void Unwind@005bb5ab(void);
void Unwind@005bb5b6(void);
void Unwind@005bb5c1(void);
void Unwind@005bb5cc(void);
void Unwind@005bb5eb(void);
void Unwind@005bb60a(void);
void Unwind@005bb615(void);
void Unwind@005bb650(void);
void Unwind@005bb680(void);
void Unwind@005bb688(void);
void Unwind@005bb693(void);
void Unwind@005bb6d0(void);
void Unwind@005bb700(void);
void Unwind@005bb708(void);
void Unwind@005bb710(void);
void Unwind@005bb740(void);
void Unwind@005bb748(void);
void Unwind@005bb780(void);
void Unwind@005bb7b0(void);
void Unwind@005bb7b8(void);
void Unwind@005bb7c0(void);
void Unwind@005bb7c8(void);
void Unwind@005bb7d0(void);
void Unwind@005bb800(void);
void Unwind@005bb808(void);
void Unwind@005bb840(void);
void Unwind@005bb870(void);
void Unwind@005bb878(void);
void Unwind@005bb880(void);
void Unwind@005bb888(void);
void Unwind@005bb890(void);
void Unwind@005bb898(void);
void Unwind@005bb8a0(void);
void Unwind@005bb8a8(void);
void Unwind@005bb8b0(void);
void Unwind@005bb8b8(void);
void Unwind@005bb8c0(void);
void Unwind@005bb8c8(void);
void Unwind@005bb8d0(void);
void Unwind@005bb8d8(void);
void Unwind@005bb8e0(void);
void Unwind@005bb8e8(void);
void Unwind@005bb8f0(void);
void Unwind@005bb8f8(void);
void Unwind@005bb900(void);
void Unwind@005bb908(void);
void Unwind@005bb910(void);
void Unwind@005bb918(void);
void Unwind@005bb920(void);
void Unwind@005bb928(void);
void Unwind@005bb930(void);
void Unwind@005bb938(void);
void Unwind@005bb940(void);
void Unwind@005bb948(void);
void Unwind@005bb950(void);
void Unwind@005bb958(void);
void Unwind@005bb960(void);
void Unwind@005bb968(void);
void Unwind@005bb970(void);
void Unwind@005bb978(void);
void Unwind@005bb980(void);
void Unwind@005bb988(void);
void Unwind@005bb990(void);
void Unwind@005bb998(void);
void Unwind@005bb9a0(void);
void Unwind@005bb9a8(void);
void Unwind@005bb9b0(void);
void Unwind@005bb9b8(void);
void Unwind@005bb9c0(void);
void Unwind@005bb9c8(void);
void Unwind@005bb9d0(void);
void Unwind@005bba00(void);
void Unwind@005bba08(void);
void Unwind@005bba10(void);
void Unwind@005bba1f(void);
void Unwind@005bba27(void);
void Unwind@005bba2f(void);
void Unwind@005bba37(void);
void Unwind@005bba46(void);
void Unwind@005bba4e(void);
void Unwind@005bba80(void);
void Unwind@005bba88(void);
void Unwind@005bba90(void);
void Unwind@005bba98(void);
void Unwind@005bbaa0(void);
void Unwind@005bbaa8(void);
void Unwind@005bbab0(void);
void Unwind@005bbab8(void);
void Unwind@005bbac0(void);
void Unwind@005bbacf(void);
void Unwind@005bbad7(void);
void Unwind@005bbadf(void);
void Unwind@005bbae7(void);
void Unwind@005bbaef(void);
void Unwind@005bbaf7(void);
void Unwind@005bbaff(void);
void Unwind@005bbb07(void);
void Unwind@005bbb0f(void);
void Unwind@005bbb40(void);
void Unwind@005bbb4b(void);
void Unwind@005bbb56(void);
void Unwind@005bbb5e(void);
void Unwind@005bbb69(void);
void Unwind@005bbb71(void);
void Unwind@005bbb7c(void);
void Unwind@005bbb84(void);
void Unwind@005bbb8f(void);
void Unwind@005bbb97(void);
void Unwind@005bbba2(void);
void Unwind@005bbbe0(void);
void Unwind@005bbbeb(void);
void Unwind@005bbbf3(void);
void Unwind@005bbbfe(void);
void Unwind@005bbc09(void);
void Unwind@005bbc40(void);
void Unwind@005bbc59(void);
void Unwind@005bbc61(void);
void Unwind@005bbc69(void);
void Unwind@005bbc71(void);
void Unwind@005bbc79(void);
void Unwind@005bbcb0(void);
void Unwind@005bbcb8(void);
void Unwind@005bbcc3(void);
void Unwind@005bbcce(void);
void Unwind@005bbcd6(void);
void Unwind@005bbce1(void);
void Unwind@005bbd20(void);
void Unwind@005bbd50(void);
void Unwind@005bbd58(void);
void Unwind@005bbd60(void);
void Unwind@005bbd68(void);
void Unwind@005bbd70(void);
void Unwind@005bbd78(void);
void Unwind@005bbd80(void);
void Unwind@005bbd88(void);
void Unwind@005bbd90(void);
void Unwind@005bbd98(void);
void Unwind@005bbda0(void);
void Unwind@005bbda8(void);
void Unwind@005bbdb0(void);
void Unwind@005bbdb8(void);
void Unwind@005bbdf0(void);
void Unwind@005bbe20(void);
void Unwind@005bbe50(void);
void Unwind@005bbe58(void);
void Unwind@005bbe60(void);
void Unwind@005bbe68(void);
void Unwind@005bbe73(void);
void Unwind@005bbeb0(void);
void Unwind@005bbeb8(void);
void Unwind@005bbec0(void);
void Unwind@005bbef0(void);
void Unwind@005bbf09(void);
void Unwind@005bbf11(void);
void Unwind@005bbf19(void);
void Unwind@005bbf21(void);
void Unwind@005bbf29(void);
void Unwind@005bbf31(void);
void Unwind@005bbf60(void);
void Unwind@005bbf68(void);
void Unwind@005bbf77(void);
void Unwind@005bbf7f(void);
void Unwind@005bbfb0(void);
void Unwind@005bbfc9(void);
void Unwind@005bbfd1(void);
void Unwind@005bbfd9(void);
void Unwind@005bbfe1(void);
void Unwind@005bbfe9(void);
void Unwind@005bbff1(void);
void Unwind@005bbff9(void);
void Unwind@005bc001(void);
void Unwind@005bc030(void);
void Unwind@005bc049(void);
void Unwind@005bc051(void);
void Unwind@005bc059(void);
void Unwind@005bc061(void);
void Unwind@005bc069(void);
void Unwind@005bc071(void);
void Unwind@005bc079(void);
void Unwind@005bc0b0(void);
void Unwind@005bc0c9(void);
void Unwind@005bc0d1(void);
void Unwind@005bc0d9(void);
void Unwind@005bc0e1(void);
void Unwind@005bc0e9(void);
void Unwind@005bc0f1(void);
void Unwind@005bc0f9(void);
void Unwind@005bc101(void);
void Unwind@005bc109(void);
void Unwind@005bc111(void);
void Unwind@005bc119(void);
void Unwind@005bc121(void);
void Unwind@005bc129(void);
void Unwind@005bc131(void);
void Unwind@005bc139(void);
void Unwind@005bc141(void);
void Unwind@005bc149(void);
void Unwind@005bc151(void);
void Unwind@005bc159(void);
void Unwind@005bc161(void);
void Unwind@005bc169(void);
void Unwind@005bc171(void);
void Unwind@005bc179(void);
void Unwind@005bc181(void);
void Unwind@005bc189(void);
void Unwind@005bc191(void);
void Unwind@005bc199(void);
void Unwind@005bc1a1(void);
void Unwind@005bc1a9(void);
void Unwind@005bc1b1(void);
void Unwind@005bc1b9(void);
void Unwind@005bc1c1(void);
void Unwind@005bc1c9(void);
void Unwind@005bc1d1(void);
void Unwind@005bc1d9(void);
void Unwind@005bc1e1(void);
void Unwind@005bc1e9(void);
void Unwind@005bc1f1(void);
void Unwind@005bc1f9(void);
void Unwind@005bc201(void);
void Unwind@005bc209(void);
void Unwind@005bc211(void);
void Unwind@005bc219(void);
void Unwind@005bc221(void);
void Unwind@005bc229(void);
void Unwind@005bc231(void);
void Unwind@005bc239(void);
void Unwind@005bc241(void);
void Unwind@005bc249(void);
void Unwind@005bc251(void);
void Unwind@005bc280(void);
void Unwind@005bc299(void);
void Unwind@005bc2a1(void);
void Unwind@005bc2a9(void);
void Unwind@005bc2b1(void);
void Unwind@005bc2b9(void);
void Unwind@005bc2c1(void);
void Unwind@005bc2f0(void);
void Unwind@005bc309(void);
void Unwind@005bc311(void);
void Unwind@005bc319(void);
void Unwind@005bc321(void);
void Unwind@005bc329(void);
void Unwind@005bc331(void);
void Unwind@005bc339(void);
void Unwind@005bc370(void);
void Unwind@005bc378(void);
void Unwind@005bc380(void);
void Unwind@005bc3b0(void);
void Unwind@005bc3bb(void);
void Unwind@005bc3c3(void);
void Unwind@005bc3ce(void);
void Unwind@005bc3d6(void);
void Unwind@005bc3e1(void);
void Unwind@005bc3e9(void);
void Unwind@005bc3f4(void);
void Unwind@005bc430(void);
void Unwind@005bc438(void);
void Unwind@005bc440(void);
void Unwind@005bc44b(void);
void Unwind@005bc480(void);
void Unwind@005bc488(void);
void Unwind@005bc4c0(void);
void Unwind@005bc4c8(void);
void Unwind@005bc4d0(void);
void Unwind@005bc4db(void);
void Unwind@005bc4e6(void);
void Unwind@005bc4ee(void);
void Unwind@005bc4f9(void);
void Unwind@005bc530(void);
void Unwind@005bc538(void);
void Unwind@005bc540(void);
void Unwind@005bc54b(void);
void Unwind@005bc556(void);
void Unwind@005bc55e(void);
void Unwind@005bc566(void);
void Unwind@005bc56e(void);
void Unwind@005bc579(void);
void Unwind@005bc5b0(void);
void Unwind@005bc5b8(void);
void Unwind@005bc5c0(void);
void Unwind@005bc5c8(void);
void Unwind@005bc600(void);
void Unwind@005bc60b(void);
void Unwind@005bc613(void);
void Unwind@005bc61e(void);
void Unwind@005bc626(void);
void Unwind@005bc631(void);
void Unwind@005bc639(void);
void Unwind@005bc644(void);
void Unwind@005bc64f(void);
void Unwind@005bc65a(void);
void Unwind@005bc690(void);
void Unwind@005bc698(void);
void Unwind@005bc6a0(void);
void Unwind@005bc6ab(void);
void Unwind@005bc6e0(void);
void Unwind@005bc6f9(void);
void Unwind@005bc701(void);
void Unwind@005bc709(void);
void Unwind@005bc711(void);
void Unwind@005bc719(void);
void Unwind@005bc721(void);
void Unwind@005bc729(void);
void Unwind@005bc731(void);
void Unwind@005bc739(void);
void Unwind@005bc741(void);
void Unwind@005bc749(void);
void Unwind@005bc751(void);
void Unwind@005bc759(void);
void Unwind@005bc761(void);
void Unwind@005bc769(void);
void Unwind@005bc771(void);
void Unwind@005bc779(void);
void Unwind@005bc781(void);
void Unwind@005bc789(void);
void Unwind@005bc791(void);
void Unwind@005bc7c0(void);
void Unwind@005bc7c8(void);
void Unwind@005bc7d0(void);
void Unwind@005bc7df(void);
void Unwind@005bc7e7(void);
void Unwind@005bc7ef(void);
void Unwind@005bc820(void);
void Unwind@005bc82b(void);
void Unwind@005bc833(void);
void Unwind@005bc83b(void);
void Unwind@005bc843(void);
void Unwind@005bc84b(void);
void Unwind@005bc856(void);
void Unwind@005bc861(void);
void Unwind@005bc86c(void);
void Unwind@005bc8a0(void);
void Unwind@005bc8a8(void);
void Unwind@005bc8b0(void);
void Unwind@005bc8b8(void);
void Unwind@005bc8c0(void);
void Unwind@005bc8f0(void);
void Unwind@005bc909(void);
void Unwind@005bc911(void);
void Unwind@005bc919(void);
void Unwind@005bc921(void);
void Unwind@005bc929(void);
void Unwind@005bc931(void);
void Unwind@005bc939(void);
void Unwind@005bc941(void);
void Unwind@005bc949(void);
void Unwind@005bc980(void);
void Unwind@005bc999(void);
void Unwind@005bc9a1(void);
void Unwind@005bc9a9(void);
void Unwind@005bc9b1(void);
void Unwind@005bc9b9(void);
void Unwind@005bc9c1(void);
void Unwind@005bc9c9(void);
void Unwind@005bc9d1(void);
void Unwind@005bc9d9(void);
void Unwind@005bc9e1(void);
void Unwind@005bc9e9(void);
void Unwind@005bc9f1(void);
void Unwind@005bc9f9(void);
void Unwind@005bca01(void);
void Unwind@005bca09(void);
void Unwind@005bca11(void);
void Unwind@005bca40(void);
void Unwind@005bca4b(void);
void Unwind@005bca56(void);
void Unwind@005bca5e(void);
void Unwind@005bca66(void);
void Unwind@005bca6e(void);
void Unwind@005bca76(void);
void Unwind@005bca81(void);
void Unwind@005bcac0(void);
void Unwind@005bcac8(void);
void Unwind@005bcad0(void);
void Unwind@005bcad8(void);
void Unwind@005bcb10(void);
void Unwind@005bcb18(void);
void Unwind@005bcb50(void);
void Unwind@005bcb58(void);
void Unwind@005bcb60(void);
void Unwind@005bcb68(void);
void Unwind@005bcba0(void);
void Unwind@005bcba8(void);
void Unwind@005bcbd0(void);
void Unwind@005bcbd8(void);
void Unwind@005bcc00(void);
void Unwind@005bcc08(void);
void Unwind@005bcc10(void);
void Unwind@005bcc18(void);
void Unwind@005bcc20(void);
void Unwind@005bcc50(void);
void Unwind@005bcc69(void);
void Unwind@005bcca0(void);
void Unwind@005bccb9(void);
void Unwind@005bccf0(void);
void Unwind@005bcd09(void);
void Unwind@005bcd22(void);
void Unwind@005bcd2a(void);
void Unwind@005bcd60(void);
void Unwind@005bcd79(void);
void Unwind@005bcd92(void);
void Unwind@005bcdc0(void);
void Unwind@005bcdf0(void);
void Unwind@005bcdf8(void);
void Unwind@005bce00(void);
void Unwind@005bce30(void);
void Unwind@005bce60(void);
void Unwind@005bce72(void);
void Unwind@005bcea0(void);
void Unwind@005bced0(void);
void Unwind@005bced8(void);
void Unwind@005bcf00(void);
void Unwind@005bcf08(void);
void Unwind@005bcf10(void);
void Unwind@005bcf22(void);
void Unwind@005bcf2a(void);
void Unwind@005bcf70(void);
void Unwind@005bcf78(void);
void Unwind@005bcf83(void);
void Unwind@005bcf8e(void);
void Unwind@005bcf99(void);
void Unwind@005bcfa4(void);
void Unwind@005bcfaf(void);
void Unwind@005bcfbd(void);
void Unwind@005bcff0(void);
void Unwind@005bcff8(void);
void Unwind@005bd007(void);
void Unwind@005bd00f(void);
void Unwind@005bd017(void);
void Unwind@005bd01f(void);
void Unwind@005bd027(void);
void Unwind@005bd02f(void);
void Unwind@005bd060(void);
void Unwind@005bd090(void);
void Unwind@005bd098(void);
void Unwind@005bd0a0(void);
void Unwind@005bd0a8(void);
void Unwind@005bd0b0(void);
void Unwind@005bd0b8(void);
void Unwind@005bd0c0(void);
void Unwind@005bd0c8(void);
void Unwind@005bd0d0(void);
void Unwind@005bd0d8(void);
void Unwind@005bd110(void);
void Unwind@005bd118(void);
void Unwind@005bd120(void);
void Unwind@005bd128(void);
void Unwind@005bd130(void);
void Unwind@005bd138(void);
void Unwind@005bd160(void);
void Unwind@005bd168(void);
void Unwind@005bd170(void);
void Unwind@005bd178(void);
void Unwind@005bd180(void);
void Unwind@005bd188(void);
void Unwind@005bd190(void);
void Unwind@005bd1c0(void);
void Unwind@005bd1c8(void);
void Unwind@005bd1d6(void);
void Unwind@005bd1e4(void);
void Unwind@005bd1ec(void);
void Unwind@005bd1f4(void);
void Unwind@005bd1fc(void);
void Unwind@005bd204(void);
void Unwind@005bd20c(void);
void Unwind@005bd214(void);
void Unwind@005bd21c(void);
void Unwind@005bd224(void);
void Unwind@005bd260(void);
void Unwind@005bd2f0(void);
void Unwind@005bd2f8(void);
void Unwind@005bd303(void);
void Unwind@005bd30b(void);
void Unwind@005bd313(void);
void Unwind@005bd31b(void);
void Unwind@005bd323(void);
void Unwind@005bd32b(void);
void Unwind@005bd350(void);
void Unwind@005bd358(void);
void Unwind@005bd360(void);
void Unwind@005bd368(void);
void Unwind@005bd370(void);
void Unwind@005bd378(void);
void Unwind@005bd380(void);
void Unwind@005bd388(void);
void Unwind@005bd390(void);
void Unwind@005bd398(void);
void Unwind@005bd3a0(void);
void Unwind@005bd3a8(void);
void Unwind@005bd3b0(void);
void Unwind@005bd3b8(void);
void Unwind@005bd3c0(void);
void Unwind@005bd3c8(void);
void Unwind@005bd3d0(void);
void Unwind@005bd3d8(void);
void Unwind@005bd400(void);
void Unwind@005bd430(void);
void Unwind@005bd470(void);
void Unwind@005bd4b0(void);
void Unwind@005bd4b8(void);
void Unwind@005bd4c0(void);
void Unwind@005bd4c8(void);
void Unwind@005bd4d0(void);
void Unwind@005bd4d8(void);
void Unwind@005bd510(void);
void Unwind@005bd550(void);
void Unwind@005bd590(void);
void Unwind@005bd598(void);
void Unwind@005bd5d0(void);
void Unwind@005bd600(void);
void Unwind@005bd608(void);
void Unwind@005bd613(void);
void Unwind@005bd61e(void);
void Unwind@005bd629(void);
void Unwind@005bd634(void);
void Unwind@005bd63f(void);
void Unwind@005bd64a(void);
void Unwind@005bd655(void);
void Unwind@005bd660(void);
void Unwind@005bd66b(void);
void Unwind@005bd676(void);
void Unwind@005bd684(void);
void Unwind@005bd692(void);
void Unwind@005bd6a0(void);
void Unwind@005bd6ae(void);
void Unwind@005bd6bc(void);
void Unwind@005bd6ca(void);
void Unwind@005bd6d8(void);
void Unwind@005bd6e6(void);
void Unwind@005bd6ee(void);
void Unwind@005bd6fd(void);
void Unwind@005bd705(void);
void Unwind@005bd713(void);
void Unwind@005bd721(void);
void Unwind@005bd72f(void);
void Unwind@005bd73d(void);
void Unwind@005bd74b(void);
void Unwind@005bd759(void);
void Unwind@005bd767(void);
void Unwind@005bd790(void);
void Unwind@005bd799(void);
void Unwind@005bd7c0(void);
void Unwind@005bd7c8(void);
void Unwind@005bd7d7(void);
void Unwind@005bd800(void);
void Unwind@005bd808(void);
void Unwind@005bd830(void);
void Unwind@005bd860(void);
void Unwind@005bd868(void);
void Unwind@005bd870(void);
void Unwind@005bd8a0(void);
void Unwind@005bd8a8(void);
void Unwind@005bd8d0(void);
void Unwind@005bd8d9(void);
void Unwind@005bd900(void);
void Unwind@005bd908(void);
void Unwind@005bd910(void);
void Unwind@005bd918(void);
void Unwind@005bd920(void);
void Unwind@005bd928(void);
void Unwind@005bd930(void);
void Unwind@005bd938(void);
void Unwind@005bd940(void);
void Unwind@005bd948(void);
void Unwind@005bd970(void);
void Unwind@005bd9a0(void);
void Unwind@005bd9a9(void);
void Unwind@005bd9b2(void);
void Unwind@005bd9bb(void);
void Unwind@005bd9e0(void);
void Unwind@005bd9e8(void);
void Unwind@005bd9f0(void);
void Unwind@005bd9f8(void);
void Unwind@005bda00(void);
void Unwind@005bda08(void);
void Unwind@005bda10(void);
void Unwind@005bda22(void);
void Unwind@005bda60(void);
void Unwind@005bda68(void);
void Unwind@005bda70(void);
void Unwind@005bda78(void);
void Unwind@005bda80(void);
void Unwind@005bda88(void);
void Unwind@005bda90(void);
void Unwind@005bdad0(void);
void Unwind@005bdad8(void);
void Unwind@005bdae0(void);
void Unwind@005bdae8(void);
void Unwind@005bdb02(void);
void Unwind@005bdb1c(void);
void Unwind@005bdb24(void);
void Unwind@005bdb2c(void);
void Unwind@005bdb34(void);
void Unwind@005bdb70(void);
void Unwind@005bdb78(void);
void Unwind@005bdb80(void);
void Unwind@005bdb88(void);
void Unwind@005bdb90(void);
void Unwind@005bdbaa(void);
void Unwind@005bdbc4(void);
void Unwind@005bdbde(void);
void Unwind@005bdbf8(void);
void Unwind@005bdc12(void);
void Unwind@005bdc2c(void);
void Unwind@005bdc37(void);
void Unwind@005bdc3f(void);
void Unwind@005bdc80(void);
void Unwind@005bdc9a(void);
void Unwind@005bdcb4(void);
void Unwind@005bdcce(void);
void Unwind@005bdce8(void);
void Unwind@005bdd02(void);
void Unwind@005bdd1c(void);
void Unwind@005bdd24(void);
void Unwind@005bdd2c(void);
void Unwind@005bdd50(void);
void Unwind@005bdd80(void);
void Unwind@005bdd88(void);
void Unwind@005bddc0(void);
void Unwind@005bddc8(void);
void Unwind@005bddd3(void);
void Unwind@005bddde(void);
void Unwind@005bdde9(void);
void Unwind@005bde20(void);
void Unwind@005bde39(void);
void Unwind@005bde41(void);
void Unwind@005bde49(void);
void Unwind@005bde51(void);
void Unwind@005bde59(void);
void Unwind@005bde61(void);
void Unwind@005bde69(void);
void Unwind@005bde71(void);
void Unwind@005bde79(void);
void Unwind@005bde81(void);
void Unwind@005bde89(void);
void Unwind@005bdea2(void);
void Unwind@005bdeaa(void);
void Unwind@005bdeb2(void);
void Unwind@005bdeba(void);
void Unwind@005bdec2(void);
void Unwind@005bdeca(void);
void Unwind@005bded2(void);
void Unwind@005bdeda(void);
void Unwind@005bdee2(void);
void Unwind@005bdeea(void);
void Unwind@005bdef2(void);
void Unwind@005bdefa(void);
void Unwind@005bdf02(void);
void Unwind@005bdf0a(void);
void Unwind@005bdf12(void);
void Unwind@005bdf1a(void);
void Unwind@005bdf22(void);
void Unwind@005bdf2a(void);
void Unwind@005bdf32(void);
void Unwind@005bdf3a(void);
void Unwind@005bdf42(void);
void Unwind@005bdf4a(void);
void Unwind@005bdf52(void);
void Unwind@005bdf5a(void);
void Unwind@005bdf62(void);
void Unwind@005bdf6a(void);
void Unwind@005bdf72(void);
void Unwind@005bdf7a(void);
void Unwind@005bdf82(void);
void Unwind@005bdf8a(void);
void Unwind@005bdf92(void);
void Unwind@005bdf9a(void);
void Unwind@005bdfd0(void);
void Unwind@005bdfdb(void);
void Unwind@005be030(void);
void Unwind@005be060(void);
void Unwind@005be090(void);
void Unwind@005be098(void);
void Unwind@005be0a0(void);
void Unwind@005be0a8(void);
void Unwind@005be0b0(void);
void Unwind@005be0b8(void);
void Unwind@005be0e0(void);
void Unwind@005be0e8(void);
void Unwind@005be0f0(void);
void Unwind@005be0f8(void);
void Unwind@005be101(void);
void Unwind@005be10a(void);
void Unwind@005be113(void);
void Unwind@005be11b(void);
void Unwind@005be123(void);
void Unwind@005be12b(void);
void Unwind@005be133(void);
void Unwind@005be13b(void);
void Unwind@005be143(void);
void Unwind@005be14b(void);
void Unwind@005be153(void);
void Unwind@005be15b(void);
void Unwind@005be163(void);
void Unwind@005be16b(void);
void Unwind@005be173(void);
void Unwind@005be17b(void);
void Unwind@005be183(void);
void Unwind@005be1b0(void);
void Unwind@005be1b8(void);
void Unwind@005be1c0(void);
void Unwind@005be1c8(void);
void Unwind@005be1d3(void);
void Unwind@005be1de(void);
void Unwind@005be1e9(void);
void Unwind@005be1f4(void);
void Unwind@005be1ff(void);
void Unwind@005be20d(void);
void Unwind@005be21b(void);
void Unwind@005be250(void);
void Unwind@005be258(void);
void Unwind@005be280(void);
void Unwind@005be2b0(void);
void Unwind@005be2bb(void);
void Unwind@005be2c3(void);
void Unwind@005be2e2(void);
void Unwind@005be2ea(void);
void Unwind@005be2f2(void);
void Unwind@005be311(void);
void Unwind@005be319(void);
void Unwind@005be321(void);
void Unwind@005be340(void);
void Unwind@005be348(void);
void Unwind@005be380(void);
void Unwind@005be38b(void);
void Unwind@005be396(void);
void Unwind@005be3a1(void);
void Unwind@005be3ac(void);
void Unwind@005be3b7(void);
void Unwind@005be3c2(void);
void Unwind@005be400(void);
void Unwind@005be408(void);
void Unwind@005be410(void);
void Unwind@005be418(void);
void Unwind@005be420(void);
void Unwind@005be428(void);
void Unwind@005be430(void);
void Unwind@005be438(void);
void Unwind@005be440(void);
void Unwind@005be448(void);
void Unwind@005be450(void);
void Unwind@005be458(void);
void Unwind@005be460(void);
void Unwind@005be46f(void);
void Unwind@005be47e(void);
void Unwind@005be4b0(void);
void Unwind@005be4e0(void);
void Unwind@005be4e8(void);
void Unwind@005be4f0(void);
void Unwind@005be4f8(void);
void Unwind@005be520(void);
void Unwind@005be528(void);
void Unwind@005be550(void);
void Unwind@005be558(void);
void Unwind@005be590(void);
void Unwind@005be598(void);
void Unwind@005be5a0(void);
void Unwind@005be5a8(void);
void Unwind@005be5b0(void);
void Unwind@005be5b8(void);
void Unwind@005be5c0(void);
void Unwind@005be5c8(void);
void Unwind@005be5d0(void);
void Unwind@005be5d8(void);
void Unwind@005be5e0(void);
void Unwind@005be5e8(void);
void Unwind@005be5f7(void);
void Unwind@005be5ff(void);
void Unwind@005be630(void);
void Unwind@005be638(void);
void Unwind@005be647(void);
void Unwind@005be64f(void);
void Unwind@005be680(void);
void Unwind@005be688(void);
void Unwind@005be690(void);
void Unwind@005be698(void);
void Unwind@005be6a0(void);
void Unwind@005be6a8(void);
void Unwind@005be6b7(void);
void Unwind@005be6bf(void);
void Unwind@005be6c7(void);
void Unwind@005be6cf(void);
void Unwind@005be6d7(void);
void Unwind@005be6df(void);
void Unwind@005be6e7(void);
void Unwind@005be6ef(void);
void Unwind@005be720(void);
void Unwind@005be728(void);
void Unwind@005be760(void);
void Unwind@005be768(void);
void Unwind@005be770(void);
void Unwind@005be778(void);
void Unwind@005be780(void);
void Unwind@005be7b0(void);
void Unwind@005be7b8(void);
void Unwind@005be7c0(void);
void Unwind@005be7c8(void);
void Unwind@005be7d0(void);
void Unwind@005be800(void);
void Unwind@005be808(void);
void Unwind@005be810(void);
void Unwind@005be818(void);
void Unwind@005be820(void);
void Unwind@005be850(void);
void Unwind@005be858(void);
void Unwind@005be860(void);
void Unwind@005be868(void);
void Unwind@005be870(void);
void Unwind@005be878(void);
void Unwind@005be880(void);
void Unwind@005be888(void);
void Unwind@005be890(void);
void Unwind@005be8c0(void);
void Unwind@005be8f0(void);
void Unwind@005be920(void);
void Unwind@005be928(void);
void Unwind@005be960(void);
void Unwind@005be990(void);
void Unwind@005be998(void);
void Unwind@005be9d0(void);
void Unwind@005bea00(void);
void Unwind@005bea08(void);
void Unwind@005bea40(void);
void Unwind@005bea48(void);
void Unwind@005bea50(void);
void Unwind@005bea80(void);
void Unwind@005bea88(void);
void Unwind@005bea93(void);
void Unwind@005bea9b(void);
void Unwind@005beaa3(void);
void Unwind@005beaae(void);
void Unwind@005beab6(void);
void Unwind@005beaf0(void);
void Unwind@005beaf8(void);
void Unwind@005beb00(void);
void Unwind@005beb30(void);
void Unwind@005beb49(void);
void Unwind@005beb80(void);
void Unwind@005beb88(void);
void Unwind@005bebc0(void);
void Unwind@005bebcf(void);
void Unwind@005bebde(void);
void Unwind@005bebed(void);
void Unwind@005bebfc(void);
void Unwind@005bec04(void);
void Unwind@005bec13(void);
void Unwind@005bec22(void);
void Unwind@005bec50(void);
void Unwind@005bec5f(void);
void Unwind@005bec6e(void);
void Unwind@005bec7d(void);
void Unwind@005bec8c(void);
void Unwind@005bec9b(void);
void Unwind@005beca3(void);
void Unwind@005bed00(void);
void Unwind@005bed08(void);
void Unwind@005bed30(void);
void Unwind@005bed38(void);
void Unwind@005bed40(void);
void Unwind@005bed48(void);
void Unwind@005bed50(void);
void Unwind@005bed58(void);
void Unwind@005bed60(void);
void Unwind@005bed68(void);
void Unwind@005beda0(void);
void Unwind@005beda8(void);
void Unwind@005bedd0(void);
void Unwind@005bedd8(void);
void Unwind@005bede0(void);
void Unwind@005bede8(void);
void Unwind@005bedf7(void);
void Unwind@005bee30(void);
void Unwind@005bee60(void);
void Unwind@005bee68(void);
void Unwind@005bee70(void);
void Unwind@005bee78(void);
void Unwind@005beeb0(void);
void Unwind@005beef0(void);
void Unwind@005bef20(void);
void Unwind@005bef28(void);
void Unwind@005bef60(void);
void Unwind@005bef68(void);
void Unwind@005befa0(void);
void Unwind@005befd0(void);
void Unwind@005befdb(void);
void Unwind@005befe6(void);
void Unwind@005befee(void);
void Unwind@005beff6(void);
void Unwind@005beffe(void);
void Unwind@005bf009(void);
void Unwind@005bf014(void);
void Unwind@005bf01f(void);
void Unwind@005bf034(void);
void Unwind@005bf046(void);
void Unwind@005bf04e(void);
void Unwind@005bf063(void);
void Unwind@005bf06b(void);
void Unwind@005bf076(void);
void Unwind@005bf088(void);
void Unwind@005bf0c0(void);
void Unwind@005bf100(void);
void Unwind@005bf108(void);
void Unwind@005bf140(void);
void Unwind@005bf148(void);
void Unwind@005bf150(void);
void Unwind@005bf158(void);
void Unwind@005bf190(void);
void Unwind@005bf198(void);
void Unwind@005bf1a0(void);
void Unwind@005bf1a8(void);
void Unwind@005bf1b0(void);
void Unwind@005bf1b8(void);
void Unwind@005bf1c0(void);
void Unwind@005bf1c8(void);
void Unwind@005bf200(void);
void Unwind@005bf230(void);
void Unwind@005bf238(void);
void Unwind@005bf240(void);
void Unwind@005bf248(void);
void Unwind@005bf250(void);
void Unwind@005bf25b(void);
void Unwind@005bf263(void);
void Unwind@005bf275(void);
void Unwind@005bf284(void);
void Unwind@005bf28c(void);
void Unwind@005bf297(void);
void Unwind@005bf2a6(void);
void Unwind@005bf2ae(void);
void Unwind@005bf2e0(void);
void Unwind@005bf2e8(void);
void Unwind@005bf2f0(void);
void Unwind@005bf2f8(void);
void Unwind@005bf300(void);
void Unwind@005bf308(void);
void Unwind@005bf310(void);
void Unwind@005bf318(void);
void Unwind@005bf350(void);
void Unwind@005bf358(void);
void Unwind@005bf360(void);
void Unwind@005bf368(void);
void Unwind@005bf370(void);
void Unwind@005bf37b(void);
void Unwind@005bf383(void);
void Unwind@005bf395(void);
void Unwind@005bf3a4(void);
void Unwind@005bf3ac(void);
void Unwind@005bf3b7(void);
void Unwind@005bf3c6(void);
void Unwind@005bf3ce(void);
void Unwind@005bf400(void);
void Unwind@005bf408(void);
void Unwind@005bf410(void);
void Unwind@005bf418(void);
void Unwind@005bf450(void);
void Unwind@005bf458(void);
void Unwind@005bf460(void);
void Unwind@005bf468(void);
void Unwind@005bf470(void);
void Unwind@005bf478(void);
void Unwind@005bf480(void);
void Unwind@005bf492(void);
void Unwind@005bf4a1(void);
void Unwind@005bf4a9(void);
void Unwind@005bf4b4(void);
void Unwind@005bf4c3(void);
void Unwind@005bf4cb(void);
void Unwind@005bf500(void);
void Unwind@005bf508(void);
void Unwind@005bf513(void);
void Unwind@005bf51b(void);
void Unwind@005bf523(void);
void Unwind@005bf52b(void);
void Unwind@005bf536(void);
void Unwind@005bf54b(void);
void Unwind@005bf556(void);
void Unwind@005bf561(void);
void Unwind@005bf5a0(void);
void Unwind@005bf5ab(void);
void Unwind@005bf5b6(void);
void Unwind@005bf5c1(void);
void Unwind@005bf5cc(void);
void Unwind@005bf5d7(void);
void Unwind@005bf5ed(void);
void Unwind@005bf5fb(void);
void Unwind@005bf609(void);
void Unwind@005bf617(void);
void Unwind@005bf625(void);
void Unwind@005bf633(void);
void Unwind@005bf641(void);
void Unwind@005bf64f(void);
void Unwind@005bf65d(void);
void Unwind@005bf66b(void);
void Unwind@005bf679(void);
void Unwind@005bf687(void);
void Unwind@005bf695(void);
void Unwind@005bf6e0(void);
void Unwind@005bf6e8(void);
void Unwind@005bf6f3(void);
void Unwind@005bf6fe(void);
void Unwind@005bf709(void);
void Unwind@005bf714(void);
void Unwind@005bf722(void);
void Unwind@005bf731(void);
void Unwind@005bf740(void);
void Unwind@005bf74e(void);
void Unwind@005bf75c(void);
void Unwind@005bf76a(void);
void Unwind@005bf7a0(void);
void Unwind@005bf7a8(void);
void Unwind@005bf7d0(void);
void Unwind@005bf7d8(void);
void Unwind@005bf810(void);
void Unwind@005bf818(void);
void Unwind@005bf840(void);
void Unwind@005bf870(void);
void Unwind@005bf878(void);
void Unwind@005bf880(void);
void Unwind@005bf888(void);
void Unwind@005bf8c0(void);
void Unwind@005bf8f0(void);
void Unwind@005bf8f8(void);
void Unwind@005bf920(void);
void Unwind@005bf928(void);
void Unwind@005bf950(void);
void Unwind@005bf958(void);
void Unwind@005bf980(void);
void Unwind@005bf988(void);
void Unwind@005bf991(void);
void Unwind@005bf9c0(void);
void Unwind@005bf9c8(void);
void Unwind@005bfa00(void);
void Unwind@005bfa08(void);
void Unwind@005bfa1a(void);
void Unwind@005bfa50(void);
void Unwind@005bfa58(void);
void Unwind@005bfa90(void);
void Unwind@005bfa98(void);
void Unwind@005bfad0(void);
void Unwind@005bfad8(void);
void Unwind@005bfb10(void);
void Unwind@005bfb18(void);
void Unwind@005bfb50(void);
void Unwind@005bfb58(void);
void Unwind@005bfb90(void);
void Unwind@005bfb98(void);
void Unwind@005bfbd0(void);
void Unwind@005bfbd8(void);
void Unwind@005bfbf2(void);
void Unwind@005bfc30(void);
void Unwind@005bfc38(void);
void Unwind@005bfc40(void);
void Unwind@005bfc48(void);
void Unwind@005bfc80(void);
void Unwind@005bfc88(void);
void Unwind@005bfcc0(void);
void Unwind@005bfcc8(void);
void Unwind@005bfcd1(void);
void Unwind@005bfd00(void);
void Unwind@005bfd08(void);
void Unwind@005bfd30(void);
void Unwind@005bfd38(void);
void Unwind@005bfd40(void);
void Unwind@005bfd70(void);
void Unwind@005bfd78(void);
void Unwind@005bfd80(void);
void Unwind@005bfd88(void);
void Unwind@005bfd90(void);
void Unwind@005bfdc0(void);
void Unwind@005bfdc8(void);
void Unwind@005bfdd0(void);
void Unwind@005bfe00(void);
void Unwind@005bfe0b(void);
void Unwind@005bfe2d(void);
void Unwind@005bfe35(void);
void Unwind@005bfe3d(void);
void Unwind@005bfe45(void);
void Unwind@005bfe4d(void);
void Unwind@005bfe55(void);
void Unwind@005bfe5d(void);
void Unwind@005bfe65(void);
void Unwind@005bfe6d(void);
void Unwind@005bfe8c(void);
void Unwind@005bfeab(void);
void Unwind@005bfeb3(void);
void Unwind@005bfebb(void);
void Unwind@005bfec3(void);
void Unwind@005bfecb(void);
void Unwind@005bfed3(void);
void Unwind@005bfedb(void);
void Unwind@005bfee3(void);
void Unwind@005bfeeb(void);
void Unwind@005bfef3(void);
void Unwind@005bfefb(void);
void Unwind@005bff03(void);
void Unwind@005bff40(void);
void Unwind@005bff70(void);
void Unwind@005bffb0(void);
void Unwind@005bffe0(void);
void Unwind@005bffe8(void);
void Unwind@005c0020(void);
void Unwind@005c0028(void);
void Unwind@005c0050(void);
void Unwind@005c0080(void);
void Unwind@005c0089(void);
void Unwind@005c0092(void);
void Unwind@005c009b(void);
void Unwind@005c00a4(void);
void Unwind@005c00ad(void);
void Unwind@005c00b5(void);
void Unwind@005c00bd(void);
void Unwind@005c00c6(void);
void Unwind@005c00ce(void);
void Unwind@005c0100(void);
void Unwind@005c0109(void);
void Unwind@005c0111(void);
void Unwind@005c0140(void);
void Unwind@005c0148(void);
void Unwind@005c0170(void);
void Unwind@005c01a0(void);
void Unwind@005c01a8(void);
void Unwind@005c01b0(void);
void Unwind@005c01b8(void);
void Unwind@005c01e0(void);
void Unwind@005c01e8(void);
void Unwind@005c01f0(void);
void Unwind@005c0220(void);
void Unwind@005c0228(void);
void Unwind@005c0230(void);
void Unwind@005c0260(void);
void Unwind@005c0268(void);
void Unwind@005c0270(void);
void Unwind@005c0278(void);
void Unwind@005c02a0(void);
void Unwind@005c02a8(void);
void Unwind@005c02b0(void);
void Unwind@005c02c2(void);
void Unwind@005c02d4(void);
void Unwind@005c02dc(void);
void Unwind@005c0310(void);
void Unwind@005c0340(void);
void Unwind@005c0370(void);
void Unwind@005c0382(void);
void Unwind@005c0394(void);
void Unwind@005c039c(void);
void Unwind@005c03ab(void);
void Unwind@005c03b3(void);
void Unwind@005c03e0(void);
void Unwind@005c03f2(void);
void Unwind@005c0420(void);
void Unwind@005c0432(void);
void Unwind@005c0444(void);
void Unwind@005c044c(void);
void Unwind@005c045b(void);
void Unwind@005c0463(void);
void Unwind@005c0490(void);
void Unwind@005c0498(void);
void Unwind@005c04d0(void);
void Unwind@005c0500(void);
void Unwind@005c0508(void);
void Unwind@005c0510(void);
void Unwind@005c0518(void);
void Unwind@005c0520(void);
void Unwind@005c0528(void);
void Unwind@005c0530(void);
void Unwind@005c0560(void);
void Unwind@005c0568(void);
void Unwind@005c0570(void);
void Unwind@005c0578(void);
void Unwind@005c0580(void);
void Unwind@005c05b0(void);
void Unwind@005c05b8(void);
void Unwind@005c05e0(void);
void Unwind@005c05e8(void);
void Unwind@005c05f0(void);
void Unwind@005c05f8(void);
void Unwind@005c0620(void);
void Unwind@005c0628(void);
void Unwind@005c0630(void);
void Unwind@005c0638(void);
void Unwind@005c0640(void);
void Unwind@005c0648(void);
void Unwind@005c0650(void);
void Unwind@005c0680(void);
void Unwind@005c0688(void);
void Unwind@005c0697(void);
void Unwind@005c069f(void);
void Unwind@005c06a7(void);
void Unwind@005c06b0(void);
void Unwind@005c06b9(void);
void Unwind@005c06c2(void);
void Unwind@005c06f0(void);
void Unwind@005c0720(void);
void Unwind@005c0728(void);
void Unwind@005c0730(void);
void Unwind@005c0738(void);
void Unwind@005c0770(void);
void Unwind@005c0778(void);
void Unwind@005c0780(void);
void Unwind@005c07b0(void);
void Unwind@005c07b8(void);
void Unwind@005c07c0(void);
void Unwind@005c07c8(void);
void Unwind@005c0800(void);
void Unwind@005c0809(void);
void Unwind@005c0812(void);
void Unwind@005c082c(void);
void Unwind@005c0834(void);
void Unwind@005c083c(void);
void Unwind@005c0844(void);
void Unwind@005c0880(void);
void Unwind@005c0889(void);
void Unwind@005c0892(void);
void Unwind@005c089b(void);
void Unwind@005c08a3(void);
void Unwind@005c08b2(void);
void Unwind@005c08ba(void);
void Unwind@005c08f0(void);
void Unwind@005c08f8(void);
void Unwind@005c0900(void);
void Unwind@005c0930(void);
void Unwind@005c0939(void);
void Unwind@005c0942(void);
void Unwind@005c0970(void);
void Unwind@005c0982(void);
void Unwind@005c0994(void);
void Unwind@005c09c0(void);
void Unwind@005c09d2(void);
void Unwind@005c0a00(void);
void Unwind@005c0a30(void);
void Unwind@005c0a42(void);
void Unwind@005c0a70(void);
void Unwind@005c0a78(void);
void Unwind@005c0ab0(void);
void Unwind@005c0ab8(void);
void Unwind@005c0ac0(void);
void Unwind@005c0ac8(void);
void Unwind@005c0b00(void);
void Unwind@005c0b50(void);
void Unwind@005c0b59(void);
void Unwind@005c0b62(void);
void Unwind@005c0b6b(void);
void Unwind@005c0b74(void);
void Unwind@005c0ba0(void);
void Unwind@005c0ba8(void);
void Unwind@005c0bb0(void);
void Unwind@005c0bb8(void);
void Unwind@005c0bc0(void);
void Unwind@005c0bc8(void);
void Unwind@005c0bd0(void);
void Unwind@005c0bd8(void);
void Unwind@005c0c10(void);
void Unwind@005c0c18(void);
void Unwind@005c0c20(void);
void Unwind@005c0c28(void);
void Unwind@005c0c30(void);
void Unwind@005c0c60(void);
void Unwind@005c0c68(void);
void Unwind@005c0c70(void);
void Unwind@005c0c78(void);
void Unwind@005c0c80(void);
void Unwind@005c0cb0(void);
void Unwind@005c0cb8(void);
void Unwind@005c0cf0(void);
void Unwind@005c0cf8(void);
void Unwind@005c0d11(void);
void Unwind@005c0d40(void);
void Unwind@005c0d48(void);
void Unwind@005c0d50(void);
void Unwind@005c0d58(void);
void Unwind@005c0d60(void);
void Unwind@005c0d68(void);
void Unwind@005c0d70(void);
void Unwind@005c0d78(void);
void Unwind@005c0d80(void);
void Unwind@005c0d88(void);
void Unwind@005c0dc0(void);
void Unwind@005c0dc8(void);
void Unwind@005c0dd0(void);
void Unwind@005c0dd8(void);
void Unwind@005c0de0(void);
void Unwind@005c0de8(void);
void Unwind@005c0df0(void);
void Unwind@005c0df8(void);
void Unwind@005c0e00(void);
void Unwind@005c0e08(void);
void Unwind@005c0e10(void);
void Unwind@005c0e18(void);
void Unwind@005c0e20(void);
void Unwind@005c0e50(void);
void Unwind@005c0e58(void);
void Unwind@005c0e60(void);
void Unwind@005c0e68(void);
void Unwind@005c0ea0(void);
void Unwind@005c0ea8(void);
void Unwind@005c0eb0(void);
void Unwind@005c0eb8(void);
void Unwind@005c0ec0(void);
void Unwind@005c0ec8(void);
void Unwind@005c0ed0(void);
void Unwind@005c0ed8(void);
void Unwind@005c0ee0(void);
void Unwind@005c0ee8(void);
void Unwind@005c0ef0(void);
void Unwind@005c0f20(void);
void Unwind@005c0f28(void);
void Unwind@005c0f30(void);
void Unwind@005c0f38(void);
void Unwind@005c0f40(void);
void Unwind@005c0f48(void);
void Unwind@005c0f50(void);
void Unwind@005c0f58(void);
void Unwind@005c0f60(void);
void Unwind@005c0fa0(void);
void Unwind@005c0fa8(void);
void Unwind@005c0fb0(void);
void Unwind@005c0fb8(void);
void Unwind@005c0fc0(void);
void Unwind@005c0fc8(void);
void Unwind@005c0fd0(void);
void Unwind@005c0fe9(void);
void Unwind@005c1020(void);
void Unwind@005c1028(void);
void Unwind@005c1030(void);
void Unwind@005c1038(void);
void Unwind@005c1040(void);
void Unwind@005c1070(void);
void Unwind@005c1078(void);
void Unwind@005c1080(void);
void Unwind@005c1088(void);
void Unwind@005c1090(void);
void Unwind@005c1098(void);
void Unwind@005c10a0(void);
void Unwind@005c10a8(void);
void Unwind@005c10b0(void);
void Unwind@005c10b8(void);
void Unwind@005c10c0(void);
void Unwind@005c10c8(void);
void Unwind@005c10d0(void);
void Unwind@005c1100(void);
void Unwind@005c1108(void);
void Unwind@005c1110(void);
void Unwind@005c1118(void);
void Unwind@005c1120(void);
void Unwind@005c1128(void);
void Unwind@005c1130(void);
void Unwind@005c1138(void);
void Unwind@005c1140(void);
void Unwind@005c1170(void);
void Unwind@005c1178(void);
void Unwind@005c1180(void);
void Unwind@005c1188(void);
void Unwind@005c1190(void);
void Unwind@005c1198(void);
void Unwind@005c11d0(void);
void Unwind@005c11d8(void);
void Unwind@005c11e0(void);
void Unwind@005c1210(void);
void Unwind@005c1218(void);
void Unwind@005c1220(void);
void Unwind@005c1228(void);
void Unwind@005c1230(void);
void Unwind@005c1260(void);
void Unwind@005c1268(void);
void Unwind@005c1270(void);
void Unwind@005c1278(void);
void Unwind@005c1280(void);
void Unwind@005c1288(void);
void Unwind@005c12c0(void);
void Unwind@005c12c8(void);
void Unwind@005c12d0(void);
void Unwind@005c12d8(void);
void Unwind@005c1310(void);
void Unwind@005c1318(void);
void Unwind@005c1320(void);
void Unwind@005c1350(void);
void Unwind@005c1358(void);
void Unwind@005c1360(void);
void Unwind@005c1390(void);
void Unwind@005c1398(void);
void Unwind@005c13a0(void);
void Unwind@005c13d0(void);
void Unwind@005c13d8(void);
void Unwind@005c13e0(void);
void Unwind@005c1410(void);
void Unwind@005c1418(void);
void Unwind@005c1420(void);
void Unwind@005c1428(void);
void Unwind@005c1430(void);
void Unwind@005c1438(void);
void Unwind@005c1440(void);
void Unwind@005c1448(void);
void Unwind@005c1480(void);
void Unwind@005c1488(void);
void Unwind@005c1490(void);
void Unwind@005c1498(void);
void Unwind@005c14a0(void);
void Unwind@005c14a8(void);
void Unwind@005c14b0(void);
void Unwind@005c14b8(void);
void Unwind@005c14c0(void);
void Unwind@005c14c8(void);
void Unwind@005c1500(void);
void Unwind@005c1508(void);
void Unwind@005c1510(void);
void Unwind@005c1518(void);
void Unwind@005c1520(void);
void Unwind@005c1550(void);
void Unwind@005c1558(void);
void Unwind@005c1590(void);
void Unwind@005c1598(void);
void Unwind@005c15a0(void);
void Unwind@005c15a8(void);
void Unwind@005c15b0(void);
void Unwind@005c15b8(void);
void Unwind@005c15c0(void);
void Unwind@005c15c8(void);
void Unwind@005c15d0(void);
void Unwind@005c1600(void);
void Unwind@005c1608(void);
void Unwind@005c1610(void);
void Unwind@005c1618(void);
void Unwind@005c1620(void);
void Unwind@005c1650(void);
void Unwind@005c1658(void);
void Unwind@005c1663(void);
void Unwind@005c166e(void);
void Unwind@005c1679(void);
void Unwind@005c1684(void);
void Unwind@005c168c(void);
void Unwind@005c1694(void);
void Unwind@005c169c(void);
void Unwind@005c16a4(void);
void Unwind@005c16ac(void);
void Unwind@005c16b4(void);
void Unwind@005c16c0(void);
void Unwind@005c16cc(void);
void Unwind@005c16d4(void);
void Unwind@005c16dc(void);
void Unwind@005c16e4(void);
void Unwind@005c16ec(void);
void Unwind@005c16f7(void);
void Unwind@005c16ff(void);
void Unwind@005c1707(void);
void Unwind@005c1712(void);
void Unwind@005c171d(void);
void Unwind@005c1728(void);
void Unwind@005c1733(void);
void Unwind@005c173f(void);
void Unwind@005c174b(void);
void Unwind@005c1756(void);
void Unwind@005c1761(void);
void Unwind@005c176c(void);
void Unwind@005c1774(void);
void Unwind@005c177c(void);
void Unwind@005c1784(void);
void Unwind@005c178f(void);
void Unwind@005c1797(void);
void Unwind@005c179f(void);
void Unwind@005c17a7(void);
void Unwind@005c17b3(void);
void Unwind@005c17bf(void);
void Unwind@005c17c7(void);
void Unwind@005c17cf(void);
void Unwind@005c17d7(void);
void Unwind@005c17df(void);
void Unwind@005c17ea(void);
void Unwind@005c17f2(void);
void Unwind@005c17fa(void);
void Unwind@005c1802(void);
void Unwind@005c180a(void);
void Unwind@005c1816(void);
void Unwind@005c1822(void);
void Unwind@005c1860(void);
void Unwind@005c1868(void);
void Unwind@005c1870(void);
void Unwind@005c187b(void);
void Unwind@005c1886(void);
void Unwind@005c1891(void);
void Unwind@005c1899(void);
void Unwind@005c18a1(void);
void Unwind@005c18ac(void);
void Unwind@005c18b4(void);
void Unwind@005c18d6(void);
void Unwind@005c18de(void);
void Unwind@005c18e9(void);
void Unwind@005c18f4(void);
void Unwind@005c18ff(void);
void Unwind@005c190a(void);
void Unwind@005c1912(void);
void Unwind@005c191a(void);
void Unwind@005c1922(void);
void Unwind@005c192a(void);
void Unwind@005c1932(void);
void Unwind@005c193a(void);
void Unwind@005c1942(void);
void Unwind@005c194e(void);
void Unwind@005c195a(void);
void Unwind@005c1962(void);
void Unwind@005c196a(void);
void Unwind@005c1972(void);
void Unwind@005c197a(void);
void Unwind@005c1982(void);
void Unwind@005c198a(void);
void Unwind@005c1992(void);
void Unwind@005c199a(void);
void Unwind@005c19a2(void);
void Unwind@005c19ae(void);
void Unwind@005c19ba(void);
void Unwind@005c19f0(void);
void Unwind@005c1a20(void);
void Unwind@005c1a28(void);
void Unwind@005c1a30(void);
void Unwind@005c1a38(void);
void Unwind@005c1a40(void);
void Unwind@005c1a48(void);
void Unwind@005c1a50(void);
void Unwind@005c1a58(void);
void Unwind@005c1a60(void);
void Unwind@005c1a90(void);
void Unwind@005c1ad0(void);
void Unwind@005c1ad8(void);
void Unwind@005c1ae0(void);
void Unwind@005c1ae8(void);
void Unwind@005c1af0(void);
void Unwind@005c1af8(void);
void Unwind@005c1b00(void);
void Unwind@005c1b08(void);
void Unwind@005c1b10(void);
void Unwind@005c1b18(void);
void Unwind@005c1b20(void);
void Unwind@005c1b28(void);
void Unwind@005c1b30(void);
void Unwind@005c1b38(void);
void Unwind@005c1b40(void);
void Unwind@005c1b48(void);
void Unwind@005c1b50(void);
void Unwind@005c1b58(void);
void Unwind@005c1b90(void);
void Unwind@005c1bd0(void);
void Unwind@005c1bea(void);
void Unwind@005c1bf2(void);
void Unwind@005c1bfb(void);
void Unwind@005c1c04(void);
void Unwind@005c1c0d(void);
void Unwind@005c1c15(void);
void Unwind@005c1c50(void);
void Unwind@005c1c69(void);
void Unwind@005c1c71(void);
void Unwind@005c1c7a(void);
void Unwind@005c1c82(void);
void Unwind@005c1c8a(void);
void Unwind@005c1c92(void);
void Unwind@005c1c9a(void);
void Unwind@005c1ca2(void);
void Unwind@005c1caa(void);
void Unwind@005c1cb3(void);
void Unwind@005c1cbc(void);
void Unwind@005c1cc4(void);
void Unwind@005c1ccc(void);
void Unwind@005c1cd5(void);
void Unwind@005c1cde(void);
void Unwind@005c1d10(void);
void Unwind@005c1d18(void);
void Unwind@005c1d20(void);
void Unwind@005c1d28(void);
void Unwind@005c1d30(void);
void Unwind@005c1d38(void);
void Unwind@005c1d40(void);
void Unwind@005c1d48(void);
void Unwind@005c1d50(void);
void Unwind@005c1d58(void);
void Unwind@005c1d60(void);
void Unwind@005c1d90(void);
void Unwind@005c1d99(void);
void Unwind@005c1da2(void);
void Unwind@005c1dab(void);
void Unwind@005c1dd0(void);
void Unwind@005c1dd9(void);
void Unwind@005c1e00(void);
void Unwind@005c1e08(void);
void Unwind@005c1e10(void);
void Unwind@005c1e18(void);
void Unwind@005c1e20(void);
void Unwind@005c1e50(void);
void Unwind@005c1e58(void);
void Unwind@005c1e80(void);
void Unwind@005c1e88(void);
void Unwind@005c1e90(void);
void Unwind@005c1ec0(void);
void Unwind@005c1ec9(void);
void Unwind@005c1ed2(void);
void Unwind@005c1f00(void);
void Unwind@005c1f09(void);
void Unwind@005c1f30(void);
void Unwind@005c1f60(void);
void Unwind@005c1f69(void);
void Unwind@005c1f90(void);
void Unwind@005c1f99(void);
void Unwind@005c1fa2(void);
void Unwind@005c1fab(void);
void Unwind@005c1fd0(void);
void Unwind@005c1fd8(void);
void Unwind@005c1fe0(void);
void Unwind@005c1fe9(void);
void Unwind@005c2010(void);
void Unwind@005c202a(void);
void Unwind@005c2044(void);
void Unwind@005c2070(void);
void Unwind@005c2078(void);
void Unwind@005c2081(void);
void Unwind@005c20b0(void);
void Unwind@005c20b9(void);
void Unwind@005c20e0(void);
void Unwind@005c20e9(void);
void Unwind@005c20f2(void);
void Unwind@005c2120(void);
void Unwind@005c2129(void);
void Unwind@005c2132(void);
void Unwind@005c213a(void);
void Unwind@005c2142(void);
void Unwind@005c214a(void);
void Unwind@005c2152(void);
void Unwind@005c215a(void);
void Unwind@005c2190(void);
void Unwind@005c21aa(void);
void Unwind@005c21c4(void);
void Unwind@005c21f0(void);
void Unwind@005c21f9(void);
void Unwind@005c2202(void);
void Unwind@005c220a(void);
void Unwind@005c2219(void);
void Unwind@005c2221(void);
void Unwind@005c2229(void);
void Unwind@005c2231(void);
void Unwind@005c2239(void);
void Unwind@005c2241(void);
void Unwind@005c2249(void);
void Unwind@005c2258(void);
void Unwind@005c2260(void);
void Unwind@005c2268(void);
void Unwind@005c2270(void);
void Unwind@005c2278(void);
void Unwind@005c2280(void);
void Unwind@005c2288(void);
void Unwind@005c2290(void);
void Unwind@005c2298(void);
void Unwind@005c22a7(void);
void Unwind@005c22af(void);
void Unwind@005c22b7(void);
void Unwind@005c22bf(void);
void Unwind@005c22c7(void);
void Unwind@005c22cf(void);
void Unwind@005c22d7(void);
void Unwind@005c22df(void);
void Unwind@005c2310(void);
void Unwind@005c2318(void);
void Unwind@005c2350(void);
void Unwind@005c236a(void);
void Unwind@005c2384(void);
void Unwind@005c239e(void);
void Unwind@005c23e0(void);
void Unwind@005c23e8(void);
void Unwind@005c23f0(void);
void Unwind@005c23f8(void);
void Unwind@005c2400(void);
void Unwind@005c2409(void);
void Unwind@005c2412(void);
void Unwind@005c241a(void);
void Unwind@005c2434(void);
void Unwind@005c244e(void);
void Unwind@005c2456(void);
void Unwind@005c245e(void);
void Unwind@005c2490(void);
void Unwind@005c2499(void);
void Unwind@005c24b3(void);
void Unwind@005c24cd(void);
void Unwind@005c2500(void);
void Unwind@005c2530(void);
void Unwind@005c253b(void);
void Unwind@005c2546(void);
void Unwind@005c2554(void);
void Unwind@005c2562(void);
void Unwind@005c2570(void);
void Unwind@005c257e(void);
void Unwind@005c25b0(void);
void Unwind@005c25bf(void);
void Unwind@005c25ce(void);
void Unwind@005c25dd(void);
void Unwind@005c25ec(void);
void Unwind@005c25fb(void);
void Unwind@005c260a(void);
void Unwind@005c2619(void);
void Unwind@005c2628(void);
void Unwind@005c2637(void);
void Unwind@005c2646(void);
void Unwind@005c2655(void);
void Unwind@005c2680(void);
void Unwind@005c2688(void);
void Unwind@005c2690(void);
void Unwind@005c2698(void);
void Unwind@005c26a0(void);
void Unwind@005c26a8(void);
void Unwind@005c26b0(void);
void Unwind@005c26b8(void);
void Unwind@005c26c0(void);
void Unwind@005c26f0(void);
void Unwind@005c2720(void);
void Unwind@005c2729(void);
void Unwind@005c2732(void);
void Unwind@005c274c(void);
void Unwind@005c2766(void);
void Unwind@005c2780(void);
void Unwind@005c279a(void);
void Unwind@005c27c0(void);
void Unwind@005c27da(void);
void Unwind@005c2810(void);
void Unwind@005c2819(void);
void Unwind@005c2822(void);
void Unwind@005c282b(void);
void Unwind@005c2834(void);
void Unwind@005c283d(void);
void Unwind@005c2870(void);
void Unwind@005c2879(void);
void Unwind@005c2882(void);
void Unwind@005c289c(void);
void Unwind@005c28b6(void);
void Unwind@005c28be(void);
void Unwind@005c28c6(void);
void Unwind@005c28ce(void);
void Unwind@005c28d6(void);
void Unwind@005c28de(void);
void Unwind@005c2910(void);
void Unwind@005c2918(void);
void Unwind@005c2920(void);
void Unwind@005c2928(void);
void Unwind@005c2930(void);
void Unwind@005c2938(void);
void Unwind@005c2970(void);
void Unwind@005c2979(void);
void Unwind@005c2981(void);
void Unwind@005c298a(void);
void Unwind@005c2993(void);
void Unwind@005c299b(void);
void Unwind@005c29a4(void);
void Unwind@005c29ad(void);
void Unwind@005c29b5(void);
void Unwind@005c29bd(void);
void Unwind@005c29d7(void);
void Unwind@005c29f1(void);
void Unwind@005c2a0b(void);
void Unwind@005c2a14(void);
void Unwind@005c2a2e(void);
void Unwind@005c2a48(void);
void Unwind@005c2a51(void);
void Unwind@005c2a5a(void);
void Unwind@005c2aa0(void);
void Unwind@005c2aba(void);
void Unwind@005c2ad4(void);
void Unwind@005c2add(void);
void Unwind@005c2ae6(void);
void Unwind@005c2aef(void);
void Unwind@005c2af8(void);
void Unwind@005c2b01(void);
void Unwind@005c2b0a(void);
void Unwind@005c2b24(void);
void Unwind@005c2b3e(void);
void Unwind@005c2b70(void);
void Unwind@005c2ba0(void);
void Unwind@005c2bb9(void);
void Unwind@005c2bf0(void);
void Unwind@005c2bf8(void);
void Unwind@005c2c30(void);
void Unwind@005c2c38(void);
void Unwind@005c2c70(void);
void Unwind@005c2c78(void);
void Unwind@005c2cb0(void);
void Unwind@005c2cb8(void);
void Unwind@005c2cc0(void);
void Unwind@005c2cc8(void);
void Unwind@005c2cd0(void);
void Unwind@005c2cd8(void);
void Unwind@005c2ce0(void);
void Unwind@005c2ce8(void);
void Unwind@005c2cf0(void);
void Unwind@005c2cf8(void);
void Unwind@005c2d00(void);
void Unwind@005c2d08(void);
void Unwind@005c2d10(void);
void Unwind@005c2d18(void);
void Unwind@005c2d20(void);
void Unwind@005c2d28(void);
void Unwind@005c2d30(void);
void Unwind@005c2d38(void);
void Unwind@005c2d40(void);
void Unwind@005c2d48(void);
void Unwind@005c2d50(void);
void Unwind@005c2d58(void);
void Unwind@005c2d6a(void);
void Unwind@005c2d72(void);
void Unwind@005c2d7a(void);
void Unwind@005c2d85(void);
void Unwind@005c2dc0(void);
void Unwind@005c2dcb(void);
void Unwind@005c2dd6(void);
void Unwind@005c2de1(void);
void Unwind@005c2def(void);
void Unwind@005c2dfd(void);
void Unwind@005c2e0b(void);
void Unwind@005c2e19(void);
void Unwind@005c2e27(void);
void Unwind@005c2e60(void);
void Unwind@005c2e79(void);
void Unwind@005c2eb0(void);
void Unwind@005c2eb9(void);
void Unwind@005c2ee0(void);
void Unwind@005c2ee8(void);
void Unwind@005c2ef0(void);
void Unwind@005c2f09(void);
void Unwind@005c2f50(void);
void Unwind@005c2f58(void);
void Unwind@005c2fa0(void);
void Unwind@005c2fab(void);
void Unwind@005c2fb6(void);
void Unwind@005c2fc1(void);
void Unwind@005c2fcd(void);
void Unwind@005c2fd8(void);
void Unwind@005c2fe6(void);
void Unwind@005c2ff4(void);
void Unwind@005c3002(void);
void Unwind@005c3011(void);
void Unwind@005c3020(void);
void Unwind@005c302f(void);
void Unwind@005c303d(void);
void Unwind@005c304c(void);
void Unwind@005c305a(void);
void Unwind@005c3068(void);
void Unwind@005c3076(void);
void Unwind@005c3084(void);
void Unwind@005c3092(void);
void Unwind@005c30a0(void);
void Unwind@005c30ae(void);
void Unwind@005c30bc(void);
void Unwind@005c30cb(void);
void Unwind@005c30d9(void);
void Unwind@005c30e7(void);
void Unwind@005c30f6(void);
void Unwind@005c3104(void);
void Unwind@005c3150(void);
void Unwind@005c3162(void);
void Unwind@005c3190(void);
void Unwind@005c3198(void);
void Unwind@005c31f0(void);
void Unwind@005c31f9(void);
void Unwind@005c3202(void);
void Unwind@005c320b(void);
void Unwind@005c3230(void);
void Unwind@005c3260(void);
void Unwind@005c3268(void);
void Unwind@005c3277(void);
void Unwind@005c327f(void);
void Unwind@005c3287(void);
void Unwind@005c3290(void);
void Unwind@005c3298(void);
void Unwind@005c32c0(void);
void Unwind@005c32c8(void);
void Unwind@005c3300(void);
void Unwind@005c3309(void);
void Unwind@005c3330(void);
void Unwind@005c3338(void);
void Unwind@005c3340(void);
void Unwind@005c3348(void);
void Unwind@005c3380(void);
void Unwind@005c3389(void);
void Unwind@005c3392(void);
void Unwind@005c339a(void);
void Unwind@005c33a2(void);
void Unwind@005c33aa(void);
void Unwind@005c33e0(void);
void Unwind@005c3420(void);
void Unwind@005c342c(void);
void Unwind@005c3438(void);
void Unwind@005c344a(void);
void Unwind@005c3452(void);
void Unwind@005c345a(void);
void Unwind@005c3462(void);
void Unwind@005c346a(void);
void Unwind@005c3472(void);
void Unwind@005c347a(void);
void Unwind@005c3486(void);
void Unwind@005c34a3(void);
void Unwind@005c34c0(void);
void Unwind@005c34cc(void);
void Unwind@005c34d8(void);
void Unwind@005c34f5(void);
void Unwind@005c3512(void);
void Unwind@005c352f(void);
void Unwind@005c3549(void);
void Unwind@005c3555(void);
void Unwind@005c3561(void);
void Unwind@005c356a(void);
void Unwind@005c357c(void);
void Unwind@005c3584(void);
void Unwind@005c358f(void);
void Unwind@005c3597(void);
void Unwind@005c35a3(void);
void Unwind@005c35af(void);
void Unwind@005c35b7(void);
void Unwind@005c35bf(void);
void Unwind@005c35ca(void);
void Unwind@005c35d2(void);
void Unwind@005c35da(void);
void Unwind@005c35e2(void);
void Unwind@005c35ea(void);
void Unwind@005c35f2(void);
void Unwind@005c35fa(void);
void Unwind@005c3602(void);
void Unwind@005c360d(void);
void Unwind@005c3615(void);
void Unwind@005c361e(void);
void Unwind@005c362a(void);
void Unwind@005c3670(void);
void Unwind@005c3678(void);
void Unwind@005c36a0(void);
void Unwind@005c36b2(void);
void Unwind@005c36ba(void);
void Unwind@005c36e0(void);
void Unwind@005c36e8(void);
void Unwind@005c36f0(void);
void Unwind@005c36f8(void);
void Unwind@005c3730(void);
void Unwind@005c3749(void);
void Unwind@005c3751(void);
void Unwind@005c3759(void);
void Unwind@005c3761(void);
void Unwind@005c3769(void);
void Unwind@005c3771(void);
void Unwind@005c3779(void);
void Unwind@005c3781(void);
void Unwind@005c3789(void);
void Unwind@005c3791(void);
void Unwind@005c3799(void);
void Unwind@005c37a1(void);
void Unwind@005c37a9(void);
void Unwind@005c37b1(void);
void Unwind@005c37b9(void);
void Unwind@005c37c1(void);
void Unwind@005c37c9(void);
void Unwind@005c37d1(void);
void Unwind@005c37d9(void);
void Unwind@005c37e1(void);
void Unwind@005c37e9(void);
void Unwind@005c3820(void);
void Unwind@005c3832(void);
void Unwind@005c383a(void);
void Unwind@005c3849(void);
void Unwind@005c385b(void);
void Unwind@005c3890(void);
void Unwind@005c38a2(void);
void Unwind@005c38aa(void);
void Unwind@005c38b9(void);
void Unwind@005c38c1(void);
void Unwind@005c38d0(void);
void Unwind@005c38d8(void);
void Unwind@005c38e0(void);
void Unwind@005c3910(void);
void Unwind@005c3940(void);
void Unwind@005c3970(void);
void Unwind@005c3978(void);
void Unwind@005c3980(void);
void Unwind@005c39b0(void);
void Unwind@005c39e0(void);
void Unwind@005c3a10(void);
void Unwind@005c3a40(void);
void Unwind@005c3a49(void);
void Unwind@005c3a52(void);
void Unwind@005c3a5b(void);
void Unwind@005c3a63(void);
void Unwind@005c3a6b(void);
void Unwind@005c3a73(void);
void Unwind@005c3a7b(void);
void Unwind@005c3a83(void);
void Unwind@005c3a8b(void);
void Unwind@005c3a93(void);
void Unwind@005c3a9b(void);
void Unwind@005c3aa3(void);
void Unwind@005c3ad0(void);
void Unwind@005c3ad8(void);
void Unwind@005c3ae0(void);
void Unwind@005c3ae8(void);
void Unwind@005c3af0(void);
void Unwind@005c3af8(void);
void Unwind@005c3b00(void);
void Unwind@005c3b08(void);
void Unwind@005c3b10(void);
void Unwind@005c3b18(void);
void Unwind@005c3b20(void);
void Unwind@005c3b28(void);
void Unwind@005c3b30(void);
void Unwind@005c3b38(void);
void Unwind@005c3b40(void);
void Unwind@005c3b49(void);
void Unwind@005c3b52(void);
void Unwind@005c3b5b(void);
void Unwind@005c3b64(void);
void Unwind@005c3b6c(void);
void Unwind@005c3b74(void);
void Unwind@005c3b7c(void);
void Unwind@005c3b84(void);
void Unwind@005c3b8c(void);
void Unwind@005c3b94(void);
void Unwind@005c3b9d(void);
void Unwind@005c3ba6(void);
void Unwind@005c3bae(void);
void Unwind@005c3be0(void);
void Unwind@005c3be9(void);
void Unwind@005c3c03(void);
void Unwind@005c3c1d(void);
void Unwind@005c3c37(void);
void Unwind@005c3c40(void);
void Unwind@005c3c48(void);
void Unwind@005c3c50(void);
void Unwind@005c3c58(void);
void Unwind@005c3c60(void);
void Unwind@005c3c68(void);
void Unwind@005c3c71(void);
void Unwind@005c3c7a(void);
void Unwind@005c3c82(void);
void Unwind@005c3c8a(void);
void Unwind@005c3cc0(void);
void Unwind@005c3cf0(void);
void Unwind@005c3cf9(void);
void Unwind@005c3d20(void);
void Unwind@005c3d28(void);
void Unwind@005c3d30(void);
void Unwind@005c3d60(void);
void Unwind@005c3d90(void);
void Unwind@005c3d99(void);
void Unwind@005c3da2(void);
void Unwind@005c3dd0(void);
void Unwind@005c3e00(void);
void Unwind@005c3e09(void);
void Unwind@005c3e12(void);
void Unwind@005c3e40(void);
void Unwind@005c3e70(void);
void Unwind@005c3e78(void);
void Unwind@005c3eb0(void);
void Unwind@005c3ee0(void);
void Unwind@005c3ef2(void);
void Unwind@005c3f20(void);
void Unwind@005c3f28(void);
void Unwind@005c3f30(void);
void Unwind@005c3f39(void);
void Unwind@005c3f45(void);
void Unwind@005c3f4e(void);
void Unwind@005c3f80(void);
void Unwind@005c3fb0(void);
void Unwind@005c3fb9(void);
void Unwind@005c3fc2(void);
void Unwind@005c4000(void);
void Unwind@005c4009(void);
void Unwind@005c4030(void);
void Unwind@005c4038(void);
void Unwind@005c4070(void);
void Unwind@005c4078(void);
void Unwind@005c40a0(void);
void Unwind@005c40a9(void);
void Unwind@005c40d0(void);
void Unwind@005c40d8(void);
void Unwind@005c40e3(void);
void Unwind@005c40ee(void);
void Unwind@005c40f9(void);
void Unwind@005c4104(void);
void Unwind@005c410f(void);
void Unwind@005c411d(void);
void Unwind@005c4150(void);
void Unwind@005c4158(void);
void Unwind@005c4160(void);
void Unwind@005c4168(void);
void Unwind@005c41a0(void);
void Unwind@005c41a8(void);
void Unwind@005c41b1(void);
void Unwind@005c41ba(void);
void Unwind@005c41f0(void);
void Unwind@005c41f8(void);
void Unwind@005c4200(void);
void Unwind@005c4208(void);
void Unwind@005c4230(void);
void Unwind@005c4238(void);
void Unwind@005c4243(void);
void Unwind@005c424b(void);
void Unwind@005c4280(void);
void Unwind@005c42b0(void);
void Unwind@005c42e0(void);
void Unwind@005c42e8(void);
void Unwind@005c42f0(void);
void Unwind@005c4302(void);
void Unwind@005c4330(void);
void Unwind@005c4338(void);
void Unwind@005c4340(void);
void Unwind@005c434f(void);
void Unwind@005c435d(void);
void Unwind@005c436b(void);
void Unwind@005c4379(void);
void Unwind@005c43b0(void);
void Unwind@005c43ca(void);
void Unwind@005c43e7(void);
void Unwind@005c4401(void);
void Unwind@005c441b(void);
void Unwind@005c4423(void);
void Unwind@005c443d(void);
void Unwind@005c4457(void);
void Unwind@005c4460(void);
void Unwind@005c4468(void);
void Unwind@005c4477(void);
void Unwind@005c447f(void);
void Unwind@005c4487(void);
void Unwind@005c448f(void);
void Unwind@005c4497(void);
void Unwind@005c449f(void);
void Unwind@005c44a7(void);
void Unwind@005c44c1(void);
void Unwind@005c4510(void);
void Unwind@005c4518(void);
void Unwind@005c4540(void);
void Unwind@005c4549(void);
void Unwind@005c4551(void);
void Unwind@005c4559(void);
void Unwind@005c4561(void);
void Unwind@005c457b(void);
void Unwind@005c4595(void);
void Unwind@005c45e0(void);
void Unwind@005c4610(void);
void Unwind@005c4618(void);
void Unwind@005c4650(void);
void Unwind@005c4658(void);
void Unwind@005c4663(void);
void Unwind@005c466e(void);
void Unwind@005c4679(void);
void Unwind@005c4684(void);
void Unwind@005c468c(void);
void Unwind@005c46c0(void);
void Unwind@005c46f0(void);
void Unwind@005c46f8(void);
void Unwind@005c4700(void);
void Unwind@005c4708(void);
void Unwind@005c4740(void);
void Unwind@005c4748(void);
void Unwind@005c4750(void);
void Unwind@005c4758(void);
void Unwind@005c4790(void);
void Unwind@005c4799(void);
void Unwind@005c47a2(void);
void Unwind@005c47d0(void);
void Unwind@005c47d9(void);
void Unwind@005c4800(void);
void Unwind@005c4809(void);
void Unwind@005c4830(void);
void Unwind@005c4842(void);
void Unwind@005c4870(void);
void Unwind@005c4879(void);
void Unwind@005c4882(void);
void Unwind@005c48c0(void);
void Unwind@005c48c9(void);
void Unwind@005c48e3(void);
void Unwind@005c4920(void);
void Unwind@005c4929(void);
void Unwind@005c4943(void);
void Unwind@005c4980(void);
void Unwind@005c4989(void);
void Unwind@005c49a3(void);
void Unwind@005c49e0(void);
void Unwind@005c49e8(void);
void Unwind@005c4a30(void);
void Unwind@005c4a60(void);
void Unwind@005c4a68(void);
void Unwind@005c4a90(void);
void Unwind@005c4a99(void);
void Unwind@005c4ac0(void);
void Unwind@005c4af0(void);
void Unwind@005c4afb(void);
void Unwind@005c4b06(void);
void Unwind@005c4b11(void);
void Unwind@005c4b1f(void);
void Unwind@005c4b2d(void);
void Unwind@005c4b3b(void);
void Unwind@005c4b70(void);
void Unwind@005c4b78(void);
void Unwind@005c4b80(void);
void Unwind@005c4bb0(void);
void Unwind@005c4bb8(void);
void Unwind@005c4bc0(void);
void Unwind@005c4bc8(void);
void Unwind@005c4bd0(void);
void Unwind@005c4bd8(void);
void Unwind@005c4c00(void);
void Unwind@005c4c08(void);
void Unwind@005c4c10(void);
void Unwind@005c4c18(void);
void Unwind@005c4c20(void);
void Unwind@005c4c28(void);
void Unwind@005c4c50(void);
void Unwind@005c4c58(void);
void Unwind@005c4c60(void);
void Unwind@005c4c68(void);
void Unwind@005c4c90(void);
void Unwind@005c4c99(void);
void Unwind@005c4ca1(void);
void Unwind@005c4caa(void);
void Unwind@005c4cb6(void);
void Unwind@005c4cc2(void);
void Unwind@005c4cce(void);
void Unwind@005c4cd6(void);
void Unwind@005c4cdf(void);
void Unwind@005c4ce7(void);
void Unwind@005c4cef(void);
void Unwind@005c4cf7(void);
void Unwind@005c4d00(void);
void Unwind@005c4d30(void);
void Unwind@005c4d38(void);
void Unwind@005c4d70(void);
void Unwind@005c4d78(void);
void Unwind@005c4d80(void);
void Unwind@005c4db0(void);
void Unwind@005c4dbb(void);
void Unwind@005c4dc6(void);
void Unwind@005c4dd5(void);
void Unwind@005c4ddd(void);
void Unwind@005c4de5(void);
void Unwind@005c4ded(void);
void Unwind@005c4df8(void);
void Unwind@005c4e07(void);
void Unwind@005c4e0f(void);
void Unwind@005c4e17(void);
void Unwind@005c4e1f(void);
void Unwind@005c4e2a(void);
void Unwind@005c4e39(void);
void Unwind@005c4e41(void);
void Unwind@005c4e49(void);
void Unwind@005c4e51(void);
void Unwind@005c4e5c(void);
void Unwind@005c4e6b(void);
void Unwind@005c4e73(void);
void Unwind@005c4e7b(void);
void Unwind@005c4e83(void);
void Unwind@005c4e8e(void);
void Unwind@005c4e9d(void);
void Unwind@005c4ea5(void);
void Unwind@005c4ead(void);
void Unwind@005c4eb5(void);
void Unwind@005c4ec0(void);
void Unwind@005c4ecf(void);
void Unwind@005c4ed7(void);
void Unwind@005c4edf(void);
void Unwind@005c4ee7(void);
void Unwind@005c4ef2(void);
void Unwind@005c4f01(void);
void Unwind@005c4f09(void);
void Unwind@005c4f11(void);
void Unwind@005c4f19(void);
void Unwind@005c4f24(void);
void Unwind@005c4f33(void);
void Unwind@005c4f3b(void);
void Unwind@005c4f43(void);
void Unwind@005c4f4b(void);
void Unwind@005c4f56(void);
void Unwind@005c4f65(void);
void Unwind@005c4f6d(void);
void Unwind@005c4f75(void);
void Unwind@005c4f7d(void);
void Unwind@005c4f88(void);
void Unwind@005c4f97(void);
void Unwind@005c4f9f(void);
void Unwind@005c4fa7(void);
void Unwind@005c4faf(void);
void Unwind@005c4fba(void);
void Unwind@005c4fc9(void);
void Unwind@005c4fd1(void);
void Unwind@005c4fd9(void);
void Unwind@005c4fe1(void);
void Unwind@005c4fec(void);
void Unwind@005c4ffb(void);
void Unwind@005c5003(void);
void Unwind@005c500b(void);
void Unwind@005c5013(void);
void Unwind@005c501e(void);
void Unwind@005c502d(void);
void Unwind@005c5035(void);
void Unwind@005c503d(void);
void Unwind@005c5045(void);
void Unwind@005c5050(void);
void Unwind@005c505f(void);
void Unwind@005c5067(void);
void Unwind@005c506f(void);
void Unwind@005c5077(void);
void Unwind@005c5082(void);
void Unwind@005c5091(void);
void Unwind@005c5099(void);
void Unwind@005c50a1(void);
void Unwind@005c50a9(void);
void Unwind@005c50b4(void);
void Unwind@005c50c3(void);
void Unwind@005c50cb(void);
void Unwind@005c50d3(void);
void Unwind@005c50db(void);
void Unwind@005c50e6(void);
void Unwind@005c50f5(void);
void Unwind@005c50fd(void);
void Unwind@005c5105(void);
void Unwind@005c510d(void);
void Unwind@005c5118(void);
void Unwind@005c5127(void);
void Unwind@005c512f(void);
void Unwind@005c5137(void);
void Unwind@005c513f(void);
void Unwind@005c514a(void);
void Unwind@005c5159(void);
void Unwind@005c5161(void);
void Unwind@005c5169(void);
void Unwind@005c5171(void);
void Unwind@005c517c(void);
void Unwind@005c518b(void);
void Unwind@005c5193(void);
void Unwind@005c51a2(void);
void Unwind@005c51aa(void);
void Unwind@005c51b9(void);
void Unwind@005c51c1(void);
void Unwind@005c51d0(void);
void Unwind@005c51d8(void);
void Unwind@005c51e7(void);
void Unwind@005c51ef(void);
void Unwind@005c51fe(void);
void Unwind@005c5206(void);
void Unwind@005c5215(void);
void Unwind@005c521d(void);
void Unwind@005c522c(void);
void Unwind@005c5234(void);
void Unwind@005c5243(void);
void Unwind@005c524b(void);
void Unwind@005c525a(void);
void Unwind@005c5262(void);
void Unwind@005c5271(void);
void Unwind@005c5279(void);
void Unwind@005c5288(void);
void Unwind@005c5290(void);
void Unwind@005c529f(void);
void Unwind@005c52a7(void);
void Unwind@005c52b6(void);
void Unwind@005c52be(void);
void Unwind@005c52cd(void);
void Unwind@005c52d5(void);
void Unwind@005c52e4(void);
void Unwind@005c52ec(void);
void Unwind@005c52fb(void);
void Unwind@005c5303(void);
void Unwind@005c5312(void);
void Unwind@005c531a(void);
void Unwind@005c5329(void);
void Unwind@005c5331(void);
void Unwind@005c5340(void);
void Unwind@005c5348(void);
void Unwind@005c5357(void);
void Unwind@005c535f(void);
void Unwind@005c536e(void);
void Unwind@005c5376(void);
void Unwind@005c5385(void);
void Unwind@005c538d(void);
void Unwind@005c539c(void);
void Unwind@005c53a4(void);
void Unwind@005c53b3(void);
void Unwind@005c53bb(void);
void Unwind@005c53ca(void);
void Unwind@005c53d2(void);
void Unwind@005c53e1(void);
void Unwind@005c53e9(void);
void Unwind@005c53f8(void);
void Unwind@005c5400(void);
void Unwind@005c540f(void);
void Unwind@005c5417(void);
void Unwind@005c5426(void);
void Unwind@005c542e(void);
void Unwind@005c543d(void);
void Unwind@005c5445(void);
void Unwind@005c5454(void);
void Unwind@005c545c(void);
void Unwind@005c546b(void);
void Unwind@005c5473(void);
void Unwind@005c5482(void);
void Unwind@005c548a(void);
void Unwind@005c5499(void);
void Unwind@005c54a1(void);
void Unwind@005c54b0(void);
void Unwind@005c54b8(void);
void Unwind@005c54c7(void);
void Unwind@005c54cf(void);
void Unwind@005c54de(void);
void Unwind@005c54e6(void);
void Unwind@005c54f5(void);
void Unwind@005c54fd(void);
void Unwind@005c550c(void);
void Unwind@005c5514(void);
void Unwind@005c5523(void);
void Unwind@005c552b(void);
void Unwind@005c553a(void);
void Unwind@005c5542(void);
void Unwind@005c5551(void);
void Unwind@005c5559(void);
void Unwind@005c5568(void);
void Unwind@005c5570(void);
void Unwind@005c557f(void);
void Unwind@005c5587(void);
void Unwind@005c5596(void);
void Unwind@005c559e(void);
void Unwind@005c55ad(void);
void Unwind@005c55b5(void);
void Unwind@005c55c4(void);
void Unwind@005c55d3(void);
void Unwind@005c55e2(void);
void Unwind@005c55f1(void);
void Unwind@005c5600(void);
void Unwind@005c560f(void);
void Unwind@005c561e(void);
void Unwind@005c562d(void);
void Unwind@005c563c(void);
void Unwind@005c564b(void);
void Unwind@005c565a(void);
void Unwind@005c5669(void);
void Unwind@005c5678(void);
void Unwind@005c5687(void);
void Unwind@005c5696(void);
void Unwind@005c56a5(void);
void Unwind@005c56b4(void);
void Unwind@005c56c3(void);
void Unwind@005c56d2(void);
void Unwind@005c56e1(void);
void Unwind@005c56f0(void);
void Unwind@005c56ff(void);
void Unwind@005c570e(void);
void Unwind@005c571d(void);
void Unwind@005c572c(void);
void Unwind@005c573b(void);
void Unwind@005c574a(void);
void Unwind@005c5759(void);
void Unwind@005c5768(void);
void Unwind@005c5777(void);
void Unwind@005c57b0(void);
void Unwind@005c57e0(void);
void Unwind@005c57eb(void);
void Unwind@005c57f6(void);
void Unwind@005c5801(void);
void Unwind@005c5809(void);
void Unwind@005c5811(void);
void Unwind@005c5819(void);
void Unwind@005c5850(void);
void Unwind@005c5858(void);
void Unwind@005c5890(void);
void Unwind@005c589b(void);
void Unwind@005c58ad(void);
void Unwind@005c58b8(void);
void Unwind@005c58f0(void);
void Unwind@005c5930(void);
void Unwind@005c5942(void);
void Unwind@005c594a(void);
void Unwind@005c5952(void);
void Unwind@005c595a(void);
void Unwind@005c5969(void);
void Unwind@005c5971(void);
void Unwind@005c5979(void);
void Unwind@005c5988(void);
void Unwind@005c5990(void);
void Unwind@005c5998(void);
void Unwind@005c59a7(void);
void Unwind@005c59af(void);
void Unwind@005c59b7(void);
void Unwind@005c59c6(void);
void Unwind@005c59ce(void);
void Unwind@005c59d6(void);
void Unwind@005c59e5(void);
void Unwind@005c59ed(void);
void Unwind@005c59f5(void);
void Unwind@005c5a04(void);
void Unwind@005c5a0c(void);
void Unwind@005c5a14(void);
void Unwind@005c5a23(void);
void Unwind@005c5a2b(void);
void Unwind@005c5a33(void);
void Unwind@005c5a42(void);
void Unwind@005c5a4a(void);
void Unwind@005c5a52(void);
void Unwind@005c5a64(void);
void Unwind@005c5a6c(void);
void Unwind@005c5a74(void);
void Unwind@005c5a7c(void);
void Unwind@005c5a8e(void);
void Unwind@005c5a96(void);
void Unwind@005c5a9e(void);
void Unwind@005c5aa6(void);
void Unwind@005c5ab8(void);
void Unwind@005c5ac0(void);
void Unwind@005c5ac8(void);
void Unwind@005c5ad0(void);
void Unwind@005c5adf(void);
void Unwind@005c5ae7(void);
void Unwind@005c5aef(void);
void Unwind@005c5b01(void);
void Unwind@005c5b09(void);
void Unwind@005c5b11(void);
void Unwind@005c5b19(void);
void Unwind@005c5b2b(void);
void Unwind@005c5b33(void);
void Unwind@005c5b3b(void);
void Unwind@005c5b43(void);
void Unwind@005c5b55(void);
void Unwind@005c5b5d(void);
void Unwind@005c5b65(void);
void Unwind@005c5b6d(void);
void Unwind@005c5b7f(void);
void Unwind@005c5b87(void);
void Unwind@005c5b8f(void);
void Unwind@005c5b9e(void);
void Unwind@005c5ba6(void);
void Unwind@005c5bae(void);
void Unwind@005c5bbd(void);
void Unwind@005c5bc5(void);
void Unwind@005c5bcd(void);
void Unwind@005c5bdf(void);
void Unwind@005c5be7(void);
void Unwind@005c5bef(void);
void Unwind@005c5bf7(void);
void Unwind@005c5c09(void);
void Unwind@005c5c11(void);
void Unwind@005c5c19(void);
void Unwind@005c5c21(void);
void Unwind@005c5c33(void);
void Unwind@005c5c3b(void);
void Unwind@005c5c43(void);
void Unwind@005c5c4b(void);
void Unwind@005c5c5d(void);
void Unwind@005c5c65(void);
void Unwind@005c5c6d(void);
void Unwind@005c5c75(void);
void Unwind@005c5c87(void);
void Unwind@005c5c8f(void);
void Unwind@005c5c97(void);
void Unwind@005c5c9f(void);
void Unwind@005c5cb1(void);
void Unwind@005c5cb9(void);
void Unwind@005c5cc1(void);
void Unwind@005c5cf0(void);
void Unwind@005c5cff(void);
void Unwind@005c5d07(void);
void Unwind@005c5d0f(void);
void Unwind@005c5d1e(void);
void Unwind@005c5d26(void);
void Unwind@005c5d2e(void);
void Unwind@005c5d3d(void);
void Unwind@005c5d45(void);
void Unwind@005c5d70(void);
void Unwind@005c5d7f(void);
void Unwind@005c5d87(void);
void Unwind@005c5d8f(void);
void Unwind@005c5d9e(void);
void Unwind@005c5da6(void);
void Unwind@005c5dae(void);
void Unwind@005c5dbd(void);
void Unwind@005c5dc5(void);
void Unwind@005c5df0(void);
void Unwind@005c5dff(void);
void Unwind@005c5e07(void);
void Unwind@005c5e60(void);
void Unwind@005c5e68(void);
void Unwind@005c5e70(void);
void Unwind@005c5e78(void);
void Unwind@005c5e83(void);
void Unwind@005c5eb0(void);
void Unwind@005c5eb8(void);
void Unwind@005c5ec0(void);
void Unwind@005c5ec8(void);
void Unwind@005c5ed1(void);
void Unwind@005c5edf(void);
void Unwind@005c5eed(void);
void Unwind@005c5efb(void);
void Unwind@005c5f09(void);
void Unwind@005c5f60(void);
void Unwind@005c5f68(void);
void Unwind@005c5f90(void);
void Unwind@005c5f98(void);
void Unwind@005c5fa0(void);
void Unwind@005c5fa8(void);
void Unwind@005c5fb0(void);
void Unwind@005c5fb8(void);
void Unwind@005c5fc0(void);
void Unwind@005c6000(void);
void Unwind@005c6008(void);
void Unwind@005c6011(void);
void Unwind@005c601a(void);
void Unwind@005c6040(void);
void Unwind@005c6049(void);
void Unwind@005c6057(void);
void Unwind@005c6065(void);
void Unwind@005c6074(void);
void Unwind@005c6083(void);
void Unwind@005c6092(void);
void Unwind@005c60a1(void);
void Unwind@005c60b0(void);
void Unwind@005c60bf(void);
void Unwind@005c60cd(void);
void Unwind@005c60dc(void);
void Unwind@005c60eb(void);
void Unwind@005c60fd(void);
void Unwind@005c610c(void);
void Unwind@005c611b(void);
void Unwind@005c612a(void);
void Unwind@005c6139(void);
void Unwind@005c6142(void);
void Unwind@005c6170(void);
void Unwind@005c6179(void);
void Unwind@005c6182(void);
void Unwind@005c61c0(void);
void Unwind@005c61f0(void);
void Unwind@005c61f8(void);
void Unwind@005c6200(void);
void Unwind@005c6230(void);
void Unwind@005c6238(void);
void Unwind@005c6240(void);
void Unwind@005c6248(void);
void Unwind@005c6280(void);
void Unwind@005c6288(void);
void Unwind@005c6290(void);
void Unwind@005c62c0(void);
void Unwind@005c62f0(void);
void Unwind@005c6320(void);
void Unwind@005c6350(void);
void Unwind@005c6359(void);
void Unwind@005c6380(void);
void Unwind@005c6389(void);
void Unwind@005c6391(void);
void Unwind@005c639a(void);
void Unwind@005c63d0(void);
void Unwind@005c63d9(void);
void Unwind@005c63e1(void);
void Unwind@005c63ea(void);
void Unwind@005c63f3(void);
void Unwind@005c6420(void);
void Unwind@005c6450(void);
void Unwind@005c6459(void);
void Unwind@005c6461(void);
void Unwind@005c6469(void);
void Unwind@005c6471(void);
void Unwind@005c648a(void);
void Unwind@005c64c0(void);
void Unwind@005c64f0(void);
void Unwind@005c64fb(void);
void Unwind@005c6503(void);
void Unwind@005c6530(void);
void Unwind@005c6539(void);
void Unwind@005c6542(void);
void Unwind@005c654b(void);
void Unwind@005c6554(void);
void Unwind@005c655d(void);
void Unwind@005c6590(void);
void Unwind@005c6598(void);
void Unwind@005c65d0(void);
void Unwind@005c65d8(void);
void Unwind@005c65e0(void);
void Unwind@005c65e8(void);
void Unwind@005c6610(void);
void Unwind@005c6618(void);
void Unwind@005c6621(void);
void Unwind@005c6629(void);
void Unwind@005c6660(void);
void Unwind@005c6668(void);
void Unwind@005c6670(void);
void Unwind@005c6678(void);
void Unwind@005c6680(void);
void Unwind@005c6688(void);
void Unwind@005c6690(void);
void Unwind@005c6698(void);
void Unwind@005c66a1(void);
void Unwind@005c66a9(void);
void Unwind@005c66e0(void);
void Unwind@005c66ef(void);
void Unwind@005c66fe(void);
void Unwind@005c6706(void);
void Unwind@005c670e(void);
void Unwind@005c671d(void);
void Unwind@005c6725(void);
void Unwind@005c672d(void);
void Unwind@005c673c(void);
void Unwind@005c6744(void);
void Unwind@005c674c(void);
void Unwind@005c675b(void);
void Unwind@005c6763(void);
void Unwind@005c676b(void);
void Unwind@005c677a(void);
void Unwind@005c6789(void);
void Unwind@005c6791(void);
void Unwind@005c6799(void);
void Unwind@005c67a8(void);
void Unwind@005c67b0(void);
void Unwind@005c67b8(void);
void Unwind@005c67c7(void);
void Unwind@005c67d6(void);
void Unwind@005c67de(void);
void Unwind@005c67e6(void);
void Unwind@005c67f5(void);
void Unwind@005c67fd(void);
void Unwind@005c6820(void);
void Unwind@005c6828(void);
void Unwind@005c6830(void);
void Unwind@005c6838(void);
void Unwind@005c6843(void);
void Unwind@005c684b(void);
void Unwind@005c6856(void);
void Unwind@005c68f0(void);
void Unwind@005c68f9(void);
void Unwind@005c6902(void);
void Unwind@005c690b(void);
void Unwind@005c6914(void);
void Unwind@005c691c(void);
void Unwind@005c6940(void);
void Unwind@005c6970(void);
void Unwind@005c69a0(void);
void Unwind@005c69a9(void);
void Unwind@005c69b2(void);
void Unwind@005c69bb(void);
void Unwind@005c69c4(void);
void Unwind@005c69cd(void);
void Unwind@005c69dc(void);
void Unwind@005c6a20(void);
void Unwind@005c6a29(void);
void Unwind@005c6a32(void);
void Unwind@005c6a3b(void);
void Unwind@005c6a44(void);
void Unwind@005c6a4d(void);
void Unwind@005c6a5c(void);
void Unwind@005c6aa0(void);
void Unwind@005c6aa9(void);
void Unwind@005c6ab1(void);
void Unwind@005c6ae0(void);
void Unwind@005c6ae8(void);
void Unwind@005c6b10(void);
void Unwind@005c6b40(void);
void Unwind@005c6b48(void);
void Unwind@005c6b50(void);
void Unwind@005c6b5c(void);
void Unwind@005c6b68(void);
void Unwind@005c6b70(void);
void Unwind@005c6b78(void);
void Unwind@005c6b80(void);
void Unwind@005c6b8c(void);
void Unwind@005c6bc0(void);
void Unwind@005c6bc8(void);
void Unwind@005c6bd0(void);
void Unwind@005c6bd9(void);
void Unwind@005c6be2(void);
void Unwind@005c6bea(void);
void Unwind@005c6bf2(void);
void Unwind@005c6bfa(void);
void Unwind@005c6c06(void);
void Unwind@005c6c12(void);
void Unwind@005c6c1a(void);
void Unwind@005c6c26(void);
void Unwind@005c6c32(void);
void Unwind@005c6c70(void);
void Unwind@005c6c78(void);
void Unwind@005c6c80(void);
void Unwind@005c6c88(void);
void Unwind@005c6c90(void);
void Unwind@005c6c98(void);
void Unwind@005c6ca0(void);
void Unwind@005c6cd0(void);
void Unwind@005c6cd8(void);
void Unwind@005c6ce0(void);
void Unwind@005c6d10(void);
void Unwind@005c6d1b(void);
void Unwind@005c6d26(void);
void Unwind@005c6d32(void);
void Unwind@005c6d3d(void);
void Unwind@005c6d4b(void);
void Unwind@005c6d59(void);
void Unwind@005c6d67(void);
void Unwind@005c6d75(void);
void Unwind@005c6d8d(void);
void Unwind@005c6da5(void);
void Unwind@005c6db4(void);
void Unwind@005c6dc3(void);
void Unwind@005c6dd2(void);
void Unwind@005c6de1(void);
void Unwind@005c6df0(void);
void Unwind@005c6dff(void);
void Unwind@005c6e0e(void);
void Unwind@005c6e1d(void);
void Unwind@005c6e2b(void);
void Unwind@005c6e3a(void);
void Unwind@005c6e49(void);
void Unwind@005c6e58(void);
void Unwind@005c6e67(void);
void Unwind@005c6e76(void);
void Unwind@005c6e85(void);
void Unwind@005c6e94(void);
void Unwind@005c6ea2(void);
void Unwind@005c6eb0(void);
void Unwind@005c6ebe(void);
void Unwind@005c6ecc(void);
void Unwind@005c6eda(void);
void Unwind@005c6ee8(void);
void Unwind@005c6ef6(void);
void Unwind@005c6f04(void);
void Unwind@005c6f12(void);
void Unwind@005c6f20(void);
void Unwind@005c6f2e(void);
void Unwind@005c6f3c(void);
void Unwind@005c6f4a(void);
void Unwind@005c6f58(void);
void Unwind@005c6f66(void);
void Unwind@005c6f90(void);
void Unwind@005c6f98(void);
void Unwind@005c6fa0(void);
void Unwind@005c6faf(void);
void Unwind@005c6fb7(void);
void Unwind@005c7000(void);
void Unwind@005c7009(void);
void Unwind@005c7012(void);
void Unwind@005c701b(void);
void Unwind@005c7024(void);
void Unwind@005c702d(void);
void Unwind@005c7036(void);
void Unwind@005c7060(void);
void Unwind@005c7068(void);
void Unwind@005c7071(void);
void Unwind@005c707d(void);
void Unwind@005c7086(void);
void Unwind@005c708f(void);
void Unwind@005c7098(void);
void Unwind@005c70a0(void);
void Unwind@005c70a8(void);
void Unwind@005c70b4(void);
void Unwind@005c70bd(void);
void Unwind@005c70c6(void);
void Unwind@005c70ce(void);
void Unwind@005c70d6(void);
void Unwind@005c70de(void);
void Unwind@005c70e6(void);
void Unwind@005c70ee(void);
void Unwind@005c70f6(void);
void Unwind@005c70fe(void);
void Unwind@005c7106(void);
void Unwind@005c7111(void);
void Unwind@005c7119(void);
void Unwind@005c7121(void);
void Unwind@005c712c(void);
void Unwind@005c7135(void);
void Unwind@005c713e(void);
void Unwind@005c7147(void);
void Unwind@005c7150(void);
void Unwind@005c7159(void);
void Unwind@005c7162(void);
void Unwind@005c716e(void);
void Unwind@005c7179(void);
void Unwind@005c7181(void);
void Unwind@005c7189(void);
void Unwind@005c7191(void);
void Unwind@005c719c(void);
void Unwind@005c71d0(void);
void Unwind@005c7200(void);
void Unwind@005c7208(void);
void Unwind@005c7240(void);
void Unwind@005c7248(void);
void Unwind@005c7253(void);
void Unwind@005c725e(void);
void Unwind@005c7269(void);
void Unwind@005c7271(void);
void Unwind@005c7279(void);
void Unwind@005c7281(void);
void Unwind@005c7289(void);
void Unwind@005c72c0(void);
void Unwind@005c72c8(void);
void Unwind@005c72d0(void);
void Unwind@005c7300(void);
void Unwind@005c7312(void);
void Unwind@005c7340(void);
void Unwind@005c7348(void);
void Unwind@005c7361(void);
void Unwind@005c7390(void);
void Unwind@005c73c0(void);
void Unwind@005c73c9(void);
void Unwind@005c73d2(void);
void Unwind@005c73db(void);
void Unwind@005c73e4(void);
void Unwind@005c73ed(void);
void Unwind@005c73f6(void);
void Unwind@005c73ff(void);
void Unwind@005c7430(void);
void Unwind@005c7442(void);
void Unwind@005c744a(void);
void Unwind@005c745c(void);
void Unwind@005c7465(void);
void Unwind@005c746e(void);
void Unwind@005c74a0(void);
void Unwind@005c74a8(void);
void Unwind@005c74b7(void);
void Unwind@005c74e0(void);
void Unwind@005c74e8(void);
void Unwind@005c74f7(void);
void Unwind@005c7520(void);
void Unwind@005c7528(void);
void Unwind@005c7530(void);
void Unwind@005c7538(void);
void Unwind@005c75a0(void);
void Unwind@005c75ab(void);
void Unwind@005c75c0(void);
void Unwind@005c75cc(void);
void Unwind@005c75e1(void);
void Unwind@005c75ec(void);
void Unwind@005c75f4(void);
void Unwind@005c75ff(void);
void Unwind@005c7607(void);
void Unwind@005c7612(void);
void Unwind@005c761a(void);
void Unwind@005c7625(void);
void Unwind@005c762d(void);
void Unwind@005c7638(void);
void Unwind@005c7640(void);
void Unwind@005c764b(void);
void Unwind@005c7653(void);
void Unwind@005c765e(void);
void Unwind@005c7666(void);
void Unwind@005c7671(void);
void Unwind@005c76b0(void);
void Unwind@005c76b8(void);
void Unwind@005c76c0(void);
void Unwind@005c76f0(void);
void Unwind@005c76f8(void);
void Unwind@005c7700(void);
void Unwind@005c7708(void);
void Unwind@005c7710(void);
void Unwind@005c7718(void);
void Unwind@005c7720(void);
void Unwind@005c7728(void);
void Unwind@005c7760(void);
void Unwind@005c7768(void);
void Unwind@005c77a0(void);
void Unwind@005c77a8(void);
void Unwind@005c77d0(void);
void Unwind@005c77d8(void);
void Unwind@005c7810(void);
void Unwind@005c7840(void);
void Unwind@005c7848(void);
void Unwind@005c7870(void);
void Unwind@005c78a0(void);
void Unwind@005c78d0(void);
void Unwind@005c78d8(void);
void Unwind@005c7900(void);
void Unwind@005c7908(void);
void Unwind@005c7930(void);
void Unwind@005c7938(void);
void Unwind@005c7940(void);
void Unwind@005c7970(void);
void Unwind@005c79a0(void);
void Unwind@005c79b5(void);
void Unwind@005c79c1(void);
void Unwind@005c79ca(void);
void Unwind@005c79df(void);
void Unwind@005c79eb(void);
void Unwind@005c79f4(void);
void Unwind@005c7a09(void);
void Unwind@005c7a15(void);
void Unwind@005c7a1e(void);
void Unwind@005c7a33(void);
void Unwind@005c7a3f(void);
void Unwind@005c7a48(void);
void Unwind@005c7a5d(void);
void Unwind@005c7a69(void);
void Unwind@005c7a72(void);
void Unwind@005c7a87(void);
void Unwind@005c7a93(void);
void Unwind@005c7a9c(void);
void Unwind@005c7aae(void);
void Unwind@005c7aba(void);
void Unwind@005c7ac3(void);
void Unwind@005c7ad8(void);
void Unwind@005c7ae4(void);
void Unwind@005c7aed(void);
void Unwind@005c7aff(void);
void Unwind@005c7b0b(void);
void Unwind@005c7b14(void);
void Unwind@005c7b29(void);
void Unwind@005c7b35(void);
void Unwind@005c7b41(void);
void Unwind@005c7b56(void);
void Unwind@005c7b62(void);
void Unwind@005c7b6e(void);
void Unwind@005c7b83(void);
void Unwind@005c7b8f(void);
void Unwind@005c7b98(void);
void Unwind@005c7bad(void);
void Unwind@005c7bb9(void);
void Unwind@005c7bc5(void);
void Unwind@005c7bda(void);
void Unwind@005c7be6(void);
void Unwind@005c7c10(void);
void Unwind@005c7c22(void);
void Unwind@005c7c2b(void);
void Unwind@005c7c50(void);
void Unwind@005c7c62(void);
void Unwind@005c7c6b(void);
void Unwind@005c7c90(void);
void Unwind@005c7ca2(void);
void Unwind@005c7caa(void);
void Unwind@005c7cb2(void);
void Unwind@005c7cbb(void);
void Unwind@005c7ce0(void);
void Unwind@005c7cf2(void);
void Unwind@005c7cfb(void);
void Unwind@005c7d20(void);
void Unwind@005c7d32(void);
void Unwind@005c7d3a(void);
void Unwind@005c7d48(void);
void Unwind@005c7d56(void);
void Unwind@005c7d5f(void);
void Unwind@005c7d90(void);
void Unwind@005c7da2(void);
void Unwind@005c7daa(void);
void Unwind@005c7db8(void);
void Unwind@005c7dc6(void);
void Unwind@005c7dcf(void);
void Unwind@005c7e00(void);
void Unwind@005c7e12(void);
void Unwind@005c7e24(void);
void Unwind@005c7e2d(void);
void Unwind@005c7e60(void);
void Unwind@005c7e72(void);
void Unwind@005c7e7a(void);
void Unwind@005c7e88(void);
void Unwind@005c7e96(void);
void Unwind@005c7e9f(void);
void Unwind@005c7ed0(void);
void Unwind@005c7ee2(void);
void Unwind@005c7eea(void);
void Unwind@005c7ef8(void);
void Unwind@005c7f01(void);
void Unwind@005c7f30(void);
void Unwind@005c7f42(void);
void Unwind@005c7f4a(void);
void Unwind@005c7f58(void);
void Unwind@005c7f66(void);
void Unwind@005c7f6f(void);
void Unwind@005c7fa0(void);
void Unwind@005c7fb2(void);
void Unwind@005c7fc4(void);
void Unwind@005c7fcd(void);
void Unwind@005c8000(void);
void Unwind@005c8012(void);
void Unwind@005c8024(void);
void Unwind@005c802d(void);
void Unwind@005c8060(void);
void Unwind@005c8072(void);
void Unwind@005c807b(void);
void Unwind@005c80a0(void);
void Unwind@005c80b2(void);
void Unwind@005c80ba(void);
void Unwind@005c80c8(void);
void Unwind@005c80d1(void);
void Unwind@005c8100(void);
void Unwind@005c8112(void);
void Unwind@005c811a(void);
void Unwind@005c8122(void);
void Unwind@005c8134(void);
void Unwind@005c813c(void);
void Unwind@005c8144(void);
void Unwind@005c814d(void);
void Unwind@005c8180(void);
void Unwind@005c8192(void);
void Unwind@005c819a(void);
void Unwind@005c81a3(void);
void Unwind@005c81d0(void);
void Unwind@005c81e2(void);
void Unwind@005c81ea(void);
void Unwind@005c81f3(void);
void Unwind@005c8220(void);
void Unwind@005c8232(void);
void Unwind@005c823a(void);
void Unwind@005c8243(void);
void Unwind@005c8270(void);
void Unwind@005c8282(void);
void Unwind@005c828a(void);
void Unwind@005c8298(void);
void Unwind@005c82a1(void);
void Unwind@005c82d0(void);
void Unwind@005c82e2(void);
void Unwind@005c82ea(void);
void Unwind@005c82f3(void);
void Unwind@005c8320(void);
void Unwind@005c8332(void);
void Unwind@005c833a(void);
void Unwind@005c8343(void);
void Unwind@005c8370(void);
void Unwind@005c8382(void);
void Unwind@005c838b(void);
void Unwind@005c83b0(void);
void Unwind@005c83e0(void);
void Unwind@005c83e8(void);
void Unwind@005c83f0(void);
void Unwind@005c83f8(void);
void Unwind@005c8400(void);
void Unwind@005c8408(void);
void Unwind@005c8413(void);
void Unwind@005c841e(void);
void Unwind@005c8450(void);
void Unwind@005c845b(void);
void Unwind@005c8469(void);
void Unwind@005c8477(void);
void Unwind@005c8482(void);
void Unwind@005c848d(void);
void Unwind@005c8498(void);
void Unwind@005c84a3(void);
void Unwind@005c84ae(void);
void Unwind@005c84b9(void);
void Unwind@005c84c4(void);
void Unwind@005c84cf(void);
void Unwind@005c84da(void);
void Unwind@005c84e5(void);
void Unwind@005c84f0(void);
void Unwind@005c84fb(void);
void Unwind@005c8506(void);
void Unwind@005c8511(void);
void Unwind@005c851c(void);
void Unwind@005c8527(void);
void Unwind@005c8532(void);
void Unwind@005c853d(void);
void Unwind@005c8548(void);
void Unwind@005c8580(void);
void Unwind@005c858b(void);
void Unwind@005c85a0(void);
void Unwind@005c85ac(void);
void Unwind@005c85f0(void);
void Unwind@005c8620(void);
void Unwind@005c8628(void);
void Unwind@005c8630(void);
void Unwind@005c8638(void);
void Unwind@005c8640(void);
void Unwind@005c8648(void);
void Unwind@005c8650(void);
void Unwind@005c8658(void);
void Unwind@005c8690(void);
void Unwind@005c86c0(void);
void Unwind@005c86c8(void);
void Unwind@005c86d0(void);
void Unwind@005c86d8(void);
void Unwind@005c86e0(void);
void Unwind@005c86e8(void);
void Unwind@005c86f0(void);
void Unwind@005c8720(void);
void Unwind@005c8728(void);
void Unwind@005c8750(void);
void Unwind@005c8780(void);
void Unwind@005c8788(void);
void Unwind@005c8793(void);
void Unwind@005c879e(void);
void Unwind@005c87d0(void);
void Unwind@005c87d8(void);
void Unwind@005c87e0(void);
void Unwind@005c87eb(void);
void Unwind@005c87f6(void);
void Unwind@005c8820(void);
void Unwind@005c8850(void);
void Unwind@005c885b(void);
void Unwind@005c8870(void);
void Unwind@005c887c(void);
void Unwind@005c8891(void);
void Unwind@005c88d0(void);
void Unwind@005c88db(void);
void Unwind@005c88f0(void);
void Unwind@005c88fc(void);
void Unwind@005c8911(void);
void Unwind@005c891c(void);
void Unwind@005c8924(void);
void Unwind@005c892f(void);
void Unwind@005c8937(void);
void Unwind@005c8942(void);
void Unwind@005c894a(void);
void Unwind@005c8955(void);
void Unwind@005c895d(void);
void Unwind@005c8968(void);
void Unwind@005c8970(void);
void Unwind@005c897b(void);
void Unwind@005c8983(void);
void Unwind@005c898e(void);
void Unwind@005c89c0(void);
void Unwind@005c89c8(void);
void Unwind@005c89d0(void);
void Unwind@005c89d8(void);
void Unwind@005c8a10(void);
void Unwind@005c8a18(void);
void Unwind@005c8a20(void);
void Unwind@005c8a39(void);
void Unwind@005c8a41(void);
void Unwind@005c8a70(void);
void Unwind@005c8aa0(void);
void Unwind@005c8aab(void);
void Unwind@005c8ac0(void);
void Unwind@005c8acc(void);
void Unwind@005c8ae1(void);
void Unwind@005c8aec(void);
void Unwind@005c8af4(void);
void Unwind@005c8aff(void);
void Unwind@005c8b07(void);
void Unwind@005c8b12(void);
void Unwind@005c8b1a(void);
void Unwind@005c8b25(void);
void Unwind@005c8b2d(void);
void Unwind@005c8b38(void);
void Unwind@005c8b40(void);
void Unwind@005c8b4b(void);
void Unwind@005c8b53(void);
void Unwind@005c8b5e(void);
void Unwind@005c8b66(void);
void Unwind@005c8b71(void);
void Unwind@005c8b79(void);
void Unwind@005c8b84(void);
void Unwind@005c8b8c(void);
void Unwind@005c8b97(void);
void Unwind@005c8bd0(void);
void Unwind@005c8bd8(void);
void Unwind@005c8be0(void);
void Unwind@005c8be8(void);
void Unwind@005c8bf0(void);
void Unwind@005c8c20(void);
void Unwind@005c8c28(void);
void Unwind@005c8c60(void);
void Unwind@005c8c68(void);
void Unwind@005c8ca0(void);
void Unwind@005c8ca8(void);
void Unwind@005c8cba(void);
void Unwind@005c8cf0(void);
void Unwind@005c8cf8(void);
void Unwind@005c8d30(void);
void Unwind@005c8d38(void);
void Unwind@005c8d60(void);
void Unwind@005c8d68(void);
void Unwind@005c8d70(void);
void Unwind@005c8d82(void);
void Unwind@005c8dc0(void);
void Unwind@005c8dcb(void);
void Unwind@005c8de0(void);
void Unwind@005c8dec(void);
void Unwind@005c8e01(void);
void Unwind@005c8e0c(void);
void Unwind@005c8e14(void);

void Unwind@005c8e1f(void);
void Unwind@005c8e27(void);
void Unwind@005c8e32(void);
void Unwind@005c8e3a(void);
void Unwind@005c8e45(void);
void Unwind@005c8e80(void);
void Unwind@005c8eb0(void);
void Unwind@005c8ee0(void);
void Unwind@005c8ee9(void);
void Unwind@005c8f10(void);
void Unwind@005c8f1b(void);
void Unwind@005c8f26(void);
void Unwind@005c8f32(void);
void Unwind@005c8f3d(void);
void Unwind@005c8f4b(void);
void Unwind@005c8f59(void);
void Unwind@005c8f67(void);
void Unwind@005c8f75(void);
void Unwind@005c8f83(void);
void Unwind@005c8f91(void);
void Unwind@005c8fa0(void);
void Unwind@005c8faf(void);
void Unwind@005c8fbd(void);
void Unwind@005c8fcc(void);
void Unwind@005c8fd4(void);
void Unwind@005c8fdf(void);
void Unwind@005c8fea(void);
void Unwind@005c8ff9(void);
void Unwind@005c9008(void);
void Unwind@005c9010(void);
void Unwind@005c901b(void);
void Unwind@005c902a(void);
void Unwind@005c9032(void);
void Unwind@005c903d(void);
void Unwind@005c9048(void);
void Unwind@005c9057(void);
void Unwind@005c905f(void);
void Unwind@005c906a(void);
void Unwind@005c9075(void);
void Unwind@005c9084(void);
void Unwind@005c908c(void);
void Unwind@005c9097(void);
void Unwind@005c90a2(void);
void Unwind@005c90b1(void);
void Unwind@005c90b9(void);
void Unwind@005c90c4(void);
void Unwind@005c90d3(void);
void Unwind@005c90db(void);
void Unwind@005c90e6(void);
void Unwind@005c90f1(void);
void Unwind@005c9103(void);
void Unwind@005c9150(void);
void Unwind@005c9158(void);
void Unwind@005c9160(void);
void Unwind@005c9190(void);
void Unwind@005c9198(void);
void Unwind@005c91c0(void);
void Unwind@005c91f0(void);
void Unwind@005c9220(void);
void Unwind@005c9229(void);
void Unwind@005c9260(void);
void Unwind@005c9290(void);
void Unwind@005c92c0(void);
void Unwind@005c92c9(void);
void Unwind@005c92d1(void);
void Unwind@005c92da(void);
void Unwind@005c92e3(void);
void Unwind@005c92eb(void);
void Unwind@005c92f4(void);
void Unwind@005c92fc(void);
void Unwind@005c9305(void);
void Unwind@005c930d(void);
void Unwind@005c9316(void);
void Unwind@005c931f(void);
void Unwind@005c9328(void);
void Unwind@005c9330(void);
void Unwind@005c9338(void);
void Unwind@005c9340(void);
void Unwind@005c9349(void);
void Unwind@005c9352(void);
void Unwind@005c935b(void);
void Unwind@005c9364(void);
void Unwind@005c936d(void);
void Unwind@005c93a0(void);
void Unwind@005c93a8(void);
void Unwind@005c93b0(void);
void Unwind@005c93b8(void);
void Unwind@005c93f0(void);
void Unwind@005c93f8(void);
void Unwind@005c9420(void);
void Unwind@005c9450(void);
void Unwind@005c945f(void);
void Unwind@005c9478(void);
void Unwind@005c9487(void);
void Unwind@005c94a0(void);
void Unwind@005c94e0(void);
void Unwind@005c94e8(void);
void Unwind@005c9520(void);
void Unwind@005c9528(void);
void Unwind@005c9530(void);
void Unwind@005c9538(void);
void Unwind@005c9570(void);
void Unwind@005c9589(void);
void Unwind@005c9591(void);
void Unwind@005c9599(void);
void Unwind@005c95a1(void);
void Unwind@005c95a9(void);
void Unwind@005c95b1(void);
void Unwind@005c95b9(void);
void Unwind@005c95c1(void);
void Unwind@005c95f0(void);
void Unwind@005c9609(void);
void Unwind@005c9611(void);
void Unwind@005c9619(void);
void Unwind@005c9621(void);
void Unwind@005c9629(void);
void Unwind@005c9631(void);
void Unwind@005c9639(void);
void Unwind@005c9641(void);
void Unwind@005c9649(void);
void Unwind@005c9651(void);
void Unwind@005c9659(void);
void Unwind@005c9661(void);
void Unwind@005c9669(void);
void Unwind@005c96a0(void);
void Unwind@005c96a8(void);
void Unwind@005c96b0(void);
void Unwind@005c96b8(void);
void Unwind@005c96d7(void);
void Unwind@005c96e2(void);
void Unwind@005c96ea(void);
void Unwind@005c96f2(void);
void Unwind@005c96fd(void);
void Unwind@005c9708(void);
void Unwind@005c971d(void);
void Unwind@005c9725(void);
void Unwind@005c972d(void);
void Unwind@005c9760(void);
void Unwind@005c9768(void);
void Unwind@005c9770(void);
void Unwind@005c9778(void);
void Unwind@005c9780(void);
void Unwind@005c9788(void);
void Unwind@005c9790(void);
void Unwind@005c9798(void);
void Unwind@005c97a0(void);
void Unwind@005c97d0(void);
void Unwind@005c97d8(void);
void Unwind@005c97e0(void);
void Unwind@005c9810(void);
void Unwind@005c981b(void);
void Unwind@005c9826(void);
void Unwind@005c9850(void);
void Unwind@005c9880(void);
void Unwind@005c9888(void);
void Unwind@005c9890(void);
void Unwind@005c9898(void);
void Unwind@005c98d0(void);
void Unwind@005c98d8(void);
void Unwind@005c98e0(void);
void Unwind@005c98e8(void);
void Unwind@005c9920(void);
void Unwind@005c9928(void);
void Unwind@005c9930(void);
void Unwind@005c9938(void);
void Unwind@005c9970(void);
void Unwind@005c9978(void);
void Unwind@005c9981(void);
void Unwind@005c9990(void);
void Unwind@005c999e(void);
void Unwind@005c99ac(void);
void Unwind@005c99ba(void);
void Unwind@005c99c8(void);
void Unwind@005c99d0(void);
void Unwind@005c9a00(void);
void Unwind@005c9a08(void);
void Unwind@005c9a40(void);
void Unwind@005c9a48(void);
void Unwind@005c9aa0(void);
void Unwind@005c9aa8(void);
void Unwind@005c9ae0(void);
void Unwind@005c9aeb(void);
void Unwind@005c9af6(void);
void Unwind@005c9b01(void);
void Unwind@005c9b09(void);
void Unwind@005c9b11(void);
void Unwind@005c9b1c(void);
void Unwind@005c9b24(void);
void Unwind@005c9b2f(void);
void Unwind@005c9b3a(void);
void Unwind@005c9b45(void);
void Unwind@005c9b4d(void);
void Unwind@005c9b55(void);
void Unwind@005c9b5d(void);
void Unwind@005c9b90(void);
void Unwind@005c9ba2(void);
void Unwind@005c9baa(void);
void Unwind@005c9bb3(void);
void Unwind@005c9bbb(void);
void Unwind@005c9bc3(void);
void Unwind@005c9bcc(void);
void Unwind@005c9bd5(void);
void Unwind@005c9bdd(void);
void Unwind@005c9c10(void);
void Unwind@005c9c18(void);
void Unwind@005c9c90(void);
void Unwind@005c9cc0(void);
void Unwind@005c9cc8(void);
void Unwind@005c9cd0(void);
void Unwind@005c9cdf(void);
void Unwind@005c9ce7(void);
void Unwind@005c9cef(void);
void Unwind@005c9d20(void);
void Unwind@005c9d50(void);
void Unwind@005c9d58(void);
void Unwind@005c9d60(void);
void Unwind@005c9d69(void);
void Unwind@005c9d72(void);
void Unwind@005c9d7a(void);
void Unwind@005c9d83(void);
void Unwind@005c9dc0(void);
void Unwind@005c9dcb(void);
void Unwind@005c9dd6(void);
void Unwind@005c9de1(void);
void Unwind@005c9dec(void);
void Unwind@005c9df7(void);
void Unwind@005c9e20(void);
void Unwind@005c9e28(void);
void Unwind@005c9e60(void);
void Unwind@005c9e68(void);
void Unwind@005c9e74(void);
void Unwind@005c9e7c(void);
void Unwind@005c9e84(void);
void Unwind@005c9e8f(void);
void Unwind@005c9e9a(void);
void Unwind@005c9ea5(void);
void Unwind@005c9eb0(void);
void Unwind@005c9ebb(void);
void Unwind@005c9ec3(void);
void Unwind@005c9ed9(void);
void Unwind@005c9ee4(void);
void Unwind@005c9eec(void);
void Unwind@005c9ef8(void);
void Unwind@005c9f00(void);
void Unwind@005c9f0b(void);
void Unwind@005c9f60(void);
void Unwind@005c9fb0(void);
void Unwind@005c9fe0(void);
void Unwind@005c9fe9(void);
void Unwind@005c9ff2(void);
void Unwind@005c9ffb(void);
void Unwind@005ca004(void);
void Unwind@005ca030(void);
void Unwind@005ca060(void);
void Unwind@005ca068(void);
void Unwind@005ca071(void);
void Unwind@005ca079(void);
void Unwind@005ca082(void);
void Unwind@005ca08a(void);
void Unwind@005ca093(void);
void Unwind@005ca09c(void);
void Unwind@005ca0a5(void);
void Unwind@005ca0e0(void);
void Unwind@005ca0e8(void);
void Unwind@005ca120(void);
void Unwind@005ca128(void);
void Unwind@005ca130(void);
void Unwind@005ca138(void);
void Unwind@005ca141(void);
void Unwind@005ca14a(void);
void Unwind@005ca153(void);
void Unwind@005ca15c(void);
void Unwind@005ca165(void);
void Unwind@005ca17e(void);
void Unwind@005ca197(void);
void Unwind@005ca1b0(void);
void Unwind@005ca1c9(void);
void Unwind@005ca1e2(void);
void Unwind@005ca240(void);
void Unwind@005ca270(void);
void Unwind@005ca2a0(void);
void Unwind@005ca2d0(void);
void Unwind@005ca2d9(void);
void Unwind@005ca2e2(void);
void Unwind@005ca310(void);
void Unwind@005ca340(void);
void Unwind@005ca359(void);
void Unwind@005ca361(void);
void Unwind@005ca36a(void);
void Unwind@005ca3a0(void);
void Unwind@005ca3a8(void);
void Unwind@005ca3b6(void);
void Unwind@005ca3c4(void);
void Unwind@005ca3d2(void);
void Unwind@005ca430(void);
void Unwind@005ca438(void);
void Unwind@005ca440(void);
void Unwind@005ca448(void);
void Unwind@005ca451(void);
void Unwind@005ca45a(void);
void Unwind@005ca490(void);
void Unwind@005ca498(void);
void Unwind@005ca4a0(void);
void Unwind@005ca4d0(void);
void Unwind@005ca4d8(void);
void Unwind@005ca4e0(void);
void Unwind@005ca4e8(void);
void Unwind@005ca4f0(void);
void Unwind@005ca4fc(void);
void Unwind@005ca508(void);
void Unwind@005ca514(void);
void Unwind@005ca51c(void);
void Unwind@005ca550(void);
void Unwind@005ca580(void);
void Unwind@005ca5b0(void);
void Unwind@005ca5b8(void);
void Unwind@005ca5c1(void);
void Unwind@005ca5c9(void);
void Unwind@005ca5d2(void);
void Unwind@005ca5da(void);
void Unwind@005ca5e3(void);
void Unwind@005ca5eb(void);
void Unwind@005ca620(void);
void Unwind@005ca628(void);
void Unwind@005ca636(void);
void Unwind@005ca644(void);
void Unwind@005ca652(void);
void Unwind@005ca690(void);
void Unwind@005ca699(void);
void Unwind@005ca6a1(void);
void Unwind@005ca6aa(void);
void Unwind@005ca6b3(void);
void Unwind@005ca6bc(void);
void Unwind@005ca6c8(void);
void Unwind@005ca6d4(void);
void Unwind@005ca6e0(void);
void Unwind@005ca6ec(void);
void Unwind@005ca6f8(void);
void Unwind@005ca701(void);
void Unwind@005ca709(void);
void Unwind@005ca711(void);
void Unwind@005ca71a(void);
void Unwind@005ca723(void);
void Unwind@005ca72b(void);
void Unwind@005ca733(void);
void Unwind@005ca73c(void);
void Unwind@005ca770(void);
void Unwind@005ca779(void);
void Unwind@005ca7b0(void);
void Unwind@005ca7b8(void);
void Unwind@005ca7c0(void);
void Unwind@005ca7ce(void);
void Unwind@005ca7dc(void);
void Unwind@005ca7ea(void);
void Unwind@005ca820(void);
void Unwind@005ca850(void);
void Unwind@005ca880(void);
void Unwind@005ca888(void);
void Unwind@005ca8c0(void);
void Unwind@005ca8c9(void);
void Unwind@005ca8d1(void);
void Unwind@005ca8da(void);
void Unwind@005ca910(void);
void Unwind@005ca918(void);
void Unwind@005ca923(void);
void Unwind@005ca950(void);
void Unwind@005ca958(void);
void Unwind@005ca960(void);
void Unwind@005ca968(void);
void Unwind@005ca971(void);
void Unwind@005ca979(void);
void Unwind@005ca982(void);
void Unwind@005ca9b0(void);
void Unwind@005ca9b8(void);
void Unwind@005ca9c6(void);
void Unwind@005ca9d4(void);
void Unwind@005ca9e2(void);
void Unwind@005ca9f0(void);
void Unwind@005caa40(void);
void Unwind@005caa49(void);
void Unwind@005caa70(void);
void Unwind@005caa78(void);
void Unwind@005caab0(void);
void Unwind@005caab8(void);
void Unwind@005caac0(void);
void Unwind@005caad2(void);
void Unwind@005caada(void);
void Unwind@005caae2(void);
void Unwind@005caaea(void);
void Unwind@005caaf2(void);
void Unwind@005caafa(void);
void Unwind@005cab02(void);
void Unwind@005cab0a(void);
void Unwind@005cab12(void);
void Unwind@005cab1a(void);
void Unwind@005cab22(void);
void Unwind@005cab2a(void);
void Unwind@005cab50(void);
void Unwind@005cab58(void);
void Unwind@005cab60(void);
void Unwind@005cab68(void);
void Unwind@005caba0(void);
void Unwind@005cabaf(void);
void Unwind@005cabbe(void);
void Unwind@005cabcd(void);
void Unwind@005cabd5(void);
void Unwind@005cabe4(void);
void Unwind@005cabec(void);
void Unwind@005cabf4(void);
void Unwind@005cac03(void);
void Unwind@005cac30(void);
void Unwind@005cac39(void);
void Unwind@005cac42(void);
void Unwind@005cac70(void);
void Unwind@005cac78(void);
void Unwind@005cac86(void);
void Unwind@005cac94(void);
void Unwind@005caca2(void);
void Unwind@005cacd0(void);
void Unwind@005cacd9(void);
void Unwind@005cace2(void);
void Unwind@005cad10(void);
void Unwind@005cad18(void);
void Unwind@005cad21(void);
void Unwind@005cad29(void);
void Unwind@005cad32(void);
void Unwind@005cad44(void);
void Unwind@005cad4f(void);
void Unwind@005cad58(void);
void Unwind@005cad61(void);
void Unwind@005cad6a(void);
void Unwind@005cad72(void);
void Unwind@005cad7b(void);
void Unwind@005cadb0(void);
void Unwind@005cadb9(void);
void Unwind@005cade0(void);
void Unwind@005cae10(void);
void Unwind@005cae40(void);
void Unwind@005cae48(void);
void Unwind@005cae50(void);
void Unwind@005cae80(void);
void Unwind@005cae89(void);
void Unwind@005caeb0(void);
void Unwind@005caeb8(void);
void Unwind@005caec6(void);
void Unwind@005caed4(void);
void Unwind@005caee2(void);
void Unwind@005caef0(void);
void Unwind@005caefe(void);
void Unwind@005caf0c(void);
void Unwind@005caf1a(void);
void Unwind@005caf28(void);
void Unwind@005caf37(void);
void Unwind@005caf80(void);
void Unwind@005caf89(void);
void Unwind@005caf92(void);
void Unwind@005caf9b(void);
void Unwind@005cafa4(void);
void Unwind@005cafad(void);
void Unwind@005cafb6(void);
void Unwind@005cafbf(void);
void Unwind@005cb000(void);
void Unwind@005cb009(void);
void Unwind@005cb012(void);
void Unwind@005cb01b(void);
void Unwind@005cb024(void);
void Unwind@005cb02d(void);
void Unwind@005cb060(void);
void Unwind@005cb069(void);
void Unwind@005cb072(void);
void Unwind@005cb07b(void);
void Unwind@005cb084(void);
void Unwind@005cb08d(void);
void Unwind@005cb0c0(void);
void Unwind@005cb0c9(void);
void Unwind@005cb0d2(void);
void Unwind@005cb0db(void);
void Unwind@005cb0e4(void);
void Unwind@005cb110(void);
void Unwind@005cb119(void);
void Unwind@005cb140(void);
void Unwind@005cb149(void);
void Unwind@005cb152(void);
void Unwind@005cb15b(void);
void Unwind@005cb190(void);
void Unwind@005cb199(void);
void Unwind@005cb1d0(void);
void Unwind@005cb1d9(void);
void Unwind@005cb1f3(void);
void Unwind@005cb220(void);
void Unwind@005cb229(void);
void Unwind@005cb250(void);
void Unwind@005cb258(void);
void Unwind@005cb267(void);
void Unwind@005cb270(void);
void Unwind@005cb279(void);
void Unwind@005cb281(void);
void Unwind@005cb28a(void);
void Unwind@005cb293(void);
void Unwind@005cb29c(void);
void Unwind@005cb2a5(void);
void Unwind@005cb2ae(void);
void Unwind@005cb2e0(void);
void Unwind@005cb2e8(void);
void Unwind@005cb2f7(void);
void Unwind@005cb300(void);
void Unwind@005cb309(void);
void Unwind@005cb312(void);
void Unwind@005cb31b(void);
void Unwind@005cb324(void);
void Unwind@005cb360(void);
void Unwind@005cb368(void);
void Unwind@005cb371(void);
void Unwind@005cb37d(void);
void Unwind@005cb386(void);
void Unwind@005cb398(void);
void Unwind@005cb3a1(void);
void Unwind@005cb3ad(void);
void Unwind@005cb3b5(void);
void Unwind@005cb3c7(void);
void Unwind@005cb3cf(void);
void Unwind@005cb3da(void);
void Unwind@005cb3e6(void);
void Unwind@005cb3f2(void);
void Unwind@005cb3fe(void);
void Unwind@005cb40a(void);
void Unwind@005cb416(void);
void Unwind@005cb41e(void);
void Unwind@005cb42a(void);
void Unwind@005cb436(void);
void Unwind@005cb442(void);
void Unwind@005cb44e(void);
void Unwind@005cb45a(void);
void Unwind@005cb466(void);
void Unwind@005cb46e(void);
void Unwind@005cb476(void);
void Unwind@005cb482(void);
void Unwind@005cb48e(void);
void Unwind@005cb49a(void);
void Unwind@005cb4a3(void);
void Unwind@005cb4af(void);
void Unwind@005cb4bb(void);
void Unwind@005cb4c7(void);
void Unwind@005cb4d0(void);
void Unwind@005cb4dc(void);
void Unwind@005cb4e8(void);
void Unwind@005cb4f4(void);
void Unwind@005cb500(void);
void Unwind@005cb50c(void);
void Unwind@005cb518(void);
void Unwind@005cb524(void);
void Unwind@005cb530(void);
void Unwind@005cb53c(void);
void Unwind@005cb548(void);
void Unwind@005cb554(void);
void Unwind@005cb560(void);
void Unwind@005cb56c(void);
void Unwind@005cb578(void);
void Unwind@005cb584(void);
void Unwind@005cb590(void);
void Unwind@005cb59c(void);
void Unwind@005cb5a8(void);
void Unwind@005cb5b4(void);
void Unwind@005cb5c0(void);
void Unwind@005cb5cc(void);
void Unwind@005cb5d8(void);
void Unwind@005cb5e4(void);
void Unwind@005cb5f0(void);
void Unwind@005cb5fc(void);
void Unwind@005cb608(void);
void Unwind@005cb614(void);
void Unwind@005cb620(void);
void Unwind@005cb629(void);
void Unwind@005cb635(void);
void Unwind@005cb63e(void);
void Unwind@005cb64a(void);
void Unwind@005cb656(void);
void Unwind@005cb673(void);
void Unwind@005cb67c(void);
void Unwind@005cb688(void);
void Unwind@005cb694(void);
void Unwind@005cb6a0(void);
void Unwind@005cb6ac(void);
void Unwind@005cb6b8(void);
void Unwind@005cb6f0(void);
void Unwind@005cb6f9(void);
void Unwind@005cb702(void);
void Unwind@005cb70e(void);
void Unwind@005cb717(void);
void Unwind@005cb71f(void);
void Unwind@005cb727(void);
void Unwind@005cb730(void);
void Unwind@005cb739(void);
void Unwind@005cb742(void);
void Unwind@005cb74b(void);
void Unwind@005cb754(void);
void Unwind@005cb75d(void);
void Unwind@005cb766(void);
void Unwind@005cb7c0(void);
void Unwind@005cb7f0(void);
void Unwind@005cb820(void);
void Unwind@005cb850(void);
void Unwind@005cb858(void);
void Unwind@005cb860(void);
void Unwind@005cb890(void);
void Unwind@005cb8a2(void);
void Unwind@005cb8d0(void);
void Unwind@005cb8d8(void);
void Unwind@005cb8e0(void);
void Unwind@005cb8e8(void);
void Unwind@005cb8f0(void);
void Unwind@005cb8f8(void);
void Unwind@005cb900(void);
void Unwind@005cb908(void);
void Unwind@005cb910(void);
void Unwind@005cb918(void);
void Unwind@005cb920(void);
void Unwind@005cb928(void);
void Unwind@005cb930(void);
void Unwind@005cb960(void);
void Unwind@005cb990(void);
void Unwind@005cb998(void);
void Unwind@005cb9ad(void);
void Unwind@005cb9b9(void);
void Unwind@005cb9c5(void);
void Unwind@005cb9d1(void);
void Unwind@005cb9dd(void);
void Unwind@005cb9e8(void);
void Unwind@005cb9fd(void);
void Unwind@005cba09(void);
void Unwind@005cba1e(void);
void Unwind@005cba60(void);
void Unwind@005cba68(void);
void Unwind@005cba71(void);
void Unwind@005cbaa0(void);
void Unwind@005cbab9(void);
void Unwind@005cbad2(void);
void Unwind@005cbb20(void);
void Unwind@005cbb29(void);
void Unwind@005cbb32(void);
void Unwind@005cbb3b(void);
void Unwind@005cbb44(void);
void Unwind@005cbb70(void);
void Unwind@005cbb78(void);
void Unwind@005cbb80(void);
void Unwind@005cbb8b(void);
void Unwind@005cbb93(void);
void Unwind@005cbb9e(void);
void Unwind@005cbbaa(void);
void Unwind@005cbbb6(void);
void Unwind@005cbbbe(void);
void Unwind@005cbbc6(void);
void Unwind@005cbbd1(void);
void Unwind@005cbbd9(void);
void Unwind@005cbbe1(void);
void Unwind@005cbbe9(void);
void Unwind@005cbbf4(void);
void Unwind@005cbbff(void);
void Unwind@005cbc0b(void);
void Unwind@005cbc16(void);
void Unwind@005cbc22(void);
void Unwind@005cbc2e(void);
void Unwind@005cbc39(void);
void Unwind@005cbc41(void);
void Unwind@005cbc60(void);
void Unwind@005cbc68(void);
void Unwind@005cbc70(void);
void Unwind@005cbc7b(void);
void Unwind@005cbc83(void);
void Unwind@005cbc8b(void);
void Unwind@005cbc93(void);
void Unwind@005cbcb2(void);
void Unwind@005cbcba(void);
void Unwind@005cbcc2(void);
void Unwind@005cbcca(void);
void Unwind@005cbcd2(void);
void Unwind@005cbcdd(void);
void Unwind@005cbcfc(void);
void Unwind@005cbd07(void);
void Unwind@005cbd0f(void);
void Unwind@005cbd1a(void);
void Unwind@005cbd22(void);
void Unwind@005cbd2d(void);
void Unwind@005cbd4c(void);
void Unwind@005cbd57(void);
void Unwind@005cbd5f(void);
void Unwind@005cbd6a(void);
void Unwind@005cbd72(void);
void Unwind@005cbd7d(void);
void Unwind@005cbd9c(void);
void Unwind@005cbda7(void);
void Unwind@005cbdb2(void);
void Unwind@005cbdbd(void);
void Unwind@005cbdc8(void);
void Unwind@005cbdd3(void);
void Unwind@005cbddb(void);
void Unwind@005cbde3(void);
void Unwind@005cbdee(void);
void Unwind@005cbdf6(void);
void Unwind@005cbdfe(void);
void Unwind@005cbe06(void);
void Unwind@005cbe11(void);
void Unwind@005cbe19(void);
void Unwind@005cbe21(void);
void Unwind@005cbe29(void);
void Unwind@005cbe4b(void);
void Unwind@005cbe80(void);
void Unwind@005cbe88(void);
void Unwind@005cbe90(void);
void Unwind@005cbe99(void);
void Unwind@005cbea2(void);
void Unwind@005cbeaa(void);
void Unwind@005cbeb3(void);
void Unwind@005cbebc(void);
void Unwind@005cbec4(void);
void Unwind@005cbecc(void);
void Unwind@005cbed4(void);
void Unwind@005cbedd(void);
void Unwind@005cbf10(void);
void Unwind@005cbf18(void);
void Unwind@005cbf21(void);
void Unwind@005cbf2a(void);
void Unwind@005cbf32(void);
void Unwind@005cbf3a(void);
void Unwind@005cbf43(void);
void Unwind@005cbf4c(void);
void Unwind@005cbf54(void);
void Unwind@005cbf5c(void);
void Unwind@005cbf65(void);
void Unwind@005cbfa0(void);
void Unwind@005cbfd0(void);
void Unwind@005cbfd8(void);
void Unwind@005cbfe1(void);
void Unwind@005cc010(void);
void Unwind@005cc018(void);
void Unwind@005cc020(void);
void Unwind@005cc02b(void);
void Unwind@005cc033(void);
void Unwind@005cc03b(void);
void Unwind@005cc043(void);
void Unwind@005cc04e(void);
void Unwind@005cc05a(void);
void Unwind@005cc066(void);
void Unwind@005cc06e(void);
void Unwind@005cc076(void);
void Unwind@005cc095(void);
void Unwind@005cc0a0(void);
void Unwind@005cc0a8(void);
void Unwind@005cc0b0(void);
void Unwind@005cc0bb(void);
void Unwind@005cc0c6(void);
void Unwind@005cc0d1(void);
void Unwind@005cc0dc(void);
void Unwind@005cc0e4(void);
void Unwind@005cc0ec(void);
void Unwind@005cc0f4(void);
void Unwind@005cc0fc(void);
void Unwind@005cc104(void);
void Unwind@005cc10c(void);
void Unwind@005cc118(void);
void Unwind@005cc124(void);
void Unwind@005cc12c(void);
void Unwind@005cc134(void);
void Unwind@005cc13c(void);
void Unwind@005cc15b(void);
void Unwind@005cc163(void);
void Unwind@005cc16b(void);
void Unwind@005cc173(void);
void Unwind@005cc17b(void);
void Unwind@005cc183(void);
void Unwind@005cc18b(void);
void Unwind@005cc193(void);
void Unwind@005cc19b(void);
void Unwind@005cc1a3(void);
void Unwind@005cc1ab(void);
void Unwind@005cc1b3(void);
void Unwind@005cc1bb(void);
void Unwind@005cc1c7(void);
void Unwind@005cc1d3(void);
void Unwind@005cc1db(void);
void Unwind@005cc1e3(void);
void Unwind@005cc1eb(void);
void Unwind@005cc1f3(void);
void Unwind@005cc1fb(void);
void Unwind@005cc203(void);
void Unwind@005cc20e(void);
void Unwind@005cc219(void);
void Unwind@005cc221(void);
void Unwind@005cc22d(void);
void Unwind@005cc239(void);
void Unwind@005cc270(void);
void Unwind@005cc278(void);
void Unwind@005cc280(void);
void Unwind@005cc288(void);
void Unwind@005cc293(void);
void Unwind@005cc29b(void);
void Unwind@005cc2a3(void);
void Unwind@005cc2ae(void);
void Unwind@005cc2e0(void);
void Unwind@005cc2e8(void);
void Unwind@005cc2f1(void);
void Unwind@005cc2f9(void);
void Unwind@005cc301(void);
void Unwind@005cc330(void);
void Unwind@005cc360(void);
void Unwind@005cc369(void);
void Unwind@005cc372(void);
void Unwind@005cc37b(void);
void Unwind@005cc3a0(void);
void Unwind@005cc3a8(void);
void Unwind@005cc3b1(void);
void Unwind@005cc3ba(void);
void Unwind@005cc3c3(void);
void Unwind@005cc400(void);
void Unwind@005cc440(void);
void Unwind@005cc449(void);
void Unwind@005cc451(void);
void Unwind@005cc480(void);
void Unwind@005cc488(void);
void Unwind@005cc496(void);
void Unwind@005cc4a4(void);
void Unwind@005cc4b2(void);
void Unwind@005cc4c0(void);
void Unwind@005cc4ce(void);
void Unwind@005cc4dc(void);
void Unwind@005cc4ea(void);
void Unwind@005cc520(void);
void Unwind@005cc52c(void);
void Unwind@005cc534(void);
void Unwind@005cc540(void);
void Unwind@005cc548(void);
void Unwind@005cc550(void);
void Unwind@005cc55c(void);
void Unwind@005cc565(void);
void Unwind@005cc56e(void);
void Unwind@005cc576(void);
void Unwind@005cc57e(void);
void Unwind@005cc587(void);
void Unwind@005cc590(void);
void Unwind@005cc598(void);
void Unwind@005cc5a0(void);
void Unwind@005cc5a9(void);
void Unwind@005cc5e0(void);
void Unwind@005cc610(void);
void Unwind@005cc618(void);
void Unwind@005cc650(void);
void Unwind@005cc658(void);
void Unwind@005cc660(void);
void Unwind@005cc690(void);
void Unwind@005cc6c0(void);
void Unwind@005cc6c8(void);
void Unwind@005cc6d1(void);
void Unwind@005cc6da(void);
void Unwind@005cc6e3(void);
void Unwind@005cc720(void);
void Unwind@005cc728(void);
void Unwind@005cc731(void);
void Unwind@005cc739(void);
void Unwind@005cc770(void);
void Unwind@005cc778(void);
void Unwind@005cc7b0(void);
void Unwind@005cc7c9(void);
void Unwind@005cc7d1(void);
void Unwind@005cc7da(void);
void Unwind@005cc7e2(void);
void Unwind@005cc7eb(void);
void Unwind@005cc7f4(void);
void Unwind@005cc7fc(void);
void Unwind@005cc830(void);
void Unwind@005cc838(void);
void Unwind@005cc846(void);
void Unwind@005cc854(void);
void Unwind@005cc890(void);
void Unwind@005cc898(void);
void Unwind@005cc8a0(void);
void Unwind@005cc8a8(void);
void Unwind@005cc8b1(void);
void Unwind@005cc8b9(void);
void Unwind@005cc8c1(void);
void Unwind@005cc8ca(void);
void Unwind@005cc8d3(void);
void Unwind@005cc8db(void);
void Unwind@005cc8e4(void);
void Unwind@005cc8ec(void);
void Unwind@005cc8f4(void);
void Unwind@005cc8fd(void);
void Unwind@005cc930(void);
void Unwind@005cc938(void);
void Unwind@005cc970(void);
void Unwind@005cc9a0(void);
void Unwind@005cc9a8(void);
void Unwind@005cc9e0(void);
void Unwind@005cc9eb(void);
void Unwind@005cca20(void);
void Unwind@005cca70(void);
void Unwind@005ccac0(void);
void Unwind@005ccb10(void);
void Unwind@005ccb18(void);
void Unwind@005ccb3a(void);
void Unwind@005ccb42(void);
void Unwind@005ccb80(void);
void Unwind@005ccbb0(void);
void Unwind@005ccbb8(void);
void Unwind@005ccbc3(void);
void Unwind@005ccbd9(void);
void Unwind@005ccbe4(void);
void Unwind@005ccbef(void);
void Unwind@005ccbf7(void);
void Unwind@005ccc40(void);
void Unwind@005ccc52(void);
void Unwind@005ccc64(void);
void Unwind@005ccc76(void);
void Unwind@005cccb0(void);
void Unwind@005ccce0(void);
void Unwind@005cccf2(void);
void Unwind@005ccd60(void);
void Unwind@005ccdb0(void);
void Unwind@005ccdb8(void);
void Unwind@005ccdc0(void);
void Unwind@005ccdf0(void);
void Unwind@005ccdf8(void);
void Unwind@005cce30(void);
void Unwind@005cce3b(void);
void Unwind@005cce80(void);
void Unwind@005cce88(void);
void Unwind@005cce90(void);
void Unwind@005cce98(void);
void Unwind@005cced0(void);
void Unwind@005cced9(void);
void Unwind@005ccee1(void);
void Unwind@005ccee9(void);
void Unwind@005ccef1(void);
void Unwind@005ccf20(void);
void Unwind@005ccf28(void);
void Unwind@005ccf60(void);
void Unwind@005ccf68(void);
void Unwind@005ccf70(void);
void Unwind@005ccf89(void);
void Unwind@005ccf91(void);
void Unwind@005ccf99(void);
void Unwind@005ccfd0(void);
void Unwind@005ccfdb(void);
void Unwind@005ccfe6(void);
void Unwind@005ccff1(void);
void Unwind@005cd030(void);
void Unwind@005cd038(void);
void Unwind@005cd060(void);
void Unwind@005cd068(void);
void Unwind@005cd0a0(void);
void Unwind@005cd0a8(void);
void Unwind@005cd0b0(void);
void Unwind@005cd0b8(void);
void Unwind@005cd100(void);
void Unwind@005cd108(void);
void Unwind@005cd121(void);
void Unwind@005cd150(void);
void Unwind@005cd159(void);
void Unwind@005cd180(void);
void Unwind@005cd189(void);
void Unwind@005cd192(void);
void Unwind@005cd1c0(void);
void Unwind@005cd1c8(void);
void Unwind@005cd1d0(void);
void Unwind@005cd1d8(void);
void Unwind@005cd1ea(void);
void Unwind@005cd1fc(void);
void Unwind@005cd240(void);
void Unwind@005cd290(void);
void Unwind@005cd298(void);
void Unwind@005cd2a3(void);
void Unwind@005cd2ae(void);
void Unwind@005cd2b9(void);
void Unwind@005cd2c4(void);
void Unwind@005cd2d2(void);
void Unwind@005cd2e0(void);
void Unwind@005cd2f8(void);
void Unwind@005cd306(void);
void Unwind@005cd314(void);
void Unwind@005cd322(void);
void Unwind@005cd330(void);
void Unwind@005cd33e(void);
void Unwind@005cd34c(void);
void Unwind@005cd35a(void);
void Unwind@005cd368(void);
void Unwind@005cd376(void);
void Unwind@005cd3c0(void);
void Unwind@005cd3cb(void);
void Unwind@005cd430(void);
void Unwind@005cd480(void);
void Unwind@005cd4d0(void);
void Unwind@005cd4d8(void);
void Unwind@005cd4e3(void);
void Unwind@005cd4ee(void);
void Unwind@005cd4fc(void);
void Unwind@005cd514(void);
void Unwind@005cd522(void);
void Unwind@005cd530(void);
void Unwind@005cd53e(void);
void Unwind@005cd54c(void);
void Unwind@005cd55a(void);
void Unwind@005cd568(void);
void Unwind@005cd576(void);
void Unwind@005cd584(void);
void Unwind@005cd592(void);
void Unwind@005cd5a0(void);
void Unwind@005cd5ae(void);
void Unwind@005cd5bc(void);
void Unwind@005cd5ca(void);
void Unwind@005cd5d8(void);
void Unwind@005cd5e6(void);
void Unwind@005cd5f4(void);
void Unwind@005cd602(void);
void Unwind@005cd610(void);
void Unwind@005cd61e(void);
void Unwind@005cd62c(void);
void Unwind@005cd680(void);
void Unwind@005cd6e0(void);
void Unwind@005cd730(void);
void Unwind@005cd738(void);
void Unwind@005cd770(void);
void Unwind@005cd7a0(void);
void Unwind@005cd7a8(void);
void Unwind@005cd7e0(void);
void Unwind@005cd820(void);
void Unwind@005cd850(void);
void Unwind@005cd890(void);
void Unwind@005cd8c0(void);
void Unwind@005cd900(void);
void Unwind@005cd90b(void);
void Unwind@005cd940(void);
void Unwind@005cd980(void);
void Unwind@005cd9c0(void);
void Unwind@005cda00(void);
void Unwind@005cda0b(void);
void Unwind@005cda16(void);
void Unwind@005cda21(void);
void Unwind@005cda2c(void);
void Unwind@005cda37(void);
void Unwind@005cda42(void);
void Unwind@005cda4d(void);
void Unwind@005cda58(void);
void Unwind@005cda63(void);
void Unwind@005cda6e(void);
void Unwind@005cda79(void);
void Unwind@005cda84(void);
void Unwind@005cda8f(void);
void Unwind@005cda9a(void);
void Unwind@005cdaa5(void);
void Unwind@005cdae0(void);
void Unwind@005cdaeb(void);
void Unwind@005cdaf6(void);
void Unwind@005cdb01(void);
void Unwind@005cdb0c(void);
void Unwind@005cdb17(void);
void Unwind@005cdb22(void);
void Unwind@005cdb60(void);
void Unwind@005cdbc0(void);
void Unwind@005cdc10(void);
void Unwind@005cdc1f(void);
void Unwind@005cdc50(void);
void Unwind@005cdc80(void);
void __fastcall FUN_005cdd30(_Tree<> *param_1);
void FUN_005cdd60(void);
void FUN_005cddc0(void);
void FUN_005cde20(void);
void FUN_005cde30(void);
void FUN_005cde90(void);
void FUN_005cdef0(void);
void FUN_005cdf50(void);
void FUN_005cdfb0(void);
void __fastcall FUN_005cdfe0(_Tree<> *param_1);
void FUN_005ce060(void);
void FUN_005ce070(void);
void FUN_005ce0d0(void);
void FUN_005ce130(void);
void FUN_005ce190(void);
void FUN_005ce1f0(void);
void FUN_005ce250(void);
void FUN_005ce2b0(void);
void FUN_005ce310(void);
void FUN_005ce370(void);
void FUN_005ce3d0(void);
void FUN_005ce430(void);
void FUN_005ce490(void);
void FUN_005ce4f0(void);
void FUN_005ce550(void);
void FUN_005ce5b0(void);
void FUN_005ce610(void);
void FUN_005ce620(void);
void FUN_005ce680(void);
void FUN_005ce6e0(void);
void FUN_005ce740(void);
void FUN_005ce7a0(void);
void FUN_005ce7b0(void);
void FUN_005ce820(void);
void `dynamic_atexit_destructor_for_'rnr''(void);
void `dynamic_atexit_destructor_for_'RakNet::RakString::freeList''(void);
void __cdecl RakNet::RakString::`dynamic_atexit_destructor_for_'cleanup''(void);
void `GetPoolMutex'::`2'::`dynamic_atexit_destructor_for_'poolMutex''(void);

