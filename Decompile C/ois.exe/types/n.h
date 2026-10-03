// WARNING! conflicting data type names: /ois.pdb/_FLOATING_SAVE_AREA - /winnt.h/_FLOATING_SAVE_AREA
typedef struct _NT_TIB _NT_TIB, *P_NT_TIB;


typedef union _NT_TIB_u_16 _NT_TIB_u_16, *P_NT_TIB_u_16;


union _NT_TIB_u_16 {
    void *FiberData;
    ulong Version;
};


struct _NT_TIB {
    struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList;
    void *StackBase;
    void *StackLimit;
    void *SubSystemTib;
    union _NT_TIB_u_16 field4_0x10;
    void *ArbitraryUserPointer;
    struct _NT_TIB *Self;
};


typedef struct _NT_TIB NT_TIB;


typedef void *nullptr_t;


typedef struct nothrow_t nothrow_t, *Pnothrow_t;


struct nothrow_t {
    undefined field0_0x0;
};


typedef struct __non_rtti_object __non_rtti_object, *P__non_rtti_object;


struct __non_rtti_object {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
};


typedef struct nested_exception nested_exception, *Pnested_exception;


struct nested_exception {
    int _padding_;
    struct exception_ptr _Exc;
};


typedef struct node node, *Pnode;


struct node {
    struct HuffmanEncodingTreeNode *item;
    struct node *previous;
    struct node *next;
};


typedef struct NSMSectorInfo NSMSectorInfo, *PNSMSectorInfo;


struct NSMSectorInfo { // PlaceHolder Structure
};


typedef struct NavMarker NavMarker, *PNavMarker;


struct NavMarker { // PlaceHolder Structure
};


typedef undefined std::nullptr_t;


typedef struct _Not_a_node_tag _Not_a_node_tag, *P_Not_a_node_tag;


struct _Not_a_node_tag { // PlaceHolder Structure
};


typedef enum NavPointType {
} NavPointType;


typedef struct Node Node, *PNode;


struct Node { // PlaceHolder Structure
};
