// CORE_Minimal Plugin, 2025, BusyBee Games

#pragma once

#include "CoreMinimal.h"
#include "CORE/Data/CORE_DataAsset_Base.h"
#include "CORE_Manager_DA.generated.h"

class UCORE_Manager_Base;

/**
 * 
 */
UCLASS(DisplayName = "Manager Definition")
class CORE_MINIMAL_API UCORE_Manager_DA : public UCORE_DataAsset_Base
{
	GENERATED_BODY()

public:
		FPrimaryAssetId GetPrimaryAssetId() const;

	UPROPERTY(EditAnywhere, Category = "Settings", meta = (DisplayName = "Manager Name"))
		FString ManagerName = TEXT("New Manager");

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings", meta = (DisplayName = "Manager ID"))
		FGameplayTag ManagerID;

	// Private class reference to UCORE_UserInterfaceLayout_Base
	UPROPERTY(EditAnywhere, Category = "Settings", meta = (DisplayName = "Manager Class"))
		TSubclassOf<UCORE_Manager_Base> ManagerClass;

};
