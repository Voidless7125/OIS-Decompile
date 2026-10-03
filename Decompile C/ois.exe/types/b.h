typedef int BOOL;


typedef uchar BYTE;


typedef void *_beginthreadex_proc_type;


typedef uchar BOOLEAN;


typedef struct bad_alloc bad_alloc, *Pbad_alloc;


struct bad_alloc {
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


typedef struct bad_cast bad_cast, *Pbad_cast;


struct bad_cast {
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


typedef struct bad_exception bad_exception, *Pbad_exception;


struct bad_exception {
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


typedef struct bad_typeid bad_typeid, *Pbad_typeid;


struct bad_typeid {
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


typedef struct bad_array_new_length bad_array_new_length, *Pbad_array_new_length;


struct bad_array_new_length {
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


typedef struct ByteQueue ByteQueue, *PByteQueue;


struct ByteQueue {
    char *data;
    uint readOffset;
    uint writeOffset;
    uint lengthAllocated;
};


typedef struct BitStream BitStream, *PBitStream;


struct BitStream {
    uint numberOfBitsUsed;
    uint numberOfBitsAllocated;
    uint readOffset;
    uchar *data;
    bool copyData;
    uchar stackData[256];
};


typedef struct BPSTracker BPSTracker, *PBPSTracker;


struct BPSTracker {
};


typedef struct BanStruct BanStruct, *PBanStruct;


struct BanStruct {
};


typedef struct BufferedCommandStruct BufferedCommandStruct, *PBufferedCommandStruct;


struct BufferedCommandStruct {
};


typedef struct BasicEngine BasicEngine, *PBasicEngine;


struct BasicEngine { // PlaceHolder Structure
};


typedef struct BootElement BootElement, *PBootElement;


struct BootElement { // PlaceHolder Structure
};


struct bool_(__cdecl*&&)(Ship*,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>) { // PlaceHolder Structure
};


struct _Binder<std::_Unforced,void_(__thiscall_Screen_UpgradeTerminal::*)(void),Screen_UpgradeTerminal*> { // PlaceHolder Structure
};


struct _Binder<std::_Unforced,void_(__thiscall_PresentationInterface::*)(cocos2d::Event*),PresentationInterface*,std::_Ph<1>_const&> { // PlaceHolder Structure
};


struct _Binder<std::_Unforced,void_(__thiscall_Screen_Terminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_Terminal*,std::_Ph<1>_const&,std::_Ph<2>_const&> { // PlaceHolder Structure
};


struct _Binder<std::_Unforced,void_(__thiscall_Screen_ContractTerminal::*)(void),Screen_ContractTerminal*> { // PlaceHolder Structure
};


struct _Binder<std::_Unforced,void_(__thiscall_Screen_WeaponTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_WeaponTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&> { // PlaceHolder Structure
};


struct _Binder<std::_Unforced,void_(__thiscall_Screen_PC::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_PC*,std::_Ph<1>_const&,std::_Ph<2>_const&> { // PlaceHolder Structure
};


struct _Binder<std::_Unforced,void_(__thiscall_Screen_WeaponTerminal::*)(void),Screen_WeaponTerminal*> { // PlaceHolder Structure
};


struct _Binder<std::_Unforced,void_(__thiscall_Screen_UpgradeTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_UpgradeTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&> { // PlaceHolder Structure
};


struct _Binder<std::_Unforced,void_(__thiscall_PresentationInterface::*)(cocos2d::EventKeyboard::KeyCode,cocos2d::Event*),PresentationInterface*,std::_Ph<1>_const&,std::_Ph<2>_const&> { // PlaceHolder Structure
};


struct _Binder<std::_Unforced,void_(__thiscall_Screen_Terminal::*)(void),Screen_Terminal*> { // PlaceHolder Structure
};


struct _Binder<std::_Unforced,void_(__thiscall_Screen_PC::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>),Screen_PC*,std::_Ph<1>_const&> { // PlaceHolder Structure
};


struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> { // PlaceHolder Structure
};


struct _Binder<std::_Unforced,void_(__thiscall_Screen_TradeTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_TradeTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&> { // PlaceHolder Structure
};


struct basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> { // PlaceHolder Structure
};


struct _Binder<std::_Unforced,void_(__thiscall_Screen_PC::*)(void),Screen_PC*> { // PlaceHolder Structure
};


struct basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> { // PlaceHolder Structure
};


struct _Binder<std::_Unforced,void_(__thiscall_Screen_ContractTerminal::*)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),Screen_ContractTerminal*,std::_Ph<1>_const&,std::_Ph<2>_const&> { // PlaceHolder Structure
};


struct _Binder<std::_Unforced,void_(__thiscall_Screen_TradeTerminal::*)(void),Screen_TradeTerminal*> { // PlaceHolder Structure
};


struct basic_string<char,std::char_traits<char>,std::allocator<char>_> { // PlaceHolder Structure
};


typedef struct BlendFunc BlendFunc, *PBlendFunc;


struct BlendFunc { // PlaceHolder Structure
};


typedef struct __Bool __Bool, *P__Bool;


struct __Bool { // PlaceHolder Structure
};


typedef struct BaseLight BaseLight, *PBaseLight;


struct BaseLight { // PlaceHolder Structure
};
