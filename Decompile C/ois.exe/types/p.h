typedef struct PMD PMD, *PPMD;


typedef int ptrdiff_t;


struct PMD {
    ptrdiff_t mdisp;
    ptrdiff_t pdisp;
    ptrdiff_t vdisp;
};


typedef struct _POINTL _POINTL, *P_POINTL;


typedef struct _POINTL POINTL;


struct _POINTL {
    LONG x;
    LONG y;
};


typedef void *PVOID;


typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;


typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;


typedef CONTEXT *PCONTEXT;


typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;


typedef union _SLIST_HEADER *PSLIST_HEADER;


typedef void *_PIFV;


typedef uint *PUINT_PTR;


typedef struct _PMD _PMD, *P_PMD;


struct _PMD {
    int mdisp;
    int pdisp;
    int vdisp;
};


// WARNING! conflicting data type names: /ois.pdb/LPCSTR - /winnt.h/LPCSTR
// WARNING! conflicting data type names: /ois.pdb/SIZE_T - /basetsd.h/SIZE_T
typedef long *PLONG;


typedef struct _EXCEPTION_REGISTRATION_RECORD *PEXCEPTION_REGISTRATION_RECORD;


typedef struct _TP_POOL *PTP_POOL;


typedef struct _IMAGE_NT_HEADERS *PIMAGE_NT_HEADERS;


typedef struct _RTL_CONDITION_VARIABLE *PCONDITION_VARIABLE;


typedef struct _TP_CLEANUP_GROUP *PTP_CLEANUP_GROUP;


typedef struct _EVENT_DATA_DESCRIPTOR *PEVENT_DATA_DESCRIPTOR;


typedef struct _EVENT_DESCRIPTOR *PCEVENT_DESCRIPTOR;


typedef wchar *PUWSTR;


// WARNING! conflicting data type names: /ois.pdb/FILETIME - /WinDef.h/FILETIME
typedef void *PTP_CLEANUP_GROUP_CANCEL_CALLBACK;


typedef struct _IMAGE_SECTION_HEADER *PIMAGE_SECTION_HEADER;


typedef void *PTP_SIMPLE_CALLBACK;


// WARNING! conflicting data type names: /ois.pdb/GUID - /GUID
typedef __int64 *PLONG64;


typedef struct _TP_CALLBACK_INSTANCE *PTP_CALLBACK_INSTANCE;


typedef void *PEXCEPTION_ROUTINE;


typedef struct _IMAGE_NT_HEADERS *PIMAGE_NT_HEADERS32;


typedef enum PacketPriority {
    IMMEDIATE_PRIORITY=0,
    HIGH_PRIORITY=1,
    MEDIUM_PRIORITY=2,
    LOW_PRIORITY=3,
    NUMBER_OF_PRIORITIES=4
} PacketPriority;


typedef void *PIMAGE_TLS_CALLBACK;


typedef wchar *PCUWSTR;


// WARNING! conflicting data type names: /ois.pdb/PEXCEPTION_RECORD - /winnt.h/PEXCEPTION_RECORD
typedef void *_PMFN;


typedef struct _NT_TIB *PNT_TIB;


typedef char *PCHAR;


typedef struct _EXCEPTION_POINTERS *PEXCEPTION_POINTERS;


typedef short *PSHORT;


typedef void *_PVFV;


typedef struct _TP_CALLBACK_ENVIRON_V3 *PTP_CALLBACK_ENVIRON;


typedef void *PCOOKIE_CHECK;


typedef struct _RTL_CRITICAL_SECTION *PCRITICAL_SECTION;


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


typedef void *PMFN;


typedef struct _IMAGE_DOS_HEADER *PIMAGE_DOS_HEADER;


typedef uchar *PBYTE;


// WARNING! conflicting data type names: /ois.pdb/FLOATING_SAVE_AREA - /winnt.h/FLOATING_SAVE_AREA
typedef struct _EVENT_DESCRIPTOR *PEVENT_DESCRIPTOR;


typedef struct PluginInterface2 PluginInterface2, *PPluginInterface2;


struct PluginInterface2 {
};


typedef struct Packet Packet, *PPacket;


typedef struct Page Page, *PPage;


struct Packet {
};


struct Page {
    struct MemoryWithPage **availableStack;
    int availableStackSize;
    struct MemoryWithPage *block;
    struct Page *next;
    struct Page *prev;
};


typedef enum PluginReceiveResult {
    RR_STOP_PROCESSING_AND_DEALLOCATE=0,
    RR_CONTINUE_PROCESSING=1,
    RR_STOP_PROCESSING=2
} PluginReceiveResult;


typedef struct PublicKey PublicKey, *PPublicKey;


struct PublicKey {
};


typedef enum PI2_LostConnectionReason {
    LCR_CLOSED_BY_USER=0,
    LCR_DISCONNECTION_NOTIFICATION=1,
    LCR_CONNECTION_LOST=2
} PI2_LostConnectionReason;


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


typedef uint *PUINT;


// WARNING! conflicting data type names: /winsock.h/LPWSADATA - /ois.pdb/LPWSADATA
// WARNING! conflicting data type names: /winsock.h/sockaddr - /ois.pdb/sockaddr
// WARNING! conflicting data type names: /winsock.h/WSAData - /ois.pdb/WSAData
typedef struct Packet_SetAddon Packet_SetAddon, *PPacket_SetAddon;


struct Packet_SetAddon { // PlaceHolder Structure
};


typedef struct PathNode PathNode, *PPathNode;


struct PathNode { // PlaceHolder Structure
};


typedef struct Packet_SetScenarioState Packet_SetScenarioState, *PPacket_SetScenarioState;


struct Packet_SetScenarioState { // PlaceHolder Structure
};


typedef struct Packet_AddShip Packet_AddShip, *PPacket_AddShip;


struct Packet_AddShip { // PlaceHolder Structure
};


typedef struct Packet_UpdateSensorWaveform Packet_UpdateSensorWaveform, *PPacket_UpdateSensorWaveform;


struct Packet_UpdateSensorWaveform { // PlaceHolder Structure
};


typedef struct Packet_CargoState Packet_CargoState, *PPacket_CargoState;


struct Packet_CargoState { // PlaceHolder Structure
};


typedef struct Packet_SendMessage Packet_SendMessage, *PPacket_SendMessage;


struct Packet_SendMessage { // PlaceHolder Structure
};


typedef struct Packet_HullState Packet_HullState, *PPacket_HullState;


struct Packet_HullState { // PlaceHolder Structure
};


typedef struct Packet_SyncValueNumerical Packet_SyncValueNumerical, *PPacket_SyncValueNumerical;


struct Packet_SyncValueNumerical { // PlaceHolder Structure
};


typedef struct Packet_DataRequest Packet_DataRequest, *PPacket_DataRequest;


struct Packet_DataRequest { // PlaceHolder Structure
};


typedef struct Packet_SetModuleDetails Packet_SetModuleDetails, *PPacket_SetModuleDetails;


struct Packet_SetModuleDetails { // PlaceHolder Structure
};


typedef struct Packet_UpdateSensorDataAdvanced Packet_UpdateSensorDataAdvanced, *PPacket_UpdateSensorDataAdvanced;


struct Packet_UpdateSensorDataAdvanced { // PlaceHolder Structure
};


typedef struct Packet_SetClientInfo Packet_SetClientInfo, *PPacket_SetClientInfo;


struct Packet_SetClientInfo { // PlaceHolder Structure
};


typedef struct Packet_RunCommand Packet_RunCommand, *PPacket_RunCommand;


struct Packet_RunCommand { // PlaceHolder Structure
};


typedef struct Packet_WeaponCommand Packet_WeaponCommand, *PPacket_WeaponCommand;


struct Packet_WeaponCommand { // PlaceHolder Structure
};


typedef struct Packet_SetModuleBasicSettings Packet_SetModuleBasicSettings, *PPacket_SetModuleBasicSettings;


struct Packet_SetModuleBasicSettings { // PlaceHolder Structure
};


typedef struct Packet_SetComponent Packet_SetComponent, *PPacket_SetComponent;


struct Packet_SetComponent { // PlaceHolder Structure
};


typedef struct Packet_ServerInfoAdvanced Packet_ServerInfoAdvanced, *PPacket_ServerInfoAdvanced;


struct Packet_ServerInfoAdvanced { // PlaceHolder Structure
};


typedef struct Packet_SetScenario Packet_SetScenario, *PPacket_SetScenario;


struct Packet_SetScenario { // PlaceHolder Structure
};


typedef struct Packet_SetGoLiveState Packet_SetGoLiveState, *PPacket_SetGoLiveState;


struct Packet_SetGoLiveState { // PlaceHolder Structure
};


typedef struct Packet_ServerAdmin Packet_ServerAdmin, *PPacket_ServerAdmin;


struct Packet_ServerAdmin { // PlaceHolder Structure
};


struct pair<cocos2d::EventKeyboard::KeyCode_const_,char> { // PlaceHolder Structure
};


struct pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>_>_>,bool> { // PlaceHolder Structure
};


struct pair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,FogInstance*>_>_>_>,std::_Tree_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<int_const_,class_FogInstance*>_>_>_>_> { // PlaceHolder Structure
};


struct pair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>_>_>,std::_Tree_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,class_std::vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_>_>_>_> { // PlaceHolder Structure
};


struct pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>_>_>,bool> { // PlaceHolder Structure
};


struct pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>_>_>,bool> { // PlaceHolder Structure
};


struct pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool> { // PlaceHolder Structure
};


struct pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> { // PlaceHolder Structure
};


struct pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int> { // PlaceHolder Structure
};


struct pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> { // PlaceHolder Structure
};


struct pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float> { // PlaceHolder Structure
};


struct pair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>_>_>,std::_Tree_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,bool>_>_>_>_> { // PlaceHolder Structure
};


struct pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,int>_>_>_>,bool> { // PlaceHolder Structure
};


struct pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_> { // PlaceHolder Structure
};


struct pair<int_const_,int> { // PlaceHolder Structure
};


struct pair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<PathNode*>_>_>,bool> { // PlaceHolder Structure
};


typedef struct piecewise_construct_t piecewise_construct_t, *Ppiecewise_construct_t;


struct piecewise_construct_t { // PlaceHolder Structure
};


struct pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>,bool> { // PlaceHolder Structure
};


struct pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,FogInstance*>_>_>_>,bool> { // PlaceHolder Structure
};


struct pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_>,bool> { // PlaceHolder Structure
};


typedef enum PrivateCommOptionType {
} PrivateCommOptionType;


typedef struct PolygonInfo PolygonInfo, *PPolygonInfo;


struct PolygonInfo { // PlaceHolder Structure
};


typedef struct PointLight PointLight, *PPointLight;


struct PointLight { // PlaceHolder Structure
};


typedef enum Platform {
} Platform;


typedef struct threadlocaleinfostruct *pthreadlocinfo;


typedef struct threadmbcinfostruct *pthreadmbcinfo;
