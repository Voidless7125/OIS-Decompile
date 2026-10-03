typedef struct _s__RTTIBaseClassDescriptor _s__RTTIBaseClassDescriptor, *P_s__RTTIBaseClassDescriptor;


typedef struct _s__RTTIClassHierarchyDescriptor _s__RTTIClassHierarchyDescriptor, *P_s__RTTIClassHierarchyDescriptor;


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


typedef struct _s_UnwindMapEntry _s_UnwindMapEntry, *P_s_UnwindMapEntry;


struct _s_UnwindMapEntry {
    __ehstate_t toState;
    void (*action)(void);
};


typedef struct _s_ESTypeList _s_ESTypeList, *P_s_ESTypeList;


typedef struct _s_HandlerType _s_HandlerType, *P_s_HandlerType;


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


typedef struct _s__RTTICompleteObjectLocator _s__RTTICompleteObjectLocator, *P_s__RTTICompleteObjectLocator;


struct _s__RTTICompleteObjectLocator {
    dword signature;
    dword offset; // offset of vbtable within class
    dword cdOffset; // constructor displacement offset
    struct TypeDescriptor *pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    RTTIClassHierarchyDescriptor *pClassDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3)
};


typedef struct _s_TryBlockMapEntry _s_TryBlockMapEntry, *P_s_TryBlockMapEntry;


struct _s_TryBlockMapEntry {
    __ehstate_t tryLow;
    __ehstate_t tryHigh;
    __ehstate_t catchHigh;
    int nCatches;
    HandlerType *pHandlerArray;
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


typedef struct _struct_661 _struct_661, *P_struct_661;


typedef struct _struct_662 _struct_662, *P_struct_662;


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


typedef struct _struct_519 _struct_519, *P_struct_519;


struct _struct_519 {
    DWORD Offset;
    DWORD OffsetHigh;
};


typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;


struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};


typedef struct _STARTUPINFOW _STARTUPINFOW, *P_STARTUPINFOW;


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


typedef struct _struct_19 _struct_19, *P_struct_19;


typedef struct _struct_20 _struct_20, *P_struct_20;


struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};


struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};


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


typedef ULONG_PTR SIZE_T;


typedef struct _struct_1227 _struct_1227, *P_struct_1227;


typedef struct _struct_1228 _struct_1228, *P_struct_1228;


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


typedef struct _s__CatchableTypeArray _s__CatchableTypeArray, *P_s__CatchableTypeArray;


typedef struct _s__CatchableType _s__CatchableType, *P_s__CatchableType;


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


typedef struct __scrt_narrow_argv_policy __scrt_narrow_argv_policy, *P__scrt_narrow_argv_policy;


struct __scrt_narrow_argv_policy {
    undefined field0_0x0;
};


// WARNING! conflicting data type names: /ois.pdb/_STARTUPINFOW - /winbase.h/_STARTUPINFOW
typedef struct _STARTUPINFOW STARTUPINFOW;


typedef struct _s_ThrowInfo _s_ThrowInfo, *P_s_ThrowInfo;


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


typedef struct sockaddr_in sockaddr_in, *Psockaddr_in;


// WARNING! conflicting data type names: /ois.pdb/in_addr - /inaddr.h/in_addr
struct sockaddr_in {
    ushort sin_family;
    ushort sin_port;
    struct in_addr sin_addr;
    char sin_zero[8];
};


// WARNING! conflicting data type names: /ois.pdb/LPSTR - /winnt.h/LPSTR
typedef struct _s__ThrowInfo _s__ThrowInfo, *P_s__ThrowInfo;


struct _s__ThrowInfo {
    uint attributes;
    void *pmfnUnwind;
    void *pForwardCompat;
    struct _s__CatchableTypeArray *pCatchableTypeArray;
};


typedef struct _s__RTTIBaseClassArray _s__RTTIBaseClassArray, *P_s__RTTIBaseClassArray;


struct _s__RTTIBaseClassArray {
    struct _s__RTTIBaseClassDescriptor *arrayOfBaseClassDescriptors[0];
};


typedef struct __std_type_info_data __std_type_info_data, *P__std_type_info_data;


struct __std_type_info_data {
    char *_UndecoratedName;
    char _DecoratedName[1];
};


typedef struct __scrt_file_policy __scrt_file_policy, *P__scrt_file_policy;


struct __scrt_file_policy {
    undefined field0_0x0;
};


typedef struct __scrt_winmain_policy __scrt_winmain_policy, *P__scrt_winmain_policy;


struct __scrt_winmain_policy {
    undefined field0_0x0;
};


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


typedef void *__scrt_dllmain_type;


typedef int socklen_t;


// WARNING! conflicting data type names: /ois.pdb/LPCWSTR - /winnt.h/LPCWSTR
typedef struct __scrt_nofile_policy __scrt_nofile_policy, *P__scrt_nofile_policy;


struct __scrt_nofile_policy {
    undefined field0_0x0;
};


typedef struct __scrt_wide_environment_policy __scrt_wide_environment_policy, *P__scrt_wide_environment_policy;


struct __scrt_wide_environment_policy {
    undefined field0_0x0;
};


typedef short SHORT;


typedef struct StrAndBool StrAndBool, *PStrAndBool;


struct StrAndBool {
    char *str;
    bool b;
};


typedef struct _SINGLE_LIST_ENTRY SLIST_ENTRY;


typedef struct __scrt_no_environment_policy __scrt_no_environment_policy, *P__scrt_no_environment_policy;


struct __scrt_no_environment_policy {
    undefined field0_0x0;
};


typedef uchar StringTableType;


typedef struct __std_exception_data __std_exception_data, *P__std_exception_data;


struct __std_exception_data {
    char *_What;
    bool _DoFree;
};


typedef enum __scrt_module_type {
    dll=0,
    exe=1
} __scrt_module_type;


// WARNING! conflicting data type names: /ois.pdb/_LARGE_INTEGER - /winnt.h/_LARGE_INTEGER
typedef uint size_t;


typedef struct __scrt_main_policy __scrt_main_policy, *P__scrt_main_policy;


struct __scrt_main_policy {
    undefined field0_0x0;
};


typedef enum __scrt_native_startup_state {
    uninitialized=0,
    initializing=1,
    initialized=2
} __scrt_native_startup_state;


typedef struct __scrt_wide_argv_policy __scrt_wide_argv_policy, *P__scrt_wide_argv_policy;


struct __scrt_wide_argv_policy {
    undefined field0_0x0;
};


typedef struct __scrt_no_argv_policy __scrt_no_argv_policy, *P__scrt_no_argv_policy;


struct __scrt_no_argv_policy {
    undefined field0_0x0;
};


typedef struct __scrt_narrow_environment_policy __scrt_narrow_environment_policy, *P__scrt_narrow_environment_policy;


struct __scrt_narrow_environment_policy {
    undefined field0_0x0;
};


typedef struct __scrt_enclavemain_policy __scrt_enclavemain_policy, *P__scrt_enclavemain_policy;


struct __scrt_enclavemain_policy {
    undefined field0_0x0;
};


typedef struct _SLIST_HEADER_s_1 _SLIST_HEADER_s_1, *P_SLIST_HEADER_s_1;


struct _SLIST_HEADER_s_1 {
    struct _SINGLE_LIST_ENTRY Next;
    ushort Depth;
    ushort CpuId;
};


// WARNING! conflicting data type names: /ois.pdb/_LARGE_INTEGER/<unnamed-type-u> - /ois.pdb/_TP_CALLBACK_ENVIRON_V3/<unnamed-type-u>
typedef struct SocketLayerOverride SocketLayerOverride, *PSocketLayerOverride;


struct SocketLayerOverride {
};


typedef struct SystemAddress SystemAddress, *PSystemAddress;


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


typedef struct SocketDescriptor SocketDescriptor, *PSocketDescriptor;


struct SocketDescriptor {
};


typedef struct SimpleMutex SimpleMutex, *PSimpleMutex;


struct SimpleMutex {
    struct _RTL_CRITICAL_SECTION criticalSection;
};


typedef struct StringCompressor StringCompressor, *PStringCompressor;


struct StringCompressor {
    struct Map<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>> huffmanEncodingTrees;
};


typedef struct StringTable StringTable, *PStringTable;


struct StringTable {
    struct OrderedList<char*,StrAndBool,&RakNet::StrAndBoolComp> orderedStringList;
};


typedef struct SplitPacketChannel SplitPacketChannel, *PSplitPacketChannel;


struct SplitPacketChannel {
};


typedef struct SignaledEvent SignaledEvent, *PSignaledEvent;


struct SignaledEvent {
};


typedef struct SocketLayer SocketLayer, *PSocketLayer;


struct SocketLayer {
    undefined field0_0x0;
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


typedef struct SocketQueryOutput SocketQueryOutput, *PSocketQueryOutput;


struct SocketQueryOutput {
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


typedef struct StringFileInfo StringFileInfo, *PStringFileInfo;


struct StringFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};


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


typedef struct StringInfo StringInfo, *PStringInfo;


struct StringInfo {
    word wLength;
    word wValueLength;
    word wType;
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


typedef struct SoundSpace SoundSpace, *PSoundSpace;


struct SoundSpace { // PlaceHolder Structure
};


typedef struct ScreenTab ScreenTab, *PScreenTab;


struct ScreenTab { // PlaceHolder Structure
};


typedef struct ScreenLayout ScreenLayout, *PScreenLayout;


struct ScreenLayout { // PlaceHolder Structure
};


typedef struct StateModifier StateModifier, *PStateModifier;


struct StateModifier { // PlaceHolder Structure
};


typedef struct SensorSelectionElement SensorSelectionElement, *PSensorSelectionElement;


struct SensorSelectionElement { // PlaceHolder Structure
};


typedef struct ShipConfiguration ShipConfiguration, *PShipConfiguration;


struct ShipConfiguration { // PlaceHolder Structure
};


typedef struct ShipChatterData ShipChatterData, *PShipChatterData;


struct ShipChatterData { // PlaceHolder Structure
};


typedef enum ShipDataInputType {
} ShipDataInputType;


// WARNING! conflicting data type names: /Demangler/EMetaGameAction/MetaGameAction - /Demangler/MetaGameAction
typedef enum ShipLook {
} ShipLook;


typedef enum ScenarioCategory {
} ScenarioCategory;


typedef enum ShipDataType {
} ShipDataType;


struct _String_iterator<std::_String_val<std::_Simple_types<char>_>_> { // PlaceHolder Structure
};


struct _String_iterator<class_std::_String_val<struct_std::_Simple_types<char>_>_> { // PlaceHolder Structure
};


struct _String_const_iterator<std::_String_val<std::_Simple_types<char>_>_> { // PlaceHolder Structure
};


struct _String_val<std::_Simple_types<char>_> { // PlaceHolder Structure
};


typedef enum SyntheticObjectType {
} SyntheticObjectType;


typedef enum ShipCommand {
} ShipCommand;


typedef enum ShipDataCheckType {
} ShipDataCheckType;


typedef enum ScenarioType {
} ScenarioType;


typedef enum Sound {
} Sound;


typedef enum StellarCategory {
} StellarCategory;


typedef struct SpriteFrameCache SpriteFrameCache, *PSpriteFrameCache;


struct SpriteFrameCache { // PlaceHolder Structure
};


typedef struct __Set __Set, *P__Set;


struct __Set { // PlaceHolder Structure
};


typedef struct Size Size, *PSize;


struct Size { // PlaceHolder Structure
};


typedef struct Scheduler Scheduler, *PScheduler;


struct Scheduler { // PlaceHolder Structure
};


typedef struct Scene Scene, *PScene;


struct Scene { // PlaceHolder Structure
};


typedef struct SpotLight SpotLight, *PSpotLight;


struct SpotLight { // PlaceHolder Structure
};


typedef struct SpriteFrame SpriteFrame, *PSpriteFrame;


struct SpriteFrame { // PlaceHolder Structure
};


typedef struct Sprite3D Sprite3D, *PSprite3D;


struct Sprite3D { // PlaceHolder Structure
};


typedef struct SpriteBatchNode SpriteBatchNode, *PSpriteBatchNode;


struct SpriteBatchNode { // PlaceHolder Structure
};


typedef struct Sequence Sequence, *PSequence;


struct Sequence { // PlaceHolder Structure
};


typedef struct Sprite Sprite, *PSprite;


struct Sprite { // PlaceHolder Structure
};


typedef enum SetIntervalReason {
} SetIntervalReason;


typedef struct Scale9Sprite Scale9Sprite, *PScale9Sprite;


struct Scale9Sprite { // PlaceHolder Structure
};


typedef enum ShipTextDataType {
} ShipTextDataType;


typedef enum SyncVarType {
} SyncVarType;


typedef struct System System, *PSystem;


struct System { // PlaceHolder Structure
};


typedef enum ScreenType {
} ScreenType;
