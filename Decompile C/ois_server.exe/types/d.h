typedef struct _devicemodeW _devicemodeW, *P_devicemodeW;


typedef ulong DWORD;


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


typedef struct _DCB _DCB, *P_DCB;


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


typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;


struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[51];
};


typedef struct __Double __Double, *P__Double;


struct __Double { // PlaceHolder Structure
};


typedef struct Director Director, *PDirector;


struct Director { // PlaceHolder Structure
};


typedef struct DirectionLight DirectionLight, *PDirectionLight;


struct DirectionLight { // PlaceHolder Structure
};


typedef struct DelayTime DelayTime, *PDelayTime;


struct DelayTime { // PlaceHolder Structure
};


typedef enum DispatchMode {
} DispatchMode;
