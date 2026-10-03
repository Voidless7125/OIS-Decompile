typedef struct Var Var, *PVar;


struct Var {
    word wLength;
    word wValueLength;
    word wType;
};


typedef struct VS_VERSION_INFO VS_VERSION_INFO, *PVS_VERSION_INFO;


struct VS_VERSION_INFO {
    word StructLength;
    word ValueLength;
    word StructType;
    wchar16 Info[16];
    byte Padding[2];
    dword Signature;
    word StructVersion[2];
    word FileVersion[4];
    word ProductVersion[4];
    dword FileFlagsMask[2];
    dword FileFlags;
    dword FileOS;
    dword FileType;
    dword FileSubtype;
    dword FileTimestamp;
};


typedef struct VarFileInfo VarFileInfo, *PVarFileInfo;


struct VarFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};


struct vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_fuzzer::fuzzer_allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_> { // PlaceHolder Structure
};


struct vector<cocos2d::Touch*,std::allocator<cocos2d::Touch*>_> { // PlaceHolder Structure
};


struct vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,fuzzer::fuzzer_allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> { // PlaceHolder Structure
};


typedef struct V3F_C4B_T2F_Quad V3F_C4B_T2F_Quad, *PV3F_C4B_T2F_Quad;


struct V3F_C4B_T2F_Quad { // PlaceHolder Structure
};


struct Vector<cocos2d::Node*> { // PlaceHolder Structure
};


typedef struct Vec2 Vec2, *PVec2;


struct Vec2 { // PlaceHolder Structure
};


typedef struct Vec3 Vec3, *PVec3;


struct Vec3 { // PlaceHolder Structure
};
