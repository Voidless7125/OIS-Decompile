typedef long LONG;


typedef void *LPVOID;


typedef WCHAR *LPWSTR;


typedef BYTE *LPBYTE;


typedef struct _DCB *LPDCB;


typedef struct _STARTUPINFOW *LPSTARTUPINFOW;


typedef struct _COMSTAT *LPCOMSTAT;


typedef struct _WIN32_FIND_DATAW *LPWIN32_FIND_DATAW;


typedef struct _OVERLAPPED *LPOVERLAPPED;


typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;


typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;


typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;


typedef struct _LIST_ENTRY LIST_ENTRY;


struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
};


typedef PCONTEXT LPCONTEXT;


typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;


typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;


typedef double LONGLONG;


union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};


typedef union _LARGE_INTEGER LARGE_INTEGER;


typedef WCHAR *LPCWSTR;


typedef CHAR *LPCSTR;


typedef CHAR *LPSTR;


typedef struct _OSVERSIONINFOA *LPOSVERSIONINFOA;


typedef __int64 LONG64;


// WARNING! conflicting data type names: /ois.pdb/_s__RTTIBaseClassDescriptor - /_s__RTTIBaseClassDescriptor
typedef struct _lldiv_t _lldiv_t, *P_lldiv_t;


struct _lldiv_t {
    __int64 quot;
    __int64 rem;
};


typedef struct WSAData *LPWSADATA;


typedef int *LPBOOL;


typedef struct _ldiv_t _ldiv_t, *P_ldiv_t;


typedef struct _ldiv_t ldiv_t;


struct _ldiv_t {
    long quot;
    long rem;
};


typedef struct _EXCEPTION_POINTERS *LPEXCEPTION_POINTERS;


typedef wchar *LPCWCH;


// WARNING! conflicting data type names: /ois.pdb/LPWSTR - /winnt.h/LPWSTR
typedef long LONG_PTR;


typedef struct __crt_locale_pointers *_locale_t;


typedef char *LPCCH;


typedef struct _FILETIME *LPFILETIME;


typedef struct _lldiv_t lldiv_t;


typedef struct _LARGE_INTEGER_s_0 _LARGE_INTEGER_s_0, *P_LARGE_INTEGER_s_0;


struct _LARGE_INTEGER_s_0 {
    ulong LowPart;
    long HighPart;
};


typedef struct LocklessUint32_t LocklessUint32_t, *PLocklessUint32_t;


struct List<RakNet::PluginInterface2*> {
};


struct List<unsignedint> {
};


struct LocklessUint32_t {
};


struct List<DataStructures::Map<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>>::MapNode> {
    struct MapNode *listArray;
    uint list_size;
    uint allocation_size;
};


struct List<StrAndBool> {
    struct StrAndBool *listArray;
    uint list_size;
    uint allocation_size;
};


struct List<RakNet::SystemAddress> {
    struct SystemAddress *listArray;
    uint list_size;
    uint allocation_size;
};


// WARNING! conflicting data type names: /ois.pdb/DataStructures/Map<RakNet::SystemAddress,DataStructures::ByteQueue*,&DataStructures::defaultMapKeyComparison<RakNet::SystemAddress>>/MapNode - /ois.pdb/DataStructures/Map<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>>/MapNode
struct List<DataStructures::Map<RakNet::SystemAddress,DataStructures::ByteQueue*,&DataStructures::defaultMapKeyComparison<RakNet::SystemAddress>>::MapNode> {
    struct MapNode *listArray;
    uint list_size;
    uint allocation_size;
};


struct List<RakNet::RakNetStatistics> {
    struct RakNetStatistics *listArray;
    uint list_size;
    uint allocation_size;
};


struct List<RakNet::ReliabilityLayer::UnreliableWithAckReceiptNode> {
};


struct List<RakNet::RakNetSocket2*> {
    struct RakNetSocket2 **listArray;
    uint list_size;
    uint allocation_size;
};


struct List<DataStructures::RangeNode<RakNet::uint24_t>> {
};


struct List<RakNet::RakNetGUID> {
    struct RakNetGUID *listArray;
    uint list_size;
    uint allocation_size;
};


struct List<RakNet::RakPeer::BanStruct*> {
    struct BanStruct **listArray;
    uint list_size;
    uint allocation_size;
};


struct List<RakNet::RakString> {
    struct RakString *listArray;
    uint list_size;
    uint allocation_size;
};


struct List<bool> {
};


struct List<RakNet::SplitPacketChannel*> {
};


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


struct List<RakNet::RakString::SharedString*> {
    struct SharedString **listArray;
    uint list_size;
    uint allocation_size;
};


struct List<RakNet::InternalPacket*> {
};


struct List<DataStructures::Heap<unsigned__int64,RakNet::InternalPacket*,0>::HeapNode> {
};


typedef DWORD *LPDWORD;


typedef struct tagRECT *LPRECT;


typedef void *LPCVOID;


typedef enum LogPriority {
} LogPriority;


typedef struct Layer Layer, *PLayer;


struct Layer { // PlaceHolder Structure
};


typedef struct Label Label, *PLabel;


struct Label { // PlaceHolder Structure
};


typedef enum LanguageType {
} LanguageType;


struct List<class_RakNet::RakNetSocket2*> { // PlaceHolder Structure
};


struct List<unsigned_int> { // PlaceHolder Structure
};


struct List<DataStructures::RangeNode<RakNet::uint24_t>_> { // PlaceHolder Structure
};


struct List<DataStructures::Heap<unsigned___int64,RakNet::InternalPacket*,0>::HeapNode> { // PlaceHolder Structure
};


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


// WARNING! conflicting data type names: /crtdefs.h/rsize_t - /ois.pdb/rsize_t
typedef struct localeinfo_struct localeinfo_struct, *Plocaleinfo_struct;


struct localeinfo_struct {
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
};
