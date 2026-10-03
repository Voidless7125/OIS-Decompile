typedef int __ehstate_t;


typedef struct _s_ESTypeList ESTypeList;


typedef struct exception exception, *Pexception;


struct exception { // PlaceHolder Class Structure
};


typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;


typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;


typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;


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


typedef struct EventDispatcher EventDispatcher, *PEventDispatcher;


struct EventDispatcher { // PlaceHolder Structure
};


typedef struct Event Event, *PEvent;


struct Event { // PlaceHolder Structure
};


typedef struct EventListener EventListener, *PEventListener;


struct EventListener { // PlaceHolder Structure
};


typedef struct EaseInOut EaseInOut, *PEaseInOut;


struct EaseInOut { // PlaceHolder Structure
};


typedef struct EventListenerMouse EventListenerMouse, *PEventListenerMouse;


struct EventListenerMouse { // PlaceHolder Structure
};


typedef struct EventListenerKeyboard EventListenerKeyboard, *PEventListenerKeyboard;


struct EventListenerKeyboard { // PlaceHolder Structure
};


typedef int errno_t;
