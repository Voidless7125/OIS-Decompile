typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;


struct TypeDescriptor {
    void *pVFTable;
    void *spare;
    char name[0];
};


typedef struct _s_TryBlockMapEntry TryBlockMapEntry;


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


typedef struct _TypeDescriptor _TypeDescriptor, *P_TypeDescriptor;


struct _TypeDescriptor {
    void *pVFTable;
    void *spare;
    char name[0];
};


// WARNING! conflicting data type names: /ois.pdb/CONTEXT - /winnt.h/CONTEXT
// WARNING! conflicting data type names: /ois.pdb/PRTL_CRITICAL_SECTION - /winnt.h/PRTL_CRITICAL_SECTION
typedef struct _TP_CLEANUP_GROUP _TP_CLEANUP_GROUP, *P_TP_CLEANUP_GROUP;


struct _TP_CLEANUP_GROUP {
};


typedef struct _s_ThrowInfo ThrowInfo;


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


typedef struct _TP_CALLBACK_INSTANCE _TP_CALLBACK_INSTANCE, *P_TP_CALLBACK_INSTANCE;


struct _TP_CALLBACK_INSTANCE {
};


typedef ulong TP_VERSION;


// WARNING! conflicting data type names: /ois.pdb/_LIST_ENTRY - /winnt.h/_LIST_ENTRY
typedef struct _TP_POOL _TP_POOL, *P_TP_POOL;


struct _TP_POOL {
};


// WARNING! conflicting data type names: /ois.pdb/_RTL_CRITICAL_SECTION - /winnt.h/_RTL_CRITICAL_SECTION
typedef struct _TP_CALLBACK_ENVIRON_V3 _TP_CALLBACK_ENVIRON_V3, *P_TP_CALLBACK_ENVIRON_V3;


typedef struct _TP_CALLBACK_ENVIRON_V3 TP_CALLBACK_ENVIRON_V3;


typedef enum _TP_CALLBACK_PRIORITY {
    TP_CALLBACK_PRIORITY_HIGH=0,
    TP_CALLBACK_PRIORITY_NORMAL=1,
    TP_CALLBACK_PRIORITY_LOW=2,
    TP_CALLBACK_PRIORITY_COUNT=3,
    TP_CALLBACK_PRIORITY_INVALID=3
} _TP_CALLBACK_PRIORITY;


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


typedef enum _TP_CALLBACK_PRIORITY TP_CALLBACK_PRIORITY;


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


typedef void *terminate_handler;


// WARNING! conflicting data type names: /ois.pdb/_s__RTTIClassHierarchyDescriptor - /_s__RTTIClassHierarchyDescriptor
typedef struct _TEB _TEB, *P_TEB;


struct _TEB {
};


typedef uint __TCPSOCKET__;


typedef void *_tls_callback_type;


typedef struct TCPInterface TCPInterface, *PTCPInterface;


struct ThreadsafeAllocatingQueue<RakNet::Packet> {
    struct MemoryPool<RakNet::Packet> memoryPool;
    struct SimpleMutex memoryPoolMutex;
    struct Queue<RakNet::Packet*> queue;
    struct SimpleMutex queueMutex;
};


struct ThreadsafeAllocatingQueue<RakNet::RemoteClient*> {
    struct MemoryPool<RakNet::RemoteClient*> memoryPool;
    struct SimpleMutex memoryPoolMutex;
    struct Queue<RakNet::RemoteClient**> queue;
    struct SimpleMutex queueMutex;
};


struct ThreadsafeAllocatingQueue<RakNet::SystemAddress> {
    struct MemoryPool<RakNet::SystemAddress> memoryPool;
    struct SimpleMutex memoryPoolMutex;
    struct Queue<RakNet::SystemAddress*> queue;
    struct SimpleMutex queueMutex;
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


typedef struct ThisPtrPlusSysAddr ThisPtrPlusSysAddr, *PThisPtrPlusSysAddr;


struct ThisPtrPlusSysAddr {
    struct TCPInterface *tcpInterface;
    struct SystemAddress systemAddress;
    bool useSSL;
    char bindAddress[64];
    ushort socketFamily;
};


typedef struct TimeAndValue2 TimeAndValue2, *PTimeAndValue2;


struct TimeAndValue2 {
};


typedef enum type_e {
    native=0,
    com=1,
    managed=2
} type_e;


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


struct ThreadsafeAllocatingQueue<RakNet::RakPeer::SocketQueryOutput> {
    struct MemoryPool<RakNet::RakPeer::SocketQueryOutput> memoryPool;
    struct SimpleMutex memoryPoolMutex;
    struct Queue<RakNet::RakPeer::SocketQueryOutput*> queue;
    struct SimpleMutex queueMutex;
};


struct ThreadsafeAllocatingQueue<RakNet::RakPeer::BufferedCommandStruct> {
    struct MemoryPool<RakNet::RakPeer::BufferedCommandStruct> memoryPool;
    struct SimpleMutex memoryPoolMutex;
    struct Queue<RakNet::RakPeer::BufferedCommandStruct*> queue;
    struct SimpleMutex queueMutex;
};


typedef struct tagRECT tagRECT, *PtagRECT;


struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};


typedef struct TabletTab TabletTab, *PTabletTab;


struct TabletTab { // PlaceHolder Structure
};


struct _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>_>_> { // PlaceHolder Structure
};


struct _Tree_node<class_PathNode*,void*> { // PlaceHolder Structure
};


struct tuple<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&&> { // PlaceHolder Structure
};


struct _Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>,void*> { // PlaceHolder Structure
};


struct _Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>,0>_> { // PlaceHolder Structure
};


struct _Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_>,0>_> { // PlaceHolder Structure
};


struct _Tree_node<PathNode*,void*> { // PlaceHolder Structure
};


struct _Tree_node<std::pair<int_const_,int>,void*> { // PlaceHolder Structure
};


struct _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_> { // PlaceHolder Structure
};


struct _Tree_node<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>,void*> { // PlaceHolder Structure
};


struct _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_> { // PlaceHolder Structure
};


struct _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<cocos2d::EventKeyboard::KeyCode_const_,char>_>_>_> { // PlaceHolder Structure
};


struct _Tree<class_std::_Tmap_traits<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,struct_std::less<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>,class_std::allocator<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>,0>_> { // PlaceHolder Structure
};


struct _Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>,0>_> { // PlaceHolder Structure
};


struct _Tree<std::_Tmap_traits<int,FogInstance*,std::less<int>,std::allocator<std::pair<int_const_,FogInstance*>_>,0>_> { // PlaceHolder Structure
};


struct _Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>,0>_> { // PlaceHolder Structure
};


struct _Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,Variable>,void*> { // PlaceHolder Structure
};


struct _Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>,0>_> { // PlaceHolder Structure
};


struct _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_> { // PlaceHolder Structure
};


struct _Tree<std::_Tmap_traits<cocos2d::EventKeyboard::KeyCode,char,std::less<cocos2d::EventKeyboard::KeyCode>,std::allocator<std::pair<cocos2d::EventKeyboard::KeyCode_const_,char>_>,0>_> { // PlaceHolder Structure
};


struct _Tree_node<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,void*> { // PlaceHolder Structure
};


struct _Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_> { // PlaceHolder Structure
};


struct _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<cocos2d::EventKeyboard::KeyCode_const_,char>_>_>_> { // PlaceHolder Structure
};


struct _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,FogInstance*>_>_>_> { // PlaceHolder Structure
};


struct _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,int>_>_>_> { // PlaceHolder Structure
};


struct _Tree<std::_Tmap_traits<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<int>,std::allocator<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,0>_> { // PlaceHolder Structure
};


struct _Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_>,0>_> { // PlaceHolder Structure
};


struct tuple<int&&> { // PlaceHolder Structure
};


struct _Tree_node<std::pair<int_const_,FogInstance*>,void*> { // PlaceHolder Structure
};


struct _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>_>_> { // PlaceHolder Structure
};


struct _Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>,void*> { // PlaceHolder Structure
};


struct tuple<cocos2d::EventKeyboard::KeyCode_const&> { // PlaceHolder Structure
};


struct tuple<> { // PlaceHolder Structure
};


struct _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>_>_> { // PlaceHolder Structure
};


struct _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_>_>,std::_Iterator_base0> { // PlaceHolder Structure
};


struct _Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,Variable,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,Variable>_>,0>_> { // PlaceHolder Structure
};


struct _Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>,void*> { // PlaceHolder Structure
};


struct _Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>,0>_> { // PlaceHolder Structure
};


struct _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_>_>_> { // PlaceHolder Structure
};


struct _Tree_comp_alloc<std::_Tset_traits<PathNode*,PathContext::NodeTotalWeightCompare,std::allocator<PathNode*>,1>_> { // PlaceHolder Structure
};


struct _Tree_comp_alloc<std::_Tmap_traits<int,int,std::less<int>,std::allocator<std::pair<int_const_,int>_>,0>_> { // PlaceHolder Structure
};


struct _Tree_node<std::pair<cocos2d::EventKeyboard::KeyCode_const_,char>,void*> { // PlaceHolder Structure
};


struct tuple<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&> { // PlaceHolder Structure
};


struct _Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>,void*> { // PlaceHolder Structure
};


struct _Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>,0>_> { // PlaceHolder Structure
};


struct _Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,float,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>,0>_> { // PlaceHolder Structure
};


struct _Tree_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<class_PathNode*>_>_> { // PlaceHolder Structure
};


struct _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<PathNode*>_>_> { // PlaceHolder Structure
};


struct _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_> { // PlaceHolder Structure
};


struct _Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>_> { // PlaceHolder Structure
};


struct _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,FogInstance*>_>_>_> { // PlaceHolder Structure
};


struct _Tree_val<std::_Tree_simple_types<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> { // PlaceHolder Structure
};


struct _Tree<std::_Tset_traits<PathNode*,PathContext::NodeTotalWeightCompare,std::allocator<PathNode*>,1>_> { // PlaceHolder Structure
};


struct _Tree_comp_alloc<std::_Tmap_traits<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<int>,std::allocator<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,0>_> { // PlaceHolder Structure
};


struct _Tree_comp_alloc<std::_Tmap_traits<cocos2d::EventKeyboard::KeyCode,char,std::less<cocos2d::EventKeyboard::KeyCode>,std::allocator<std::pair<cocos2d::EventKeyboard::KeyCode_const_,char>_>,0>_> { // PlaceHolder Structure
};


struct _Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,float,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>,0>_> { // PlaceHolder Structure
};


struct _Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>,void*> { // PlaceHolder Structure
};


struct _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>_>_> { // PlaceHolder Structure
};


struct _Tree<std::_Tmap_traits<int,int,std::less<int>,std::allocator<std::pair<int_const_,int>_>,0>_> { // PlaceHolder Structure
};


struct _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>_>_> { // PlaceHolder Structure
};


struct _Tree_unchecked_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const_,int>_>_>,struct_std::_Iterator_base0> { // PlaceHolder Structure
};


struct _Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,int>_>_>_> { // PlaceHolder Structure
};


typedef enum TabletScreenType {
} TabletScreenType;


typedef enum TravelState {
} TravelState;


typedef struct Texture2D Texture2D, *PTexture2D;


struct Texture2D { // PlaceHolder Structure
};


typedef enum TextHAlignment {
} TextHAlignment;


typedef struct Touch Touch, *PTouch;


struct Touch { // PlaceHolder Structure
};


typedef enum TextVAlignment {
} TextVAlignment;


typedef struct _TexParams _TexParams, *P_TexParams;


struct _TexParams { // PlaceHolder Structure
};


typedef struct threadlocaleinfostruct threadlocaleinfostruct, *Pthreadlocaleinfostruct;


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


typedef struct threadmbcinfostruct threadmbcinfostruct, *Pthreadmbcinfostruct;


struct threadmbcinfostruct {
    int refcount;
    int mbcodepage;
    int ismbcodepage;
    ushort mbulinfo[6];
    uchar mbctype[257];
    uchar mbcasemap[256];
    wchar_t *mblocalename;
};
