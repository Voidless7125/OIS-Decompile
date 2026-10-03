typedef union __m128 __m128, *P__m128;


union __m128 {
    float m128_f32[4];
    __uint64 m128_u64[2];
    char m128_i8[16];
    short m128_i16[8];
    int m128_i32[4];
    __int64 m128_i64[2];
    uchar m128_u8[16];
    ushort m128_u16[8];
    uint m128_u32[4];
};


typedef union __m64 __m64, *P__m64;


union __m64 {
    __uint64 m64_u64;
    float m64_f32[2];
    char m64_i8[8];
    short m64_i16[4];
    int m64_i32[2];
    __int64 m64_i64;
    uchar m64_u8[8];
    ushort m64_u16[4];
    uint m64_u32[2];
};


// WARNING! conflicting data type names: /ois.pdb/DataStructures/MemoryPool<RakNet::SystemAddress>/Page - /ois.pdb/DataStructures/MemoryPool<RakNet::Packet>/Page
// WARNING! conflicting data type names: /ois.pdb/DataStructures/MemoryPool<RakNet::RemoteClient*>/Page - /ois.pdb/DataStructures/MemoryPool<RakNet::Packet>/Page
typedef struct MemoryWithPage MemoryWithPage, *PMemoryWithPage;


struct MemoryPool<RakNet::RemoteClient*> {
    struct Page *availablePages;
    struct Page *unavailablePages;
    int availablePagesSize;
    int unavailablePagesSize;
    int memoryPoolPageSize;
};


struct MemoryPool<RakNet::Packet> {
    struct Page *availablePages;
    struct Page *unavailablePages;
    int availablePagesSize;
    int unavailablePagesSize;
    int memoryPoolPageSize;
};


struct MemoryPool<RakNet::SystemAddress> {
    struct Page *availablePages;
    struct Page *unavailablePages;
    int availablePagesSize;
    int unavailablePagesSize;
    int memoryPoolPageSize;
};


struct MemoryWithPage {
    struct Packet userMemory;
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
    undefined field36_0x24;
    undefined field37_0x25;
    undefined field38_0x26;
    undefined field39_0x27;
    undefined field40_0x28;
    undefined field41_0x29;
    undefined field42_0x2a;
    undefined field43_0x2b;
    undefined field44_0x2c;
    undefined field45_0x2d;
    undefined field46_0x2e;
    undefined field47_0x2f;
    undefined field48_0x30;
    undefined field49_0x31;
    undefined field50_0x32;
    undefined field51_0x33;
    undefined field52_0x34;
    undefined field53_0x35;
    undefined field54_0x36;
    undefined field55_0x37;
    struct Page *parentPage;
    undefined field57_0x3c;
    undefined field58_0x3d;
    undefined field59_0x3e;
    undefined field60_0x3f;
};


typedef struct MapNode MapNode, *PMapNode;


struct Map<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>> {
    struct OrderedList<int,DataStructures::Map<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>>::MapNode,&DataStructures::Map<int,RakNet::HuffmanEncodingTree*,&DataStructures::defaultMapKeyComparison<int>>::NodeComparisonFunc> mapNodeList;
    uint lastSearchIndex;
    int lastSearchKey;
    bool lastSearchIndexValid;
};


struct MapNode {
    int mapNodeKey;
    struct HuffmanEncodingTree *mapNodeData;
};


typedef uchar MessageID;


typedef struct MessageNumberNode MessageNumberNode, *PMessageNumberNode;


struct MessageNumberNode {
};


typedef struct moduleAttribute moduleAttribute, *PmoduleAttribute;


// WARNING! conflicting data type names: /ois.pdb/__vc_attributes/moduleAttribute/type_e - /ois.pdb/__vc_attributes/event_receiverAttribute/type_e
struct moduleAttribute {
    enum type_e type;
    char *name;
    char *version;
    char *uuid;
    int lcid;
    bool control;
    char *helpstring;
    int helpstringcontext;
    char *helpstringdll;
    char *helpfile;
    int helpcontext;
    bool hidden;
    bool restricted;
    char *custom;
    char *resource_name;
};


struct MemoryPool<RakNet::InternalPacketRefCountedData> {
};


// WARNING! conflicting data type names: /ois.pdb/DataStructures/MemoryPool<RakNet::RemoteSystemIndex>/Page - /ois.pdb/DataStructures/MemoryPool<RakNet::Packet>/Page
struct MemoryPool<RakNet::RemoteSystemIndex> {
    struct Page *availablePages;
    struct Page *unavailablePages;
    int availablePagesSize;
    int unavailablePagesSize;
    int memoryPoolPageSize;
};


struct MemoryPool<RakNet::InternalPacket> {
};


// WARNING! conflicting data type names: /ois.pdb/DataStructures/MemoryPool<RakNet::RakPeer::SocketQueryOutput>/Page - /ois.pdb/DataStructures/MemoryPool<RakNet::Packet>/Page
struct MemoryPool<RakNet::RakPeer::SocketQueryOutput> {
    struct Page *availablePages;
    struct Page *unavailablePages;
    int availablePagesSize;
    int unavailablePagesSize;
    int memoryPoolPageSize;
};


struct MemoryPool<RakNet::ReliabilityLayer::MessageNumberNode> {
};


// WARNING! conflicting data type names: /ois.pdb/DataStructures/MemoryPool<RakNet::RakPeer::BufferedCommandStruct>/Page - /ois.pdb/DataStructures/MemoryPool<RakNet::Packet>/Page
struct MemoryPool<RakNet::RakPeer::BufferedCommandStruct> {
    struct Page *availablePages;
    struct Page *unavailablePages;
    int availablePagesSize;
    int unavailablePagesSize;
    int memoryPoolPageSize;
};


struct Map<RakNet::SystemAddress,DataStructures::ByteQueue*,&DataStructures::defaultMapKeyComparison<RakNet::SystemAddress>> {
    struct OrderedList<RakNet::SystemAddress,DataStructures::Map<RakNet::SystemAddress,DataStructures::ByteQueue*,&DataStructures::defaultMapKeyComparison<RakNet::SystemAddress>>::MapNode,&DataStructures::Map<RakNet::SystemAddress,DataStructures::ByteQueue*,&DataStructures::defaultMapKeyComparison<RakNet::SystemAddress>>::NodeComparisonFunc> mapNodeList;
    uint lastSearchIndex;
    struct SystemAddress lastSearchKey;
    bool lastSearchIndexValid;
};


typedef union Misc Misc, *PMisc;


union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};


typedef struct ModuleSaleInstance ModuleSaleInstance, *PModuleSaleInstance;


struct ModuleSaleInstance { // PlaceHolder Structure
};


typedef struct ModuleConfiguration ModuleConfiguration, *PModuleConfiguration;


struct ModuleConfiguration { // PlaceHolder Structure
};


typedef struct Mod Mod, *PMod;


struct Mod { // PlaceHolder Structure
};


struct map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,float,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,float>_>_> { // PlaceHolder Structure
};


struct map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_>_> { // PlaceHolder Structure
};


struct map<int,int,std::less<int>,std::allocator<std::pair<int_const_,int>_>_> { // PlaceHolder Structure
};


struct map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>_> { // PlaceHolder Structure
};


struct map<cocos2d::EventKeyboard::KeyCode,char,std::less<cocos2d::EventKeyboard::KeyCode>,std::allocator<std::pair<cocos2d::EventKeyboard::KeyCode_const_,char>_>_> { // PlaceHolder Structure
};


struct map<int,FogInstance*,std::less<int>,std::allocator<std::pair<int_const_,FogInstance*>_>_> { // PlaceHolder Structure
};


struct map<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<int>,std::allocator<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> { // PlaceHolder Structure
};


struct map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,bool>_>_> { // PlaceHolder Structure
};


struct map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_> { // PlaceHolder Structure
};


typedef enum ModuleSlotType {
} ModuleSlotType;


typedef enum MeshCategory {
} MeshCategory;


typedef struct Mat4 Mat4, *PMat4;


struct Mat4 { // PlaceHolder Structure
};


typedef struct Mesh Mesh, *PMesh;


struct Mesh { // PlaceHolder Structure
};


struct Map<int,RakNet::HuffmanEncodingTree*,&int___cdecl_DataStructures::defaultMapKeyComparison<int>(int_const&,int_const&)> { // PlaceHolder Structure
};


typedef enum ModuleType {
} ModuleType;
