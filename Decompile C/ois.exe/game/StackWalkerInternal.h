typedef struct StackWalkerInternal StackWalkerInternal, *PStackWalkerInternal;


struct StackWalkerInternal { // PlaceHolder Structure
};


StackWalkerInternal * __thiscall StackWalkerInternal::StackWalkerInternal(StackWalkerInternal *this,StackWalker *param_1,void *param_2);
int __thiscall StackWalkerInternal::Init(StackWalkerInternal *this,char *param_1);
int __thiscall StackWalkerInternal::GetModuleListPSAPI(StackWalkerInternal *this,void *param_1);
ulong __thiscall StackWalkerInternal::LoadModule(StackWalkerInternal *this,void *param_1,char *param_2,char *param_3,__uint64 param_4,ulong param_5);
int __thiscall StackWalkerInternal::GetModuleInfo(StackWalkerInternal *this,void *param_1,__uint64 param_2,IMAGEHLP_MODULE64_V3 *param_3);
