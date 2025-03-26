// CORE_Minimal Plugin, 2025, BusyBee Games

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "CORE_GameManager.generated.h"

// Delegate to notify when GameAttributeTags are updated
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameAttributeTagsUpdatedDelegate, const FGameplayTagContainer&, UpdatedTags);

/**
 * 
 */
UCLASS(DisplayName = "Game Manager")
class CORE_MINIMAL_API UCORE_GameManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

/** INITIALIZATION **/
public:
		virtual void Initialize(FSubsystemCollectionBase& Collection) override;
		void WorldReady();
		void LoadEntryLevel();
		virtual void Deinitialize() override;

/** OBJECT REFERENCE HANDLING **/
public:
		void RegisterReferenceByID(FGameplayTag Tag, UObject* Object);
		UObject* GetReferenceByID(FGameplayTag Tag) const;

private:
		TMap<FGameplayTag, TWeakObjectPtr<UObject>> ObjectReferences;

/** GAME ATTRIBUTES HANDLING **/
public:
	/** Update the game state with new tags to add and remove */
	UFUNCTION(BlueprintCallable, Category = "Game Manager|Game Attributes")
		void UpdateGameAttributeTags(const FGameplayTagContainer& AddTags, const FGameplayTagContainer& RemoveTags);

	UPROPERTY(BlueprintAssignable, Category = "Game Manager|Game Attributes")
		FOnGameAttributeTagsUpdatedDelegate OnGameAttributeTagsUpdated;

private:
		FGameplayTagContainer GameAttributeTags;
};
