#include "ois_server.exe.h"
typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
float10
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined3;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
typedef short    wchar_t;
typedef unsigned short    word;
typedef struct _s__RTTIBaseClassDescriptor _s__RTTIBaseClassDescriptor, *P_s__RTTIBaseClassDescriptor;

typedef struct _s__RTTIBaseClassDescriptor RTTIBaseClassDescriptor;

typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;

typedef struct PMD PMD, *PPMD;

typedef struct _s__RTTIClassHierarchyDescriptor _s__RTTIClassHierarchyDescriptor, *P_s__RTTIClassHierarchyDescriptor;

typedef struct _s__RTTIClassHierarchyDescriptor RTTIClassHierarchyDescriptor;

typedef int ptrdiff_t;

struct TypeDescriptor {
    void *pVFTable;
    void *spare;
    char name[0];
};

struct PMD {
    ptrdiff_t mdisp;
    ptrdiff_t pdisp;
    ptrdiff_t vdisp;
};

struct _s__RTTIBaseClassDescriptor {
    struct TypeDescriptor *pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    dword numContainedBases; // count of extended classes in BaseClassArray (RTTI 2)
    struct PMD where; // member displacement structure
    dword attributes; // bit flags
    RTTIClassHierarchyDescriptor *pClassHierarchyDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3) for class
};

struct _s__RTTIClassHierarchyDescriptor {
    dword signature;
    dword attributes; // bit flags
    dword numBaseClasses; // number of base classes (i.e. rtti1Count)
    RTTIBaseClassDescriptor **pBaseClassArray; // ref to BaseClassArray (RTTI 2)
};

typedef struct _s_UnwindMapEntry _s_UnwindMapEntry, *P_s_UnwindMapEntry;

typedef struct _s_UnwindMapEntry UnwindMapEntry;

typedef int __ehstate_t;

struct _s_UnwindMapEntry {
    __ehstate_t toState;
    void (*action)(void);
};

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

typedef struct _s_ESTypeList _s_ESTypeList, *P_s_ESTypeList;

typedef struct _s_ESTypeList ESTypeList;

typedef struct _s_HandlerType _s_HandlerType, *P_s_HandlerType;

typedef struct _s_HandlerType HandlerType;

struct _s_HandlerType {
    uint adjectives;
    struct TypeDescriptor *pType;
    ptrdiff_t dispCatchObj;
    void *addressOfHandler;
};

struct _s_ESTypeList {
    int nCount;
    HandlerType *pTypeArray;
};

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef struct _s__RTTICompleteObjectLocator _s__RTTICompleteObjectLocator, *P_s__RTTICompleteObjectLocator;

typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;

struct _s__RTTICompleteObjectLocator {
    dword signature;
    dword offset; // offset of vbtable within class
    dword cdOffset; // constructor displacement offset
    struct TypeDescriptor *pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    RTTIClassHierarchyDescriptor *pClassDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3)
};

typedef struct _s_TryBlockMapEntry _s_TryBlockMapEntry, *P_s_TryBlockMapEntry;

typedef struct _s_TryBlockMapEntry TryBlockMapEntry;

struct _s_TryBlockMapEntry {
    __ehstate_t tryLow;
    __ehstate_t tryHigh;
    __ehstate_t catchHigh;
    int nCatches;
    HandlerType *pHandlerArray;
};

typedef struct _s_FuncInfo _s_FuncInfo, *P_s_FuncInfo;

struct _s_FuncInfo {
    uint magicNumber_and_bbtFlags;
    __ehstate_t maxState;
    UnwindMapEntry *pUnwindMap;
    uint nTryBlocks;
    TryBlockMapEntry *pTryBlockMap;
    uint nIPMapEntries;
    void *pIPToStateMap;
    ESTypeList *pESTypeList;
    int EHFlags;
};

typedef struct _s_FuncInfo FuncInfo;

typedef struct exception exception, *Pexception;

struct exception { // PlaceHolder Class Structure
};

typedef struct _devicemodeW _devicemodeW, *P_devicemodeW;

typedef wchar_t WCHAR;

typedef ushort WORD;

typedef ulong DWORD;

typedef union _union_660 _union_660, *P_union_660;

typedef union _union_663 _union_663, *P_union_663;

typedef struct _struct_661 _struct_661, *P_struct_661;

typedef struct _struct_662 _struct_662, *P_struct_662;

typedef struct _POINTL _POINTL, *P_POINTL;

typedef struct _POINTL POINTL;

typedef long LONG;

struct _POINTL {
    LONG x;
    LONG y;
};

union _union_663 {
    DWORD dmDisplayFlags;
    DWORD dmNup;
};

struct _struct_662 {
    POINTL dmPosition;
    DWORD dmDisplayOrientation;
    DWORD dmDisplayFixedOutput;
};

struct _struct_661 {
    short dmOrientation;
    short dmPaperSize;
    short dmPaperLength;
    short dmPaperWidth;
    short dmScale;
    short dmCopies;
    short dmDefaultSource;
    short dmPrintQuality;
};

union _union_660 {
    struct _struct_661 field0;
    struct _struct_662 field1;
};

struct _devicemodeW {
    WCHAR dmDeviceName[32];
    WORD dmSpecVersion;
    WORD dmDriverVersion;
    WORD dmSize;
    WORD dmDriverExtra;
    DWORD dmFields;
    union _union_660 field6_0x4c;
    short dmColor;
    short dmDuplex;
    short dmYResolution;
    short dmTTOption;
    short dmCollate;
    WCHAR dmFormName[32];
    WORD dmLogPixels;
    DWORD dmBitsPerPel;
    DWORD dmPelsWidth;
    DWORD dmPelsHeight;
    union _union_663 field17_0xb4;
    DWORD dmDisplayFrequency;
    DWORD dmICMMethod;
    DWORD dmICMIntent;
    DWORD dmMediaType;
    DWORD dmDitherType;
    DWORD dmReserved1;
    DWORD dmReserved2;
    DWORD dmPanningWidth;
    DWORD dmPanningHeight;
};

typedef struct _devicemodeW DEVMODEW;

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

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef ulong ULONG_PTR;

typedef union _union_518 _union_518, *P_union_518;

typedef void *HANDLE;

typedef struct _struct_519 _struct_519, *P_struct_519;

typedef void *PVOID;

struct _struct_519 {
    DWORD Offset;
    DWORD OffsetHigh;
};

union _union_518 {
    struct _struct_519 s;
    PVOID Pointer;
};

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_518 u;
    HANDLE hEvent;
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef void *LPVOID;

typedef int BOOL;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _DCB _DCB, *P_DCB;

typedef uchar BYTE;

struct _DCB {
    DWORD DCBlength;
    DWORD BaudRate;
    DWORD fBinary:1;
    DWORD fParity:1;
    DWORD fOutxCtsFlow:1;
    DWORD fOutxDsrFlow:1;
    DWORD fDtrControl:2;
    DWORD fDsrSensitivity:1;
    DWORD fTXContinueOnXoff:1;
    DWORD fOutX:1;
    DWORD fInX:1;
    DWORD fErrorChar:1;
    DWORD fNull:1;
    DWORD fRtsControl:2;
    DWORD fAbortOnError:1;
    DWORD fDummy2:17;
    WORD wReserved;
    WORD XonLim;
    WORD XoffLim;
    BYTE ByteSize;
    BYTE Parity;
    BYTE StopBits;
    char XonChar;
    char XoffChar;
    char ErrorChar;
    char EofChar;
    char EvtChar;
    WORD wReserved1;
};

typedef struct _STARTUPINFOW _STARTUPINFOW, *P_STARTUPINFOW;

typedef WCHAR *LPWSTR;

typedef BYTE *LPBYTE;

struct _STARTUPINFOW {
    DWORD cb;
    LPWSTR lpReserved;
    LPWSTR lpDesktop;
    LPWSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _DCB *LPDCB;

typedef struct _STARTUPINFOW *LPSTARTUPINFOW;

typedef struct _COMSTAT *LPCOMSTAT;

typedef struct _WIN32_FIND_DATAW _WIN32_FIND_DATAW, *P_WIN32_FIND_DATAW;

typedef struct _WIN32_FIND_DATAW *LPWIN32_FIND_DATAW;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME FILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

struct _WIN32_FIND_DATAW {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    WCHAR cFileName[260];
    WCHAR cAlternateFileName[14];
};

typedef struct _OVERLAPPED *LPOVERLAPPED;

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
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

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT CONTEXT;

typedef CONTEXT *PCONTEXT;

typedef PCONTEXT LPCONTEXT;

typedef struct _FLOATING_SAVE_AREA _FLOATING_SAVE_AREA, *P_FLOATING_SAVE_AREA;

typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

struct _FLOATING_SAVE_AREA {
    DWORD ControlWord;
    DWORD StatusWord;
    DWORD TagWord;
    DWORD ErrorOffset;
    DWORD ErrorSelector;
    DWORD DataOffset;
    DWORD DataSelector;
    BYTE RegisterArea[80];
    DWORD Cr0NpxState;
};

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

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (*PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef double ULONGLONG;

typedef char CHAR;

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

typedef double LONGLONG;

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef union _SLIST_HEADER _SLIST_HEADER, *P_SLIST_HEADER;

typedef struct _struct_299 _struct_299, *P_struct_299;

typedef struct _SINGLE_LIST_ENTRY _SINGLE_LIST_ENTRY, *P_SINGLE_LIST_ENTRY;

typedef struct _SINGLE_LIST_ENTRY SINGLE_LIST_ENTRY;

struct _SINGLE_LIST_ENTRY {
    struct _SINGLE_LIST_ENTRY *Next;
};

struct _struct_299 {
    SINGLE_LIST_ENTRY Next;
    WORD Depth;
    WORD Sequence;
};

union _SLIST_HEADER {
    ULONGLONG Alignment;
    struct _struct_299 s;
};

typedef WCHAR *LPCWSTR;

typedef union _SLIST_HEADER *PSLIST_HEADER;

typedef CHAR *LPCSTR;

typedef struct _OSVERSIONINFOA _OSVERSIONINFOA, *P_OSVERSIONINFOA;

struct _OSVERSIONINFOA {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    CHAR szCSDVersion[128];
};

typedef CHAR *LPSTR;

typedef struct _OSVERSIONINFOA *LPOSVERSIONINFOA;

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

typedef uint UINT_PTR;

typedef ULONG_PTR SIZE_T;

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[51];
};

typedef struct in_addr in_addr, *Pin_addr;

typedef union _union_1226 _union_1226, *P_union_1226;

typedef struct _struct_1227 _struct_1227, *P_struct_1227;

typedef struct _struct_1228 _struct_1228, *P_struct_1228;

typedef ulong ULONG;

typedef uchar UCHAR;

typedef ushort USHORT;

struct _struct_1228 {
    USHORT s_w1;
    USHORT s_w2;
};

struct _struct_1227 {
    UCHAR s_b1;
    UCHAR s_b2;
    UCHAR s_b3;
    UCHAR s_b4;
};

union _union_1226 {
    struct _struct_1227 S_un_b;
    struct _struct_1228 S_un_w;
    ULONG S_addr;
};

struct in_addr {
    union _union_1226 S_un;
};

typedef struct _FILETIME *LPFILETIME;

typedef int (*FARPROC)(void);

typedef struct HICON__ HICON__, *PHICON__;

struct HICON__ {
    int unused;
};

typedef struct tagRECT tagRECT, *PtagRECT;

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

typedef DWORD *LPDWORD;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

struct HINSTANCE__ {
    int unused;
};

typedef struct tagRECT *LPRECT;

typedef struct HICON__ *HICON;

typedef uint *PUINT;

typedef void *LPCVOID;

typedef struct HINSTANCE__ *HINSTANCE;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

struct HWND__ {
    int unused;
};

typedef HINSTANCE HMODULE;

typedef HICON HCURSOR;

typedef uint UINT;

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER32 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    ImageBaseOffset32 BaseOfData;
    pointer32 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    dword SizeOfStackReserve;
    dword SizeOfStackCommit;
    dword SizeOfHeapReserve;
    dword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct Var Var, *PVar;

struct Var {
    word wLength;
    word wValueLength;
    word wType;
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

typedef struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY IMAGE_LOAD_CONFIG_CODE_INTEGRITY, *PIMAGE_LOAD_CONFIG_CODE_INTEGRITY;

struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY {
    word Flags;
    word Catalog;
    dword CatalogOffset;
    dword Reserved;
};

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

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 332
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

struct IMAGE_NT_HEADERS32 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER32 OptionalHeader;
};

typedef struct StringFileInfo StringFileInfo, *PStringFileInfo;

struct StringFileInfo {
    word wLength;
    word wValueLength;
    word wType;
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

typedef struct StringTable StringTable, *PStringTable;

struct StringTable {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_18 IMAGE_RESOURCE_DIR_STRING_U_18, *PIMAGE_RESOURCE_DIR_STRING_U_18;

struct IMAGE_RESOURCE_DIR_STRING_U_18 {
    word Length;
    wchar16 NameString[9];
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

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

typedef struct VarFileInfo VarFileInfo, *PVarFileInfo;

struct VarFileInfo {
    word wLength;
    word wValueLength;
    word wType;
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

typedef struct StringInfo StringInfo, *PStringInfo;

struct StringInfo {
    word wLength;
    word wValueLength;
    word wType;
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

typedef struct _iobuf _iobuf, *P_iobuf;

struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
};

typedef struct _iobuf FILE;

typedef void (*PMFN)(void *);

typedef struct _s_CatchableType _s_CatchableType, *P_s_CatchableType;


// WARNING! conflicting data type names: /ehdata.h/TypeDescriptor - /TypeDescriptor

struct _s_CatchableType {
    uint properties;
    struct TypeDescriptor *pType;
    struct PMD thisDisplacement;
    int sizeOrOffset;
    PMFN copyFunction;
};

typedef struct _s_CatchableType CatchableType;

typedef struct _s_CatchableTypeArray _s_CatchableTypeArray, *P_s_CatchableTypeArray;

typedef struct _s_CatchableTypeArray CatchableTypeArray;

struct _s_CatchableTypeArray {
    int nCatchableTypes;
    CatchableType *arrayOfCatchableTypes[0];
};

typedef struct _s_ThrowInfo _s_ThrowInfo, *P_s_ThrowInfo;

typedef struct _s_ThrowInfo ThrowInfo;

struct _s_ThrowInfo {
    uint attributes;
    PMFN pmfnUnwind;
    int (*pForwardCompat)(void);
    CatchableTypeArray *pCatchableTypeArray;
};

typedef uint uintptr_t;

typedef ulong u_long;

typedef struct WSAData WSAData, *PWSAData;

typedef struct WSAData WSADATA;

struct WSAData {
    WORD wVersion;
    WORD wHighVersion;
    char szDescription[257];
    char szSystemStatus[129];
    ushort iMaxSockets;
    ushort iMaxUdpDg;
    char *lpVendorInfo;
};

typedef UINT_PTR SOCKET;

typedef ushort u_short;

typedef WSADATA *LPWSADATA;

typedef struct sockaddr sockaddr, *Psockaddr;

struct sockaddr {
    u_short sa_family;
    char sa_data[14];
};

typedef struct hostent hostent, *Phostent;

struct hostent {
    char *h_name;
    char **h_aliases;
    short h_addrtype;
    short h_length;
    char **h_addr_list;
};

typedef struct _IMAGE_SECTION_HEADER _IMAGE_SECTION_HEADER, *P_IMAGE_SECTION_HEADER;

struct _IMAGE_SECTION_HEADER { // PlaceHolder Structure
};

typedef struct MemMapReadOnly MemMapReadOnly, *PMemMapReadOnly;

struct MemMapReadOnly { // PlaceHolder Structure
};

typedef struct GLContextAttrs GLContextAttrs, *PGLContextAttrs;

struct GLContextAttrs { // PlaceHolder Structure
};

typedef struct CDebugSOldSectionReader CDebugSOldSectionReader, *PCDebugSOldSectionReader;

struct CDebugSOldSectionReader { // PlaceHolder Structure
};

typedef struct SimpleString SimpleString, *PSimpleString;

struct SimpleString { // PlaceHolder Structure
};

typedef enum FMOD_RESULT {
} FMOD_RESULT;

typedef struct FMOD_CREATESOUNDEXINFO FMOD_CREATESOUNDEXINFO, *PFMOD_CREATESOUNDEXINFO;

struct FMOD_CREATESOUNDEXINFO { // PlaceHolder Structure
};

typedef struct _Tree_unchecked_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<unsigned_int>_>,struct_std::_Iterator_base0> _Tree_unchecked_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<unsigned_int>_>,struct_std::_Iterator_base0>, *P_Tree_unchecked_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<unsigned_int>_>,struct_std::_Iterator_base0>;

struct _Tree_unchecked_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<unsigned_int>_>,struct_std::_Iterator_base0> { // PlaceHolder Structure
};

typedef struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>, *Pbasic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>;

struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct _String_iterator<std::_String_val<std::_Simple_types<char>_>_> _String_iterator<std::_String_val<std::_Simple_types<char>_>_>, *P_String_iterator<std::_String_val<std::_Simple_types<char>_>_>;

struct _String_iterator<std::_String_val<std::_Simple_types<char>_>_> { // PlaceHolder Structure
};

typedef struct basic_string<char,std::char_traits<char>,std::allocator<char>_> basic_string<char,std::char_traits<char>,std::allocator<char>_>, *Pbasic_string<char,std::char_traits<char>,std::allocator<char>_>;

struct basic_string<char,std::char_traits<char>,std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_fuzzer::fuzzer_allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_> vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_fuzzer::fuzzer_allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>, *Pvector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_fuzzer::fuzzer_allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>;

struct vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_fuzzer::fuzzer_allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_> { // PlaceHolder Structure
};

typedef struct function<bool___cdecl(cocos2d::Node*)> function<bool___cdecl(cocos2d::Node*)>, *Pfunction<bool___cdecl(cocos2d::Node*)>;

struct function<bool___cdecl(cocos2d::Node*)> { // PlaceHolder Structure
};

typedef struct _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned_int>_>,std::_Iterator_base0> _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned_int>_>,std::_Iterator_base0>, *P_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned_int>_>,std::_Iterator_base0>;

struct _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned_int>_>,std::_Iterator_base0> { // PlaceHolder Structure
};

typedef struct function<void___cdecl(void)> function<void___cdecl(void)>, *Pfunction<void___cdecl(void)>;

struct function<void___cdecl(void)> { // PlaceHolder Structure
};

typedef struct vector<cocos2d::Touch*,std::allocator<cocos2d::Touch*>_> vector<cocos2d::Touch*,std::allocator<cocos2d::Touch*>_>, *Pvector<cocos2d::Touch*,std::allocator<cocos2d::Touch*>_>;

struct vector<cocos2d::Touch*,std::allocator<cocos2d::Touch*>_> { // PlaceHolder Structure
};

typedef struct vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,fuzzer::fuzzer_allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,fuzzer::fuzzer_allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>, *Pvector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,fuzzer::fuzzer_allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>;

struct vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,fuzzer::fuzzer_allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> { // PlaceHolder Structure
};

typedef struct _Facet_base _Facet_base, *P_Facet_base;

struct _Facet_base { // PlaceHolder Structure
};

typedef struct Sound Sound, *PSound;

struct Sound { // PlaceHolder Structure
};

typedef struct Channel Channel, *PChannel;

struct Channel { // PlaceHolder Structure
};

typedef struct ChannelGroup ChannelGroup, *PChannelGroup;

struct ChannelGroup { // PlaceHolder Structure
};

typedef struct V3F_C4B_T2F_Quad V3F_C4B_T2F_Quad, *PV3F_C4B_T2F_Quad;

struct V3F_C4B_T2F_Quad { // PlaceHolder Structure
};

typedef struct SpriteFrameCache SpriteFrameCache, *PSpriteFrameCache;

struct SpriteFrameCache { // PlaceHolder Structure
};

typedef struct Component Component, *PComponent;

struct Component { // PlaceHolder Structure
};

typedef struct __Set __Set, *P__Set;

struct __Set { // PlaceHolder Structure
};

typedef struct FileUtils FileUtils, *PFileUtils;

struct FileUtils { // PlaceHolder Structure
};

typedef struct Size Size, *PSize;

struct Size { // PlaceHolder Structure
};

typedef struct Node Node, *PNode;

struct Node { // PlaceHolder Structure
};

typedef struct Color3B Color3B, *PColor3B;

struct Color3B { // PlaceHolder Structure
};

typedef struct Ray Ray, *PRay;

struct Ray { // PlaceHolder Structure
};

typedef struct Scheduler Scheduler, *PScheduler;

struct Scheduler { // PlaceHolder Structure
};

typedef struct Ref Ref, *PRef;

struct Ref { // PlaceHolder Structure
};

typedef struct Mat4 Mat4, *PMat4;

struct Mat4 { // PlaceHolder Structure
};

typedef struct __Double __Double, *P__Double;

struct __Double { // PlaceHolder Structure
};

typedef struct Vector<cocos2d::Node*> Vector<cocos2d::Node*>, *PVector<cocos2d::Node*>;

struct Vector<cocos2d::Node*> { // PlaceHolder Structure
};

typedef struct Vec2 Vec2, *PVec2;

struct Vec2 { // PlaceHolder Structure
};

typedef struct Vec3 Vec3, *PVec3;

struct Vec3 { // PlaceHolder Structure
};

typedef struct FadeIn FadeIn, *PFadeIn;

struct FadeIn { // PlaceHolder Structure
};

typedef struct __Float __Float, *P__Float;

struct __Float { // PlaceHolder Structure
};

typedef struct Animate3D Animate3D, *PAnimate3D;

struct Animate3D { // PlaceHolder Structure
};

typedef struct EventDispatcher EventDispatcher, *PEventDispatcher;

struct EventDispatcher { // PlaceHolder Structure
};

typedef struct Scene Scene, *PScene;

struct Scene { // PlaceHolder Structure
};

typedef struct Rect Rect, *PRect;

struct Rect { // PlaceHolder Structure
};

typedef struct __Integer __Integer, *P__Integer;

struct __Integer { // PlaceHolder Structure
};

typedef struct RotateTo RotateTo, *PRotateTo;

struct RotateTo { // PlaceHolder Structure
};

typedef struct Director Director, *PDirector;

struct Director { // PlaceHolder Structure
};

typedef struct Event Event, *PEvent;

struct Event { // PlaceHolder Structure
};

typedef struct Renderer Renderer, *PRenderer;

struct Renderer { // PlaceHolder Structure
};

typedef struct Mesh Mesh, *PMesh;

struct Mesh { // PlaceHolder Structure
};

typedef struct EventListener EventListener, *PEventListener;

struct EventListener { // PlaceHolder Structure
};

typedef struct RepeatForever RepeatForever, *PRepeatForever;

struct RepeatForever { // PlaceHolder Structure
};

typedef struct PolygonInfo PolygonInfo, *PPolygonInfo;

struct PolygonInfo { // PlaceHolder Structure
};

typedef struct GLView GLView, *PGLView;

struct GLView { // PlaceHolder Structure
};

typedef struct Clonable Clonable, *PClonable;

struct Clonable { // PlaceHolder Structure
};

typedef struct DirectionLight DirectionLight, *PDirectionLight;

struct DirectionLight { // PlaceHolder Structure
};

typedef struct FadeOut FadeOut, *PFadeOut;

struct FadeOut { // PlaceHolder Structure
};

typedef struct AffineTransform AffineTransform, *PAffineTransform;

struct AffineTransform { // PlaceHolder Structure
};

typedef struct EaseInOut EaseInOut, *PEaseInOut;

struct EaseInOut { // PlaceHolder Structure
};

typedef struct Application Application, *PApplication;

struct Application { // PlaceHolder Structure
};

typedef struct Animation3D Animation3D, *PAnimation3D;

struct Animation3D { // PlaceHolder Structure
};

typedef struct SpotLight SpotLight, *PSpotLight;

struct SpotLight { // PlaceHolder Structure
};

typedef struct Texture2D Texture2D, *PTexture2D;

struct Texture2D { // PlaceHolder Structure
};

typedef struct Layer Layer, *PLayer;

struct Layer { // PlaceHolder Structure
};

typedef struct GLProgram GLProgram, *PGLProgram;

struct GLProgram { // PlaceHolder Structure
};

typedef struct BlendFunc BlendFunc, *PBlendFunc;

struct BlendFunc { // PlaceHolder Structure
};

typedef struct ActionManager ActionManager, *PActionManager;

struct ActionManager { // PlaceHolder Structure
};

typedef struct SpriteFrame SpriteFrame, *PSpriteFrame;

struct SpriteFrame { // PlaceHolder Structure
};

typedef struct ActionInterval ActionInterval, *PActionInterval;

struct ActionInterval { // PlaceHolder Structure
};

typedef struct Sprite3D Sprite3D, *PSprite3D;

struct Sprite3D { // PlaceHolder Structure
};

typedef struct Quaternion Quaternion, *PQuaternion;

struct Quaternion { // PlaceHolder Structure
};

typedef enum TextHAlignment {
} TextHAlignment;

typedef struct RenderTexture RenderTexture, *PRenderTexture;

struct RenderTexture { // PlaceHolder Structure
};

typedef struct Acceleration Acceleration, *PAcceleration;

struct Acceleration { // PlaceHolder Structure
};

typedef struct GLViewImpl GLViewImpl, *PGLViewImpl;

struct GLViewImpl { // PlaceHolder Structure
};

typedef struct AABB AABB, *PAABB;

struct AABB { // PlaceHolder Structure
};

typedef struct Label Label, *PLabel;

struct Label { // PlaceHolder Structure
};

typedef struct FiniteTimeAction FiniteTimeAction, *PFiniteTimeAction;

struct FiniteTimeAction { // PlaceHolder Structure
};

typedef struct GLProgramState GLProgramState, *PGLProgramState;

struct GLProgramState { // PlaceHolder Structure
};

typedef struct PointLight PointLight, *PPointLight;

struct PointLight { // PlaceHolder Structure
};

typedef struct SpriteBatchNode SpriteBatchNode, *PSpriteBatchNode;

struct SpriteBatchNode { // PlaceHolder Structure
};

typedef struct Camera Camera, *PCamera;

struct Camera { // PlaceHolder Structure
};

typedef struct __Bool __Bool, *P__Bool;

struct __Bool { // PlaceHolder Structure
};

typedef struct Sequence Sequence, *PSequence;

struct Sequence { // PlaceHolder Structure
};

typedef struct DelayTime DelayTime, *PDelayTime;

struct DelayTime { // PlaceHolder Structure
};

typedef struct CallFunc CallFunc, *PCallFunc;

struct CallFunc { // PlaceHolder Structure
};

typedef struct BaseLight BaseLight, *PBaseLight;

struct BaseLight { // PlaceHolder Structure
};

typedef struct AmbientLight AmbientLight, *PAmbientLight;

struct AmbientLight { // PlaceHolder Structure
};

typedef struct EventListenerMouse EventListenerMouse, *PEventListenerMouse;

struct EventListenerMouse { // PlaceHolder Structure
};

typedef struct Action Action, *PAction;

struct Action { // PlaceHolder Structure
};

typedef struct Touch Touch, *PTouch;

struct Touch { // PlaceHolder Structure
};

typedef enum LanguageType {
} LanguageType;

typedef struct EventListenerKeyboard EventListenerKeyboard, *PEventListenerKeyboard;

struct EventListenerKeyboard { // PlaceHolder Structure
};

typedef enum TextVAlignment {
} TextVAlignment;

typedef struct Sprite Sprite, *PSprite;

struct Sprite { // PlaceHolder Structure
};

typedef enum SetIntervalReason {
} SetIntervalReason;

typedef struct _TexParams _TexParams, *P_TexParams;

struct _TexParams { // PlaceHolder Structure
};

typedef enum Platform {
} Platform;

typedef enum DispatchMode {
} DispatchMode;

typedef struct Scale9Sprite Scale9Sprite, *PScale9Sprite;

struct Scale9Sprite { // PlaceHolder Structure
};

typedef enum KeyCode {
} KeyCode;

typedef int (*_onexit_t)(void);

typedef uint size_t;

typedef longlong __time64_t;

typedef int errno_t;

typedef size_t rsize_t;



undefined4 DAT_0065500c;
undefined DAT_00655560;
undefined DAT_00655564;
undefined DAT_00655550;
void *ExceptionList;
undefined DAT_00655578;
undefined DAT_0065557c;
undefined DAT_00655568;
undefined DAT_00655590;
undefined DAT_00655594;
undefined DAT_00655580;
undefined LAB_005af73e;
undefined LAB_005cbd50;
undefined4 DAT_00655538;
undefined DAT_006555c0;
undefined DAT_006555c4;
undefined DAT_006555b0;
undefined4 DAT_006555d8;
undefined4 DAT_006555dc;
undefined4 DAT_006555c8;
undefined DAT_006555f0;
undefined DAT_006555f4;
undefined DAT_006555e0;
undefined DAT_00655608;
undefined DAT_0065560c;
undefined DAT_006555f8;
undefined LAB_005af788;
undefined LAB_005cbd70;
undefined DAT_00655598;
undefined DAT_00655638;
undefined DAT_0065563c;
undefined DAT_00655628;
undefined4 DAT_00655650;
undefined4 DAT_00655654;
undefined4 DAT_00655640;
undefined DAT_00655668;
undefined DAT_0065566c;
undefined DAT_00655658;
undefined DAT_00655680;
undefined DAT_00655684;
undefined DAT_00655670;
undefined LAB_005af7d8;
undefined LAB_005cbd90;
undefined DAT_00655610;
undefined4 *DAT_0065b3a0;
undefined4 *DAT_0065b444;
undefined LAB_005af892;
undefined4 *DAT_0065c2f4;
undefined4 *DAT_0065b5cc;
undefined LAB_005bb862;
undefined4 *DAT_0065c2fc;
undefined4 *DAT_0065b7a8;
undefined LAB_005bc73f;
undefined LAB_005cc890;
undefined DAT_0065ba30;
pointer[13] vftable;
uint DAT_0065500c;
undefined1 DAT_0065b398;
undefined DAT_005cdc70;
undefined4 *DAT_0065b394;
undefined4 DAT_006557c8;
char DAT_0065b39a;
int DAT_0065b3c8;
int DAT_0065b444;
pointer[200] vftable;
int DAT_0065b3c4;
float DAT_0065ba24;
float DAT_0065ba20;
float DAT_0065ba28;
undefined4 DAT_0065ba2c;
FileUtils *this_006558b8;
float DAT_006550a8;
float DAT_006550a4;
undefined DAT_0065b39c;
undefined LAB_005af4f2;
Layer *DAT_0065c25c;
undefined LAB_005af532;
char DAT_0065b398;
undefined1 *DAT_0065c258;
undefined1 *DAT_0065b3a4;
undefined LAB_005af562;
int DAT_0065b5cc;
undefined LAB_005af588;
pointer PTR_005ce008;
undefined DAT_005ce00c;
undefined1 *DAT_0065c264;
undefined LAB_005af608;
undefined1 *DAT_0065c260;
Layer *DAT_0065c268;
undefined LAB_005af683;
undefined LAB_005af6a0;
undefined LAB_005af6c9;
int DAT_00655090;
undefined LAB_005af700;
undefined DAT_005e1d38;
pointer[1] vftable;
undefined LAB_005af833;
undefined LAB_005af858;
uint DAT_006555dc;
uint DAT_006555d8;
uint DAT_0065554c;
uint DAT_00655548;
uint DAT_00655654;
uint DAT_00655650;
undefined LAB_005af98e;
undefined DAT_005e1e5c;
undefined LAB_005af9b0;
undefined LAB_005afa5c;
undefined LAB_005afaa0;
undefined4 DAT_00655810;
void *DAT_0065b5cc;
int DAT_0065b3d4;
undefined4 *DAT_0065c2a4;
void *_DstBuf_0065b3dc;
char DAT_0065b3d1;
undefined LAB_005afaea;
uint *DAT_0065c2a0;
undefined LAB_005afb10;
int *DAT_0065c290;
int *DAT_0065c288;
undefined4 *DAT_0065c270;
uint DAT_006557ac;
uint DAT_006557a8;
undefined4 DAT_00655798;
undefined4 DAT_00655078;
int DAT_0065c294;
undefined4 *DAT_0065c2bc;
undefined4 *DAT_0065c274;
undefined LAB_005afbb5;
undefined DAT_005ce098;
undefined DAT_005e1d30;
int DAT_0065c2c8;
undefined LAB_005afbf0;
undefined LAB_005afc40;
undefined LAB_005afc88;
undefined LAB_005afcb8;
undefined *PTR_s_Debris_005df81c;
undefined4 *DAT_0065c2a8;
undefined LAB_005afce8;
undefined LAB_005afd18;
undefined LAB_005afd50;
undefined1 *DAT_0065c270;
int DAT_00655078;
undefined LAB_005afda6;
int *DAT_0065b5cc;
undefined LAB_005afe9a;
int *DAT_0065c274;
undefined DAT_00655020;
undefined4 *DAT_0065c280;
undefined4 *DAT_0065b3d4;
int *DAT_0065b448;
undefined4 *DAT_0065c284;
undefined LAB_005aff0c;
undefined LAB_005aff64;
undefined LAB_005aff90;
undefined LAB_005affdc;
undefined DAT_005de00c;
int *DAT_0065b444;
undefined4 DAT_0065c310;
int DAT_0065c28c;
int *DAT_0065c2b0;
undefined LAB_005b0036;
void *ThreadLocalStoragePointer;
undefined *PTR_rand_005cd2d0;
undefined LAB_005b0068;
undefined LAB_005b00a2;
undefined LAB_005b00fe;
undefined LAB_005b014a;
undefined LAB_005b01aa;
undefined LAB_005b01e2;
pointer PTR_s_unknown_005ce0d8;
undefined DAT_0000000f;
undefined LAB_005b0210;
undefined LAB_005b0238;
undefined LAB_005b0283;
undefined LAB_005b02e5;
undefined LAB_005b031e;
int *DAT_0065c294;
undefined LAB_005b038b;
pointer PTR_DAT_005ce064;
undefined LAB_005b03b8;
undefined LAB_005b03f0;
undefined4 *DAT_0065c2b4;
undefined LAB_005b0438;
undefined LAB_005b0468;
undefined4 DAT_0065b444;
undefined LAB_005b0518;
undefined LAB_005b0564;
undefined LAB_005b0588;
undefined DAT_006555a8;
undefined DAT_006555ac;
undefined DAT_00655620;
undefined DAT_00655624;
undefined4 DAT_00655548;
undefined4 DAT_0065554c;
undefined LAB_005b05f0;
undefined LAB_005b0628;
pointer PTR_DAT_005ce0a8;
pointer PTR_DAT_005ddae4;
undefined LAB_005b0671;
undefined LAB_005b06b0;
undefined LAB_005b06f8;
undefined DAT_005e3dcc;
uint DAT_006557c4;
undefined4 DAT_006557b0;
uint DAT_006557c0;
undefined LAB_005b0730;
undefined4 *DAT_0065c2b0;
undefined4 *DAT_0065c2c4;
undefined LAB_005b0782;
undefined4 *DAT_0065c2a0;
undefined4 *DAT_0065c29c;
undefined4 *DAT_0065c290;
undefined1 *DAT_0065c2b8;
undefined FUN_00401b20;
undefined4 *DAT_0065c2cc;
undefined LAB_00403160;
undefined LAB_005b07b2;
undefined LAB_005b07df;
int DAT_0065c2ac;
undefined LAB_005b081a;
undefined4 *DAT_0065c298;
pointer[3] vftable;
Node *DAT_0065c2c0;
undefined LAB_005b0852;
pointer[164] vftable;
Node *DAT_0065c278;
undefined LAB_005b0882;
undefined LAB_005b08c5;
undefined4 *DAT_0065c26c;
int DAT_0065c288;
undefined LAB_005b08f2;
undefined4 *DAT_0065c27c;
undefined LAB_005b0927;
undefined LAB_005b0962;
undefined4 DAT_0065b448;
undefined4 DAT_0065b44c;
undefined LAB_005b0980;
undefined LAB_005b09a0;
undefined LAB_005b09c0;
int DAT_0065b44c;
undefined LAB_005b09e0;
undefined LAB_005b0a00;
uint DAT_0065b44c;
undefined LAB_005b0a20;
undefined DAT_0065c2d0;
undefined LAB_005b0a40;
undefined LAB_005b0a8e;
char DAT_0065507c;
undefined LAB_005b0ac8;
undefined DAT_005e3ea8;
undefined DAT_005e3eac;
pointer[2] vftable;
char DAT_0065b3d2;
undefined DAT_005e3f98;
undefined DAT_005e4164;
undefined DAT_005e4198;
undefined LAB_005b0b85;
undefined DAT_005e4058;
undefined DAT_005e4090;
undefined DAT_005e40f8;
undefined DAT_005e4130;
undefined LAB_005b0bb8;
undefined DAT_005e41cc;
LPVOID lpBuffer_0065c318;
undefined LAB_005b0c12;
undefined LAB_005b0c40;
undefined LAB_005b0c68;
undefined LAB_005b0ca0;
undefined LAB_005b0cd8;
undefined LAB_005b0d10;
TypeDescriptor RTTI_Type_Descriptor;
pointer[6] vftable;
undefined LAB_005b0d38;
undefined LAB_005b0d68;
undefined LAB_005b0d90;
undefined LAB_005b0de3;
undefined DAT_005e42b8;
undefined LAB_005b0e6b;
undefined DAT_005e425c;
undefined DAT_005e431c;
undefined DAT_005e434c;
undefined LAB_005b0ee2;
undefined DAT_005e4350;
undefined DAT_005e4358;
undefined DAT_005e435c;
undefined DAT_005e4360;
undefined LAB_005b0f10;
undefined LAB_005b0f30;
undefined LAB_005b0f50;
undefined4 DAT_006558d0;
undefined4 DAT_006558d4;
undefined2 DAT_006558d8;
undefined DAT_00655698;
undefined2 DAT_006556aa;
undefined2 DAT_006556a8;
undefined4 UNK_0065569c;
undefined4 UNK_006556a0;
undefined4 UNK_006556a4;
undefined LAB_005b0f82;
int DAT_0065c41c;
char DAT_0065b3d3;
uint DAT_0065c418;
undefined LAB_005b0ff3;
undefined DAT_00655688;
undefined DAT_005e4690;
undefined LAB_005b1018;
undefined LAB_005b1050;
undefined LAB_005b1088;
undefined LAB_005b10b8;
undefined LAB_005b10e8;
undefined LAB_005b1118;
undefined LAB_005b1148;
undefined LAB_005b1178;
byte DAT_0065c30c;
undefined DAT_00660428;
undefined LAB_005b11b0;
undefined LAB_005b11e8;
undefined LAB_005b1222;
uint DAT_00655078;
undefined LAB_005b1260;
undefined LAB_005b12c9;
undefined LAB_005b1310;
undefined DAT_005e6754;
undefined DAT_005e6758;
undefined DAT_005e6ae4;
undefined LAB_005b1360;
undefined LAB_005b13a8;
undefined LAB_005b13e0;
pointer PTR_DAT_005defa0;
undefined LAB_005b1410;
undefined LAB_005b1430;
undefined LAB_005b145b;
undefined LAB_005b14b9;
undefined LAB_005b14eb;
undefined LAB_005b151b;
undefined LAB_005b1568;
undefined LAB_005b1598;
undefined LAB_005b19d3;
undefined LAB_005b19f8;
undefined LAB_005b1a28;
undefined LAB_005b1a69;
uint *DAT_0065c424;
uint DAT_0065c420;
byte DAT_0065c30d;
char DAT_0065c2d8;
undefined DAT_00660628;
undefined DAT_00660629;
short DAT_006556ae;
uint DAT_006556b0;
undefined LAB_005b1afe;
undefined LAB_005b1ba4;
int DAT_006558d0;
int DAT_006558d4;
undefined LAB_005b1bd8;
undefined *PTR_tolower_005cd2b0;
uint DAT_00655794;
undefined4 DAT_00655780;
uint DAT_00655790;
undefined LAB_005b1c58;
undefined DAT_005e7338;
undefined DAT_005e7360;
undefined LAB_005b1c90;
undefined LAB_005b1cd8;
undefined LAB_005b1d1a;
undefined DAT_005ce018;
undefined LAB_005b1d48;
undefined LAB_005b1d70;
undefined LAB_005b1d98;
undefined LAB_005b1dc8;
undefined LAB_005b1e7e;
undefined LAB_005b1eee;
undefined DAT_005ce014;
undefined DAT_005e7468;
undefined DAT_005e746c;
undefined DAT_005e7470;
undefined LAB_005b1f20;
undefined LAB_005b1f48;
undefined LAB_005b1f80;
undefined LAB_005b1fdc;
undefined DAT_005e74f4;
undefined LAB_005b2018;
undefined DAT_005e7500;
undefined LAB_005b2080;
undefined LAB_005b20b8;
undefined LAB_005b20e8;
undefined LAB_005b2118;
undefined LAB_005b2140;
undefined LAB_005b2180;
undefined LAB_005b21b0;
undefined LAB_005b2215;
pointer PTR_s_normal_005dfcb0;
pointer PTR_s_drunk_005dfcb4;
undefined LAB_005b2240;
undefined4 DAT_006556d0;
undefined4 DAT_006556d4;
undefined4 DAT_006556c0;
undefined LAB_005b2280;
undefined LAB_005b22c0;
undefined LAB_005b232a;
undefined LAB_005b2360;
undefined LAB_005b23b0;
undefined DAT_005e75f8;
undefined LAB_005b23f0;
undefined LAB_005b2428;
undefined LAB_005b2450;
undefined LAB_005b248e;
undefined LAB_005b24c8;
undefined LAB_005b2508;
undefined *PTR_toupper_005cd2a0;
undefined LAB_005b2540;
undefined LAB_005b2590;
undefined DAT_005e310c;
undefined DAT_005e7a44;
undefined DAT_0062f350;
undefined LAB_005b25d0;
undefined LAB_005b2608;
undefined LAB_005b26c8;
undefined LAB_005b2700;
undefined DAT_005e7d58;
undefined DAT_005e7e24;
undefined DAT_005e7dbc;
undefined LAB_005b2750;
undefined DAT_005e7e18;
undefined DAT_005e7e28;
undefined LAB_005b2a3a;
undefined DAT_005e7fa0;
undefined DAT_005e80e4;
undefined DAT_005e80ec;
undefined LAB_005b2bfc;
undefined DAT_005e1b94;
undefined1 DAT_005e1d18;
undefined1 DAT_005e1d1c;
undefined DAT_005e1d20;
undefined LAB_005b2c46;
undefined LAB_005b2c86;
undefined LAB_005b2cb0;
undefined LAB_005b2cd0;
undefined LAB_005b2d2c;
undefined LAB_005b2d8c;
undefined LAB_005b2db8;
undefined LAB_005b2de8;
undefined LAB_005b2e23;
int DAT_0065b4d0;
int DAT_0065b4d4;
undefined LAB_005b2e51;
undefined LAB_005b2e78;
undefined LAB_005b2ec0;
undefined LAB_005b2f00;
undefined LAB_005b2f3f;
undefined LAB_005b2f7f;
undefined LAB_005b2fbf;
undefined LAB_005b2fff;
undefined LAB_005b303f;
undefined LAB_005b3068;
undefined LAB_005b3098;
undefined LAB_005b3101;
undefined LAB_005b3168;
undefined LAB_005b3198;
undefined LAB_005b31f0;
int DAT_0065630c;
undefined LAB_005b3228;
undefined LAB_005b3268;
undefined DAT_005e8d5c;
undefined LAB_005b32d0;
undefined LAB_005b3310;
undefined LAB_005b3371;
undefined *PTR_Color3B_005cd43c;
undefined LAB_005b3413;
undefined LAB_005b34f0;
undefined4 DAT_0065b5cc;
undefined4 DAT_0065b3d4;
undefined LAB_005b3550;
undefined LAB_005b35e7;
undefined LAB_005b367f;
undefined LAB_005b36b8;
undefined LAB_005b3713;
byte *DAT_0065b528;
undefined4 DAT_0065b524;
byte *DAT_0065b52c;
undefined1 DAT_0065b399;
undefined LAB_005b3773;
undefined DAT_005e970c;
undefined DAT_005e9710;
undefined LAB_005b380d;
pointer PTR_DAT_005ddb2c;
undefined DAT_005e96c0;
undefined LAB_005b3894;
undefined DAT_005e9718;
undefined LAB_005b392c;
pointer PTR_DAT_005df7ac;
undefined DAT_005e9748;
undefined LAB_005b3978;
int DAT_00655050;
undefined LAB_005b3ad3;
undefined DAT_005e8698;
undefined DAT_005e986c;
undefined DAT_005e9874;
undefined4 DAT_006556f0;
undefined4 DAT_0065b530;
undefined LAB_005b3b58;
undefined DAT_005e9584;
undefined DAT_005e98b0;
undefined LAB_005b3be8;
int DAT_0065b3b8;
undefined4 DAT_00655050;
undefined LAB_005b3c80;
undefined *PTR_DAT_005ce650;
undefined *PTR_s_uninhabitable_005ce678;
undefined DAT_005e9420;
undefined LAB_005b3cd8;
undefined LAB_005b3d38;
undefined DAT_005e99fc;
undefined LAB_005b3d90;
undefined LAB_005b3e71;
undefined *PTR_atoi_005cd1c8;
undefined4 *DAT_0065c2e8;
undefined LAB_005b3f60;
undefined LAB_005b3fb7;
undefined LAB_005b3ff8;
undefined LAB_005b40e0;
pointer PTR_s_cargo_005ddaf4;
undefined DAT_005e9b64;
float DAT_00655088;
int DAT_0065508c;
undefined LAB_005b4130;
float DAT_0065508c;
undefined DAT_005e9bb8;
uint DAT_00655084;
undefined LAB_005b424d;
undefined LAB_005b42c8;
pointer PTR_DAT_005df7f0;
pointer PTR_s_normal_005df804;
undefined LAB_005b4338;
undefined *PTR_s_yellow_005ce6b8;
undefined LAB_005b4378;
undefined DAT_005e9c44;
undefined LAB_005b43c0;
pointer PTR_DAT_005dd8ac;
int DAT_0065b3ac;
undefined LAB_005b463e;
undefined DAT_005e9d48;
undefined DAT_005e9d68;
undefined LAB_005b46c0;
undefined LAB_005b4738;
void *DAT_0065c288;
undefined LAB_005b48f3;
undefined LAB_005b4938;
undefined LAB_005b4968;
pointer PTR_DAT_005df7b4;
undefined LAB_005b4998;
undefined LAB_005b4bec;
undefined DAT_005ea100;
undefined LAB_005b4c39;
undefined DAT_005e8630;
undefined *PTR_~Vec2_005cd444;
undefined *PTR_Vec2_005cd450;
undefined LAB_005b4ca3;
undefined4 *DAT_0065b4d4;
undefined4 *DAT_0065b4d8;
undefined LAB_005b4d18;
undefined *PTR_s_univerisal_005ce660;
undefined1 DAT_005e4c64;
undefined DAT_005ea28c;
undefined LAB_005b4e25;
pointer PTR_s_hapnode_005ce5f0;
undefined LAB_005b4e77;
undefined LAB_005b4eb8;
undefined LAB_005b4ef8;
pointer PTR_DAT_005dfc80;
int DAT_0065b3c0;
undefined LAB_005b4f48;
undefined DAT_005ea398;
undefined LAB_005b4f98;
undefined LAB_005b5018;
undefined LAB_005b520b;
undefined DAT_005ea3ec;
undefined DAT_005ea418;
undefined4 DAT_006556d8;
undefined4 DAT_0065b3a8;
undefined LAB_005b531b;
undefined DAT_005ea438;
undefined DAT_005ea510;
int DAT_0065b3b4;
int DAT_0065b3a8;
undefined4 DAT_0065b3b0;
undefined LAB_005b56a8;
undefined1 DAT_005e925c;
int DAT_0065b3b0;
undefined4 DAT_0065b3b4;
undefined LAB_005b5a88;
int DAT_00655060;
undefined LAB_005b5c32;
pointer PTR_s_takefrom_005ce6c4;
char *param_1_005ea640;
undefined DAT_005ea634;
undefined DAT_005ea63c;
undefined LAB_005b5d3d;
undefined DAT_005ea704;
undefined DAT_005ea708;
undefined DAT_005ea768;
undefined LAB_005b5df1;
undefined1 DAT_005e88e0;
undefined LAB_005b5f94;
undefined LAB_005b6041;
undefined LAB_005b6122;
undefined LAB_005b61a8;
undefined DAT_005ce010;
undefined DAT_005e922c;
undefined DAT_005e9230;
undefined DAT_005e9234;
undefined DAT_005e9238;
undefined DAT_005e923c;
undefined LAB_005b61f0;
undefined LAB_005b629c;
pointer PTR_DAT_005dff08;
undefined LAB_005b62d0;
undefined LAB_005b6308;
Rect *DAT_0065c27c;
Rect *DAT_0065c2dc;
undefined LAB_005b6478;
undefined DAT_005e93b4;
undefined DAT_005e1bf0;
undefined DAT_005e927c;
undefined LAB_005b68cb;
undefined4 DAT_00655708;
undefined LAB_005b6945;
undefined LAB_005b69b3;
undefined LAB_005b6ee1;
undefined LAB_005b6f58;
void *DAT_0065c294;
undefined LAB_005b6fd6;
undefined DAT_005ead58;
undefined LAB_005b7069;
undefined DAT_005eaa40;
undefined LAB_005b7120;
byte *DAT_0065b53c;
undefined4 DAT_0065b538;
undefined4 DAT_00655058;
undefined4 DAT_00655054;
uint DAT_00655734;
undefined4 DAT_00655720;
byte *DAT_0065b540;
undefined LAB_005b7158;
undefined4 DAT_00655734;
int DAT_00655054;
undefined DAT_00000040;
undefined DAT_00000100;
undefined LAB_005b76e0;
undefined DAT_005ead74;
int DAT_00655058;
undefined LAB_005b7790;
undefined LAB_005b7bf3;
undefined4 DAT_0065571c;
undefined LAB_005b7dd0;
pointer PTR_s_debris_005df834;
undefined DAT_005ead0c;
undefined DAT_005eaeac;
undefined DAT_005eaf34;
undefined LAB_005b7ea0;
undefined DAT_005eaeb0;
undefined DAT_005eaf14;
undefined LAB_005b7f38;
undefined DAT_005eafac;
undefined LAB_005b8056;
undefined DAT_005e95e8;
undefined DAT_005eaffc;
undefined LAB_005b885b;
undefined *PTR_DAT_005ce66c;
pointer PTR_s_custom_005ce694;
undefined DAT_005eb508;
char DAT_0065b399;
undefined DAT_005eb3a4;
uint DAT_00655704;
undefined DAT_005eb3b4;
uint DAT_00655700;
undefined DAT_005eb3bc;
undefined DAT_005eb3c4;
undefined DAT_0065b534;
undefined DAT_005eb3cc;
int *DAT_0065b544;
undefined4 DAT_0065b548;
undefined LAB_005b889f;
undefined DAT_005eb3f0;
undefined1 DAT_005eb348;
undefined4 *DAT_0065c2e0;
undefined4 *DAT_0065c2e4;
undefined LAB_005b88e2;
byte *DAT_0065b544;
undefined LAB_005b891a;
undefined LAB_005b8948;
void *DAT_0065b4d0;
void *DAT_0065b4d4;
void *DAT_0065b4d8;
undefined LAB_005b8970;
undefined LAB_005b8990;
undefined LAB_005b89b9;
undefined LAB_005b89e8;
undefined LAB_005b8a10;
undefined4 *DAT_0065b544;
undefined LAB_005b8a43;
undefined LAB_005b8aef;
undefined LAB_005b8b2b;
undefined LAB_005b8b61;
undefined LAB_005b8b88;
undefined LAB_005b8bb8;
undefined LAB_005b8be8;
undefined LAB_005b8c21;
int DAT_0065b548;
undefined LAB_005b8c40;
undefined LAB_005b8c60;
undefined LAB_005b8c80;
undefined LAB_005b8ca0;
undefined4 DAT_0065b544;
uint DAT_0065b548;
undefined LAB_005b8cc0;
undefined LAB_005b8d6f;
undefined LAB_005b8d98;
undefined LAB_005b8e29;
undefined LAB_005b8e6f;
undefined LAB_005b8ec1;
int DAT_0065505c;
undefined LAB_005b8f06;
undefined DAT_005eb58c;
undefined LAB_005b8fa9;
undefined LAB_005b9030;
undefined LAB_005b9081;
undefined LAB_005b9109;
undefined LAB_005b918f;
undefined4 DAT_00655060;
undefined LAB_005b9207;
undefined LAB_005b926a;
undefined LAB_005b92bc;
undefined LAB_005b92f8;
undefined DAT_005ce138;
undefined LAB_005b9330;
undefined LAB_005b9387;
undefined *PTR_DAT_005ce6d0;
undefined *PTR_DAT_005cf9e0;
undefined LAB_005b93b8;
undefined LAB_005b9408;
undefined LAB_005b94cd;
undefined LAB_005b9521;
undefined LAB_005b95bf;
undefined LAB_005b9612;
undefined LAB_005b9650;
undefined LAB_005b96ca;
undefined LAB_005b9708;
undefined LAB_005b9740;
undefined LAB_005b9799;
undefined LAB_005b97e3;
undefined LAB_005b9890;
undefined LAB_005b98c8;
undefined LAB_005b990e;
undefined LAB_005b9948;
undefined *PTR_s_`%Brand_New_005dd894;
undefined *PTR_s_Unknown_005dda50;
undefined DAT_005ddc54;
undefined *PTR_s_ConnexT_005dd900;
undefined *PTR_s_Hap-Node_005dd91c;
undefined LAB_005b9988;
undefined LAB_005b99c0;
undefined LAB_005b99f8;
undefined LAB_005b9a48;
undefined LAB_005b9a80;
undefined LAB_005b9ab8;
undefined LAB_005b9c48;
undefined LAB_005b9cc6;
undefined LAB_005b9d87;
undefined LAB_005b9e1d;
undefined LAB_005b9e84;
undefined LAB_005b9ef1;
undefined DAT_0060b624;
undefined LAB_005b9f5c;
undefined LAB_005b9f98;
undefined LAB_005ba030;
undefined LAB_005ba068;
undefined LAB_005ba098;
undefined LAB_005ba0ee;
undefined *PTR_operator!=_005cd470;
undefined LAB_005ba138;
undefined LAB_005ba1a9;
undefined LAB_005ba1f7;
undefined DAT_005fc168;
undefined DAT_005df604;
undefined LAB_005ba279;
undefined LAB_005ba2f1;
undefined1 DAT_0060a5ec;
undefined LAB_005ba4c9;
int DAT_0065c2ec;
undefined LAB_005ba539;
undefined *PTR_DAT_005dd9f4;
undefined LAB_005ba5b1;
undefined DAT_0060c504;
undefined LAB_005ba5f8;
undefined *PTR_DAT_005dd8c4;
undefined LAB_005ba66f;
undefined DAT_0060c4c4;
undefined LAB_005ba6c6;
undefined *PTR_DAT_005dd9cc;
undefined LAB_005ba700;
undefined LAB_005ba774;
undefined LAB_005ba7f4;
undefined LAB_005ba840;
undefined LAB_005ba8d5;
undefined LAB_005ba926;
undefined LAB_005baa09;
undefined LAB_005baa6f;
undefined LAB_005baae7;
undefined LAB_005bab38;
undefined LAB_005babc1;
undefined LAB_005bac89;
undefined LAB_005bacfc;
undefined LAB_005bad50;
undefined LAB_005bad97;
undefined LAB_005bade0;
undefined LAB_005bae20;
undefined LAB_005bae50;
undefined LAB_005bae98;
undefined LAB_005baee1;
undefined LAB_005baf31;
undefined LAB_005bafa2;
undefined LAB_005bb00a;
undefined LAB_005bb038;
undefined LAB_005bb078;
undefined LAB_005bb0a8;
undefined LAB_005bb0f4;
undefined LAB_005bb118;
undefined LAB_005bb150;
pointer[8] vftable;
undefined LAB_005bb1ac;
undefined LAB_005bb23b;
undefined LAB_005bb2af;
undefined LAB_005bb2e8;
undefined LAB_005bb360;
undefined LAB_005bb3c0;
undefined LAB_005bb418;
undefined4 *DAT_0065b3bc;
undefined DAT_0060d640;
undefined LAB_005bb4ac;
void *DAT_0065b3bc;
undefined LAB_005bb4e8;
pointer PTR_DAT_005de750;
undefined LAB_005bb510;
undefined LAB_005bb530;
undefined LAB_005bb550;
undefined LAB_005bb5b3;
undefined LAB_005bb660;
undefined DAT_0060d818;
undefined LAB_005bb688;
undefined LAB_005bb6c9;
undefined LAB_005bb709;
undefined LAB_005bb760;
undefined LAB_005bb7a9;
undefined LAB_005bb7e9;
undefined LAB_005bb820;
undefined *PTR_s_Ulence_Federation_005ddab0;
pointer PTR_DAT_005ddac8;
undefined DAT_0060da7c;
undefined4 *DAT_0065c2f0;
undefined LAB_005bb9f5;
undefined LAB_005bba22;
undefined LAB_005bba5f;
undefined LAB_005bba90;
undefined LAB_005bbab8;
undefined LAB_005bbaf8;
undefined LAB_005bbb30;
undefined LAB_005bbb62;
undefined LAB_005bbbd0;
undefined LAB_005bbbf8;
undefined LAB_005bbc43;
undefined LAB_005bbcb4;
undefined DAT_0060df2c;
undefined DAT_0060dfc4;
undefined LAB_005bbd22;
undefined1 DAT_0060a970;
undefined LAB_005bbdc6;
undefined LAB_005bbeca;
undefined1 DAT_0060a974;
undefined LAB_005bbfb4;
undefined LAB_005bbfd8;
undefined DAT_00000254;
undefined DAT_005ddafc;
undefined DAT_005ddb08;
undefined DAT_005ddb14;
undefined DAT_005ddb20;
undefined LAB_005bc022;
undefined LAB_005bc074;
undefined *PTR_DAT_005ddb38;
undefined *PTR_s_Unknown_005ddb90;
undefined DAT_0060e2cc;
undefined LAB_005bc222;
undefined LAB_005bc266;
undefined LAB_005bc290;
undefined LAB_005bc2c2;
undefined LAB_005bc2e8;
undefined LAB_005bc340;
undefined LAB_005bc40b;
undefined DAT_005ce048;
int DAT_0065c2f8;
pointer PTR_DAT_005ddc30;
undefined LAB_005bc4a9;
undefined LAB_005bc4e0;
undefined LAB_005bc508;
DWORD *DAT_0065b628;
DWORD *DAT_0065b62c;
DWORD *DAT_0065b630;
undefined4 UNK_006557d0;
undefined4 UNK_006557d4;
int DAT_0065b62c;
int DAT_0065b628;
uint DAT_00655074;
undefined DAT_006557d8;
undefined1 DAT_0065b39b;
undefined4 UNK_006557cc;
undefined4 DAT_0065b628;
undefined4 DAT_00655074;
undefined LAB_005bc5d0;
pointer PTR_s__TOGGLE_005defa4;
char *_Mode_0060eae0;
uint DAT_006558cc;
uint DAT_006558c8;
char DAT_0065b39b;
char DAT_0065b3cc;
uint DAT_006557dc;
uint DAT_006557d8;
uint DAT_0065577c;
uint DAT_00655778;
undefined4 DAT_00655768;
undefined1 DAT_0065b3cd;
undefined4 DAT_006557c4;
undefined4 DAT_00655764;
undefined4 DAT_00655750;
undefined4 DAT_0065b624;
undefined4 DAT_0065b610;
undefined4 DAT_006557ac;
int DAT_0065506c;
int DAT_00655070;
undefined1 DAT_00655069;
undefined1 DAT_0065506a;
undefined1 DAT_0065b3d3;
undefined1 DAT_00655068;
undefined1 DAT_0065b3ce;
undefined1 DAT_0065b3d0;
undefined1 DAT_0065b39a;
undefined1 DAT_0065b3d2;
undefined1 DAT_0065507c;
undefined4 DAT_0065574c;
undefined4 DAT_00655738;
undefined1 DAT_0065b3cf;
undefined1 DAT_0065506b;
undefined1 DAT_0065b3d1;
undefined LAB_005bc64d;
undefined DAT_0060ea74;
undefined DAT_0060ee18;
undefined4 DAT_0065506c;
undefined4 DAT_00655070;
undefined LAB_005bc706;
undefined UNK_005ddc90;
undefined4 *DAT_0065b628;
undefined4 *DAT_0065b62c;
undefined4 *DAT_0065b630;
undefined LAB_005bc780;
undefined LAB_005bc7b0;
undefined LAB_005bc7e0;
undefined LAB_005bc88f;
pointer[7] vftable;
undefined LAB_005bc8df;
undefined LAB_005bc967;
undefined FUN_004b49a0;
undefined LAB_005bc9b1;
undefined LAB_005bc9f8;
undefined FUN_004b5670;
undefined LAB_005bca48;
undefined FUN_004b62a0;
undefined LAB_005bca98;
undefined FUN_004b4910;
byte *DAT_0065c270;
undefined LAB_005bcb08;
undefined FUN_004b62f0;
undefined LAB_005bcb39;
undefined LAB_005bcb68;
undefined LAB_005bcba0;
char *_Mode_0060f660;
undefined LAB_005bcbd8;
char *_Mode_0060f6d4;
undefined LAB_005bcc10;
undefined LAB_005bcc48;
undefined LAB_005bcc80;
undefined LAB_005bccc8;
undefined LAB_005bcd31;
undefined LAB_005bcd78;
undefined LAB_005bcdc1;
void *_DstBuf_0065b3ec;
undefined *PTR_fread_005cd28c;
undefined LAB_005bce00;
undefined LAB_005bcea1;
undefined LAB_005bcf22;
undefined LAB_005bcf50;
undefined FUN_0042b080;
undefined FUN_00412930;
undefined *PTR_fwrite_005cd288;
undefined LAB_005bcf80;
int *DAT_0065c270;
undefined LAB_005bcfe0;
undefined LAB_005bd020;
undefined LAB_005bd06f;
undefined LAB_005bd0a8;
undefined LAB_005bd0f0;
undefined LAB_005bd12f;
undefined LAB_005bd168;
undefined LAB_005bd1a0;
undefined LAB_005bd1e0;
undefined LAB_005bd218;
int * * * *DAT_0065c274;
undefined DAT_00000004;
undefined LAB_005bd303;
undefined LAB_005bd342;
undefined LAB_005bd38a;
undefined LAB_005bd3d0;
undefined LAB_005bd440;
undefined LAB_005bd478;
undefined LAB_005bd526;
FILE *DAT_0065c270;
undefined LAB_005bd590;
undefined LAB_005bd646;
undefined LAB_005bd690;
undefined LAB_005bd743;
uint *DAT_0065b5cc;
undefined LAB_005bd7dc;
undefined FUN_00413270;
undefined LAB_005bd913;
undefined LAB_005bd930;
pointer PTR_s_tutorial_005de0d0;
pointer PTR_DAT_005de0b0;
undefined LAB_004ca9b0;
undefined LAB_005bd9e8;
undefined FUN_004caa10;
undefined LAB_005bda20;
undefined LAB_005bda50;
char DAT_0065b3cd;
undefined LAB_005bda90;
undefined LAB_005bdab8;
int DAT_00655094;
int DAT_00655098;
undefined LAB_005bdb00;
undefined LAB_005bdb38;
undefined LAB_005bdb70;
undefined LAB_005bdba0;
undefined LAB_005bdbd0;
double DAT_0065b3e0;
undefined LAB_005bdc0a;
undefined LAB_005bdc4a;
undefined LAB_005bdc9c;
undefined LAB_005bdcda;
undefined LAB_005bdd1a;
void * *DAT_0065c288;
undefined LAB_005bdd5a;
undefined LAB_005bdd9a;
undefined LAB_005bddda;
undefined LAB_005bde1a;
undefined LAB_005bde7c;
undefined LAB_005bdec0;
undefined LAB_005bdf0a;
undefined LAB_005bdf4a;
undefined LAB_005bdf80;
undefined LAB_005bdfb8;
undefined LAB_005be008;
undefined FUN_004ce040;
undefined FUN_004ce100;
undefined FUN_004ce2f0;
undefined FUN_004ce3d0;
undefined FUN_004ce4c0;
undefined FUN_004ce530;
undefined FUN_004ce6c0;
undefined FUN_004ce7e0;
undefined FUN_004ce840;
undefined FUN_004ce8e0;
undefined FUN_004ce970;
undefined FUN_004cea10;
undefined FUN_004ceab0;
undefined FUN_004ced60;
undefined FUN_004cede0;
undefined FUN_004cee40;
undefined FUN_004cef20;
undefined FUN_004ceff0;
undefined FUN_004cf090;
undefined FUN_004cf130;
undefined FUN_004cf210;
undefined FUN_004cf2c0;
undefined FUN_004cf370;
undefined FUN_004cf420;
undefined FUN_004cf4d0;
undefined FUN_004cf570;
undefined FUN_004cf650;
undefined FUN_004cf730;
undefined FUN_004cf800;
undefined FUN_004cf8d0;
undefined FUN_004cf9a0;
undefined FUN_004cfa80;
undefined FUN_004cfb70;
undefined FUN_004cfc80;
undefined FUN_004cfd50;
undefined FUN_004cfe20;
undefined FUN_004cfef0;
undefined FUN_004d0010;
undefined FUN_004d01c0;
undefined FUN_004d0290;
undefined FUN_004d0370;
undefined FUN_004d0450;
undefined FUN_004d0530;
undefined FUN_004d05d0;
undefined FUN_004d0680;
undefined FUN_004d0720;
undefined FUN_004d0780;
undefined FUN_004d0830;
undefined FUN_004d08d0;
undefined FUN_004d0980;
undefined FUN_004d0a20;
undefined FUN_004d0a80;
undefined FUN_004d0b20;
undefined FUN_004d0bd0;
undefined FUN_004d0c70;
undefined FUN_004d0cd0;
undefined FUN_004d0d70;
undefined FUN_004d0e20;
undefined FUN_004d0ec0;
undefined FUN_004d0f20;
undefined FUN_004d0fd0;
undefined FUN_004d1090;
undefined FUN_004d1140;
undefined FUN_004d11b0;
undefined FUN_004d1260;
undefined FUN_004d1310;
undefined FUN_004d13d0;
undefined FUN_004d1480;
undefined FUN_004d14f0;
undefined FUN_004d1590;
undefined FUN_004d1640;
undefined FUN_004d16e0;
undefined FUN_004d1740;
undefined FUN_004d17e0;
undefined FUN_004d1890;
undefined FUN_004d1930;
undefined FUN_004d1990;
undefined FUN_004d1a30;
undefined FUN_004d1ae0;
undefined FUN_004d1b80;
undefined FUN_004d1be0;
undefined FUN_004d1c80;
undefined FUN_004d1d30;
undefined FUN_004d1dd0;
undefined FUN_0052ad80;
undefined FUN_004d1e30;
undefined FUN_0052ae40;
undefined FUN_004d1ed0;
undefined FUN_004d1f80;
undefined FUN_004d2020;
undefined FUN_004d2200;
undefined FUN_004d2370;
undefined FUN_004d24e0;
undefined FUN_004d25d0;
undefined FUN_004d26c0;
undefined FUN_004d27a0;
undefined FUN_004d2880;
undefined FUN_004d28e0;
undefined FUN_004d2c60;
undefined FUN_004d2d90;
undefined FUN_004d2ed0;
undefined FUN_004d2ff0;
undefined FUN_004d3130;
undefined FUN_004d31c0;
undefined FUN_004d3270;
undefined FUN_004d3320;
undefined FUN_004d3380;
undefined FUN_004d33d0;
undefined FUN_004d3420;
undefined FUN_004d3470;
undefined FUN_004d34c0;
undefined FUN_004d3560;
undefined FUN_004d3600;
undefined FUN_004d36b0;
undefined FUN_004d3760;
undefined FUN_004d37c0;
undefined FUN_004d3820;
undefined FUN_004d3890;
undefined FUN_004d3900;
undefined FUN_004d3980;
undefined FUN_004d3a10;
undefined FUN_004d3a90;
undefined FUN_004d3b20;
undefined FUN_004d3d80;
undefined FUN_004d3e50;
undefined FUN_004d9090;
undefined FUN_004d91c0;
undefined FUN_004d9260;
undefined FUN_004da160;
undefined FUN_0052aeb0;
undefined FUN_004cb7d0;
undefined FUN_004cb9e0;
undefined FUN_004cbc80;
undefined FUN_004cc180;
undefined FUN_004cc250;
undefined FUN_004cc320;
undefined FUN_004cc410;
undefined FUN_004cc510;
undefined FUN_004cc5e0;
undefined FUN_004cc6c0;
undefined FUN_004cc870;
undefined FUN_004cd270;
undefined FUN_004cd750;
undefined FUN_004cdb10;
undefined FUN_004cddd0;
undefined FUN_004ce240;
undefined FUN_004ce590;
undefined FUN_004ceeb0;
undefined FUN_004cef80;
undefined FUN_004d00e0;
undefined FUN_004d2940;
undefined FUN_004d2a00;
undefined FUN_004d2ad0;
undefined FUN_004d2b90;
undefined FUN_004d3ba0;
undefined FUN_004d3c40;
undefined FUN_004d3ce0;
undefined FUN_004d8f60;
undefined FUN_004cb480;
undefined FUN_004cb4f0;
undefined FUN_004cb540;
undefined FUN_004cb5a0;
undefined FUN_004cb610;
undefined FUN_004cb680;
undefined FUN_004cb6f0;
undefined FUN_004cb760;
undefined FUN_004cb900;
undefined FUN_004cbc20;
undefined FUN_004cbd20;
undefined FUN_004cbd90;
undefined FUN_004cbdf0;
undefined FUN_004cbe30;
undefined FUN_004cbe90;
undefined FUN_004cbf20;
undefined FUN_004cbf80;
undefined FUN_004cbfe0;
undefined FUN_004cc040;
undefined FUN_004cc0c0;
undefined FUN_004cc7b0;
undefined FUN_004cc810;
undefined FUN_004cc910;
undefined FUN_004cc9c0;
undefined FUN_004cca70;
undefined FUN_004ccb30;
undefined FUN_004ccbf0;
undefined FUN_004cccb0;
undefined FUN_004ccd70;
undefined FUN_004cce30;
undefined FUN_004ccef0;
undefined FUN_004ccfb0;
undefined FUN_004cd070;
undefined FUN_004cd0d0;
undefined FUN_004cd130;
undefined FUN_004cd210;
undefined FUN_004cd2d0;
undefined FUN_004cd330;
undefined FUN_004cd390;
undefined FUN_004cd3f0;
undefined FUN_004cd450;
undefined FUN_004cd4b0;
undefined FUN_004cd510;
undefined FUN_004cd570;
undefined FUN_004cd5d0;
undefined FUN_004cd630;
undefined FUN_004cd690;
undefined FUN_004cd6f0;
undefined FUN_004cd840;
undefined FUN_004cd930;
undefined FUN_004cda20;
undefined FUN_004cdc70;
undefined FUN_004cdec0;
undefined FUN_004cdfb0;
pointer PTR_DAT_005de118;
pointer PTR_DAT_005deca8;
undefined LAB_005be048;
undefined LAB_005be17b;
undefined *PTR_DAT_005de70c;
undefined LAB_005be1b8;
pointer PTR_DAT_005dee68;
undefined4 DAT_006557e0;
void *DAT_0065b444;
undefined LAB_005be1f9;
undefined LAB_005be228;
uint DAT_0065b444;
int DAT_00655074;
undefined LAB_005be260;
undefined LAB_005be2a0;
undefined LAB_005be2c8;
undefined LAB_005be346;
undefined LAB_005be389;
undefined LAB_005be3c0;
undefined8 DAT_0065b3e0;
undefined LAB_005be3e8;
undefined LAB_005be430;
undefined LAB_005be468;
undefined LAB_005be4a8;
undefined LAB_005be4f0;
undefined LAB_005be55e;
undefined LAB_005be592;
undefined LAB_005be5c2;
undefined LAB_005be61b;
undefined LAB_005be664;
uint DAT_0065c288;
undefined LAB_005be6bb;
undefined LAB_005be6fa;
undefined LAB_005be732;
undefined LAB_005be768;
undefined LAB_005be7b8;
undefined LAB_005be7f0;
undefined LAB_005be848;
undefined DAT_00614bcc;
undefined LAB_005be8bb;
undefined LAB_005be8f2;
undefined LAB_005be930;
undefined LAB_005be978;
undefined LAB_005be9c0;
undefined LAB_005bea3c;
undefined LAB_005beaba;
undefined LAB_005beaf8;
undefined DAT_0060c3d8;
undefined LAB_005beb3b;
undefined4 *DAT_0065c2dc;
undefined LAB_005beb8c;
undefined LAB_005bebd4;
undefined LAB_005bec02;
undefined LAB_005bec44;
undefined LAB_005bec70;
uint DAT_0065b624;
undefined LAB_005becc0;
undefined FUN_004e2db0;
undefined FUN_004e2f30;
undefined FUN_004e30f0;
undefined FUN_004e3140;
undefined FUN_004e1c80;
undefined FUN_004e31b0;
undefined FUN_004e3220;
undefined FUN_004e3290;
undefined FUN_004e3390;
undefined FUN_004e72a0;
undefined FUN_004e3410;
undefined FUN_004e35d0;
undefined FUN_004e81c0;
undefined FUN_004e3640;
undefined FUN_004e8220;
undefined FUN_004e36b0;
undefined FUN_004e3770;
undefined FUN_004e3cd0;
undefined FUN_004e3e00;
undefined FUN_004e3fa0;
undefined FUN_004e40b0;
undefined FUN_004e41a0;
undefined FUN_004e43d0;
undefined FUN_004e46b0;
undefined FUN_004e4ba0;
undefined FUN_004e4c40;
undefined FUN_004e4c80;
undefined FUN_004e4cc0;
undefined FUN_004e51b0;
undefined FUN_004e5530;
undefined FUN_004e7740;
undefined FUN_004e77d0;
undefined FUN_004e7850;
undefined FUN_004e78a0;
undefined FUN_004e7900;
undefined FUN_004e7950;
undefined FUN_004e7970;
undefined FUN_004e79d0;
undefined FUN_004e7a20;
undefined FUN_004e7a40;
undefined FUN_004e7aa0;
undefined FUN_004e7af0;
undefined FUN_004e7b10;
undefined FUN_004e7b70;
undefined FUN_004e7bc0;
undefined FUN_004e7be0;
undefined FUN_004e7c40;
undefined FUN_004e7c90;
undefined FUN_004e7cb0;
undefined FUN_004e7d10;
undefined FUN_004e7d60;
undefined FUN_004e7d80;
undefined FUN_004e7de0;
undefined FUN_004e7e30;
undefined FUN_004e7e60;
undefined FUN_004e7ec0;
undefined FUN_004e7f10;
undefined FUN_004e7f40;
undefined FUN_004e7fa0;
undefined FUN_004e7ff0;
undefined FUN_004e8020;
undefined FUN_004e8080;
undefined FUN_004e80d0;
undefined FUN_004e80f0;
undefined FUN_004e8150;
undefined FUN_004e81a0;
undefined FUN_004de890;
undefined FUN_004deb20;
undefined FUN_004df2b0;
undefined FUN_004df5a0;
undefined FUN_004df7c0;
undefined FUN_004df9d0;
undefined FUN_004dfd10;
undefined FUN_004e0430;
undefined FUN_004e0490;
undefined FUN_004e04f0;
undefined FUN_004e0570;
undefined FUN_004e05f0;
undefined FUN_004e0690;
undefined FUN_004e06f0;
undefined FUN_004e0770;
undefined FUN_004e07b0;
undefined FUN_004de650;
undefined FUN_004e1a10;
undefined FUN_004de7e0;
undefined FUN_004e1b40;
undefined FUN_004de940;
undefined FUN_004e1d40;
undefined FUN_004dea70;
undefined FUN_004e1e70;
undefined FUN_004deb90;
undefined FUN_004df6f0;
undefined FUN_004dfc00;
undefined FUN_004dfd90;
undefined FUN_004dfeb0;
undefined LAB_005becf8;
undefined LAB_005bed20;
undefined LAB_004ec100;
undefined FUN_004ebda0;
undefined FUN_004ebdf0;
undefined FUN_004ebe10;
undefined FUN_004ebe40;
undefined FUN_004ebef0;
undefined FUN_004ebfa0;
undefined FUN_004ec050;
undefined FUN_004ec070;
undefined FUN_004ec0b0;
undefined FUN_004ec110;
undefined FUN_004ec130;
undefined FUN_004ec150;
undefined FUN_004ec470;
undefined FUN_004ec4d0;
undefined FUN_004ec500;
undefined FUN_004ec520;
undefined FUN_004ec590;
undefined FUN_004ec6e0;
undefined FUN_004ec710;
undefined FUN_004ec750;
undefined FUN_004ebe60;
undefined FUN_004ec770;
undefined FUN_004ebf10;
undefined FUN_004ec790;
undefined FUN_004ebfc0;
undefined FUN_004ec7e0;
undefined FUN_004ec170;
undefined FUN_004ec820;
undefined FUN_004ec370;
undefined FUN_004ec8b0;
undefined FUN_004ebd60;
undefined FUN_004ec600;
undefined FUN_004ec970;
undefined FUN_004ec9a0;
undefined FUN_004eca20;
undefined FUN_004eca50;
undefined LAB_005bed6d;
undefined FUN_004f9960;
undefined FUN_004f9990;
undefined FUN_004f99b0;
undefined FUN_004f9b00;
undefined FUN_004fa420;
undefined FUN_004fa460;
undefined FUN_004fa5f0;
undefined FUN_004fab90;
undefined FUN_004fb1c0;
undefined FUN_004fb1e0;
undefined FUN_004ed570;
undefined FUN_004ed590;
undefined FUN_004ed5c0;
undefined FUN_004ed610;
undefined FUN_004ed6f0;
undefined FUN_004ed760;
undefined FUN_004ed7d0;
undefined FUN_004ed8e0;
undefined FUN_004ed9e0;
undefined FUN_004edfc0;
undefined FUN_004ee360;
undefined FUN_004ee670;
undefined FUN_004ee7c0;
undefined FUN_004ee870;
undefined FUN_004ee8f0;
undefined FUN_004eea10;
undefined FUN_004eeb20;
undefined FUN_004eed90;
undefined FUN_004ef3a0;
undefined FUN_004efd30;
undefined FUN_004f0020;
undefined FUN_004f0630;
undefined FUN_004f07a0;
undefined FUN_004f0d50;
undefined FUN_004f12f0;
undefined FUN_004f1340;
undefined FUN_004f1680;
undefined FUN_004f1cd0;
undefined FUN_004f2150;
undefined FUN_004f2440;
undefined FUN_004f2770;
undefined FUN_004f2a40;
undefined FUN_004f2dd0;
undefined FUN_004f2df0;
undefined FUN_004f2e10;
undefined FUN_004f3190;
undefined FUN_004f3450;
undefined FUN_004f3520;
undefined FUN_004f37d0;
undefined FUN_004f3a40;
undefined FUN_004f3b30;
undefined FUN_004f3be0;
undefined FUN_004f3c60;
undefined FUN_004f3ce0;
undefined FUN_004f3ea0;
undefined FUN_004f40a0;
undefined FUN_004f44a0;
undefined FUN_004f47e0;
undefined FUN_004f4c10;
undefined FUN_004f50f0;
undefined FUN_004f54d0;
undefined FUN_004f5690;
undefined FUN_004f56e0;
undefined FUN_004f5870;
undefined FUN_004f5c90;
undefined FUN_004f6060;
undefined FUN_004f7440;
undefined FUN_004f84a0;
undefined FUN_004f84f0;
undefined FUN_004ed550;
undefined FUN_004f8540;
undefined FUN_004f8590;
undefined FUN_004f85e0;
undefined FUN_004f8690;
undefined FUN_004f86e0;
undefined FUN_004f8750;
undefined FUN_004f87a0;
undefined FUN_004f87f0;
undefined FUN_004f8840;
undefined FUN_004f88f0;
undefined FUN_004f89f0;
undefined FUN_004f8aa0;
undefined FUN_004f8b50;
undefined FUN_004f8c00;
undefined FUN_004f8cb0;
undefined FUN_004f8d60;
undefined FUN_004f8e10;
undefined FUN_004f8ec0;
undefined FUN_004f8f70;
undefined FUN_004f9020;
undefined FUN_004f90d0;
undefined FUN_004f9180;
undefined FUN_004f9230;
undefined FUN_004f92e0;
undefined FUN_004f9410;
undefined FUN_004f94c0;
undefined *PTR_s_Standard_005dec9c;
undefined LAB_005bedd0;
undefined LAB_005bee28;
undefined LAB_005bee78;
undefined LAB_005beeb0;
undefined LAB_005bef09;
undefined LAB_005bef80;
undefined LAB_005bf018;
undefined LAB_005bf060;
undefined DAT_00616638;
undefined DAT_0061663c;
undefined DAT_006166fc;
undefined LAB_005bf0e8;
undefined DAT_00616704;
undefined DAT_00616640;
undefined DAT_00616648;
undefined DAT_0061664c;
undefined DAT_00616650;
undefined DAT_00616654;
undefined DAT_00616658;
undefined DAT_0061665c;
undefined DAT_00616660;
undefined DAT_00616784;
undefined DAT_00616788;
undefined DAT_0061678c;
undefined DAT_00616790;
undefined LAB_005bf158;
undefined LAB_005bf1d1;
undefined LAB_005bf228;
undefined LAB_005bf2b8;
undefined LAB_005bf328;
undefined LAB_005bf380;
undefined LAB_005bf3c8;
undefined LAB_005bf418;
undefined4 DAT_006557f8;
undefined LAB_005bf470;
undefined LAB_005bf4c0;
undefined LAB_005bf508;
undefined LAB_005bf548;
undefined LAB_005bf588;
undefined LAB_005bf5c8;
undefined LAB_005bf630;
undefined LAB_005bf6b0;
undefined LAB_005bf708;
undefined LAB_005bf740;
undefined LAB_005bf7b8;
undefined LAB_005bf808;
undefined DAT_0062e0bc;
undefined LAB_005bfa0a;
undefined DAT_00617dec;
undefined LAB_005bfba2;
undefined4 DAT_00655870;
undefined LAB_005bfbe2;
undefined4 DAT_006558a0;
undefined4 DAT_00655888;
undefined LAB_005bfc48;
undefined LAB_005bfc89;
undefined LAB_005bfd40;
undefined LAB_005bfd89;
undefined LAB_005bfdfd;
undefined LAB_005bfec6;
undefined LAB_005bff48;
undefined DAT_00618b30;
undefined DAT_00618b34;
undefined LAB_005bff94;
undefined DAT_005df538;
undefined LAB_005bffc2;
pointer[10] vftable;
undefined LAB_005c0008;
undefined LAB_005c0040;
undefined LAB_005c0078;
undefined LAB_005c00bb;
undefined LAB_005c00f2;
undefined LAB_005c0119;
undefined LAB_005c0152;
undefined LAB_005c0193;
undefined LAB_005c01d2;
undefined LAB_005c022d;
undefined DAT_005df5d8;
undefined LAB_005c026a;
undefined DAT_005df30c;
undefined LAB_005c02a2;
undefined LAB_005c02db;
undefined LAB_005c0342;
undefined LAB_005c03ac;
undefined LAB_005c0497;
undefined LAB_005c04d0;
undefined LAB_005c0568;
undefined LAB_005c0617;
undefined LAB_005c0686;
undefined LAB_005c06b8;
pointer PTR_s_cautious_005df5ac;
pointer PTR_s_green_005df5cc;
pointer PTR_s_normal_005df548;
undefined LAB_005c073c;
undefined LAB_005c0814;
undefined DAT_00603a54;
undefined DAT_0061a0f8;
undefined LAB_005c0878;
undefined DAT_005df584;
undefined DAT_005df5bc;
undefined LAB_005c08a8;
undefined LAB_005c0953;
undefined DAT_005df554;
undefined DAT_005df5a0;
undefined LAB_005c09a4;
undefined LAB_005c09f6;
undefined LAB_005c0a96;
undefined DAT_005df564;
undefined LAB_005c0af0;
undefined LAB_005c0c24;
undefined LAB_005c0cf7;
undefined LAB_005c0d29;
undefined *PTR_s_General_005df5f4;
undefined DAT_006167bc;
undefined LAB_005c0d71;
undefined UNK_005df5e8;
undefined DAT_0061a718;
undefined DAT_0061a63c;
undefined LAB_005c0db0;
undefined LAB_005c0df0;
pointer PTR_DAT_005df610;
undefined LAB_005c0e30;
undefined LAB_005c0f40;
undefined LAB_005c0fe6;
undefined LAB_005c1031;
undefined LAB_005c1072;
undefined LAB_005c10d2;
undefined DAT_005e6c60;
undefined DAT_0061abb8;
undefined LAB_005c1110;
undefined DAT_0061ac18;
int DAT_0065b3d8;
undefined LAB_005c12b2;
undefined LAB_005c12d0;
undefined LAB_005c1314;
undefined LAB_005c1343;
undefined LAB_005c1370;
undefined LAB_005c13b4;
undefined LAB_005c13d8;
undefined LAB_005c1440;
undefined LAB_005c147a;
undefined LAB_005c14b2;
undefined LAB_005c14f0;
undefined LAB_005c1552;
undefined LAB_005c1599;
undefined LAB_005c17dc;
undefined DAT_005ce0c4;
undefined LAB_005c1820;
undefined LAB_005c1862;
undefined LAB_005c18a1;
undefined LAB_005c1971;
undefined DAT_005ce084;
void *DAT_0065b3d4;
undefined LAB_005c19e4;
undefined LAB_005c1a62;
undefined LAB_005c1a92;
undefined LAB_005c1ab8;
undefined LAB_005c1af8;
undefined LAB_005c1b29;
undefined LAB_005c1b62;
undefined LAB_005c1b88;
undefined1 DAT_0065507d;
float DAT_0065bf24;
float DAT_0065bf28;
undefined LAB_005c1c15;
undefined LAB_005c1d17;
undefined DAT_0061bc80;
undefined LAB_005c1de2;
undefined LAB_005c1e22;
undefined LAB_005c1e57;
undefined LAB_005c1e92;
undefined LAB_005c1ec8;
undefined LAB_005c1ef9;
undefined LAB_005c1f3b;
undefined LAB_005c1f69;
undefined LAB_005c1fab;
undefined LAB_005c1fd9;
undefined LAB_005c2010;
undefined LAB_005c2049;
undefined LAB_005c2094;
undefined LAB_005c20e7;
undefined LAB_005c2119;
undefined LAB_005c215b;
undefined LAB_005c2192;
undefined LAB_005c21c0;
undefined *PTR_s_Fixer-upper._005df61c;
undefined *PTR_s_Kept_in_pristine_condition._005df678;
undefined *PTR_s_Sorry_to_let_her_go_but_need_the_005df6b4;
undefined *PTR_s_Has_a_good_espresso_machine_in_t_005df718;
undefined *PTR_s_Has_an_after-market_%s_installed_005df774;
undefined *PTR_s_Needs_a_new_%s._005df79c;
undefined LAB_005c2200;
undefined LAB_005c2232;
pointer PTR_DAT_005df7c4;
undefined LAB_005c22ab;
undefined LAB_005c22f0;
undefined DAT_0061c74c;
undefined LAB_005c2345;
undefined LAB_005c2390;
undefined LAB_005c23d3;
undefined LAB_005c2408;
undefined LAB_005c2438;
undefined LAB_005c2494;
int DAT_00655080;
undefined LAB_005c2507;
undefined DAT_0061cb28;
undefined DAT_0061cb0c;
undefined DAT_00000030;
undefined DAT_00000238;
undefined DAT_00000250;
undefined LAB_005c2658;
undefined LAB_005c2691;
undefined DAT_0061ceb0;
undefined LAB_005c271f;
undefined LAB_005c2759;
undefined LAB_005c2790;
undefined LAB_005c27f1;
undefined LAB_005c2828;
undefined LAB_005c286b;
undefined LAB_005c28a1;
undefined LAB_005c28d2;
undefined LAB_005c2914;
undefined LAB_005c295c;
undefined LAB_005c29bd;
undefined LAB_005c2a1d;
undefined LAB_005c2a7d;
undefined LAB_005c2ac1;
undefined *PTR_s_Cardholder_005d3cc0;
undefined LAB_005c2af9;
undefined LAB_005c2b30;
undefined LAB_005c2b61;
undefined LAB_005c2b88;
int DAT_00655064;
undefined LAB_005c2c09;
undefined LAB_005c2c52;
undefined LAB_005c2ca0;
undefined LAB_005c2cf0;
undefined LAB_005c2d30;
undefined *PTR_ZERO_005cd490;
undefined LAB_005c2dc8;
undefined LAB_005c2e01;
undefined LAB_005c2e4b;
undefined LAB_005c3846;
char *_Src_0061e3bc;
undefined LAB_005c387f;
undefined *PTR_DAT_005df8a8;
undefined *PTR_Color3B_005cd45c;
undefined LAB_005c38e1;
undefined LAB_005c3921;
undefined LAB_005c3983;
undefined LAB_005c39c9;
undefined4 *DAT_0065c300;
undefined LAB_005c3d89;
undefined *PTR_s_Testing_005dfc04;
undefined DAT_0061e910;
undefined FUN_00529360;
undefined DAT_0061e91c;
undefined FUN_00529380;
undefined FUN_00529820;
undefined FUN_005299d0;
undefined LAB_005c3e0d;
undefined LAB_005c3e8d;
undefined DAT_0061ea00;
undefined LAB_005c3ecf;
undefined LAB_005c3ef0;
undefined LAB_005c3f4e;
undefined LAB_005c3fd7;
undefined LAB_005c4000;
undefined LAB_005c4030;
undefined DAT_0061e9e8;
undefined LAB_005c4088;
undefined DAT_0061eb7c;
undefined LAB_005c40d3;
undefined1 DAT_0065507e;
float DAT_0065bf1c;
float DAT_0065bf20;
char DAT_0065507e;
char DAT_0065507d;
undefined FUN_004e9b80;
undefined FUN_004e9ba0;
undefined FUN_004e9c40;
undefined FUN_004e9de0;
undefined FUN_004e9fe0;
undefined FUN_004e1a00;
undefined FUN_004e9cd0;
undefined FUN_0052af30;
undefined FUN_0052af70;
undefined FUN_0052afb0;
undefined FUN_0052aff0;
undefined FUN_0052b030;
undefined FUN_0052b090;
undefined FUN_0052b100;
undefined FUN_005305f0;
undefined FUN_004e0850;
undefined FUN_004e93b0;
undefined FUN_004e93f0;
undefined FUN_004e9470;
undefined FUN_004e94b0;
undefined FUN_004e9630;
undefined FUN_004e96e0;
undefined FUN_004e9790;
undefined FUN_004e9840;
undefined LAB_005c41e9;
undefined FUN_0052f9f0;
Layer *DAT_0065c304;
undefined FUN_00530000;
undefined FUN_00530400;
undefined FUN_005304b0;
undefined LAB_0053497f;
undefined LAB_00534987;
undefined4 DAT_00655858;
undefined1 DAT_0065b3e8;
undefined LAB_005c4234;
char DAT_0065506b;
undefined LAB_005c4268;
undefined4 DAT_00655098;
undefined4 DAT_00655094;
undefined LAB_005c42a8;
undefined LAB_005c42fa;
undefined LAB_005c4338;
undefined4 DAT_006550a8;
undefined DAT_000003f0;
undefined LAB_005c4369;
undefined LAB_005c43a2;
int *DAT_0065b7a8;
char DAT_0065b3e8;
undefined LAB_005c43c8;
undefined DAT_005ecf00;
float DAT_0065ba2c;
undefined LAB_005c4402;
undefined LAB_005c4443;
char DAT_0065b3eb;
undefined LAB_005c449c;
char DAT_00655068;
undefined LAB_005c44d2;
undefined LAB_005c4533;
undefined LAB_005c4568;
char DAT_0065b3cf;
undefined LAB_005c45ab;
undefined LAB_005c4606;
undefined *PTR_~Vec3_005cd4a8;
undefined LAB_005c4640;
undefined LAB_005c4690;
undefined LAB_005c46d2;
undefined LAB_005c4752;
undefined LAB_00533f30;
undefined LAB_005c48a5;
undefined *PTR_DAT_005dfc24;
undefined DAT_005ee2c4;
undefined DAT_0061fcb8;
undefined FUN_00533ea0;
undefined FUN_00533f40;
undefined FUN_00533fb0;
undefined LAB_005c48fe;
undefined LAB_005c4920;
undefined LAB_005c4940;
undefined LAB_005c4970;
undefined *PTR_WHITE_005cd4f8;
undefined LAB_005c49c5;
undefined LAB_005c49f2;
undefined LAB_005c4a18;
undefined LAB_005c4a96;
undefined4 DAT_0065ba28;
undefined LAB_005c4b16;
undefined LAB_005c4b5a;
undefined LAB_005c4b91;
pointer PTR_s_neutral_005dfc38;
pointer PTR_s_neutral_005dfc5c;
pointer PTR_DAT_005dfccc;
undefined LAB_005c4bbb;
undefined LAB_005c4c38;
undefined *PTR_s_Neutral_005dfc48;
undefined *PTR_s_Neutral_005dfc70;
undefined *PTR_s_Female_005dfc94;
undefined *PTR_DAT_005dfcd8;
undefined1 DAT_00607128;
undefined1 DAT_0061fde4;
undefined DAT_0061fe9c;
undefined DAT_0061feb8;
undefined DAT_0061fee0;
undefined LAB_005c4cda;
undefined *PTR_DAT_005dfcc0;
undefined LAB_005c4d48;
undefined LAB_005c4d88;
pointer PTR_s_standing_005dfce4;
undefined LAB_005c5014;
undefined LAB_005c505f;
undefined4 DAT_006550a4;
undefined LAB_005c50cf;
undefined DAT_00620164;
undefined DAT_00620180;
undefined *PTR_BLUE_005cd52c;
undefined LAB_005c5234;
undefined DAT_0053a2ab;
undefined LAB_005c5268;
undefined LAB_005c52a0;
undefined *PTR__transTime_005cd534;
undefined LAB_0053ad00;
undefined LAB_005c5321;
undefined LAB_005c5368;
char DAT_0065b3ce;
undefined LAB_005c53b4;
undefined LAB_005c53f9;
undefined LAB_005c5429;
undefined LAB_005c5498;
undefined LAB_005c5507;
undefined LAB_005c554f;
undefined LAB_005c558f;
undefined *PTR_s_normal_005dfd04;
undefined1 DAT_0061fdbc;
undefined LAB_005c55d0;
undefined LAB_005c55f0;
pointer[12] vftable;
undefined LAB_005c5610;
undefined FUN_0053e5b0;
undefined FUN_0053e720;
undefined FUN_0053ea30;
undefined LAB_005c5709;
undefined FUN_0053e820;
undefined FUN_0053ee10;
undefined FUN_0053f080;
undefined FUN_0053f5a0;
undefined DAT_006204f4;
undefined DAT_00620510;
undefined DAT_00620518;
undefined FUN_0053d8c0;
undefined FUN_0053dc00;
undefined FUN_0053e200;
undefined LAB_005c5758;
undefined LAB_005c57c0;
undefined DAT_00620618;
undefined LAB_005c5800;
undefined LAB_005c5840;
undefined LAB_005c5870;
undefined LAB_005c58a8;
undefined LAB_005c58e0;
undefined LAB_005c5908;
undefined LAB_005c5938;
undefined LAB_005c5970;
undefined LAB_005c59a0;
undefined LAB_005c59d8;
undefined LAB_005c5a08;
pointer[40] vftable;
undefined LAB_005c5c82;
pointer[187] vftable;
undefined LAB_005c5cc4;
undefined LAB_005c5d04;
undefined LAB_005c5d54;
undefined LAB_005c5d94;
undefined LAB_005c5df8;
undefined LAB_005c5e68;
undefined LAB_005c5ec6;
undefined LAB_005c5f38;
undefined LAB_005c5f9a;
undefined LAB_005c6008;
undefined LAB_005c6066;
undefined LAB_005c60c6;
undefined LAB_005c6114;
undefined LAB_005c616a;
undefined LAB_005c61e6;
undefined LAB_005c623c;
undefined LAB_005c628c;
undefined LAB_005c62dc;
undefined LAB_005c633a;
undefined LAB_005c638c;
undefined LAB_005c63dc;
undefined LAB_005c6424;
undefined LAB_005c6449;
undefined LAB_005c64b6;
undefined LAB_005c65e3;
undefined DAT_00620ff8;
undefined DAT_00620ffc;
undefined DAT_00621004;
undefined DAT_0062100c;
undefined DAT_00621010;
undefined DAT_0062102c;
undefined DAT_00621034;
undefined DAT_0062103c;
undefined FUN_00546020;
undefined LAB_005c6651;
undefined FUN_005460e0;
undefined FUN_00546740;
undefined FUN_00546760;
undefined LAB_005c6688;
undefined LAB_005c66f0;
undefined LAB_005c6728;
undefined DAT_006212e4;
undefined LAB_004b4a50;
undefined LAB_005c6788;
undefined DAT_00621108;
undefined DAT_00621188;
undefined LAB_005c67c0;
pointer PTR_DAT_005de0a4;
undefined LAB_005c67e8;
undefined LAB_005c6836;
undefined LAB_005c688e;
undefined LAB_005c68b8;
undefined LAB_005c6929;
undefined LAB_005c6a26;
undefined DAT_00621464;
undefined FUN_00549020;
undefined FUN_005494d0;
undefined DAT_006215f4;
undefined DAT_00621610;
undefined DAT_006217ac;
undefined LAB_005c6a70;
undefined LAB_005c6ad9;
undefined LAB_005c6b08;
undefined DAT_00621a0c;
undefined DAT_00621a40;
undefined FUN_0054bbd0;
undefined LAB_005c6c2f;
undefined FUN_0054c300;
undefined FUN_0054c890;
undefined FUN_0054cdb0;
undefined DAT_0060e210;
undefined FUN_0054d210;
undefined FUN_0054d890;
undefined DAT_00621c38;
undefined DAT_00621c54;
undefined FUN_0054b460;
undefined FUN_0054ba30;
undefined FUN_0054cc40;
undefined FUN_0054cd20;
undefined FUN_0054d440;
undefined FUN_0054d740;
undefined LAB_005c6c88;
undefined DAT_00621b20;
undefined DAT_00621ba8;
undefined LAB_005c6cc0;
undefined LAB_005c6d00;
undefined LAB_005c6d5c;
undefined DAT_00622210;
undefined LAB_005c6d90;
undefined FUN_0054e870;
undefined FUN_0054edd0;
undefined FUN_00551000;
undefined FUN_00551240;
undefined FUN_005512d0;
undefined FUN_00551430;
undefined DAT_006224fc;
undefined FUN_0054f720;
undefined FUN_0054f9f0;
undefined FUN_0054fe20;
undefined FUN_00550080;
undefined FUN_005506b0;
undefined FUN_00550cc0;
undefined DAT_00622690;
byte *DAT_0065c2ec;
undefined LAB_005c6dd0;
undefined DAT_00622988;
pointer PTR_DAT_005df614;
pointer PTR_DAT_005dfdb0;
undefined LAB_005c6e24;
undefined LAB_005c6edd;
undefined FUN_00551d60;
undefined FUN_005522c0;
undefined FUN_00552460;
undefined FUN_00552680;
undefined FUN_005527f0;
undefined FUN_00552b50;
pointer PTR_DAT_005dfec8;
undefined *PTR_DAT_005dfed8;
undefined DAT_005e1be0;
undefined *PTR_s_Explosive_005dfef0;
undefined LAB_005c6f19;
undefined LAB_005c6f49;
undefined LAB_005c6f82;
undefined LAB_005c71a5;
undefined LAB_005c71c0;
undefined LAB_005c71f9;
undefined LAB_005c7231;
undefined LAB_005c7259;
undefined LAB_005c7289;
undefined LAB_005c72c2;
undefined LAB_005c72f9;
undefined LAB_005c7329;
undefined *PTR_retain_005cd4c0;
undefined DAT_006238e0;
undefined *PTR_visit_005cd710;
undefined LAB_005c7406;
undefined LAB_005c7450;
undefined LAB_005c7490;
pointer PTR_DAT_005dffb8;
int DAT_006550a0;
undefined LAB_005c74bb;
char *param_1_0065b3f0;
undefined LAB_005c7549;
undefined *PTR_PTR_005e0080;
undefined LAB_005c7580;
undefined LAB_005c75d0;
char DAT_0065506a;
undefined LAB_005c7659;
undefined LAB_005c7701;
undefined DAT_00623b00;
undefined DAT_00623d8c;
undefined LAB_005c77c5;
undefined LAB_005c7838;
undefined LAB_005c7878;
undefined LAB_005c78c1;
undefined LAB_005c78e8;
undefined DAT_00623e3c;
undefined DAT_00623e9c;
undefined DAT_00623ea4;
undefined DAT_00623e90;
undefined DAT_00623e94;
undefined DAT_00623e98;
undefined LAB_005c7930;
undefined DAT_00623e84;
undefined DAT_00623e8c;
undefined LAB_005c7980;
undefined LAB_005c79d0;
pointer[198] vftable;
pointer[5] vftable;
Texture2D *this_0065b3f4;
char DAT_0065b3e9;
undefined LAB_005c7a68;
undefined LAB_005c7aaa;
undefined LAB_005c7aea;
undefined LAB_005c7b10;
undefined2 DAT_0065b8a0;
undefined1 DAT_0065b8a2;
undefined2 DAT_0065b8be;
undefined1 DAT_0065b8c0;
undefined2 DAT_0065b8c1;
undefined1 DAT_0065b8c3;
undefined2 DAT_0065b8c4;
undefined1 DAT_0065b8c6;
undefined2 DAT_0065b8c7;
undefined1 DAT_0065b8c9;
undefined2 DAT_0065b8ca;
undefined1 DAT_0065b8cc;
undefined2 DAT_0065b8cd;
undefined1 DAT_0065b8cf;
undefined2 DAT_0065b8d0;
undefined1 DAT_0065b8d2;
undefined2 DAT_0065b8b5;
undefined1 DAT_0065b8b7;
undefined LAB_005c7b40;
undefined LAB_005c7bf5;
undefined4 *DAT_0065c308;
undefined *PTR_BLACK_005cd588;
char DAT_0065b3d0;
undefined LAB_005c7c76;
undefined *PTR_s_CHAR_unknown.png_005e0148;
undefined *PTR_s_CHAR_unknown.png_005e03b8;
undefined LAB_005c7cc1;
undefined LAB_005c7ce0;
undefined LAB_005c7d00;
undefined LAB_005c7d28;
char DAT_0065b3ea;
undefined LAB_005c7d87;
undefined LAB_005c7db8;
undefined DAT_0065b810;
undefined DAT_0065b812;
undefined *PTR_s_CHAR_unknown.png_005e0898;
undefined LAB_005c7e1c;
undefined *PTR_s_CHAR_unknown.png_005e0628;
undefined LAB_005c7e90;
undefined LAB_005c7ec0;
undefined LAB_005c7fa7;
undefined LAB_005c7fd0;
undefined LAB_005c7ff8;
undefined LAB_005c8020;
undefined LAB_005c8049;
undefined LAB_005c809d;
undefined *PTR_GREEN_005cd6c4;
undefined *PTR_RED_005cd6c8;
undefined LAB_005c80c8;
undefined LAB_005c813e;
undefined LAB_005c8181;
undefined LAB_005c828b;
undefined LAB_005c82b0;
undefined LAB_005c82d9;
undefined LAB_005c8309;
undefined LAB_005c8339;
undefined LAB_005c837b;
undefined LAB_005c83a9;
undefined4 DAT_006558cc;
undefined LAB_005c8403;
undefined LAB_005c8470;
undefined LAB_005c84a0;
Texture2D *this_0065b3fc;
undefined LAB_005c84f6;
undefined LAB_005c8538;
undefined DAT_00627800;
undefined LAB_005c85b8;
undefined *PTR_s_Unknown_005e0b28;
undefined DAT_005ddc20;
undefined DAT_005ddc40;
undefined LAB_005c85e9;
undefined LAB_005c8619;
undefined LAB_005c8684;
undefined LAB_005c86f0;
undefined LAB_005c87d5;
undefined LAB_005c8811;
undefined LAB_005c8888;
undefined LAB_005c88b9;
undefined LAB_005c88e8;
undefined LAB_005c8920;
undefined LAB_005c8973;
undefined LAB_005c89bf;
undefined LAB_005c8a1b;
int *DAT_0065c300;
undefined LAB_005c8a8e;
undefined LAB_005c8ab0;
undefined LAB_005c8ae2;
undefined1 DAT_00000004;
undefined LAB_005c8b10;
undefined LAB_005c8bc2;
undefined LAB_005c8c00;
undefined LAB_005c8c9b;
undefined DAT_0061e3a8;
undefined DAT_0061e3e0;
undefined LAB_005c8cdb;
undefined LAB_005c8d40;
undefined LAB_005c8d7b;
undefined LAB_005c8e14;
undefined *PTR_s_Slot_HapNode_005e0bb8;
undefined LAB_005c8e52;
undefined LAB_005c8e79;
undefined LAB_005c8ea9;
undefined LAB_005c8ee8;
undefined LAB_005c8f22;
undefined4 *DAT_0065b980;
undefined4 *DAT_0065b984;
undefined LAB_005c8fd5;
undefined UNK_005e0c20;
undefined UNK_005e0ca8;
int *DAT_0065b980;
int *DAT_0065b97c;
undefined LAB_005c8ff0;
int DAT_0065509c;
undefined LAB_005c9058;
undefined LAB_005c90b6;
undefined4 DAT_0065509c;
undefined4 DAT_0065bf1c;
undefined4 DAT_0065bf20;
undefined LAB_005c9116;
undefined LAB_005c916d;
undefined LAB_005c91a2;
undefined LAB_005c91e4;
undefined LAB_005c9233;
undefined4 DAT_0065bf24;
undefined LAB_005c927c;
undefined LAB_005c92b2;
undefined *PTR_YELLOW_005cd6d4;
undefined *PTR_ORANGE_005cd6d0;
undefined LAB_005c9337;
undefined LAB_005c93ad;
undefined LAB_005c9744;
undefined UNK_005e0c44;
undefined UNK_005e0c68;
undefined *PTR_Vec2_005cd448;
undefined LAB_005c97ef;
undefined UNK_005e0c54;
undefined UNK_005e0c98;
undefined LAB_005c9820;
undefined LAB_005c9849;
void *DAT_0065b97c;
void *DAT_0065b980;
void *DAT_0065b984;
undefined LAB_005c9878;
undefined LAB_005c98a8;
undefined LAB_005c98e9;
undefined LAB_005c992b;
undefined LAB_005c99b8;
undefined LAB_005c99e9;
undefined LAB_005c9aaa;
undefined *PTR_s_Unknown_005e0cb8;
undefined LAB_005c9afa;
undefined LAB_005c9b5b;
undefined LAB_005c9b80;
undefined LAB_005c9bcd;
undefined LAB_005c9ed3;
undefined DAT_0062adc8;
undefined LAB_005c9f66;
undefined LAB_005c9fee;
undefined LAB_005ca029;
undefined LAB_005ca06a;
undefined LAB_005ca2c1;
undefined LAB_005ca336;
undefined LAB_005ca38a;
undefined LAB_005ca3b8;
undefined LAB_005ca404;
undefined LAB_005ca44c;
undefined DAT_0062bc8c;
undefined LAB_005ca48c;
undefined LAB_005ca4d9;
undefined LAB_005ca572;
undefined DAT_0062bf84;
undefined LAB_005ca635;
undefined LAB_005ca66f;
undefined LAB_005ca6b0;
undefined DAT_005e0dc8;
undefined LAB_005ca6e9;
undefined LAB_005ca718;
undefined DAT_0065b714;
undefined LAB_005ca76c;
undefined DAT_0062c650;
undefined LAB_005ca7c2;
undefined LAB_005ca801;
undefined LAB_005ca885;
undefined LAB_005ca8dc;
undefined LAB_005ca986;
undefined LAB_005ca9c0;
undefined LAB_005ca9f9;
undefined *PTR_s_Player_005e0df4;
undefined DAT_006558c8;
undefined DAT_0062dd90;
FileUtils *UNK_006558bc;
FileUtils *UNK_006558c0;
FileUtils *UNK_006558c4;
undefined LAB_005caa41;
undefined LAB_005caa73;
undefined LAB_005caac2;
undefined LAB_005cab12;
undefined LAB_005cab62;
undefined LAB_005cabcd;
undefined LAB_005cac09;
undefined LAB_005cac85;
undefined LAB_005caca0;
undefined LAB_005cad08;
undefined LAB_005cad42;
undefined LAB_005cad84;
undefined LAB_005cada0;
undefined LAB_005cadc0;
undefined *PTR_log_005cd8fc;
FILE *_File_0065b3f8;
undefined DAT_0065c428;
undefined LAB_005cae02;
undefined DAT_0062dd78;
undefined LAB_005cae48;
undefined DAT_0061aa70;
undefined LAB_005cae80;
undefined LAB_005caed4;
undefined LAB_005caf21;
undefined LAB_005caf7a;
undefined LAB_005cafc1;
undefined LAB_005cb021;
undefined LAB_005cb07c;
undefined LAB_005cb0c0;
undefined LAB_005cb101;
undefined LAB_005cb151;
undefined LAB_005cb1a9;
undefined LAB_005cb1e2;
undefined LAB_005cb21b;
char DAT_00656310;
undefined *PTR_GetProcAddress_005cd084;
char *_Src_0062e638;
char *_Src_0062e3b8;
undefined4 DAT_0065c248;
undefined4 DAT_0065c244;
undefined FUN_00594ae0;
undefined *DAT_0065c248;
FILE *_File_0065b400;
undefined LAB_005cb28e;
undefined lpTopLevelExceptionFilter_00594ff0;
undefined4 DAT_0066086c;
u_long DAT_00660868;
undefined LAB_005cb2ed;
undefined guard_check_icall;
undefined FUN_004dcac0;
undefined LAB_0059bee0;
undefined LAB_005cb404;
undefined FUN_00595bd0;
undefined FUN_00595c00;
undefined FUN_0059b970;
undefined LAB_005cb420;
undefined LAB_005cb453;
undefined *PTR_malloc_005cd1e4;
undefined LAB_005cb480;
undefined LAB_005cb4dd;
undefined LAB_005cb52d;
short DAT_006558e2;
int DAT_006558e4;
undefined1 DAT_0062eb60;
undefined DAT_00660870;
undefined DAT_006558e0;
undefined2 DAT_006558f2;
undefined2 DAT_006558f0;
undefined4 DAT_006558e4;
undefined4 UNK_006558e8;
undefined4 UNK_006558ec;
ushort DAT_006558f0;
uint DAT_00655908;
uint DAT_0065590c;
short DAT_006558f6;
uint DAT_006558f8;
undefined4 DAT_00655908;
undefined4 DAT_0065590c;
undefined2 DAT_00655910;
pointer[4] vftable;
pointer[87] vftable;
undefined FUN_005ac7c0;
int DAT_0065b414;
undefined8 *DAT_0065b410;
undefined FUN_005ac7b0;
undefined DAT_006558f4;
undefined2 DAT_00655906;
undefined2 DAT_00655904;
undefined4 DAT_006558f8;
undefined LAB_005cb6ba;
undefined4 UNK_006558fc;
undefined4 UNK_00655900;
undefined FUN_005ac220;
int DAT_0065b404;
undefined LAB_005cb6e0;
void *DAT_00655908;
undefined _StartAddress_005abca0;
undefined DAT_006562e0;
undefined DAT_00655918;
u_short DAT_006558f6;
int DAT_006558f8;
undefined LAB_005aae90;
undefined LAB_005cb72d;
undefined DAT_0062ef64;
undefined4 DAT_0065591c;
undefined _StartAddress_005a9c80;
undefined FUN_005aadf0;
undefined LAB_005cb768;
undefined LAB_005cb790;
undefined DAT_006550b0;
undefined LAB_005cb7c0;
undefined LAB_005cb7f8;
undefined LAB_005cb830;
int DAT_00655908;
int DAT_0065590c;
undefined DAT_00655904;
undefined DAT_00655910;
undefined4 UNK_00655914;
undefined *PTR_EnterCriticalSection_005cd0ac;
undefined *PTR_LeaveCriticalSection_005cd0b0;
undefined4 DAT_005e0e24;
ushort DAT_006558f2;
u_short DAT_006558f0;
undefined LAB_005cb86b;
int UNK_006558fc;
int UNK_00655900;
undefined DAT_006558f8;
undefined2 UNK_006558fc;
undefined2 UNK_006558fe;
undefined2 UNK_00655900;
undefined2 UNK_00655902;
undefined LAB_005cb8a8;
undefined2 DAT_006558f6;
undefined DAT_006607e8;
undefined cp_005e4640;
undefined LAB_005cb8db;
undefined LAB_005cb918;
undefined LAB_005cb94b;
undefined DAT_00660708;
undefined *PTR_free_005cd1e8;
undefined LAB_005cb996;
ushort DAT_00655910;
undefined LAB_005cb9cb;
undefined LAB_005cba0b;
ushort DAT_006558f6;
undefined LAB_005cba4b;
PRTL_CRITICAL_SECTION_DEBUG DAT_00655908;
PRTL_CRITICAL_SECTION_DEBUG DAT_006558d0;
HANDLE DAT_006558d4;
HANDLE DAT_0065590c;
undefined LAB_005cbb30;
undefined LAB_005cbbad;
undefined UNK_005e0e34;
undefined LAB_005cbbeb;
undefined DAT_006562e4;
undefined2 DAT_006562f6;
undefined2 DAT_006562f4;
undefined4 UNK_006562e8;
undefined4 UNK_006562ec;
undefined4 UNK_006562f0;
undefined LAB_005cbc20;
undefined LAB_005ac1f0;
undefined LAB_005cbc6d;
char DAT_0065b727;
undefined4 DAT_0066088c;
undefined LAB_005cc940;
LPCRITICAL_SECTION lpCriticalSection_00660874;
uint DAT_0065ba58;
void *DAT_0065ba54;
int DAT_0065ba5c;
int DAT_0065ba54;
uint DAT_0065ba5c;
int DAT_0065b408;
int *DAT_0065b40c;
undefined LAB_005cbca7;
int *DAT_0065b410;
undefined LAB_005cbcd8;
undefined LAB_005cbd08;
undefined4 DAT_00655138;
int DAT_0065500c;
ThrowInfo *pThrowInfo_0064d258;
undefined LAB_005cbd30;
undefined DAT_005adcba;
LPCRITICAL_SECTION lpCriticalSection_0065b004;
undefined DAT_0065b024;
HANDLE hHandle_0065b020;
undefined DAT_0065b028;
undefined DAT_0065b01c;
int DAT_00655000;
undefined4 _tls_index;
undefined4 DAT_00655000;
void *DAT_0065b030;
void *StackBase;
undefined1 DAT_0065b034;
char DAT_0065b035;
undefined4 DAT_0065b038;
uint DAT_0065b03c;
uint DAT_0065b040;
undefined4 DAT_0065b044;
uint DAT_0065b048;
uint DAT_0065b04c;
IMAGE_DOS_HEADER IMAGE_DOS_HEADER_00400000;
int DAT_0065b030;
char DAT_0065b034;
undefined DAT_0065b150;
undefined DAT_0065b14c;
undefined DAT_0065b148;
undefined DAT_0065b144;
undefined DAT_0065b140;
undefined DAT_0065b13c;
undefined DAT_0065b168;
undefined DAT_0065b15c;
undefined DAT_0065b138;
undefined DAT_0065b134;
undefined DAT_0065b130;
undefined DAT_0065b12c;
undefined DAT_0065b160;
undefined DAT_0065b154;
undefined4 DAT_0065b158;
undefined DAT_0065b164;
undefined DAT_0065b0a0;
undefined DAT_0065b05c;
undefined DAT_0065b050;
undefined DAT_0065b054;
undefined DAT_0065b060;
undefined4 DAT_00655008;
undefined4 DAT_0065b064;
undefined *PTR_DAT_005cdb00;
int DAT_0065b02c;
undefined DAT_005cd95c;
undefined DAT_005cda2c;
undefined DAT_005cda30;
undefined DAT_005cda40;
ThrowInfo *pThrowInfo_0064d204;
undefined __security_check_cookie;
undefined lpTopLevelExceptionFilter_005aea80;
undefined DAT_0065b36c;
undefined4 DAT_0065b374;
uint DAT_00655010;
uint DAT_0065b378;
int DAT_00655018;
uint DAT_00655008;
PSLIST_HEADER ListHead_0065b380;
undefined DAT_0065b388;
int DAT_00655014;
undefined DAT_00660894;
undefined DAT_00660890;
undefined8 DAT_0062f418;
int DAT_0065b374;
uint DAT_006556d4;
void *DAT_006556c0;
int DAT_0065b4d8;
undefined4 DAT_0065b4d4;
uint DAT_006556ec;
void *DAT_006556d8;
undefined DAT_006556e8;
void *DAT_006556f0;
undefined4 DAT_00655700;
uint DAT_0065571c;
void *DAT_00655708;
undefined DAT_00655718;
void *DAT_00655720;
undefined DAT_00655730;
undefined LAB_005b36e0;
void *DAT_006557b0;
undefined4 DAT_006557c0;
void *DAT_00655798;
undefined4 DAT_006557a8;
void *DAT_00655780;
undefined4 DAT_00655790;
void *DAT_0065b610;
undefined DAT_0065b620;
uint DAT_0065574c;
void *DAT_00655738;
undefined DAT_00655748;
void *DAT_00655768;
undefined4 DAT_00655778;
void *DAT_006557c8;
undefined4 DAT_006557d8;
void *DAT_0065b628;
int DAT_0065b630;
undefined4 DAT_0065b62c;
uint DAT_0065580c;
void *DAT_006557f8;
undefined DAT_00655808;
uint DAT_00655824;
void *DAT_00655810;
undefined DAT_00655820;
uint DAT_006557f4;
void *DAT_006557e0;
undefined DAT_006557f0;
void *DAT_0065b7bc;
int DAT_0065b7c4;
undefined DAT_0065b7c0;
uint DAT_00655854;
void *DAT_00655840;
undefined DAT_00655850;
uint DAT_0065583c;
void *DAT_00655828;
undefined DAT_00655838;
uint DAT_00655884;
void *DAT_00655870;
undefined DAT_00655880;
uint DAT_006558b4;
void *DAT_006558a0;
undefined DAT_006558b0;
uint DAT_0065589c;
void *DAT_00655888;
undefined DAT_00655898;
uint DAT_0065586c;
void *DAT_00655858;
undefined DAT_00655868;
int DAT_0065b984;
undefined4 DAT_0065b980;
undefined4 DAT_006558c8;
