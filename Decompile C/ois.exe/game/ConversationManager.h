typedef struct ConversationManager ConversationManager, *PConversationManager;


struct ConversationManager { // PlaceHolder Structure
};


ConversationElement * __thiscall ConversationManager::addConversationElement(ConversationManager *this,void *param_2);
void __thiscall ConversationManager::addConversationReq(ConversationManager *this,void *param_2);
ConversationOption * __thiscall ConversationManager::addConversationOption(ConversationManager *this,void *param_2);
void __thiscall ConversationManager::addConversationOptionReq(ConversationManager *this,void *param_2);
void __thiscall ConversationManager::addConversationOptionAction(ConversationManager *this,void *param_2);
void __thiscall ConversationManager::addConversationElementAction(ConversationManager *this,void *param_2);
Conversation * __thiscall ConversationManager::getConversation(ConversationManager *this,int param_2,char param_3,char *param_4);
int __thiscall ConversationManager::hasConversationToForce(ConversationManager *this,char *param_2);
void __thiscall ConversationManager::keyHit(ConversationManager *this,KeyCode param_1);
void __thiscall ConversationManager::performElementActions(ConversationManager *this,ConversationElement *param_1);
