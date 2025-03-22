// CORE_Minimal Plugin, 2025, BusyBee Games

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "CORE_GameManager.generated.h"

class FCORE_PhaseRegistrationData;

// Delegate to notify when GameAttributeTags are updated
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameAttributeTagsUpdatedDelegate, const FGameplayTagContainer&, UpdatedTags);

/**
 * The Game Manager handles many tasks within the game.
 * - Manages a universal Object Registry where objects can register a reference and associate it to an ID as a GameplayTag.
 * - Manages constructing and Initializing all other Managers dynamically.
 */
UCLASS(DisplayName = "Game Manager")
class CORE_MINIMAL_API UCORE_GameManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

/** INITIALIZATION **/
public:
		virtual void Initialize(FSubsystemCollectionBase& Collection) override;
		void ConstructManagers();
		void WorldReady();
		void LoadEntryLevel();
		virtual void Deinitialize() override;



/** GAME PHASE HANDLING **/
private:

		UPROPERTY()
		FTimerHandle TimerHandle_GamePhaseTimer;

		void StartGamePhaseTimer();	
		void GamePhaseTimer();
		bool ShouldStartNextGamePhase();
		void StartNextGamePhase();



/** OBJECT REFERENCE HANDLING **/
public:
		void RegisterReferenceByID(FGameplayTag Tag, UObject* Object);
		UObject* GetReferenceByID(FGameplayTag Tag) const;

private:
		TMap<FGameplayTag, UObject*> ObjectReferenceRegistry;



/** GAME ATTRIBUTE HANDLING **/
public:
	// Update the game state with new tags to add and remove
	UFUNCTION(BlueprintCallable, Category = "Game State")
		void UpdateGameAttributeTags(const FGameplayTagContainer& AddTags, const FGameplayTagContainer& RemoveTags);

	// Delegate for broadcasting changes
	 UPROPERTY(BlueprintAssignable, Category = "Game State")
		FOnGameAttributeTagsUpdatedDelegate OnGameAttributeTagsUpdated;

protected:
		FGameplayTagContainer GameAttributeTags;

};
