// CORE_Minimal Plugin, 2025, BusyBee Games

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "CORE_GameManager.generated.h"

class FCORE_PhaseRegistrationData;

// Delegate to notify when GameAttributeTags are updated
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameAttributeTagsUpdatedDelegate, const FGameplayTagContainer&, UpdatedTags);
// DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGamePhaseUpdatedDelegate, const FGameplayTag, GamePhase);

/**
 * 
 */
UCLASS(DisplayName = "Game Manager")
class CORE_MINIMAL_API UCORE_GameManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:

		virtual void Initialize(FSubsystemCollectionBase& Collection) override;
		virtual void Deinitialize() override;
		void RegisterReferenceByID(FGameplayTag Tag, UObject* Object);
		UObject* GetReferenceByID(FGameplayTag Tag) const;
		// FGameplayTag GetGamePhase() const { return GamePhase; };

	// Update the game state with new tags to add and remove
	UFUNCTION(BlueprintCallable, Category = "Game State")
		void UpdateGameAttributeTags(const FGameplayTagContainer& AddTags, const FGameplayTagContainer& RemoveTags);

	void WorldReady();

	// Delegate for broadcasting changes
	 UPROPERTY(BlueprintAssignable, Category = "Game State")
		FOnGameAttributeTagsUpdatedDelegate OnGameAttributeTagsUpdated;

	 // Delegate Getters
	 // FOnGamePhaseUpdatedDelegate& OnGamePhaseUpdatedChecked();


protected:

	 // FOnGamePhaseUpdatedDelegate OnGamePhaseUpdated;

	 void StartGamePhaseTimer();
	 bool ShouldStartNextGamePhase();
	 void StartNextGamePhase();
	 void SetGamePhase(const FGameplayTag NewGamePhase);

	 // UPROPERTY()
		 // TMap<FGuid, FCORE_PhaseRegistrationData> PhaseRegistrationData;

private:

		FGameplayTagContainer GameAttributeTags;
		FGameplayTag GamePhase;
		TMap<FGameplayTag, UObject*> ObjectReferences;

		void ConstructManagers();
		void LoadEntryLevel();
		void GamePhaseTimer();

		UPROPERTY()
			FTimerHandle TimerHandle_GamePhaseTimer;

};
