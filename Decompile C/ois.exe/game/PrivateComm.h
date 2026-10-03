typedef struct PrivateComm PrivateComm, *PPrivateComm;


struct PrivateComm { // PlaceHolder Structure
};


void __thiscall PrivateComm::reset(PrivateComm *this);
basic_string<> * __thiscall PrivateComm::describeSource(PrivateComm *this);
void __thiscall PrivateComm::render(PrivateComm *this,basic_string<> *param_1,basic_string<> *param_2);
void __thiscall PrivateComm::changeElement(PrivateComm *this,int param_1);
int __thiscall PrivateComm::getNextValidElement(PrivateComm *this);
int __thiscall PrivateComm::getValidatedElement(PrivateComm *this);
int __thiscall PrivateComm::selectElement(PrivateComm *this);
void __thiscall PrivateComm::~PrivateComm(PrivateComm *this);
