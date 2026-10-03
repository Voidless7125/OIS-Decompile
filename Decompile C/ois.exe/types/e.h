typedef int __ehstate_t;


typedef struct _s_ESTypeList ESTypeList;


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


typedef struct _exception _exception, *P_exception;


struct _exception {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
};


typedef struct _EXCEPTION_REGISTRATION_RECORD _EXCEPTION_REGISTRATION_RECORD, *P_EXCEPTION_REGISTRATION_RECORD;


struct _EXCEPTION_REGISTRATION_RECORD {
    struct _EXCEPTION_REGISTRATION_RECORD *Next;
    void *Handler;
};


// WARNING! conflicting data type names: /ois.pdb/_EXCEPTION_POINTERS - /excpt.h/_EXCEPTION_POINTERS
typedef struct _EXCEPTION_POINTERS EXCEPTION_POINTERS;


typedef enum _EXCEPTION_DISPOSITION {
    ExceptionContinueExecution=0,
    ExceptionContinueSearch=1,
    ExceptionNestedException=2,
    ExceptionCollidedUnwind=3
} _EXCEPTION_DISPOSITION;


typedef enum _EXCEPTION_DISPOSITION EXCEPTION_DISPOSITION;


typedef struct _EVENT_DATA_DESCRIPTOR _EVENT_DATA_DESCRIPTOR, *P_EVENT_DATA_DESCRIPTOR;


typedef union _EVENT_DATA_DESCRIPTOR_u_12 _EVENT_DATA_DESCRIPTOR_u_12, *P_EVENT_DATA_DESCRIPTOR_u_12;


typedef struct _EVENT_DATA_DESCRIPTOR_u_12_s_1 _EVENT_DATA_DESCRIPTOR_u_12_s_1, *P_EVENT_DATA_DESCRIPTOR_u_12_s_1;


struct _EVENT_DATA_DESCRIPTOR_u_12_s_1 {
    uchar Type;
    uchar Reserved1;
    ushort Reserved2;
};


union _EVENT_DATA_DESCRIPTOR_u_12 {
    ulong Reserved;
    struct _EVENT_DATA_DESCRIPTOR_u_12_s_1 _s_1;
};


struct _EVENT_DATA_DESCRIPTOR {
    __uint64 Ptr;
    ulong Size;
    union _EVENT_DATA_DESCRIPTOR_u_12 field2_0xc;
};


typedef struct _EVENT_DESCRIPTOR _EVENT_DESCRIPTOR, *P_EVENT_DESCRIPTOR;


typedef struct _EVENT_DESCRIPTOR EVENT_DESCRIPTOR;


struct _EVENT_DESCRIPTOR {
    ushort Id;
    uchar Version;
    uchar Channel;
    uchar Level;
    uchar Opcode;
    ushort Task;
    __uint64 Keyword;
};


typedef struct $_s__CatchableTypeArray$_extraBytes_8 $_s__CatchableTypeArray$_extraBytes_8, *P$_s__CatchableTypeArray$_extraBytes_8;


typedef struct _EXCEPTION_REGISTRATION_RECORD EXCEPTION_REGISTRATION_RECORD;


typedef struct EHExceptionRecord EHExceptionRecord, *PEHExceptionRecord;


typedef struct EHParameters EHParameters, *PEHParameters;


struct EHParameters {
    ulong magicNumber;
    void *pExceptionObject;
    struct _s_ThrowInfo *pThrowInfo;
};


struct EHExceptionRecord {
    ulong ExceptionCode;
    ulong ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    void *ExceptionAddress;
    ulong NumberParameters;
    struct EHParameters params;
};


typedef struct $_TypeDescriptor$_extraBytes_19 $_TypeDescriptor$_extraBytes_19, *P$_TypeDescriptor$_extraBytes_19;


typedef int errno_t;


typedef void *EXCEPTION_ROUTINE;


typedef struct $_s__CatchableTypeArray$_extraBytes_12 $_s__CatchableTypeArray$_extraBytes_12, *P$_s__CatchableTypeArray$_extraBytes_12;


typedef struct $_TypeDescriptor$_extraBytes_20 $_TypeDescriptor$_extraBytes_20, *P$_TypeDescriptor$_extraBytes_20;


typedef struct $_TypeDescriptor$_extraBytes_24 $_TypeDescriptor$_extraBytes_24, *P$_TypeDescriptor$_extraBytes_24;


typedef struct $_TypeDescriptor$_extraBytes_21 $_TypeDescriptor$_extraBytes_21, *P$_TypeDescriptor$_extraBytes_21;


typedef struct $_TypeDescriptor$_extraBytes_27 $_TypeDescriptor$_extraBytes_27, *P$_TypeDescriptor$_extraBytes_27;


typedef struct $_TypeDescriptor$_extraBytes_28 $_TypeDescriptor$_extraBytes_28, *P$_TypeDescriptor$_extraBytes_28;


typedef struct exception exception, *Pexception;


struct exception {
    int _padding_;
    struct __std_exception_data _Data;
};


typedef struct exception_ptr exception_ptr, *Pexception_ptr;


struct exception_ptr {
    void *_Data1;
    void *_Data2;
};


typedef struct event_receiverAttribute event_receiverAttribute, *Pevent_receiverAttribute;


struct event_receiverAttribute {
    enum type_e type;
    bool layout_dependent;
};


typedef struct event_sourceAttribute event_sourceAttribute, *Pevent_sourceAttribute;


struct event_sourceAttribute {
    enum type_e type;
    enum optimize_e optimize;
    bool decorate;
};


typedef struct EmailDraftSet EmailDraftSet, *PEmailDraftSet;


struct EmailDraftSet { // PlaceHolder Structure
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


typedef struct EventMouse EventMouse, *PEventMouse;


struct EventMouse { // PlaceHolder Structure
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
