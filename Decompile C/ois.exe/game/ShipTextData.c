#include "../ois.exe.h"


// class std::function<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > __cdecl(class Ship *,int)> __cdecl ShipTextData::getTextDataFunction(enum
// EShipTextDataType::ShipTextDataType)

_Func_class<> * __cdecl ShipTextData::getTextDataFunction(ShipTextDataType param_1)

{
  _Func_class<> *in_ECX;
  _Func_class<> *extraout_ECX;
  _Func_class<> *extraout_ECX_00;
  undefined4 in_EDX;
  code *local_8;
  
  switch(in_EDX) {
  case 0:
    std::function<>::function<><>((function<> *)in_ECX,returnNoString);
    return extraout_ECX_00;
  case 1:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = returnNoString;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 2:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getShipName;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 3:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getOwnshipCorpLogo;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 4:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getEngineeringSummary;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 5:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getSensorSummary;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 6:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getSensorAdditional;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 7:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getTubeSummary;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 8:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getTubeAdvancedSummary;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 9:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getStealthRating;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 10:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getOrbit;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0xb:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getDesiredOrbit;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0xc:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getDockingProcessString;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0xd:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getUndockingProcessString;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0xe:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getSSDockingBayString;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0xf:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getSSDockingPermit;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x10:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getSSName;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x11:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getSSChangeDetails;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x12:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getSSRegistration;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x13:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getRTCommsScreen;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x14:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getPrivateCommsScreen;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x15:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getOmegaTabletHeader;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x16:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getOmegaTabletScreen;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x17:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getOmegaTabletFooter;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x18:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getJumpgateState;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x19:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getDepotState;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x1a:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getSpaceReadings;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x1b:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getEngModuleData;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x1c:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getEngModuleStats;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x1d:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getEngModuleName;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x1e:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getEngComponentFilename;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x1f:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getEngComponentData;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x20:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getEngAddonFilename;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x21:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getEngAddonData;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x22:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getEngComponentRepair;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x23:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getEngModuleRepair;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x24:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getComponentInfo;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x25:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getJmpDestination;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x26:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getJmpSpinState;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x27:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getJmpSolState;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x28:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getHullCondition;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x29:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getSensorWaveformSummary;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x2a:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getSensorFilterState;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x2b:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getPDSState;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x2c:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getCMState;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x2d:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getCommsSyncData;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x2e:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getCommsSyncState;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x2f:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getCommsDamageState;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x30:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getCommsModel;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x31:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getCommsEmailState;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x32:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getMooringState;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x33:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getMooredCargoState;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x34:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getMooredObjectState;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x35:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getShipCargoState;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x36:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getShipCargoDetails;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x37:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getMooredCargoDetails;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x38:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getCassandraDetails;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x39:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getCassandraDockingBay;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x3a:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getRemoraDockDetails;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x3b:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getInfopediaArticleDetails;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x3c:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getShopStr;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x3d:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getTradeStrTop;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x3e:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getTradeStrBottom;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x3f:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getTradeStrFull;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x40:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getTradeCommodityIcon;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x41:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getCompanyStr;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x42:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getLoanStr;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x43:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getContractStr;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x44:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getBountyStr;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x45:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getMechanicStatusStr;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x46:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getMechanicPodStatusStr;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x47:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getMechanicModuleStatusStr;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x48:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getMechanicHullSectionStatusStr;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x49:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getMechanicArmamentStatusStr;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x4a:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getSelectedPodIcon;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x4b:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getShipSelectedText;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x4c:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getWreckStatusText;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x4d:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getPassengerInfo;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x4e:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getTabletSummary;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x4f:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getTabletTranslate;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x50:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getTabletNotes;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x51:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getCargoViewText;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x52:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getEmailStateText;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x53:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getPlayerNote;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x54:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getMusicPlayer;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x55:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getVersionNotes;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x56:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getCredits;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x57:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getGameOverText;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x58:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getLogStr;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x59:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getCopyrightText;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x5a:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getSelectedScenarioStr;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x5b:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getPowerRoomDetail;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x5c:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getMultiplayerChat;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x5d:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = returnNoString;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x5e:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = returnNoString;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x5f:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getNavCurrentState;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x60:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getWaypointETA;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x61:
    *(undefined ***)in_ECX = std::_Func_impl_no_alloc<>::vftable;
    *(code **)(in_ECX + 4) = getLocalServerStr;
    *(_Func_class<> **)(in_ECX + 0x24) = in_ECX;
    return in_ECX;
  case 0x62:
    local_8 = getCurrentServerDetails;
    *(undefined4 *)(in_ECX + 0x24) = 0;
    std::_Func_class<>::_Reset<>
              (in_ECX,(class_std__basic_string<>____cdecl_____Ship__int_ *)&local_8);
    return extraout_ECX;
  default:
    *(undefined4 *)(in_ECX + 0x24) = 0;
    return in_ECX;
  }
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getCopyrightText(class Ship *,int)

Ship * __cdecl ShipTextData::getCopyrightText(Ship *param_1,int param_2)

{
  strUsingArgs((char *)param_1,"`%%(c) 2019 by Flat Earth Games\n`7Objects in Space `%%%s","1.0.8");
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getVersionNotes(class Ship *,int)

Ship * __cdecl ShipTextData::getVersionNotes(Ship *param_1,int param_2)

{
  strUsingArgs((char *)param_1,
               "`7Hi and welcome to Objects in Space!\n\n`7For direct support, including sending along bug or crash reports - or just feedback - please email us at `%%objects@flatearthgames.com.au`7.\n\n%s\n\nLog files, mod folders and configuration can be found in your game data folder (PC) or Documents folder (Mac / Linux).\n\nYou can also suggest improvements on the forums at `%%objectsgame.com`7.\n\nThanks for playing - and happy flying!"
               ,
               "`%Version 1.0.8\n\n`%Linux\n`7 - Added an alternate font rendering technique for those experiencing font rendering issues. Turn on \'alternatetextrendering\' in the config file to use this.\n\n`%Re-Balancing\n`7 - Improved Proxima autopilot issues at close range\n`7 - Increased the rotation speed of the two lowest-end RCS modules\n\n`%General\n`7 - Fixed a bug in which Tuisin Brown would sometimes appear on every space station after completing his mission.\n`7 - Fixed a bug which caused Asha to never speak to you via the intercom after you pick her up\n`7 - Fixed a bug where Betty would appear on every space station after your mission for her was completed\n`7 - Fixed a sporadic crash bug when a ship with an empty module got destroyed.\n`7 - Fixed crash bug when viewing \'Space Village continues to grow\' news article.\n`7 - Fixed crash when viewing the \'Teacher\' article in The Globe.\n`7 - Fixed a crash when reading the \'ghost hunter\' article.\n`7 - Fixed an issue with one of the conversations with Amos Klein.\n`7 - Fixed an issue with the DEL command in the comms room PC.\n`7 - Fixed numerous small typos and spelling errors in news articles.\n"
              );
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::returnNoString(class Ship *,int)

Ship * __cdecl ShipTextData::returnNoString(Ship *param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (Ship)0x0;
  std::basic_string<>::assign((basic_string<> *)param_1,"",0);
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getShipName(class Ship *,int)

Ship * __cdecl ShipTextData::getShipName(Ship *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    return param_1;
  }
  puVar1 = (undefined4 *)(param_2 + 8);
  if (0xf < *(uint *)(param_2 + 0x1c)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  strUsingArgs((char *)param_1,"`%%%s",puVar1);
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getOwnshipCorpLogo(class Ship *,int)

Ship * __cdecl ShipTextData::getOwnshipCorpLogo(Ship *param_1,int param_2)

{
  bool bVar1;
  char *unaff_EBX;
  uint unaff_EDI;
  char *pcVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    return param_1;
  }
  bVar1 = std::_Traits_equal<>("Ventarii",8,unaff_EBX,unaff_EDI);
  if (bVar1) {
    uVar3 = 0x15;
    pcVar2 = "CorpLogo_Ventarii.png";
  }
  else {
    bVar1 = std::_Traits_equal<>("Harris-Wilson",0xd,unaff_EBX,unaff_EDI);
    if (bVar1) {
      uVar3 = 0xf;
      pcVar2 = "CorpLogo_HW.png";
    }
    else {
      bVar1 = std::_Traits_equal<>("Utopia Engineering",0x12,unaff_EBX,unaff_EDI);
      if (bVar1) {
        uVar3 = 0x1b;
        pcVar2 = "CorpLogo_CassandraSmall.png";
      }
      else {
        uVar3 = 0;
        pcVar2 = "";
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (Ship)0x0;
  std::basic_string<>::assign((basic_string<> *)param_1,pcVar2,uVar3);
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getDesiredOrbit(class Ship *,int)

Ship * __cdecl ShipTextData::getDesiredOrbit(Ship *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  pcVar3 = (&PTR_s_Standard_005e0d74)[iVar2];
  *param_1 = (Ship)0x0;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  std::basic_string<>::assign((basic_string<> *)param_1,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getOrbit(class Ship *,int)

Ship * __cdecl ShipTextData::getOrbit(Ship *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  pcVar3 = (&PTR_s_Standard_005e0d74)[iVar2];
  *param_1 = (Ship)0x0;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  std::basic_string<>::assign((basic_string<> *)param_1,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getEngComponentFilename(class Ship *,int)

void __cdecl ShipTextData::getEngComponentFilename(Ship *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ShipModule *pSVar4;
  uint uVar5;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b12f8;
  local_10 = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
  }
  else {
    local_2c = local_2c & 0xffffff00;
    local_8 = 0;
    if ((*(int *)(param_2 + 0x1e4) == -1) || (iVar1 = *(int *)(param_2 + 0x1dc), iVar1 == -1)) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(uint *)param_1 = local_2c;
      *(undefined4 *)(param_1 + 4) = uStack_28;
      *(undefined4 *)(param_1 + 8) = uStack_24;
      *(undefined4 *)(param_1 + 0xc) = uStack_20;
      *(undefined8 *)(param_1 + 0x10) = 0xf00000000;
    }
    else {
      uVar5 = uVar3;
      pSVar4 = SystemManager::getModule
                         (*(SystemManager **)(param_2 + 0x40),*(int *)(param_2 + 0x1e4));
      iVar2 = (*(int **)(pSVar4 + 0xc))[iVar1 + 1];
      if (iVar2 == 0) {
        strUsingArgs((char *)param_1,"%s_Empty",
                     (&PTR_s_Slot_HapNode_005e01bc)
                     [**(int **)(iVar1 * 4 + *(int *)(**(int **)(pSVar4 + 0xc) + 0x50))],uVar5);
      }
      else {
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)param_1,(basic_string<> *)(*(int *)(iVar2 + 4) + 0x68));
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getEngAddonFilename(class Ship *,int)

void __cdecl ShipTextData::getEngAddonFilename(Ship *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ShipModule *pSVar3;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b12f8;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
  }
  else {
    local_2c = local_2c & 0xffffff00;
    local_8 = 0;
    if ((*(int *)(param_2 + 0x1e4) == -1) || (iVar1 = *(int *)(param_2 + 0x1dc), iVar1 == -1)) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(uint *)param_1 = local_2c;
      *(undefined4 *)(param_1 + 4) = uStack_28;
      *(undefined4 *)(param_1 + 8) = uStack_24;
      *(undefined4 *)(param_1 + 0xc) = uStack_20;
      *(undefined8 *)(param_1 + 0x10) = 0xf00000000;
    }
    else {
      pSVar3 = SystemManager::getModule
                         (*(SystemManager **)(param_2 + 0x40),*(int *)(param_2 + 0x1e4));
      iVar1 = *(int *)(*(int *)(pSVar3 + 0xc) + 0x54 + iVar1 * 4);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0xf;
        *param_1 = (Ship)0x0;
        std::basic_string<>::assign((basic_string<> *)param_1,"Slot_Addon_Empty",0x10);
      }
      else {
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)param_1,(basic_string<> *)(*(int *)(iVar1 + 4) + 0x68));
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getEngComponentData(class Ship *,int)

void __cdecl ShipTextData::getEngComponentData(Ship *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  ShipModule *pSVar5;
  basic_string<> *pbVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  void *pvVar11;
  nothrow_t *pnVar12;
  uint uVar13;
  float *pfVar14;
  uint local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c0be0;
  local_10 = ExceptionList;
  uVar4 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar4;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    goto LAB_004ee529;
  }
  local_4c = 0;
  uStack_48 = 0xf;
  local_5c = local_5c & 0xffffff00;
  local_8 = 0;
  uVar13 = *(uint *)(param_2 + 0x1dc);
  if (uVar13 == 0xffffffff) {
    std::basic_string<>::assign((basic_string<> *)&local_5c,"",0);
LAB_004edffb:
    if ((*(int *)(g_gameData + 0xcc) == 0) || (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) != 1)) {
      pcVar10 = "`&Comp.: `7empty\n";
      uVar4 = 0x11;
    }
    else {
      uVar4 = 0x4b;
      pcVar10 = "`*No component selected`& - unscrew then open module to access components.\n";
    }
    std::basic_string<>::append((basic_string<> *)&local_5c,pcVar10,uVar4);
  }
  else {
    if ((int)uVar13 < 100) {
      pSVar5 = SystemManager::getModule
                         (*(SystemManager **)(param_2 + 0x40),*(int *)(param_2 + 0x1e4));
      if ((((pSVar5 == (ShipModule *)0x0) || ((int)uVar13 < 0)) ||
          ((uint)(*(int *)(*(int *)(*(int *)(pSVar5 + 8) + 0xd8) + 0x54) -
                  *(int *)(*(int *)(*(int *)(pSVar5 + 8) + 0xd8) + 0x50) >> 2) <= uVar13)) ||
         (piVar3 = *(int **)(*(int *)(**(int **)(pSVar5 + 0xc) + 0x50) + uVar13 * 4),
         piVar3 == (int *)0x0)) goto LAB_004edffb;
      pbVar6 = (basic_string<> *)
               strUsingArgs((char *)local_2c,"`&Slot : `*%s\n",(&PTR_s_Hap_Node_005e07f4)[*piVar3],
                            uVar4);
      std::basic_string<>::operator=((basic_string<> *)&local_5c,pbVar6);
      if (0xf < local_18) {
        pnVar12 = (nothrow_t *)(local_18 + 1);
        pvVar11 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_2c[0] + -4);
          pnVar12 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar11,pnVar12);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      pfVar14 = *(float **)(*(int *)(pSVar5 + 0xc) + 4 + *(int *)(param_2 + 0x1dc) * 4);
    }
    else {
      uVar13 = uVar13 - 100;
      if (((int)uVar13 < 0) ||
         (iVar2 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0x44),
         (uint)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0x48) - iVar2 >> 2) <=
         uVar13)) {
        pfVar14 = (float *)0x0;
        std::basic_string<>::assign((basic_string<> *)&local_5c,"`&Slot : `7n/a\n",0xf);
      }
      else {
        pfVar14 = *(float **)(iVar2 + uVar13 * 4);
        std::basic_string<>::assign((basic_string<> *)&local_5c,"`&Slot : `7n/a\n",0xf);
      }
    }
    if (pfVar14 == (float *)0x0) goto LAB_004edffb;
    puVar9 = (undefined4 *)((int)pfVar14[1] + 0x50);
    if (0xf < *(uint *)((int)pfVar14[1] + 100)) {
      puVar9 = (undefined4 *)*puVar9;
    }
    pcVar7 = (char *)strUsingArgs((char *)local_44,"`&Comp.: `%%%s %s\n",puVar9);
    local_8._0_1_ = 1;
    pcVar10 = pcVar7;
    if (0xf < *(uint *)(pcVar7 + 0x14)) {
      pcVar10 = *(char **)pcVar7;
    }
    std::basic_string<>::append((basic_string<> *)&local_5c,pcVar10,*(uint *)(pcVar7 + 0x10));
    local_8._0_1_ = 0;
    if (0xf < local_30) {
      pnVar12 = (nothrow_t *)(local_30 + 1);
      pvVar11 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar12) {
        pvVar11 = *(void **)((int)local_44[0] + -4);
        pnVar12 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar11,pnVar12);
    }
    pcVar7 = (char *)strUsingArgs((char *)local_44,"`&Eff. : `%c+%.2f%%\n",
                                  (uint)(*(float *)((int)pfVar14[1] + 8) <= 0.0) * 8 + 0x30,
                                  (double)*(float *)((int)pfVar14[1] + 8));
    local_8._0_1_ = 2;
    pcVar10 = pcVar7;
    if (0xf < *(uint *)(pcVar7 + 0x14)) {
      pcVar10 = *(char **)pcVar7;
    }
    std::basic_string<>::append((basic_string<> *)&local_5c,pcVar10,*(uint *)(pcVar7 + 0x10));
    local_8._0_1_ = 0;
    if (0xf < local_30) {
      pnVar12 = (nothrow_t *)(local_30 + 1);
      pvVar11 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar12) {
        pvVar11 = *(void **)((int)local_44[0] + -4);
        pnVar12 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar11,pnVar12);
    }
    uVar8 = 0x38;
    if (0.0 < *(float *)((int)pfVar14[1] + 4)) {
      uVar8 = 0x24;
    }
    pcVar7 = (char *)strUsingArgs((char *)local_44,"`&Pow. : `%c+%.2f%%\n",uVar8,
                                  (double)*(float *)((int)pfVar14[1] + 4));
    local_8._0_1_ = 3;
    pcVar10 = pcVar7;
    if (0xf < *(uint *)(pcVar7 + 0x14)) {
      pcVar10 = *(char **)pcVar7;
    }
    std::basic_string<>::append((basic_string<> *)&local_5c,pcVar10,*(uint *)(pcVar7 + 0x10));
    local_8._0_1_ = 0;
    if (0xf < local_30) {
      pnVar12 = (nothrow_t *)(local_30 + 1);
      pvVar11 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar12) {
        pvVar11 = *(void **)((int)local_44[0] + -4);
        pnVar12 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar11,pnVar12);
    }
    uVar8 = 0x38;
    if (0.0 < *(float *)((int)pfVar14[1] + 0xc)) {
      uVar8 = 0x21;
    }
    pcVar7 = (char *)strUsingArgs((char *)local_44,"`&Emm. : `%c+%.2f%%\n",uVar8,
                                  (double)*(float *)((int)pfVar14[1] + 0xc));
    local_8._0_1_ = 4;
    pcVar10 = pcVar7;
    if (0xf < *(uint *)(pcVar7 + 0x14)) {
      pcVar10 = *(char **)pcVar7;
    }
    std::basic_string<>::append((basic_string<> *)&local_5c,pcVar10,*(uint *)(pcVar7 + 0x10));
    local_8._0_1_ = 0;
    if (0xf < local_30) {
      pnVar12 = (nothrow_t *)(local_30 + 1);
      pvVar11 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar12) {
        pvVar11 = *(void **)((int)local_44[0] + -4);
        pnVar12 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar11,pnVar12);
    }
    pcVar7 = (char *)strUsingArgs((char *)local_44,"`&S.R. : `*%.2f\n",
                                  (double)*(float *)((int)pfVar14[1] + 0x1c));
    local_8._0_1_ = 5;
    pcVar10 = pcVar7;
    if (0xf < *(uint *)(pcVar7 + 0x14)) {
      pcVar10 = *(char **)pcVar7;
    }
    std::basic_string<>::append((basic_string<> *)&local_5c,pcVar10,*(uint *)(pcVar7 + 0x10));
    local_8._0_1_ = 0;
    if (0xf < local_30) {
      pnVar12 = (nothrow_t *)(local_30 + 1);
      pvVar11 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar12) {
        pvVar11 = *(void **)((int)local_44[0] + -4);
        pnVar12 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar11,pnVar12);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    local_8._0_1_ = 6;
    fVar1 = *pfVar14;
    if ((float)*(int *)((int)pfVar14[1] + 0x10) <= fVar1) {
      uVar4 = 9;
      if (fVar1 < (float)*(int *)((int)pfVar14[1] + 0x14)) {
        if (25.0 < fVar1) {
          pcVar10 = "`$damaged";
          uVar4 = 9;
        }
        else {
          pcVar10 = "`^damaged";
          uVar4 = 9;
        }
      }
      else {
        pcVar10 = "`0nominal";
      }
    }
    else {
      uVar4 = 8;
      pcVar10 = "`@broken";
    }
    std::basic_string<>::assign((basic_string<> *)local_2c,pcVar10,uVar4);
    pcVar7 = (char *)strUsingArgs((char *)local_44,"`2State: %s\n");
    local_8 = CONCAT31(local_8._1_3_,7);
    pcVar10 = pcVar7;
    if (0xf < *(uint *)(pcVar7 + 0x14)) {
      pcVar10 = *(char **)pcVar7;
    }
    std::basic_string<>::append((basic_string<> *)&local_5c,pcVar10,*(uint *)(pcVar7 + 0x10));
    if (0xf < local_30) {
      pnVar12 = (nothrow_t *)(local_30 + 1);
      pvVar11 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar12) {
        pvVar11 = *(void **)((int)local_44[0] + -4);
        pnVar12 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar11,pnVar12);
    }
    if (0xf < local_18) {
      pnVar12 = (nothrow_t *)(local_18 + 1);
      pvVar11 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar12) {
        pvVar11 = *(void **)((int)local_2c[0] + -4);
        pnVar12 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar11,pnVar12);
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(uint *)param_1 = local_5c;
  *(undefined4 *)(param_1 + 4) = uStack_58;
  *(undefined4 *)(param_1 + 8) = uStack_54;
  *(undefined4 *)(param_1 + 0xc) = uStack_50;
  *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_48,local_4c);
LAB_004ee529:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getEngAddonData(class Ship *,int)

void __cdecl ShipTextData::getEngAddonData(Ship *param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  uint uVar3;
  ShipModule *pSVar4;
  basic_string<> *pbVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 uVar8;
  char *pcVar9;
  void *pvVar10;
  nothrow_t *pnVar11;
  double dVar12;
  double dVar13;
  uint local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &DAT_005c0c38;
  local_10 = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
  }
  else {
    local_34 = 0;
    uStack_30 = 0xf;
    local_44 = local_44 & 0xffffff00;
    local_8 = 0;
    uStack_7 = 0;
    if (*(int *)(param_2 + 0x1dc) == -1) {
      std::basic_string<>::assign((basic_string<> *)&local_44,"",0);
    }
    else if ((*(int *)(param_2 + 0x1dc) < 100) &&
            (pSVar4 = SystemManager::getModule
                                (*(SystemManager **)(param_2 + 0x40),*(int *)(param_2 + 0x1e4)),
            pSVar4 != (ShipModule *)0x0)) {
      pbVar5 = (basic_string<> *)
               strUsingArgs((char *)local_2c,"`&Slot : `*%s Addon\n",
                            (&PTR_s_Universal_005e028c)[*(int *)(**(int **)(pSVar4 + 0xc) + 0x4c)],
                            uVar3);
      std::basic_string<>::operator=((basic_string<> *)&local_44,pbVar5);
      if (0xf < local_18) {
        pnVar11 = (nothrow_t *)(local_18 + 1);
        pvVar10 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar10 = *(void **)((int)local_2c[0] + -4);
          pnVar11 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar10,pnVar11);
      }
      pfVar2 = *(float **)(*(int *)(pSVar4 + 0xc) + 0x54 + *(int *)(param_2 + 0x1dc) * 4);
      if (pfVar2 != (float *)0x0) {
        puVar6 = (undefined4 *)((int)pfVar2[1] + 0x38);
        if (0xf < *(uint *)((int)pfVar2[1] + 0x4c)) {
          puVar6 = (undefined4 *)*puVar6;
        }
        pcVar7 = (char *)strUsingArgs((char *)local_2c,"`&Comp.: `*%s\n",puVar6,uVar3);
        local_8 = 1;
        pcVar9 = pcVar7;
        if (0xf < *(uint *)(pcVar7 + 0x14)) {
          pcVar9 = *(char **)pcVar7;
        }
        std::basic_string<>::append((basic_string<> *)&local_44,pcVar9,*(uint *)(pcVar7 + 0x10));
        local_8 = 0;
        if (0xf < local_18) {
          pnVar11 = (nothrow_t *)(local_18 + 1);
          pvVar10 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            pvVar10 = *(void **)((int)local_2c[0] + -4);
            pnVar11 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar10,pnVar11);
        }
        pcVar7 = (char *)strUsingArgs((char *)local_2c,"`&Manu.: `!%s\n");
        local_8 = 2;
        pcVar9 = pcVar7;
        if (0xf < *(uint *)(pcVar7 + 0x14)) {
          pcVar9 = *(char **)pcVar7;
        }
        std::basic_string<>::append((basic_string<> *)&local_44,pcVar9,*(uint *)(pcVar7 + 0x10));
        local_8 = 0;
        if (0xf < local_18) {
          pnVar11 = (nothrow_t *)(local_18 + 1);
          pvVar10 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            pvVar10 = *(void **)((int)local_2c[0] + -4);
            pnVar11 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar10,pnVar11);
        }
        fVar1 = *pfVar2;
        if (fVar1 == 100.0) {
          uVar8 = 0x30;
        }
        else if (fVar1 <= 80.0) {
          uVar8 = 0x5e;
          if (fVar1 == 0.0) {
            uVar8 = 0x40;
          }
        }
        else {
          uVar8 = 0x24;
        }
        dVar12 = (double)((int)(fVar1 / 5.0) * 5);
        dVar13 = 5.0;
        if (5.0 <= dVar12) {
          dVar13 = dVar12;
        }
        pcVar7 = (char *)strUsingArgs((char *)local_2c,"`&State: `%c%.0f%%\n",uVar8,dVar13);
        local_8 = 3;
        pcVar9 = pcVar7;
        if (0xf < *(uint *)(pcVar7 + 0x14)) {
          pcVar9 = *(char **)pcVar7;
        }
        std::basic_string<>::append((basic_string<> *)&local_44,pcVar9,*(uint *)(pcVar7 + 0x10));
        local_8 = 0;
        if (0xf < local_18) {
          pnVar11 = (nothrow_t *)(local_18 + 1);
          pvVar10 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            pvVar10 = *(void **)((int)local_2c[0] + -4);
            pnVar11 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar10,pnVar11);
        }
        if (*(int *)((int)pfVar2[1] + 0x80) == 10) {
          pcVar7 = (char *)strUsingArgs((char *)local_2c,"`&Adap.: `*%s\n");
          local_8 = 4;
          pcVar9 = pcVar7;
          if (0xf < *(uint *)(pcVar7 + 0x14)) {
            pcVar9 = *(char **)pcVar7;
          }
          std::basic_string<>::append((basic_string<> *)&local_44,pcVar9,*(uint *)(pcVar7 + 0x10));
          if (0xf < local_18) {
            pnVar11 = (nothrow_t *)(local_18 + 1);
            pvVar10 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar11) {
              pvVar10 = *(void **)((int)local_2c[0] + -4);
              pnVar11 = (nothrow_t *)(local_18 + 0x24);
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pvVar10,pnVar11);
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(uint *)param_1 = local_44;
    *(undefined4 *)(param_1 + 4) = uStack_40;
    *(undefined4 *)(param_1 + 8) = uStack_3c;
    *(undefined4 *)(param_1 + 0xc) = uStack_38;
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_30,local_34);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getComponentInfo(class Ship *,int)

void __cdecl ShipTextData::getComponentInfo(Ship *param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  char *pcVar4;
  undefined4 ****ppppuVar5;
  int *piVar6;
  void *pvVar7;
  nothrow_t *pnVar8;
  int *piVar9;
  char *pcVar10;
  uint uVar11;
  void *local_5c [5];
  uint local_48;
  uint local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &DAT_005c0c88;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
  }
  else {
    local_34 = 0;
    uStack_30 = 0xf;
    local_44 = local_44 & 0xffffff00;
    local_8 = 0;
    pcVar4 = (char *)strUsingArgs((char *)local_2c,"`0Components in storage: %d/%d\n",
                                  *(int *)(*(int *)(param_2 + 0x1f8) + 0x48) -
                                  *(int *)(*(int *)(param_2 + 0x1f8) + 0x44) >> 2,0x18,local_14);
    local_8._0_1_ = 1;
    pcVar10 = pcVar4;
    if (0xf < *(uint *)(pcVar4 + 0x14)) {
      pcVar10 = *(char **)pcVar4;
    }
    std::basic_string<>::append((basic_string<> *)&local_44,pcVar10,*(uint *)(pcVar4 + 0x10));
    local_8._0_1_ = 0;
    if (0xf < local_18) {
      pnVar8 = (nothrow_t *)(local_18 + 1);
      ppppuVar5 = (undefined4 ****)local_2c[0];
      if ((nothrow_t *)0xfff < pnVar8) {
        ppppuVar5 = (undefined4 ****)local_2c[0][-1];
        pnVar8 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(ppppuVar5,pnVar8);
    }
    uVar11 = *(uint *)(param_2 + 0x1d4);
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
    if (((-1 < (int)uVar11) &&
        (iVar1 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0x44),
        uVar11 < (uint)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0x48) - iVar1 >> 2)
        )) && (pfVar2 = *(float **)(iVar1 + uVar11 * 4), pfVar2 != (float *)0x0)) {
      fVar3 = pfVar2[1];
      piVar6 = (int *)((int)fVar3 + 0x38);
      if (0xf < *(uint *)((int)fVar3 + 0x4c)) {
        piVar6 = (int *)*piVar6;
      }
      piVar9 = (int *)((int)fVar3 + 0x50);
      if (0xf < *(uint *)((int)fVar3 + 100)) {
        piVar9 = (int *)*piVar9;
      }
      pcVar4 = (char *)strUsingArgs((char *)local_5c,"`!%s %s `%%(%s)\n",piVar9,piVar6,
                                    (&PTR_s_Hap_Node_005e07f4)[*(int *)((int)fVar3 + 0x80)]);
      local_8._0_1_ = 2;
      pcVar10 = pcVar4;
      if (0xf < *(uint *)(pcVar4 + 0x14)) {
        pcVar10 = *(char **)pcVar4;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar10,*(uint *)(pcVar4 + 0x10));
      local_8._0_1_ = 0;
      if (0xf < local_48) {
        pnVar8 = (nothrow_t *)(local_48 + 1);
        pvVar7 = local_5c[0];
        if ((nothrow_t *)0xfff < pnVar8) {
          pvVar7 = *(void **)((int)local_5c[0] + -4);
          pnVar8 = (nothrow_t *)(local_48 + 0x24);
          if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar7,pnVar8);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
      local_8._0_1_ = 3;
      fVar3 = *pfVar2;
      if ((float)*(int *)((int)pfVar2[1] + 0x10) <= fVar3) {
        uVar11 = 9;
        if (fVar3 < (float)*(int *)((int)pfVar2[1] + 0x14)) {
          if (25.0 < fVar3) {
            pcVar10 = "`$damaged";
          }
          else {
            pcVar10 = "`^damaged";
          }
        }
        else {
          pcVar10 = "`0nominal";
        }
      }
      else {
        uVar11 = 8;
        pcVar10 = "`@broken";
      }
      std::basic_string<>::assign((basic_string<> *)local_2c,pcVar10,uVar11);
      ppppuVar5 = local_2c;
      if (0xf < local_18) {
        ppppuVar5 = (undefined4 ****)local_2c[0];
      }
      pcVar4 = (char *)strUsingArgs((char *)local_5c,"`2State: %s\n",ppppuVar5);
      local_8._0_1_ = 4;
      pcVar10 = pcVar4;
      if (0xf < *(uint *)(pcVar4 + 0x14)) {
        pcVar10 = *(char **)pcVar4;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar10,*(uint *)(pcVar4 + 0x10));
      if (0xf < local_48) {
        pnVar8 = (nothrow_t *)(local_48 + 1);
        pvVar7 = local_5c[0];
        if ((nothrow_t *)0xfff < pnVar8) {
          pvVar7 = *(void **)((int)local_5c[0] + -4);
          pnVar8 = (nothrow_t *)(local_48 + 0x24);
          if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar7,pnVar8);
      }
      if (0xf < local_18) {
        pnVar8 = (nothrow_t *)(local_18 + 1);
        ppppuVar5 = (undefined4 ****)local_2c[0];
        if ((nothrow_t *)0xfff < pnVar8) {
          ppppuVar5 = (undefined4 ****)local_2c[0][-1];
          pnVar8 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar5))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppuVar5,pnVar8);
      }
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(uint *)param_1 = local_44;
    *(undefined4 *)(param_1 + 4) = uStack_40;
    *(undefined4 *)(param_1 + 8) = uStack_3c;
    *(undefined4 *)(param_1 + 0xc) = uStack_38;
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_30,local_34);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getEngModuleName(class Ship *,int)

void __cdecl ShipTextData::getEngModuleName(Ship *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ShipModule *pSVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *piVar6;
  char *pcVar7;
  void *pvVar8;
  nothrow_t *pnVar9;
  void *local_44 [5];
  uint local_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c0cc0;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    goto LAB_004eed31;
  }
  local_1c = 0;
  uStack_18 = 0xf;
  local_2c = local_2c & 0xffffff00;
  local_8 = 0;
  if (*(int *)(param_2 + 0x1e4) == -1) {
LAB_004eec85:
    std::basic_string<>::append((basic_string<> *)&local_2c,"`7n/a",5);
  }
  else {
    pSVar3 = SystemManager::getModule(*(SystemManager **)(param_2 + 0x40),*(int *)(param_2 + 0x1e4))
    ;
    if (pSVar3 == (ShipModule *)0x0) goto LAB_004eec85;
    iVar1 = *(int *)(pSVar3 + 8);
    piVar6 = (int *)(iVar1 + 8);
    if (0xf < *(uint *)(iVar1 + 0x1c)) {
      piVar6 = (int *)*piVar6;
    }
    puVar4 = (undefined4 *)(iVar1 + 0x38);
    if (0xf < *(uint *)(iVar1 + 0x4c)) {
      puVar4 = (undefined4 *)*puVar4;
    }
    pcVar5 = (char *)strUsingArgs((char *)local_44,"`7%s %s",puVar4,piVar6,uVar2);
    local_8 = CONCAT31(local_8._1_3_,1);
    pcVar7 = pcVar5;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar7 = *(char **)pcVar5;
    }
    std::basic_string<>::append((basic_string<> *)&local_2c,pcVar7,*(uint *)(pcVar5 + 0x10));
    if (0xf < local_30) {
      pnVar9 = (nothrow_t *)(local_30 + 1);
      pvVar8 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar8 = *(void **)((int)local_44[0] + -4);
        pnVar9 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar8,pnVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(uint *)param_1 = local_2c;
  *(undefined4 *)(param_1 + 4) = uStack_28;
  *(undefined4 *)(param_1 + 8) = uStack_24;
  *(undefined4 *)(param_1 + 0xc) = uStack_20;
  *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_18,local_1c);
LAB_004eed31:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getJmpDestination(class Ship *,int)

Ship * __cdecl ShipTextData::getJmpDestination(Ship *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    return param_1;
  }
  if (*(int *)(param_2 + 0x50) == -1) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"`2Dst: `8none",0xd);
    return param_1;
  }
  for (puVar3 = *(undefined4 **)(g_gameData + 0x3c); puVar3 != *(undefined4 **)(g_gameData + 0x40);
      puVar3 = puVar3 + 1) {
    piVar1 = (int *)*puVar3;
    if (*piVar1 == *(int *)(param_2 + 0x50)) goto LAB_004eedcf;
  }
  piVar1 = (int *)0x0;
LAB_004eedcf:
  piVar2 = piVar1 + 0xd;
  if (0xf < (uint)piVar1[0x12]) {
    piVar2 = (int *)*piVar2;
  }
  strUsingArgs((char *)param_1,"`2Dst: `7%s",piVar2);
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getJmpSolState(class Ship *,int)

Ship * __cdecl ShipTextData::getJmpSolState(Ship *param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    return param_1;
  }
  if (*(float *)(param_2 + 0x5c) <= 0.0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"`2Sol.: `80%",0xc);
    return param_1;
  }
  strUsingArgs((char *)param_1,"`2Sol.: `%c%.0f%%",0x37,(double)*(float *)(param_2 + 0x5c));
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getJmpSpinState(class Ship *,int)

Ship * __cdecl ShipTextData::getJmpSpinState(Ship *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    return param_1;
  }
  fVar1 = *(float *)(param_2 + 0x58);
  if ((0.0 <= fVar1) && (iVar2 = *(int *)(*(int *)(param_2 + 0x40) + 0x14), iVar2 != 0)) {
    if (fVar1 == 0.0) {
      uVar4 = 0x25;
    }
    else {
      uVar4 = 0x38;
      if (0.0 < fVar1) {
        uVar4 = 0x37;
      }
    }
    iVar3 = ComponentInterfaceInstance::getEfficiencyPercent
                      (*(ComponentInterfaceInstance **)(*(int *)(*(int *)(iVar2 + 4) + 0x14) + 0xc))
    ;
    strUsingArgs((char *)param_1,"`2Spin: `%c%d%%",uVar4,
                 (int)(100.0 - (*(float *)(param_2 + 0x58) /
                               (*(float *)(*(int *)(iVar2 + 8) + 0x108) *
                               (((float)iVar3 / 100.0 - 1.0) * -1.0 + 1.0))) * 100.0));
    return param_1;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (Ship)0x0;
  std::basic_string<>::assign((basic_string<> *)param_1,"`2Spin: `80%",0xc);
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getHullCondition(class Ship *,int)

void __cdecl ShipTextData::getHullCondition(Ship *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  nothrow_t *pnVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b43b8;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  iVar2 = Ship::getHullDamagePercent((Ship *)param_2);
  if (iVar2 < 4) {
    uVar6 = 9;
    pcVar5 = "`0nominal";
  }
  else if (iVar2 < 0x15) {
    uVar6 = 0xc;
    pcVar5 = "`3light dmg.";
  }
  else if (iVar2 < 0x33) {
    uVar6 = 0xb;
    pcVar5 = "`$med. dmg.";
  }
  else if (iVar2 < 0x4c) {
    uVar6 = 0xc;
    pcVar5 = "`^heavy dmg.";
  }
  else {
    uVar6 = 10;
    pcVar5 = "`@CRITICAL";
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  std::basic_string<>::assign((basic_string<> *)local_2c,pcVar5,uVar6);
  local_8 = 0;
  ppppuVar3 = local_2c;
  if (0xf < local_18) {
    ppppuVar3 = (undefined4 ****)local_2c[0];
  }
  strUsingArgs((char *)param_1,"`%%Hull: %s",ppppuVar3,uVar1);
  if (0xf < local_18) {
    pnVar4 = (nothrow_t *)(local_18 + 1);
    ppppuVar3 = (undefined4 ****)local_2c[0];
    if ((nothrow_t *)0xfff < pnVar4) {
      ppppuVar3 = (undefined4 ****)local_2c[0][-1];
      pnVar4 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppuVar3,pnVar4);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getEngComponentRepair(class Ship *,int)

void __cdecl ShipTextData::getEngComponentRepair(Ship *param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  uint uVar3;
  undefined4 ****ppppuVar4;
  char *pcVar5;
  void *pvVar6;
  nothrow_t *pnVar7;
  char *pcVar8;
  uint uVar9;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c0d19;
  local_10 = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  if ((param_2 == 0) || (*(int *)(param_2 + 0x1dc) < 100)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    goto LAB_004ef2f9;
  }
  local_34 = 0;
  uStack_30 = 0xf;
  local_44 = local_44 & 0xffffff00;
  local_8 = 0;
  pfVar2 = *(float **)
            (*(int *)(*(int *)(param_2 + 0x1f8) + 0x44) + -400 + *(int *)(param_2 + 0x1dc) * 4);
  if (*pfVar2 == 100.0) {
    std::basic_string<>::append((basic_string<> *)&local_44,"`2State: `7no repair needed",0x1b);
  }
  else if (*(float *)(param_2 + 0x154) == 0.0) {
    local_8 = 1;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
    std::basic_string<>::assign((basic_string<> *)local_2c,"`0nominal",9);
    fVar1 = *pfVar2;
    if ((float)*(int *)((int)pfVar2[1] + 0x10) <= fVar1) {
      if (fVar1 < 25.0) {
        uVar9 = 0xe;
        pcVar8 = "`@heavy damage";
        goto LAB_004ef21d;
      }
      if (fVar1 < 50.0) {
        uVar9 = 8;
        pcVar8 = "`^damage";
        goto LAB_004ef21d;
      }
      if (fVar1 < (float)*(int *)((int)pfVar2[1] + 0x14)) {
        uVar9 = 0xe;
        pcVar8 = "`$light damage";
        goto LAB_004ef21d;
      }
    }
    else {
      uVar9 = 0x10;
      pcVar8 = "`4non-functional";
LAB_004ef21d:
      std::basic_string<>::assign((basic_string<> *)local_2c,pcVar8,uVar9);
    }
    ppppuVar4 = local_2c;
    if (0xf < local_18) {
      ppppuVar4 = (undefined4 ****)local_2c[0];
    }
    pcVar5 = (char *)strUsingArgs((char *)local_5c,"`2State: %s",ppppuVar4,uVar3);
    local_8 = CONCAT31(local_8._1_3_,2);
    pcVar8 = pcVar5;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar8 = *(char **)pcVar5;
    }
    std::basic_string<>::append((basic_string<> *)&local_44,pcVar8,*(uint *)(pcVar5 + 0x10));
    if (0xf < local_48) {
      pnVar7 = (nothrow_t *)(local_48 + 1);
      pvVar6 = local_5c[0];
      if ((nothrow_t *)0xfff < pnVar7) {
        pvVar6 = *(void **)((int)local_5c[0] + -4);
        pnVar7 = (nothrow_t *)(local_48 + 0x24);
        if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar6,pnVar7);
    }
    local_4c = 0;
    local_48 = 0xf;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
    if (0xf < local_18) {
      pnVar7 = (nothrow_t *)(local_18 + 1);
      ppppuVar4 = (undefined4 ****)local_2c[0];
      if ((nothrow_t *)0xfff < pnVar7) {
        ppppuVar4 = (undefined4 ****)local_2c[0][-1];
        pnVar7 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar4))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(ppppuVar4,pnVar7);
    }
  }
  else {
    std::basic_string<>::append((basic_string<> *)&local_44,"`2State: `$repairing",0x14);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(uint *)param_1 = local_44;
  *(undefined4 *)(param_1 + 4) = uStack_40;
  *(undefined4 *)(param_1 + 8) = uStack_3c;
  *(undefined4 *)(param_1 + 0xc) = uStack_38;
  *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_30,local_34);
LAB_004ef2f9:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getEngModuleRepair(class Ship *,int)

void __cdecl ShipTextData::getEngModuleRepair(Ship *param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  ShipModule *this;
  char *pcVar3;
  basic_string<> *pbVar4;
  char *pcVar5;
  int iVar6;
  void *pvVar7;
  nothrow_t *pnVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &DAT_005c0d90;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  if ((param_2 == 0) || (*(int *)(param_2 + 0x1e4) == -1)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    goto LAB_004ef90f;
  }
  local_34 = 0;
  uStack_30 = 0xf;
  local_44 = local_44 & 0xffffff00;
  local_8 = 0;
  uStack_7 = 0;
  this = SystemManager::getModule(*(SystemManager **)(param_2 + 0x40),*(int *)(param_2 + 0x1e4));
  if (this != (ShipModule *)0x0) {
    pcVar3 = (char *)strUsingArgs((char *)local_2c);
    local_8 = 1;
    pcVar5 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar5 = *(char **)pcVar3;
    }
    std::basic_string<>::append((basic_string<> *)&local_44,pcVar5,*(uint *)(pcVar3 + 0x10));
    local_8 = 0;
    if (0xf < local_18) {
      pnVar8 = (nothrow_t *)(local_18 + 1);
      pvVar7 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar8) {
        pvVar7 = *(void **)((int)local_2c[0] + -4);
        pnVar8 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar7,pnVar8);
    }
    pcVar3 = (char *)strUsingArgs((char *)local_2c,"`&Type : `%%%s\n",
                                  (&PTR_s_Unknown_005e15b0)[*(int *)(*(int *)(this + 8) + 4)],uVar2)
    ;
    local_8 = 2;
    pcVar5 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar5 = *(char **)pcVar3;
    }
    std::basic_string<>::append((basic_string<> *)&local_44,pcVar5,*(uint *)(pcVar3 + 0x10));
    local_8 = 0;
    if (0xf < local_18) {
      pnVar8 = (nothrow_t *)(local_18 + 1);
      pvVar7 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar8) {
        pvVar7 = *(void **)((int)local_2c[0] + -4);
        pnVar8 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar7,pnVar8);
    }
    pcVar3 = (char *)strUsingArgs((char *)local_2c,"`&Slot : `!%s\n");
    local_8 = 3;
    pcVar5 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar5 = *(char **)pcVar3;
    }
    std::basic_string<>::append((basic_string<> *)&local_44,pcVar5,*(uint *)(pcVar3 + 0x10));
    local_8 = 0;
    if (0xf < local_18) {
      pnVar8 = (nothrow_t *)(local_18 + 1);
      pvVar7 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar8) {
        pvVar7 = *(void **)((int)local_2c[0] + -4);
        pnVar8 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar7,pnVar8);
    }
    fVar9 = *(float *)(*(int *)(this + 8) + 0xbc);
    fVar10 = fVar9;
    ComponentInterfaceInstance::getPowerModifier(*(ComponentInterfaceInstance **)(this + 0xc));
    if (fVar10 * fVar9 + fVar9 <= 0.0) {
      fVar9 = *(float *)(*(int *)(this + 8) + 0xc0);
      fVar10 = fVar9;
      ComponentInterfaceInstance::getPowerModifier(*(ComponentInterfaceInstance **)(this + 0xc));
      fVar9 = fVar10 * fVar9 + fVar9;
      if (fVar9 <= 0.0) {
        ShipModule::getCurrentGenerationRate(this);
        if (fVar9 <= 0.0) goto LAB_004ef6fd;
        ShipModule::getCurrentGenerationRate(this);
        pbVar4 = (basic_string<> *)strUsingArgs((char *)local_2c);
        local_8 = 6;
      }
      else {
        ComponentInterfaceInstance::getPowerModifier(*(ComponentInterfaceInstance **)(this + 0xc));
        pbVar4 = (basic_string<> *)strUsingArgs((char *)local_2c);
        local_8 = 5;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pbVar4);
      local_8 = 0;
      if (0xf < local_18) {
        pnVar8 = (nothrow_t *)(local_18 + 1);
        pvVar7 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar8) {
          pvVar7 = *(void **)((int)local_2c[0] + -4);
          pnVar8 = (nothrow_t *)(local_18 + 0x24);
          uVar1 = local_8;
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) goto LAB_004ef6b4;
        }
        goto LAB_004ef6f3;
      }
    }
    else {
      fVar9 = *(float *)(*(int *)(this + 8) + 0xbc);
      fVar12 = fVar9;
      ComponentInterfaceInstance::getPowerModifier(*(ComponentInterfaceInstance **)(this + 0xc));
      fVar11 = fVar12 * fVar9;
      fVar10 = *(float *)(*(int *)(this + 8) + 0xc0);
      ComponentInterfaceInstance::getPowerModifier(*(ComponentInterfaceInstance **)(this + 0xc));
      pcVar3 = (char *)strUsingArgs((char *)local_2c,"`&Draw : `$%.2fkW/s`2/`$%.2fkW/s\n",
                                    (double)(fVar12 * fVar10 + fVar10),(double)(fVar11 + fVar9));
      local_8 = 4;
      pcVar5 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar5 = *(char **)pcVar3;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar5,*(uint *)(pcVar3 + 0x10));
      local_8 = 0;
      if (0xf < local_18) {
        pnVar8 = (nothrow_t *)(local_18 + 1);
        pvVar7 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar8) {
          pnVar8 = (nothrow_t *)(local_18 + 0x24);
          pvVar7 = *(void **)((int)local_2c[0] + -4);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)*(void **)((int)local_2c[0] + -4)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
LAB_004ef6f3:
        local_8 = 0;
        operator_delete(pvVar7,pnVar8);
      }
    }
LAB_004ef6fd:
    fVar10 = (float)*(int *)(*(int *)(this + 8) + 0xcc);
    fVar9 = fVar10;
    ComponentInterfaceInstance::getEmissionsModifier(*(ComponentInterfaceInstance **)(this + 0xc));
    if (fVar9 * fVar10 + fVar10 <= 0.0) {
      ComponentInterfaceInstance::getEmissionsModifier(*(ComponentInterfaceInstance **)(this + 0xc))
      ;
      pcVar5 = (char *)strUsingArgs((char *)local_2c);
      local_8 = 8;
      uVar2 = *(uint *)(pcVar5 + 0x14);
    }
    else {
      fVar10 = (float)*(int *)(*(int *)(this + 8) + 0xcc);
      fVar9 = fVar10;
      ComponentInterfaceInstance::getEmissionsModifier(*(ComponentInterfaceInstance **)(this + 0xc))
      ;
      fVar12 = fVar9 * fVar10;
      iVar6 = *(int *)(*(int *)(this + 8) + 0xd4);
      ComponentInterfaceInstance::getEmissionsModifier(*(ComponentInterfaceInstance **)(this + 0xc))
      ;
      pcVar5 = (char *)strUsingArgs((char *)local_2c,"`&Emm. : `$%.2fdBw`2/`$%.2fdBw\n",
                                    (double)(fVar9 * (float)iVar6 + (float)iVar6),
                                    (double)(fVar12 + fVar10));
      local_8 = 7;
      uVar2 = *(uint *)(pcVar5 + 0x14);
    }
    pcVar3 = pcVar5;
    if (0xf < uVar2) {
      pcVar3 = *(char **)pcVar5;
    }
    std::basic_string<>::append((basic_string<> *)&local_44,pcVar3,*(uint *)(pcVar5 + 0x10));
    local_8 = 0;
    uVar1 = local_8;
    local_8 = 0;
    if (0xf < local_18) {
      pnVar8 = (nothrow_t *)(local_18 + 1);
      pvVar7 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar8) {
        pvVar7 = *(void **)((int)local_2c[0] + -4);
        pnVar8 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) goto LAB_004ef6b4;
      }
      operator_delete(pvVar7,pnVar8);
    }
    iVar6 = ComponentInterfaceInstance::getEfficiencyPercent
                      (*(ComponentInterfaceInstance **)(this + 0xc));
    if (iVar6 < 0x65) {
      ComponentInterfaceInstance::getEfficiencyPercent(*(ComponentInterfaceInstance **)(this + 0xc))
      ;
    }
    ComponentInterfaceInstance::getEfficiencyPercent(*(ComponentInterfaceInstance **)(this + 0xc));
    pcVar3 = (char *)strUsingArgs((char *)local_2c);
    local_8 = 9;
    pcVar5 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar5 = *(char **)pcVar3;
    }
    std::basic_string<>::append((basic_string<> *)&local_44,pcVar5,*(uint *)(pcVar3 + 0x10));
    if (0xf < local_18) {
      pnVar8 = (nothrow_t *)(local_18 + 1);
      pvVar7 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar8) {
        pvVar7 = *(void **)((int)local_2c[0] + -4);
        pnVar8 = (nothrow_t *)(local_18 + 0x24);
        uVar1 = local_8;
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
LAB_004ef6b4:
          local_8 = uVar1;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar7,pnVar8);
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(uint *)param_1 = local_44;
  *(undefined4 *)(param_1 + 4) = uStack_40;
  *(undefined4 *)(param_1 + 8) = uStack_3c;
  *(undefined4 *)(param_1 + 0xc) = uStack_38;
  *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_30,local_34);
LAB_004ef90f:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getEngModuleStats(class Ship *,int)

void __cdecl ShipTextData::getEngModuleStats(Ship *param_1,int param_2)

{
  float *pfVar1;
  uint uVar2;
  ShipModule *this;
  char *pcVar3;
  undefined4 uVar4;
  basic_string<> *pbVar5;
  int iVar6;
  char *pcVar7;
  void *pvVar8;
  nothrow_t *pnVar9;
  undefined4 uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  float local_48;
  void *local_44 [5];
  uint local_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &DAT_005c0e28;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    goto LAB_004f02a1;
  }
  local_1c = 0;
  uStack_18 = 0xf;
  local_2c = local_2c & 0xffffff00;
  local_8 = 0;
  uStack_7 = 0;
  if ((*(int *)(param_2 + 0x1e4) == -1) ||
     (this = SystemManager::getModule(*(SystemManager **)(param_2 + 0x40),*(int *)(param_2 + 0x1e4))
     , this == (ShipModule *)0x0)) {
    std::basic_string<>::append((basic_string<> *)&local_2c,"`7n/a",5);
  }
  else {
    if (this[99] == (ShipModule)0x0) {
      pcVar7 = "`0PM: `8off\n";
      uVar11 = 0xc;
    }
    else if (this[0x62] == (ShipModule)0x0) {
      uVar11 = 0xf;
      pcVar7 = "`0PM: `7normal\n";
    }
    else {
      uVar11 = 0xd;
      pcVar7 = "`0PM: `$high\n";
    }
    std::basic_string<>::append((basic_string<> *)&local_2c,pcVar7,uVar11);
    std::basic_string<>::append((basic_string<> *)&local_2c,"\n`7`aq\n",7);
    if (*(float *)(this + 0x78) == 0.0) {
      std::basic_string<>::append((basic_string<> *)&local_2c,"`0Em: `7nil\n",0xc);
    }
    else {
      pcVar3 = (char *)strUsingArgs((char *)local_44,"`0Em: `!%.2f`2dBw\n",
                                    (double)*(float *)(this + 0x78),uVar2);
      local_8 = 1;
      pcVar7 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar7 = *(char **)pcVar3;
      }
      std::basic_string<>::append((basic_string<> *)&local_2c,pcVar7,*(uint *)(pcVar3 + 0x10));
      local_8 = 0;
      if (0xf < local_30) {
        pnVar9 = (nothrow_t *)(local_30 + 1);
        pvVar8 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar8 = *(void **)((int)local_44[0] + -4);
          pnVar9 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8))) {
LAB_004efa8e:
            local_8 = 0;
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar8,pnVar9);
      }
    }
    fVar12 = (float)*(int *)(*(int *)(this + 8) + 0xd4);
    fVar13 = fVar12;
    ComponentInterfaceInstance::getEmissionsModifier(*(ComponentInterfaceInstance **)(this + 0xc));
    pcVar3 = (char *)strUsingArgs((char *)local_44,"`0NE: `!%.2f`2dBw\n",
                                  (double)(fVar13 * fVar12 + fVar12));
    local_8 = 2;
    pcVar7 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar7 = *(char **)pcVar3;
    }
    std::basic_string<>::append((basic_string<> *)&local_2c,pcVar7,*(uint *)(pcVar3 + 0x10));
    local_8 = 0;
    if (0xf < local_30) {
      pnVar9 = (nothrow_t *)(local_30 + 1);
      pvVar8 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar8 = *(void **)((int)local_44[0] + -4);
        pnVar9 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar8,pnVar9);
    }
    fVar12 = (float)*(int *)(*(int *)(this + 8) + 0xcc);
    fVar13 = fVar12;
    ComponentInterfaceInstance::getEmissionsModifier(*(ComponentInterfaceInstance **)(this + 0xc));
    if (fVar13 * fVar12 + fVar12 <= 0.0) {
      std::basic_string<>::append((basic_string<> *)&local_2c,"`0HE: `8n/a\n",0xc);
    }
    else {
      fVar12 = (float)*(int *)(*(int *)(this + 8) + 0xcc);
      fVar13 = fVar12;
      ComponentInterfaceInstance::getEmissionsModifier(*(ComponentInterfaceInstance **)(this + 0xc))
      ;
      pcVar3 = (char *)strUsingArgs((char *)local_44,"`0HE: `!%.2f`2dBw\n",
                                    (double)(fVar13 * fVar12 + fVar12));
      local_8 = 3;
      pcVar7 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar7 = *(char **)pcVar3;
      }
      std::basic_string<>::append((basic_string<> *)&local_2c,pcVar7,*(uint *)(pcVar3 + 0x10));
      local_8 = 0;
      if (0xf < local_30) {
        pnVar9 = (nothrow_t *)(local_30 + 1);
        pvVar8 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar8 = *(void **)((int)local_44[0] + -4);
          pnVar9 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar8,pnVar9);
      }
    }
    if (*(float *)(this + 0x78) == 0.0) {
      std::basic_string<>::append((basic_string<> *)&local_2c,"`0Fq: `7n/a\n",0xc);
    }
    else {
      pcVar3 = (char *)strUsingArgs((char *)local_44,"`0Fq: `#%d`2hz\n");
      local_8 = 4;
      pcVar7 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar7 = *(char **)pcVar3;
      }
      std::basic_string<>::append((basic_string<> *)&local_2c,pcVar7,*(uint *)(pcVar3 + 0x10));
      local_8 = 0;
      if (0xf < local_30) {
        pnVar9 = (nothrow_t *)(local_30 + 1);
        pvVar8 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar8 = *(void **)((int)local_44[0] + -4);
          pnVar9 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar8,pnVar9);
      }
    }
    std::basic_string<>::append((basic_string<> *)&local_2c,"\n`7`ap\n",7);
    uVar10 = 0x32;
    local_48 = *(float *)(*(int *)(this + 8) + 200);
    if (local_48 <= 0.0) {
      pcVar7 = "`0Pg: `7n/a\n";
      fVar13 = local_48;
LAB_004efda5:
      std::basic_string<>::append((basic_string<> *)&local_2c,pcVar7,0xc);
    }
    else {
      if ((this[99] == (ShipModule)0x0) ||
         (ShipModule::getCurrentGenerationRate(this), local_48 == 0.0)) {
        pcVar7 = "`0Pg: `7nil\n";
        fVar13 = local_48;
        goto LAB_004efda5;
      }
      if (this[99] == (ShipModule)0x0) {
        local_48 = 0.0;
        fVar13 = 0.0;
      }
      else {
        ShipModule::getCurrentGenerationRate(this);
        if (this[99] == (ShipModule)0x0) {
          fVar13 = 0.0;
        }
        else {
          fVar13 = local_48;
          ShipModule::getCurrentGenerationRate(this);
        }
      }
      uVar4 = 0x32;
      if (0.0 < fVar13) {
        uVar4 = 0x24;
      }
      pbVar5 = (basic_string<> *)
               strUsingArgs((char *)local_44,"`0Pg: `%c%.2f`2kW/s\n",uVar4,(double)local_48);
      local_8 = 5;
      std::basic_string<>::append((basic_string<> *)&local_2c,pbVar5);
      local_8 = 0;
      if (0xf < local_30) {
        pnVar9 = (nothrow_t *)(local_30 + 1);
        pvVar8 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar8 = *(void **)((int)local_44[0] + -4);
          pnVar9 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar8,pnVar9);
      }
    }
    ShipModule::getCurrentPowerDrain(this);
    if (fVar13 == 0.0) {
      std::basic_string<>::append((basic_string<> *)&local_2c,"`0Pd: `7nil\n",0xc);
    }
    else {
      ShipModule::getCurrentPowerDrain(this);
      dVar14 = (double)fVar13;
      dVar15 = dVar14;
      ShipModule::getCurrentPowerDrain(this);
      if (0.0 < SUB84(dVar14,0)) {
        uVar10 = 0x24;
      }
      pcVar3 = (char *)strUsingArgs((char *)local_44,"`0Pd: `%c%.2f`2kW/s\n",uVar10,dVar15);
      local_8 = 6;
      pcVar7 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar7 = *(char **)pcVar3;
      }
      std::basic_string<>::append((basic_string<> *)&local_2c,pcVar7,*(uint *)(pcVar3 + 0x10));
      local_8 = 0;
      if (0xf < local_30) {
        pnVar9 = (nothrow_t *)(local_30 + 1);
        pvVar8 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar8 = *(void **)((int)local_44[0] + -4);
          pnVar9 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar8,pnVar9);
      }
    }
    std::basic_string<>::append((basic_string<> *)&local_2c,"\n`7`ao\n",7);
    if (*(float *)(*(int *)(this + 8) + 0xc4) == 0.0) {
      std::basic_string<>::append((basic_string<> *)&local_2c,"`0Cp: `7n/a\n",0xc);
      std::basic_string<>::append((basic_string<> *)&local_2c,"`0Mp: `7n/a\n",0xc);
    }
    else {
      uVar10 = 0x24;
      if (*(float *)(this + 0x5c) == 0.0) {
        uVar10 = 0x37;
      }
      pcVar3 = (char *)strUsingArgs((char *)local_44,"`0Cp: `%c%.2f`2kw\n",uVar10,
                                    (double)*(float *)(this + 0x5c));
      local_8 = 7;
      pcVar7 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar7 = *(char **)pcVar3;
      }
      std::basic_string<>::append((basic_string<> *)&local_2c,pcVar7,*(uint *)(pcVar3 + 0x10));
      local_8 = 0;
      if (0xf < local_30) {
        pnVar9 = (nothrow_t *)(local_30 + 1);
        pvVar8 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar8 = *(void **)((int)local_44[0] + -4);
          pnVar9 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar8,pnVar9);
      }
      pcVar3 = (char *)strUsingArgs((char *)local_44,"`0Mp: `$%.2f`2kw\n",
                                    (double)*(float *)(*(int *)(this + 8) + 0xc4));
      local_8 = 8;
      pcVar7 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar7 = *(char **)pcVar3;
      }
      std::basic_string<>::append((basic_string<> *)&local_2c,pcVar7,*(uint *)(pcVar3 + 0x10));
      local_8 = 0;
      if (0xf < local_30) {
        pnVar9 = (nothrow_t *)(local_30 + 1);
        pvVar8 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar8 = *(void **)((int)local_44[0] + -4);
          pnVar9 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar8,pnVar9);
      }
    }
    iVar6 = *(int *)(this + 0xc);
    uVar2 = 0;
    uVar11 = 0;
    if (*(int *)(iVar6 + 4) != 0) {
      uVar11 = 1;
      if ((*(int *)(iVar6 + 0x54) != 0) &&
         (uVar11 = 1, *(int *)(*(int *)(*(int *)(iVar6 + 0x54) + 4) + 0x80) == 5)) {
        uVar2 = 1;
      }
    }
    if (*(int *)(iVar6 + 8) != 0) {
      uVar11 = uVar11 + 1;
      if ((*(int *)(iVar6 + 0x58) != 0) &&
         (*(int *)(*(int *)(*(int *)(iVar6 + 0x58) + 4) + 0x80) == 5)) {
        uVar2 = uVar2 + 1;
      }
    }
    if (*(int *)(iVar6 + 0xc) != 0) {
      uVar11 = uVar11 + 1;
      if ((*(int *)(iVar6 + 0x5c) != 0) &&
         (*(int *)(*(int *)(*(int *)(iVar6 + 0x5c) + 4) + 0x80) == 5)) {
        uVar2 = uVar2 + 1;
      }
    }
    if (*(int *)(iVar6 + 0x10) != 0) {
      uVar11 = uVar11 + 1;
      if ((*(int *)(iVar6 + 0x60) != 0) &&
         (*(int *)(*(int *)(*(int *)(iVar6 + 0x60) + 4) + 0x80) == 5)) {
        uVar2 = uVar2 + 1;
      }
    }
    if ((uVar2 == 0) || (uVar11 == 0)) {
      iVar6 = 0;
    }
    else {
      iVar6 = (uVar2 / uVar11) * 100;
    }
    uVar10 = 0x37;
    if (iVar6 != 0) {
      uVar10 = 0x21;
    }
    pcVar3 = (char *)strUsingArgs((char *)local_44,"`0Sh: `%c%d%%\n",uVar10);
    local_8 = 9;
    pcVar7 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar7 = *(char **)pcVar3;
    }
    std::basic_string<>::append((basic_string<> *)&local_2c,pcVar7,*(uint *)(pcVar3 + 0x10));
    local_8 = 0;
    if (0xf < local_30) {
      pnVar9 = (nothrow_t *)(local_30 + 1);
      pvVar8 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar8 = *(void **)((int)local_44[0] + -4);
        pnVar9 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar8,pnVar9);
    }
    std::basic_string<>::append((basic_string<> *)&local_2c,"\n`7`ar\n",7);
    local_48 = 0.0;
    if (*(int *)(*(int *)(*(int *)(this + 8) + 0xd8) + 0x54) -
        *(int *)(*(int *)(*(int *)(this + 8) + 0xd8) + 0x50) >> 2 != 0) {
      do {
        pfVar1 = *(float **)((int)local_48 * 4 + 4 + *(int *)(this + 0xc));
        if (pfVar1 == (float *)0x0) {
          pcVar7 = (char *)strUsingArgs((char *)local_44,"`%%%02d: `8%s",local_48);
          local_8 = 10;
        }
        else if (this[99] == (ShipModule)0x0) {
          fVar13 = *pfVar1;
          if (fVar13 == 100.0) {
            uVar10 = 0x30;
          }
          else if (fVar13 <= 80.0) {
            uVar10 = 0x5e;
            if (fVar13 == 0.0) {
              uVar10 = 0x40;
            }
          }
          else {
            uVar10 = 0x24;
          }
          pcVar7 = (char *)strUsingArgs((char *)local_44,"`%%%02d: `%c%s",local_48,uVar10);
          local_8 = 0xb;
        }
        else {
          pcVar7 = (char *)strUsingArgs((char *)local_44,"`%%%02d: `7%s",local_48);
          local_8 = 0xc;
        }
        pcVar3 = pcVar7;
        if (0xf < *(uint *)(pcVar7 + 0x14)) {
          pcVar3 = *(char **)pcVar7;
        }
        std::basic_string<>::append((basic_string<> *)&local_2c,pcVar3,*(uint *)(pcVar7 + 0x10));
        local_8 = 0;
        if (0xf < local_30) {
          pnVar9 = (nothrow_t *)(local_30 + 1);
          pvVar8 = local_44[0];
          if ((nothrow_t *)0xfff < pnVar9) {
            pvVar8 = *(void **)((int)local_44[0] + -4);
            pnVar9 = (nothrow_t *)(local_30 + 0x24);
            if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8))) goto LAB_004efa8e;
          }
          operator_delete(pvVar8,pnVar9);
        }
        iVar6 = *(int *)((int)local_48 * 4 + 0x54 + *(int *)(this + 0xc));
        if (iVar6 == 0) {
          pcVar7 = "\n";
          uVar2 = 1;
LAB_004f0256:
          std::basic_string<>::append((basic_string<> *)&local_2c,pcVar7,uVar2);
        }
        else {
          iVar6 = *(int *)(*(int *)(iVar6 + 4) + 0x80);
          if (iVar6 == 5) {
            uVar2 = 7;
            pcVar7 = " `!(b)\n";
            goto LAB_004f0256;
          }
          if (iVar6 == 10) {
            pcVar7 = " `!(a)\n";
            uVar2 = 7;
            goto LAB_004f0256;
          }
          if (iVar6 == 0xb) {
            pcVar7 = " `!(s)\n";
            uVar2 = 7;
            goto LAB_004f0256;
          }
        }
        local_48 = (float)((int)local_48 + 1);
      } while ((uint)local_48 <
               (uint)(*(int *)(*(int *)(*(int *)(this + 8) + 0xd8) + 0x54) -
                      *(int *)(*(int *)(*(int *)(this + 8) + 0xd8) + 0x50) >> 2));
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(uint *)param_1 = local_2c;
  *(undefined4 *)(param_1 + 4) = uStack_28;
  *(undefined4 *)(param_1 + 8) = uStack_24;
  *(undefined4 *)(param_1 + 0xc) = uStack_20;
  *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_18,local_1c);
LAB_004f02a1:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getEngModuleData(class Ship *,int)

void __cdecl ShipTextData::getEngModuleData(Ship *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ShipModule *pSVar3;
  char *pcVar4;
  int iVar5;
  undefined4 ****ppppuVar6;
  undefined4 *puVar7;
  void *pvVar8;
  int *piVar9;
  nothrow_t *pnVar10;
  char *pcVar11;
  void *local_5c [5];
  uint local_48;
  uint local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c0e70;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
  }
  else {
    local_34 = 0;
    uStack_30 = 0xf;
    local_44 = local_44 & 0xffffff00;
    local_8 = 0;
    iVar5 = *(int *)(param_2 + 0x1e4);
    if (iVar5 == -1) {
      std::basic_string<>::append((basic_string<> *)&local_44,"`0**no module selected**",0x18);
    }
    else {
      pSVar3 = SystemManager::getModule(*(SystemManager **)(param_2 + 0x40),iVar5);
      if (pSVar3 == (ShipModule *)0x0) {
        if (iVar5 < 0) {
          std::basic_string<>::append((basic_string<> *)&local_44,"`0**No module selected**",0x18);
        }
      }
      else {
        iVar5 = *(int *)(pSVar3 + 8);
        piVar9 = (int *)(iVar5 + 8);
        if (0xf < *(uint *)(iVar5 + 0x1c)) {
          piVar9 = (int *)*piVar9;
        }
        puVar7 = (undefined4 *)(iVar5 + 0x38);
        if (0xf < *(uint *)(iVar5 + 0x4c)) {
          puVar7 = (undefined4 *)*puVar7;
        }
        pcVar11 = " `$**connected**";
        if (pSVar3[99] == (ShipModule)0x0) {
          pcVar11 = " `7**disconnected**";
        }
        pcVar4 = (char *)strUsingArgs((char *)local_5c,"`0Module: `2%s %s%s\n",puVar7,piVar9,pcVar11
                                      ,uVar2);
        local_8._0_1_ = 1;
        pcVar11 = pcVar4;
        if (0xf < *(uint *)(pcVar4 + 0x14)) {
          pcVar11 = *(char **)pcVar4;
        }
        std::basic_string<>::append((basic_string<> *)&local_44,pcVar11,*(uint *)(pcVar4 + 0x10));
        local_8._0_1_ = 0;
        if (0xf < local_48) {
          pnVar10 = (nothrow_t *)(local_48 + 1);
          pvVar8 = local_5c[0];
          if ((nothrow_t *)0xfff < pnVar10) {
            pvVar8 = *(void **)((int)local_5c[0] + -4);
            pnVar10 = (nothrow_t *)(local_48 + 0x24);
            if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar8,pnVar10);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
        local_8 = CONCAT31(local_8._1_3_,2);
        if (pSVar3[99] == (ShipModule)0x0) {
          iVar5 = ComponentInterfaceInstance::damagePercent
                            (*(ComponentInterfaceInstance **)(pSVar3 + 0xc));
          if (*(int *)(*(int *)(pSVar3 + 8) + 0xdc) < iVar5) {
            std::basic_string<>::append((basic_string<> *)local_2c,"`0",2);
          }
          else if (iVar5 < 0x33) {
            if (*(int *)(*(int *)(pSVar3 + 8) + 0xe0) < iVar5) {
              std::basic_string<>::append((basic_string<> *)local_2c,"`^",2);
            }
            else {
              std::basic_string<>::append((basic_string<> *)local_2c,"`@",2);
            }
          }
          else {
            std::basic_string<>::append((basic_string<> *)local_2c,"`$",2);
          }
        }
        else {
          cVar1 = (**(code **)(*(int *)pSVar3 + 0x18))();
          if (cVar1 == '\0') {
            cVar1 = (**(code **)(*(int *)pSVar3 + 0x14))();
            if (cVar1 == '\0') {
              uVar2 = 0x12;
              pcVar11 = "`!fully functional";
            }
            else {
              uVar2 = 0x10;
              pcVar11 = "`@non-functional";
            }
          }
          else {
            uVar2 = 9;
            pcVar11 = "`$damaged";
          }
          std::basic_string<>::assign((basic_string<> *)local_2c,pcVar11,uVar2);
        }
        ppppuVar6 = local_2c;
        if (0xf < local_18) {
          ppppuVar6 = (undefined4 ****)local_2c[0];
        }
        pcVar4 = (char *)strUsingArgs((char *)local_5c,"`0State: %s",ppppuVar6);
        local_8 = CONCAT31(local_8._1_3_,3);
        pcVar11 = pcVar4;
        if (0xf < *(uint *)(pcVar4 + 0x14)) {
          pcVar11 = *(char **)pcVar4;
        }
        std::basic_string<>::append((basic_string<> *)&local_44,pcVar11,*(uint *)(pcVar4 + 0x10));
        if (0xf < local_48) {
          pnVar10 = (nothrow_t *)(local_48 + 1);
          pvVar8 = local_5c[0];
          if ((nothrow_t *)0xfff < pnVar10) {
            pvVar8 = *(void **)((int)local_5c[0] + -4);
            pnVar10 = (nothrow_t *)(local_48 + 0x24);
            if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar8,pnVar10);
        }
        if (0xf < local_18) {
          pnVar10 = (nothrow_t *)(local_18 + 1);
          ppppuVar6 = (undefined4 ****)local_2c[0];
          if ((nothrow_t *)0xfff < pnVar10) {
            ppppuVar6 = (undefined4 ****)local_2c[0][-1];
            pnVar10 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar6))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(ppppuVar6,pnVar10);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(uint *)param_1 = local_44;
    *(undefined4 *)(param_1 + 4) = uStack_40;
    *(undefined4 *)(param_1 + 8) = uStack_3c;
    *(undefined4 *)(param_1 + 0xc) = uStack_38;
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_30,local_34);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getEngineeringSummary(class Ship *,int)

void __cdecl ShipTextData::getEngineeringSummary(Ship *param_1,int param_2)

{
  SystemManager *this;
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  uint local_48;
  uint local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &DAT_005c0ef8;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
  }
  else {
    local_34 = 0;
    uStack_30 = 0xf;
    local_44 = local_44 & 0xffffff00;
    local_8 = 0;
    pcVar2 = (char *)strUsingArgs((char *)local_2c);
    local_8._0_1_ = 1;
    pcVar3 = pcVar2;
    if (0xf < *(uint *)(pcVar2 + 0x14)) {
      pcVar3 = *(char **)pcVar2;
    }
    std::basic_string<>::append((basic_string<> *)&local_44,pcVar3,*(uint *)(pcVar2 + 0x10));
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_18) {
      pnVar5 = (nothrow_t *)(local_18 + 1);
      pvVar4 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar5) {
        pvVar4 = *(void **)((int)local_2c[0] + -4);
        pnVar5 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
LAB_004f0690:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar4,pnVar5);
    }
    std::basic_string<>::append((basic_string<> *)&local_44,"`%Engineering Status:\n",0x16);
    if (*(SystemManager **)(param_2 + 0x40) != (SystemManager *)0x0) {
      SystemManager::getModule(*(SystemManager **)(param_2 + 0x40),1,true);
    }
    pcVar2 = (char *)strUsingArgs((char *)local_2c,"  `0Reactor`2: %s\n");
    local_8._0_1_ = 2;
    pcVar3 = pcVar2;
    if (0xf < *(uint *)(pcVar2 + 0x14)) {
      pcVar3 = *(char **)pcVar2;
    }
    std::basic_string<>::append((basic_string<> *)&local_44,pcVar3,*(uint *)(pcVar2 + 0x10));
    local_8._0_1_ = 0;
    if (0xf < local_18) {
      pnVar5 = (nothrow_t *)(local_18 + 1);
      pvVar4 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar5) {
        pvVar4 = *(void **)((int)local_2c[0] + -4);
        pnVar5 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar4,pnVar5);
    }
    this = *(SystemManager **)(param_2 + 0x40);
    fVar11 = 0.0;
    piVar6 = *(int **)(this + 0x3c);
    for (iVar7 = *(int *)(this + 0x40) - (int)piVar6 >> 2; iVar7 != 0; iVar7 = iVar7 + -1) {
      iVar9 = *piVar6;
      piVar6 = piVar6 + 1;
      fVar11 = fVar11 + *(float *)(*(int *)(iVar9 + 8) + 200);
    }
    dVar10 = (double)fVar11;
    dVar12 = dVar10;
    SystemManager::totalPowerGeneration(this);
    dVar10 = (double)SUB84(dVar10,0);
    pcVar2 = (char *)strUsingArgs((char *)local_2c,"  `%%PWR Gen`2: %.2fmw/%.2fmw\n",dVar10,dVar12);
    fVar11 = SUB84(dVar10,0);
    local_8._0_1_ = 3;
    pcVar3 = pcVar2;
    if (0xf < *(uint *)(pcVar2 + 0x14)) {
      pcVar3 = *(char **)pcVar2;
    }
    std::basic_string<>::append((basic_string<> *)&local_44,pcVar3,*(uint *)(pcVar2 + 0x10));
    local_8._0_1_ = 0;
    if (0xf < local_18) {
      pnVar5 = (nothrow_t *)(local_18 + 1);
      pvVar4 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar5) {
        pvVar4 = *(void **)((int)local_2c[0] + -4);
        pnVar5 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar4,pnVar5);
    }
    SystemManager::totalPossiblePower(*(SystemManager **)(param_2 + 0x40));
    dVar10 = (double)fVar11;
    dVar12 = dVar10;
    SystemManager::totalCurrentPower(*(SystemManager **)(param_2 + 0x40));
    pcVar2 = (char *)strUsingArgs((char *)local_2c,"  `$PWR Store`2: %.2fmw/%.2fmw\n",
                                  (double)SUB84(dVar10,0),dVar12);
    local_8._0_1_ = 4;
    pcVar3 = pcVar2;
    if (0xf < *(uint *)(pcVar2 + 0x14)) {
      pcVar3 = *(char **)pcVar2;
    }
    std::basic_string<>::append((basic_string<> *)&local_44,pcVar3,*(uint *)(pcVar2 + 0x10));
    local_8._0_1_ = 0;
    if (0xf < local_18) {
      pnVar5 = (nothrow_t *)(local_18 + 1);
      pvVar4 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar5) {
        pvVar4 = *(void **)((int)local_2c[0] + -4);
        pnVar5 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar4,pnVar5);
    }
    SystemManager::totalPowerDrain(*(SystemManager **)(param_2 + 0x40));
    pcVar2 = (char *)strUsingArgs((char *)local_2c);
    local_8._0_1_ = 5;
    pcVar3 = pcVar2;
    if (0xf < *(uint *)(pcVar2 + 0x14)) {
      pcVar3 = *(char **)pcVar2;
    }
    std::basic_string<>::append((basic_string<> *)&local_44,pcVar3,*(uint *)(pcVar2 + 0x10));
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_18) {
      pnVar5 = (nothrow_t *)(local_18 + 1);
      pvVar4 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar5) {
        pvVar4 = *(void **)((int)local_2c[0] + -4);
        pnVar5 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar4,pnVar5);
    }
    iVar7 = *(int *)(param_2 + 0x40);
    uVar8 = 0;
    if (*(int *)(iVar7 + 0x40) - *(int *)(iVar7 + 0x3c) >> 2 != 0) {
      do {
        ComponentInterfaceInstance::getEfficiencyPercent
                  (*(ComponentInterfaceInstance **)
                    (*(int *)(*(int *)(iVar7 + 0x3c) + uVar8 * 4) + 0xc));
        uVar8 = uVar8 + 1;
      } while (uVar8 < (uint)(*(int *)(iVar7 + 0x40) - *(int *)(iVar7 + 0x3c) >> 2));
    }
    pcVar2 = (char *)strUsingArgs((char *)local_2c);
    local_8._0_1_ = 6;
    pcVar3 = pcVar2;
    if (0xf < *(uint *)(pcVar2 + 0x14)) {
      pcVar3 = *(char **)pcVar2;
    }
    std::basic_string<>::append((basic_string<> *)&local_44,pcVar3,*(uint *)(pcVar2 + 0x10));
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_18) {
      pnVar5 = (nothrow_t *)(local_18 + 1);
      pvVar4 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar5) {
        pvVar4 = *(void **)((int)local_2c[0] + -4);
        pnVar5 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar4,pnVar5);
    }
    std::basic_string<>::append((basic_string<> *)&local_44,"\n`0Module State`2:\n\n",0x14);
    iVar9 = 0;
    local_48 = 0;
    iVar7 = *(int *)(param_2 + 0x40);
    if (*(int *)(iVar7 + 0x40) - *(int *)(iVar7 + 0x3c) >> 2 != 0) {
      do {
        piVar6 = *(int **)(*(int *)(iVar7 + 0x3c) + local_48 * 4);
        if (piVar6 != (int *)0x0) {
          if (iVar9 < 1) {
            uVar8 = 5;
            pcVar3 = "     ";
          }
          else {
            uVar8 = 1;
            pcVar3 = " ";
          }
          std::basic_string<>::append((basic_string<> *)&local_44,pcVar3,uVar8);
          if (*(char *)((int)piVar6 + 99) == '\0') {
            pcVar3 = (char *)strUsingArgs((char *)local_2c,"`8%s");
            local_8._0_1_ = 7;
          }
          else {
            cVar1 = (**(code **)(*piVar6 + 0x14))();
            if (cVar1 == '\0') {
              cVar1 = (**(code **)(*piVar6 + 0x18))();
              if (cVar1 == '\0') {
                pcVar3 = (char *)strUsingArgs((char *)local_2c,"`%%%s");
                local_8._0_1_ = 10;
              }
              else {
                pcVar3 = (char *)strUsingArgs((char *)local_2c,"`^%s");
                local_8._0_1_ = 9;
              }
            }
            else {
              pcVar3 = (char *)strUsingArgs((char *)local_2c,"`4%s");
              local_8._0_1_ = 8;
            }
          }
          pcVar2 = pcVar3;
          if (0xf < *(uint *)(pcVar3 + 0x14)) {
            pcVar2 = *(char **)pcVar3;
          }
          std::basic_string<>::append((basic_string<> *)&local_44,pcVar2,*(uint *)(pcVar3 + 0x10));
          local_8 = (uint)local_8._1_3_ << 8;
          if (0xf < local_18) {
            pnVar5 = (nothrow_t *)(local_18 + 1);
            pvVar4 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar5) {
              pvVar4 = *(void **)((int)local_2c[0] + -4);
              pnVar5 = (nothrow_t *)(local_18 + 0x24);
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) goto LAB_004f0690;
            }
            operator_delete(pvVar4,pnVar5);
          }
          iVar9 = iVar9 + 1;
          if (4 < iVar9) {
            iVar9 = 0;
            std::basic_string<>::append((basic_string<> *)&local_44,"\n",1);
          }
        }
        local_48 = local_48 + 1;
        iVar7 = *(int *)(param_2 + 0x40);
      } while (local_48 < (uint)(*(int *)(iVar7 + 0x40) - *(int *)(iVar7 + 0x3c) >> 2));
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(uint *)param_1 = local_44;
    *(undefined4 *)(param_1 + 4) = uStack_40;
    *(undefined4 *)(param_1 + 8) = uStack_3c;
    *(undefined4 *)(param_1 + 0xc) = uStack_38;
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_30,local_34);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getStealthRating(class Ship *,int)

void __cdecl ShipTextData::getStealthRating(Ship *param_1,int param_2)

{
  float fVar1;
  char *pcVar2;
  uint uVar3;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b43b8;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
  }
  else {
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = local_2c & 0xffffff00;
    local_8 = 0;
    if (*(int *)(param_2 + 0xd4) == 3) {
      uVar3 = 1;
      pcVar2 = "0";
    }
    else {
      fVar1 = *(float *)(param_2 + 0xe0);
      if (fVar1 <= 200.0) {
        uVar3 = 1;
        if (fVar1 <= 160.0) {
          if (fVar1 <= 140.0) {
            if (fVar1 <= 120.0) {
              if (fVar1 <= 100.0) {
                if (fVar1 <= 80.0) {
                  if (fVar1 <= 60.0) {
                    if (fVar1 <= 40.0) {
                      if (fVar1 <= 20.0) {
                        pcVar2 = "1";
                      }
                      else {
                        pcVar2 = "2";
                      }
                    }
                    else {
                      pcVar2 = "3";
                    }
                  }
                  else {
                    pcVar2 = "4";
                  }
                }
                else {
                  pcVar2 = "5";
                }
              }
              else {
                pcVar2 = "6";
              }
            }
            else {
              pcVar2 = "7";
            }
          }
          else {
            pcVar2 = "8";
          }
        }
        else {
          pcVar2 = "9";
        }
      }
      else {
        uVar3 = 2;
        pcVar2 = "10";
      }
    }
    std::basic_string<>::append((basic_string<> *)&local_2c,pcVar2,uVar3);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(uint *)param_1 = local_2c;
    *(undefined4 *)(param_1 + 4) = uStack_28;
    *(undefined4 *)(param_1 + 8) = uStack_24;
    *(undefined4 *)(param_1 + 0xc) = uStack_20;
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_18,local_1c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getTubeSummary(class Ship *,int)

void __cdecl ShipTextData::getTubeSummary(Ship *param_1,int param_2)

{
  int iVar1;
  Weapon *this;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  basic_string<> *pbVar6;
  int iVar7;
  char *pcVar8;
  void *pvVar9;
  nothrow_t *pnVar10;
  uint uVar11;
  void *local_5c [5];
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &DAT_005c0f68;
  local_10 = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  if (((param_2 == 0) || (*(int *)(param_2 + 0x1b4) == -1)) ||
     (*(int *)(*(int *)(param_2 + 0x40) + 0x20) == 0)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    goto LAB_004f12c1;
  }
  local_1c = 0;
  uStack_18 = 0xf;
  local_2c = local_2c & 0xffffff00;
  local_8 = 0;
  std::basic_string<>::append((basic_string<> *)&local_2c,"`2Type : ",9);
  iVar1 = *(int *)(*(int *)(param_2 + 0x40) + 0x20);
  this = *(Weapon **)(iVar1 + 0x38 + *(int *)(param_2 + 0x1b4) * 4);
  if (this == (Weapon *)0x0) {
    if ((float)(*(int *)(param_2 + 0x1b4) + -1) < *(float *)(*(int *)(iVar1 + 8) + 0x104)) {
      pcVar8 = "`7unloaded";
      uVar3 = 10;
    }
    else {
      uVar3 = 9;
      pcVar8 = "`8no tube";
    }
LAB_004f129a:
    std::basic_string<>::append((basic_string<> *)&local_2c,pcVar8,uVar3);
  }
  else {
    iVar1 = *(int *)(*(int *)(this + 0x388) + 0x1b4);
    if (iVar1 == 3) {
      uVar11 = 9;
      pcVar8 = "`$Torpedo";
LAB_004f0e17:
      std::basic_string<>::append((basic_string<> *)&local_2c,pcVar8,uVar11);
    }
    else {
      if (iVar1 == 5) {
        pcVar8 = "`@Mine";
        uVar11 = 6;
        goto LAB_004f0e17;
      }
      if (iVar1 == 4) {
        pcVar8 = "`!Probe";
        uVar11 = 7;
        goto LAB_004f0e17;
      }
    }
    puVar4 = (undefined4 *)(*(int *)(this + 0x254) + 0x78);
    if (0xf < *(uint *)(*(int *)(this + 0x254) + 0x8c)) {
      puVar4 = (undefined4 *)*puVar4;
    }
    pcVar5 = (char *)strUsingArgs((char *)local_44,"\n`2Man. : `7%s",puVar4,uVar3);
    local_8._0_1_ = 1;
    pcVar8 = pcVar5;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar8 = *(char **)pcVar5;
    }
    std::basic_string<>::append((basic_string<> *)&local_2c,pcVar8,*(uint *)(pcVar5 + 0x10));
    local_8._0_1_ = 0;
    if (0xf < local_30) {
      pnVar10 = (nothrow_t *)(local_30 + 1);
      pvVar9 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar10) {
        pvVar9 = *(void **)((int)local_44[0] + -4);
        pnVar10 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar9,pnVar10);
    }
    pcVar5 = (char *)strUsingArgs((char *)local_44,"\n`2Type : `7%s");
    local_8._0_1_ = 2;
    pcVar8 = pcVar5;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar8 = *(char **)pcVar5;
    }
    std::basic_string<>::append((basic_string<> *)&local_2c,pcVar8,*(uint *)(pcVar5 + 0x10));
    local_8._0_1_ = 0;
    if (0xf < local_30) {
      pnVar10 = (nothrow_t *)(local_30 + 1);
      pvVar9 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar10) {
        pvVar9 = *(void **)((int)local_44[0] + -4);
        pnVar10 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar9,pnVar10);
    }
    bVar2 = Weapon::isWeapon(this);
    if (bVar2) {
      pbVar6 = (basic_string<> *)strUsingArgs((char *)local_44,"\n`2Wrhd.: `7%s");
      local_8._0_1_ = 3;
      std::basic_string<>::append((basic_string<> *)&local_2c,pbVar6);
      local_8._0_1_ = 0;
      if (0xf < local_30) {
        pnVar10 = (nothrow_t *)(local_30 + 1);
        pvVar9 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar9 = *(void **)((int)local_44[0] + -4);
          pnVar10 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar9,pnVar10);
      }
    }
    iVar1 = *(int *)(*(int *)(param_2 + 0x40) + 0x20);
    iVar7 = ComponentInterfaceInstance::getEfficiencyPercent
                      (*(ComponentInterfaceInstance **)(iVar1 + 0xc));
    Weapon::getCurrentCalculatedPowerPercantage
              (this,(int)(((float)iVar7 / 100.0) * 0.5 *
                         *(float *)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 0x20) + 8) + 0x108)));
    pcVar5 = (char *)strUsingArgs((char *)local_44,"\n`2Batt.: `$%d%%");
    local_8._0_1_ = 4;
    pcVar8 = pcVar5;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar8 = *(char **)pcVar5;
    }
    std::basic_string<>::append((basic_string<> *)&local_2c,pcVar8,*(uint *)(pcVar5 + 0x10));
    local_8._0_1_ = 0;
    if (0xf < local_30) {
      pnVar10 = (nothrow_t *)(local_30 + 1);
      pvVar9 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar10) {
        pvVar9 = *(void **)((int)local_44[0] + -4);
        pnVar10 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar9,pnVar10);
    }
    pcVar5 = (char *)strUsingArgs((char *)local_44,"\n`2Targ.: %s");
    local_8._0_1_ = 5;
    pcVar8 = pcVar5;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar8 = *(char **)pcVar5;
    }
    std::basic_string<>::append((basic_string<> *)&local_2c,pcVar8,*(uint *)(pcVar5 + 0x10));
    local_8._0_1_ = 0;
    if (0xf < local_30) {
      pnVar10 = (nothrow_t *)(local_30 + 1);
      pvVar9 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar10) {
        pvVar9 = *(void **)((int)local_44[0] + -4);
        pnVar10 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar9,pnVar10);
    }
    Weapon::getSolutionString(this);
    local_8._0_1_ = 6;
    pcVar5 = (char *)strUsingArgs((char *)local_44,"\n`2Soln.: %s");
    local_8._0_1_ = 7;
    pcVar8 = pcVar5;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar8 = *(char **)pcVar5;
    }
    std::basic_string<>::append((basic_string<> *)&local_2c,pcVar8,*(uint *)(pcVar5 + 0x10));
    local_8._0_1_ = 6;
    if (0xf < local_30) {
      pnVar10 = (nothrow_t *)(local_30 + 1);
      pvVar9 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar10) {
        pvVar9 = *(void **)((int)local_44[0] + -4);
        pnVar10 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar9,pnVar10);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    if (0xf < local_48) {
      pnVar10 = (nothrow_t *)(local_48 + 1);
      pvVar9 = local_5c[0];
      if ((nothrow_t *)0xfff < pnVar10) {
        pvVar9 = *(void **)((int)local_5c[0] + -4);
        pnVar10 = (nothrow_t *)(local_48 + 0x24);
        if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar9,pnVar10);
    }
    std::basic_string<>::append((basic_string<> *)&local_2c,"\n`2State: ",10);
    if (*(int *)(this + 0x3d0) == 0) {
      bVar2 = Weapon::isSpinningUp(this);
      if (bVar2) {
        uVar3 = 6;
        pcVar8 = "`0idle";
      }
      else if (this[0x3bc] == (Weapon)0x0) {
        uVar3 = 6;
        pcVar8 = "`0idle";
      }
      else {
        uVar3 = 5;
        pcVar8 = "`@rtl";
      }
LAB_004f11c8:
      std::basic_string<>::append((basic_string<> *)&local_2c,pcVar8,uVar3);
    }
    else if (*(int *)(this + 0x3d0) == 1) {
      pcVar8 = "`!travelling";
      uVar3 = 0xc;
      goto LAB_004f11c8;
    }
    if (this[0x3fc] != (Weapon)0x0) {
      std::basic_string<>::append((basic_string<> *)&local_2c,"\n`2Link : `#active",0x12);
    }
    if (this[0x3c4] != (Weapon)0x0) {
      if (*(float *)(this + 0x41c) == -1.0) {
        uVar3 = 0xf;
        pcVar8 = "\n`2DTT. : `%n/a";
        goto LAB_004f129a;
      }
      pbVar6 = (basic_string<> *)
               strUsingArgs((char *)local_5c,"\n`2DTT. : `$%.2fGm",(double)*(float *)(this + 0x41c))
      ;
      local_8 = CONCAT31(local_8._1_3_,8);
      std::basic_string<>::append((basic_string<> *)&local_2c,pbVar6);
      if (0xf < local_48) {
        pnVar10 = (nothrow_t *)(local_48 + 1);
        pvVar9 = local_5c[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar9 = *(void **)((int)local_5c[0] + -4);
          pnVar10 = (nothrow_t *)(local_48 + 0x24);
          if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar9,pnVar10);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(uint *)param_1 = local_2c;
  *(undefined4 *)(param_1 + 4) = uStack_28;
  *(undefined4 *)(param_1 + 8) = uStack_24;
  *(undefined4 *)(param_1 + 0xc) = uStack_20;
  *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_18,local_1c);
LAB_004f12c1:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getTubeAdvancedSummary(class Ship *,int)

void __cdecl ShipTextData::getTubeAdvancedSummary(Ship *param_1,int param_2)

{
  int *piVar1;
  Weapon *this;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  basic_string<> *pbVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  void *pvVar10;
  nothrow_t *pnVar11;
  uint uVar12;
  void *local_5c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c0ff1;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar4 = false;
  if ((((param_2 == 0) || (*(int *)(param_2 + 0x1b4) == -1)) ||
      (piVar1 = *(int **)(*(int *)(param_2 + 0x40) + 0x20), piVar1 == (int *)0x0)) ||
     ((cVar2 = (**(code **)(*piVar1 + 0x10))(0,local_14), cVar2 == '\0' ||
      (cVar2 = (**(code **)(**(int **)(*(int *)(param_2 + 0x40) + 0x20) + 0x1c))(), cVar2 == '\0')))
     ) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
  }
  else {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    local_8 = 0;
    this = *(Weapon **)
            (*(int *)(*(int *)(param_2 + 0x40) + 0x20) + 0x38 + *(int *)(param_2 + 0x1b4) * 4);
    if (this == (Weapon *)0x0) {
      pcVar8 = "n/a";
    }
    else {
      pcVar8 = (char *)(this + 0x238);
      if (0xf < *(uint *)(this + 0x24c)) {
        pcVar8 = *(char **)pcVar8;
      }
    }
    uVar5 = 0x38;
    if (this != (Weapon *)0x0) {
      uVar5 = 0x25;
    }
    pbVar6 = (basic_string<> *)strUsingArgs((char *)local_44,"`2Reg. : `%c%s\n",uVar5,pcVar8);
    local_8._0_1_ = 1;
    std::basic_string<>::append((basic_string<> *)local_2c,pbVar6);
    local_8._0_1_ = 0;
    if (0xf < local_30) {
      pnVar11 = (nothrow_t *)(local_30 + 1);
      pvVar10 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar10 = *(void **)((int)local_44[0] + -4);
        pnVar11 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar11);
    }
    if (this == (Weapon *)0x0) {
      pcVar8 = "n/a";
    }
    else {
      pcVar8 = *(char **)(this + 0x254);
      if (0xf < *(uint *)((int)pcVar8 + 0x14)) {
        pcVar8 = *(char **)pcVar8;
      }
    }
    iVar7 = 0x38 - (uint)(this != (Weapon *)0x0);
    pbVar6 = (basic_string<> *)strUsingArgs((char *)local_44,"`2Type : `%c%s\n",iVar7,pcVar8);
    local_8._0_1_ = 2;
    std::basic_string<>::append((basic_string<> *)local_2c,pbVar6);
    local_8._0_1_ = 0;
    if (0xf < local_30) {
      pnVar11 = (nothrow_t *)(local_30 + 1);
      pvVar10 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar10 = *(void **)((int)local_44[0] + -4);
        pnVar11 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar11);
    }
    if (this == (Weapon *)0x0) {
      std::basic_string<>::append((basic_string<> *)local_2c,"`2Wrhd : `8n/a\n",0xf);
      std::basic_string<>::append((basic_string<> *)local_2c,"`2Batt.: `8n/a\n",0xf);
      pcVar8 = "`8n/a";
    }
    else {
      bVar3 = Weapon::isWeapon(this);
      if (bVar3) {
        pbVar6 = (basic_string<> *)
                 strUsingArgs((char *)local_44,"`2Wrhd : `%c%s\n",iVar7,
                              (&PTR_s_Explosive_005e15f8)[*(int *)(*(int *)(this + 0x388) + 0x194)])
        ;
        local_8._0_1_ = 3;
        std::basic_string<>::append((basic_string<> *)local_2c,pbVar6);
        local_8._0_1_ = 0;
        if (0xf < local_30) {
          pnVar11 = (nothrow_t *)(local_30 + 1);
          pvVar10 = local_44[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            pvVar10 = *(void **)((int)local_44[0] + -4);
            pnVar11 = (nothrow_t *)(local_30 + 0x24);
            if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar10,pnVar11);
        }
      }
      else {
        std::basic_string<>::append((basic_string<> *)local_2c,"`2Wrhd : `!Probe\n",0x11);
      }
      iVar7 = *(int *)(*(int *)(param_2 + 0x40) + 0x20);
      iVar9 = ComponentInterfaceInstance::getEfficiencyPercent
                        (*(ComponentInterfaceInstance **)(iVar7 + 0xc));
      iVar7 = Weapon::getCurrentCalculatedPowerPercantage
                        (this,(int)(((float)iVar9 / 100.0) * 0.5 *
                                   *(float *)(*(int *)(*(int *)(*(int *)(iVar7 + 4) + 0x20) + 8) +
                                             0x108)));
      pbVar6 = (basic_string<> *)strUsingArgs((char *)local_44,"`2Batt.: `$%d%%\n",iVar7);
      local_8._0_1_ = 4;
      std::basic_string<>::append((basic_string<> *)local_2c,pbVar6);
      local_8._0_1_ = 0;
      if (0xf < local_30) {
        pnVar11 = (nothrow_t *)(local_30 + 1);
        pvVar10 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar10 = *(void **)((int)local_44[0] + -4);
          pnVar11 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar10,pnVar11);
      }
      pcVar8 = (char *)(this + 0x400);
      if (0xf < *(uint *)(this + 0x414)) {
        pcVar8 = *(char **)pcVar8;
      }
    }
    pbVar6 = (basic_string<> *)strUsingArgs((char *)local_44,"`2Targ.: %s\n",pcVar8);
    local_8._0_1_ = 5;
    std::basic_string<>::append((basic_string<> *)local_2c,pbVar6);
    local_8._0_1_ = 0;
    if (0xf < local_30) {
      pnVar11 = (nothrow_t *)(local_30 + 1);
      pvVar10 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar10 = *(void **)((int)local_44[0] + -4);
        pnVar11 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar11);
    }
    if (this == (Weapon *)0x0) {
      pcVar8 = "`8n/a";
    }
    else {
      pcVar8 = (char *)Weapon::getSolutionString(this);
      local_8._0_1_ = 6;
      bVar4 = true;
      if (0xf < *(uint *)(pcVar8 + 0x14)) {
        pcVar8 = *(char **)pcVar8;
      }
    }
    pbVar6 = (basic_string<> *)strUsingArgs((char *)local_44,"`2Soln.: %s\n",pcVar8);
    local_8 = 7;
    std::basic_string<>::append((basic_string<> *)local_2c,pbVar6);
    local_8 = CONCAT31(local_8._1_3_,6);
    if (0xf < local_30) {
      pnVar11 = (nothrow_t *)(local_30 + 1);
      pvVar10 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar10 = *(void **)((int)local_44[0] + -4);
        pnVar11 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar11);
    }
    local_8 = 0;
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    if ((bVar4) && (0xf < local_48)) {
      pnVar11 = (nothrow_t *)(local_48 + 1);
      pvVar10 = local_5c;
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar10 = *(void **)((int)local_5c + -4);
        pnVar11 = (nothrow_t *)(local_48 + 0x24);
        if (0x1f < (uint)((int)local_5c + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar11);
    }
    std::basic_string<>::append((basic_string<> *)local_2c,"`2State: ",9);
    if (this == (Weapon *)0x0) {
      uVar12 = 10;
      pcVar8 = "`8unloaded";
    }
    else {
      iVar7 = *(int *)(this + 0x3d0);
      if (iVar7 == 0) {
        bVar4 = Weapon::isSpinningUp(this);
        if (bVar4) {
          uVar12 = 6;
          pcVar8 = "`0idle";
        }
        else if (this[0x3bc] == (Weapon)0x0) {
          uVar12 = 6;
          pcVar8 = "`0idle";
        }
        else {
          uVar12 = 0x11;
          if (*(int *)(*(int *)(this + 0x388) + 0x1b4) == 4) {
            pcVar8 = "`!ready to launch";
          }
          else {
            pcVar8 = "`@ready to launch";
          }
        }
      }
      else if (iVar7 == 1) {
        uVar12 = 0xd;
        pcVar8 = "`!travelling\n";
      }
      else if (iVar7 == 2) {
        uVar12 = 8;
        pcVar8 = "`@active";
      }
      else if ((float)(*(int *)(param_2 + 0x1b4) + -1) <
               *(float *)(*(int *)(*(int *)(*(int *)(param_2 + 0x40) + 0x20) + 8) + 0x104)) {
        uVar12 = 10;
        pcVar8 = "`7unloaded";
      }
      else {
        uVar12 = 9;
        pcVar8 = "`8no tube";
      }
    }
    std::basic_string<>::append((basic_string<> *)local_2c,pcVar8,uVar12);
    std::basic_string<>::basic_string<>((basic_string<> *)param_1,(basic_string<> *)local_2c);
    if (0xf < local_18) {
      pnVar11 = (nothrow_t *)(local_18 + 1);
      pvVar10 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar10 = *(void **)((int)local_2c[0] + -4);
        pnVar11 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar11);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getSSName(class Ship *,int)

Ship * __cdecl ShipTextData::getSSName(Ship *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  
  iVar1 = *(int *)(param_2 + 0x178);
  piVar2 = (int *)(iVar1 + 8);
  if (0xf < *(uint *)(iVar1 + 0x1c)) {
    piVar2 = (int *)*piVar2;
  }
  if (*(int *)(iVar1 + 0x390) == 0) {
    cVar3 = '%';
  }
  else {
    cVar3 = *(char *)(*(int *)(iVar1 + 0x390) + 4);
  }
  strUsingArgs((char *)param_1,"`%c%s\n",(int)cVar3,piVar2);
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getSSDockingBayString(class Ship *,int)

void __cdecl ShipTextData::getSSDockingBayString(Ship *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 *puVar7;
  void *pvVar8;
  nothrow_t *pnVar9;
  void *local_44 [5];
  uint local_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &DAT_005c1048;
  local_10 = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  if ((param_2 == 0) || (iVar1 = *(int *)(param_2 + 0x178), iVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
  }
  else {
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = local_2c & 0xffffff00;
    std::basic_string<>::assign((basic_string<> *)&local_2c,"",0);
    local_8 = 0;
    if (*(char *)(iVar1 + 0x388) == '\0') {
      iVar2 = *(int *)(iVar1 + 0x390);
      if (iVar2 == 0) {
        pcVar6 = "independent";
      }
      else {
        pcVar6 = (char *)(iVar2 + 0x20);
        if (0xf < *(uint *)(iVar2 + 0x34)) {
          pcVar6 = *(char **)pcVar6;
        }
      }
      puVar7 = (undefined4 *)(iVar1 + 0x39c);
      if (0xf < *(uint *)(iVar1 + 0x3b0)) {
        puVar7 = (undefined4 *)*puVar7;
      }
      pcVar5 = " ";
      if (iVar2 == 0) {
        pcVar5 = "n ";
      }
      pcVar5 = (char *)strUsingArgs((char *)local_44,"`7Welcome! This is a%s%s facility.\n\n%s",
                                    pcVar5,pcVar6,puVar7,uVar3);
      local_8 = CONCAT31(local_8._1_3_,4);
      pcVar6 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar6 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)&local_2c,pcVar6,*(uint *)(pcVar5 + 0x10));
      if (0xf < local_30) {
        pnVar9 = (nothrow_t *)(local_30 + 1);
        pvVar8 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar8 = *(void **)((int)local_44[0] + -4);
          pnVar9 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar8,pnVar9);
      }
    }
    else {
      std::basic_string<>::append((basic_string<> *)&local_2c,"`!Welcome to\n",0xd);
      piVar4 = (int *)(iVar1 + 8);
      if (0xf < *(uint *)(iVar1 + 0x1c)) {
        piVar4 = (int *)*piVar4;
      }
      pcVar5 = (char *)strUsingArgs((char *)local_44,"`$%s\n",piVar4);
      local_8._0_1_ = 1;
      pcVar6 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar6 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)&local_2c,pcVar6,*(uint *)(pcVar5 + 0x10));
      local_8._0_1_ = 0;
      if (0xf < local_30) {
        pnVar9 = (nothrow_t *)(local_30 + 1);
        pvVar8 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar8 = *(void **)((int)local_44[0] + -4);
          pnVar9 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar8,pnVar9);
      }
      iVar1 = *(int *)(iVar1 + 0x390);
      if (iVar1 == 0) {
        pcVar6 = "Independent";
      }
      else {
        pcVar6 = (char *)(iVar1 + 0x20);
        if (0xf < *(uint *)(iVar1 + 0x34)) {
          pcVar6 = *(char **)pcVar6;
        }
      }
      pcVar5 = " ";
      if (iVar1 == 0) {
        pcVar5 = "n ";
      }
      pcVar5 = (char *)strUsingArgs((char *)local_44,"`7A%s%s Facility\n",pcVar5,pcVar6);
      local_8._0_1_ = 2;
      pcVar6 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar6 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)&local_2c,pcVar6,*(uint *)(pcVar5 + 0x10));
      local_8._0_1_ = 0;
      if (0xf < local_30) {
        pnVar9 = (nothrow_t *)(local_30 + 1);
        pvVar8 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar8 = *(void **)((int)local_44[0] + -4);
          pnVar9 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar8,pnVar9);
      }
      std::basic_string<>::append((basic_string<> *)&local_2c,"`%Docking Port 4A-4C ->\n",0x18);
      std::basic_string<>::append((basic_string<> *)&local_2c,"`%<- Main Promenade\n",0x14);
      puVar7 = (undefined4 *)(param_2 + 8);
      if (0xf < *(uint *)(param_2 + 0x1c)) {
        puVar7 = (undefined4 *)*puVar7;
      }
      pcVar5 = (char *)strUsingArgs((char *)local_44,"`%%4A: `7%s\n",puVar7);
      local_8._0_1_ = 3;
      pcVar6 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar6 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)&local_2c,pcVar6,*(uint *)(pcVar5 + 0x10));
      local_8 = (uint)local_8._1_3_ << 8;
      if (0xf < local_30) {
        pnVar9 = (nothrow_t *)(local_30 + 1);
        pvVar8 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar8 = *(void **)((int)local_44[0] + -4);
          pnVar9 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar8,pnVar9);
      }
      std::basic_string<>::append((basic_string<> *)&local_2c,"`%4B: `7empty\n",0xe);
      std::basic_string<>::append((basic_string<> *)&local_2c,"`%4C: `7empty",0xd);
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(uint *)param_1 = local_2c;
    *(undefined4 *)(param_1 + 4) = uStack_28;
    *(undefined4 *)(param_1 + 8) = uStack_24;
    *(undefined4 *)(param_1 + 0xc) = uStack_20;
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_18,local_1c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getSSDockingPermit(class Ship *,int)

void __cdecl ShipTextData::getSSDockingPermit(Ship *param_1,int param_2)

{
  SpaceStation *this;
  char *pcVar1;
  basic_string<> *pbVar2;
  char *pcVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  undefined4 uStack_88;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &DAT_005c10d8;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 != 0) && (this = *(SpaceStation **)(param_2 + 0x178), this != (SpaceStation *)0x0)) {
    bVar6 = false;
    if (*(int *)(this + 0x254) != 0) {
      bVar6 = *(int *)(*(int *)(this + 0x254) + 0x158) == 1;
    }
    if ((bVar6) && (*(int *)(this + 0x390) != 0)) {
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      std::basic_string<>::assign((basic_string<> *)local_44,"",0);
      local_8 = 0;
      uStack_88 = 0x4f1cf1;
      pcVar1 = (char *)strUsingArgs((char *)local_2c);
      local_8._0_1_ = 1;
      pcVar3 = pcVar1;
      if (0xf < *(uint *)(pcVar1 + 0x14)) {
        pcVar3 = *(char **)pcVar1;
      }
      std::basic_string<>::append((basic_string<> *)local_44,pcVar3,*(uint *)(pcVar1 + 0x10));
      local_8._0_1_ = 0;
      if (0xf < local_18) {
        pnVar5 = (nothrow_t *)(local_18 + 1);
        pvVar4 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)local_2c[0] + -4);
          pnVar5 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      std::basic_string<>::append((basic_string<> *)local_44,"`!Docked Vessel\n\n",0x11);
      pcVar1 = (char *)strUsingArgs((char *)local_2c);
      local_8._0_1_ = 2;
      pcVar3 = pcVar1;
      if (0xf < *(uint *)(pcVar1 + 0x14)) {
        pcVar3 = *(char **)pcVar1;
      }
      std::basic_string<>::append((basic_string<> *)local_44,pcVar3,*(uint *)(pcVar1 + 0x10));
      local_8._0_1_ = 0;
      if (0xf < local_18) {
        pnVar5 = (nothrow_t *)(local_18 + 1);
        pvVar4 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)local_2c[0] + -4);
          pnVar5 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      pcVar1 = (char *)strUsingArgs((char *)local_2c);
      local_8._0_1_ = 3;
      pcVar3 = pcVar1;
      if (0xf < *(uint *)(pcVar1 + 0x14)) {
        pcVar3 = *(char **)pcVar1;
      }
      std::basic_string<>::append((basic_string<> *)local_44,pcVar3,*(uint *)(pcVar1 + 0x10));
      local_8._0_1_ = 0;
      if (0xf < local_18) {
        pnVar5 = (nothrow_t *)(local_18 + 1);
        pvVar4 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)local_2c[0] + -4);
          pnVar5 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      pcVar1 = (char *)strUsingArgs((char *)local_2c);
      local_8._0_1_ = 4;
      pcVar3 = pcVar1;
      if (0xf < *(uint *)(pcVar1 + 0x14)) {
        pcVar3 = *(char **)pcVar1;
      }
      std::basic_string<>::append((basic_string<> *)local_44,pcVar3,*(uint *)(pcVar1 + 0x10));
      local_8._0_1_ = 0;
      if (0xf < local_18) {
        pnVar5 = (nothrow_t *)(local_18 + 1);
        pvVar4 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)local_2c[0] + -4);
          pnVar5 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      pcVar1 = (char *)strUsingArgs((char *)local_2c);
      local_8._0_1_ = 5;
      pcVar3 = pcVar1;
      if (0xf < *(uint *)(pcVar1 + 0x14)) {
        pcVar3 = *(char **)pcVar1;
      }
      std::basic_string<>::append((basic_string<> *)local_44,pcVar3,*(uint *)(pcVar1 + 0x10));
      local_8._0_1_ = 0;
      if (0xf < local_18) {
        pnVar5 = (nothrow_t *)(local_18 + 1);
        pvVar4 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)local_2c[0] + -4);
          pnVar5 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      pcVar1 = (char *)strUsingArgs((char *)local_2c);
      local_8._0_1_ = 6;
      pcVar3 = pcVar1;
      if (0xf < *(uint *)(pcVar1 + 0x14)) {
        pcVar3 = *(char **)pcVar1;
      }
      std::basic_string<>::append((basic_string<> *)local_44,pcVar3,*(uint *)(pcVar1 + 0x10));
      local_8._0_1_ = 0;
      if (0xf < local_18) {
        pnVar5 = (nothrow_t *)(local_18 + 1);
        pvVar4 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)local_2c[0] + -4);
          pnVar5 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      pcVar1 = (char *)strUsingArgs((char *)local_2c);
      local_8._0_1_ = 7;
      pcVar3 = pcVar1;
      if (0xf < *(uint *)(pcVar1 + 0x14)) {
        pcVar3 = *(char **)pcVar1;
      }
      std::basic_string<>::append((basic_string<> *)local_44,pcVar3,*(uint *)(pcVar1 + 0x10));
      local_8._0_1_ = 0;
      if (0xf < local_18) {
        pnVar5 = (nothrow_t *)(local_18 + 1);
        pvVar4 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)local_2c[0] + -4);
          pnVar5 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&uStack_88,(basic_string<> *)(param_2 + 0x238));
      local_8._0_1_ = 8;
      Singleton<>::getInstance();
      local_8._0_1_ = 0;
      NameManager::getLocationForRego();
      local_8._0_1_ = 9;
      pcVar1 = (char *)strUsingArgs((char *)local_5c);
      local_8._0_1_ = 10;
      pcVar3 = pcVar1;
      if (0xf < *(uint *)(pcVar1 + 0x14)) {
        pcVar3 = *(char **)pcVar1;
      }
      std::basic_string<>::append((basic_string<> *)local_44,pcVar3,*(uint *)(pcVar1 + 0x10));
      local_8._0_1_ = 9;
      if (0xf < local_48) {
        pnVar5 = (nothrow_t *)(local_48 + 1);
        pvVar4 = local_5c[0];
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)local_5c[0] + -4);
          pnVar5 = (nothrow_t *)(local_48 + 0x24);
          if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_4c = 0;
      local_48 = 0xf;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
      if (0xf < local_18) {
        pnVar5 = (nothrow_t *)(local_18 + 1);
        pvVar4 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)local_2c[0] + -4);
          pnVar5 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      if ((*(char *)(*(int *)(param_2 + 0x254) + 0xe0) != '\0') &&
         (g_gameLogic[0x11d] == (GameLogic)0x0)) {
        std::basic_string<>::append((basic_string<> *)local_44,"\n`$** INVALID REGO **",0x15);
      }
      std::basic_string<>::append((basic_string<> *)local_44,"\n\n",2);
      bVar6 = SpaceStation::shipHasDockingClearance(this,(Ship *)param_2);
      if (bVar6) {
        pbVar2 = (basic_string<> *)strUsingArgs((char *)local_2c);
        local_8 = CONCAT31(local_8._1_3_,0xb);
LAB_004f2169:
        std::basic_string<>::append((basic_string<> *)local_44,pbVar2);
        if (0xf < local_18) {
          pnVar5 = (nothrow_t *)(local_18 + 1);
          pvVar4 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar5) {
            pvVar4 = *(void **)((int)local_2c[0] + -4);
            pnVar5 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) goto LAB_004f2198;
          }
          operator_delete(pvVar4,pnVar5);
        }
      }
      else {
        if (0 < (int)*(float *)(*(int *)(this + 0x390) + 0xd0)) {
          pbVar2 = (basic_string<> *)strUsingArgs((char *)local_2c);
          local_8 = CONCAT31(local_8._1_3_,0xc);
          goto LAB_004f2169;
        }
        std::basic_string<>::append
                  ((basic_string<> *)local_44,
                   "`%No fees are owed. Permission must be requested before undocking your vessel.",
                   0x4e);
      }
      std::basic_string<>::basic_string<>((basic_string<> *)param_1,(basic_string<> *)local_44);
      if (0xf < local_30) {
        pnVar5 = (nothrow_t *)(local_30 + 1);
        pvVar4 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)local_44[0] + -4);
          pnVar5 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4))) {
LAB_004f2198:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      goto LAB_004f223f;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (Ship)0x0;
  std::basic_string<>::assign((basic_string<> *)param_1,"",0);
LAB_004f223f:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getSSRegistration(class Ship *,int)

void __cdecl ShipTextData::getSSRegistration(Ship *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  basic_string<> abStack_84 [8];
  undefined4 uStack_7c;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &DAT_005c1148;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 != 0) && (*(int *)(param_2 + 0x178) != 0)) {
    iVar1 = *(int *)(*(int *)(param_2 + 0x178) + 0x254);
    bVar6 = false;
    if (iVar1 != 0) {
      bVar6 = *(int *)(iVar1 + 0x158) == 1;
    }
    if (bVar6) {
      local_34 = 0;
      uStack_30 = 0xf;
      local_44 = local_44 & 0xffffff00;
      std::basic_string<>::assign((basic_string<> *)&local_44,"",0);
      local_8 = 0;
      std::basic_string<>::append((basic_string<> *)&local_44,"`!Docked Vessel\n\n",0x11);
      uStack_7c = 0x4f2318;
      pcVar2 = (char *)strUsingArgs((char *)local_2c);
      local_8._0_1_ = 1;
      pcVar3 = pcVar2;
      if (0xf < *(uint *)(pcVar2 + 0x14)) {
        pcVar3 = *(char **)pcVar2;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar3,*(uint *)(pcVar2 + 0x10));
      local_8._0_1_ = 0;
      if (0xf < local_18) {
        pnVar5 = (nothrow_t *)(local_18 + 1);
        pvVar4 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)local_2c[0] + -4);
          pnVar5 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      uStack_7c = 0x4f2393;
      pcVar2 = (char *)strUsingArgs((char *)local_2c);
      local_8._0_1_ = 2;
      pcVar3 = pcVar2;
      if (0xf < *(uint *)(pcVar2 + 0x14)) {
        pcVar3 = *(char **)pcVar2;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar3,*(uint *)(pcVar2 + 0x10));
      local_8._0_1_ = 0;
      if (0xf < local_18) {
        pnVar5 = (nothrow_t *)(local_18 + 1);
        pvVar4 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)local_2c[0] + -4);
          pnVar5 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      uStack_7c = 0x4f240a;
      pcVar2 = (char *)strUsingArgs((char *)local_2c);
      local_8._0_1_ = 3;
      pcVar3 = pcVar2;
      if (0xf < *(uint *)(pcVar2 + 0x14)) {
        pcVar3 = *(char **)pcVar2;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar3,*(uint *)(pcVar2 + 0x10));
      local_8._0_1_ = 0;
      if (0xf < local_18) {
        pnVar5 = (nothrow_t *)(local_18 + 1);
        pvVar4 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)local_2c[0] + -4);
          pnVar5 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      uStack_7c = 0x4f2481;
      pcVar2 = (char *)strUsingArgs((char *)local_2c);
      local_8._0_1_ = 4;
      pcVar3 = pcVar2;
      if (0xf < *(uint *)(pcVar2 + 0x14)) {
        pcVar3 = *(char **)pcVar2;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar3,*(uint *)(pcVar2 + 0x10));
      local_8._0_1_ = 0;
      if (0xf < local_18) {
        pnVar5 = (nothrow_t *)(local_18 + 1);
        pvVar4 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)local_2c[0] + -4);
          pnVar5 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      uStack_7c = 0x4f24f8;
      pcVar2 = (char *)strUsingArgs((char *)local_2c);
      local_8._0_1_ = 5;
      pcVar3 = pcVar2;
      if (0xf < *(uint *)(pcVar2 + 0x14)) {
        pcVar3 = *(char **)pcVar2;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar3,*(uint *)(pcVar2 + 0x10));
      local_8._0_1_ = 0;
      if (0xf < local_18) {
        pnVar5 = (nothrow_t *)(local_18 + 1);
        pvVar4 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)local_2c[0] + -4);
          pnVar5 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      std::basic_string<>::basic_string<>(abStack_84,(basic_string<> *)(param_2 + 0x238));
      local_8._0_1_ = 6;
      Singleton<>::getInstance();
      local_8._0_1_ = 0;
      NameManager::getLocationForRego();
      local_8._0_1_ = 7;
      uStack_7c = 0x4f2594;
      pcVar2 = (char *)strUsingArgs((char *)local_5c);
      local_8._0_1_ = 8;
      pcVar3 = pcVar2;
      if (0xf < *(uint *)(pcVar2 + 0x14)) {
        pcVar3 = *(char **)pcVar2;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar3,*(uint *)(pcVar2 + 0x10));
      local_8._0_1_ = 7;
      if (0xf < local_48) {
        pnVar5 = (nothrow_t *)(local_48 + 1);
        pvVar4 = local_5c[0];
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)local_5c[0] + -4);
          pnVar5 = (nothrow_t *)(local_48 + 0x24);
          if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_4c = 0;
      local_48 = 0xf;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
      if (0xf < local_18) {
        pnVar5 = (nothrow_t *)(local_18 + 1);
        pvVar4 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)local_2c[0] + -4);
          pnVar5 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      if ((*(char *)(*(int *)(param_2 + 0x254) + 0xe0) != '\0') &&
         (g_gameLogic[0x11d] == (GameLogic)0x0)) {
        std::basic_string<>::append((basic_string<> *)&local_44,"\n`$** INVALID REGO **",0x15);
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(uint *)param_1 = local_44;
      *(undefined4 *)(param_1 + 4) = uStack_40;
      *(undefined4 *)(param_1 + 8) = uStack_3c;
      *(undefined4 *)(param_1 + 0xc) = uStack_38;
      *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_30,local_34);
      goto LAB_004f26b5;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (Ship)0x0;
  std::basic_string<>::assign((basic_string<> *)param_1,"",0);
LAB_004f26b5:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getSSChangeDetails(class Ship *,int)

void __cdecl ShipTextData::getSSChangeDetails(Ship *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  basic_string<> local_84 [8];
  undefined4 uStack_7c;
  void *local_5c [5];
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &DAT_005c11a0;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 != 0) && (*(int *)(param_2 + 0x178) != 0)) {
    iVar1 = *(int *)(*(int *)(param_2 + 0x178) + 0x254);
    bVar6 = false;
    if (iVar1 != 0) {
      bVar6 = *(int *)(iVar1 + 0x158) == 1;
    }
    if (bVar6) {
      local_1c = 0;
      uStack_18 = 0xf;
      local_2c = local_2c & 0xffffff00;
      std::basic_string<>::assign((basic_string<> *)&local_2c,"",0);
      local_8 = 0;
      local_84[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_84,"",0);
      bVar6 = ShipData::checkCanChangeDetails(param_2,0);
      if (bVar6) {
        uStack_7c = 0x4f27b7;
        pcVar2 = (char *)strUsingArgs((char *)local_44);
        local_8._0_1_ = 1;
        pcVar3 = pcVar2;
        if (0xf < *(uint *)(pcVar2 + 0x14)) {
          pcVar3 = *(char **)pcVar2;
        }
        std::basic_string<>::append((basic_string<> *)&local_2c,pcVar3,*(uint *)(pcVar2 + 0x10));
        local_8._0_1_ = 0;
        if (0xf < local_30) {
          pnVar5 = (nothrow_t *)(local_30 + 1);
          pvVar4 = local_44[0];
          if ((nothrow_t *)0xfff < pnVar5) {
            pvVar4 = *(void **)((int)local_44[0] + -4);
            pnVar5 = (nothrow_t *)(local_30 + 0x24);
            if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar4,pnVar5);
        }
        std::basic_string<>::basic_string<>(local_84,(basic_string<> *)(param_2 + 0x238));
        local_8._0_1_ = 2;
        Singleton<>::getInstance();
        local_8._0_1_ = 0;
        NameManager::getLocationForRego();
        local_8._0_1_ = 3;
        uStack_7c = 0x4f2853;
        pcVar2 = (char *)strUsingArgs((char *)local_44);
        local_8._0_1_ = 4;
        pcVar3 = pcVar2;
        if (0xf < *(uint *)(pcVar2 + 0x14)) {
          pcVar3 = *(char **)pcVar2;
        }
        std::basic_string<>::append((basic_string<> *)&local_2c,pcVar3,*(uint *)(pcVar2 + 0x10));
        local_8._0_1_ = 3;
        if (0xf < local_30) {
          pnVar5 = (nothrow_t *)(local_30 + 1);
          pvVar4 = local_44[0];
          if ((nothrow_t *)0xfff < pnVar5) {
            pvVar4 = *(void **)((int)local_44[0] + -4);
            pnVar5 = (nothrow_t *)(local_30 + 0x24);
            if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar4,pnVar5);
        }
        local_8 = (uint)local_8._1_3_ << 8;
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        if (0xf < local_48) {
          pnVar5 = (nothrow_t *)(local_48 + 1);
          pvVar4 = local_5c[0];
          if ((nothrow_t *)0xfff < pnVar5) {
            pnVar5 = (nothrow_t *)(local_48 + 0x24);
            pvVar4 = *(void **)((int)local_5c[0] + -4);
            if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)*(void **)((int)local_5c[0] + -4)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
LAB_004f2946:
          operator_delete(pvVar4,pnVar5);
        }
      }
      else {
        uStack_7c = 0x4f28f9;
        pcVar2 = (char *)strUsingArgs((char *)local_5c);
        local_8._0_1_ = 5;
        pcVar3 = pcVar2;
        if (0xf < *(uint *)(pcVar2 + 0x14)) {
          pcVar3 = *(char **)pcVar2;
        }
        std::basic_string<>::append((basic_string<> *)&local_2c,pcVar3,*(uint *)(pcVar2 + 0x10));
        local_8 = (uint)local_8._1_3_ << 8;
        if (0xf < local_48) {
          pnVar5 = (nothrow_t *)(local_48 + 1);
          pvVar4 = local_5c[0];
          if ((nothrow_t *)0xfff < pnVar5) {
            pvVar4 = *(void **)((int)local_5c[0] + -4);
            pnVar5 = (nothrow_t *)(local_48 + 0x24);
            if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          goto LAB_004f2946;
        }
      }
      if (*(char *)(*(int *)(param_2 + 0x254) + 0xe0) != '\0') {
        std::basic_string<>::append
                  ((basic_string<> *)&local_2c,
                   "\n\n`$Warning: vessel does not have valid registration; details cannot be changed."
                   ,0x50);
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(uint *)param_1 = local_2c;
      *(undefined4 *)(param_1 + 4) = uStack_28;
      *(undefined4 *)(param_1 + 8) = uStack_24;
      *(undefined4 *)(param_1 + 0xc) = uStack_20;
      *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_18,local_1c);
      goto LAB_004f29ae;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (Ship)0x0;
  std::basic_string<>::assign((basic_string<> *)param_1,"",0);
LAB_004f29ae:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getDockingProcessString(class Ship *,int)

void __cdecl ShipTextData::getDockingProcessString(Ship *param_1,int param_2)

{
  int iVar1;
  MetaGameAction **ppMVar2;
  bool bVar3;
  int *piVar4;
  SoundEngine *this;
  basic_string<> *pbVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  uint uVar9;
  nothrow_t *pnVar10;
  MetaGameAction **ppMVar11;
  basic_string<> local_84 [8];
  undefined4 uStack_7c;
  Ship *pSVar12;
  char *pcVar13;
  MetaGameAction *pMVar14;
  uint uVar15;
  int iVar16;
  uint local_58;
  int local_50;
  void *local_44 [5];
  uint local_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &DAT_005c11e8;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == 0) {
LAB_004f2cb7:
    uVar15 = 0;
    pcVar13 = "";
  }
  else {
    local_84[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_84,"",0);
    bVar3 = ShipData::checkDockedWithEarthgate(param_2,0);
    if (!bVar3) {
LAB_004f2a64:
      if (((*(int *)(param_2 + 0xd4) == 3) && (*(int *)(param_2 + 0xf8) == 1)) &&
         (iVar16 = *(int *)(param_2 + 0x178), iVar16 != 0)) {
        local_1c = 0;
        uStack_18 = 0xf;
        local_2c = local_2c & 0xffffff00;
        local_8 = 0;
        iVar1 = *(int *)(iVar16 + 0x254);
        local_58 = 0;
        iVar6 = (int)((((float)*(int *)(iVar1 + 0x15c) - *(float *)(param_2 + 0x108)) /
                      (float)*(int *)(iVar1 + 0x15c)) * 100.0);
        iVar7 = *(int *)(iVar1 + 0x170) - *(int *)(iVar1 + 0x16c);
        iVar1 = iVar7 >> 0x1f;
        if (iVar7 / 0x2c + iVar1 != iVar1) {
          local_50 = 0;
          do {
            ppMVar11 = (MetaGameAction **)(*(int *)(*(int *)(iVar16 + 0x254) + 0x16c) + local_50);
            if (((int)ppMVar11[1] <= iVar6) &&
               ((ppMVar11[2] == (MetaGameAction *)0x0 || (iVar6 <= (int)ppMVar11[2])))) {
              if (ppMVar11[9] == (MetaGameAction *)0x0) {
                if (*(char *)(ppMVar11 + 10) == '\0') {
                  uStack_7c = 0x4f2bf7;
                  pbVar5 = (basic_string<> *)strUsingArgs((char *)local_44);
                  local_8._0_1_ = 2;
                }
                else {
                  uStack_7c = 0x4f2bd0;
                  pbVar5 = (basic_string<> *)strUsingArgs((char *)local_44);
                  local_8._0_1_ = 1;
                }
                std::basic_string<>::append((basic_string<> *)&local_2c,pbVar5);
                local_8 = (uint)local_8._1_3_ << 8;
                if (0xf < local_30) {
                  pnVar10 = (nothrow_t *)(local_30 + 1);
                  pvVar8 = local_44[0];
                  if ((nothrow_t *)0xfff < pnVar10) {
                    pvVar8 = *(void **)((int)local_44[0] + -4);
                    pnVar10 = (nothrow_t *)(local_30 + 0x24);
                    if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
                      _invalid_parameter_noinfo_noreturn();
                    }
                  }
                  operator_delete(pvVar8,pnVar10);
                }
                std::basic_string<>::append((basic_string<> *)&local_2c,"\n",1);
              }
              else {
                uVar15 = 0;
                ppMVar2 = *(MetaGameAction ***)(param_2 + 0x274);
                piVar4 = *(int **)(param_2 + 0x270);
                uVar9 = (int)ppMVar2 - (int)piVar4 >> 2;
                if (uVar9 != 0) {
                  do {
                    if ((MetaGameAction *)*piVar4 == *ppMVar11) goto LAB_004f2c4a;
                    uVar15 = uVar15 + 1;
                    piVar4 = piVar4 + 1;
                  } while (uVar15 < uVar9);
                }
                if (*(MetaGameAction ***)(param_2 + 0x278) == ppMVar2) {
                  std::vector<>::_Emplace_reallocate<>
                            ((vector<> *)(param_2 + 0x270),ppMVar2,ppMVar11);
                }
                else {
                  *ppMVar2 = *ppMVar11;
                  *(int *)(param_2 + 0x274) = *(int *)(param_2 + 0x274) + 4;
                }
                iVar16 = -1;
                pMVar14 = ppMVar11[9];
                uStack_7c = 0x4f2b9d;
                pSVar12 = (Ship *)param_2;
                this = Singleton<>::getInstance();
                uStack_7c = 0x4f2ba4;
                SoundEngine::playSound(this,pSVar12,(Sound)pMVar14,iVar16);
              }
            }
LAB_004f2c4a:
            local_50 = local_50 + 0x2c;
            local_58 = local_58 + 1;
            iVar16 = *(int *)(param_2 + 0x178);
          } while (local_58 <
                   (uint)((*(int *)(*(int *)(iVar16 + 0x254) + 0x170) -
                          *(int *)(*(int *)(iVar16 + 0x254) + 0x16c)) / 0x2c));
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(uint *)param_1 = local_2c;
        *(undefined4 *)(param_1 + 4) = uStack_28;
        *(undefined4 *)(param_1 + 8) = uStack_24;
        *(undefined4 *)(param_1 + 0xc) = uStack_20;
        *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_18,local_1c);
        goto LAB_004f2cd6;
      }
      goto LAB_004f2cb7;
    }
    if (*(int *)(param_2 + 0xd4) != 3) goto LAB_004f2cb7;
    if (*(int *)(param_2 + 0xf8) == 1) goto LAB_004f2a64;
    uVar15 = 0x19;
    pcVar13 = "`%JUMPGATE SYNC: `^Error.";
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (Ship)0x0;
  std::basic_string<>::assign((basic_string<> *)param_1,pcVar13,uVar15);
LAB_004f2cd6:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getUndockingProcessString(class Ship *,int)

void __cdecl ShipTextData::getUndockingProcessString(Ship *param_1,int param_2)

{
  int iVar1;
  MetaGameAction **ppMVar2;
  uint uVar3;
  SoundEngine *this;
  basic_string<> *pbVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  uint uVar10;
  nothrow_t *pnVar11;
  MetaGameAction **ppMVar12;
  MetaGameAction *pMVar13;
  Ship *pSVar14;
  int iVar15;
  uint local_58;
  int local_4c;
  void *local_44 [5];
  uint local_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &DAT_005c11e8;
  local_10 = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  if ((((param_2 == 0) || (*(int *)(param_2 + 0xd4) != 3)) || (*(int *)(param_2 + 0xf8) != 3)) ||
     (iVar15 = *(int *)(param_2 + 0x178), iVar15 == 0)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
  }
  else {
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = local_2c & 0xffffff00;
    local_8 = 0;
    iVar1 = *(int *)(iVar15 + 0x254);
    local_58 = 0;
    iVar6 = (int)((((float)*(int *)(iVar1 + 0x15c) - *(float *)(param_2 + 0x108)) /
                  (float)*(int *)(iVar1 + 0x15c)) * 100.0);
    iVar7 = *(int *)(iVar1 + 0x17c) - *(int *)(iVar1 + 0x178);
    iVar1 = iVar7 >> 0x1f;
    if (iVar7 / 0x2c + iVar1 != iVar1) {
      local_4c = 0;
      do {
        ppMVar12 = (MetaGameAction **)(*(int *)(*(int *)(iVar15 + 0x254) + 0x178) + local_4c);
        if (((int)ppMVar12[1] <= iVar6) &&
           ((ppMVar12[2] == (MetaGameAction *)0x0 || (iVar6 <= (int)ppMVar12[2])))) {
          if (ppMVar12[9] == (MetaGameAction *)0x0) {
            piVar5 = (int *)(iVar15 + 8);
            if (*(char *)(ppMVar12 + 10) == '\0') {
              if (0xf < *(uint *)(iVar15 + 0x1c)) {
                piVar5 = (int *)*piVar5;
              }
              pMVar13 = (MetaGameAction *)(ppMVar12 + 3);
              if ((MetaGameAction *)&DAT_0000000f < ppMVar12[8]) {
                pMVar13 = *(MetaGameAction **)pMVar13;
              }
              pbVar4 = (basic_string<> *)strUsingArgs((char *)local_44,pMVar13,piVar5,uVar3);
              local_8._0_1_ = 2;
            }
            else {
              if (0xf < *(uint *)(iVar15 + 0x1c)) {
                piVar5 = (int *)*piVar5;
              }
              pMVar13 = (MetaGameAction *)(ppMVar12 + 3);
              if ((MetaGameAction *)&DAT_0000000f < ppMVar12[8]) {
                pMVar13 = *(MetaGameAction **)pMVar13;
              }
              pbVar4 = (basic_string<> *)strUsingArgs((char *)local_44,pMVar13,piVar5,uVar3);
              local_8._0_1_ = 1;
            }
            std::basic_string<>::append((basic_string<> *)&local_2c,pbVar4);
            local_8 = (uint)local_8._1_3_ << 8;
            if (0xf < local_30) {
              pnVar11 = (nothrow_t *)(local_30 + 1);
              pvVar9 = local_44[0];
              if ((nothrow_t *)0xfff < pnVar11) {
                pvVar9 = *(void **)((int)local_44[0] + -4);
                pnVar11 = (nothrow_t *)(local_30 + 0x24);
                if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar9,pnVar11);
            }
            std::basic_string<>::append((basic_string<> *)&local_2c,"\n",1);
          }
          else {
            uVar8 = 0;
            ppMVar2 = *(MetaGameAction ***)(param_2 + 0x274);
            piVar5 = *(int **)(param_2 + 0x270);
            uVar10 = (int)ppMVar2 - (int)piVar5 >> 2;
            if (uVar10 != 0) {
              do {
                if ((MetaGameAction *)*piVar5 == *ppMVar12) goto LAB_004f2f1a;
                uVar8 = uVar8 + 1;
                piVar5 = piVar5 + 1;
              } while (uVar8 < uVar10);
            }
            if (*(MetaGameAction ***)(param_2 + 0x278) == ppMVar2) {
              std::vector<>::_Emplace_reallocate<>((vector<> *)(param_2 + 0x270),ppMVar2,ppMVar12);
            }
            else {
              *ppMVar2 = *ppMVar12;
              *(int *)(param_2 + 0x274) = *(int *)(param_2 + 0x274) + 4;
            }
            iVar15 = -1;
            pMVar13 = ppMVar12[9];
            pSVar14 = (Ship *)param_2;
            this = Singleton<>::getInstance();
            SoundEngine::playSound(this,pSVar14,(Sound)pMVar13,iVar15);
          }
        }
LAB_004f2f1a:
        local_4c = local_4c + 0x2c;
        local_58 = local_58 + 1;
        iVar15 = *(int *)(param_2 + 0x178);
      } while (local_58 <
               (uint)((*(int *)(*(int *)(iVar15 + 0x254) + 0x17c) -
                      *(int *)(*(int *)(iVar15 + 0x254) + 0x178)) / 0x2c));
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(uint *)param_1 = local_2c;
    *(undefined4 *)(param_1 + 4) = uStack_28;
    *(undefined4 *)(param_1 + 8) = uStack_24;
    *(undefined4 *)(param_1 + 0xc) = uStack_20;
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_18,local_1c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getJumpgateState(class Ship *,int)

void __cdecl ShipTextData::getJumpgateState(Ship *param_1,int param_2)

{
  SpaceStation *pSVar1;
  int *piVar2;
  undefined4 *puVar3;
  bool bVar4;
  char *pcVar5;
  Good *pGVar6;
  int *piVar7;
  char *pcVar8;
  void *pvVar9;
  nothrow_t *pnVar10;
  undefined4 *puVar11;
  basic_string<> abStack_78 [8];
  undefined4 uStack_70;
  void *local_44 [5];
  uint local_30;
  void *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  uint uStack_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &DAT_005c1238;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 == 0) ||
     (pSVar1 = *(SpaceStation **)(param_2 + 0x178), pSVar1 == (SpaceStation *)0x0)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
  }
  else {
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = (void *)((uint)local_2c & 0xffffff00);
    local_8 = 0;
    uStack_7 = 0;
    piVar7 = *(int **)(g_gameData + 0x3c);
    if (piVar7 == *(int **)(g_gameData + 0x40)) {
LAB_004f3080:
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0xf;
      *param_1 = (Ship)0x0;
      std::basic_string<>::assign((basic_string<> *)param_1,"",0);
      if (0xf < uStack_18) {
        pnVar10 = (nothrow_t *)(uStack_18 + 1);
        pvVar9 = local_2c;
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar9 = *(void **)((int)local_2c + -4);
          pnVar10 = (nothrow_t *)(uStack_18 + 0x24);
          if (0x1f < (uint)((int)local_2c + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar9,pnVar10);
      }
    }
    else {
      while (piVar2 = (int *)*piVar7, *piVar2 != *(int *)(pSVar1 + 0x38c)) {
        piVar7 = piVar7 + 1;
        if (piVar7 == *(int **)(g_gameData + 0x40)) goto LAB_004f3080;
      }
      uStack_70 = 0x4f30f2;
      pcVar5 = (char *)strUsingArgs((char *)local_44);
      local_8 = 1;
      pcVar8 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar8 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)&local_2c,pcVar8,*(uint *)(pcVar5 + 0x10));
      local_8 = 0;
      if (0xf < local_30) {
        pnVar10 = (nothrow_t *)(local_30 + 1);
        pvVar9 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar9 = *(void **)((int)local_44[0] + -4);
          pnVar10 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9))) goto LAB_004f3139;
        }
        operator_delete(pvVar9,pnVar10);
      }
      uStack_70 = 0x4f3160;
      pcVar5 = (char *)strUsingArgs((char *)local_44);
      local_8 = 2;
      pcVar8 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar8 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)&local_2c,pcVar8,*(uint *)(pcVar5 + 0x10));
      local_8 = 0;
      if (0xf < local_30) {
        pnVar10 = (nothrow_t *)(local_30 + 1);
        pvVar9 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar9 = *(void **)((int)local_44[0] + -4);
          pnVar10 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar9,pnVar10);
      }
      std::basic_string<>::basic_string<>(abStack_78,(basic_string<> *)(param_2 + 0x238));
      bVar4 = SpaceStation::shipHasPaidForUse(pSVar1);
      if (bVar4) {
        std::basic_string<>::append((basic_string<> *)&local_2c," `$**paid**",0xb);
      }
      if (piVar2[0x44] - piVar2[0x43] >> 2 != 0) {
        uStack_70 = 0x4f3216;
        pcVar5 = (char *)strUsingArgs((char *)local_44);
        local_8 = 3;
        pcVar8 = pcVar5;
        if (0xf < *(uint *)(pcVar5 + 0x14)) {
          pcVar8 = *(char **)pcVar5;
        }
        std::basic_string<>::append((basic_string<> *)&local_2c,pcVar8,*(uint *)(pcVar5 + 0x10));
        local_8 = 0;
        if (0xf < local_30) {
          pnVar10 = (nothrow_t *)(local_30 + 1);
          pvVar9 = local_44[0];
          if ((nothrow_t *)0xfff < pnVar10) {
            pvVar9 = *(void **)((int)local_44[0] + -4);
            pnVar10 = (nothrow_t *)(local_30 + 0x24);
            if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar9,pnVar10);
        }
        puVar3 = (undefined4 *)piVar2[0x44];
        for (puVar11 = (undefined4 *)piVar2[0x43]; puVar11 != puVar3; puVar11 = puVar11 + 1) {
          std::basic_string<>::basic_string<>(abStack_78,(basic_string<> *)*puVar11);
          pGVar6 = GameData::getGoodWithShortName();
          if (pGVar6 != (Good *)0x0) {
            uStack_70 = 0x4f32b6;
            pcVar5 = (char *)strUsingArgs((char *)local_44);
            local_8 = 4;
            pcVar8 = pcVar5;
            if (0xf < *(uint *)(pcVar5 + 0x14)) {
              pcVar8 = *(char **)pcVar5;
            }
            std::basic_string<>::append((basic_string<> *)&local_2c,pcVar8,*(uint *)(pcVar5 + 0x10))
            ;
            local_8 = 0;
            if (0xf < local_30) {
              pnVar10 = (nothrow_t *)(local_30 + 1);
              pvVar9 = local_44[0];
              if ((nothrow_t *)0xfff < pnVar10) {
                pvVar9 = *(void **)((int)local_44[0] + -4);
                pnVar10 = (nothrow_t *)(local_30 + 0x24);
                if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9))) {
LAB_004f3139:
                  local_8 = 0;
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar9,pnVar10);
            }
          }
        }
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(void **)param_1 = local_2c;
      *(undefined4 *)(param_1 + 4) = uStack_28;
      *(undefined4 *)(param_1 + 8) = uStack_24;
      *(undefined4 *)(param_1 + 0xc) = uStack_20;
      *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_18,local_1c);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getRTCommsScreen(class Ship *,int)

Ship * __cdecl ShipTextData::getRTCommsScreen(Ship *param_1,int param_2)

{
  std::basic_string<>::basic_string<>
            ((basic_string<> *)param_1,(basic_string<> *)&ShipData::rtComms);
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getPrivateCommsScreen(class Ship *,int)

Ship * __cdecl ShipTextData::getPrivateCommsScreen(Ship *param_1,int param_2)

{
  std::basic_string<>::basic_string<>
            ((basic_string<> *)param_1,(basic_string<> *)&ShipData::privateComms);
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getSpaceReadings(class Ship *,int)

void __cdecl ShipTextData::getSpaceReadings(Ship *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  HazardCategory *pHVar4;
  HazardCategory *pHVar5;
  basic_string<> *pbVar6;
  ShipModule *pSVar7;
  char *pcVar8;
  GameData *this;
  GameData *this_00;
  void *pvVar9;
  char *pcVar10;
  nothrow_t *pnVar11;
  float fVar12;
  void *local_44 [5];
  uint local_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &DAT_005c1290;
  local_10 = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    goto LAB_004f36f5;
  }
  local_1c = 0;
  uStack_18 = 0xf;
  local_2c = local_2c & 0xffffff00;
  std::basic_string<>::assign((basic_string<> *)&local_2c,"`!Exterior:\n",0xc);
  local_8 = 0;
  uStack_7 = 0;
  if ((int *)**(int **)(param_2 + 0x40) == (int *)0x0) {
LAB_004f36c7:
    std::basic_string<>::append((basic_string<> *)&local_2c,"`@no sensors",0xc);
  }
  else {
    cVar2 = (**(code **)(*(int *)**(int **)(param_2 + 0x40) + 0x10))();
    if (cVar2 == '\0') goto LAB_004f36c7;
    iVar1 = *(int *)(param_2 + 0x188);
    if (iVar1 == 0) {
      std::basic_string<>::append((basic_string<> *)&local_2c,"`7**void**",10);
    }
    else {
      if (iVar1 == 2) {
        std::basic_string<>::append((basic_string<> *)&local_2c,"`9Nebula",8);
        pHVar4 = GameData::getNebulaHazardCategory(this,*(int *)(param_2 + 0x18c));
        pHVar5 = pHVar4 + 8;
        if (0xf < *(uint *)(pHVar4 + 0x1c)) {
          pHVar5 = *(HazardCategory **)pHVar5;
        }
        pbVar6 = (basic_string<> *)strUsingArgs((char *)local_44,"\n`!%s",pHVar5,uVar3);
        local_8 = 1;
        std::basic_string<>::append((basic_string<> *)&local_2c,pbVar6);
        local_8 = 0;
        if (0xf < local_30) {
          pnVar11 = (nothrow_t *)(local_30 + 1);
          pvVar9 = local_44[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            pvVar9 = *(void **)((int)local_44[0] + -4);
            pnVar11 = (nothrow_t *)(local_30 + 0x24);
            if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar9,pnVar11);
        }
        pbVar6 = (basic_string<> *)
                 strUsingArgs((char *)local_44,"\n`2Dens.: `0%.0f%%",
                              *(double *)(param_2 + 0x140) * 100.0);
        local_8 = 2;
      }
      else {
        if (iVar1 != 1) goto LAB_004f3616;
        std::basic_string<>::append((basic_string<> *)&local_2c,"`%Planetesimals",0xf);
        pHVar4 = GameData::getAsteroidHazardCategory(this_00,*(int *)(param_2 + 0x18c));
        pHVar5 = pHVar4 + 8;
        if (0xf < *(uint *)(pHVar4 + 0x1c)) {
          pHVar5 = *(HazardCategory **)pHVar5;
        }
        pbVar6 = (basic_string<> *)strUsingArgs((char *)local_44,"\n`!%s",pHVar5,uVar3);
        local_8 = 3;
        std::basic_string<>::append((basic_string<> *)&local_2c,pbVar6);
        local_8 = 0;
        if (0xf < local_30) {
          pnVar11 = (nothrow_t *)(local_30 + 1);
          pvVar9 = local_44[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            pvVar9 = *(void **)((int)local_44[0] + -4);
            pnVar11 = (nothrow_t *)(local_30 + 0x24);
            if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar9,pnVar11);
        }
        pbVar6 = (basic_string<> *)
                 strUsingArgs((char *)local_44,"\n`2Dens.: `0%.0f%%",
                              *(double *)(param_2 + 0x140) * 100.0);
        local_8 = 4;
      }
      std::basic_string<>::append((basic_string<> *)&local_2c,pbVar6);
      local_8 = 0;
      if (0xf < local_30) {
        pnVar11 = (nothrow_t *)(local_30 + 1);
        pvVar9 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar9 = *(void **)((int)local_44[0] + -4);
          pnVar11 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9))) goto LAB_004f354d;
        }
        operator_delete(pvVar9,pnVar11);
      }
    }
LAB_004f3616:
    pSVar7 = SystemManager::getModule(*(SystemManager **)(param_2 + 0x40),0xd,true);
    if (pSVar7 != (ShipModule *)0x0) {
      fVar12 = (float)*(double *)(param_2 + 0x30);
      Sector::getSolarRadiationAt
                (*(Sector **)(param_2 + 0x24),(float)*(double *)(param_2 + 0x28),fVar12);
      pcVar8 = (char *)strUsingArgs((char *)local_44,"\n`2Solar: `c%.0f%%",(double)(fVar12 * 100.0))
      ;
      local_8 = 5;
      pcVar10 = pcVar8;
      if (0xf < *(uint *)(pcVar8 + 0x14)) {
        pcVar10 = *(char **)pcVar8;
      }
      std::basic_string<>::append((basic_string<> *)&local_2c,pcVar10,*(uint *)(pcVar8 + 0x10));
      if (0xf < local_30) {
        pnVar11 = (nothrow_t *)(local_30 + 1);
        pvVar9 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar9 = *(void **)((int)local_44[0] + -4);
          pnVar11 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9))) {
LAB_004f354d:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar9,pnVar11);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(uint *)param_1 = local_2c;
  *(undefined4 *)(param_1 + 4) = uStack_28;
  *(undefined4 *)(param_1 + 8) = uStack_24;
  *(undefined4 *)(param_1 + 0xc) = uStack_20;
  *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_18,local_1c);
LAB_004f36f5:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getSensorWaveformSummary(class Ship *,int)

void __cdecl ShipTextData::getSensorWaveformSummary(Ship *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char *pcVar5;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005bbd28;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    goto LAB_004f39bb;
  }
  local_1c = 0;
  uStack_18 = 0xf;
  local_2c = local_2c & 0xffffff00;
  local_8 = 0;
  bVar3 = false;
  iVar1 = *(int *)(param_2 + 0x194);
  if (((((iVar1 != 0) && ((*(int *)(iVar1 + 0xf0) - *(int *)(iVar1 + 0xec) & 0xfffffff8U) == 0)) &&
       ((*(int *)(iVar1 + 0xfc) - *(int *)(iVar1 + 0xf8) & 0xfffffff8U) != 0)) ||
      (*(char *)(param_2 + 0x1b1) != '\0')) ||
     (((iVar1 != 0 &&
       (((iVar2 = *(int *)(iVar1 + 0xe0), iVar2 == 5 || (iVar2 == 6)) ||
        ((iVar2 == 4 || (iVar2 == 7)))))) && (*(float *)(iVar1 + 0x114) == -1.0)))) {
    bVar3 = true;
  }
  bVar4 = false;
  if ((iVar1 != 0) &&
     ((((*(int *)(iVar1 + 0xf0) - *(int *)(iVar1 + 0xec) & 0xfffffff8U) != 0 &&
       (*(char *)(param_2 + 0x1b1) == '\0')) ||
      (((iVar2 = *(int *)(iVar1 + 0xe0), iVar2 == 5 ||
        (((iVar2 == 6 || (iVar2 == 4)) || (iVar2 == 7)))) && (*(float *)(iVar1 + 0x114) != -1.0)))))
     ) {
    bVar4 = true;
  }
  if (bVar3) {
    pcVar5 = "`$HIST\n";
  }
  else {
    pcVar5 = "`8HIST\n";
  }
  std::basic_string<>::append((basic_string<> *)&local_2c,pcVar5,7);
  if (bVar4) {
    pcVar5 = "`@LIVE\n";
  }
  else {
    pcVar5 = "`8LIVE\n";
  }
  std::basic_string<>::append((basic_string<> *)&local_2c,pcVar5,7);
  if (iVar1 == 0) {
    std::basic_string<>::append((basic_string<> *)&local_2c," `8IFF\n",7);
LAB_004f389e:
    pcVar5 = "`8REAC\n";
  }
  else {
    iVar2 = *(int *)(iVar1 + 0xe0);
    if (iVar2 == 0) {
      if ((*(int *)(iVar1 + 0x130) != 0) &&
         (*(char *)(*(int *)(*(int *)(iVar1 + 0x130) + 0x40) + 0x34) != '\0')) goto LAB_004f38e0;
LAB_004f3915:
      pcVar5 = " `8IFF\n";
    }
    else {
      if (((iVar2 != 5) && (iVar2 != 6)) && ((iVar2 != 4 && (iVar2 != 7)))) goto LAB_004f3915;
LAB_004f38e0:
      pcVar5 = " `%IFF\n";
    }
    std::basic_string<>::append((basic_string<> *)&local_2c,pcVar5,7);
    if (*(char *)(iVar1 + 0x10f) == '\0') goto LAB_004f389e;
    pcVar5 = "`%REAC\n";
  }
  std::basic_string<>::append((basic_string<> *)&local_2c,pcVar5,7);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 0x10d) == '\0')) {
    pcVar5 = " `8RCS\n";
  }
  else {
    pcVar5 = " `%RCS\n";
  }
  std::basic_string<>::append((basic_string<> *)&local_2c,pcVar5,7);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 0x10e) == '\0')) {
    pcVar5 = "`8DRVE\n";
  }
  else {
    pcVar5 = "`%DRVE\n";
  }
  std::basic_string<>::append((basic_string<> *)&local_2c,pcVar5,7);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 0x110) == '\0')) {
    pcVar5 = "`8JMPD\n";
  }
  else {
    pcVar5 = "`%JMPD\n";
  }
  std::basic_string<>::append((basic_string<> *)&local_2c,pcVar5,7);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 0x112) == '\0')) {
    pcVar5 = "`8WEAP\n";
  }
  else {
    pcVar5 = "`%WEAP\n";
  }
  std::basic_string<>::append((basic_string<> *)&local_2c,pcVar5,7);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(uint *)param_1 = local_2c;
  *(undefined4 *)(param_1 + 4) = uStack_28;
  *(undefined4 *)(param_1 + 8) = uStack_24;
  *(undefined4 *)(param_1 + 0xc) = uStack_20;
  *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_18,local_1c);
LAB_004f39bb:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getSensorFilterState(class Ship *,int)

void __cdecl ShipTextData::getSensorFilterState(Ship *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b43b8;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    pcVar3 = "";
    uVar4 = 0;
  }
  else {
    local_8 = 0;
    iVar1 = *(int *)(param_2 + 0xfc);
    if (iVar1 == 0) {
      uVar4 = 0x13;
      pcVar3 = "`%[`!*`%]`3VE ST NA";
    }
    else if (iVar1 == 1) {
      uVar4 = 0x15;
      pcVar3 = " `3*`%[`!VE`%]`3ST NA";
    }
    else if (iVar1 == 2) {
      uVar4 = 0x15;
      pcVar3 = " `3* VE`%[`!ST`%]`3NA";
    }
    else {
      uVar4 = 0x14;
      pcVar3 = " `3* VE ST`%[`!NA`%]";
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (Ship)0x0;
  std::basic_string<>::assign((basic_string<> *)param_1,pcVar3,uVar4);
  ExceptionList = local_10;
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getCMState(class Ship *,int)

void __cdecl ShipTextData::getCMState(Ship *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  char *pcVar8;
  void *pvVar9;
  nothrow_t *pnVar10;
  void *local_44 [5];
  uint local_30;
  void *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  uint uStack_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &DAT_005c12e0;
  local_10 = ExceptionList;
  uVar4 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar4;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
  }
  else {
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = (void *)((uint)local_2c & 0xffffff00);
    local_8 = 0;
    uStack_7 = 0;
    if (*(int *)(*(int *)(param_2 + 0x40) + 8) == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0xf;
      *param_1 = (Ship)0x0;
      std::basic_string<>::assign((basic_string<> *)param_1,"`8no CM",7);
      if (0xf < uStack_18) {
        pnVar10 = (nothrow_t *)(uStack_18 + 1);
        pvVar9 = local_2c;
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar9 = *(void **)((int)local_2c + -4);
          pnVar10 = (nothrow_t *)(uStack_18 + 0x24);
          if (0x1f < (uint)((int)local_2c + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar9,pnVar10);
      }
    }
    else {
      std::basic_string<>::append((basic_string<> *)&local_2c,"`!Countermeasures\n",0x12);
      iVar2 = *(int *)(*(int *)(*(int *)(param_2 + 0x40) + 8) + 8);
      puVar5 = (undefined4 *)(iVar2 + 8);
      if (0xf < *(uint *)(iVar2 + 0x1c)) {
        puVar5 = (undefined4 *)*puVar5;
      }
      pcVar6 = (char *)strUsingArgs((char *)local_44,"`2Type : `0%s\n",puVar5,uVar4);
      local_8 = 1;
      pcVar8 = pcVar6;
      if (0xf < *(uint *)(pcVar6 + 0x14)) {
        pcVar8 = *(char **)pcVar6;
      }
      std::basic_string<>::append((basic_string<> *)&local_2c,pcVar8,*(uint *)(pcVar6 + 0x10));
      local_8 = 0;
      if (0xf < local_30) {
        pnVar10 = (nothrow_t *)(local_30 + 1);
        pvVar9 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar9 = *(void **)((int)local_44[0] + -4);
          pnVar10 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar9,pnVar10);
      }
      iVar2 = *(int *)(*(int *)(param_2 + 0x40) + 8);
      iVar3 = *(int *)(iVar2 + 0x68);
      uVar7 = 0x21;
      if (iVar3 == 0) {
        uVar7 = 0x37;
      }
      pcVar6 = (char *)strUsingArgs((char *)local_44,"`2Ammo : `%c%d`2/`!%.0f\n",uVar7,iVar3,
                                    (double)*(float *)(*(int *)(iVar2 + 8) + 0x104));
      local_8 = 2;
      pcVar8 = pcVar6;
      if (0xf < *(uint *)(pcVar6 + 0x14)) {
        pcVar8 = *(char **)pcVar6;
      }
      std::basic_string<>::append((basic_string<> *)&local_2c,pcVar8,*(uint *)(pcVar6 + 0x10));
      local_8 = 0;
      if (0xf < local_30) {
        pnVar10 = (nothrow_t *)(local_30 + 1);
        pvVar9 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar9 = *(void **)((int)local_44[0] + -4);
          pnVar10 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar9,pnVar10);
      }
      fVar1 = *(float *)(*(int *)(*(int *)(param_2 + 0x40) + 8) + 0x6c);
      if (-1.0 < fVar1) {
        pcVar6 = (char *)strUsingArgs((char *)local_44,"`2Reload: `0%.2f\n",(double)fVar1);
        local_8 = 3;
        pcVar8 = pcVar6;
        if (0xf < *(uint *)(pcVar6 + 0x14)) {
          pcVar8 = *(char **)pcVar6;
        }
        std::basic_string<>::append((basic_string<> *)&local_2c,pcVar8,*(uint *)(pcVar6 + 0x10));
        if (0xf < local_30) {
          pnVar10 = (nothrow_t *)(local_30 + 1);
          pvVar9 = local_44[0];
          if ((nothrow_t *)0xfff < pnVar10) {
            pvVar9 = *(void **)((int)local_44[0] + -4);
            pnVar10 = (nothrow_t *)(local_30 + 0x24);
            if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar9,pnVar10);
        }
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(void **)param_1 = local_2c;
      *(undefined4 *)(param_1 + 4) = uStack_28;
      *(undefined4 *)(param_1 + 8) = uStack_24;
      *(undefined4 *)(param_1 + 0xc) = uStack_20;
      *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_18,local_1c);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getCommsSyncData(class Ship *,int)

void __cdecl ShipTextData::getCommsSyncData(Ship *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005bbd28;
  local_10 = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 == 0) || (piVar1 = *(int **)(*(int *)(param_2 + 0x40) + 0x1c), piVar1 == (int *)0x0))
  {
LAB_004f3f85:
    uVar7 = 0;
    pcVar6 = "";
  }
  else {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0,uVar3);
    if (cVar2 == '\0') goto LAB_004f3f85;
    local_8 = 0;
    if (*(float *)(param_2 + 0x160) == -1.0) {
      uVar7 = 0x55;
      pcVar6 = 
      "`8SCH SYN ACK TTN BOM BBN SAN\nORX MRY MMP MMX VMY VMT POL\nPL1 PL2 PLX MUX VUX EML ART";
    }
    else {
      iVar5 = *(int *)(*(int *)(param_2 + 0x40) + 0x1c);
      iVar4 = ComponentInterfaceInstance::getEfficiencyPercent
                        (*(ComponentInterfaceInstance **)(iVar5 + 0xc));
      iVar5 = (int)((*(float *)(param_2 + 0x160) /
                    ((((float)iVar4 / 100.0 - 1.0) * -1.0 + 1.0) * 0.5 *
                    *(float *)(*(int *)(iVar5 + 8) + 0x104))) * 100.0);
      if (iVar5 < 0x5f) {
        if (iVar5 < 0x5a) {
          if ((iVar5 < 0x55) && (iVar5 < 0x50)) {
            if ((iVar5 < 0x4b) && (iVar5 < 0x46)) {
              if (iVar5 < 0x41) {
                if (iVar5 < 0x3c) {
                  if (iVar5 < 0x37) {
                    if (iVar5 < 0x32) {
                      if (iVar5 < 0x2d) {
                        if (iVar5 < 0x28) {
                          if (iVar5 < 0x23) {
                            if (iVar5 < 0x1e) {
                              if (iVar5 < 0x19) {
                                if (iVar5 < 0x14) {
                                  if (iVar5 < 0xf) {
                                    if (iVar5 < 10) {
                                      *(undefined4 *)(param_1 + 0x10) = 0;
                                      *(undefined4 *)(param_1 + 0x14) = 0xf;
                                      *param_1 = (Ship)0x0;
                                      uVar7 = 0x5d;
                                      if (iVar5 < 5) {
                                        pcVar6 = 
                                        "`8SCH SYN ACK TTN BOM `#BBN`8 SAN\nORX MRY MMP MMX VMY VMT POL\n`%PL1 PL2 PLX MUX `!VUX EML ART"
                                        ;
                                      }
                                      else {
                                        pcVar6 = 
                                        "`8SCH SYN ACK TTN BOM `$BBN`8 SAN\nORX MRY MMP MMX VMY VMT `%POL\nPL1 PL2 PLX MUX `8VUX EML ART"
                                        ;
                                      }
                                      goto LAB_004f3f9f;
                                    }
                                    uVar7 = 0x5f;
                                    pcVar6 = 
                                    "`8SCH SYN ACK TTN BOM `#BBN`8 SAN\nORX MRY MMP MMX VMY VMT `%POL\nPL1 PL2 PLX `7MUX `8VUX EML ART"
                                    ;
                                  }
                                  else {
                                    uVar7 = 0x5f;
                                    pcVar6 = 
                                    "`8SCH SYN ACK TTN BOM `$BBN`8 SAN\nORX MRY MMP MMX VMY VMT `%POL\nPL1 PL2 `7PLX MUX `8VUX EML ART"
                                    ;
                                  }
                                }
                                else {
                                  uVar7 = 0x5f;
                                  pcVar6 = 
                                  "`8SCH SYN ACK TTN BOM `#BBN`8 SAN\nORX MRY MMP MMX VMY VMT `%POL\n`7PL1 PL2 `8PLX MUX VUX EML ART"
                                  ;
                                }
                              }
                              else {
                                uVar7 = 0x5d;
                                pcVar6 = 
                                "`8SCH SYN ACK TTN BOM `$BBN`8 SAN\nORX MRY MMP MMX VMY VMT `7POL\nPL1 PL2 `8PLX MUX VUX EML ART"
                                ;
                              }
                            }
                            else {
                              uVar7 = 0x61;
                              pcVar6 = 
                              "`8SCH SYN ACK TTN BOM `#BBN`8 SAN\n`%ORX `7MRY `%MMP MMX VMY VMT POL\n`8PL1 PL2 PLX MUX VUX EML ART"
                              ;
                            }
                          }
                          else {
                            uVar7 = 0x5d;
                            pcVar6 = 
                            "`8SCH SYN ACK TTN BOM `$BBN`8 SAN\n`%ORX MRY MMP MMX VMY VMT POL\n`8PL1 PL2 PLX MUX VUX EML ART"
                            ;
                          }
                        }
                        else {
                          uVar7 = 0x61;
                          pcVar6 = 
                          "`8SCH SYN ACK TTN BOM `#BBN`8 SAN\n`%ORX `7MRY `5MMP MMX VMY`8 VMT POL\nPL1 PL2 PLX MUX VUX EML ART"
                          ;
                        }
                      }
                      else {
                        uVar7 = 0x5d;
                        pcVar6 = 
                        "`8SCH SYN ACK TTN BOM `$BBN`8 SAN\n`%ORX MRY MMP MMX VMY`8 VMT POL\nPL1 PL2 PLX MUX VUX EML ART"
                        ;
                      }
                    }
                    else {
                      uVar7 = 0x5f;
                      pcVar6 = 
                      "`8SCH SYN ACK `%TTN `#BOM `0BBN SAN\n`8ORX MRY MMP`8 MMX VMY VMT POL\nPL1 PL2 PLX MUX VUX EML ART"
                      ;
                    }
                  }
                  else {
                    uVar7 = 0x5f;
                    pcVar6 = 
                    "`8SCH SYN ACK `%TTN `$BOM `2BBN SAN\n`8ORX MRY MMP`8 MMX VMY VMT POL\nPL1 PL2 PLX MUX VUX EML ART"
                    ;
                  }
                }
                else {
                  uVar7 = 0x5d;
                  pcVar6 = 
                  "`8SCH SYN ACK `%TTN `#BOM `0BBN `8SAN\nORX MRY MMP MMX VMY VMT POL\nPL1 PL2 PLX MUX VUX EML ART"
                  ;
                }
              }
              else {
                uVar7 = 0x5d;
                pcVar6 = 
                "`8SCH SYN ACK `%TTN `$BOM `0BBN `8SAN\nORX MRY MMP MMX VMY VMT POL\nPL1 PL2 PLX MUX VUX EML ART"
                ;
              }
            }
            else {
              uVar7 = 0x59;
              pcVar6 = 
              "`8SCH SYN `!ACK `8TTN BOM BBN SAN\nORX MRY MMP MMX VMY VMT POL\nPL1 PL2 PLX MUX VUX EML ART"
              ;
            }
          }
          else {
            uVar7 = 0x59;
            pcVar6 = 
            "`8SCH `!SYN `8ACK TTN BOM BBN SAN\nORX MRY MMP MMX VMY VMT POL\nPL1 PL2 PLX MUX VUX EML ART"
            ;
          }
        }
        else {
          uVar7 = 0x57;
          pcVar6 = 
          "`7SCH `8SYN ACK TTN BOM BBN SAN\nORX MRY MMP MMX VMY VMT POL\nPL1 PL2 PLX MUX VUX EML ART"
          ;
        }
      }
      else {
        uVar7 = 0x57;
        pcVar6 = 
        "`%SCH `8SYN ACK TTN BOM BBN SAN\nORX MRY MMP MMX VMY VMT POL\nPL1 PL2 PLX MUX VUX EML ART";
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (Ship)0x0;
LAB_004f3f9f:
  std::basic_string<>::assign((basic_string<> *)param_1,pcVar6,uVar7);
  ExceptionList = local_10;
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getCommsSyncState(class Ship *,int)

Ship * __cdecl ShipTextData::getCommsSyncState(Ship *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  
  if ((param_2 != 0) && (piVar1 = *(int **)(*(int *)(param_2 + 0x40) + 0x1c), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0);
    if (cVar2 != '\0') {
      if (*(float *)(param_2 + 0x160) == -1.0) {
        uVar5 = 0x1a;
        pcVar4 = "`2SyncState: `7not syncing";
      }
      else {
        iVar3 = (int)((*(float *)(param_2 + 0x160) /
                      *(float *)(*(int *)(*(int *)(*(int *)(param_2 + 0x40) + 0x1c) + 8) + 0x104)) *
                     100.0);
        if (iVar3 < 0x50) {
          if (iVar3 < 0x3c) {
            *(undefined4 *)(param_1 + 0x10) = 0;
            *(undefined4 *)(param_1 + 0x14) = 0xf;
            *param_1 = (Ship)0x0;
            if (0x18 < iVar3) {
              std::basic_string<>::assign
                        ((basic_string<> *)param_1,"`2SyncState: `0syncing data",0x1b);
              return param_1;
            }
            std::basic_string<>::assign
                      ((basic_string<> *)param_1,"`2SyncState: `!verifying data",0x1d);
            return param_1;
          }
          uVar5 = 0x1a;
          pcVar4 = "`2SyncState: `$handshaking";
        }
        else {
          uVar5 = 0x18;
          pcVar4 = "`2SyncState: `$searching";
        }
      }
      goto LAB_004f4099;
    }
  }
  uVar5 = 0x16;
  pcVar4 = "`2SyncState: `@*error*";
LAB_004f4099:
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (Ship)0x0;
  std::basic_string<>::assign((basic_string<> *)param_1,pcVar4,uVar5);
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getCommsDamageState(class Ship *,int)

Ship * __cdecl ShipTextData::getCommsDamageState(Ship *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  
  if ((param_2 != 0) && (piVar1 = *(int **)(*(int *)(param_2 + 0x40) + 0x1c), piVar1 != (int *)0x0))
  {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(int **)(*(int *)(param_2 + 0x40) + 0x1c) + 0x14))();
      if (cVar2 == '\0') {
        cVar2 = (**(code **)(**(int **)(*(int *)(param_2 + 0x40) + 0x1c) + 0x18))();
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0xf;
        *param_1 = (Ship)0x0;
        if (cVar2 != '\0') {
          std::basic_string<>::assign
                    ((basic_string<> *)param_1,"`2DmgState : `$system damaged",0x1d);
          return param_1;
        }
        std::basic_string<>::assign((basic_string<> *)param_1,"`2DmgState : `%nominal",0x16);
        return param_1;
      }
      uVar4 = 0x24;
      pcVar3 = "`2DmgState : `@system non-functional";
      goto LAB_004f414c;
    }
  }
  uVar4 = 0x16;
  pcVar3 = "`2DmgState : `@*error*";
LAB_004f414c:
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (Ship)0x0;
  std::basic_string<>::assign((basic_string<> *)param_1,pcVar3,uVar4);
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getCommsModel(class Ship *,int)

Ship * __cdecl ShipTextData::getCommsModel(Ship *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if (((param_2 != 0) && (iVar1 = *(int *)(*(int *)(param_2 + 0x40) + 0x1c), iVar1 != 0)) &&
     (*(char *)(iVar1 + 99) != '\0')) {
    iVar1 = *(int *)(iVar1 + 8);
    piVar3 = (int *)(iVar1 + 8);
    if (0xf < *(uint *)(iVar1 + 0x1c)) {
      piVar3 = (int *)*piVar3;
    }
    puVar2 = (undefined4 *)(iVar1 + 0x38);
    if (0xf < *(uint *)(iVar1 + 0x4c)) {
      puVar2 = (undefined4 *)*puVar2;
    }
    strUsingArgs((char *)param_1,"`2Model    : `0%s %s",puVar2,piVar3);
    return param_1;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (Ship)0x0;
  std::basic_string<>::assign((basic_string<> *)param_1,"`2Model    : `8none",0x13);
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getCommsEmailState(class Ship *,int)

Ship * __cdecl ShipTextData::getCommsEmailState(Ship *param_1,int param_2)

{
  EmailManager *pEVar1;
  EmailManager *this;
  int iVar2;
  
  if (((param_2 != 0) && (iVar2 = *(int *)(*(int *)(param_2 + 0x40) + 0x1c), iVar2 != 0)) &&
     (*(char *)(iVar2 + 99) != '\0')) {
    pEVar1 = Singleton<>::getInstance();
    this = Singleton<>::getInstance();
    iVar2 = EmailManager::getUnsentEmailCount(this);
    strUsingArgs((char *)param_1,"`2E. Queue : `%c%d",
                 (uint)(*pEVar1 == (EmailManager)0x0) * 2 + 0x30,iVar2);
    return param_1;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (Ship)0x0;
  std::basic_string<>::assign((basic_string<> *)param_1,"`2E. Queue : `8n/a",0x12);
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getMooringState(class Ship *,int)

void __cdecl ShipTextData::getMooringState(Ship *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 ****ppppuVar3;
  char *pcVar4;
  char *pcVar5;
  void *pvVar6;
  nothrow_t *pnVar7;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c1328;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"`@ERROR",7);
  }
  else {
    local_34 = 0;
    uStack_30 = 0xf;
    local_44 = local_44 & 0xffffff00;
    local_8 = 0;
    if (*(int *)(param_2 + 0x174) == 0) {
      std::basic_string<>::append((basic_string<> *)&local_44,"`8* unmoored *",0xe);
    }
    else {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
      pcVar5 = (&PTR_s_Debris_005e19b0)[*(int *)(*(int *)(param_2 + 0x174) + 0x60)];
      pcVar4 = pcVar5;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      std::basic_string<>::assign((basic_string<> *)local_2c,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1))
      ;
      local_8._0_1_ = 1;
      ppppuVar3 = local_2c;
      if (0xf < local_18) {
        ppppuVar3 = (undefined4 ****)local_2c[0];
      }
      pcVar4 = (char *)strUsingArgs((char *)local_5c,"`%%%s\n",ppppuVar3,uVar2);
      local_8 = CONCAT31(local_8._1_3_,2);
      pcVar5 = pcVar4;
      if (0xf < *(uint *)(pcVar4 + 0x14)) {
        pcVar5 = *(char **)pcVar4;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar5,*(uint *)(pcVar4 + 0x10));
      if (0xf < local_48) {
        pnVar7 = (nothrow_t *)(local_48 + 1);
        pvVar6 = local_5c[0];
        if ((nothrow_t *)0xfff < pnVar7) {
          pvVar6 = *(void **)((int)local_5c[0] + -4);
          pnVar7 = (nothrow_t *)(local_48 + 0x24);
          if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar6,pnVar7);
      }
      local_4c = 0;
      local_48 = 0xf;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
      if (0xf < local_18) {
        pnVar7 = (nothrow_t *)(local_18 + 1);
        ppppuVar3 = (undefined4 ****)local_2c[0];
        if ((nothrow_t *)0xfff < pnVar7) {
          ppppuVar3 = (undefined4 ****)local_2c[0][-1];
          pnVar7 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar3))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppuVar3,pnVar7);
      }
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(uint *)param_1 = local_44;
    *(undefined4 *)(param_1 + 4) = uStack_40;
    *(undefined4 *)(param_1 + 8) = uStack_3c;
    *(undefined4 *)(param_1 + 0xc) = uStack_38;
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_30,local_34);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getMooredObjectState(class Ship *,int)

void __cdecl ShipTextData::getMooredObjectState(Ship *param_1,int param_2)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  basic_string<> local_6c [8];
  undefined4 uStack_64;
  void *local_44 [5];
  uint local_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &DAT_005c1368;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((param_2 == 0) || (*(int *)(param_2 + 0x174) == 0)) ||
     (*(int *)(*(int *)(param_2 + 0x174) + 0x60) != 4)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
  }
  else {
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = local_2c & 0xffffff00;
    local_8 = 0;
    uStack_64 = 0x4f44b6;
    pcVar2 = (char *)strUsingArgs((char *)local_44);
    local_8._0_1_ = 1;
    pcVar3 = pcVar2;
    if (0xf < *(uint *)(pcVar2 + 0x14)) {
      pcVar3 = *(char **)pcVar2;
    }
    std::basic_string<>::append((basic_string<> *)&local_2c,pcVar3,*(uint *)(pcVar2 + 0x10));
    local_8._0_1_ = 0;
    if (0xf < local_30) {
      pnVar5 = (nothrow_t *)(local_30 + 1);
      pvVar4 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar5) {
        pvVar4 = *(void **)((int)local_44[0] + -4);
        pnVar5 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar4,pnVar5);
    }
    uStack_64 = 0x4f452d;
    pcVar2 = (char *)strUsingArgs((char *)local_44);
    local_8._0_1_ = 2;
    pcVar3 = pcVar2;
    if (0xf < *(uint *)(pcVar2 + 0x14)) {
      pcVar3 = *(char **)pcVar2;
    }
    std::basic_string<>::append((basic_string<> *)&local_2c,pcVar3,*(uint *)(pcVar2 + 0x10));
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_30) {
      pnVar5 = (nothrow_t *)(local_30 + 1);
      pvVar4 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar5) {
        pvVar4 = *(void **)((int)local_44[0] + -4);
        pnVar5 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar4,pnVar5);
    }
    local_6c[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_6c,"",0);
    bVar1 = ShipData::checkMooredWreckHasUnclampedCargo(param_2,0);
    if (!bVar1) {
      std::basic_string<>::append((basic_string<> *)&local_2c,"`$ERR  : `@*MAG LOCKED*",0x17);
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(uint *)param_1 = local_2c;
    *(undefined4 *)(param_1 + 4) = uStack_28;
    *(undefined4 *)(param_1 + 8) = uStack_24;
    *(undefined4 *)(param_1 + 0xc) = uStack_20;
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_18,local_1c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getMooredCargoState(class Ship *,int)

void __cdecl ShipTextData::getMooredCargoState(Ship *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  word *pwVar7;
  char *pcVar8;
  int iVar9;
  GameData *this;
  void *pvVar10;
  char *pcVar11;
  nothrow_t *pnVar12;
  bool bVar13;
  uint local_a0;
  int local_74;
  int local_68;
  int local_64;
  uint local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  uint uStack_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &DAT_005c13a8;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"`@ERROR",7);
  }
  else {
    local_4c = 0;
    uStack_48 = 0xf;
    local_5c = local_5c & 0xffffff00;
    local_8 = 0;
    uStack_7 = 0;
    local_a0 = local_a0 & 0xffffff00;
    std::basic_string<>::assign((basic_string<> *)&local_a0,"",0);
    bVar4 = ShipData::checkMooredWreckHasNotUnclampedCargo(param_2,0);
    if (*(int *)(param_2 + 0x174) == 0) {
      std::basic_string<>::assign((basic_string<> *)&local_5c,"`8** unmoored **",0x10);
    }
    else {
      iVar1 = *(int *)(*(int *)(param_2 + 0x174) + 0xe8);
      if (iVar1 == 0) {
        std::basic_string<>::assign((basic_string<> *)&local_5c,"`7** no cargo located **",0x18);
      }
      else {
        local_68 = -1;
        iVar9 = 0;
        do {
          if ((iVar9 < 0) || ((0 < *(int *)(iVar1 + 8) && (*(int *)(iVar1 + 8) <= iVar9)))) {
            bVar13 = false;
          }
          else {
            bVar13 = *(int *)(iVar1 + 0xc + iVar9 * 4) != 0;
          }
          iVar5 = iVar9;
          if (!bVar13) {
            iVar5 = local_68;
          }
          iVar9 = iVar9 + 1;
          local_68 = iVar5;
        } while (iVar9 < 0xe);
        local_74 = 0;
        if (-1 < iVar5) {
          local_64 = 0xc;
          do {
            local_1c = 0;
            uStack_18 = 0xf;
            local_2c = (void *)((uint)local_2c & 0xffffff00);
            iVar1 = *(int *)(param_2 + 0x1f0);
            local_8 = 1;
            iVar9 = *(int *)(*(int *)(param_2 + 0x174) + 0xe8);
            if ((local_74 < 0) ||
               (((0 < *(int *)(iVar9 + 8) && (*(int *)(iVar9 + 8) <= local_74)) ||
                (*(int *)(iVar9 + local_64) == 0)))) {
              std::basic_string<>::assign((basic_string<> *)&local_2c,"`8no cargo pod",0xe);
            }
            else if (bVar4) {
              std::basic_string<>::assign((basic_string<> *)&local_2c,"`$-UNKNOWN-",0xb);
            }
            else {
              iVar2 = *(int *)(iVar9 + local_64);
              iVar6 = 1;
              do {
                if (*(char *)(iVar6 + iVar2) == '\0') {
                  if (*(char *)(iVar2 + 2) == '\0') {
                    this = (GameData *)0x37;
                    if (*(char *)(iVar2 + 1) != '\0') {
                      this = (GameData *)0x24;
                    }
                  }
                  else {
                    this = (GameData *)&DAT_00000023;
                  }
                  goto LAB_004f4816;
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < 3);
              this = (GameData *)0x21;
LAB_004f4816:
              if (*(int *)(*(int *)(iVar9 + local_64) + 8) < 1) {
                pwVar7 = (word *)strUsingArgs((char *)local_44);
              }
              else {
                GameData::getGood(this,*(int *)(*(int *)(iVar9 + local_64) + 4));
                local_a0 = 0x4f4848;
                pwVar7 = (word *)strUsingArgs((char *)local_44);
              }
              if ((word *)&local_2c != pwVar7) {
                word::~word((word *)&local_2c);
                local_2c = *(void **)pwVar7;
                uStack_28 = *(undefined4 *)(pwVar7 + 4);
                uStack_24 = *(undefined4 *)(pwVar7 + 8);
                uStack_20 = *(undefined4 *)(pwVar7 + 0xc);
                local_1c = *(undefined4 *)(pwVar7 + 0x10);
                uStack_18 = *(uint *)(pwVar7 + 0x14);
                *(undefined4 *)(pwVar7 + 0x10) = 0;
                *(undefined4 *)(pwVar7 + 0x14) = 0xf;
                *pwVar7 = (word)0x0;
              }
              if (0xf < local_30) {
                pnVar12 = (nothrow_t *)(local_30 + 1);
                pvVar10 = local_44[0];
                if ((nothrow_t *)0xfff < pnVar12) {
                  pvVar10 = *(void **)((int)local_44[0] + -4);
                  pnVar12 = (nothrow_t *)(local_30 + 0x24);
                  uVar3 = local_8;
                  if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10))) goto LAB_004f4a1f;
                }
                operator_delete(pvVar10,pnVar12);
              }
            }
            local_a0 = 0x32;
            if (iVar1 == local_74) {
              local_a0 = 0x25;
            }
            local_74 = local_74 + 1;
            pcVar8 = (char *)strUsingArgs((char *)local_44,"`%c[%s`%c%d`%c] %s\n");
            local_8 = 2;
            pcVar11 = pcVar8;
            if (0xf < *(uint *)(pcVar8 + 0x14)) {
              pcVar11 = *(char **)pcVar8;
            }
            std::basic_string<>::append
                      ((basic_string<> *)&local_5c,pcVar11,*(uint *)(pcVar8 + 0x10));
            local_8 = 1;
            uVar3 = local_8;
            local_8 = 1;
            if (0xf < local_30) {
              pnVar12 = (nothrow_t *)(local_30 + 1);
              pvVar10 = local_44[0];
              if ((nothrow_t *)0xfff < pnVar12) {
                pvVar10 = *(void **)((int)local_44[0] + -4);
                pnVar12 = (nothrow_t *)(local_30 + 0x24);
                if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10))) goto LAB_004f4a1f;
              }
              operator_delete(pvVar10,pnVar12);
            }
            local_8 = 0;
            local_34 = 0;
            local_30 = 0xf;
            local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
            if (0xf < uStack_18) {
              pnVar12 = (nothrow_t *)(uStack_18 + 1);
              pvVar10 = local_2c;
              if ((nothrow_t *)0xfff < pnVar12) {
                pvVar10 = *(void **)((int)local_2c + -4);
                pnVar12 = (nothrow_t *)(uStack_18 + 0x24);
                uVar3 = local_8;
                if (0x1f < (uint)((int)local_2c + (-4 - (int)pvVar10))) {
LAB_004f4a1f:
                  local_8 = uVar3;
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar10,pnVar12);
            }
            local_64 = local_64 + 4;
          } while (local_74 <= iVar5);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(uint *)param_1 = local_5c;
    *(undefined4 *)(param_1 + 4) = uStack_58;
    *(undefined4 *)(param_1 + 8) = uStack_54;
    *(undefined4 *)(param_1 + 0xc) = uStack_50;
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_48,local_4c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getShipCargoState(class Ship *,int)

void __cdecl ShipTextData::getShipCargoState(Ship *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  Good *pGVar7;
  Good *pGVar8;
  word *pwVar9;
  undefined4 ****ppppuVar10;
  undefined4 uVar11;
  char *pcVar12;
  char *pcVar13;
  GameData *this;
  void *pvVar14;
  undefined4 uVar15;
  nothrow_t *pnVar16;
  bool bVar17;
  undefined4 local_6c;
  int local_64;
  int local_60;
  uint local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 ***local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  uint uStack_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &DAT_005c13e8;
  local_10 = ExceptionList;
  uVar5 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar5;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"`@ERROR",7);
  }
  else {
    local_4c = 0;
    uStack_48 = 0xf;
    local_5c = local_5c & 0xffffff00;
    uStack_7 = 0;
    local_60 = 0;
    local_64 = 0xc;
    local_6c = 0x25;
    do {
      iVar1 = *(int *)(param_2 + 0x1ec);
      local_1c = 0;
      uStack_18 = 0xf;
      local_2c = (undefined4 ***)((uint)local_2c & 0xffffff00);
      local_8 = 1;
      if (local_60 < *(int *)(*(int *)(param_2 + 0x254) + 0xe4)) {
        iVar2 = *(int *)(param_2 + 0x1f8);
        if ((local_60 < 0) ||
           (((0 < *(int *)(iVar2 + 8) && (*(int *)(iVar2 + 8) <= local_60)) ||
            (*(int *)(local_64 + iVar2) == 0)))) {
          std::basic_string<>::assign((basic_string<> *)&local_2c,"`8no cargo pod",0xe);
        }
        else {
          iVar3 = *(int *)(local_64 + iVar2);
          iVar6 = 1;
          do {
            if (*(char *)(iVar3 + iVar6) == '\0') {
              if (*(char *)(iVar3 + 2) == '\0') {
                this = (GameData *)0x37;
                if (*(char *)(iVar3 + 1) != '\0') {
                  this = (GameData *)0x24;
                }
              }
              else {
                this = (GameData *)&DAT_00000023;
              }
              goto LAB_004f4b5a;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < 3);
          this = (GameData *)0x21;
LAB_004f4b5a:
          iVar3 = *(int *)(*(int *)(local_64 + iVar2) + 8);
          if (iVar3 < 1) {
            pwVar9 = (word *)strUsingArgs((char *)local_44,"`%cempty pod",this,uVar5);
          }
          else {
            pGVar7 = GameData::getGood(this,*(int *)(*(int *)(local_64 + iVar2) + 4));
            pGVar8 = pGVar7 + 4;
            if (0xf < *(uint *)(pGVar7 + 0x18)) {
              pGVar8 = *(Good **)pGVar8;
            }
            pwVar9 = (word *)strUsingArgs((char *)local_44,"%dx `%c%s",iVar3,this,pGVar8);
          }
          if ((word *)&local_2c != pwVar9) {
            word::~word((word *)&local_2c);
            local_2c = *(undefined4 ****)pwVar9;
            uStack_28 = *(undefined4 *)(pwVar9 + 4);
            uStack_24 = *(undefined4 *)(pwVar9 + 8);
            uStack_20 = *(undefined4 *)(pwVar9 + 0xc);
            local_1c = *(undefined4 *)(pwVar9 + 0x10);
            uStack_18 = *(uint *)(pwVar9 + 0x14);
            *(undefined4 *)(pwVar9 + 0x10) = 0;
            *(undefined4 *)(pwVar9 + 0x14) = 0xf;
            *pwVar9 = (word)0x0;
          }
          if (0xf < local_30) {
            pnVar16 = (nothrow_t *)(local_30 + 1);
            pvVar14 = local_44[0];
            if ((nothrow_t *)0xfff < pnVar16) {
              pvVar14 = *(void **)((int)local_44[0] + -4);
              pnVar16 = (nothrow_t *)(local_30 + 0x24);
              uVar4 = local_8;
              if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar14))) goto LAB_004f4d63;
            }
            operator_delete(pvVar14,pnVar16);
          }
        }
        ppppuVar10 = &local_2c;
        if (0xf < uStack_18) {
          ppppuVar10 = (undefined4 ****)local_2c;
        }
        bVar17 = iVar1 == local_60;
        uVar15 = 0x32;
        if (bVar17) {
          uVar15 = local_6c;
        }
        uVar11 = 0x37;
        if (bVar17) {
          uVar11 = 0x25;
        }
        pcVar12 = "";
        if (local_60 < 9) {
          pcVar12 = " ";
        }
        pcVar13 = (char *)strUsingArgs((char *)local_44,"`%c[%s`%c%d`%c] %s\n",uVar15,pcVar12,uVar11
                                       ,local_60 + 1,uVar15,ppppuVar10);
        local_8 = 2;
        pcVar12 = pcVar13;
        if (0xf < *(uint *)(pcVar13 + 0x14)) {
          pcVar12 = *(char **)pcVar13;
        }
        std::basic_string<>::append((basic_string<> *)&local_5c,pcVar12,*(uint *)(pcVar13 + 0x10));
        local_8 = 1;
        uVar4 = local_8;
        local_8 = 1;
        if (0xf < local_30) {
          pnVar16 = (nothrow_t *)(local_30 + 1);
          pvVar14 = local_44[0];
          if ((nothrow_t *)0xfff < pnVar16) {
            pvVar14 = *(void **)((int)local_44[0] + -4);
            pnVar16 = (nothrow_t *)(local_30 + 0x24);
            if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar14))) goto LAB_004f4d63;
          }
          operator_delete(pvVar14,pnVar16);
        }
        local_8 = 0;
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        if (0xf < uStack_18) {
          pnVar16 = (nothrow_t *)(uStack_18 + 1);
          ppppuVar10 = (undefined4 ****)local_2c;
          if ((nothrow_t *)0xfff < pnVar16) {
            ppppuVar10 = (undefined4 ****)local_2c[-1];
            pnVar16 = (nothrow_t *)(uStack_18 + 0x24);
            uVar4 = local_8;
            if (0x1f < (uint)((int)local_2c + (-4 - (int)ppppuVar10))) {
LAB_004f4d63:
              local_8 = uVar4;
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(ppppuVar10,pnVar16);
        }
      }
      else {
        local_8 = 0;
      }
      local_64 = local_64 + 4;
      local_60 = local_60 + 1;
    } while (local_64 < 0x44);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(uint *)param_1 = local_5c;
    *(undefined4 *)(param_1 + 4) = uStack_58;
    *(undefined4 *)(param_1 + 8) = uStack_54;
    *(undefined4 *)(param_1 + 0xc) = uStack_50;
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_48,local_4c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getShipCargoDetails(class Ship *,int)

void __cdecl ShipTextData::getShipCargoDetails(Ship *param_1,int param_2)

{
  int iVar1;
  CargoHold *this;
  uint uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  Good *pGVar5;
  char *pcVar6;
  void *pvVar7;
  undefined4 ****ppppuVar8;
  nothrow_t *pnVar9;
  undefined4 ***local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &DAT_005c1450;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
  }
  else {
    local_34 = 0;
    uStack_30 = 0xf;
    local_44 = local_44 & 0xffffff00;
    local_8 = 0;
    iVar1 = *(int *)(param_2 + 0x1ec);
    this = *(CargoHold **)(param_2 + 0x1f8);
    if ((iVar1 < 0) ||
       (((0 < *(int *)(this + 8) && (*(int *)(this + 8) <= iVar1)) ||
        (*(int *)(this + iVar1 * 4 + 0xc) == 0)))) {
      pcVar4 = (char *)strUsingArgs((char *)local_2c,"`2Pod  : `8none\n",uVar2);
      local_8._0_1_ = 1;
      pcVar6 = pcVar4;
      if (0xf < *(uint *)(pcVar4 + 0x14)) {
        pcVar6 = *(char **)pcVar4;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar6,*(uint *)(pcVar4 + 0x10));
      local_8._0_1_ = 0;
      if (0xf < local_18) {
        pnVar9 = (nothrow_t *)(local_18 + 1);
        pvVar7 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar7 = *(void **)((int)local_2c[0] + -4);
          pnVar9 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar7,pnVar9);
      }
      pcVar4 = (char *)strUsingArgs((char *)local_2c,"`2Cont.: `8none\n",uVar2);
      local_8._0_1_ = 2;
      pcVar6 = pcVar4;
      if (0xf < *(uint *)(pcVar4 + 0x14)) {
        pcVar6 = *(char **)pcVar4;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar6,*(uint *)(pcVar4 + 0x10));
      local_8 = (uint)local_8._1_3_ << 8;
      if (0xf < local_18) {
        pnVar9 = (nothrow_t *)(local_18 + 1);
        pvVar7 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar7 = *(void **)((int)local_2c[0] + -4);
          pnVar9 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar7,pnVar9);
      }
      std::basic_string<>::append((basic_string<> *)&local_44,"`2Max. : `8nil",0xe);
    }
    else {
      puVar3 = (undefined4 *)CargoHold::describePod(this,(int)local_2c,SUB41(iVar1,0));
      local_8._0_1_ = 3;
      if (0xf < (uint)puVar3[5]) {
        puVar3 = (undefined4 *)*puVar3;
      }
      pcVar4 = (char *)strUsingArgs((char *)local_5c,"`2Pod  : %s\n",puVar3);
      local_8._0_1_ = 4;
      pcVar6 = pcVar4;
      if (0xf < *(uint *)(pcVar4 + 0x14)) {
        pcVar6 = *(char **)pcVar4;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar6,*(uint *)(pcVar4 + 0x10));
      local_8._0_1_ = 3;
      if (0xf < local_48) {
        pnVar9 = (nothrow_t *)(local_48 + 1);
        ppppuVar8 = (undefined4 ****)local_5c[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          ppppuVar8 = (undefined4 ****)local_5c[0][-1];
          pnVar9 = (nothrow_t *)(local_48 + 0x24);
          if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)ppppuVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppuVar8,pnVar9);
      }
      local_8._0_1_ = 0;
      local_4c = 0;
      local_48 = 0xf;
      local_5c[0] = (undefined4 ***)((uint)local_5c[0] & 0xffffff00);
      if (0xf < local_18) {
        pnVar9 = (nothrow_t *)(local_18 + 1);
        pvVar7 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar7 = *(void **)((int)local_2c[0] + -4);
          pnVar9 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar7,pnVar9);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      iVar1 = *(int *)(*(int *)(param_2 + 0x1f8) + 0xc + (int)*(GameData **)(param_2 + 0x1ec) * 4);
      if (*(int *)(iVar1 + 8) == 0) {
        std::basic_string<>::append((basic_string<> *)&local_44,"`2Cont.: `8nil\n",0xf);
      }
      else {
        pGVar5 = GameData::getGood(*(GameData **)(param_2 + 0x1ec),*(int *)(iVar1 + 4));
        if (pGVar5 == (Good *)0x0) {
          std::basic_string<>::append((basic_string<> *)&local_44,"`2Cont.: `%$unknown\n",0x14);
        }
        else {
          std::basic_string<>::basic_string<>
                    ((basic_string<> *)local_5c,*(basic_string<> **)(pGVar5 + 0x1c));
          local_8._0_1_ = 5;
          ppppuVar8 = local_5c;
          if (0xf < local_48) {
            ppppuVar8 = (undefined4 ****)local_5c[0];
          }
          iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0x1f8) + 0xc + *(int *)(param_2 + 0x1ec) * 4)
                          + 8);
          pcVar4 = (char *)strUsingArgs((char *)local_2c,"`2Cont.: `%c%dx %s\n",
                                        0x38 - (uint)(iVar1 != 0),iVar1,ppppuVar8);
          local_8._0_1_ = 6;
          pcVar6 = pcVar4;
          if (0xf < *(uint *)(pcVar4 + 0x14)) {
            pcVar6 = *(char **)pcVar4;
          }
          std::basic_string<>::append((basic_string<> *)&local_44,pcVar6,*(uint *)(pcVar4 + 0x10));
          local_8._0_1_ = 5;
          if (0xf < local_18) {
            pnVar9 = (nothrow_t *)(local_18 + 1);
            pvVar7 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar9) {
              pvVar7 = *(void **)((int)local_2c[0] + -4);
              pnVar9 = (nothrow_t *)(local_18 + 0x24);
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pvVar7,pnVar9);
          }
          local_8._0_1_ = 0;
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          if (0xf < local_48) {
            pnVar9 = (nothrow_t *)(local_48 + 1);
            ppppuVar8 = (undefined4 ****)local_5c[0];
            if ((nothrow_t *)0xfff < pnVar9) {
              ppppuVar8 = (undefined4 ****)local_5c[0][-1];
              pnVar9 = (nothrow_t *)(local_48 + 0x24);
              if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)ppppuVar8))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(ppppuVar8,pnVar9);
          }
        }
      }
      pcVar4 = (char *)strUsingArgs((char *)local_2c,"`2Max. : `7%d",0x14);
      local_8 = CONCAT31(local_8._1_3_,7);
      pcVar6 = pcVar4;
      if (0xf < *(uint *)(pcVar4 + 0x14)) {
        pcVar6 = *(char **)pcVar4;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar6,*(uint *)(pcVar4 + 0x10));
      if (0xf < local_18) {
        pnVar9 = (nothrow_t *)(local_18 + 1);
        pvVar7 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar7 = *(void **)((int)local_2c[0] + -4);
          pnVar9 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar7,pnVar9);
      }
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(uint *)param_1 = local_44;
    *(undefined4 *)(param_1 + 4) = uStack_40;
    *(undefined4 *)(param_1 + 8) = uStack_3c;
    *(undefined4 *)(param_1 + 0xc) = uStack_38;
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_30,local_34);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getDepotState(class Ship *,int)

void __cdecl ShipTextData::getDepotState(Ship *param_1,int param_2)

{
  uint uVar1;
  ShipModule *this;
  undefined1 uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  ShipMechanics *extraout_ECX;
  ShipMechanics *extraout_ECX_00;
  ShipMechanics *extraout_ECX_01;
  undefined4 uVar6;
  ShipMechanics *extraout_ECX_02;
  ShipMechanics *extraout_ECX_03;
  ShipMechanics *extraout_ECX_04;
  ShipMechanics *pSVar7;
  void *pvVar8;
  nothrow_t *pnVar9;
  double dVar10;
  void *local_5c [5];
  uint local_48;
  uint local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &DAT_005c14d0;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((param_2 == 0) || (*(int *)(param_2 + 0x178) == 0)) ||
     (*(int *)(*(int *)(*(int *)(param_2 + 0x178) + 0x254) + 0x158) != 3)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
  }
  else {
    local_34 = 0;
    uStack_30 = 0xf;
    local_44 = local_44 & 0xffffff00;
    local_8 = 0;
    std::basic_string<>::append((basic_string<> *)&local_44,"`2Docked with :\n",0x10);
    pcVar3 = (char *)strUsingArgs((char *)local_2c);
    local_8._0_1_ = 1;
    pcVar5 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar5 = *(char **)pcVar3;
    }
    std::basic_string<>::append((basic_string<> *)&local_44,pcVar5,*(uint *)(pcVar3 + 0x10));
    local_8 = (uint)local_8._1_3_ << 8;
    pSVar7 = extraout_ECX;
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      pvVar8 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar8 = *(void **)((int)local_2c[0] + -4);
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar8,pnVar9);
      pSVar7 = extraout_ECX_00;
    }
    if (Singleton<>::instance == (ShipMechanics *)0x0) {
      Singleton<>::instance = operator_new(1);
      pSVar7 = extraout_ECX_01;
    }
    iVar4 = ShipMechanics::getRepairPoints(pSVar7,(Ship *)param_2);
    uVar6 = 0x38;
    if (0 < *(int *)(*(int *)(g_gameData + 0x124) + 0x1c)) {
      uVar6 = 0x24;
    }
    pcVar3 = (char *)strUsingArgs((char *)local_2c,"`2Credits : `%c%d`$c\n",uVar6,
                                  *(int *)(*(int *)(g_gameData + 0x124) + 0x1c));
    local_8._0_1_ = 2;
    pcVar5 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar5 = *(char **)pcVar3;
    }
    std::basic_string<>::append((basic_string<> *)&local_44,pcVar5,*(uint *)(pcVar3 + 0x10));
    local_8._0_1_ = 0;
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      pvVar8 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar8 = *(void **)((int)local_2c[0] + -4);
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar8,pnVar9);
    }
    std::basic_string<>::append((basic_string<> *)&local_44,"\n** Services **\n",0x10);
    if (iVar4 * 5 < 1) {
      pcVar5 = (char *)strUsingArgs((char *)local_2c);
      local_8._0_1_ = 4;
      uVar1 = *(uint *)(pcVar5 + 0x14);
    }
    else {
      pcVar5 = (char *)strUsingArgs((char *)local_2c);
      local_8._0_1_ = 3;
      uVar1 = *(uint *)(pcVar5 + 0x14);
    }
    pcVar3 = pcVar5;
    if (0xf < uVar1) {
      pcVar3 = *(char **)pcVar5;
    }
    std::basic_string<>::append((basic_string<> *)&local_44,pcVar3,*(uint *)(pcVar5 + 0x10));
    local_8._0_1_ = 0;
    pSVar7 = extraout_ECX_02;
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      pvVar8 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar8 = *(void **)((int)local_2c[0] + -4);
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        uVar2 = (undefined1)local_8;
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8))) goto LAB_004f53b2;
      }
      operator_delete(pvVar8,pnVar9);
      pSVar7 = extraout_ECX_03;
    }
    if (Singleton<>::instance == (ShipMechanics *)0x0) {
      Singleton<>::instance = operator_new(1);
      pSVar7 = extraout_ECX_04;
    }
    iVar4 = ShipMechanics::moduleRepairCost(pSVar7,(Ship *)param_2);
    if (iVar4 < 1) {
      pcVar5 = (char *)strUsingArgs((char *)local_2c);
      local_8._0_1_ = 6;
      uVar1 = *(uint *)(pcVar5 + 0x14);
    }
    else {
      pcVar5 = (char *)strUsingArgs((char *)local_2c);
      local_8._0_1_ = 5;
      uVar1 = *(uint *)(pcVar5 + 0x14);
    }
    pcVar3 = pcVar5;
    if (0xf < uVar1) {
      pcVar3 = *(char **)pcVar5;
    }
    std::basic_string<>::append((basic_string<> *)&local_44,pcVar3,*(uint *)(pcVar5 + 0x10));
    local_8._0_1_ = 0;
    uVar2 = (undefined1)local_8;
    local_8._0_1_ = 0;
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      pvVar8 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar8 = *(void **)((int)local_2c[0] + -4);
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8))) goto LAB_004f53b2;
      }
      operator_delete(pvVar8,pnVar9);
    }
    if (*(int *)(*(int *)(param_2 + 0x40) + 8) != 0) {
      Singleton<>::getInstance();
      iVar4 = *(int *)(*(int *)(param_2 + 0x40) + 8);
      pcVar3 = (char *)strUsingArgs((char *)local_2c,"`2CMs          : %d/%.0f (`$%dc`2)\n",
                                    *(undefined4 *)(iVar4 + 0x68),
                                    (double)*(float *)(*(int *)(iVar4 + 8) + 0x104),0x19);
      local_8._0_1_ = 7;
      pcVar5 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar5 = *(char **)pcVar3;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar5,*(uint *)(pcVar3 + 0x10));
      local_8._0_1_ = 0;
      if (0xf < local_18) {
        pnVar9 = (nothrow_t *)(local_18 + 1);
        pvVar8 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar8 = *(void **)((int)local_2c[0] + -4);
          pnVar9 = (nothrow_t *)(local_18 + 0x24);
          uVar2 = (undefined1)local_8;
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8))) goto LAB_004f53b2;
        }
        operator_delete(pvVar8,pnVar9);
      }
    }
    if (*(int *)(*(int *)(param_2 + 0x40) + 0x20) != 0) {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      std::basic_string<>::assign((basic_string<> *)local_2c,"m10",3);
      local_8._0_1_ = 8;
      Singleton<>::getInstance();
      local_8._0_1_ = 0;
      if (0xf < local_18) {
        pnVar9 = (nothrow_t *)(local_18 + 1);
        pvVar8 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar8 = *(void **)((int)local_2c[0] + -4);
          pnVar9 = (nothrow_t *)(local_18 + 0x24);
          uVar2 = (undefined1)local_8;
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8))) goto LAB_004f53b2;
        }
        operator_delete(pvVar8,pnVar9);
      }
      uVar6 = 0x50;
      this = *(ShipModule **)(*(int *)(param_2 + 0x40) + 0x20);
      dVar10 = (double)*(float *)(*(int *)(this + 8) + 0x104);
      iVar4 = ShipModule::getHousedObjectCount(this);
      pcVar3 = (char *)strUsingArgs((char *)local_5c,"`2Torpedos     : %d/%.0f (`$%dc`2)\n",iVar4,
                                    dVar10,uVar6);
      local_8._0_1_ = 9;
      pcVar5 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar5 = *(char **)pcVar3;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar5,*(uint *)(pcVar3 + 0x10));
      if (0xf < local_48) {
        pnVar9 = (nothrow_t *)(local_48 + 1);
        pvVar8 = local_5c[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar8 = *(void **)((int)local_5c[0] + -4);
          pnVar9 = (nothrow_t *)(local_48 + 0x24);
          uVar2 = (undefined1)local_8;
          if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar8))) {
LAB_004f53b2:
            local_8._0_1_ = uVar2;
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar8,pnVar9);
      }
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(uint *)param_1 = local_44;
    *(undefined4 *)(param_1 + 4) = uStack_40;
    *(undefined4 *)(param_1 + 8) = uStack_3c;
    *(undefined4 *)(param_1 + 0xc) = uStack_38;
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_30,local_34);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getCassandraDetails(class Ship *,int)

void __cdecl ShipTextData::getCassandraDetails(Ship *param_1,int param_2)

{
  bool bVar1;
  FlagManager *pFVar2;
  basic_string<> local_50 [12];
  undefined4 uStack_44;
  char *pcVar3;
  uint uVar4;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &DAT_005c1528;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    uStack_44 = 0x4f56d4;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
  }
  else {
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = local_2c & 0xffffff00;
    local_8 = 0;
    local_50[0] = (basic_string<>)0x0;
    std::basic_string<>::assign(local_50,"tutorial_jumped",0xf);
    local_8._0_1_ = 1;
    pFVar2 = Singleton<>::getInstance();
    local_8._0_1_ = 0;
    bVar1 = FlagManager::flagSet(pFVar2);
    if (bVar1) {
      uStack_44 = 0x4f573e;
      std::basic_string<>::append
                ((basic_string<> *)&local_2c,"`%Ship State : `@ERROR: NO SIGNAL\n",0x22);
      uStack_44 = 0x4f574d;
      std::basic_string<>::append((basic_string<> *)&local_2c,"`%Jumps Left : `$UNKNOWN\n\n",0x1a);
      uStack_44 = 0x4f575c;
      std::basic_string<>::append((basic_string<> *)&local_2c,"`%Population : `$UNKNOWN\n",0x19);
      uStack_44 = 0x4f576b;
      std::basic_string<>::append((basic_string<> *)&local_2c,"`%Solar Wings: `$UNKNOWN\n",0x19);
      uStack_44 = 0x4f577a;
      std::basic_string<>::append((basic_string<> *)&local_2c,"`%Batteries  : `$UNKNOWN\n",0x19);
      uStack_44 = 0x4f5789;
      std::basic_string<>::append((basic_string<> *)&local_2c,"`%Reactors   : `$UNKNOWN\n",0x19);
      uStack_44 = 0x4f5798;
      std::basic_string<>::append((basic_string<> *)&local_2c,"`%Jump Drive : `$UNKNOWN\n\n",0x1a);
      uVar4 = 0x18;
      pcVar3 = "`%Hull Insp. : `$UNKNOWN";
    }
    else {
      local_50[0] = (basic_string<>)0x0;
      std::basic_string<>::assign(local_50,"tutorial_jumping",0x10);
      local_8._0_1_ = 2;
      pFVar2 = Singleton<>::getInstance();
      local_8._0_1_ = 0;
      bVar1 = FlagManager::flagSet(pFVar2);
      if (bVar1) {
        uStack_44 = 0x4f57f0;
        std::basic_string<>::append((basic_string<> *)&local_2c,"`%Ship State : `#JUMPING\n",0x19);
        uStack_44 = 0x4f57ff;
        std::basic_string<>::append((basic_string<> *)&local_2c,"`%Jumps Left : `!1\n\n",0x14);
        uStack_44 = 0x4f580e;
        std::basic_string<>::append((basic_string<> *)&local_2c,"`%Population : `!498,091\n",0x19);
        uStack_44 = 0x4f581d;
        std::basic_string<>::append((basic_string<> *)&local_2c,"`%Solar Wings: `7retracted\n",0x1b)
        ;
        uStack_44 = 0x4f582c;
        std::basic_string<>::append((basic_string<> *)&local_2c,"`%Batteries  : `$99.78%\n",0x18);
        uStack_44 = 0x4f583b;
        std::basic_string<>::append((basic_string<> *)&local_2c,"`%Reactors   : `$RUNNING\n",0x19);
        uStack_44 = 0x4f584a;
        std::basic_string<>::append
                  ((basic_string<> *)&local_2c,"`%Jump Drive : `!#JUMPING\n\n",0x1b);
        uVar4 = 0x15;
        pcVar3 = "`%Hull Insp. : `!100%";
      }
      else {
        local_50[0] = (basic_string<>)0x0;
        std::basic_string<>::assign(local_50,"tutorial_scanned",0x10);
        local_8._0_1_ = 3;
        pFVar2 = Singleton<>::getInstance();
        local_8._0_1_ = 0;
        bVar1 = FlagManager::flagSet(pFVar2);
        if (bVar1) {
          uStack_44 = 0x4f58a2;
          std::basic_string<>::append
                    ((basic_string<> *)&local_2c,"`%Ship State : `$AWAITING JUMP SYNC\n",0x24);
          uStack_44 = 0x4f58b1;
          std::basic_string<>::append((basic_string<> *)&local_2c,"`%Jumps Left : `!1\n\n",0x14);
          uStack_44 = 0x4f58c0;
          std::basic_string<>::append((basic_string<> *)&local_2c,"`%Population : `!498,091\n",0x19)
          ;
          uStack_44 = 0x4f58cf;
          std::basic_string<>::append
                    ((basic_string<> *)&local_2c,"`%Solar Wings: `7retracted\n",0x1b);
          uStack_44 = 0x4f58de;
          std::basic_string<>::append((basic_string<> *)&local_2c,"`%Batteries  : `$99.78%\n",0x18);
          uStack_44 = 0x4f58ed;
          std::basic_string<>::append((basic_string<> *)&local_2c,"`%Reactors   : `$RUNNING\n",0x19)
          ;
          uStack_44 = 0x4f58fc;
          std::basic_string<>::append
                    ((basic_string<> *)&local_2c,"`%Jump Drive : `!SPUN UP\n\n",0x1a);
          uVar4 = 0x15;
          pcVar3 = "`%Hull Insp. : `%100%";
        }
        else {
          local_50[0] = (basic_string<>)0x0;
          std::basic_string<>::assign(local_50,"tutorial_scanning",0x11);
          local_8._0_1_ = 4;
          pFVar2 = Singleton<>::getInstance();
          local_8._0_1_ = 0;
          bVar1 = FlagManager::flagSet(pFVar2);
          if (bVar1) {
            uStack_44 = 0x4f5954;
            std::basic_string<>::append
                      ((basic_string<> *)&local_2c,"`%Ship State : `$PRE-JUMP CHECK\n",0x20);
            uStack_44 = 0x4f5963;
            std::basic_string<>::append((basic_string<> *)&local_2c,"`%Jumps Left : `!1\n\n",0x14);
            uStack_44 = 0x4f5972;
            std::basic_string<>::append
                      ((basic_string<> *)&local_2c,"`%Population : `!498,091\n",0x19);
            uStack_44 = 0x4f5981;
            std::basic_string<>::append
                      ((basic_string<> *)&local_2c,"`%Solar Wings: `7retracted\n",0x1b);
            uStack_44 = 0x4f5990;
            std::basic_string<>::append
                      ((basic_string<> *)&local_2c,"`%Batteries  : `$99.78%\n",0x18);
            uStack_44 = 0x4f599f;
            std::basic_string<>::append
                      ((basic_string<> *)&local_2c,"`%Reactors   : `$RUNNING\n",0x19);
            uStack_44 = 0x4f59ae;
            std::basic_string<>::append
                      ((basic_string<> *)&local_2c,"`%Jump Drive : `!SPUN UP\n\n",0x1a);
            uVar4 = 0x14;
            pcVar3 = "`%Hull Insp. : `$92%";
          }
          else {
            uStack_44 = 0x4f59bc;
            std::basic_string<>::append
                      ((basic_string<> *)&local_2c,"`%Ship State : `$PRE-JUMP CHECK\n",0x20);
            uStack_44 = 0x4f59cb;
            std::basic_string<>::append((basic_string<> *)&local_2c,"`%Jumps Left : `!1\n\n",0x14);
            uStack_44 = 0x4f59da;
            std::basic_string<>::append
                      ((basic_string<> *)&local_2c,"`%Population : `!498,091\n",0x19);
            uStack_44 = 0x4f59e9;
            std::basic_string<>::append
                      ((basic_string<> *)&local_2c,"`%Solar Wings: `7retracted\n",0x1b);
            uStack_44 = 0x4f59f8;
            std::basic_string<>::append
                      ((basic_string<> *)&local_2c,"`%Batteries  : `$99.78%\n",0x18);
            uStack_44 = 0x4f5a07;
            std::basic_string<>::append
                      ((basic_string<> *)&local_2c,"`%Reactors   : `$RUNNING\n",0x19);
            uStack_44 = 0x4f5a16;
            std::basic_string<>::append
                      ((basic_string<> *)&local_2c,"`%Jump Drive : `!SPUN UP\n\n",0x1a);
            uVar4 = 0x13;
            pcVar3 = "`%Hull Insp. : `^4%";
          }
        }
      }
    }
    uStack_44 = 0x4f5a25;
    std::basic_string<>::append((basic_string<> *)&local_2c,pcVar3,uVar4);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(uint *)param_1 = local_2c;
    *(undefined4 *)(param_1 + 4) = uStack_28;
    *(undefined4 *)(param_1 + 8) = uStack_24;
    *(undefined4 *)(param_1 + 0xc) = uStack_20;
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_18,local_1c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getRemoraDockDetails(class Ship *,int)

void __cdecl ShipTextData::getRemoraDockDetails(Ship *param_1,int param_2)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  char *pcVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  void *local_44 [5];
  uint local_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &DAT_005c1368;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
  }
  else {
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = local_2c & 0xffffff00;
    local_8 = 0;
    std::basic_string<>::append((basic_string<> *)&local_2c,"`%REMORA UTILITY SHUTTLE\n",0x19);
    piVar3 = (int *)(param_2 + 8);
    if (0xf < *(uint *)(param_2 + 0x1c)) {
      piVar3 = (int *)*piVar3;
    }
    pcVar2 = (char *)strUsingArgs((char *)local_44,"`!%s\n\n",piVar3,uVar1);
    local_8._0_1_ = 1;
    pcVar4 = pcVar2;
    if (0xf < *(uint *)(pcVar2 + 0x14)) {
      pcVar4 = *(char **)pcVar2;
    }
    std::basic_string<>::append((basic_string<> *)&local_2c,pcVar4,*(uint *)(pcVar2 + 0x10));
    local_8._0_1_ = 0;
    if (0xf < local_30) {
      pnVar6 = (nothrow_t *)(local_30 + 1);
      pvVar5 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_44[0] + -4);
        pnVar6 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
    piVar3 = (int *)(param_2 + 0x238);
    if (0xf < *(uint *)(param_2 + 0x24c)) {
      piVar3 = (int *)*piVar3;
    }
    pcVar2 = (char *)strUsingArgs((char *)local_44,"`7Registry : `!%s\n",piVar3,uVar1);
    local_8._0_1_ = 2;
    pcVar4 = pcVar2;
    if (0xf < *(uint *)(pcVar2 + 0x14)) {
      pcVar4 = *(char **)pcVar2;
    }
    std::basic_string<>::append((basic_string<> *)&local_2c,pcVar4,*(uint *)(pcVar2 + 0x10));
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_30) {
      pnVar6 = (nothrow_t *)(local_30 + 1);
      pvVar5 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_44[0] + -4);
        pnVar6 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
    std::basic_string<>::append((basic_string<> *)&local_2c,"`7Shuttle #: `74`%/`726\n",0x18);
    std::basic_string<>::append
              ((basic_string<> *)&local_2c,"\n\n`%CHANGE ROOMS: `$arrow keys while zoomed out",0x2f)
    ;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(uint *)param_1 = local_2c;
    *(undefined4 *)(param_1 + 4) = uStack_28;
    *(undefined4 *)(param_1 + 8) = uStack_24;
    *(undefined4 *)(param_1 + 0xc) = uStack_20;
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_18,local_1c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getInfopediaArticleDetails(class Ship *,int)

Ship * __cdecl ShipTextData::getInfopediaArticleDetails(Ship *param_1,int param_2)

{
  Infopedia *pIVar1;
  
  pIVar1 = Singleton<Infopedia>::getInstance();
  if (*(int *)(pIVar1 + 0x34) != 0) {
    pIVar1 = Singleton<Infopedia>::getInstance();
    std::basic_string<>::basic_string<>
              ((basic_string<> *)param_1,(basic_string<> *)(*(int *)(pIVar1 + 0x34) + 0x54));
    return param_1;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (Ship)0x0;
  std::basic_string<>::assign((basic_string<> *)param_1,"** no article selected **",0x19);
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getCassandraDockingBay(class Ship *,int)

void __cdecl ShipTextData::getCassandraDockingBay(Ship *param_1,int param_2)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  undefined4 *puVar6;
  void *local_44 [5];
  uint local_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &DAT_005c1560;
  local_10 = ExceptionList;
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  if ((param_2 == 0) || (*(int *)(param_2 + 0x178) == 0)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
  }
  else {
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = local_2c & 0xffffff00;
    std::basic_string<>::assign((basic_string<> *)&local_2c,"`!- CASSANDRA DOCKS -\n",0x16);
    local_8 = 0;
    std::basic_string<>::append((basic_string<> *)&local_2c,"`7Port Wing\n",0xc);
    std::basic_string<>::append((basic_string<> *)&local_2c,"`%Umbillical 16B-C ->\n",0x16);
    std::basic_string<>::append((basic_string<> *)&local_2c,"`%<- Transportation\n",0x14);
    puVar6 = (undefined4 *)(param_2 + 8);
    if (0xf < *(uint *)(param_2 + 0x1c)) {
      puVar6 = (undefined4 *)*puVar6;
    }
    pcVar2 = (char *)strUsingArgs((char *)local_44,"`%%4A: `%%%s\n",puVar6,uVar1);
    local_8._0_1_ = 1;
    pcVar3 = pcVar2;
    if (0xf < *(uint *)(pcVar2 + 0x14)) {
      pcVar3 = *(char **)pcVar2;
    }
    std::basic_string<>::append((basic_string<> *)&local_2c,pcVar3,*(uint *)(pcVar2 + 0x10));
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_30) {
      pnVar5 = (nothrow_t *)(local_30 + 1);
      pvVar4 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar5) {
        pvVar4 = *(void **)((int)local_44[0] + -4);
        pnVar5 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar4,pnVar5);
    }
    std::basic_string<>::append((basic_string<> *)&local_2c,"`%4B: `7Alexei Leonov\n",0x16);
    std::basic_string<>::append((basic_string<> *)&local_2c,"`%4C: `7Kathryn C. Thornton",0x1b);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(uint *)param_1 = local_2c;
    *(undefined4 *)(param_1 + 4) = uStack_28;
    *(undefined4 *)(param_1 + 8) = uStack_24;
    *(undefined4 *)(param_1 + 0xc) = uStack_20;
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_18,local_1c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getMooredCargoDetails(class Ship *,int)

void __cdecl ShipTextData::getMooredCargoDetails(Ship *param_1,int param_2)

{
  CargoHold *this;
  int iVar1;
  undefined1 uVar2;
  bool bVar3;
  basic_string<> *pbVar4;
  Good *pGVar5;
  void *pvVar6;
  CargoHold *this_00;
  void *pvVar7;
  nothrow_t *pnVar8;
  uint local_84;
  char *pcVar9;
  uint uVar10;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &DAT_005c15d8;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((param_2 == 0) || (*(int *)(param_2 + 0x174) == 0)) ||
     (*(int *)(*(int *)(param_2 + 0x174) + 0xe8) == 0)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    goto LAB_004f6203;
  }
  local_34 = 0;
  uStack_30 = 0xf;
  local_44 = local_44 & 0xffffff00;
  local_8 = 0;
  uStack_7 = 0;
  local_84 = local_84 & 0xffffff00;
  std::basic_string<>::assign((basic_string<> *)&local_84,"",0);
  bVar3 = ShipData::checkMooredWreckHasNotUnclampedCargo(param_2,0);
  if (bVar3) {
    uVar10 = 0x1f;
    pcVar9 = "`$Board vessel to remove locks.";
    goto LAB_004f61dc;
  }
  this = *(CargoHold **)(*(int *)(param_2 + 0x174) + 0xe8);
  if (this == (CargoHold *)0x0) {
    pbVar4 = (basic_string<> *)strUsingArgs((char *)local_2c);
    local_8 = 1;
    std::basic_string<>::append((basic_string<> *)&local_44,pbVar4);
    local_8 = 0;
    if (0xf < local_18) {
      pnVar8 = (nothrow_t *)(local_18 + 1);
      pvVar6 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar8) {
        pvVar6 = *(void **)((int)local_2c[0] + -4);
        pnVar8 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar6,pnVar8);
    }
    pbVar4 = (basic_string<> *)strUsingArgs((char *)local_2c);
    local_8 = 2;
LAB_004f5f45:
    std::basic_string<>::append((basic_string<> *)&local_44,pbVar4);
    pvVar6 = local_2c[0];
    uVar10 = local_18;
    if (0xf < local_18) {
LAB_004f5f5e:
      pnVar8 = (nothrow_t *)(uVar10 + 1);
      pvVar7 = pvVar6;
      if ((nothrow_t *)0xfff < pnVar8) {
        pvVar7 = *(void **)((int)pvVar6 + -4);
        pnVar8 = (nothrow_t *)(uVar10 + 0x24);
        uVar2 = local_8;
        if (0x1f < (uint)((int)pvVar6 + (-4 - (int)pvVar7))) {
LAB_004f5f80:
          local_8 = uVar2;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar7,pnVar8);
    }
  }
  else {
    bVar3 = CargoHold::podExists(this,*(int *)(param_2 + 0x1f0));
    if (!bVar3) {
      pbVar4 = (basic_string<> *)strUsingArgs((char *)local_2c);
      local_8 = 3;
      std::basic_string<>::append((basic_string<> *)&local_44,pbVar4);
      local_8 = 0;
      if (0xf < local_18) {
        pnVar8 = (nothrow_t *)(local_18 + 1);
        pvVar6 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar8) {
          pvVar6 = *(void **)((int)local_2c[0] + -4);
          pnVar8 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar6,pnVar8);
      }
      pbVar4 = (basic_string<> *)strUsingArgs((char *)local_2c);
      local_8 = 4;
      goto LAB_004f5f45;
    }
    CargoHold::describePod(this_00,(int)local_2c,SUB41(*(undefined4 *)(param_2 + 0x1f0),0));
    local_8 = 5;
    pbVar4 = (basic_string<> *)strUsingArgs((char *)local_5c);
    local_8 = 6;
    std::basic_string<>::append((basic_string<> *)&local_44,pbVar4);
    local_8 = 5;
    uVar2 = local_8;
    local_8 = 5;
    if (0xf < local_48) {
      pnVar8 = (nothrow_t *)(local_48 + 1);
      pvVar6 = local_5c[0];
      if ((nothrow_t *)0xfff < pnVar8) {
        pvVar6 = *(void **)((int)local_5c[0] + -4);
        pnVar8 = (nothrow_t *)(local_48 + 0x24);
        if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar6))) goto LAB_004f5f80;
      }
      operator_delete(pvVar6,pnVar8);
    }
    local_8 = 0;
    local_4c = 0;
    local_48 = 0xf;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
    if (0xf < local_18) {
      pnVar8 = (nothrow_t *)(local_18 + 1);
      pvVar6 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar8) {
        pvVar6 = *(void **)((int)local_2c[0] + -4);
        pnVar8 = (nothrow_t *)(local_18 + 0x24);
        uVar2 = local_8;
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) goto LAB_004f5f80;
      }
      operator_delete(pvVar6,pnVar8);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0x174) + 0xe8) + 0xc +
                    (int)*(GameData **)(param_2 + 0x1f0) * 4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
      pGVar5 = GameData::getGood(*(GameData **)(param_2 + 0x1f0),*(int *)(iVar1 + 4));
      if (pGVar5 == (Good *)0x0) {
        uVar10 = 0x14;
        pcVar9 = "`2Cont.: `%$unknown\n";
        goto LAB_004f61dc;
      }
      std::basic_string<>::basic_string<>
                ((basic_string<> *)local_5c,*(basic_string<> **)(pGVar5 + 0x1c));
      local_8 = 7;
      local_84 = 0x4f616e;
      pbVar4 = (basic_string<> *)strUsingArgs((char *)local_2c);
      local_8 = 8;
      std::basic_string<>::append((basic_string<> *)&local_44,pbVar4);
      if (0xf < local_18) {
        pnVar8 = (nothrow_t *)(local_18 + 1);
        pvVar6 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar8) {
          pvVar6 = *(void **)((int)local_2c[0] + -4);
          pnVar8 = (nothrow_t *)(local_18 + 0x24);
          uVar2 = local_8;
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) goto LAB_004f5f80;
        }
        operator_delete(pvVar6,pnVar8);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      pvVar6 = local_5c[0];
      uVar10 = local_48;
      if (local_48 < 0x10) goto LAB_004f61e4;
      goto LAB_004f5f5e;
    }
    uVar10 = 0xf;
    pcVar9 = "`2Cont.: `8nil\n";
LAB_004f61dc:
    std::basic_string<>::append((basic_string<> *)&local_44,pcVar9,uVar10);
  }
LAB_004f61e4:
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(uint *)param_1 = local_44;
  *(undefined4 *)(param_1 + 4) = uStack_40;
  *(undefined4 *)(param_1 + 8) = uStack_3c;
  *(undefined4 *)(param_1 + 0xc) = uStack_38;
  *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_30,local_34);
LAB_004f6203:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getPDSState(class Ship *,int)

void __cdecl ShipTextData::getPDSState(Ship *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  char *pcVar4;
  undefined4 uVar5;
  char *pcVar6;
  void *pvVar7;
  nothrow_t *pnVar8;
  float fVar9;
  uint uVar10;
  void *local_44 [5];
  uint local_30;
  void *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  uint uStack_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &DAT_005c1628;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    goto LAB_004f65cf;
  }
  local_1c = 0;
  uStack_18 = 0xf;
  local_2c = (void *)((uint)local_2c & 0xffffff00);
  local_8 = 0;
  if (*(int *)(*(int *)(param_2 + 0x40) + 0xc) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"`8no PDS",8);
    if (0xf < uStack_18) {
      pnVar8 = (nothrow_t *)(uStack_18 + 1);
      pvVar7 = local_2c;
      if ((nothrow_t *)0xfff < pnVar8) {
        pvVar7 = *(void **)((int)local_2c + -4);
        pnVar8 = (nothrow_t *)(uStack_18 + 0x24);
        if (0x1f < (uint)((int)local_2c + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar7,pnVar8);
    }
    goto LAB_004f65cf;
  }
  pcVar4 = (char *)strUsingArgs((char *)local_44);
  local_8._0_1_ = 1;
  pcVar6 = pcVar4;
  if (0xf < *(uint *)(pcVar4 + 0x14)) {
    pcVar6 = *(char **)pcVar4;
  }
  std::basic_string<>::append((basic_string<> *)&local_2c,pcVar6,*(uint *)(pcVar4 + 0x10));
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_30) {
    pnVar8 = (nothrow_t *)(local_30 + 1);
    pvVar7 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar7 = *(void **)((int)local_44[0] + -4);
      pnVar8 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar8);
  }
  bVar3 = false;
  iVar2 = *(int *)(*(int *)(param_2 + 0x40) + 0xc);
  if (*(char *)(iVar2 + 99) == '\0') {
    uVar10 = 0x14;
    pcVar6 = "`2State: `7disconn.\n";
LAB_004f63a9:
    std::basic_string<>::append((basic_string<> *)&local_2c,pcVar6,uVar10);
    bVar3 = true;
  }
  else {
    if (*(char *)(iVar2 + 0x62) == '\0') {
      pcVar6 = "`2State: `0standby\n";
      uVar10 = 0x13;
      goto LAB_004f63a9;
    }
    std::basic_string<>::append((basic_string<> *)&local_2c,"`2State: `@hot\n",0xf);
  }
  pcVar4 = (char *)strUsingArgs((char *)local_44);
  local_8._0_1_ = 2;
  pcVar6 = pcVar4;
  if (0xf < *(uint *)(pcVar4 + 0x14)) {
    pcVar6 = *(char **)pcVar4;
  }
  std::basic_string<>::append((basic_string<> *)&local_2c,pcVar6,*(uint *)(pcVar4 + 0x10));
  local_8._0_1_ = 0;
  if (0xf < local_30) {
    pnVar8 = (nothrow_t *)(local_30 + 1);
    pvVar7 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar7 = *(void **)((int)local_44[0] + -4);
      pnVar8 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar8);
  }
  if (bVar3) {
    pcVar4 = (char *)strUsingArgs((char *)local_44);
    local_8 = CONCAT31(local_8._1_3_,3);
    pcVar6 = pcVar4;
    if (0xf < *(uint *)(pcVar4 + 0x14)) {
      pcVar6 = *(char **)pcVar4;
    }
    std::basic_string<>::append((basic_string<> *)&local_2c,pcVar6,*(uint *)(pcVar4 + 0x10));
    if (0xf < local_30) {
      pnVar8 = (nothrow_t *)(local_30 + 1);
      pvVar7 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar8) {
        pvVar7 = *(void **)((int)local_44[0] + -4);
        pnVar8 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar7,pnVar8);
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(param_2 + 0x40) + 0xc);
    fVar1 = *(float *)(iVar2 + 0x6c);
    fVar9 = fVar1;
    if (fVar1 == -1.0) {
      fVar9 = 0.0;
    }
    uVar5 = 0x24;
    if (fVar1 == -1.0) {
      uVar5 = 0x30;
    }
    pcVar4 = (char *)strUsingArgs((char *)local_44,"`2CD: `%c%.2f`2/`0%.2f`2s\n",uVar5,(double)fVar9
                                  ,(double)*(float *)(*(int *)(iVar2 + 8) + 0x108));
    local_8._0_1_ = 4;
    pcVar6 = pcVar4;
    if (0xf < *(uint *)(pcVar4 + 0x14)) {
      pcVar6 = *(char **)pcVar4;
    }
    std::basic_string<>::append((basic_string<> *)&local_2c,pcVar6,*(uint *)(pcVar4 + 0x10));
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_30) {
      pnVar8 = (nothrow_t *)(local_30 + 1);
      pvVar7 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar8) {
        pvVar7 = *(void **)((int)local_44[0] + -4);
        pnVar8 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar7,pnVar8);
    }
    if (*(float *)(*(int *)(*(int *)(param_2 + 0x40) + 0xc) + 0x6c) == -1.0) {
      uVar10 = 0x12;
      pcVar6 = "`2Weapon: `0ready\n";
    }
    else {
      uVar10 = 0x14;
      pcVar6 = "`2Weapon: `!cooling\n";
    }
    std::basic_string<>::append((basic_string<> *)&local_2c,pcVar6,uVar10);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(void **)param_1 = local_2c;
  *(undefined4 *)(param_1 + 4) = uStack_28;
  *(undefined4 *)(param_1 + 8) = uStack_24;
  *(undefined4 *)(param_1 + 0xc) = uStack_20;
  *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_18,local_1c);
LAB_004f65cf:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getSensorSummary(class Ship *,int)

void __cdecl ShipTextData::getSensorSummary(Ship *param_1,int param_2)

{
  SensorData *this;
  int iVar1;
  Ship *pSVar2;
  uint uVar3;
  basic_string<> *pbVar4;
  char *pcVar5;
  undefined4 ****ppppuVar6;
  GameObject *pGVar7;
  int *piVar8;
  char *pcVar9;
  void *pvVar10;
  nothrow_t *pnVar11;
  GameObject *pGVar12;
  float fVar13;
  double dVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  Ship *local_d8;
  void *local_d4 [4];
  undefined4 local_c4;
  uint local_c0;
  void *local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  undefined4 ***local_a4 [4];
  undefined4 local_94;
  uint local_90;
  void *local_8c [4];
  undefined4 local_7c;
  uint local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  undefined4 ***local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &DAT_005c182a;
  local_10 = ExceptionList;
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_d8 = (Ship *)param_2;
  local_14 = uVar3;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    goto LAB_004f79b2;
  }
  local_34 = 0;
  uStack_30 = 0xf;
  local_44 = local_44 & 0xffffff00;
  std::basic_string<>::assign((basic_string<> *)&local_44,"`%Ventarii Sensor Suite\n",0x18);
  local_8 = 0;
  uStack_7 = 0;
  pGVar12 = *(GameObject **)(param_2 + 0x1ac);
  if ((pGVar12 == (GameObject *)0x0) && (*(int *)(param_2 + 0x194) == 0)) {
    std::basic_string<>::append((basic_string<> *)&local_44,"`2Nothing selected.",0x13);
    goto LAB_004f7971;
  }
  this = *(SensorData **)(param_2 + 0x194);
  if (this == (SensorData *)0x0) {
    iVar1 = *(int *)(pGVar12 + 0x54);
    if (iVar1 == 0) {
      pGVar7 = pGVar12;
      if (0xf < *(uint *)(pGVar12 + 0x14)) {
        pGVar7 = *(GameObject **)pGVar12;
      }
      pcVar5 = (char *)strUsingArgs((char *)local_2c,"`2Planet `7%s\n",pGVar7,uVar3);
      local_8 = 0x1d;
      pcVar9 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar9 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar9,*(uint *)(pcVar5 + 0x10));
      local_8 = 0;
      if (0xf < local_18) {
        pnVar11 = (nothrow_t *)(local_18 + 1);
        pvVar10 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar10 = *(void **)((int)local_2c[0] + -4);
          pnVar11 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar10,pnVar11);
      }
      pcVar5 = (char *)strUsingArgs((char *)local_2c,"`2Cat.: `7%s\n",
                                    (&PTR_s_Telluric_005e15a8)[*(int *)(pGVar12 + 200)],uVar3);
      local_8 = 0x1e;
      pcVar9 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar9 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar9,*(uint *)(pcVar5 + 0x10));
      local_8 = 0;
      if (0xf < local_18) {
        pnVar11 = (nothrow_t *)(local_18 + 1);
        pvVar10 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar10 = *(void **)((int)local_2c[0] + -4);
          pnVar11 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar10,pnVar11);
      }
      strUsingArgs((char *)local_5c,"%\'d");
      local_8 = 0x1f;
      ppppuVar6 = local_5c;
      if (0xf < local_48) {
        ppppuVar6 = (undefined4 ****)local_5c[0];
      }
      pcVar5 = (char *)strUsingArgs((char *)local_a4,"`2Dia.: `9%skm\n",ppppuVar6);
      local_8 = 0x20;
      pcVar9 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar9 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar9,*(uint *)(pcVar5 + 0x10));
      local_8 = 0x1f;
      if (0xf < local_90) {
        pnVar11 = (nothrow_t *)(local_90 + 1);
        ppppuVar6 = (undefined4 ****)local_a4[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          ppppuVar6 = (undefined4 ****)local_a4[0][-1];
          pnVar11 = (nothrow_t *)(local_90 + 0x24);
          if (0x1f < (uint)((int)local_a4[0] + (-4 - (int)ppppuVar6))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppuVar6,pnVar11);
      }
      local_94 = 0;
      local_90 = 0xf;
      local_a4[0] = (undefined4 ***)((uint)local_a4[0] & 0xffffff00);
      local_8 = 0;
      word::~word((word *)local_5c);
      pcVar5 = (char *)strUsingArgs((char *)local_2c,"`2Pop.: `0%0.1fk\n",
                                    (double)*(float *)(pGVar12 + 0xc0));
      local_8 = 0x21;
      pcVar9 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar9 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar9,*(uint *)(pcVar5 + 0x10));
      local_8 = 0;
      word::~word((word *)local_2c);
      pcVar5 = (char *)strUsingArgs((char *)local_2c,"`2Type: `#%s\n");
      local_8 = 0x22;
      pcVar9 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar9 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar9,*(uint *)(pcVar5 + 0x10));
      local_8 = 0;
      word::~word((word *)local_2c);
      pSVar2 = local_d8;
      Ship::relativeAngleToObject(local_d8,pGVar12);
      pcVar5 = (char *)strUsingArgs((char *)local_2c,"`2Brg.: `%%%d^\n");
      local_8 = 0x23;
      pcVar9 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar9 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar9,*(uint *)(pcVar5 + 0x10));
      local_8 = 0;
      word::~word((word *)local_2c);
      cocos2d::Vec2::Vec2((Vec2 *)&local_e0,(float)*(double *)(pGVar12 + 0x20),
                          (float)*(double *)(pGVar12 + 0x28));
      local_8 = 0x24;
      cocos2d::Vec2::Vec2((Vec2 *)&local_e8,(float)*(double *)(pSVar2 + 0x28),
                          (float)*(double *)(pSVar2 + 0x30));
      local_8 = 0x25;
      fVar13 = cocos2d::Vec2::getDistance((Vec2 *)&local_e8,(Vec2 *)&local_e0);
      pcVar5 = (char *)strUsingArgs((char *)local_2c,"`2Dist: `$%.2fGm\n",(double)fVar13);
      local_8 = 0x26;
      pcVar9 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar9 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar9,*(uint *)(pcVar5 + 0x10));
LAB_004f7951:
      word::~word((word *)local_2c);
      cocos2d::Vec2::~Vec2((Vec2 *)&local_e8);
      cocos2d::Vec2::~Vec2((Vec2 *)&local_e0);
    }
    else if (iVar1 == 1) {
      if (0xf < *(uint *)(pGVar12 + 0x14)) {
        pGVar12 = *(GameObject **)pGVar12;
      }
      pcVar5 = (char *)strUsingArgs((char *)local_2c,"`$Star `%%%s\n",pGVar12,uVar3);
      local_8 = 0x27;
      pcVar9 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar9 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar9,*(uint *)(pcVar5 + 0x10));
      word::~word((word *)local_2c);
    }
    else if (iVar1 == 2) {
      pGVar7 = pGVar12;
      if (0xf < *(uint *)(pGVar12 + 0x14)) {
        pGVar7 = *(GameObject **)pGVar12;
      }
      pbVar4 = (basic_string<> *)strUsingArgs((char *)local_2c,"`2Moon: `7%s\n",pGVar7,uVar3);
      local_8 = 0x28;
      std::basic_string<>::append((basic_string<> *)&local_44,pbVar4);
      local_8 = 0;
      word::~word((word *)local_2c);
      piVar8 = *(int **)(pGVar12 + 0x58);
      if (0xf < (uint)piVar8[5]) {
        piVar8 = (int *)*piVar8;
      }
      pbVar4 = (basic_string<> *)strUsingArgs((char *)local_2c,"`2Orbt: `7%s\n",piVar8,uVar3);
      local_8 = 0x29;
      std::basic_string<>::append((basic_string<> *)&local_44,pbVar4);
      local_8 = 0;
      word::~word((word *)local_2c);
      strUsingArgs((char *)local_a4,"%\'d");
      local_8 = 0x2a;
      ppppuVar6 = local_a4;
      if (0xf < local_90) {
        ppppuVar6 = (undefined4 ****)local_a4[0];
      }
      pbVar4 = (basic_string<> *)strUsingArgs((char *)local_2c,"`2Dia.: `9%skm\n",ppppuVar6);
      local_8 = 0x2b;
      std::basic_string<>::append((basic_string<> *)&local_44,pbVar4);
      word::~word((word *)local_2c);
      local_8 = 0;
      word::~word((word *)local_a4);
      pbVar4 = (basic_string<> *)
               strUsingArgs((char *)local_2c,"`2Pop.: `0%0.1fk\n",(double)*(float *)(pGVar12 + 0xc0)
                           );
      local_8 = 0x2c;
      std::basic_string<>::append((basic_string<> *)&local_44,pbVar4);
      local_8 = 0;
      word::~word((word *)local_2c);
      pbVar4 = (basic_string<> *)strUsingArgs((char *)local_2c,"`2Type: `#%s\n");
      local_8 = 0x2d;
      std::basic_string<>::append((basic_string<> *)&local_44,pbVar4);
      local_8 = 0;
      word::~word((word *)local_2c);
      pSVar2 = local_d8;
      Ship::relativeAngleToObject(local_d8,pGVar12);
      pbVar4 = (basic_string<> *)strUsingArgs((char *)local_2c,"`2Brg.: `%%%d^\n");
      local_8 = 0x2e;
      std::basic_string<>::append((basic_string<> *)&local_44,pbVar4);
      local_8 = 0;
      word::~word((word *)local_2c);
      cocos2d::Vec2::Vec2((Vec2 *)&local_e0,(float)*(double *)(pGVar12 + 0x20),
                          (float)*(double *)(pGVar12 + 0x28));
      local_8 = 0x2f;
      cocos2d::Vec2::Vec2((Vec2 *)&local_e8,(float)*(double *)(pSVar2 + 0x28),
                          (float)*(double *)(pSVar2 + 0x30));
      local_8 = 0x30;
      fVar13 = cocos2d::Vec2::getDistance((Vec2 *)&local_e8,(Vec2 *)&local_e0);
      pbVar4 = (basic_string<> *)strUsingArgs((char *)local_2c,"`2Dist: `$%.2fGm\n",(double)fVar13);
      local_8 = 0x31;
      std::basic_string<>::append((basic_string<> *)&local_44,pbVar4);
      goto LAB_004f7951;
    }
  }
  else {
    iVar1 = *(int *)(this + 0xe0);
    if ((((iVar1 == 5) || (iVar1 == 6)) || (iVar1 == 4)) || (iVar1 == 7)) {
      std::basic_string<>::basic_string<>
                ((basic_string<> *)local_5c,(basic_string<> *)(this + 0x48));
      local_8 = 1;
      std::basic_string<>::basic_string<>
                ((basic_string<> *)local_bc,(basic_string<> *)(this + 0x90));
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      local_8 = 3;
      local_64 = 0;
      local_60 = 0xf;
      local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
      std::basic_string<>::assign((basic_string<> *)local_74,"Unknown",7);
      local_8 = 4;
      if ((*(int *)(this + 0x130) == 0) || (*(float *)(this + 0x38) == -1.0)) {
        if (*(float *)(this + 0x38) == -1.0) {
          std::basic_string<>::assign((basic_string<> *)local_74,"Unknown",7);
        }
      }
      else {
        pbVar4 = (basic_string<> *)
                 strUsingArgs((char *)local_8c,"%d^",(double)*(float *)(this + 0x38));
        std::basic_string<>::operator=((basic_string<> *)local_74,pbVar4);
        if (0xf < local_78) {
          pnVar11 = (nothrow_t *)(local_78 + 1);
          pvVar10 = local_8c[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            pvVar10 = *(void **)((int)local_8c[0] + -4);
            pnVar11 = (nothrow_t *)(local_78 + 0x24);
            if (0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar10,pnVar11);
        }
      }
      pcVar5 = (char *)strUsingArgs((char *)local_8c,"`2Name: `7%s\n");
      local_8 = 5;
      pcVar9 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar9 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar9,*(uint *)(pcVar5 + 0x10));
      local_8 = 4;
      if (0xf < local_78) {
        pnVar11 = (nothrow_t *)(local_78 + 1);
        pvVar10 = local_8c[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar10 = *(void **)((int)local_8c[0] + -4);
          pnVar11 = (nothrow_t *)(local_78 + 0x24);
          if (0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar10,pnVar11);
      }
      std::basic_string<>::append((basic_string<> *)&local_44,"`2Clss: `$Beacon\n",0x11);
      pcVar5 = (char *)strUsingArgs((char *)local_8c,"`2Reg.: `9%s\n");
      local_8 = 6;
      pcVar9 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar9 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar9,*(uint *)(pcVar5 + 0x10));
      local_8 = 4;
      if (0xf < local_78) {
        pnVar11 = (nothrow_t *)(local_78 + 1);
        pvVar10 = local_8c[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar10 = *(void **)((int)local_8c[0] + -4);
          pnVar11 = (nothrow_t *)(local_78 + 0x24);
          if (0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar10,pnVar11);
      }
      SensorData::getSolutionString(this);
      local_8 = 7;
      pcVar5 = (char *)strUsingArgs((char *)local_a4,"`2Sol.: %s\n");
      local_8 = 8;
      pcVar9 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar9 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar9,*(uint *)(pcVar5 + 0x10));
      local_8 = 7;
      if (0xf < local_90) {
        pnVar11 = (nothrow_t *)(local_90 + 1);
        ppppuVar6 = (undefined4 ****)local_a4[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          ppppuVar6 = (undefined4 ****)local_a4[0][-1];
          pnVar11 = (nothrow_t *)(local_90 + 0x24);
          if (0x1f < (uint)((int)local_a4[0] + (-4 - (int)ppppuVar6))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppuVar6,pnVar11);
      }
      local_8 = 4;
      local_94 = 0;
      local_90 = 0xf;
      local_a4[0] = (undefined4 ***)((uint)local_a4[0] & 0xffffff00);
      if (0xf < local_78) {
        pnVar11 = (nothrow_t *)(local_78 + 1);
        pvVar10 = local_8c[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar10 = *(void **)((int)local_8c[0] + -4);
          pnVar11 = (nothrow_t *)(local_78 + 0x24);
          if (0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar10,pnVar11);
      }
      pSVar2 = local_d8;
      auVar15 = ZEXT416((uint)(float)((double)*(float *)(this + 0x108) + *(double *)(this + 0x18)));
      Ship::trueAngleToPosition
                (local_d8,(float)((double)*(float *)(this + 0x104) + *(double *)(this + 0x10)),
                 (float)((double)*(float *)(this + 0x108) + *(double *)(this + 0x18)));
      dVar14 = auVar15._0_8_ - (double)*(float *)(pSVar2 + 0x120);
      if (dVar14 < 0.0) {
        dVar14 = dVar14 + 360.0;
      }
      local_d8 = (Ship *)0x0;
      if ((Ship *)(int)dVar14 != (Ship *)0x167) {
        local_d8 = (Ship *)(int)dVar14;
      }
      local_e8 = (float)((double)*(float *)(this + 0x104) + *(double *)(this + 0x10));
      local_e4 = (float)((double)*(float *)(this + 0x108) + *(double *)(this + 0x18));
      local_e0 = (float)*(double *)(pSVar2 + 0x28);
      fVar13 = (float)*(double *)(pSVar2 + 0x30);
      local_8 = 10;
      local_dc = fVar13;
      fVar16 = cocos2d::Vec2::getDistance((Vec2 *)&local_e0,(Vec2 *)&local_e8);
      pcVar5 = (char *)strUsingArgs((char *)local_8c,"`2Dist: `$%0.2fGm\n",(double)fVar16);
      local_8 = 0xb;
      pcVar9 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar9 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar9,*(uint *)(pcVar5 + 0x10));
      local_8 = 10;
      if (0xf < local_78) {
        pnVar11 = (nothrow_t *)(local_78 + 1);
        pvVar10 = local_8c[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar10 = *(void **)((int)local_8c[0] + -4);
          pnVar11 = (nothrow_t *)(local_78 + 0x24);
          if (0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar10,pnVar11);
      }
      local_8 = 4;
      pcVar5 = (char *)strUsingArgs((char *)local_8c,"`2Brg.: `%%%d^\n");
      local_8 = 0xc;
      pcVar9 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar9 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar9,*(uint *)(pcVar5 + 0x10));
      local_8 = 4;
      if (0xf < local_78) {
        pnVar11 = (nothrow_t *)(local_78 + 1);
        pvVar10 = local_8c[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar10 = *(void **)((int)local_8c[0] + -4);
          pnVar11 = (nothrow_t *)(local_78 + 0x24);
          if (0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar10,pnVar11);
      }
      if ((*(Ship **)(this + 0x130) == (Ship *)0x0) ||
         (Ship::getSpeed(*(Ship **)(this + 0x130)), fVar13 <= 0.0)) {
        std::basic_string<>::append((basic_string<> *)&local_44,"`2Hdg.: `7unknown\n",0x12);
      }
      else {
        pbVar4 = (basic_string<> *)strUsingArgs((char *)local_8c,"`2Hdg.: `!%s\n");
        local_8 = 0xd;
        std::basic_string<>::append((basic_string<> *)&local_44,pbVar4);
        if (0xf < local_78) {
          pnVar11 = (nothrow_t *)(local_78 + 1);
          pvVar10 = local_8c[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            pvVar10 = *(void **)((int)local_8c[0] + -4);
            pnVar11 = (nothrow_t *)(local_78 + 0x24);
            if (0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar10,pnVar11);
        }
      }
      if (0xf < local_60) {
        pnVar11 = (nothrow_t *)(local_60 + 1);
        pvVar10 = local_74[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar10 = *(void **)((int)local_74[0] + -4);
          pnVar11 = (nothrow_t *)(local_60 + 0x24);
          if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar10,pnVar11);
      }
      local_64 = 0;
      local_60 = 0xf;
      local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
      if (0xf < local_a8) {
        pnVar11 = (nothrow_t *)(local_a8 + 1);
        pvVar10 = local_bc[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar10 = *(void **)((int)local_bc[0] + -4);
          pnVar11 = (nothrow_t *)(local_a8 + 0x24);
          if (0x1f < (uint)((int)local_bc[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar10,pnVar11);
      }
      local_ac = 0;
      local_a8 = 0xf;
      local_bc[0] = (void *)((uint)local_bc[0] & 0xffffff00);
      if (0xf < local_48) {
        pnVar11 = (nothrow_t *)(local_48 + 1);
        ppppuVar6 = (undefined4 ****)local_5c[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          ppppuVar6 = (undefined4 ****)local_5c[0][-1];
          pnVar11 = (nothrow_t *)(local_48 + 0x24);
          if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)ppppuVar6))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        goto LAB_004f6d9d;
      }
    }
    else {
      std::basic_string<>::basic_string<>
                ((basic_string<> *)local_a4,(basic_string<> *)(this + 0x48));
      local_8 = 0xe;
      std::basic_string<>::basic_string<>
                ((basic_string<> *)local_bc,(basic_string<> *)(this + 0x60));
      local_8 = 0xf;
      std::basic_string<>::basic_string<>
                ((basic_string<> *)local_d4,(basic_string<> *)(this + 0x90));
      local_7c = 0;
      local_78 = 0xf;
      local_8c[0] = (void *)((uint)local_8c[0] & 0xffffff00);
      local_8 = 0x11;
      local_64 = 0;
      local_60 = 0xf;
      local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
      std::basic_string<>::assign((basic_string<> *)local_74,"Unknown",7);
      local_8 = 0x12;
      if ((*(int *)(this + 0x130) == 0) || (*(float *)(this + 0x38) == -1.0)) {
        if (*(float *)(this + 0x38) == -1.0) {
          std::basic_string<>::assign((basic_string<> *)local_74,"Unknown",7);
        }
      }
      else {
        pbVar4 = (basic_string<> *)
                 strUsingArgs((char *)local_5c,"%d^",(double)*(float *)(this + 0x38));
        std::basic_string<>::operator=((basic_string<> *)local_74,pbVar4);
        if (0xf < local_48) {
          pnVar11 = (nothrow_t *)(local_48 + 1);
          ppppuVar6 = (undefined4 ****)local_5c[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            ppppuVar6 = (undefined4 ****)local_5c[0][-1];
            pnVar11 = (nothrow_t *)(local_48 + 0x24);
            if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)ppppuVar6))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(ppppuVar6,pnVar11);
        }
      }
      pcVar5 = (char *)strUsingArgs((char *)local_5c,"`2Name: `7%s\n");
      local_8 = 0x13;
      pcVar9 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar9 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar9,*(uint *)(pcVar5 + 0x10));
      local_8 = 0x12;
      if (0xf < local_48) {
        pnVar11 = (nothrow_t *)(local_48 + 1);
        ppppuVar6 = (undefined4 ****)local_5c[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          ppppuVar6 = (undefined4 ****)local_5c[0][-1];
          pnVar11 = (nothrow_t *)(local_48 + 0x24);
          if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)ppppuVar6))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppuVar6,pnVar11);
      }
      pcVar5 = (char *)strUsingArgs((char *)local_5c,"`2Clss: `7%s\n");
      local_8 = 0x14;
      pcVar9 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar9 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar9,*(uint *)(pcVar5 + 0x10));
      local_8 = 0x12;
      if (0xf < local_48) {
        pnVar11 = (nothrow_t *)(local_48 + 1);
        ppppuVar6 = (undefined4 ****)local_5c[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          ppppuVar6 = (undefined4 ****)local_5c[0][-1];
          pnVar11 = (nothrow_t *)(local_48 + 0x24);
          if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)ppppuVar6))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppuVar6,pnVar11);
      }
      pcVar5 = (char *)strUsingArgs((char *)local_5c,"`2Reg.: `9%s\n");
      local_8 = 0x15;
      pcVar9 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar9 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar9,*(uint *)(pcVar5 + 0x10));
      local_8 = 0x12;
      if (0xf < local_48) {
        pnVar11 = (nothrow_t *)(local_48 + 1);
        ppppuVar6 = (undefined4 ****)local_5c[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          ppppuVar6 = (undefined4 ****)local_5c[0][-1];
          pnVar11 = (nothrow_t *)(local_48 + 0x24);
          if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)ppppuVar6))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppuVar6,pnVar11);
      }
      SensorData::getSolutionString(this);
      local_8 = 0x16;
      pcVar5 = (char *)strUsingArgs((char *)local_5c,"`2Sol.: %s\n");
      local_8 = 0x17;
      pcVar9 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar9 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar9,*(uint *)(pcVar5 + 0x10));
      local_8 = 0x16;
      if (0xf < local_48) {
        pnVar11 = (nothrow_t *)(local_48 + 1);
        ppppuVar6 = (undefined4 ****)local_5c[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          ppppuVar6 = (undefined4 ****)local_5c[0][-1];
          pnVar11 = (nothrow_t *)(local_48 + 0x24);
          if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)ppppuVar6))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppuVar6,pnVar11);
      }
      local_8 = 0x12;
      local_4c = 0;
      local_48 = 0xf;
      local_5c[0] = (undefined4 ***)((uint)local_5c[0] & 0xffffff00);
      if (0xf < local_18) {
        pnVar11 = (nothrow_t *)(local_18 + 1);
        pvVar10 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar10 = *(void **)((int)local_2c[0] + -4);
          pnVar11 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar10,pnVar11);
      }
      pSVar2 = local_d8;
      auVar15 = ZEXT416((uint)(float)((double)*(float *)(this + 0x108) + *(double *)(this + 0x18)));
      Ship::trueAngleToPosition
                (local_d8,(float)((double)*(float *)(this + 0x104) + *(double *)(this + 0x10)),
                 (float)((double)*(float *)(this + 0x108) + *(double *)(this + 0x18)));
      dVar14 = auVar15._0_8_ - (double)*(float *)(pSVar2 + 0x120);
      if (dVar14 < 0.0) {
        dVar14 = dVar14 + 360.0;
      }
      local_d8 = (Ship *)0x0;
      if ((Ship *)(int)dVar14 != (Ship *)0x167) {
        local_d8 = (Ship *)(int)dVar14;
      }
      local_e0 = (float)((double)*(float *)(this + 0x104) + *(double *)(this + 0x10));
      local_dc = (float)((double)*(float *)(this + 0x108) + *(double *)(this + 0x18));
      local_e8 = (float)*(double *)(pSVar2 + 0x28);
      fVar13 = (float)*(double *)(pSVar2 + 0x30);
      local_8 = 0x19;
      local_e4 = fVar13;
      fVar16 = cocos2d::Vec2::getDistance((Vec2 *)&local_e8,(Vec2 *)&local_e0);
      pcVar5 = (char *)strUsingArgs((char *)local_2c,"`2Dist: `$%0.2fGm\n",(double)fVar16);
      local_8 = 0x1a;
      pcVar9 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar9 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar9,*(uint *)(pcVar5 + 0x10));
      local_8 = 0x19;
      if (0xf < local_18) {
        pnVar11 = (nothrow_t *)(local_18 + 1);
        pvVar10 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar10 = *(void **)((int)local_2c[0] + -4);
          pnVar11 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar10,pnVar11);
      }
      local_8 = 0x12;
      pcVar5 = (char *)strUsingArgs((char *)local_2c,"`2Brg.: `%%%d^\n");
      local_8 = 0x1b;
      pcVar9 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar9 = *(char **)pcVar5;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar9,*(uint *)(pcVar5 + 0x10));
      local_8 = 0x12;
      if (0xf < local_18) {
        pnVar11 = (nothrow_t *)(local_18 + 1);
        pvVar10 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar10 = *(void **)((int)local_2c[0] + -4);
          pnVar11 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar10,pnVar11);
      }
      if ((*(Ship **)(this + 0x130) == (Ship *)0x0) ||
         (Ship::getSpeed(*(Ship **)(this + 0x130)), fVar13 <= 0.0)) {
        std::basic_string<>::append((basic_string<> *)&local_44,"`2Hdg.: `7unknown\n",0x12);
      }
      else {
        pbVar4 = (basic_string<> *)strUsingArgs((char *)local_2c,"`2Hdg.: `!%s\n");
        local_8 = 0x1c;
        std::basic_string<>::append((basic_string<> *)&local_44,pbVar4);
        if (0xf < local_18) {
          pnVar11 = (nothrow_t *)(local_18 + 1);
          pvVar10 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            pvVar10 = *(void **)((int)local_2c[0] + -4);
            pnVar11 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar10,pnVar11);
        }
      }
      if (0xf < local_60) {
        pnVar11 = (nothrow_t *)(local_60 + 1);
        pvVar10 = local_74[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar10 = *(void **)((int)local_74[0] + -4);
          pnVar11 = (nothrow_t *)(local_60 + 0x24);
          if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar10,pnVar11);
      }
      local_64 = 0;
      local_60 = 0xf;
      local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
      if (0xf < local_c0) {
        pnVar11 = (nothrow_t *)(local_c0 + 1);
        pvVar10 = local_d4[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar10 = *(void **)((int)local_d4[0] + -4);
          pnVar11 = (nothrow_t *)(local_c0 + 0x24);
          if (0x1f < (uint)((int)local_d4[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar10,pnVar11);
      }
      local_c4 = 0;
      local_c0 = 0xf;
      local_d4[0] = (void *)((uint)local_d4[0] & 0xffffff00);
      if (0xf < local_a8) {
        pnVar11 = (nothrow_t *)(local_a8 + 1);
        pvVar10 = local_bc[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar10 = *(void **)((int)local_bc[0] + -4);
          pnVar11 = (nothrow_t *)(local_a8 + 0x24);
          if (0x1f < (uint)((int)local_bc[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar10,pnVar11);
      }
      local_ac = 0;
      local_a8 = 0xf;
      local_bc[0] = (void *)((uint)local_bc[0] & 0xffffff00);
      if (0xf < local_90) {
        pnVar11 = (nothrow_t *)(local_90 + 1);
        ppppuVar6 = (undefined4 ****)local_a4[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          ppppuVar6 = (undefined4 ****)local_a4[0][-1];
          pnVar11 = (nothrow_t *)(local_90 + 0x24);
          if (0x1f < (uint)((int)local_a4[0] + (-4 - (int)ppppuVar6))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
LAB_004f6d9d:
        local_a8 = 0xf;
        local_ac = 0;
        operator_delete(ppppuVar6,pnVar11);
      }
    }
  }
LAB_004f7971:
  uVar3 = local_44;
  local_44 = local_44 & 0xffffff00;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(uint *)param_1 = uVar3;
  *(undefined4 *)(param_1 + 4) = uStack_40;
  *(undefined4 *)(param_1 + 8) = uStack_3c;
  *(undefined4 *)(param_1 + 0xc) = uStack_38;
  *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_30,local_34);
  local_34 = 0;
  uStack_30 = 0xf;
  word::~word((word *)&local_44);
LAB_004f79b2:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getSensorAdditional(class Ship *,int)

void __cdecl ShipTextData::getSensorAdditional(Ship *param_1,int param_2)

{
  GameObject *pGVar1;
  int iVar2;
  Ship *pSVar3;
  undefined1 uVar4;
  bool bVar5;
  char *pcVar6;
  basic_string<> *pbVar7;
  char *pcVar8;
  ShipModule *pSVar9;
  int iVar10;
  undefined4 *******pppppppuVar11;
  undefined4 uVar12;
  void *pvVar13;
  nothrow_t *pnVar14;
  char *pcVar15;
  undefined4 uVar16;
  uint unaff_EDI;
  float fVar17;
  uint uVar18;
  float local_fc;
  Ship *local_f8;
  float local_f4;
  Ship *local_f0;
  void *local_ec [5];
  uint local_d8;
  void *local_d4 [5];
  uint local_c0;
  undefined1 local_bc;
  undefined4 local_ac;
  undefined4 local_a8;
  void *local_a4 [4];
  undefined4 local_94;
  uint local_90;
  void *local_8c [5];
  uint local_78;
  undefined4 ******local_74 [4];
  undefined4 local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  void *local_2c [5];
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &DAT_005c19c2;
  local_10 = ExceptionList;
  pcVar6 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_f8 = param_1;
  local_f0 = (Ship *)param_2;
  local_14 = pcVar6;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    goto LAB_004f8a10;
  }
  local_34 = 0;
  uStack_30 = 0xf;
  local_44 = local_44 & 0xffffff00;
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  pGVar1 = *(GameObject **)(param_2 + 0x1ac);
  if ((pGVar1 != (GameObject *)0x0) || (*(int *)(param_2 + 0x194) != 0)) {
    iVar2 = *(int *)(param_2 + 0x194);
    if (iVar2 == 0) {
      iVar2 = *(int *)(pGVar1 + 0x54);
      if (iVar2 == 0) {
        pcVar15 = (char *)strUsingArgs((char *)local_2c,"`2Planet `7%s\n");
        local_8._0_1_ = 0xf;
        pcVar6 = pcVar15;
        if (0xf < *(uint *)(pcVar15 + 0x14)) {
          pcVar6 = *(char **)pcVar15;
        }
        std::basic_string<>::append((basic_string<> *)&local_44,pcVar6,*(uint *)(pcVar15 + 0x10));
        local_8._0_1_ = 0;
        uVar4 = (undefined1)local_8;
        local_8._0_1_ = 0;
        if (0xf < local_18) {
          pnVar14 = (nothrow_t *)(local_18 + 1);
          pvVar13 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar14) {
            pvVar13 = *(void **)((int)local_2c[0] + -4);
            pnVar14 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13))) goto LAB_004f805c;
          }
          operator_delete(pvVar13,pnVar14);
        }
        pcVar15 = (char *)strUsingArgs((char *)local_2c,"`2Cat.: `7%s\n");
        local_8._0_1_ = 0x10;
        pcVar6 = pcVar15;
        if (0xf < *(uint *)(pcVar15 + 0x14)) {
          pcVar6 = *(char **)pcVar15;
        }
        std::basic_string<>::append((basic_string<> *)&local_44,pcVar6,*(uint *)(pcVar15 + 0x10));
        local_8._0_1_ = 0;
        if (0xf < local_18) {
          pnVar14 = (nothrow_t *)(local_18 + 1);
          pvVar13 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar14) {
            pvVar13 = *(void **)((int)local_2c[0] + -4);
            pnVar14 = (nothrow_t *)(local_18 + 0x24);
            uVar4 = (undefined1)local_8;
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13))) goto LAB_004f805c;
          }
          operator_delete(pvVar13,pnVar14);
        }
        strUsingArgs((char *)local_74,"%\'d");
        local_8._0_1_ = 0x11;
        pppppppuVar11 = local_74;
        if (0xf < local_60) {
          pppppppuVar11 = (undefined4 *******)local_74[0];
        }
        pcVar15 = (char *)strUsingArgs((char *)local_5c,"`2Dia.: `9%skm\n",pppppppuVar11);
        local_8._0_1_ = 0x12;
        pcVar6 = pcVar15;
        if (0xf < *(uint *)(pcVar15 + 0x14)) {
          pcVar6 = *(char **)pcVar15;
        }
        std::basic_string<>::append((basic_string<> *)&local_44,pcVar6,*(uint *)(pcVar15 + 0x10));
        local_8._0_1_ = 0x11;
        if (0xf < local_48) {
          pnVar14 = (nothrow_t *)(local_48 + 1);
          pvVar13 = local_5c[0];
          if ((nothrow_t *)0xfff < pnVar14) {
            pvVar13 = *(void **)((int)local_5c[0] + -4);
            pnVar14 = (nothrow_t *)(local_48 + 0x24);
            uVar4 = (undefined1)local_8;
            if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar13))) goto LAB_004f805c;
          }
          operator_delete(pvVar13,pnVar14);
        }
        local_8._0_1_ = 0;
        local_4c = 0;
        local_48 = 0xf;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
        if (0xf < local_60) {
          pnVar14 = (nothrow_t *)(local_60 + 1);
          pppppppuVar11 = (undefined4 *******)local_74[0];
          if ((nothrow_t *)0xfff < pnVar14) {
            pppppppuVar11 = (undefined4 *******)local_74[0][-1];
            pnVar14 = (nothrow_t *)(local_60 + 0x24);
            uVar4 = (undefined1)local_8;
            if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pppppppuVar11))) goto LAB_004f805c;
          }
          operator_delete(pppppppuVar11,pnVar14);
        }
        pcVar15 = (char *)strUsingArgs((char *)local_2c,"`2Pop.: `0%0fk\n",
                                       (double)*(float *)(pGVar1 + 0xc0));
        local_8._0_1_ = 0x13;
        pcVar6 = pcVar15;
        if (0xf < *(uint *)(pcVar15 + 0x14)) {
          pcVar6 = *(char **)pcVar15;
        }
        std::basic_string<>::append((basic_string<> *)&local_44,pcVar6,*(uint *)(pcVar15 + 0x10));
        local_8._0_1_ = 0;
        if (0xf < local_18) {
          pnVar14 = (nothrow_t *)(local_18 + 1);
          pvVar13 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar14) {
            pvVar13 = *(void **)((int)local_2c[0] + -4);
            pnVar14 = (nothrow_t *)(local_18 + 0x24);
            uVar4 = (undefined1)local_8;
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13))) goto LAB_004f805c;
          }
          operator_delete(pvVar13,pnVar14);
        }
        pcVar15 = (char *)strUsingArgs((char *)local_2c,"`2Type: `#%s\n");
        local_8._0_1_ = 0x14;
        pcVar6 = pcVar15;
        if (0xf < *(uint *)(pcVar15 + 0x14)) {
          pcVar6 = *(char **)pcVar15;
        }
        std::basic_string<>::append((basic_string<> *)&local_44,pcVar6,*(uint *)(pcVar15 + 0x10));
        local_8._0_1_ = 0;
        if (0xf < local_18) {
          pnVar14 = (nothrow_t *)(local_18 + 1);
          pvVar13 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar14) {
            pvVar13 = *(void **)((int)local_2c[0] + -4);
            pnVar14 = (nothrow_t *)(local_18 + 0x24);
            uVar4 = (undefined1)local_8;
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13))) goto LAB_004f805c;
          }
          operator_delete(pvVar13,pnVar14);
        }
        pSVar3 = local_f0;
        Ship::relativeAngleToObject(local_f0,pGVar1);
        pcVar15 = (char *)strUsingArgs((char *)local_2c,"`2Brg.: `%%%d^\n");
        local_8._0_1_ = 0x15;
        pcVar6 = pcVar15;
        if (0xf < *(uint *)(pcVar15 + 0x14)) {
          pcVar6 = *(char **)pcVar15;
        }
        std::basic_string<>::append((basic_string<> *)&local_44,pcVar6,*(uint *)(pcVar15 + 0x10));
        local_8._0_1_ = 0;
        if (0xf < local_18) {
          pnVar14 = (nothrow_t *)(local_18 + 1);
          pvVar13 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar14) {
            pvVar13 = *(void **)((int)local_2c[0] + -4);
            pnVar14 = (nothrow_t *)(local_18 + 0x24);
            uVar4 = (undefined1)local_8;
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13))) goto LAB_004f805c;
          }
          operator_delete(pvVar13,pnVar14);
        }
        local_fc = (float)*(double *)(pGVar1 + 0x20);
        local_f8 = (Ship *)(float)*(double *)(pGVar1 + 0x28);
        local_f4 = (float)*(double *)(pSVar3 + 0x28);
        local_f0 = (Ship *)(float)*(double *)(pSVar3 + 0x30);
        local_8._0_1_ = 0x17;
        fVar17 = cocos2d::Vec2::getDistance((Vec2 *)&local_f4,(Vec2 *)&local_fc);
        pcVar15 = (char *)strUsingArgs((char *)local_2c,"`2Dist: `$%.2fGm\n",(double)fVar17);
        local_8._0_1_ = 0x18;
        pcVar6 = pcVar15;
        if (0xf < *(uint *)(pcVar15 + 0x14)) {
          pcVar6 = *(char **)pcVar15;
        }
        std::basic_string<>::append((basic_string<> *)&local_44,pcVar6,*(uint *)(pcVar15 + 0x10));
      }
      else {
        if (iVar2 != 1) {
          if (iVar2 == 2) {
            pbVar7 = (basic_string<> *)strUsingArgs((char *)local_2c,"`2Moon: `7%s\n");
            local_8._0_1_ = 0x1a;
            std::basic_string<>::append((basic_string<> *)&local_44,pbVar7);
            local_8._0_1_ = 0;
            if (0xf < local_18) {
              pnVar14 = (nothrow_t *)(local_18 + 1);
              pvVar13 = local_2c[0];
              if ((nothrow_t *)0xfff < pnVar14) {
                pvVar13 = *(void **)((int)local_2c[0] + -4);
                pnVar14 = (nothrow_t *)(local_18 + 0x24);
                uVar4 = (undefined1)local_8;
                if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13))) goto LAB_004f805c;
              }
              operator_delete(pvVar13,pnVar14);
            }
            pbVar7 = (basic_string<> *)strUsingArgs((char *)local_2c,"`2Orbt: `7%s\n");
            local_8._0_1_ = 0x1b;
            std::basic_string<>::append((basic_string<> *)&local_44,pbVar7);
            local_8._0_1_ = 0;
            if (0xf < local_18) {
              pnVar14 = (nothrow_t *)(local_18 + 1);
              pvVar13 = local_2c[0];
              if ((nothrow_t *)0xfff < pnVar14) {
                pvVar13 = *(void **)((int)local_2c[0] + -4);
                pnVar14 = (nothrow_t *)(local_18 + 0x24);
                uVar4 = (undefined1)local_8;
                if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13))) goto LAB_004f805c;
              }
              operator_delete(pvVar13,pnVar14);
            }
            strUsingArgs((char *)local_74,"%\'d");
            local_8._0_1_ = 0x1c;
            pppppppuVar11 = local_74;
            if (0xf < local_60) {
              pppppppuVar11 = (undefined4 *******)local_74[0];
            }
            pbVar7 = (basic_string<> *)
                     strUsingArgs((char *)local_5c,"`2Dia.: `9%skm\n",pppppppuVar11);
            local_8._0_1_ = 0x1d;
            std::basic_string<>::append((basic_string<> *)&local_44,pbVar7);
            local_8._0_1_ = 0x1c;
            if (0xf < local_48) {
              pnVar14 = (nothrow_t *)(local_48 + 1);
              pvVar13 = local_5c[0];
              if ((nothrow_t *)0xfff < pnVar14) {
                pvVar13 = *(void **)((int)local_5c[0] + -4);
                pnVar14 = (nothrow_t *)(local_48 + 0x24);
                uVar4 = (undefined1)local_8;
                if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar13))) goto LAB_004f805c;
              }
              operator_delete(pvVar13,pnVar14);
            }
            local_8._0_1_ = 0;
            local_4c = 0;
            local_48 = 0xf;
            local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
            if (0xf < local_60) {
              pnVar14 = (nothrow_t *)(local_60 + 1);
              pppppppuVar11 = (undefined4 *******)local_74[0];
              if ((nothrow_t *)0xfff < pnVar14) {
                pppppppuVar11 = (undefined4 *******)local_74[0][-1];
                pnVar14 = (nothrow_t *)(local_60 + 0x24);
                uVar4 = (undefined1)local_8;
                if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pppppppuVar11))) goto LAB_004f805c;
              }
              operator_delete(pppppppuVar11,pnVar14);
            }
            pbVar7 = (basic_string<> *)
                     strUsingArgs((char *)local_2c,"`2Pop.: `0%0fk\n",
                                  (double)*(float *)(pGVar1 + 0xc0));
            local_8._0_1_ = 0x1e;
            std::basic_string<>::append((basic_string<> *)&local_44,pbVar7);
            local_8._0_1_ = 0;
            if (0xf < local_18) {
              pnVar14 = (nothrow_t *)(local_18 + 1);
              pvVar13 = local_2c[0];
              if ((nothrow_t *)0xfff < pnVar14) {
                pvVar13 = *(void **)((int)local_2c[0] + -4);
                pnVar14 = (nothrow_t *)(local_18 + 0x24);
                uVar4 = (undefined1)local_8;
                if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13))) goto LAB_004f805c;
              }
              operator_delete(pvVar13,pnVar14);
            }
            pbVar7 = (basic_string<> *)strUsingArgs((char *)local_2c,"`2Type: `#%s\n");
            local_8._0_1_ = 0x1f;
            std::basic_string<>::append((basic_string<> *)&local_44,pbVar7);
            local_8._0_1_ = 0;
            if (0xf < local_18) {
              pnVar14 = (nothrow_t *)(local_18 + 1);
              pvVar13 = local_2c[0];
              if ((nothrow_t *)0xfff < pnVar14) {
                pvVar13 = *(void **)((int)local_2c[0] + -4);
                pnVar14 = (nothrow_t *)(local_18 + 0x24);
                uVar4 = (undefined1)local_8;
                if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13))) goto LAB_004f805c;
              }
              operator_delete(pvVar13,pnVar14);
            }
            pSVar3 = local_f0;
            Ship::relativeAngleToObject(local_f0,pGVar1);
            pbVar7 = (basic_string<> *)strUsingArgs((char *)local_2c,"`2Brg.: `%%%d^\n");
            local_8._0_1_ = 0x20;
            std::basic_string<>::append((basic_string<> *)&local_44,pbVar7);
            local_8._0_1_ = 0;
            word::~word((word *)local_2c);
            cocos2d::Vec2::Vec2((Vec2 *)&local_f4,(float)*(double *)(pGVar1 + 0x20),
                                (float)*(double *)(pGVar1 + 0x28));
            local_8._0_1_ = 0x21;
            cocos2d::Vec2::Vec2((Vec2 *)&local_fc,(float)*(double *)(pSVar3 + 0x28),
                                (float)*(double *)(pSVar3 + 0x30));
            local_8._0_1_ = 0x22;
            fVar17 = cocos2d::Vec2::getDistance((Vec2 *)&local_fc,(Vec2 *)&local_f4);
            pbVar7 = (basic_string<> *)
                     strUsingArgs((char *)local_2c,"`2Dist: `$%.2fGm\n",(double)fVar17);
            local_8._0_1_ = 0x23;
            std::basic_string<>::append((basic_string<> *)&local_44,pbVar7);
            word::~word((word *)local_2c);
            cocos2d::Vec2::~Vec2((Vec2 *)&local_fc);
            cocos2d::Vec2::~Vec2((Vec2 *)&local_f4);
          }
          goto LAB_004f89d1;
        }
        pcVar15 = (char *)strUsingArgs((char *)local_2c,"`$Star `%%%s\n");
        local_8._0_1_ = 0x19;
        pcVar6 = pcVar15;
        if (0xf < *(uint *)(pcVar15 + 0x14)) {
          pcVar6 = *(char **)pcVar15;
        }
        std::basic_string<>::append((basic_string<> *)&local_44,pcVar6,*(uint *)(pcVar15 + 0x10));
      }
    }
    else {
      std::basic_string<>::basic_string<>
                ((basic_string<> *)local_2c,(basic_string<> *)(iVar2 + 0x48));
      local_8._0_1_ = 1;
      std::basic_string<>::basic_string<>
                ((basic_string<> *)local_ec,(basic_string<> *)(iVar2 + 0x60));
      local_8._0_1_ = 2;
      std::basic_string<>::basic_string<>
                ((basic_string<> *)local_d4,(basic_string<> *)(iVar2 + 0x90));
      local_ac = 0;
      local_a8 = 0xf;
      local_bc = 0;
      local_8._0_1_ = 4;
      local_64 = 0;
      local_60 = 0xf;
      local_74[0] = (undefined4 ******)((uint)local_74[0] & 0xffffff00);
      std::basic_string<>::assign((basic_string<> *)local_74,"Unknown",7);
      local_8._0_1_ = 5;
      if ((*(int *)(iVar2 + 0x130) == 0) || (*(float *)(iVar2 + 0x38) == -1.0)) {
        if (*(float *)(iVar2 + 0x38) == -1.0) {
          std::basic_string<>::assign((basic_string<> *)local_74,"Unknown",7);
        }
      }
      else {
        pbVar7 = (basic_string<> *)
                 strUsingArgs((char *)local_5c,"%d^",(double)*(float *)(iVar2 + 0x38));
        std::basic_string<>::operator=((basic_string<> *)local_74,pbVar7);
        if (0xf < local_48) {
          pnVar14 = (nothrow_t *)(local_48 + 1);
          pvVar13 = local_5c[0];
          if ((nothrow_t *)0xfff < pnVar14) {
            pvVar13 = *(void **)((int)local_5c[0] + -4);
            pnVar14 = (nothrow_t *)(local_48 + 0x24);
            if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar13,pnVar14);
        }
      }
      std::basic_string<>::append((basic_string<> *)&local_44,"\n",1);
      std::basic_string<>::append((basic_string<> *)&local_44,"\n",1);
      std::basic_string<>::append((basic_string<> *)&local_44,"\n",1);
      pcVar8 = (char *)strUsingArgs((char *)local_5c,"`2IFF : %s\n");
      local_8._0_1_ = 6;
      pcVar15 = pcVar8;
      if (0xf < *(uint *)(pcVar8 + 0x14)) {
        pcVar15 = *(char **)pcVar8;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar15,*(uint *)(pcVar8 + 0x10));
      local_8._0_1_ = 5;
      if (0xf < local_48) {
        pnVar14 = (nothrow_t *)(local_48 + 1);
        pvVar13 = local_5c[0];
        if ((nothrow_t *)0xfff < pnVar14) {
          pvVar13 = *(void **)((int)local_5c[0] + -4);
          pnVar14 = (nothrow_t *)(local_48 + 0x24);
          if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar13,pnVar14);
      }
      local_94 = 0;
      local_90 = 0xf;
      local_a4[0] = (void *)((uint)local_a4[0] & 0xffffff00);
      std::basic_string<>::assign((basic_string<> *)local_a4,"`$unknown",9);
      local_8._0_1_ = 7;
      iVar10 = *(int *)(iVar2 + 0x130);
      if (iVar10 != 0) {
        if (*(SystemManager **)(iVar10 + 0x40) == (SystemManager *)0x0) {
LAB_004f7c99:
          if ((iVar10 == 0) ||
             ((*(SystemManager **)(iVar10 + 0x40) != (SystemManager *)0x0 &&
              (pSVar9 = SystemManager::getModule(*(SystemManager **)(iVar10 + 0x40),1,true),
              pSVar9 != (ShipModule *)0x0)))) goto LAB_004f7cc3;
          uVar18 = 10;
          pcVar15 = "`7inactive";
        }
        else {
          pSVar9 = SystemManager::getModule(*(SystemManager **)(iVar10 + 0x40),1,true);
          if (pSVar9 == (ShipModule *)0x0) {
            iVar10 = *(int *)(iVar2 + 0x130);
            goto LAB_004f7c99;
          }
          uVar18 = 8;
          pcVar15 = "`@active";
        }
        std::basic_string<>::assign((basic_string<> *)local_a4,pcVar15,uVar18);
      }
LAB_004f7cc3:
      pcVar8 = (char *)strUsingArgs((char *)local_5c,"`2RCTR: %s\n");
      local_8._0_1_ = 8;
      pcVar15 = pcVar8;
      if (0xf < *(uint *)(pcVar8 + 0x14)) {
        pcVar15 = *(char **)pcVar8;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar15,*(uint *)(pcVar8 + 0x10));
      local_8._0_1_ = 7;
      if (0xf < local_48) {
        pnVar14 = (nothrow_t *)(local_48 + 1);
        pvVar13 = local_5c[0];
        if ((nothrow_t *)0xfff < pnVar14) {
          pvVar13 = *(void **)((int)local_5c[0] + -4);
          pnVar14 = (nothrow_t *)(local_48 + 0x24);
          if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar13,pnVar14);
      }
      fVar17 = *(float *)(iVar2 + 0x40);
      if (1.0 <= fVar17) {
        strUsingArgs((char *)local_8c,"`7%.0f`2s ago",(double)fVar17);
        local_8._0_1_ = 9;
      }
      pcVar8 = (char *)strUsingArgs((char *)local_5c,"`2LDT.: %s");
      local_8 = 10;
      pcVar15 = pcVar8;
      if (0xf < *(uint *)(pcVar8 + 0x14)) {
        pcVar15 = *(char **)pcVar8;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar15,*(uint *)(pcVar8 + 0x10));
      local_8 = CONCAT31(local_8._1_3_,9);
      if (0xf < local_48) {
        pnVar14 = (nothrow_t *)(local_48 + 1);
        pvVar13 = local_5c[0];
        if ((nothrow_t *)0xfff < pnVar14) {
          pvVar13 = *(void **)((int)local_5c[0] + -4);
          pnVar14 = (nothrow_t *)(local_48 + 0x24);
          if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar13,pnVar14);
      }
      local_8._0_1_ = 7;
      local_8._1_3_ = 0;
      local_4c = 0;
      local_48 = 0xf;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
      if ((1.0 <= fVar17) && (0xf < local_78)) {
        pnVar14 = (nothrow_t *)(local_78 + 1);
        pvVar13 = local_8c[0];
        if ((nothrow_t *)0xfff < pnVar14) {
          pvVar13 = *(void **)((int)local_8c[0] + -4);
          pnVar14 = (nothrow_t *)(local_78 + 0x24);
          if (0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar13,pnVar14);
      }
      if ((*(int *)(iVar2 + 0x130) != 0) &&
         (*(char *)(*(int *)(*(int *)(iVar2 + 0x130) + 0x40) + 0x34) != '\0')) {
        std::basic_string<>::append((basic_string<> *)&local_44,"\n",1);
        iVar10 = *(int *)(*(int *)(iVar2 + 0x130) + 0x44);
        if ((iVar10 == 0) ||
           ((*(int *)(iVar10 + 0x124) == 0 || (*(char *)(*(int *)(iVar10 + 0x124) + 0x160) == '\0'))
           )) {
          uVar16 = 0x37;
          uVar12 = 0x37;
          if (*(int *)(iVar10 + 8) != 0) {
            uVar12 = 0x30;
          }
          pcVar15 = (char *)strUsingArgs((char *)local_8c,"`2From: `%c%s\n",uVar12);
          local_8._0_1_ = 0xd;
          pcVar6 = pcVar15;
          if (0xf < *(uint *)(pcVar15 + 0x14)) {
            pcVar6 = *(char **)pcVar15;
          }
          std::basic_string<>::append((basic_string<> *)&local_44,pcVar6,*(uint *)(pcVar15 + 0x10));
          local_8._0_1_ = 7;
          if (0xf < local_78) {
            pnVar14 = (nothrow_t *)(local_78 + 1);
            pvVar13 = local_8c[0];
            if ((nothrow_t *)0xfff < pnVar14) {
              pvVar13 = *(void **)((int)local_8c[0] + -4);
              pnVar14 = (nothrow_t *)(local_78 + 0x24);
              if (0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pvVar13,pnVar14);
          }
          if (*(int *)(*(int *)(*(int *)(iVar2 + 0x130) + 0x44) + 0x10) != 0) {
            uVar16 = 0x21;
          }
          pcVar15 = (char *)strUsingArgs((char *)local_8c,"`2Dest: `%c%s",uVar16);
          local_8._0_1_ = 0xe;
          pcVar6 = pcVar15;
          if (0xf < *(uint *)(pcVar15 + 0x14)) {
            pcVar6 = *(char **)pcVar15;
          }
          std::basic_string<>::append((basic_string<> *)&local_44,pcVar6,*(uint *)(pcVar15 + 0x10));
        }
        else {
          local_f8 = *(Ship **)(iVar10 + 0x8c);
          bVar5 = std::_Traits_equal<>("",0,pcVar6,unaff_EDI);
          if (bVar5) {
            local_f0 = (Ship *)0x5e3d3c;
          }
          else {
            local_f0 = (Ship *)(iVar10 + 0x7c);
            if (0xf < *(uint *)(iVar10 + 0x90)) {
              local_f0 = *(Ship **)(iVar10 + 0x7c);
            }
          }
          bVar5 = std::_Traits_equal<>("",0,pcVar6,unaff_EDI);
          uVar12 = 0x37;
          if (bVar5) {
            uVar12 = 0x30;
          }
          pbVar7 = (basic_string<> *)
                   strUsingArgs((char *)local_8c,"`2From: `%c%s\n",uVar12,local_f0);
          local_8._0_1_ = 0xb;
          std::basic_string<>::append((basic_string<> *)&local_44,pbVar7);
          local_8._0_1_ = 7;
          if (0xf < local_78) {
            pnVar14 = (nothrow_t *)(local_78 + 1);
            pvVar13 = local_8c[0];
            if ((nothrow_t *)0xfff < pnVar14) {
              pvVar13 = *(void **)((int)local_8c[0] + -4);
              pnVar14 = (nothrow_t *)(local_78 + 0x24);
              if (0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pvVar13,pnVar14);
          }
          iVar2 = *(int *)(*(int *)(iVar2 + 0x130) + 0x44);
          pcVar15 = (char *)(iVar2 + 0xac);
          local_f8 = *(Ship **)(iVar2 + 0xbc);
          bVar5 = std::_Traits_equal<>("",0,pcVar6,unaff_EDI);
          if (bVar5) {
            pcVar15 = "unknown";
          }
          else if (0xf < *(uint *)(iVar2 + 0xc0)) {
            pcVar15 = *(char **)pcVar15;
          }
          bVar5 = std::_Traits_equal<>("",0,pcVar6,unaff_EDI);
          uVar12 = 0x37;
          if (bVar5) {
            uVar12 = 0x30;
          }
          pbVar7 = (basic_string<> *)strUsingArgs((char *)local_8c,"`2Dest: `%c%s",uVar12,pcVar15);
          local_8._0_1_ = 0xc;
          std::basic_string<>::append((basic_string<> *)&local_44,pbVar7);
        }
        if (0xf < local_78) {
          pnVar14 = (nothrow_t *)(local_78 + 1);
          pvVar13 = local_8c[0];
          if ((nothrow_t *)0xfff < pnVar14) {
            pvVar13 = *(void **)((int)local_8c[0] + -4);
            pnVar14 = (nothrow_t *)(local_78 + 0x24);
            uVar4 = (undefined1)local_8;
            if (0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar13))) goto LAB_004f805c;
          }
          operator_delete(pvVar13,pnVar14);
        }
      }
      if (0xf < local_90) {
        pnVar14 = (nothrow_t *)(local_90 + 1);
        pvVar13 = local_a4[0];
        if ((nothrow_t *)0xfff < pnVar14) {
          pvVar13 = *(void **)((int)local_a4[0] + -4);
          pnVar14 = (nothrow_t *)(local_90 + 0x24);
          uVar4 = (undefined1)local_8;
          if (0x1f < (uint)((int)local_a4[0] + (-4 - (int)pvVar13))) goto LAB_004f805c;
        }
        operator_delete(pvVar13,pnVar14);
      }
      local_94 = 0;
      local_90 = 0xf;
      local_a4[0] = (void *)((uint)local_a4[0] & 0xffffff00);
      if (0xf < local_60) {
        pnVar14 = (nothrow_t *)(local_60 + 1);
        pppppppuVar11 = (undefined4 *******)local_74[0];
        if ((nothrow_t *)0xfff < pnVar14) {
          pppppppuVar11 = (undefined4 *******)local_74[0][-1];
          pnVar14 = (nothrow_t *)(local_60 + 0x24);
          uVar4 = (undefined1)local_8;
          if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pppppppuVar11))) goto LAB_004f805c;
        }
        operator_delete(pppppppuVar11,pnVar14);
      }
      if (0xf < local_c0) {
        pnVar14 = (nothrow_t *)(local_c0 + 1);
        pvVar13 = local_d4[0];
        if ((nothrow_t *)0xfff < pnVar14) {
          pvVar13 = *(void **)((int)local_d4[0] + -4);
          pnVar14 = (nothrow_t *)(local_c0 + 0x24);
          uVar4 = (undefined1)local_8;
          if (0x1f < (uint)((int)local_d4[0] + (-4 - (int)pvVar13))) goto LAB_004f805c;
        }
        operator_delete(pvVar13,pnVar14);
      }
      if (0xf < local_d8) {
        pnVar14 = (nothrow_t *)(local_d8 + 1);
        pvVar13 = local_ec[0];
        if ((nothrow_t *)0xfff < pnVar14) {
          pvVar13 = *(void **)((int)local_ec[0] + -4);
          pnVar14 = (nothrow_t *)(local_d8 + 0x24);
          uVar4 = (undefined1)local_8;
          if (0x1f < (uint)((int)local_ec[0] + (-4 - (int)pvVar13))) goto LAB_004f805c;
        }
        operator_delete(pvVar13,pnVar14);
      }
    }
    if (0xf < local_18) {
      pnVar14 = (nothrow_t *)(local_18 + 1);
      pvVar13 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar14) {
        pvVar13 = *(void **)((int)local_2c[0] + -4);
        pnVar14 = (nothrow_t *)(local_18 + 0x24);
        uVar4 = (undefined1)local_8;
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13))) {
LAB_004f805c:
          local_8._0_1_ = uVar4;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar13,pnVar14);
    }
  }
LAB_004f89d1:
  uVar18 = local_44;
  local_44 = local_44 & 0xffffff00;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(uint *)param_1 = uVar18;
  *(undefined4 *)(param_1 + 4) = uStack_40;
  *(undefined4 *)(param_1 + 8) = uStack_3c;
  *(undefined4 *)(param_1 + 0xc) = uStack_38;
  *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_30,local_34);
  local_34 = 0;
  uStack_30 = 0xf;
  word::~word((word *)&local_44);
LAB_004f8a10:
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getTabletSummary(class Ship *,int)

Ship * __cdecl ShipTextData::getTabletSummary(Ship *param_1,int param_2)

{
  TabletManager *this;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    return param_1;
  }
  Singleton<>::getInstance();
  TabletManager::getTabletSummary(this);
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getTabletTranslate(class Ship *,int)

Ship * __cdecl ShipTextData::getTabletTranslate(Ship *param_1,int param_2)

{
  TabletManager *this;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    return param_1;
  }
  this = Singleton<>::getInstance();
  TabletManager::getTranslateString(this);
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getTabletNotes(class Ship *,int)

Ship * __cdecl ShipTextData::getTabletNotes(Ship *param_1,int param_2)

{
  TabletManager *this;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    return param_1;
  }
  Singleton<>::getInstance();
  TabletManager::getNotes(this);
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getOmegaTabletHeader(class Ship *,int)

Ship * __cdecl ShipTextData::getOmegaTabletHeader(Ship *param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    return param_1;
  }
  std::basic_string<>::basic_string<>
            ((basic_string<> *)param_1,(basic_string<> *)&PresentationData::m_tabletHeader);
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getCargoViewText(class Ship *,int)

Ship * __cdecl ShipTextData::getCargoViewText(Ship *param_1,int param_2)

{
  TradeEngine *this;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c1a02;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    ExceptionList = local_10;
    return param_1;
  }
  if (Singleton<>::instance == (TradeEngine *)0x0) {
    this = operator_new(300);
    local_8 = 0;
    Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
  }
  local_8 = 0xffffffff;
  TradeEngine::getCargoViewText(Singleton<>::instance);
  ExceptionList = local_10;
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getEmailStateText(class Ship *,int)

Ship * __cdecl ShipTextData::getEmailStateText(Ship *param_1,int param_2)

{
  EmailManager *this;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    return param_1;
  }
  this = Singleton<>::getInstance();
  EmailManager::getEmailStateText(this);
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getPlayerNote(class Ship *,int)

Ship * __cdecl ShipTextData::getPlayerNote(Ship *param_1,int param_2)

{
  NotesManager *this;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    return param_1;
  }
  this = Singleton<>::instance;
  if (Singleton<>::instance == (NotesManager *)0x0) {
    this = operator_new(4);
    Singleton<>::instance = this;
    *(undefined4 *)this = 0xffffffff;
  }
  NotesManager::getSelectedNotesText(this);
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getMusicPlayer(class Ship *,int)

Ship * __cdecl ShipTextData::getMusicPlayer(Ship *param_1,int param_2)

{
  SoundEngine *pSVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    return param_1;
  }
  pSVar1 = Singleton<>::getInstance();
  std::basic_string<>::basic_string<>((basic_string<> *)param_1,(basic_string<> *)(pSVar1 + 0xc));
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getOmegaTabletScreen(class Ship *,int)

Ship * __cdecl ShipTextData::getOmegaTabletScreen(Ship *param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    return param_1;
  }
  std::basic_string<>::basic_string<>
            ((basic_string<> *)param_1,(basic_string<> *)&PresentationData::m_tabletScreen);
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getOmegaTabletFooter(class Ship *,int)

Ship * __cdecl ShipTextData::getOmegaTabletFooter(Ship *param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    return param_1;
  }
  std::basic_string<>::basic_string<>
            ((basic_string<> *)param_1,(basic_string<> *)&PresentationData::m_tabletFooter);
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getShopStr(class Ship *,int)

Ship * __cdecl ShipTextData::getShopStr(Ship *param_1,int param_2)

{
  TradeEngine *this;
  TradeEngine *in_ECX;
  TradeEngine *extraout_ECX;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c1a02;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    ExceptionList = local_10;
    return param_1;
  }
  if (Singleton<>::instance == (TradeEngine *)0x0) {
    this = operator_new(300);
    local_8 = 0;
    Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
    in_ECX = extraout_ECX;
  }
  local_8 = 0xffffffff;
  TradeEngine::getShopHeader(in_ECX,(Shop)param_1);
  ExceptionList = local_10;
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getTradeStrBottom(class Ship *,int)

Ship * __cdecl ShipTextData::getTradeStrBottom(Ship *param_1,int param_2)

{
  int iVar1;
  TradeEngine *pTVar2;
  TradeEngine *this;
  int in_stack_0000000c;
  void *local_10;
  undefined *puStack_c;
  TradeEngine *local_8;
  
  pTVar2 = Singleton<>::instance;
  local_8 = (TradeEngine *)0xffffffff;
  puStack_c = &DAT_005c1a02;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 != 0) {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8 = pTVar2;
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
    }
    local_8 = (TradeEngine *)0xffffffff;
    if (in_stack_0000000c != 1) {
      iVar1 = *(int *)(*(int *)(Singleton<>::instance + 0x11c) + 4 + in_stack_0000000c * 0x44);
      if (iVar1 == 1) {
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)param_1,(basic_string<> *)(Singleton<>::instance + 0x54));
        ExceptionList = local_10;
        return param_1;
      }
      if (iVar1 == 2) {
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)param_1,(basic_string<> *)(Singleton<>::instance + 0x3c));
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = (TradeEngine *)0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (Ship)0x0;
  std::basic_string<>::assign((basic_string<> *)param_1,"",0);
  ExceptionList = local_10;
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getTradeStrTop(class Ship *,int)

Ship * __cdecl ShipTextData::getTradeStrTop(Ship *param_1,int param_2)

{
  TradeEngine *this;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c1a02;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    ExceptionList = local_10;
    return param_1;
  }
  if (Singleton<>::instance == (TradeEngine *)0x0) {
    this = operator_new(300);
    local_8 = 0;
    Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
  }
  local_8 = 0xffffffff;
  TradeEngine::getCurrentTopStr(Singleton<>::instance,(Shop)param_1);
  ExceptionList = local_10;
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getTradeStrFull(class Ship *,int)

Ship * __cdecl ShipTextData::getTradeStrFull(Ship *param_1,int param_2)

{
  TradeEngine *this;
  int in_stack_0000000c;
  char *pcVar1;
  uint uVar2;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c1a02;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 != 0) {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8 = 0;
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
    }
    if (*(int *)(*(int *)(Singleton<>::instance + 0x11c) + 4 + in_stack_0000000c * 0x44) == 0) {
      uVar2 = 0x6f;
      pcVar1 = 
      "Welcome to one of many `0Omega Automated Trading Screens`7.\n\nYour items are on the left, ours are on the right."
      ;
      goto LAB_004f90b2;
    }
  }
  uVar2 = 0;
  pcVar1 = "";
LAB_004f90b2:
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (Ship)0x0;
  std::basic_string<>::assign((basic_string<> *)param_1,pcVar1,uVar2);
  ExceptionList = local_10;
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getTradeCommodityIcon(class Ship *,int)

Ship * __cdecl ShipTextData::getTradeCommodityIcon(Ship *param_1,int param_2)

{
  TradeEngine *this;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c1a02;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    ExceptionList = local_10;
    return param_1;
  }
  if (Singleton<>::instance == (TradeEngine *)0x0) {
    this = operator_new(300);
    local_8 = 0;
    Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
  }
  local_8 = 0xffffffff;
  TradeEngine::getCurrentIcon(Singleton<>::instance,(Shop)param_1);
  ExceptionList = local_10;
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getCompanyStr(class Ship *,int)

Ship * __cdecl ShipTextData::getCompanyStr(Ship *param_1,int param_2)

{
  TradeEngine *this;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c1a02;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    ExceptionList = local_10;
    return param_1;
  }
  if (Singleton<>::instance == (TradeEngine *)0x0) {
    this = operator_new(300);
    local_8 = 0;
    Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
  }
  local_8 = 0xffffffff;
  TradeEngine::getCompanyStr(Singleton<>::instance);
  ExceptionList = local_10;
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getLoanStr(class Ship *,int)

Ship * __cdecl ShipTextData::getLoanStr(Ship *param_1,int param_2)

{
  TradeEngine *this;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c1a02;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    ExceptionList = local_10;
    return param_1;
  }
  if (Singleton<>::instance == (TradeEngine *)0x0) {
    this = operator_new(300);
    local_8 = 0;
    Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
  }
  local_8 = 0xffffffff;
  TradeEngine::getLoanStr(Singleton<>::instance);
  ExceptionList = local_10;
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getContractStr(class Ship *,int)

Ship * __cdecl ShipTextData::getContractStr(Ship *param_1,int param_2)

{
  TradeEngine *this;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c1a02;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    ExceptionList = local_10;
    return param_1;
  }
  if (Singleton<>::instance == (TradeEngine *)0x0) {
    this = operator_new(300);
    local_8 = 0;
    Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
  }
  local_8 = 0xffffffff;
  TradeEngine::getContractStr(Singleton<>::instance);
  ExceptionList = local_10;
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getBountyStr(class Ship *,int)

Ship * __cdecl ShipTextData::getBountyStr(Ship *param_1,int param_2)

{
  TradeEngine *this;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c1a02;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    ExceptionList = local_10;
    return param_1;
  }
  if (Singleton<>::instance == (TradeEngine *)0x0) {
    this = operator_new(300);
    local_8 = 0;
    Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
  }
  local_8 = 0xffffffff;
  TradeEngine::getBountyStr(Singleton<>::instance);
  ExceptionList = local_10;
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getPassengerInfo(class Ship *,int)

Ship * __cdecl ShipTextData::getPassengerInfo(Ship *param_1,int param_2)

{
  TradeEngine *this;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c1a02;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    ExceptionList = local_10;
    return param_1;
  }
  if (Singleton<>::instance == (TradeEngine *)0x0) {
    this = operator_new(300);
    local_8 = 0;
    Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
  }
  local_8 = 0xffffffff;
  TradeEngine::getPassengerInfo(Singleton<>::instance);
  ExceptionList = local_10;
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getMechanicStatusStr(class Ship *,int)

Ship * __cdecl ShipTextData::getMechanicStatusStr(Ship *param_1,int param_2)

{
  TradeEngine *this;
  TradeEngine *in_ECX;
  TradeEngine *extraout_ECX;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c1a02;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    ExceptionList = local_10;
    return param_1;
  }
  if (Singleton<>::instance == (TradeEngine *)0x0) {
    this = operator_new(300);
    local_8 = 0;
    Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
    in_ECX = extraout_ECX;
  }
  local_8 = 0xffffffff;
  TradeEngine::getMechanicStatus(in_ECX);
  ExceptionList = local_10;
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getMechanicPodStatusStr(class Ship *,int)

Ship * __cdecl ShipTextData::getMechanicPodStatusStr(Ship *param_1,int param_2)

{
  TradeEngine *this;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c1a02;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    ExceptionList = local_10;
    return param_1;
  }
  if (Singleton<>::instance == (TradeEngine *)0x0) {
    this = operator_new(300);
    local_8 = 0;
    Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
  }
  local_8 = 0xffffffff;
  TradeEngine::getPodStatus(Singleton<>::instance);
  ExceptionList = local_10;
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getMechanicModuleStatusStr(class Ship *,int)

Ship * __cdecl ShipTextData::getMechanicModuleStatusStr(Ship *param_1,int param_2)

{
  TradeEngine *this;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c1a02;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    ExceptionList = local_10;
    return param_1;
  }
  if (Singleton<>::instance == (TradeEngine *)0x0) {
    this = operator_new(300);
    local_8 = 0;
    Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
  }
  local_8 = 0xffffffff;
  TradeEngine::getModuleStatus(Singleton<>::instance);
  ExceptionList = local_10;
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getMechanicHullSectionStatusStr(class Ship *,int)

Ship * __cdecl ShipTextData::getMechanicHullSectionStatusStr(Ship *param_1,int param_2)

{
  TradeEngine *this;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c1a02;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    ExceptionList = local_10;
    return param_1;
  }
  if (Singleton<>::instance == (TradeEngine *)0x0) {
    this = operator_new(300);
    local_8 = 0;
    Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
  }
  local_8 = 0xffffffff;
  TradeEngine::getHullSectionStatus(Singleton<>::instance);
  ExceptionList = local_10;
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getMechanicArmamentStatusStr(class Ship *,int)

Ship * __cdecl ShipTextData::getMechanicArmamentStatusStr(Ship *param_1,int param_2)

{
  TradeEngine *this;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c1a02;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    ExceptionList = local_10;
    return param_1;
  }
  if (Singleton<>::instance == (TradeEngine *)0x0) {
    this = operator_new(300);
    local_8 = 0;
    Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
  }
  local_8 = 0xffffffff;
  TradeEngine::getArmamentStatus(Singleton<>::instance);
  ExceptionList = local_10;
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getSelectedPodIcon(class Ship *,int)

Ship * __cdecl ShipTextData::getSelectedPodIcon(Ship *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  TradeEngine *this;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c1a02;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 != 0) {
    if (Singleton<>::instance == (TradeEngine *)0x0) {
      this = operator_new(300);
      local_8 = 0;
      Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
    }
    if ((*(int *)(Singleton<>::instance + 0x10c) == 2) &&
       (*(int *)(Singleton<>::instance + 0x114) != -1)) {
      iVar2 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0xc +
                      *(int *)(Singleton<>::instance + 0x114) * 4);
      if (iVar2 == 0) {
        uVar5 = 0x11;
        pcVar4 = "cargopod_none.png";
      }
      else {
        iVar3 = 1;
        do {
          if (*(char *)(iVar2 + iVar3) == '\0') {
            if (*(char *)(iVar2 + 2) != '\0') {
              uVar5 = 0x15;
              pcVar4 = "cargopod_shielded.png";
              goto LAB_004f996a;
            }
            cVar1 = *(char *)(iVar2 + 1);
            *(undefined4 *)(param_1 + 0x10) = 0;
            *(undefined4 *)(param_1 + 0x14) = 0xf;
            *param_1 = (Ship)0x0;
            if (cVar1 == '\0') {
              uVar5 = 0x13;
              pcVar4 = "cargopod_normal.png";
            }
            else {
              uVar5 = 0x11;
              pcVar4 = "cargopod_temp.png";
            }
            goto LAB_004f9980;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 3);
        uVar5 = 0x10;
        pcVar4 = "cargopod_all.png";
      }
      goto LAB_004f996a;
    }
  }
  uVar5 = 0;
  pcVar4 = "";
LAB_004f996a:
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (Ship)0x0;
LAB_004f9980:
  local_8 = 0xffffffff;
  std::basic_string<>::assign((basic_string<> *)param_1,pcVar4,uVar5);
  ExceptionList = local_10;
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getShipSelectedText(class Ship *,int)

Ship * __cdecl ShipTextData::getShipSelectedText(Ship *param_1,int param_2)

{
  TradeEngine *this;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c1a02;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    ExceptionList = local_10;
    return param_1;
  }
  if (Singleton<>::instance == (TradeEngine *)0x0) {
    this = operator_new(300);
    local_8 = 0;
    Singleton<>::instance = (TradeEngine *)TradeEngine::TradeEngine(this);
  }
  local_8 = 0xffffffff;
  TradeEngine::getShipSelectedText(Singleton<>::instance);
  ExceptionList = local_10;
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getWreckStatusText(class Ship *,int)

void __cdecl ShipTextData::getWreckStatusText(Ship *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  FlagManager *pFVar4;
  basic_string<> *pbVar5;
  char *pcVar6;
  void *pvVar7;
  nothrow_t *pnVar8;
  uint unaff_EDI;
  void *local_74 [5];
  uint local_60;
  uint local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  void *local_44 [5];
  uint local_30;
  void *local_2c [5];
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c1a68;
  local_10 = ExceptionList;
  pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_14 = pcVar3;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (Ship)0x0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
  }
  else {
    local_4c = 0;
    uStack_48 = 0xf;
    local_5c = local_5c & 0xffffff00;
    local_8 = 0;
    iVar1 = *(int *)(param_2 + 0x174);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x60) == 4)) {
      std::basic_string<>::basic_string<>
                ((basic_string<> *)local_2c,(basic_string<> *)(iVar1 + 0x80));
      local_8._0_1_ = 1;
      std::transform<>();
      strUsingArgs((char *)local_74);
      local_8._0_1_ = 2;
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&stack0xffffff58,(basic_string<> *)local_74);
      local_8._0_1_ = 3;
      pFVar4 = Singleton<>::getInstance();
      local_8 = CONCAT31(local_8._1_3_,2);
      FlagManager::flagSet(pFVar4);
      pbVar5 = (basic_string<> *)strUsingArgs((char *)local_44);
      std::basic_string<>::operator=((basic_string<> *)local_74,pbVar5);
      if (0xf < local_30) {
        pnVar8 = (nothrow_t *)(local_30 + 1);
        pvVar7 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar8) {
          pvVar7 = *(void **)((int)local_44[0] + -4);
          pnVar8 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar7,pnVar8);
      }
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&stack0xffffff58,(basic_string<> *)local_74);
      local_8._0_1_ = 4;
      pFVar4 = Singleton<>::getInstance();
      local_8 = CONCAT31(local_8._1_3_,2);
      bVar2 = FlagManager::flagSet(pFVar4);
      if (!bVar2) {
        std::_Traits_equal<>("",0,pcVar3,unaff_EDI);
      }
      pcVar6 = (char *)strUsingArgs((char *)local_44);
      local_8._0_1_ = 5;
      pcVar3 = pcVar6;
      if (0xf < *(uint *)(pcVar6 + 0x14)) {
        pcVar3 = *(char **)pcVar6;
      }
      std::basic_string<>::append((basic_string<> *)&local_5c,pcVar3,*(uint *)(pcVar6 + 0x10));
      local_8._0_1_ = 2;
      if (0xf < local_30) {
        pnVar8 = (nothrow_t *)(local_30 + 1);
        pvVar7 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar8) {
          pvVar7 = *(void **)((int)local_44[0] + -4);
          pnVar8 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar7,pnVar8);
      }
      pcVar6 = (char *)strUsingArgs((char *)local_44);
      local_8._0_1_ = 6;
      pcVar3 = pcVar6;
      if (0xf < *(uint *)(pcVar6 + 0x14)) {
        pcVar3 = *(char **)pcVar6;
      }
      std::basic_string<>::append((basic_string<> *)&local_5c,pcVar3,*(uint *)(pcVar6 + 0x10));
      local_8._0_1_ = 2;
      if (0xf < local_30) {
        pnVar8 = (nothrow_t *)(local_30 + 1);
        pvVar7 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar8) {
          pvVar7 = *(void **)((int)local_44[0] + -4);
          pnVar8 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar7,pnVar8);
      }
      std::basic_string<>::append((basic_string<> *)&local_5c,"`%Power: `@OFFLINE\n",0x13);
      std::basic_string<>::append((basic_string<> *)&local_5c,"`%REACT: `@OFFLINE\n",0x13);
      std::basic_string<>::append
                ((basic_string<> *)&local_5c,"`%IFF  : `^EMERGENCY POWER ONLY\n",0x20);
      std::basic_string<>::append((basic_string<> *)&local_5c,"`%LIFE.: `$Minimum\n\n",0x14);
      pcVar6 = (char *)strUsingArgs((char *)local_44);
      local_8._0_1_ = 7;
      pcVar3 = pcVar6;
      if (0xf < *(uint *)(pcVar6 + 0x14)) {
        pcVar3 = *(char **)pcVar6;
      }
      std::basic_string<>::append((basic_string<> *)&local_5c,pcVar3,*(uint *)(pcVar6 + 0x10));
      local_8._0_1_ = 2;
      if (0xf < local_30) {
        pnVar8 = (nothrow_t *)(local_30 + 1);
        pvVar7 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar8) {
          pvVar7 = *(void **)((int)local_44[0] + -4);
          pnVar8 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar7,pnVar8);
      }
      pcVar6 = (char *)strUsingArgs((char *)local_44);
      local_8 = CONCAT31(local_8._1_3_,8);
      pcVar3 = pcVar6;
      if (0xf < *(uint *)(pcVar6 + 0x14)) {
        pcVar3 = *(char **)pcVar6;
      }
      std::basic_string<>::append((basic_string<> *)&local_5c,pcVar3,*(uint *)(pcVar6 + 0x10));
      if (0xf < local_30) {
        pnVar8 = (nothrow_t *)(local_30 + 1);
        pvVar7 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar8) {
          pvVar7 = *(void **)((int)local_44[0] + -4);
          pnVar8 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar7,pnVar8);
      }
      if (0xf < local_60) {
        pnVar8 = (nothrow_t *)(local_60 + 1);
        pvVar7 = local_74[0];
        if ((nothrow_t *)0xfff < pnVar8) {
          pvVar7 = *(void **)((int)local_74[0] + -4);
          pnVar8 = (nothrow_t *)(local_60 + 0x24);
          if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar7,pnVar8);
      }
      if (0xf < local_18) {
        pnVar8 = (nothrow_t *)(local_18 + 1);
        pvVar7 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar8) {
          pvVar7 = *(void **)((int)local_2c[0] + -4);
          pnVar8 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar7,pnVar8);
      }
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(uint *)param_1 = local_5c;
    *(undefined4 *)(param_1 + 4) = uStack_58;
    *(undefined4 *)(param_1 + 8) = uStack_54;
    *(undefined4 *)(param_1 + 0xc) = uStack_50;
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_48,local_4c);
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getCredits(class Ship *,int)

Ship * __cdecl ShipTextData::getCredits(Ship *param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (Ship)0x0;
  std::basic_string<>::assign
            ((basic_string<> *)param_1,
             "`%Objects in Space`7\n\nElissa Harris - Designer, Lead Programmer\nLeigh Harris - Producer, Lead Designer\nMathew Purchase - Lead Artist\nJennifer Scheurle - Concept Artist / Physical Spaceship Controller Designer\n\n`%Writers`7\n\nLeigh Harris\nC B Johnson\nDaniel McMahon\nNikolai Goundry\nElissa Harris\nLouise Bennett\nShay Leighton\nImogen Dall\nRebecca Cheers\nTalia Enright\nJay Mitra\nAlli Reed\nCharlotte Bradley\nDavid Hollingworth\nLucy O\'Brien\n\n`%Additional Sound by`7\n\nPiers Gilbertson - Sound Designer\nMichael Bates - Sound Designer\n\n`%Additional Art by`7\n\nAri Sim\nKyle McKellar\n\n`%Physical Spaceship Controller Construction`7\n\nElizabeth Wilkie\n\n`%Music`7\n\nBohsef - Pulse / Sailor\nEliot Fish - Hash Key / Afternoon Moon\nAdin Milo - Space Love / No Return\nTamara Violet Partridge - Objects in Space\nMaize Wallin - Tinker\nMaskedsound - Endless Void\nDanii Johnstone - Dichromatic / Cassandra Voyage\nLuke Murray and Zachary Carlsson - Deep Horizon\nEdwin Montgomery - Synth Light\nEdFokks - Station 55\nSpooky Castle Music - Asteroids\n\n`%Testers`7\n\nAll our amazing beta testers\nAndrew Karvelis\nErvin Nunez\nMartijn de Reeper\nNicholas Amzallag\nTaylor Tilbury\nXavier Hancock\nSydney Academy of Interactive Entertainment Design Class of 2015\n\n`%Expo Helpers`7\n\nKatie Williams\nBrenna Anderson\nBrett Morris\nRyan McGlinn\nRyan Sturges\nSophie Mackey\n\n`%Special Thanks`7\n\nChris Smoak\nKrister Collin\nJasmine Marshman\nGuy Blomberg\nNatasha Wolf\nMatt Ditton\nKurtis Wakefield\nTony Reed\nDan Hindes\nKamina Vincent\nMarc Chee\nTor Sovik\nJohn Kane\nAnthea Freshwater\nClaire Hosking\nIGDA Sydney\nPaul Nunes\nNel Wolf\nGrant Barrie\nSMG Studio\nSurprise Attack Games\nReedPOP\nThe Australian Centre for the Moving Image\nHelen Stuckey\nSerena Bentley\nThe Academy of Interactive Entertainment\nJeff Lockhart\nJohn Polson\nEpiphany Games\n\n`%All our dedicated fans, friends and family`7\n\n`%Made possible with funding from Screen NSW`7\n\n`%505 Games`7\n"
             ,0x766);
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getGameOverText(class Ship *,int)

Ship * __cdecl ShipTextData::getGameOverText(Ship *param_1,int param_2)

{
  std::basic_string<>::basic_string<>
            ((basic_string<> *)param_1,(basic_string<> *)(g_gameData + 0x158));
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getLogStr(class Ship *,int)

void __cdecl ShipTextData::getLogStr(Ship *param_1,int param_2)

{
  void *pvVar1;
  void *pvVar2;
  void **ppvVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  bool bVar6;
  void *local_44;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint uStack_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_005c1aa9;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar6 = param_2 == 0;
  if (bVar6) {
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    std::basic_string<>::assign((basic_string<> *)local_2c,"",0);
    ppvVar3 = local_2c;
  }
  else {
    ppvVar3 = (void **)LogSystem::getLogAsStr(*(LogSystem **)(param_2 + 0x224));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  pvVar4 = ppvVar3[1];
  pvVar1 = ppvVar3[2];
  pvVar2 = ppvVar3[3];
  *(void **)param_1 = *ppvVar3;
  *(void **)(param_1 + 4) = pvVar4;
  *(void **)(param_1 + 8) = pvVar1;
  *(void **)(param_1 + 0xc) = pvVar2;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(ppvVar3 + 4);
  ppvVar3[4] = (void *)0x0;
  ppvVar3[5] = (void *)0xf;
  *(undefined1 *)ppvVar3 = 0;
  if (bVar6) {
    if (0xf < uStack_18) {
      pnVar5 = (nothrow_t *)(uStack_18 + 1);
      pvVar4 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar5) {
        pvVar4 = *(void **)((int)local_2c[0] + -4);
        pnVar5 = (nothrow_t *)(uStack_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar4,pnVar5);
    }
  }
  if ((!bVar6) && (0xf < local_30)) {
    pnVar5 = (nothrow_t *)(local_30 + 1);
    pvVar4 = local_44;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)local_44 + -4);
      pnVar5 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getSelectedScenarioStr(class Ship *,int)

void __cdecl ShipTextData::getSelectedScenarioStr(Ship *param_1,int param_2)

{
  bool bVar1;
  char *pcVar2;
  Scenario *pSVar3;
  SaveHandler *this;
  SaveMetaData *pSVar4;
  char *pcVar5;
  SaveHandler *this_00;
  void *pvVar6;
  Scenario *pSVar7;
  nothrow_t *pnVar8;
  basic_string<> *pbVar9;
  uint unaff_EDI;
  basic_string<> abStack_88 [8];
  undefined4 uStack_80;
  int iVar10;
  void *local_5c [5];
  uint local_48;
  void *local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  uint uStack_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c1b60;
  local_10 = ExceptionList;
  pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_34 = 0;
  uStack_30 = 0xf;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  local_8 = 0;
  local_14 = pcVar2;
  if (g_gameLogic[0xa4] == (GameLogic)0x0) {
    pbVar9 = (basic_string<> *)(g_gameData + 0xb4);
    bVar1 = std::_Traits_equal<>("",0,pcVar2,unaff_EDI);
    if (!bVar1) {
      std::basic_string<>::basic_string<>(abStack_88,pbVar9);
      pSVar3 = GameData::getScenario();
      if ((*(int *)(g_gameLogic + 0x74) == -1) || (*(int *)(pSVar3 + 0x6c) != 1)) {
LAB_004fa738:
        pSVar7 = pSVar3 + 0x48;
        if (0xf < *(uint *)(pSVar3 + 0x5c)) {
          pSVar7 = *(Scenario **)(pSVar3 + 0x48);
        }
        std::basic_string<>::append
                  ((basic_string<> *)&local_44,(char *)pSVar7,*(uint *)(pSVar3 + 0x58));
        std::basic_string<>::append((basic_string<> *)&local_44,"\n\n",2);
        if ((*(int *)(pSVar3 + 0x6c) == 2) && (*(int *)(pSVar3 + 0x68) != 0)) {
          if (*(float *)(pSVar3 + 0x3c4) == -1.0) {
            std::basic_string<>::append
                      ((basic_string<> *)&local_44,"`!Scenario never completed",0x1a);
          }
          else {
            printFloatAsMinsAndSeconds((float)pcVar2);
            local_8._0_1_ = 0xe;
            uStack_80 = 0x4fa7b4;
            pcVar5 = (char *)strUsingArgs((char *)local_2c);
            local_8._0_1_ = 0xf;
            pcVar2 = pcVar5;
            if (0xf < *(uint *)(pcVar5 + 0x14)) {
              pcVar2 = *(char **)pcVar5;
            }
            std::basic_string<>::append((basic_string<> *)&local_44,pcVar2,*(uint *)(pcVar5 + 0x10))
            ;
            local_8._0_1_ = 0xe;
            if (0xf < local_18) {
              pnVar8 = (nothrow_t *)(local_18 + 1);
              pvVar6 = local_2c[0];
              if ((nothrow_t *)0xfff < pnVar8) {
                pvVar6 = *(void **)((int)local_2c[0] + -4);
                pnVar8 = (nothrow_t *)(local_18 + 0x24);
                if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar6,pnVar8);
            }
            local_8._0_1_ = 0;
            local_1c = 0;
            local_18 = 0xf;
            local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
            if (0xf < local_48) {
              pnVar8 = (nothrow_t *)(local_48 + 1);
              pvVar6 = local_5c[0];
              if ((nothrow_t *)0xfff < pnVar8) {
                pvVar6 = *(void **)((int)local_5c[0] + -4);
                pnVar8 = (nothrow_t *)(local_48 + 0x24);
                if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar6,pnVar8);
            }
            uStack_80 = 0x4fa86b;
            pcVar5 = (char *)strUsingArgs((char *)local_5c);
            local_8._0_1_ = 0x10;
            pcVar2 = pcVar5;
            if (0xf < *(uint *)(pcVar5 + 0x14)) {
              pcVar2 = *(char **)pcVar5;
            }
            std::basic_string<>::append((basic_string<> *)&local_44,pcVar2,*(uint *)(pcVar5 + 0x10))
            ;
            local_8._0_1_ = 0;
            if (0xf < local_48) {
              pnVar8 = (nothrow_t *)(local_48 + 1);
              pvVar6 = local_5c[0];
              if ((nothrow_t *)0xfff < pnVar8) {
                pvVar6 = *(void **)((int)local_5c[0] + -4);
                pnVar8 = (nothrow_t *)(local_48 + 0x24);
                if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar6,pnVar8);
            }
            uStack_80 = 0x4fa8d6;
            pcVar5 = (char *)strUsingArgs((char *)local_5c);
            local_8 = CONCAT31(local_8._1_3_,0x11);
            pcVar2 = pcVar5;
            if (0xf < *(uint *)(pcVar5 + 0x14)) {
              pcVar2 = *(char **)pcVar5;
            }
            std::basic_string<>::append((basic_string<> *)&local_44,pcVar2,*(uint *)(pcVar5 + 0x10))
            ;
            if (0xf < local_48) {
              pnVar8 = (nothrow_t *)(local_48 + 1);
              pvVar6 = local_5c[0];
              if ((nothrow_t *)0xfff < pnVar8) {
                pvVar6 = *(void **)((int)local_5c[0] + -4);
                pnVar8 = (nothrow_t *)(local_48 + 0x24);
                if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar6,pnVar8);
            }
          }
        }
      }
      else {
        Singleton<>::getInstance();
        bVar1 = SaveHandler::saveExists(this_00,*(int *)(g_gameLogic + 0x74));
        if (!bVar1) goto LAB_004fa738;
        iVar10 = *(int *)(g_gameLogic + 0x74);
        this = Singleton<>::getInstance();
        pSVar4 = SaveHandler::metadataForSave(this,iVar10);
        if (*(int *)(pSVar4 + 0x100) < 10) {
          std::basic_string<>::append
                    ((basic_string<> *)&local_44,
                     "`$Note: This update changes the balance of a lot of engineering components. Your ships from old save games may handle differently than you expect.\n\n"
                     ,0x94);
        }
        uStack_80 = 0x4fa1b2;
        pbVar9 = (basic_string<> *)strUsingArgs((char *)local_2c);
        local_8._0_1_ = 1;
        std::basic_string<>::append((basic_string<> *)&local_44,pbVar9);
        local_8._0_1_ = 0;
        if (0xf < local_18) {
          pnVar8 = (nothrow_t *)(local_18 + 1);
          pvVar6 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar8) {
            pvVar6 = *(void **)((int)local_2c[0] + -4);
            pnVar8 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar6,pnVar8);
        }
        uStack_80 = 0x4fa216;
        pbVar9 = (basic_string<> *)strUsingArgs((char *)local_2c);
        local_8._0_1_ = 2;
        std::basic_string<>::append((basic_string<> *)&local_44,pbVar9);
        local_8._0_1_ = 0;
        if (0xf < local_18) {
          pnVar8 = (nothrow_t *)(local_18 + 1);
          pvVar6 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar8) {
            pvVar6 = *(void **)((int)local_2c[0] + -4);
            pnVar8 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar6,pnVar8);
        }
        uStack_80 = 0x4fa27a;
        pbVar9 = (basic_string<> *)strUsingArgs((char *)local_2c);
        local_8._0_1_ = 3;
        std::basic_string<>::append((basic_string<> *)&local_44,pbVar9);
        local_8._0_1_ = 0;
        if (0xf < local_18) {
          pnVar8 = (nothrow_t *)(local_18 + 1);
          pvVar6 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar8) {
            pvVar6 = *(void **)((int)local_2c[0] + -4);
            pnVar8 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar6,pnVar8);
        }
        std::basic_string<>::basic_string<>(abStack_88,(basic_string<> *)(pSVar4 + 100));
        GameData::getShipClassWithIdentifier();
        uStack_80 = 0x4fa2ee;
        pbVar9 = (basic_string<> *)strUsingArgs((char *)local_2c);
        local_8._0_1_ = 4;
        std::basic_string<>::append((basic_string<> *)&local_44,pbVar9);
        local_8._0_1_ = 0;
        if (0xf < local_18) {
          pnVar8 = (nothrow_t *)(local_18 + 1);
          pvVar6 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar8) {
            pvVar6 = *(void **)((int)local_2c[0] + -4);
            pnVar8 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar6,pnVar8);
        }
        uStack_80 = 0x4fa35a;
        pbVar9 = (basic_string<> *)strUsingArgs((char *)local_2c);
        local_8._0_1_ = 5;
        std::basic_string<>::append((basic_string<> *)&local_44,pbVar9);
        local_8._0_1_ = 0;
        if (0xf < local_18) {
          pnVar8 = (nothrow_t *)(local_18 + 1);
          pvVar6 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar8) {
            pvVar6 = *(void **)((int)local_2c[0] + -4);
            pnVar8 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar6,pnVar8);
        }
        uStack_80 = 0x4fa3c7;
        pbVar9 = (basic_string<> *)strUsingArgs((char *)local_2c);
        local_8._0_1_ = 6;
        std::basic_string<>::append((basic_string<> *)&local_44,pbVar9);
        local_8._0_1_ = 0;
        if (0xf < local_18) {
          pnVar8 = (nothrow_t *)(local_18 + 1);
          pvVar6 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar8) {
            pvVar6 = *(void **)((int)local_2c[0] + -4);
            pnVar8 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar6,pnVar8);
        }
        uStack_80 = 0x4fa43c;
        pbVar9 = (basic_string<> *)strUsingArgs((char *)local_2c);
        local_8._0_1_ = 7;
        std::basic_string<>::append((basic_string<> *)&local_44,pbVar9);
        local_8._0_1_ = 0;
        if (0xf < local_18) {
          pnVar8 = (nothrow_t *)(local_18 + 1);
          pvVar6 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar8) {
            pvVar6 = *(void **)((int)local_2c[0] + -4);
            pnVar8 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar6,pnVar8);
        }
        uStack_80 = 0x4fa4b1;
        pbVar9 = (basic_string<> *)strUsingArgs((char *)local_2c);
        local_8._0_1_ = 8;
        std::basic_string<>::append((basic_string<> *)&local_44,pbVar9);
        local_8._0_1_ = 0;
        if (0xf < local_18) {
          pnVar8 = (nothrow_t *)(local_18 + 1);
          pvVar6 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar8) {
            pvVar6 = *(void **)((int)local_2c[0] + -4);
            pnVar8 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar6,pnVar8);
        }
        uStack_80 = 0x4fa512;
        pbVar9 = (basic_string<> *)strUsingArgs((char *)local_2c);
        local_8._0_1_ = 9;
        std::basic_string<>::append((basic_string<> *)&local_44,pbVar9);
        local_8._0_1_ = 0;
        if (0xf < local_18) {
          pnVar8 = (nothrow_t *)(local_18 + 1);
          pvVar6 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar8) {
            pvVar6 = *(void **)((int)local_2c[0] + -4);
            pnVar8 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar6,pnVar8);
        }
        std::basic_string<>::basic_string<>(abStack_88,(basic_string<> *)(pSVar4 + 0xc4));
        GameData::getSpaceStation();
        GameData::getSectorWithID(g_gameData,*(int *)(pSVar4 + 0x104));
        uStack_80 = 0x4fa5a2;
        pbVar9 = (basic_string<> *)strUsingArgs((char *)local_2c);
        local_8._0_1_ = 10;
        std::basic_string<>::append((basic_string<> *)&local_44,pbVar9);
        local_8._0_1_ = 0;
        if (0xf < local_18) {
          pnVar8 = (nothrow_t *)(local_18 + 1);
          pvVar6 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar8) {
            pvVar6 = *(void **)((int)local_2c[0] + -4);
            pnVar8 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar6,pnVar8);
        }
        uStack_80 = 0x4fa609;
        pbVar9 = (basic_string<> *)strUsingArgs((char *)local_2c);
        local_8._0_1_ = 0xb;
        std::basic_string<>::append((basic_string<> *)&local_44,pbVar9);
        local_8._0_1_ = 0;
        if (0xf < local_18) {
          pnVar8 = (nothrow_t *)(local_18 + 1);
          pvVar6 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar8) {
            pvVar6 = *(void **)((int)local_2c[0] + -4);
            pnVar8 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar6,pnVar8);
        }
        uStack_80 = 0x4fa664;
        pbVar9 = (basic_string<> *)strUsingArgs((char *)local_2c);
        local_8._0_1_ = 0xc;
        std::basic_string<>::append((basic_string<> *)&local_44,pbVar9);
        local_8._0_1_ = 0;
        if (0xf < local_18) {
          pnVar8 = (nothrow_t *)(local_18 + 1);
          pvVar6 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar8) {
            pvVar6 = *(void **)((int)local_2c[0] + -4);
            pnVar8 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar6,pnVar8);
        }
        uStack_80 = 0x4fa6cb;
        pbVar9 = (basic_string<> *)strUsingArgs((char *)local_2c);
        local_8 = CONCAT31(local_8._1_3_,0xd);
        std::basic_string<>::append((basic_string<> *)&local_44,pbVar9);
        if (0xf < local_18) {
          pnVar8 = (nothrow_t *)(local_18 + 1);
          pvVar6 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar8) {
            pvVar6 = *(void **)((int)local_2c[0] + -4);
            pnVar8 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar6,pnVar8);
        }
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(void **)param_1 = local_44;
      *(undefined4 *)(param_1 + 4) = uStack_40;
      *(undefined4 *)(param_1 + 8) = uStack_3c;
      *(undefined4 *)(param_1 + 0xc) = uStack_38;
      *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_30,local_34);
      goto LAB_004fa987;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (Ship)0x0;
  std::basic_string<>::assign((basic_string<> *)param_1,"",0);
  if (0xf < uStack_30) {
    pnVar8 = (nothrow_t *)(uStack_30 + 1);
    pvVar6 = local_44;
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar6 = *(void **)((int)local_44 + -4);
      pnVar8 = (nothrow_t *)(uStack_30 + 0x24);
      if (0x1f < (uint)((int)local_44 + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar6,pnVar8);
  }
LAB_004fa987:
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getPowerRoomDetail(class Ship *,int)

Ship * __cdecl ShipTextData::getPowerRoomDetail(Ship *param_1,int param_2)

{
  PowerManager *in_ECX;
  PowerManager *extraout_ECX;
  
  if (Singleton<>::instance == (PowerManager *)0x0) {
    Singleton<>::instance = operator_new(4);
    *(undefined4 *)Singleton<>::instance = 0xffffffff;
    in_ECX = extraout_ECX;
  }
  PowerManager::getDetailInformation(in_ECX);
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getMultiplayerChat(class Ship *,int)

Ship * __cdecl ShipTextData::getMultiplayerChat(Ship *param_1,int param_2)

{
  NetworkClient *pNVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c1ba9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (Ship)0x0;
  local_8 = 0;
  uVar5 = 0;
  iVar4 = 0;
  while( true ) {
    pNVar1 = Singleton<>::instance;
    if (Singleton<>::instance == (NetworkClient *)0x0) {
      pNVar1 = operator_new(0x38);
      Singleton<>::instance = pNVar1;
      *(undefined4 *)(pNVar1 + 0x10) = 0;
      *(undefined4 *)(pNVar1 + 0x14) = 0xf;
      *pNVar1 = (NetworkClient)0x0;
      *(undefined4 *)(pNVar1 + 0x18) = 0xffffffff;
      pNVar1[0x1c] = (NetworkClient)0x0;
      *(undefined4 *)(pNVar1 + 0x20) = 0;
      *(undefined4 *)(pNVar1 + 0x24) = 0;
      *(undefined4 *)(pNVar1 + 0x28) = 0;
      *(undefined4 *)(pNVar1 + 0x2c) = 0;
      *(undefined4 *)(pNVar1 + 0x30) = 0;
      *(undefined4 *)(pNVar1 + 0x34) = 0;
    }
    if ((uint)((*(int *)(pNVar1 + 0x28) - *(int *)(pNVar1 + 0x24)) / 0x18) <= uVar5) break;
    if (0 < (int)uVar5) {
      std::basic_string<>::push_back((basic_string<> *)param_1,'\n');
      pNVar1 = Singleton<>::instance;
    }
    if (pNVar1 == (NetworkClient *)0x0) {
      pNVar1 = operator_new(0x38);
      Singleton<>::instance = pNVar1;
      *(undefined4 *)(pNVar1 + 0x10) = 0;
      *(undefined4 *)(pNVar1 + 0x14) = 0xf;
      *pNVar1 = (NetworkClient)0x0;
      *(undefined4 *)(pNVar1 + 0x18) = 0xffffffff;
      pNVar1[0x1c] = (NetworkClient)0x0;
      *(undefined4 *)(pNVar1 + 0x20) = 0;
      *(undefined4 *)(pNVar1 + 0x24) = 0;
      *(undefined4 *)(pNVar1 + 0x28) = 0;
      *(undefined4 *)(pNVar1 + 0x2c) = 0;
      *(undefined4 *)(pNVar1 + 0x30) = 0;
      *(undefined4 *)(pNVar1 + 0x34) = 0;
    }
    pcVar2 = (char *)(*(int *)(pNVar1 + 0x24) + iVar4);
    pcVar3 = pcVar2;
    if (0xf < *(uint *)(pcVar2 + 0x14)) {
      pcVar3 = *(char **)pcVar2;
    }
    std::basic_string<>::append((basic_string<> *)param_1,pcVar3,*(uint *)(pcVar2 + 0x10));
    uVar5 = uVar5 + 1;
    iVar4 = iVar4 + 0x18;
  }
  ExceptionList = local_10;
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getWaypointETA(class Ship *,int)

void __cdecl ShipTextData::getWaypointETA(Ship *param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  float fVar3;
  basic_string<> *pbVar4;
  char *pcVar5;
  void *pvVar6;
  char *pcVar7;
  int iVar8;
  nothrow_t *pnVar9;
  float local_5c;
  float local_58;
  Ship *local_54;
  float local_50;
  Ship *local_4c;
  undefined1 *local_48;
  void *local_44 [5];
  uint local_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c1c1d;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_4c = param_1;
  local_54 = param_1;
  local_14 = uVar2;
  if ((param_2 != 0) && (*(int *)(param_2 + 0xd4) == 1)) {
    if (*(int *)(param_2 + 0x1c8) - *(int *)(param_2 + 0x1c4) >> 5 == 0) {
      local_48 = &DAT_bf800000;
    }
    else {
      local_50 = (float)*(double *)(param_2 + 0x28);
      local_4c = (Ship *)(float)*(double *)(param_2 + 0x30);
      local_8 = 0;
      local_4c = (Ship *)cocos2d::Vec2::getDistanceSq
                                   ((Vec2 *)(*(int *)(param_2 + 0x1c4) + 8),(Vec2 *)&local_50);
      fVar3 = (float)(0x5f3759df - ((uint)local_4c >> 1));
      local_48 = (undefined1 *)
                 ((1.5 - (float)local_4c * 0.5 * fVar3 * fVar3) * fVar3 * (float)local_4c);
    }
    fVar3 = 0.0;
    if (0.0 < (float)local_48) {
      local_1c = 0;
      uStack_18 = 0xf;
      local_2c = local_2c & 0xffffff00;
      local_8._0_1_ = 1;
      local_8._1_3_ = 0;
      Ship::getSpeed((Ship *)param_2);
      local_48 = (undefined1 *)((float)local_48 / fVar3);
      Ship::getSpeed((Ship *)param_2);
      if (fVar3 == 0.0) {
        std::basic_string<>::assign((basic_string<> *)&local_2c,"`7WP ETA: `8n/a",0xf);
      }
      else if (2.0 <= (float)local_48) {
        if (120.0 <= (float)local_48) {
          pbVar4 = (basic_string<> *)
                   strUsingArgs((char *)local_44,"`7WP ETA: ~%dm %.0fs",
                                (int)((float)local_48 / 60.0),
                                (double)((float)local_48 -
                                        (float)((int)((float)local_48 / 60.0) * 0x3c)),uVar2);
        }
        else {
          pbVar4 = (basic_string<> *)strUsingArgs((char *)local_44);
        }
        std::basic_string<>::operator=((basic_string<> *)&local_2c,pbVar4);
        if (0xf < local_30) {
          pnVar9 = (nothrow_t *)(local_30 + 1);
          pvVar6 = local_44[0];
          if ((nothrow_t *)0xfff < pnVar9) {
            pvVar6 = *(void **)((int)local_44[0] + -4);
            pnVar9 = (nothrow_t *)(local_30 + 0x24);
            if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar6))) goto LAB_004fad60;
          }
          operator_delete(pvVar6,pnVar9);
        }
      }
      else {
        std::basic_string<>::assign((basic_string<> *)&local_2c,"`7WP ETA: <2s",0xd);
      }
      if (1 < (uint)(*(int *)(param_2 + 0x1c8) - *(int *)(param_2 + 0x1c4) >> 5)) {
        std::basic_string<>::append((basic_string<> *)&local_2c,"\n",1);
        iVar8 = *(int *)(param_2 + 0x1c4);
        local_48 = (undefined1 *)0x0;
        if (*(int *)(param_2 + 0x1c8) - iVar8 >> 5 != 0) {
          uVar2 = 0;
          do {
            if (uVar2 == 0) {
              local_5c = (float)*(double *)(param_2 + 0x28);
              local_58 = (float)*(double *)(param_2 + 0x30);
              local_8._0_1_ = 2;
              fVar3 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_5c,(Vec2 *)(iVar8 + 8));
              local_8._0_1_ = 1;
            }
            else {
              fVar3 = cocos2d::Vec2::getDistanceSq
                                ((Vec2 *)(uVar2 * 0x20 + iVar8 + -0x18),
                                 (Vec2 *)(iVar8 + 8 + uVar2 * 0x20));
            }
            uVar2 = uVar2 + 1;
            local_4c = (Ship *)(0x5f3759df - ((uint)fVar3 >> 1));
            iVar8 = *(int *)(param_2 + 0x1c4);
            local_48 = (undefined1 *)
                       ((1.5 - fVar3 * 0.5 * (float)local_4c * (float)local_4c) * (float)local_4c *
                        fVar3 + (float)local_48);
            param_1 = local_54;
          } while (uVar2 < (uint)(*(int *)(param_2 + 0x1c8) - iVar8 >> 5));
        }
        local_5c = 0.0;
        local_58 = 0.0;
        local_8._0_1_ = 3;
        local_54 = (Ship *)cocos2d::Vec2::getDistance((Vec2 *)(param_2 + 0x118),(Vec2 *)&local_5c);
        local_48 = (undefined1 *)((float)local_48 / (float)local_54);
        local_5c = 0.0;
        local_58 = 0.0;
        local_8._0_1_ = 4;
        local_54 = (Ship *)cocos2d::Vec2::getDistance((Vec2 *)(param_2 + 0x118),(Vec2 *)&local_5c);
        local_8._0_1_ = 1;
        uVar1 = (undefined1)local_8;
        local_8._0_1_ = 1;
        if ((float)local_54 == 0.0) {
          std::basic_string<>::assign((basic_string<> *)&local_2c,"`7Dest ETA: `8n/a",0x11);
        }
        else if (2.0 <= (float)local_48) {
          if (120.0 <= (float)local_48) {
            fVar3 = (float)local_48 - (float)((int)(float)(int)((float)local_48 / 60.0) * 0x3c);
            if (0.0 <= fVar3) {
              if (60.0 <= fVar3) {
                fVar3 = 59.0;
              }
            }
            else {
              fVar3 = 0.0;
            }
            local_8._0_1_ = uVar1;
            pcVar5 = (char *)strUsingArgs((char *)local_44,"`7Dest ETA: ~%.0fm %.0fs",
                                          (double)(int)((float)local_48 / 60.0),(double)fVar3);
            local_8._0_1_ = 6;
            pcVar7 = pcVar5;
            if (0xf < *(uint *)(pcVar5 + 0x14)) {
              pcVar7 = *(char **)pcVar5;
            }
            std::basic_string<>::append((basic_string<> *)&local_2c,pcVar7,*(uint *)(pcVar5 + 0x10))
            ;
            if (0xf < local_30) {
              pnVar9 = (nothrow_t *)(local_30 + 1);
              if ((nothrow_t *)0xfff < pnVar9) {
                uVar2 = (int)local_44[0] + (-4 - (int)*(void **)((int)local_44[0] + -4));
                local_44[0] = *(void **)((int)local_44[0] + -4);
                goto joined_r0x004fb0ae;
              }
              goto LAB_004fb0b4;
            }
          }
          else {
            pcVar5 = (char *)strUsingArgs((char *)local_44);
            local_8._0_1_ = 5;
            pcVar7 = pcVar5;
            if (0xf < *(uint *)(pcVar5 + 0x14)) {
              pcVar7 = *(char **)pcVar5;
            }
            std::basic_string<>::append((basic_string<> *)&local_2c,pcVar7,*(uint *)(pcVar5 + 0x10))
            ;
            if (0xf < local_30) {
              pnVar9 = (nothrow_t *)(local_30 + 1);
              if ((nothrow_t *)0xfff < pnVar9) {
                uVar2 = (int)local_44[0] + (-4 - (int)*(void **)((int)local_44[0] + -4));
                local_44[0] = *(void **)((int)local_44[0] + -4);
joined_r0x004fb0ae:
                pnVar9 = (nothrow_t *)(local_30 + 0x24);
                if (0x1f < uVar2) {
LAB_004fad60:
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
LAB_004fb0b4:
              operator_delete(local_44[0],pnVar9);
            }
          }
        }
        else {
          std::basic_string<>::append((basic_string<> *)&local_2c,"`7Dest ETA: <2s",0xf);
        }
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(uint *)param_1 = local_2c;
      *(undefined4 *)(param_1 + 4) = uStack_28;
      *(undefined4 *)(param_1 + 8) = uStack_24;
      *(undefined4 *)(param_1 + 0xc) = uStack_20;
      *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_18,local_1c);
      goto LAB_004fb0fe;
    }
  }
  local_8._1_3_ = 0xffffff;
  local_8._0_1_ = 0xff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (Ship)0x0;
  std::basic_string<>::assign((basic_string<> *)param_1,"",0);
LAB_004fb0fe:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getNavCurrentState(class Ship *,int)

void __cdecl ShipTextData::getNavCurrentState(Ship *param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  basic_string<> *pbVar5;
  Vec2 *pVVar6;
  void *pvVar7;
  nothrow_t *pnVar8;
  float fVar9;
  float local_38;
  float local_34;
  float local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  uint local_8;
  
  puStack_c = &DAT_005c1ce6;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (Ship)0x0;
  local_8 = 0;
  std::basic_string<>::assign((basic_string<> *)&stack0xffffff90,"",0);
  bVar2 = ShipData::checkIsInFreeSpace(param_2,0);
  if (!bVar2) goto LAB_004fb72d;
  pcVar3 = (char *)strUsingArgs((char *)local_2c);
  local_8 = 1;
  pcVar4 = pcVar3;
  if (0xf < *(uint *)(pcVar3 + 0x14)) {
    pcVar4 = *(char **)pcVar3;
  }
  std::basic_string<>::append((basic_string<> *)param_1,pcVar4,*(uint *)(pcVar3 + 0x10));
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pnVar8 = (nothrow_t *)(local_18 + 1);
    pvVar7 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar7 = *(void **)((int)local_2c[0] + -4);
      pnVar8 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar8);
  }
  local_38 = 0.0;
  local_34 = 0.0;
  local_8 = 2;
  local_30 = cocos2d::Vec2::getDistance((Vec2 *)(param_2 + 0x118),(Vec2 *)&local_38);
  local_8 = local_8 & 0xffffff00;
  pcVar3 = (char *)strUsingArgs((char *)local_2c);
  local_8 = 3;
  pcVar4 = pcVar3;
  if (0xf < *(uint *)(pcVar3 + 0x14)) {
    pcVar4 = *(char **)pcVar3;
  }
  std::basic_string<>::append((basic_string<> *)param_1,pcVar4,*(uint *)(pcVar3 + 0x10));
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pnVar8 = (nothrow_t *)(local_18 + 1);
    pvVar7 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar7 = *(void **)((int)local_2c[0] + -4);
      pnVar8 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar8);
  }
  std::basic_string<>::assign((basic_string<> *)&stack0xffffff90,"",0);
  bVar2 = ShipData::checkHasSelectedDestination(param_2,0);
  if (bVar2) {
    ShipNumericalData::getCurrentDistanceToNavObject((Ship *)param_2,0);
    pcVar3 = (char *)strUsingArgs((char *)local_2c);
    local_8 = 4;
    pcVar4 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar4 = *(char **)pcVar3;
    }
    std::basic_string<>::append((basic_string<> *)param_1,pcVar4,*(uint *)(pcVar3 + 0x10));
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar8 = (nothrow_t *)(local_18 + 1);
      pvVar7 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar8) {
        pvVar7 = *(void **)((int)local_2c[0] + -4);
        pnVar8 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar7,pnVar8);
    }
    ShipNumericalData::getCurrentBearingToNavObject((Ship *)param_2,0);
    pcVar3 = (char *)strUsingArgs((char *)local_2c);
    local_8 = 5;
    pcVar4 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar4 = *(char **)pcVar3;
    }
    std::basic_string<>::append((basic_string<> *)param_1,pcVar4,*(uint *)(pcVar3 + 0x10));
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar8 = (nothrow_t *)(local_18 + 1);
      pvVar7 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar8) {
        pvVar7 = *(void **)((int)local_2c[0] + -4);
        pnVar8 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar7,pnVar8);
    }
    if (*(int *)(param_2 + 0x1a4) != 0) {
      pcVar4 = (char *)strUsingArgs((char *)local_2c);
      local_8 = 6;
      uVar1 = *(uint *)(pcVar4 + 0x14);
      goto joined_r0x004fb6ec;
    }
    if (*(int *)(param_2 + 0x19c) != 0) {
      pcVar4 = (char *)strUsingArgs((char *)local_2c);
      local_8 = 7;
      uVar1 = *(uint *)(pcVar4 + 0x14);
      goto joined_r0x004fb6ec;
    }
    if ((*(float *)(param_2 + 0x1b8) == -9999.0) && (*(float *)(param_2 + 0x1bc) == -9999.0))
    goto LAB_004fb72d;
    pbVar5 = (basic_string<> *)strUsingArgs((char *)local_2c);
    local_8 = 8;
    std::basic_string<>::append((basic_string<> *)param_1,pbVar5);
  }
  else {
    if (*(SensorData **)(param_2 + 0x194) == (SensorData *)0x0) {
      std::basic_string<>::append((basic_string<> *)param_1,"`8Sel. Dst.: n/a\n",0x11);
      std::basic_string<>::append((basic_string<> *)param_1,"`8Sel. Brg.: n/a\n",0x11);
      std::basic_string<>::append((basic_string<> *)param_1,"`8Sel. Loc.: n/a",0x10);
      goto LAB_004fb72d;
    }
    pVVar6 = (Vec2 *)SensorData::getPresumedLocation(*(SensorData **)(param_2 + 0x194));
    local_38 = (float)*(double *)(param_2 + 0x28);
    local_34 = (float)*(double *)(param_2 + 0x30);
    local_8._0_1_ = 10;
    local_8._1_3_ = 0;
    fVar9 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_38,pVVar6);
    local_30 = (float)(0x5f3759df - ((uint)fVar9 >> 1));
    pcVar3 = (char *)strUsingArgs((char *)local_2c);
    local_8._0_1_ = 0xb;
    pcVar4 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar4 = *(char **)pcVar3;
    }
    std::basic_string<>::append((basic_string<> *)param_1,pcVar4,*(uint *)(pcVar3 + 0x10));
    local_8 = CONCAT31(local_8._1_3_,10);
    if (0xf < local_18) {
      pnVar8 = (nothrow_t *)(local_18 + 1);
      pvVar7 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar8) {
        pvVar7 = *(void **)((int)local_2c[0] + -4);
        pnVar8 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) goto LAB_004fb459;
      }
      operator_delete(pvVar7,pnVar8);
    }
    local_8 = local_8 & 0xffffff00;
    SensorData::getPresumedLocation(*(SensorData **)(param_2 + 0x194));
    Ship::trueAngleToPosition((Ship *)param_2);
    pcVar3 = (char *)strUsingArgs((char *)local_2c);
    local_8 = 0xc;
    pcVar4 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar4 = *(char **)pcVar3;
    }
    std::basic_string<>::append((basic_string<> *)param_1,pcVar4,*(uint *)(pcVar3 + 0x10));
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar8 = (nothrow_t *)(local_18 + 1);
      pvVar7 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar8) {
        pvVar7 = *(void **)((int)local_2c[0] + -4);
        pnVar8 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) goto LAB_004fb459;
      }
      operator_delete(pvVar7,pnVar8);
    }
    SensorData::getPresumedLocation(*(SensorData **)(param_2 + 0x194));
    local_8 = 0xd;
    SensorData::getPresumedLocation(*(SensorData **)(param_2 + 0x194));
    local_8._0_1_ = 0xe;
    pcVar4 = (char *)strUsingArgs((char *)local_2c);
    local_8 = CONCAT31(local_8._1_3_,0xf);
    uVar1 = *(uint *)(pcVar4 + 0x14);
joined_r0x004fb6ec:
    pcVar3 = pcVar4;
    if (0xf < uVar1) {
      pcVar3 = *(char **)pcVar4;
    }
    std::basic_string<>::append((basic_string<> *)param_1,pcVar3,*(uint *)(pcVar4 + 0x10));
  }
  if (0xf < local_18) {
    pnVar8 = (nothrow_t *)(local_18 + 1);
    pvVar7 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar7 = *(void **)((int)local_2c[0] + -4);
      pnVar8 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
LAB_004fb459:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar8);
  }
LAB_004fb72d:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getLocalServerStr(class Ship *,int)

Ship * __cdecl ShipTextData::getLocalServerStr(Ship *param_1,int param_2)

{
  std::basic_string<>::basic_string<>
            ((basic_string<> *)param_1,(basic_string<> *)(g_gameLogic + 0x164));
  return param_1;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// ShipTextData::getCurrentServerDetails(class Ship *,int)

void __cdecl ShipTextData::getCurrentServerDetails(Ship *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char *pcVar5;
  NetworkClient *pNVar6;
  char *pcVar7;
  char ****ppppcVar8;
  Ship *pSVar9;
  uint uVar10;
  char *pcVar11;
  void *pvVar12;
  int *piVar13;
  nothrow_t *pnVar14;
  int *piVar15;
  basic_string<> *pbVar16;
  uint unaff_EDI;
  basic_string<> abStack_a0 [4];
  undefined4 uStack_9c;
  uint local_6c;
  char ***local_5c [4];
  uint local_4c;
  uint local_48;
  void *local_44 [5];
  uint local_30;
  void *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  uint uStack_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005c1d68;
  local_10 = ExceptionList;
  pcVar5 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_1c = 0;
  uStack_18 = 0xf;
  local_2c = (void *)((uint)local_2c & 0xffffff00);
  local_8 = 0;
  uStack_7 = 0;
  local_14 = pcVar5;
  if ((g_gameLogic[0x71] != (GameLogic)0x0) &&
     (pNVar6 = Singleton<>::getInstance(), *(int *)(pNVar6 + 0x20) != 0)) {
    pbVar16 = (basic_string<> *)(g_gameData + 0x25c);
    bVar3 = std::_Traits_equal<>("",0,pcVar5,unaff_EDI);
    if (!bVar3) {
      std::basic_string<>::basic_string<>(abStack_a0,pbVar16);
      UIText::getTextWithoutMacros();
      local_8 = 1;
      piVar1 = *(int **)(g_gameData + 0x254);
      for (piVar13 = *(int **)(g_gameData + 0x250); piVar13 != piVar1; piVar13 = piVar13 + 1) {
        iVar2 = *piVar13;
        ppppcVar8 = local_5c;
        if (0xf < local_48) {
          ppppcVar8 = (char ****)local_5c[0];
        }
        bVar3 = std::_Traits_equal<>((char *)ppppcVar8,local_4c,pcVar5,unaff_EDI);
        if (bVar3) {
          pcVar7 = (char *)strUsingArgs((char *)local_44);
          local_8 = 2;
          pcVar11 = pcVar7;
          if (0xf < *(uint *)(pcVar7 + 0x14)) {
            pcVar11 = *(char **)pcVar7;
          }
          std::basic_string<>::append((basic_string<> *)&local_2c,pcVar11,*(uint *)(pcVar7 + 0x10));
          local_8 = 1;
          if (0xf < local_30) {
            pnVar14 = (nothrow_t *)(local_30 + 1);
            pvVar12 = local_44[0];
            if ((nothrow_t *)0xfff < pnVar14) {
              pvVar12 = *(void **)((int)local_44[0] + -4);
              pnVar14 = (nothrow_t *)(local_30 + 0x24);
              if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12))) goto LAB_004fbe8c;
            }
            operator_delete(pvVar12,pnVar14);
          }
          std::basic_string<>::basic_string<>(abStack_a0,(basic_string<> *)(iVar2 + 0x30));
          GameData::getShipClassWithIdentifier();
          pcVar7 = (char *)strUsingArgs((char *)local_44);
          local_8 = 3;
          pcVar11 = pcVar7;
          if (0xf < *(uint *)(pcVar7 + 0x14)) {
            pcVar11 = *(char **)pcVar7;
          }
          std::basic_string<>::append((basic_string<> *)&local_2c,pcVar11,*(uint *)(pcVar7 + 0x10));
          local_8 = 1;
          if (0xf < local_30) {
            pnVar14 = (nothrow_t *)(local_30 + 1);
            pvVar12 = local_44[0];
            if ((nothrow_t *)0xfff < pnVar14) {
              pvVar12 = *(void **)((int)local_44[0] + -4);
              pnVar14 = (nothrow_t *)(local_30 + 0x24);
              if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12))) goto LAB_004fbe8c;
            }
            operator_delete(pvVar12,pnVar14);
          }
          pcVar7 = (char *)strUsingArgs((char *)local_44);
          local_8 = 4;
          pcVar11 = pcVar7;
          if (0xf < *(uint *)(pcVar7 + 0x14)) {
            pcVar11 = *(char **)pcVar7;
          }
          std::basic_string<>::append((basic_string<> *)&local_2c,pcVar11,*(uint *)(pcVar7 + 0x10));
          local_8 = 1;
          if (0xf < local_30) {
            pnVar14 = (nothrow_t *)(local_30 + 1);
            pvVar12 = local_44[0];
            if ((nothrow_t *)0xfff < pnVar14) {
              pvVar12 = *(void **)((int)local_44[0] + -4);
              pnVar14 = (nothrow_t *)(local_30 + 0x24);
              if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12))) goto LAB_004fbe8c;
            }
            operator_delete(pvVar12,pnVar14);
          }
          uStack_9c = 0x4fb9ed;
          pcVar7 = (char *)strUsingArgs((char *)local_44);
          local_8 = 5;
          pcVar11 = pcVar7;
          if (0xf < *(uint *)(pcVar7 + 0x14)) {
            pcVar11 = *(char **)pcVar7;
          }
          std::basic_string<>::append((basic_string<> *)&local_2c,pcVar11,*(uint *)(pcVar7 + 0x10));
          local_8 = 1;
          if (0xf < local_30) {
            pnVar14 = (nothrow_t *)(local_30 + 1);
            pvVar12 = local_44[0];
            if ((nothrow_t *)0xfff < pnVar14) {
              pvVar12 = *(void **)((int)local_44[0] + -4);
              pnVar14 = (nothrow_t *)(local_30 + 0x24);
              if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12))) goto LAB_004fbe8c;
            }
            operator_delete(pvVar12,pnVar14);
          }
          pcVar7 = (char *)strUsingArgs((char *)local_44);
          local_8 = 6;
          pcVar11 = pcVar7;
          if (0xf < *(uint *)(pcVar7 + 0x14)) {
            pcVar11 = *(char **)pcVar7;
          }
          std::basic_string<>::append((basic_string<> *)&local_2c,pcVar11,*(uint *)(pcVar7 + 0x10));
          local_8 = 1;
          if (0xf < local_30) {
            pnVar14 = (nothrow_t *)(local_30 + 1);
            pvVar12 = local_44[0];
            if ((nothrow_t *)0xfff < pnVar14) {
              pvVar12 = *(void **)((int)local_44[0] + -4);
              pnVar14 = (nothrow_t *)(local_30 + 0x24);
              if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12))) goto LAB_004fbe8c;
            }
            operator_delete(pvVar12,pnVar14);
          }
          bVar3 = false;
          std::basic_string<>::append((basic_string<> *)&local_2c,"`%Crew : ",9);
          local_6c = 0;
          piVar15 = *(int **)(g_gameData + 0x244);
          uVar10 = (uint)((int)*(int **)(g_gameData + 0x248) + (3 - (int)piVar15)) >> 2;
          if (*(int **)(g_gameData + 0x248) < piVar15) {
            uVar10 = 0;
          }
          if (uVar10 == 0) {
LAB_004fbb6c:
            std::basic_string<>::append((basic_string<> *)&local_2c,"`8[none]",8);
          }
          else {
            do {
              pcVar11 = (char *)*piVar15;
              pcVar7 = (char *)(iVar2 + 0x18);
              if (0xf < *(uint *)(iVar2 + 0x2c)) {
                pcVar7 = *(char **)(iVar2 + 0x18);
              }
              bVar4 = std::_Traits_equal<>(pcVar7,*(uint *)(iVar2 + 0x28),pcVar5,unaff_EDI);
              if (bVar4) {
                if (bVar3) {
                  pcVar7 = ", ";
                }
                else {
                  pcVar7 = "`7";
                }
                std::basic_string<>::append((basic_string<> *)&local_2c,pcVar7,2);
                bVar3 = true;
                pcVar7 = pcVar11;
                if (0xf < *(uint *)(pcVar11 + 0x14)) {
                  pcVar7 = *(char **)pcVar11;
                }
                std::basic_string<>::append
                          ((basic_string<> *)&local_2c,pcVar7,*(uint *)(pcVar11 + 0x10));
              }
              local_6c = local_6c + 1;
              piVar15 = piVar15 + 1;
            } while (local_6c != uVar10);
            if (!bVar3) goto LAB_004fbb6c;
          }
          std::basic_string<>::append((basic_string<> *)&local_2c,"\n",1);
          bVar3 = std::_Traits_equal<>("",0,pcVar5,unaff_EDI);
          if (bVar3) {
            std::basic_string<>::append((basic_string<> *)&local_2c,"`%%Cfg. :`!Stock\n",0x11);
          }
          else {
            pcVar7 = (char *)strUsingArgs((char *)local_44);
            local_8 = 7;
            pcVar11 = pcVar7;
            if (0xf < *(uint *)(pcVar7 + 0x14)) {
              pcVar11 = *(char **)pcVar7;
            }
            std::basic_string<>::append
                      ((basic_string<> *)&local_2c,pcVar11,*(uint *)(pcVar7 + 0x10));
            local_8 = 1;
            if (0xf < local_30) {
              pnVar14 = (nothrow_t *)(local_30 + 1);
              pvVar12 = local_44[0];
              if ((nothrow_t *)0xfff < pnVar14) {
                pvVar12 = *(void **)((int)local_44[0] + -4);
                pnVar14 = (nothrow_t *)(local_30 + 0x24);
                if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12))) goto LAB_004fbe8c;
              }
              operator_delete(pvVar12,pnVar14);
            }
          }
        }
      }
      bVar3 = std::_Traits_equal<>("",0,pcVar5,unaff_EDI);
      if (bVar3) {
        piVar1 = *(int **)(g_gameData + 0x248);
        for (piVar13 = *(int **)(g_gameData + 0x244); piVar13 != piVar1; piVar13 = piVar13 + 1) {
          iVar2 = *piVar13;
          ppppcVar8 = local_5c;
          if (0xf < local_48) {
            ppppcVar8 = (char ****)local_5c[0];
          }
          bVar3 = std::_Traits_equal<>((char *)ppppcVar8,local_4c,pcVar5,unaff_EDI);
          if (bVar3) {
            pcVar7 = (char *)strUsingArgs((char *)local_44);
            local_8 = 8;
            pcVar11 = pcVar7;
            if (0xf < *(uint *)(pcVar7 + 0x14)) {
              pcVar11 = *(char **)pcVar7;
            }
            std::basic_string<>::append
                      ((basic_string<> *)&local_2c,pcVar11,*(uint *)(pcVar7 + 0x10));
            local_8 = 1;
            if (0xf < local_30) {
              pnVar14 = (nothrow_t *)(local_30 + 1);
              pvVar12 = local_44[0];
              if ((nothrow_t *)0xfff < pnVar14) {
                pvVar12 = *(void **)((int)local_44[0] + -4);
                pnVar14 = (nothrow_t *)(local_30 + 0x24);
                if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12))) goto LAB_004fbe8c;
              }
              operator_delete(pvVar12,pnVar14);
            }
            std::basic_string<>::basic_string<>(abStack_a0,(basic_string<> *)(iVar2 + 0x18));
            pSVar9 = GameData::getShipWithRego();
            if (pSVar9 == (Ship *)0x0) {
              std::basic_string<>::append((basic_string<> *)&local_2c,"`%Ship : `8none\n",0x10);
            }
            else {
              pcVar7 = (char *)strUsingArgs((char *)local_44);
              local_8 = 9;
              pcVar11 = pcVar7;
              if (0xf < *(uint *)(pcVar7 + 0x14)) {
                pcVar11 = *(char **)pcVar7;
              }
              std::basic_string<>::append
                        ((basic_string<> *)&local_2c,pcVar11,*(uint *)(pcVar7 + 0x10));
              local_8 = 1;
              if (0xf < local_30) {
                pnVar14 = (nothrow_t *)(local_30 + 1);
                pvVar12 = local_44[0];
                if ((nothrow_t *)0xfff < pnVar14) {
                  pvVar12 = *(void **)((int)local_44[0] + -4);
                  pnVar14 = (nothrow_t *)(local_30 + 0x24);
                  if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12))) goto LAB_004fbe8c;
                }
                operator_delete(pvVar12,pnVar14);
              }
            }
            pcVar7 = (char *)strUsingArgs((char *)local_44);
            local_8 = 10;
            pcVar11 = pcVar7;
            if (0xf < *(uint *)(pcVar7 + 0x14)) {
              pcVar11 = *(char **)pcVar7;
            }
            std::basic_string<>::append
                      ((basic_string<> *)&local_2c,pcVar11,*(uint *)(pcVar7 + 0x10));
            local_8 = 1;
            if (0xf < local_30) {
              pnVar14 = (nothrow_t *)(local_30 + 1);
              pvVar12 = local_44[0];
              if ((nothrow_t *)0xfff < pnVar14) {
                pvVar12 = *(void **)((int)local_44[0] + -4);
                pnVar14 = (nothrow_t *)(local_30 + 0x24);
                if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12))) goto LAB_004fbe8c;
              }
              operator_delete(pvVar12,pnVar14);
            }
          }
        }
      }
      pvVar12 = local_2c;
      local_2c = (void *)((uint)local_2c & 0xffffff00);
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(void **)param_1 = pvVar12;
      *(undefined4 *)(param_1 + 4) = uStack_28;
      *(undefined4 *)(param_1 + 8) = uStack_24;
      *(undefined4 *)(param_1 + 0xc) = uStack_20;
      *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_18,local_1c);
      local_1c = 0;
      uStack_18 = 0xf;
      if (0xf < local_48) {
        pnVar14 = (nothrow_t *)(local_48 + 1);
        ppppcVar8 = (char ****)local_5c[0];
        if ((nothrow_t *)0xfff < pnVar14) {
          ppppcVar8 = (char ****)local_5c[0][-1];
          pnVar14 = (nothrow_t *)(local_48 + 0x24);
          if ((char *)0x1f < (char *)((int)local_5c[0] + (-4 - (int)ppppcVar8))) {
LAB_004fbe8c:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppcVar8,pnVar14);
      }
      local_4c = 0;
      local_48 = 0xf;
      local_5c[0] = (char ***)((uint)local_5c[0] & 0xffffff00);
      if (0xf < uStack_18) {
        pnVar14 = (nothrow_t *)(uStack_18 + 1);
        pvVar12 = local_2c;
        if ((nothrow_t *)0xfff < pnVar14) {
          pvVar12 = *(void **)((int)local_2c + -4);
          pnVar14 = (nothrow_t *)(uStack_18 + 0x24);
          if (0x1f < (uint)((int)local_2c + (-4 - (int)pvVar12))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar12,pnVar14);
      }
      goto LAB_004fbf0b;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(void **)param_1 = local_2c;
  *(undefined4 *)(param_1 + 4) = uStack_28;
  *(undefined4 *)(param_1 + 8) = uStack_24;
  *(undefined4 *)(param_1 + 0xc) = uStack_20;
  *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_18,local_1c);
LAB_004fbf0b:
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}
