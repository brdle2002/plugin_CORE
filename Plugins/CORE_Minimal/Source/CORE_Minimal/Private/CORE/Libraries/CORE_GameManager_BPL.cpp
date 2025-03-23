// CORE_Minimal Plugin, 2025, BusyBee Games


#include "CORE/Libraries/CORE_GameManager_BPL.h"
#include "CORE/Managers/CORE_GameManager.h"
#include "GameplayTagContainer.h"

void UCORE_GameManager_BPL::RegisterReference(FGameplayTag ID, UObject* Object)
{
	if (GetGameManager())
	{
		// Call RegisterReferenceByID from the ReferenceManager
		GetGameManager()->RegisterReferenceByID(ID, Object);
		return;
	}
}

UObject* UCORE_GameManager_BPL::GetReference(FGameplayTag ID)
{
	return GetGameManager()->GetReferenceByID(ID);
}

UCORE_GameManager* UCORE_GameManager_BPL::GetGameManager()
{
	if (UGameInstance* GameInstance = GEngine->GetCurrentPlayWorld()->GetGameInstance())
	{
		return GameInstance->GetSubsystem<UCORE_GameManager>();
	}
	else
	{
		return nullptr;
	}
}
