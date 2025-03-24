// CORE_Minimal Plugin, 2025, BusyBee Games

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/SubsystemBlueprintLibrary.h"
#include "CORE/Data/CORE_MiscTypes.h"
#include "CORE_ControlsManager_BPL.generated.h"

class UCORE_ControlsManager;
struct FGameplayTag;

/**
 * A library of functions for blueprints to interface with the Controls Manager subsystem.
 */
UCLASS(DisplayName = "Controls Manager Blueprint Library")
class CORE_MINIMAL_API UCORE_ControlsManager_BPL : public USubsystemBlueprintLibrary
{
	GENERATED_BODY()

private:
		static UCORE_ControlsManager* GetControlsManager();

public:
	/** Request a new Control Profile. If the selected Control Profile is already active, nothing happens.
	*
	*  - Gameplay
	*  - User Interface
	*  - No Show
	*/
	UFUNCTION(BlueprintCallable, Category = "Controls Manager")
		static void RequestControlProfile(EControlProfile ControlProfile = EControlProfile::ControlProfile_NoShow);

	/** Returns the active Control Profile. */
	UFUNCTION(BlueprintPure, Category = "Controls Manager")
		static EControlProfile GetActiveControlProfile();
};
