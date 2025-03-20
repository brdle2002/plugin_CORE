// CORE_Minimal Plugin, 2025, BusyBee Games


#include "CORE/Data/CORE_Manager_DA.h"

FPrimaryAssetId UCORE_Manager_DA::GetPrimaryAssetId() const
{
    return FPrimaryAssetId("ManagerDefinition", GetFName());
}