// CORE_Minimal Plugin, 2025, BusyBee Games

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "CORE_ControlsManager.generated.h"


/**
 * 
 */
UCLASS(DisplayName = "Controls Manager")
class CORE_MINIMAL_API UCORE_ControlsManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

/** INITIALIZATION **/
public:
		virtual void Initialize(FSubsystemCollectionBase& Collection) override;
		virtual void Deinitialize() override;

/** CONTROL PROFILE HANDLING **/
public:
	/** Request a new control profile */
		void RequestControlProfile(FGameplayTag RequestedProfile);

	/** Returns the active control profile */
		FGameplayTag GetActiveControlProfile() const { return ControlProfile; }

private:
	/** Stores the currently active control profile */
		FGameplayTag ControlProfile;

		void SetControlProfile_Gameplay();
		void SetControlProfile_UserInterface();
		void SetControlProfile_NoShow();
	
};
