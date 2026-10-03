typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;


typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;


struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory:31;
    dword DataIsDirectory:1;
};


union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};


typedef int __int32;


typedef sbyte __int8;


typedef short __int16;


typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;


struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};


typedef struct in_addr in_addr, *Pin_addr;


struct in_addr {
    union _union_1226 S_un;
};


typedef struct _IMAGE_LOAD_CONFIG_CODE_INTEGRITY _IMAGE_LOAD_CONFIG_CODE_INTEGRITY, *P_IMAGE_LOAD_CONFIG_CODE_INTEGRITY;


typedef struct _IMAGE_LOAD_CONFIG_CODE_INTEGRITY IMAGE_LOAD_CONFIG_CODE_INTEGRITY;


struct _IMAGE_LOAD_CONFIG_CODE_INTEGRITY {
    ushort Flags;
    ushort Catalog;
    ulong CatalogOffset;
    ulong Reserved;
};


// WARNING! conflicting data type names: /ois.pdb/_SINGLE_LIST_ENTRY - /winnt.h/_SINGLE_LIST_ENTRY
typedef struct _IMAGE_NT_HEADERS _IMAGE_NT_HEADERS, *P_IMAGE_NT_HEADERS;


typedef struct _IMAGE_FILE_HEADER _IMAGE_FILE_HEADER, *P_IMAGE_FILE_HEADER;


typedef struct _IMAGE_OPTIONAL_HEADER _IMAGE_OPTIONAL_HEADER, *P_IMAGE_OPTIONAL_HEADER;


typedef struct _IMAGE_DATA_DIRECTORY _IMAGE_DATA_DIRECTORY, *P_IMAGE_DATA_DIRECTORY;


struct _IMAGE_FILE_HEADER {
    ushort Machine;
    ushort NumberOfSections;
    ulong TimeDateStamp;
    ulong PointerToSymbolTable;
    ulong NumberOfSymbols;
    ushort SizeOfOptionalHeader;
    ushort Characteristics;
};


struct _IMAGE_DATA_DIRECTORY {
    ulong VirtualAddress;
    ulong Size;
};


struct _IMAGE_OPTIONAL_HEADER {
    ushort Magic;
    uchar MajorLinkerVersion;
    uchar MinorLinkerVersion;
    ulong SizeOfCode;
    ulong SizeOfInitializedData;
    ulong SizeOfUninitializedData;
    ulong AddressOfEntryPoint;
    ulong BaseOfCode;
    ulong BaseOfData;
    ulong ImageBase;
    ulong SectionAlignment;
    ulong FileAlignment;
    ushort MajorOperatingSystemVersion;
    ushort MinorOperatingSystemVersion;
    ushort MajorImageVersion;
    ushort MinorImageVersion;
    ushort MajorSubsystemVersion;
    ushort MinorSubsystemVersion;
    ulong Win32VersionValue;
    ulong SizeOfImage;
    ulong SizeOfHeaders;
    ulong CheckSum;
    ushort Subsystem;
    ushort DllCharacteristics;
    ulong SizeOfStackReserve;
    ulong SizeOfStackCommit;
    ulong SizeOfHeapReserve;
    ulong SizeOfHeapCommit;
    ulong LoaderFlags;
    ulong NumberOfRvaAndSizes;
    struct _IMAGE_DATA_DIRECTORY DataDirectory[16];
};


struct _IMAGE_NT_HEADERS {
    ulong Signature;
    struct _IMAGE_FILE_HEADER FileHeader;
    struct _IMAGE_OPTIONAL_HEADER OptionalHeader;
};


typedef struct in6_addr in6_addr, *Pin6_addr;


struct in6_addr {
};


typedef struct _INTERFACE_INFO _INTERFACE_INFO, *P_INTERFACE_INFO;


struct _INTERFACE_INFO {
    ulong iiFlags;
    union sockaddr_gen iiAddress;
    union sockaddr_gen iiBroadcastAddress;
    union sockaddr_gen iiNetmask;
};


typedef struct _IMAGE_TLS_DIRECTORY32 _IMAGE_TLS_DIRECTORY32, *P_IMAGE_TLS_DIRECTORY32;


typedef struct _IMAGE_TLS_DIRECTORY32 IMAGE_TLS_DIRECTORY32;


typedef union _IMAGE_TLS_DIRECTORY32_u_20 _IMAGE_TLS_DIRECTORY32_u_20, *P_IMAGE_TLS_DIRECTORY32_u_20;


typedef struct _IMAGE_TLS_DIRECTORY32_u_20_s_1 _IMAGE_TLS_DIRECTORY32_u_20_s_1, *P_IMAGE_TLS_DIRECTORY32_u_20_s_1;


struct _IMAGE_TLS_DIRECTORY32_u_20_s_1 {
    ulong Reserved0:20;
    ulong Alignment:4;
    ulong Reserved1:8;
};


union _IMAGE_TLS_DIRECTORY32_u_20 {
    ulong Characteristics;
    struct _IMAGE_TLS_DIRECTORY32_u_20_s_1 _s_1;
};


struct _IMAGE_TLS_DIRECTORY32 {
    ulong StartAddressOfRawData;
    ulong EndAddressOfRawData;
    ulong AddressOfIndex;
    ulong AddressOfCallBacks;
    ulong SizeOfZeroFill;
    union _IMAGE_TLS_DIRECTORY32_u_20 field5_0x14;
};


typedef struct _iobuf _iobuf, *P_iobuf;


struct _iobuf {
    void *_Placeholder;
};


typedef struct _IMAGE_SECTION_HEADER _IMAGE_SECTION_HEADER, *P_IMAGE_SECTION_HEADER;


struct _IMAGE_SECTION_HEADER {
    uchar Name[8];
    union <unnamed-type-Misc> Misc;
    undefined field2_0x9;
    undefined field3_0xa;
    undefined field4_0xb;
    ulong VirtualAddress;
    ulong SizeOfRawData;
    ulong PointerToRawData;
    ulong PointerToRelocations;
    ulong PointerToLinenumbers;
    ushort NumberOfRelocations;
    ushort NumberOfLinenumbers;
    ulong Characteristics;
};


// WARNING! conflicting data type names: /ois.pdb/LPBYTE - /WinDef.h/LPBYTE
// WARNING! conflicting data type names: /ois.pdb/_RTL_CRITICAL_SECTION_DEBUG - /winnt.h/_RTL_CRITICAL_SECTION_DEBUG
typedef struct _IMAGE_TLS_DIRECTORY32 IMAGE_TLS_DIRECTORY;


typedef struct _IMAGE_DOS_HEADER _IMAGE_DOS_HEADER, *P_IMAGE_DOS_HEADER;


struct _IMAGE_DOS_HEADER {
    ushort e_magic;
    ushort e_cblp;
    ushort e_cp;
    ushort e_crlc;
    ushort e_cparhdr;
    ushort e_minalloc;
    ushort e_maxalloc;
    ushort e_ss;
    ushort e_sp;
    ushort e_csum;
    ushort e_ip;
    ushort e_cs;
    ushort e_lfarlc;
    ushort e_ovno;
    ushort e_res[4];
    ushort e_oemid;
    ushort e_oeminfo;
    ushort e_res2[10];
    long e_lfanew;
};


typedef enum ISA_AVAILABILITY {
    __ISA_AVAILABLE_ARMNT=0,
    __ISA_AVAILABLE_X86=0,
    __ISA_AVAILABLE_NEON=1,
    __ISA_AVAILABLE_SSE2=1,
    __ISA_AVAILABLE_NEON_ARM64=2,
    __ISA_AVAILABLE_SSE42=2,
    __ISA_AVAILABLE_AVX=3,
    __ISA_AVAILABLE_ENFSTRG=4,
    __ISA_AVAILABLE_AVX2=5
} ISA_AVAILABILITY;


typedef struct _IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY;


// WARNING! conflicting data type names: /ois.pdb/PSLIST_HEADER - /winnt.h/PSLIST_HEADER
typedef struct _IMAGE_OPTIONAL_HEADER IMAGE_OPTIONAL_HEADER32;


typedef struct _INTERFACE_INFO INTERFACE_INFO;


typedef struct _IMAGE_FILE_HEADER IMAGE_FILE_HEADER;


typedef struct IRNS2_Berkley IRNS2_Berkley, *PIRNS2_Berkley;


struct IRNS2_Berkley {
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
};


typedef struct InternalPacket InternalPacket, *PInternalPacket;


struct InternalPacket {
};


typedef struct InternalPacketRefCountedData InternalPacketRefCountedData, *PInternalPacketRefCountedData;


struct InternalPacketRefCountedData {
};


typedef struct InternalPacketFixedSizeTransmissionHeader InternalPacketFixedSizeTransmissionHeader, *PInternalPacketFixedSizeTransmissionHeader;


struct InternalPacketFixedSizeTransmissionHeader {
};


typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;


struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset:31;
    dword NameIsString:1;
};


typedef struct IMAGE_THUNK_DATA32 IMAGE_THUNK_DATA32, *PIMAGE_THUNK_DATA32;


struct IMAGE_THUNK_DATA32 {
    dword StartAddressOfRawData;
    dword EndAddressOfRawData;
    dword AddressOfIndex;
    dword AddressOfCallBacks;
    dword SizeOfZeroFill;
    dword Characteristics;
};


// WARNING! conflicting data type names: /PE/IMAGE_LOAD_CONFIG_CODE_INTEGRITY - /ois.pdb/IMAGE_LOAD_CONFIG_CODE_INTEGRITY
typedef struct IMAGE_DEBUG_DIRECTORY IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;


struct IMAGE_DEBUG_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword Type;
    dword SizeOfData;
    dword AddressOfRawData;
    dword PointerToRawData;
};


// WARNING! conflicting data type names: /PE/IMAGE_FILE_HEADER - /ois.pdb/IMAGE_FILE_HEADER
typedef struct IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;


struct IMAGE_NT_HEADERS32 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER32 OptionalHeader;
};


typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;


typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;


union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};


struct IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};


// WARNING! conflicting data type names: /PE/StringTable - /ois.pdb/RakNet/StringTable
typedef struct IMAGE_RESOURCE_DIR_STRING_U_18 IMAGE_RESOURCE_DIR_STRING_U_18, *PIMAGE_RESOURCE_DIR_STRING_U_18;


struct IMAGE_RESOURCE_DIR_STRING_U_18 {
    word Length;
    wchar16 NameString[9];
};


typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;


struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};


// WARNING! conflicting data type names: /PE/IMAGE_DATA_DIRECTORY - /ois.pdb/IMAGE_DATA_DIRECTORY
typedef struct IMAGE_BASE_RELOCATION IMAGE_BASE_RELOCATION, *PIMAGE_BASE_RELOCATION;


struct IMAGE_BASE_RELOCATION {
    dword VirtualAddress;
    dword SizeOfBlock;
};


typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;


struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};


typedef enum IMAGE_GUARD_FLAGS {
    IMAGE_GUARD_CF_INSTRUMENTED=256,
    IMAGE_GUARD_CFW_INSTRUMENTED=512,
    IMAGE_GUARD_CF_FUNCTION_TABLE_PRESENT=1024,
    IMAGE_GUARD_SECURITY_COOKIE_UNUSED=2048,
    IMAGE_GUARD_PROTECT_DELAYLOAD_IAT=4096,
    IMAGE_GUARD_DELAYLOAD_IAT_IN_ITS_OWN_SECTION=8192,
    IMAGE_GUARD_CF_EXPORT_SUPPRESSION_INFO_PRESENT=16384,
    IMAGE_GUARD_CF_ENABLE_EXPORT_SUPPRESSION=32768,
    IMAGE_GUARD_CF_LONGJUMP_TABLE_PRESENT=65536,
    IMAGE_GUARD_RF_INSTRUMENTED=131072,
    IMAGE_GUARD_RF_ENABLE=262144,
    IMAGE_GUARD_RF_STRICT=524288,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_1=268435456,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_2=536870912,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_4=1073741824,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_8=2147483648
} IMAGE_GUARD_FLAGS;


typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;


struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};


typedef struct IMAGE_DIRECTORY_ENTRY_EXPORT IMAGE_DIRECTORY_ENTRY_EXPORT, *PIMAGE_DIRECTORY_ENTRY_EXPORT;


struct IMAGE_DIRECTORY_ENTRY_EXPORT {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    ImageBaseOffset32 Name;
    dword Base;
    dword NumberOfFunctions;
    dword NumberOfNames;
    ImageBaseOffset32 AddressOfFunctions;
    ImageBaseOffset32 AddressOfNames;
    ImageBaseOffset32 AddressOfNameOrdinals;
};


typedef struct IMAGE_LOAD_CONFIG_DIRECTORY32 IMAGE_LOAD_CONFIG_DIRECTORY32, *PIMAGE_LOAD_CONFIG_DIRECTORY32;


struct IMAGE_LOAD_CONFIG_DIRECTORY32 {
    dword Size;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword GlobalFlagsClear;
    dword GlobalFlagsSet;
    dword CriticalSectionDefaultTimeout;
    dword DeCommitFreeBlockThreshold;
    dword DeCommitTotalFreeThreshold;
    pointer32 LockPrefixTable;
    dword MaximumAllocationSize;
    dword VirtualMemoryThreshold;
    dword ProcessHeapFlags;
    dword ProcessAffinityMask;
    word CsdVersion;
    word DependentLoadFlags;
    pointer32 EditList;
    pointer32 SecurityCookie;
    pointer32 SEHandlerTable;
    dword SEHandlerCount;
    pointer32 GuardCFCCheckFunctionPointer;
    pointer32 GuardCFDispatchFunctionPointer;
    pointer32 GuardCFFunctionTable;
    dword GuardCFFunctionCount;
    enum IMAGE_GUARD_FLAGS GuardFlags;
    struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY CodeIntegrity;
    pointer32 GuardAddressTakenIatEntryTable;
    dword GuardAddressTakenIatEntryCount;
    pointer32 GuardLongJumpTargetTable;
    dword GuardLongJumpTargetCount;
    pointer32 DynamicValueRelocTable;
    pointer32 CHPEMetadataPointer;
    pointer32 GuardRFFailureRoutine;
    pointer32 GuardRFFailureRoutineFunctionPointer;
    dword DynamicValueRelocTableOffset;
    word DynamicValueRelocTableSection;
    word Reserved1;
    pointer32 GuardRFVerifyStackPointerFunctionPointer;
    dword HotPatchTableOffset;
    dword Reserved2;
    dword Reserved3;
};


typedef struct input_iterator_tag input_iterator_tag, *Pinput_iterator_tag;


struct input_iterator_tag { // PlaceHolder Structure
};


typedef struct IMAGEHLP_MODULE64_V3 IMAGEHLP_MODULE64_V3, *PIMAGEHLP_MODULE64_V3;


struct IMAGEHLP_MODULE64_V3 { // PlaceHolder Structure
};


typedef struct __Integer __Integer, *P__Integer;


struct __Integer { // PlaceHolder Structure
};
