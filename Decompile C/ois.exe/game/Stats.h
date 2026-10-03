typedef struct Stats Stats, *PStats;


struct Stats { // PlaceHolder Structure
};


void __thiscall Stats::Stats(Stats *this);
void __thiscall Stats::setBinaryStat(Stats *this,void *param_2);
void __thiscall Stats::setStat(Stats *this,void *param_2);
void __thiscall Stats::addStat(Stats *this,int param_2,void *param_3);
bool __thiscall Stats::storeStats(Stats *this);
void __thiscall Stats::onUserStatsReceived(Stats *this,UserStatsReceived_t *param_1);
void __thiscall Stats::onUserStatsStored(Stats *this,UserStatsStored_t *param_1);
bool __thiscall Stats::hasCustomStat(Stats *this,void *param_2);
float __thiscall Stats::getCustomStat(Stats *this,void *param_2);
void __thiscall Stats::setCustomStat(Stats *this,void *param_2);
