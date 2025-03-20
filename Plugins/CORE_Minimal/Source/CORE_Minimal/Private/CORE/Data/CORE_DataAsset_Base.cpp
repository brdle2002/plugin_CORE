// CORE_Minimal Plugin, 2025, BusyBee Games


#include "CORE/Data/CORE_DataAsset_Base.h"

FPrimaryAssetId UCORE_DataAsset_Base::GetPrimaryAssetId() const
{
    return FPrimaryAssetId("COREData", GetFName());
}
