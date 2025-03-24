// CORE_Minimal Plugin, 2025, BusyBee Games


#include "CORE/Libraries/CORE_UIManager_BPL.h"
#include "CORE/Managers/CORE_UIManager.h"
#include "GameplayTagContainer.h"

UCORE_UIManager* UCORE_UIManager_BPL::GetUIManager()
{
	if (UGameInstance* GameInstance = GEngine->GetCurrentPlayWorld()->GetGameInstance())
	{
		return GameInstance->GetSubsystem<UCORE_UIManager>();
	}
	else
	{
		return nullptr;
	}
}

void UCORE_UIManager_BPL::RequestPlayerHUD(FGameplayTag ID)
{

}

void UCORE_UIManager_BPL::RequestGameMenu(FGameplayTag ID)
{

}

void UCORE_UIManager_BPL::RequestSystemMenu(FGameplayTag ID)
{

}

void UCORE_UIManager_BPL::RequestModal(FGameplayTag ID)
{

}

void UCORE_UIManager_BPL::RequestDisplayLayer(EDisplayLayer Layer)
{

}

void UCORE_UIManager_BPL::PushWidget(UUserWidget* Widget)
{

}

void UCORE_UIManager_BPL::RequestCloseDisplay()
{

}

void UCORE_UIManager_BPL::RequestSimpleAnnouncement(FText Title, FText Message, float Duration, FGameplayTag AudioID)
{

}

void UCORE_UIManager_BPL::RequestSimpleNotification(FText Title, FText Message, float Duration, FGameplayTag AudioID)
{

}

void UCORE_UIManager_BPL::RequestSimpleToast(FText Message, float Duration, FGameplayTag AudioID)
{

}

void UCORE_UIManager_BPL::RequestSimpleHeadsUpMessage(FText Message, float Duration, FGameplayTag AudioID)
{

}
