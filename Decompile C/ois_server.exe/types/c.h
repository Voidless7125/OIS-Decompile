typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;


struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};


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


typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;


typedef struct _CONTEXT CONTEXT;


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


typedef char CHAR;


typedef struct _s_CatchableType CatchableType;


typedef struct _s_CatchableTypeArray CatchableTypeArray;


typedef struct Channel Channel, *PChannel;


struct Channel { // PlaceHolder Structure
};


typedef struct ChannelGroup ChannelGroup, *PChannelGroup;


struct ChannelGroup { // PlaceHolder Structure
};


typedef struct Component Component, *PComponent;


struct Component { // PlaceHolder Structure
};


typedef struct Color3B Color3B, *PColor3B;


struct Color3B { // PlaceHolder Structure
};


typedef struct Clonable Clonable, *PClonable;


struct Clonable { // PlaceHolder Structure
};


typedef struct Camera Camera, *PCamera;


struct Camera { // PlaceHolder Structure
};


typedef struct CallFunc CallFunc, *PCallFunc;


struct CallFunc { // PlaceHolder Structure
};
