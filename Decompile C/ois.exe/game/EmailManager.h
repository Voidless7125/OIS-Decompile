typedef struct EmailManager EmailManager, *PEmailManager;


struct EmailManager { // PlaceHolder Structure
};


void __thiscall EmailManager::resetState(EmailManager *this);
Email * __thiscall EmailManager::getEmail(EmailManager *this,char *param_2);
EmailDraftSet * __thiscall EmailManager::getDraftSet(EmailManager *this,char *param_2);
void __thiscall EmailManager::markEmailSent(EmailManager *this,char *param_2);
void __thiscall EmailManager::sendEmail(EmailManager *this,CommsData *param_1,Email *param_2);
void __thiscall EmailManager::getEmailStateText(EmailManager *this);
void __thiscall EmailManager::runLogic(EmailManager *this,CommsData *param_1,float param_2,bool param_3);
int __thiscall EmailManager::getUnsentEmailCount(EmailManager *this);
int __thiscall EmailManager::getUnreadEmailCount(EmailManager *this);
int __thiscall EmailManager::getUnreadNewsArticleCount(EmailManager *this);
int __thiscall EmailManager::getDraftCount(EmailManager *this);
void __thiscall EmailManager::syncEmails(EmailManager *this,CommsData *param_1);
void __thiscall EmailManager::addCustomEmail(EmailManager *this,basic_string<> *param_2);
