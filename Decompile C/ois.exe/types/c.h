typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;


struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};


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


typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;


typedef struct _CONTEXT CONTEXT;


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


typedef char CHAR;


// WARNING! conflicting data type names: /ois.pdb/LPSECURITY_ATTRIBUTES - /winbase.h/LPSECURITY_ATTRIBUTES
typedef struct __crt_locale_data __crt_locale_data, *P__crt_locale_data;


struct __crt_locale_data {
};


typedef struct _s_CatchableTypeArray CatchableTypeArray;


// WARNING! conflicting data type names: /ois.pdb/_CONTEXT - /excpt.h/_CONTEXT
typedef struct _s__CatchableTypeArray _CatchableTypeArray;


typedef struct __crt_locale_data_public __crt_locale_data_public, *P__crt_locale_data_public;


struct __crt_locale_data_public {
    ushort *_locale_pctype;
    int _locale_mb_cur_max;
    uint _locale_lc_codepage;
};


typedef enum _crt_argv_mode {
    _crt_argv_no_arguments=0,
    _crt_argv_unexpanded_arguments=1,
    _crt_argv_expanded_arguments=2
} _crt_argv_mode;


typedef bool __crt_bool;


typedef struct __crt_multibyte_data __crt_multibyte_data, *P__crt_multibyte_data;


struct __crt_multibyte_data {
};


// WARNING! conflicting data type names: /ois.pdb/EXCEPTION_RECORD - /winnt.h/EXCEPTION_RECORD
// WARNING! conflicting data type names: /ois.pdb/PTOP_LEVEL_EXCEPTION_FILTER - /winbase.h/PTOP_LEVEL_EXCEPTION_FILTER
typedef struct __crt_locale_pointers __crt_locale_pointers, *P__crt_locale_pointers;


struct __crt_locale_pointers {
    struct __crt_locale_data *locinfo;
    struct __crt_multibyte_data *mbcinfo;
};


typedef struct _s__CatchableType _CatchableType;


typedef struct _s_CatchableType CatchableType;


typedef void *constructor_type;


typedef struct _RTL_CRITICAL_SECTION CRITICAL_SECTION;


typedef enum _crt_app_type {
    _crt_unknown_app=0,
    _crt_console_app=1,
    _crt_gui_app=2
} _crt_app_type;


typedef struct __crt_fast_encoded_nullptr_t __crt_fast_encoded_nullptr_t, *P__crt_fast_encoded_nullptr_t;


struct __crt_fast_encoded_nullptr_t {
    undefined field0_0x0;
};


// WARNING! conflicting data type names: /ois.pdb/LONGLONG - /winnt.h/LONGLONG
// WARNING! conflicting data type names: /ois.pdb/LPCRITICAL_SECTION - /winbase.h/LPCRITICAL_SECTION
typedef struct _RTL_CONDITION_VARIABLE CONDITION_VARIABLE;


typedef struct CharacterEncoding CharacterEncoding, *PCharacterEncoding;


struct CharacterEncoding {
    uchar *encoding;
    ushort bitLength;
};


typedef enum ConnectionState {
    IS_PENDING=0,
    IS_CONNECTING=1,
    IS_CONNECTED=2,
    IS_DISCONNECTING=3,
    IS_SILENTLY_DISCONNECTING=4,
    IS_DISCONNECTED=5,
    IS_NOT_CONNECTED=6
} ConnectionState;


typedef enum ConnectionAttemptResult {
    CONNECTION_ATTEMPT_STARTED=0,
    INVALID_PARAMETER=1,
    CANNOT_RESOLVE_DOMAIN_NAME=2,
    ALREADY_CONNECTED_TO_ENDPOINT=3,
    CONNECTION_ATTEMPT_ALREADY_IN_PROGRESS=4,
    SECURITY_INITIALIZATION_FAILED=5
} ConnectionAttemptResult;


typedef struct CCRakNetSlidingWindow CCRakNetSlidingWindow, *PCCRakNetSlidingWindow;


struct CCRakNetSlidingWindow {
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


struct CircularLinkedList<HuffmanEncodingTreeNode*> {
    uint list_size;
    struct node *root;
    struct node *position;
};


typedef struct ContractCommand ContractCommand, *PContractCommand;


struct ContractCommand { // PlaceHolder Structure
};


struct class_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_(__cdecl*&&)(Ship*,int) { // PlaceHolder Structure
};


typedef enum CaptainStyle {
} CaptainStyle;


typedef struct CallstackEntry CallstackEntry, *PCallstackEntry;


struct CallstackEntry { // PlaceHolder Structure
};


typedef enum CallstackEntryType {
} CallstackEntryType;


typedef enum CraftPurpose {
} CraftPurpose;


typedef enum ComponentCategory {
} ComponentCategory;


struct _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> { // PlaceHolder Structure
};


typedef struct _Copy_tag _Copy_tag, *P_Copy_tag;


struct _Copy_tag { // PlaceHolder Structure
};


typedef enum CommsType {
} CommsType;


typedef enum ComparisonCheckType {
} ComparisonCheckType;


typedef enum CharacterMouthState {
} CharacterMouthState;


typedef struct Component Component, *PComponent;


struct Component { // PlaceHolder Structure
};


typedef struct Color3B Color3B, *PColor3B;


struct Color3B { // PlaceHolder Structure
};


typedef struct Clonable Clonable, *PClonable;


struct Clonable { // PlaceHolder Structure
};


typedef struct Camera Camera, *PCamera;


struct Camera { // PlaceHolder Structure
};


typedef struct CallFunc CallFunc, *PCallFunc;


struct CallFunc { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/DataStructures/Heap<unsigned___int64,RakNet::InternalPacket*,0>/HeapNode - /ois.pdb/DataStructures/Heap<unsigned__int64,RakNet::InternalPacket*,0>/HeapNode
// WARNING! conflicting data type names: /Demangler/DataStructures/Map<int,RakNet::HuffmanEncodingTree*,&int___cdecl_DataStructures::defaultMapKeyComparison<int>(int_const&,int_const&)>/MapNode - /ois.pdb/DataStructures/Map<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>>/MapNode
typedef enum CaptainExperience {
} CaptainExperience;


typedef enum CharacterPosition {
} CharacterPosition;


typedef enum CharacterEyeState {
} CharacterEyeState;


// WARNING! conflicting data type names: /Demangler/FMOD/Sound - /Demangler/ESound/Sound
typedef struct Channel Channel, *PChannel;


struct Channel { // PlaceHolder Structure
};


typedef struct ChannelGroup ChannelGroup, *PChannelGroup;


struct ChannelGroup { // PlaceHolder Structure
};
