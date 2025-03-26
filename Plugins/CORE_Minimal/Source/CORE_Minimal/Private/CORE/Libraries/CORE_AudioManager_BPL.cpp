// CORE_Minimal Plugin, 2025, BusyBee Games


#include "CORE/Libraries/CORE_AudioManager_BPL.h"
#include "CORE/Managers/CORE_AudioManager.h"
#include "GameplayTagContainer.h"

UCORE_AudioManager* UCORE_AudioManager_BPL::GetAudioManager()
{
	if (UGameInstance* GameInstance = GEngine->GetCurrentPlayWorld()->GetGameInstance())
	{
		return GameInstance->GetSubsystem<UCORE_AudioManager>();
	}
	else
	{
		return nullptr;
	}
}

void UCORE_AudioManager_BPL::RequestAudioEvent(FGameplayTag ID, float VolumeOverride)
{

}

void UCORE_AudioManager_BPL::RequestAudioEventAtLocation(FGameplayTag ID, FVector Location, float VolumeOverride)
{

}
