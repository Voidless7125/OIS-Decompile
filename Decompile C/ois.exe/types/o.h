typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;


struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_518 u;
    HANDLE hEvent;
};


typedef struct _OSVERSIONINFOA _OSVERSIONINFOA, *P_OSVERSIONINFOA;


struct _OSVERSIONINFOA {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    CHAR szCSDVersion[128];
};


typedef struct _onexit_table_t _onexit_table_t, *P_onexit_table_t;


struct _onexit_table_t {
    void *_first;
    void *_last;
    void *_end;
};


// WARNING! conflicting data type names: /ois.pdb/ULONGLONG - /winnt.h/ULONGLONG
typedef void *_onexit_t;


struct OrderedList<int,DataStructures::Map<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>>::MapNode,&DataStructures::Map<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>>::NodeComparisonFunc> {
    struct List<DataStructures::Map<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>>::MapNode> orderedList;
};


struct OrderedList<char*,StrAndBool,&RakNet::StrAndBoolComp> {
    struct List<StrAndBool> orderedList;
};


typedef enum optimize_e {
    speed=0,
    size=1
} optimize_e;


struct OrderedList<RakNet::SystemAddress,DataStructures::Map<RakNet::SystemAddress,DataStructures::ByteQueue*,&DataStructures::defaultMapKeyComparison<RakNet::SystemAddress>>::MapNode,&DataStructures::Map<RakNet::SystemAddress,DataStructures::ByteQueue*,&DataStructures::defaultMapKeyComparison<RakNet::SystemAddress>>::NodeComparisonFunc> {
    struct List<DataStructures::Map<RakNet::SystemAddress,DataStructures::ByteQueue*,&DataStructures::defaultMapKeyComparison<RakNet::SystemAddress>>::MapNode> orderedList;
};


struct OrderedList<RakNet::uint24_t,DataStructures::RangeNode<RakNet::uint24_t>,&DataStructures::RangeNodeComp<RakNet::uint24_t>> {
};


struct OrderedList<unsignedshort,RakNet::SplitPacketChannel*,&RakNet::SplitPacketChannelComp> {
};


typedef struct _One_then_variadic_args_t _One_then_variadic_args_t, *P_One_then_variadic_args_t;


struct _One_then_variadic_args_t { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/EShop/Shop - /Demangler/Shop
typedef enum OrbitState {
} OrbitState;


struct OrderedList<unsigned_short,RakNet::SplitPacketChannel*,&int___cdecl_RakNet::SplitPacketChannelComp(unsigned_short_const&,struct_RakNet::SplitPacketChannel*_const&)> { // PlaceHolder Structure
};


struct OrderedList<int,DataStructures::Map<int,RakNet::HuffmanEncodingTree*,&int___cdecl_DataStructures::defaultMapKeyComparison<int>(int_const&,int_const&)>::MapNode,&public:_static_int___cdecl_DataStructures::Map<int,class_RakNet::HuffmanEncodingTree*,&int___cdecl_DataStructures::defaultMapKeyComparison<int>(int_const&,int_const&)>::NodeComparisonFunc(int_const&,struct_DataStructures::Map<int,class_RakNet::HuffmanEncodingTree*,&int___cdecl_DataStructures::defaultMapKeyComparison<int>(int_const&,int_const&)>::MapNode_const&)> { // PlaceHolder Structure
};


struct OrderedList<RakNet::uint24_t,DataStructures::RangeNode<RakNet::uint24_t>,&int___cdecl_DataStructures::RangeNodeComp<struct_RakNet::uint24_t>(struct_RakNet::uint24_t_const&,struct_DataStructures::RangeNode<struct_RakNet::uint24_t>_const&)> { // PlaceHolder Structure
};


typedef enum OverlaySegment {
} OverlaySegment;
