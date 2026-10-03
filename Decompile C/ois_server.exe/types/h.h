typedef struct _s_HandlerType HandlerType;


typedef void *HANDLE;


typedef struct HICON__ HICON__, *PHICON__;


struct HICON__ {
    int unused;
};


typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;


struct HINSTANCE__ {
    int unused;
};


typedef struct HICON__ *HICON;


typedef struct HINSTANCE__ *HINSTANCE;


typedef struct HWND__ HWND__, *PHWND__;


typedef struct HWND__ *HWND;


struct HWND__ {
    int unused;
};


typedef HINSTANCE HMODULE;


typedef HICON HCURSOR;


typedef struct hostent hostent, *Phostent;


struct hostent {
    char *h_name;
    char **h_aliases;
    short h_addrtype;
    short h_length;
    char **h_addr_list;
};
