typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;


struct TypeDescriptor {
    void *pVFTable;
    void *spare;
    char name[0];
};


typedef struct _s_TryBlockMapEntry TryBlockMapEntry;


typedef struct tm tm, *Ptm;


struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
};


typedef struct tagRECT tagRECT, *PtagRECT;


struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};


typedef struct _s_ThrowInfo ThrowInfo;


struct _Tree_unchecked_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<unsigned_int>_>,struct_std::_Iterator_base0> { // PlaceHolder Structure
};


struct _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned_int>_>,std::_Iterator_base0> { // PlaceHolder Structure
};


typedef struct Texture2D Texture2D, *PTexture2D;


struct Texture2D { // PlaceHolder Structure
};


typedef enum TextHAlignment {
} TextHAlignment;


typedef struct Touch Touch, *PTouch;


struct Touch { // PlaceHolder Structure
};


typedef enum TextVAlignment {
} TextVAlignment;


typedef struct _TexParams _TexParams, *P_TexParams;


struct _TexParams { // PlaceHolder Structure
};


typedef longlong __time64_t;
