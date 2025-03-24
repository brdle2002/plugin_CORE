// CORE_Minimal Plugin, 2025, BusyBee Games

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/SubsystemBlueprintLibrary.h"
#include "CORE_GameManager_BPL.generated.h"

class UCORE_GameManager;
struct FGameplayTag;

/**
 * A library of functions for blueprints to interface with the Game Manager subsystem.
 */
UCLASS(DisplayName = "Game Manager Blueprint Library")
class CORE_MINIMAL_API UCORE_GameManager_BPL : public USubsystemBlueprintLibrary
{
	GENERATED_BODY()

private:
		static UCORE_GameManager* GetGameManager();

public:
	/* Register a reference with a specific Tag. References will ONLY be stored as UObjects. Can cast to requested class if neccessary. */
	UFUNCTION(BlueprintCallable, Category = "Game Manager|Reference Registry", meta = (DefaultToSelf = "Object"))
		static void RegisterReference(FGameplayTag ID, UObject* Object);

	/* Get a reference by a specific Tag */
	UFUNCTION(BlueprintCallable, Category = "Game Manager|Reference Registry")
		static UObject* GetReference(FGameplayTag ID);

	/* Update the game state with new tags to add and remove. */
	UFUNCTION(BlueprintCallable, Category = "Game Manager|Game Attributes")
		static void UpdateGameAttributes(const FGameplayTagContainer& AddTags, const FGameplayTagContainer& RemoveTags);

};
