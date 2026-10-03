typedef struct PMD PMD, *PPMD;


typedef int ptrdiff_t;


struct PMD {
    ptrdiff_t mdisp;
    ptrdiff_t pdisp;
    ptrdiff_t vdisp;
};


typedef struct _POINTL _POINTL, *P_POINTL;


typedef struct _POINTL POINTL;


struct _POINTL {
    LONG x;
    LONG y;
};


typedef void *PVOID;


typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;


typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;


typedef CONTEXT *PCONTEXT;


typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;


typedef union _SLIST_HEADER *PSLIST_HEADER;


typedef uint *PUINT;


typedef struct PolygonInfo PolygonInfo, *PPolygonInfo;


struct PolygonInfo { // PlaceHolder Structure
};


typedef struct PointLight PointLight, *PPointLight;


struct PointLight { // PlaceHolder Structure
};


typedef enum Platform {
} Platform;
