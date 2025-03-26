// CORE_Minimal Plugin, 2025, BusyBee Games


#include "CORE/Libraries/CORE_ControlsManager_BPL.h"
#include "CORE/Managers/CORE_ControlsManager.h"


UCORE_ControlsManager* UCORE_ControlsManager_BPL::GetControlsManager()
{
	if (UGameInstance* GameInstance = GEngine->GetCurrentPlayWorld()->GetGameInstance())
	{
		return GameInstance->GetSubsystem<UCORE_ControlsManager>();
	}
	else
	{
		return nullptr;
	}
}

void UCORE_ControlsManager_BPL::RequestControlProfile(FGameplayTag ControlProfile)
{
	if (GetControlsManager())
	{
		GetControlsManager()->RequestControlProfile(ControlProfile);
	}
}

FGameplayTag UCORE_ControlsManager_BPL::GetActiveControlProfile()
{
	if (GetControlsManager())
	{
		return GetControlsManager()->GetActiveControlProfile();
	}

	return FGameplayTag();
}