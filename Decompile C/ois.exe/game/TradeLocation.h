typedef struct TradeLocation TradeLocation, *PTradeLocation;


struct TradeLocation { // PlaceHolder Structure
};


void __thiscall TradeLocation::~TradeLocation(TradeLocation *this);
void __thiscall TradeLocation::addTradeItemInstance(TradeLocation *this,TradeItemInstance *param_1,bool param_2);
void __thiscall TradeLocation::addContractGoods(TradeLocation *this,char *param_2);
void __thiscall TradeLocation::removeGoods(TradeLocation *this,int param_1,int param_2);
void __thiscall TradeLocation::soldGood(TradeLocation *this,int param_1,int param_2);
int __thiscall TradeLocation::goodAmountWire(TradeLocation *this,int param_1);
bool __thiscall TradeLocation::doesBuyWire(TradeLocation *this,int param_1);
void __thiscall TradeLocation::itemiseSaleDetailsWire(TradeLocation *this,int param_1,int param_2);
int __thiscall TradeLocation::goodAmount(TradeLocation *this,char *param_2);
int __thiscall TradeLocation::goodAmount(TradeLocation *this,int param_1);
void __thiscall TradeLocation::clearGoods(TradeLocation *this,bool param_1);
int __thiscall TradeLocation::singleBaseGoodCost(TradeLocation *this,int param_1,bool param_2);
int __thiscall TradeLocation::singleGoodCost(TradeLocation *this,int param_1,bool param_2);
int __thiscall TradeLocation::goodCost(TradeLocation *this,int param_1,int param_2,bool param_3);
int __thiscall TradeLocation::singleGoodCostWire(TradeLocation *this,int param_1,bool param_2);
int __thiscall TradeLocation::goodCostWire(TradeLocation *this,int param_1,int param_2,bool param_3);
void __thiscall TradeLocation::itemiseSaleDetails(TradeLocation *this,int param_1,int param_2);
void __thiscall TradeLocation::getCurrentTradeSummary(TradeLocation *this);
void __thiscall TradeLocation::getCurrentBuyPrices(TradeLocation *this);
void __thiscall TradeLocation::getCurrentContractSummary(TradeLocation *this);
void __thiscall TradeLocation::getCurrentPassengerSummary(TradeLocation *this);
bool __thiscall TradeLocation::doesBuy(TradeLocation *this,int param_1);
void __thiscall TradeLocation::resetAndRepopulate(TradeLocation *this);
void __thiscall TradeLocation::resetContracts(TradeLocation *this);
void __thiscall TradeLocation::clearContracts(TradeLocation *this);
void __thiscall TradeLocation::populateContracts(TradeLocation *this);
void __thiscall TradeLocation::restockWithContracts(TradeLocation *this);
void __thiscall TradeLocation::addRandomComponents(TradeLocation *this);
void __thiscall TradeLocation::addRandomModules(TradeLocation *this);
void __thiscall TradeLocation::clearShipsForSale(TradeLocation *this);
void __thiscall TradeLocation::regenerateShipsForSale(TradeLocation *this);
void __thiscall TradeLocation::generateShip(TradeLocation *this,ShipSale *param_1);
