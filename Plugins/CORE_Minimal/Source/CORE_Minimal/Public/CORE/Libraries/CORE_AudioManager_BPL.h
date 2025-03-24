// CORE_Minimal Plugin, 2025, BusyBee Games

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/SubsystemBlueprintLibrary.h"
#include "CORE_AudioManager_BPL.generated.h"

class UCORE_AudioManager;
struct FGameplayTag;

/**
 * A library of functions for blueprints to interface with the Game Manager subsystem.
 */
UCLASS(DisplayName = "Audio Manager Blueprint Library")
class CORE_MINIMAL_API UCORE_AudioManager_BPL : public USubsystemBlueprintLibrary
{
	GENERATED_BODY()

private:
		static UCORE_AudioManager* GetAudioManager();

public:
		
	
};
