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
	void Initialize(FGameplayTag ManagerID, FString ManagerName);

	// Function to handle attribute updates
	UFUNCTION()
		virtual void OnGameAttributesUpdated(const FGameplayTagContainer& UpdatedTags);

	// Blueprint event for attribute updates
	UFUNCTION(BlueprintImplementableEvent, Category = "Game Attributes")
		void OnGameAttributesUpdatedEvent(const FGameplayTagContainer& UpdatedTags);

	// Blueprint event for attribute updates
	UFUNCTION(BlueprintImplementableEvent, Category = "Game Attributes")
		void OnInitializedEvent();

	// Blueprint event for attribute updates
	UFUNCTION(BlueprintImplementableEvent, Category = "Game Attributes")
		void OnTickEvent();

protected:
	UPROPERTY(BlueprintReadOnly, Category = "Game Attributes")
		FGameplayTag ID;

	UPROPERTY(BlueprintReadOnly, Category = "Game Attributes")
		FString Name;

private:
	FTSTicker::FDelegateHandle TickDelegateHandle;
	bool Tick(float DeltaTime);
};
