typedef byte __uint8;


typedef struct _s_UnwindMapEntry UnwindMapEntry;


typedef ulonglong __uint64;


typedef ushort __uint32;


typedef ushort __uint16;


typedef union _union_660 _union_660, *P_union_660;


typedef union _union_663 _union_663, *P_union_663;


union _union_663 {
    DWORD dmDisplayFlags;
    DWORD dmNup;
};


union _union_660 {
    struct _struct_661 field0;
    struct _struct_662 field1;
};


typedef ulong ULONG_PTR;


typedef union _union_518 _union_518, *P_union_518;


union _union_518 {
    struct _struct_519 s;
    PVOID Pointer;
};


typedef double ULONGLONG;


typedef uint UINT_PTR;


typedef union _union_1226 _union_1226, *P_union_1226;


typedef ulong ULONG;


typedef uchar UCHAR;


typedef ushort USHORT;


union _union_1226 {
    struct _struct_1227 S_un_b;
    struct _struct_1228 S_un_w;
    ULONG S_addr;
};


typedef struct uint24_t uint24_t, *Puint24_t;


struct uint24_t {
    uint val;
};


typedef ulong u_long;


typedef uint __UDPSOCKET__;


typedef uint UINT;


typedef uint uintptr_t;


typedef enum _USER_ACTIVITY_PRESENCE {
    PowerUserPresent=0,
    PowerUserNotPresent=1,
    PowerUserInactive=2,
    PowerUserInvalid=3,
    PowerUserMaximum=3
} _USER_ACTIVITY_PRESENCE;


typedef struct UnreliableWithAckReceiptNode UnreliableWithAckReceiptNode, *PUnreliableWithAckReceiptNode;


struct UnreliableWithAckReceiptNode {
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


typedef ushort u_short;


typedef struct UserStatsStored_t UserStatsStored_t, *PUserStatsStored_t;


struct UserStatsStored_t { // PlaceHolder Structure
};


typedef struct UserStatsReceived_t UserStatsReceived_t, *PUserStatsReceived_t;


struct UserStatsReceived_t { // PlaceHolder Structure
};


struct _Uninitialized_backout_al<CommsCommand*,std::allocator<CommsCommand>_> { // PlaceHolder Structure
};


struct _Uninitialized_backout_al<Requirement*,std::allocator<Requirement>_> { // PlaceHolder Structure
};


struct _Uninitialized_backout_al<JumpGateRoute*,std::allocator<JumpGateRoute>_> { // PlaceHolder Structure
};


struct _Uninitialized_backout_al<PrivateCommOption*,std::allocator<PrivateCommOption>_> { // PlaceHolder Structure
};


struct _Uninitialized_backout_al<Destination*,std::allocator<Destination>_> { // PlaceHolder Structure
};


struct _Uninitialized_backout_al<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>*,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> { // PlaceHolder Structure
};


struct _Uninitialized_backout_al<InputCommand*,std::allocator<InputCommand>_> { // PlaceHolder Structure
};


struct _Uninitialized_backout_al<Widget*,std::allocator<Widget>_> { // PlaceHolder Structure
};


struct _Uninitialized_backout_al<SensorSelectionElement*,std::allocator<SensorSelectionElement>_> { // PlaceHolder Structure
};


struct _Uninitialized_backout_al<word*,std::allocator<word>_> { // PlaceHolder Structure
};


struct _Uninitialized_backout_al<cocos2d::Rect*,std::allocator<cocos2d::Rect>_> { // PlaceHolder Structure
};


struct _Uninitialized_backout_al<NavMarker*,std::allocator<NavMarker>_> { // PlaceHolder Structure
};


struct _Uninitialized_backout_al<MouseCursor*,std::allocator<MouseCursor>_> { // PlaceHolder Structure
};


struct _Uninitialized_backout_al<Command*,std::allocator<Command>_> { // PlaceHolder Structure
};


struct _Uninitialized_backout_al<CameraPos*,std::allocator<CameraPos>_> { // PlaceHolder Structure
};


struct _Uninitialized_backout_al<ScreenData*,std::allocator<ScreenData>_> { // PlaceHolder Structure
};


struct _Uninitialized_backout_al<Selectable*,std::allocator<Selectable>_> { // PlaceHolder Structure
};
