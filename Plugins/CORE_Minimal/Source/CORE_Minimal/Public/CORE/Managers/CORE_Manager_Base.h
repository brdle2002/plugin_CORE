// CORE_Minimal Plugin, 2025, BusyBee Games

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "CORE_Manager_Base.generated.h"

/**
 * The base class for any Manager the Game Manager should construct. Built-in functionality for Game Phases.
 */
UCLASS(Abstract, Blueprintable, BlueprintType)
class CORE_MINIMAL_API UCORE_Manager_Base : public UObject
{
	GENERATED_BODY()

public:
	void Initialize(FGameplayTag ID, FString ManagerName);
	
};
