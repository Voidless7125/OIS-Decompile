typedef struct NetworkClient NetworkClient, *PNetworkClient;


struct NetworkClient { // PlaceHolder Structure
};


void __thiscall NetworkClient::initialise(NetworkClient *this);
bool __thiscall NetworkClient::validServer(undefined4 param_1,void *param_2);
void __thiscall NetworkClient::connectToServer(NetworkClient *this,char *param_1,int param_2);
void __thiscall NetworkClient::disconnectFromServer(NetworkClient *this);
void __thiscall NetworkClient::runLogic(NetworkClient *this,float param_1);
void __thiscall NetworkClient::addChatLogItem(NetworkClient *this,void *param_2);
