typedef struct _s__RTTIBaseClassDescriptor RTTIBaseClassDescriptor;


typedef struct _s__RTTIClassHierarchyDescriptor RTTIClassHierarchyDescriptor;


typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;


typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;


typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;


struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
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


typedef struct Ray Ray, *PRay;


struct Ray { // PlaceHolder Structure
};


typedef struct Ref Ref, *PRef;


struct Ref { // PlaceHolder Structure
};


typedef struct Rect Rect, *PRect;


struct Rect { // PlaceHolder Structure
};


typedef struct RotateTo RotateTo, *PRotateTo;


struct RotateTo { // PlaceHolder Structure
};


typedef struct Renderer Renderer, *PRenderer;


struct Renderer { // PlaceHolder Structure
};


typedef struct RepeatForever RepeatForever, *PRepeatForever;


struct RepeatForever { // PlaceHolder Structure
};


typedef struct RenderTexture RenderTexture, *PRenderTexture;


struct RenderTexture { // PlaceHolder Structure
};


typedef size_t rsize_t;
