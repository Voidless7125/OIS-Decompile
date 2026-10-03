typedef wchar_t wchar;


typedef wchar_t WCHAR;


typedef ushort WORD;


typedef struct _WIN32_FIND_DATAW _WIN32_FIND_DATAW, *P_WIN32_FIND_DATAW;


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


// WARNING! conflicting data type names: /ois.pdb/_SECURITY_ATTRIBUTES - /winbase.h/_SECURITY_ATTRIBUTES
typedef struct WSAData WSAData, *PWSAData;


struct WSAData {
    ushort wVersion;
    ushort wHighVersion;
    char szDescription[257];
    char szSystemStatus[129];
    ushort iMaxSockets;
    ushort iMaxUdpDg;
    char *lpVendorInfo;
};


// WARNING! conflicting data type names: /ois.pdb/_EXCEPTION_RECORD - /excpt.h/_EXCEPTION_RECORD
typedef enum wrapEncodedKERNEL32Functions {
    eFlsAlloc=0,
    eFlsFree=1,
    eFlsGetValue=2,
    eFlsSetValue=3,
    eInitializeCriticalSectionEx=4,
    eInitOnceExecuteOnce=5,
    eCreateEventExW=6,
    eCreateSemaphoreW=7,
    eCreateSemaphoreExW=8,
    eCreateThreadpoolTimer=9,
    eSetThreadpoolTimer=10,
    eWaitForThreadpoolTimerCallbacks=11,
    eCloseThreadpoolTimer=12,
    eCreateThreadpoolWait=13,
    eSetThreadpoolWait=14,
    eCloseThreadpoolWait=15,
    eFlushProcessWriteBuffers=16,
    eFreeLibraryWhenCallbackReturns=17,
    eGetCurrentProcessorNumber=18,
    eCreateSymbolicLinkW=19,
    eGetCurrentPackageId=20,
    eGetTickCount64=21,
    eGetFileInformationByHandleEx=22,
    eSetFileInformationByHandle=23,
    eGetSystemTimePreciseAsFileTime=24,
    eInitializeConditionVariable=25,
    eWakeConditionVariable=26,
    eWakeAllConditionVariable=27,
    eSleepConditionVariableCS=28,
    eInitializeSRWLock=29,
    eAcquireSRWLockExclusive=30,
    eTryAcquireSRWLockExclusive=31,
    eReleaseSRWLockExclusive=32,
    eSleepConditionVariableSRW=33,
    eCreateThreadpoolWork=34,
    eSubmitThreadpoolWork=35,
    eCloseThreadpoolWork=36,
    eCompareStringEx=37,
    eGetLocaleInfoEx=38,
    eLCMapStringEx=39,
    eMaxKernel32Function=40
} wrapEncodedKERNEL32Functions;


// WARNING! conflicting data type names: /ois.pdb/LIST_ENTRY - /winnt.h/LIST_ENTRY
typedef struct WSAData WSADATA;


typedef struct WaveformPeak WaveformPeak, *PWaveformPeak;


struct WaveformPeak { // PlaceHolder Structure
};


typedef struct WeaponClass WeaponClass, *PWeaponClass;


struct WeaponClass { // PlaceHolder Structure
};


typedef struct Waypoint Waypoint, *PWaypoint;


struct Waypoint { // PlaceHolder Structure
};


typedef struct WeaponCommand WeaponCommand, *PWeaponCommand;


struct WeaponCommand { // PlaceHolder Structure
};
