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
	/** Request an Audio Event which will make the Audio Manage rplay the soundbase as a UI sound.
	  * If the volume override is set to '0', the default volume configured in the event definition will be used.
	  *
	  * - ID must derive from 'Event.Audio'
	  */
	UFUNCTION(BlueprintCallable, Category = "Audio Manager", meta = (Categories = "Event.Audio"))
		static void RequestAudioEvent(FGameplayTag ID, float VolumeOverride = 0.0f);

	/** Request an Audio Event at a specific location which will make the Audio Manager play the soundbase at that location.
	  * If the volume override is set to '0', the default volume configured in the event definition will be used.
	  *
	  * - ID must derive from 'Event.Audio'
	  * - Location is the position in the world where the audio will be played.
	  */
	UFUNCTION(BlueprintCallable, Category = "Audio Manager", meta = (Categories = "Event.Audio"))
		static void RequestAudioEventAtLocation(FGameplayTag ID, FVector Location, float VolumeOverride = 0.0f);

};
