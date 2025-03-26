// CORE_Minimal Plugin, 2025, BusyBee Games


#include "CORE/Managers/CORE_AudioManager.h"
#include "CORE/Data/CORE_Logging.h"
#include "GameplayTagContainer.h"



/** INITIALIZATION **/
void UCORE_AudioManager::Initialize(FSubsystemCollectionBase& Collection)
{
	UE_LOG(LogCORE_AudioManager, Log, TEXT("Initializing..."));

	Super::Initialize(Collection);
}

void UCORE_AudioManager::Deinitialize()
{
	UE_LOG(LogCORE_AudioManager, Log, TEXT("Deinitializing..."));

	Super::Deinitialize();
}

void UCORE_AudioManager::SetupGameManagerBindings()
{

}

void UCORE_AudioManager::RequestAudioEvent(FGameplayTag ID, float VolumeOverride)
{

}
