typedef struct ComputerSystem ComputerSystem, *PComputerSystem;


struct ComputerSystem { // PlaceHolder Structure
};


void __thiscall ComputerSystem::renderArticle(ComputerSystem *this,CommsData *param_1,int param_2);
void __thiscall ComputerSystem::sendCurrentDraft(ComputerSystem *this);
void __thiscall ComputerSystem::doneWithDraft(ComputerSystem *this);
void __thiscall ComputerSystem::showDrafts(ComputerSystem *this);
void __thiscall ComputerSystem::doneWithEmail(ComputerSystem *this);
void __thiscall ComputerSystem::showEmails(ComputerSystem *this);
void __thiscall ComputerSystem::doneWithArticle(ComputerSystem *this);
void __thiscall ComputerSystem::showArticles(ComputerSystem *this);
void __thiscall ComputerSystem::doneWithFile(ComputerSystem *this);
Article * __thiscall ComputerSystem::getArticle(ComputerSystem *this,char *param_2);
void __thiscall ComputerSystem::renderEmail(ComputerSystem *this,CommsData *param_1,int param_2);
int __thiscall ComputerSystem::getMostRecentArticles(ComputerSystem *this,int param_1,bool param_2);
void __thiscall ComputerSystem::renderArticles(ComputerSystem *this,CommsData *param_1);
void __thiscall ComputerSystem::selectedArticle(ComputerSystem *this,int param_1);
void __thiscall ComputerSystem::renderEmails(ComputerSystem *this,CommsData *param_1);
void __thiscall ComputerSystem::renderDraft(ComputerSystem *this,CommsData *param_1,int param_2);
void __thiscall ComputerSystem::renderDrafts(ComputerSystem *this,int param_1,basic_string<> *param_3);
void __thiscall ComputerSystem::selectedEmail(ComputerSystem *this,int param_1);
void __thiscall ComputerSystem::selectedDraft(ComputerSystem *this,int param_1);
void __thiscall ComputerSystem::runArticleLogic(ComputerSystem *this,float param_1);
void __thiscall ComputerSystem::syncArticles(ComputerSystem *this,CommsData *param_1,uint param_2);
void __thiscall ComputerSystem::renderFiles(ComputerSystem *this,int param_1);
