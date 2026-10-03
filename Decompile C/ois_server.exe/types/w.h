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
