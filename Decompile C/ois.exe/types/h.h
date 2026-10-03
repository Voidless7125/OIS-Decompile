typedef struct _s_HandlerType HandlerType;


typedef void *HANDLE;


typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;


typedef struct HINSTANCE__ *HINSTANCE;


struct HINSTANCE__ {
    int unused;
};


typedef struct HINSTANCE__ *HMODULE;


// WARNING! conflicting data type names: /ois.pdb/LPTOP_LEVEL_EXCEPTION_FILTER - /winbase.h/LPTOP_LEVEL_EXCEPTION_FILTER
// WARNING! conflicting data type names: /ois.pdb/WCHAR - /winnt.h/WCHAR
typedef long HRESULT;


// WARNING! conflicting data type names: /ois.pdb/_s__RTTICompleteObjectLocator - /_s__RTTICompleteObjectLocator
typedef void *HLOCAL;


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


struct hash<double> {
    undefined field0_0x0;
};


struct hash<float> {
    undefined field0_0x0;
};


struct hash<longdouble> {
    undefined field0_0x0;
};


struct hash<std::nullptr_t> {
    undefined field0_0x0;
};


typedef struct HuffmanEncodingTree HuffmanEncodingTree, *PHuffmanEncodingTree;


struct HuffmanEncodingTree {
    struct HuffmanEncodingTreeNode *root;
    struct CharacterEncoding encodingTable[256];
};


struct Heap<unsigned__int64,RakNet::InternalPacket*,0> {
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


typedef struct HICON__ *HICON;


// WARNING! conflicting data type names: /WinDef.h/HINSTANCE - /ois.pdb/HINSTANCE
typedef struct HWND__ HWND__, *PHWND__;


typedef struct HWND__ *HWND;


struct HWND__ {
    int unused;
};


// WARNING! conflicting data type names: /WinDef.h/HMODULE - /ois.pdb/HMODULE
typedef HICON HCURSOR;


typedef struct HazardCategory HazardCategory, *PHazardCategory;


struct HazardCategory { // PlaceHolder Structure
};


typedef struct HullDamageChance HullDamageChance, *PHullDamageChance;


struct HullDamageChance { // PlaceHolder Structure
};


typedef struct HullStrength HullStrength, *PHullStrength;


struct HullStrength { // PlaceHolder Structure
};


typedef enum HullDamageState {
} HullDamageState;


typedef enum HullLocation {
} HullLocation;


struct Heap<unsigned___int64,RakNet::InternalPacket*,0> { // PlaceHolder Structure
};
