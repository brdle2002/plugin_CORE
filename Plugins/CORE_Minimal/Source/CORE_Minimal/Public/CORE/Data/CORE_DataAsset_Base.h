// CORE_Minimal Plugin, 2025, BusyBee Games

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "CORE_DataAsset_Base.generated.h"

/**
 * 
 */
UCLASS()
class CORE_MINIMAL_API UCORE_DataAsset_Base : public UDataAsset
{
	GENERATED_BODY()

		FPrimaryAssetId GetPrimaryAssetId() const;
	
};
