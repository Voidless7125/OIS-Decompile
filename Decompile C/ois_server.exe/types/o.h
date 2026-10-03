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
