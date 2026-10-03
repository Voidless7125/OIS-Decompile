typedef struct _s__RTTIBaseClassDescriptor RTTIBaseClassDescriptor;


typedef struct _s__RTTIClassHierarchyDescriptor RTTIClassHierarchyDescriptor;


typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;


typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;


typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;


struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
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


typedef struct _RTL_CONDITION_VARIABLE _RTL_CONDITION_VARIABLE, *P_RTL_CONDITION_VARIABLE;


struct _RTL_CONDITION_VARIABLE {
    void *Ptr;
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


typedef struct _RS2_IMAGE_LOAD_CONFIG_DIRECTORY32 RS2_IMAGE_LOAD_CONFIG_DIRECTORY32;


typedef uint rsize_t;


typedef struct RakStringCleanup RakStringCleanup, *PRakStringCleanup;


struct RakStringCleanup {
    undefined field0_0x0;
};


typedef enum _RTC_ErrorNumber {
    _RTC_CHKSTK=0,
    _RTC_CVRT_LOSS_INFO=1,
    _RTC_CORRUPT_STACK=2,
    _RTC_UNINIT_LOCAL_USE=3,
    _RTC_CORRUPTED_ALLOCA=4,
    _RTC_ILLEGAL=5
} _RTC_ErrorNumber;


typedef struct _s__RTTIBaseClassDescriptor __RTTIBaseClassDescriptor;


typedef struct _RTL_CONDITION_VARIABLE RTL_CONDITION_VARIABLE;


typedef struct _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;


typedef struct _s__RTTIBaseClassArray __RTTIBaseClassArray;


typedef struct _s__RTTIClassHierarchyDescriptor __RTTIClassHierarchyDescriptor;


typedef struct RNS2EventHandler RNS2EventHandler, *PRNS2EventHandler;


struct RNS2EventHandler {
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


typedef struct RemoteClient RemoteClient, *PRemoteClient;


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


typedef int RNS2Socket;


typedef struct RNS2_Windows_Linux_360 RNS2_Windows_Linux_360, *PRNS2_Windows_Linux_360;


struct RNS2_Windows_Linux_360 {
    undefined field0_0x0;
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


typedef struct RakNetGUID RakNetGUID, *PRakNetGUID;


struct RakNetGUID {
    __uint64 g;
    ushort systemIndex;
};


typedef struct RakString RakString, *PRakString;


struct RakString {
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


typedef struct RemoteSystemIndex RemoteSystemIndex, *PRemoteSystemIndex;


struct RemoteSystemIndex {
};


typedef struct ReliabilityLayer ReliabilityLayer, *PReliabilityLayer;


struct ReliabilityLayer {
};


typedef struct RakPeer RakPeer, *PRakPeer;


struct RakPeer {
};


typedef struct RakNetSocket2Allocator RakNetSocket2Allocator, *PRakNetSocket2Allocator;


struct RakNetSocket2Allocator {
    undefined field0_0x0;
};


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


typedef struct RequestedConnectionStruct RequestedConnectionStruct, *PRequestedConnectionStruct;


struct RequestedConnectionStruct {
};


typedef struct RemoteSystemStruct RemoteSystemStruct, *PRemoteSystemStruct;


struct RemoteSystemStruct {
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


struct RangeNode<RakNet::uint24_t> {
};


typedef struct RoomCharacterClass RoomCharacterClass, *PRoomCharacterClass;


struct RoomCharacterClass { // PlaceHolder Structure
};


typedef struct Resolution Resolution, *PResolution;


struct Resolution { // PlaceHolder Structure
};


typedef enum RequestType {
} RequestType;


typedef struct Ray Ray, *PRay;


struct Ray { // PlaceHolder Structure
};


typedef struct Ref Ref, *PRef;


struct Ref { // PlaceHolder Structure
};


typedef struct Rect Rect, *PRect;


struct Rect { // PlaceHolder Structure
};


typedef struct RotateTo RotateTo, *PRotateTo;


struct RotateTo { // PlaceHolder Structure
};


typedef struct Renderer Renderer, *PRenderer;


struct Renderer { // PlaceHolder Structure
};


typedef struct RepeatForever RepeatForever, *PRepeatForever;


struct RepeatForever { // PlaceHolder Structure
};


typedef struct RenderTexture RenderTexture, *PRenderTexture;


struct RenderTexture { // PlaceHolder Structure
};
