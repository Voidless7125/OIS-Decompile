typedef struct StackWalker StackWalker, *PStackWalker;


struct StackWalker { // PlaceHolder Structure
};


void __thiscall StackWalker::~StackWalker(StackWalker *this);
int __thiscall StackWalker::LoadModules(StackWalker *this);
int __thiscall StackWalker::ShowCallstack(StackWalker *this,void *param_1,_CONTEXT *param_2,_func_int_void_ptr___uint64_void_ptr_ulong_ulong_ptr_void_ptr *param_3,void *param_4);
int StackWalker::myReadProcMem(void *param_1,__uint64 param_2,void *param_3,ulong param_4,ulong *param_5);
void __thiscall StackWalker::OnLoadModule(StackWalker *this,char *param_1,char *param_2,__uint64 param_3,ulong param_4,ulong param_5,char *param_6,char *param_7,__uint64 param_8);
void __thiscall StackWalker::OnCallstackEntry(StackWalker *this,CallstackEntryType param_1,CallstackEntry *param_2);
void __thiscall StackWalker::OnDbgHelpErr(StackWalker *this,char *param_1,ulong param_2,__uint64 param_3);
void __thiscall StackWalker::OnSymInit(StackWalker *this,char *param_1,ulong param_2,char *param_3);
void __thiscall StackWalker::OnOutput(StackWalker *this,char *param_1);
