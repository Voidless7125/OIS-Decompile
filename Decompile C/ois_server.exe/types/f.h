typedef struct _s_FuncInfo FuncInfo;


typedef struct _FILETIME _FILETIME, *P_FILETIME;


typedef struct _FILETIME FILETIME;


struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};


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


typedef struct _iobuf FILE;


typedef enum FMOD_RESULT {
} FMOD_RESULT;


typedef struct FMOD_CREATESOUNDEXINFO FMOD_CREATESOUNDEXINFO, *PFMOD_CREATESOUNDEXINFO;


struct FMOD_CREATESOUNDEXINFO { // PlaceHolder Structure
};


struct function<bool___cdecl(cocos2d::Node*)> { // PlaceHolder Structure
};


struct function<void___cdecl(void)> { // PlaceHolder Structure
};


typedef struct _Facet_base _Facet_base, *P_Facet_base;


struct _Facet_base { // PlaceHolder Structure
};


typedef struct FileUtils FileUtils, *PFileUtils;


struct FileUtils { // PlaceHolder Structure
};


typedef struct FadeIn FadeIn, *PFadeIn;


struct FadeIn { // PlaceHolder Structure
};


typedef struct __Float __Float, *P__Float;


struct __Float { // PlaceHolder Structure
};


typedef struct FadeOut FadeOut, *PFadeOut;


struct FadeOut { // PlaceHolder Structure
};


typedef struct FiniteTimeAction FiniteTimeAction, *PFiniteTimeAction;


struct FiniteTimeAction { // PlaceHolder Structure
};
