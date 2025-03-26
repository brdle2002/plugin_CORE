// CORE_Minimal Plugin, 2025, BusyBee Games

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CORE_AudioManager.generated.h"

struct FGameplayTag;

/**
 * 
 */
UCLASS(DisplayName = "Audio Manager")
class CORE_MINIMAL_API UCORE_AudioManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

/** INITIALIZATION **/
public:
		virtual void Initialize(FSubsystemCollectionBase& Collection) override;
		virtual void Deinitialize() override;
		void SetupGameManagerBindings();

/** AUDIO EVENT HANDLING **/
public:
	static void RequestAudioEvent(FGameplayTag ID, float VolumeOverride);
};
