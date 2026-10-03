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


typedef struct StringTable StringTable, *PStringTable;


struct StringTable {
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


typedef struct StringFileInfo StringFileInfo, *PStringFileInfo;


struct StringFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};


typedef struct StringInfo StringInfo, *PStringInfo;


struct StringInfo {
    word wLength;
    word wValueLength;
    word wType;
};


typedef struct _s_CatchableType _s_CatchableType, *P_s_CatchableType;


// WARNING! conflicting data type names: /ehdata.h/TypeDescriptor - /TypeDescriptor
struct _s_CatchableType {
    uint properties;
    struct TypeDescriptor *pType;
    struct PMD thisDisplacement;
    int sizeOrOffset;
    PMFN copyFunction;
};


typedef struct _s_CatchableTypeArray _s_CatchableTypeArray, *P_s_CatchableTypeArray;


struct _s_CatchableTypeArray {
    int nCatchableTypes;
    CatchableType *arrayOfCatchableTypes[0];
};


typedef struct _s_ThrowInfo _s_ThrowInfo, *P_s_ThrowInfo;


struct _s_ThrowInfo {
    uint attributes;
    PMFN pmfnUnwind;
    int (*pForwardCompat)(void);
    CatchableTypeArray *pCatchableTypeArray;
};


typedef UINT_PTR SOCKET;


typedef struct sockaddr sockaddr, *Psockaddr;


struct sockaddr {
    u_short sa_family;
    char sa_data[14];
};


struct _String_iterator<std::_String_val<std::_Simple_types<char>_>_> { // PlaceHolder Structure
};


typedef struct Sound Sound, *PSound;


struct Sound { // PlaceHolder Structure
};


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


typedef uint size_t;
