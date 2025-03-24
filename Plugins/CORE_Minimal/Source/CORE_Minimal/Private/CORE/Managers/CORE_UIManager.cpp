// CORE_Minimal Plugin, 2025, BusyBee Games


#include "CORE/Managers/CORE_UIManager.h"
#include "CORE/Data/CORE_Logging.h"
#include "GameplayTagContainer.h"



/** INITIALIZATION **/
void UCORE_UIManager::Initialize(FSubsystemCollectionBase& Collection)
{
    UE_LOG(LogCORE_UIManager, Log, TEXT("Initializing..."));

    Super::Initialize(Collection);
}

void UCORE_UIManager::Deinitialize()
{
	UE_LOG(LogCORE_UIManager, Log, TEXT("Deinitializing..."));

	Super::Deinitialize();
}

void UCORE_UIManager::SetupGameManagerBindings()
{

}

void UCORE_UIManager::ConstructUserInterfaceLayout()
{
	UE_LOG(LogCORE_UIManager, Log, TEXT("Constructing the User Interface Layout"));
}



/** UI FUNCTIONS **/
void UCORE_UIManager::RequestPlayerHUD(FGameplayTag ID)
{
	UE_LOG(LogCORE_UIManager, Log, TEXT("Requesting PlayerHUD with ID: %s"), *ID.ToString());
}

void UCORE_UIManager::RequestGameMenu(FGameplayTag ID)
{
	UE_LOG(LogCORE_UIManager, Log, TEXT("Requesting Game Menu with ID: %s"), *ID.ToString());
}

void UCORE_UIManager::RequestSystemMenu(FGameplayTag ID)
{
	UE_LOG(LogCORE_UIManager, Log, TEXT("Requesting System Menu with ID: %s"), *ID.ToString());
}

void UCORE_UIManager::RequestModal(FGameplayTag ID)
{
	UE_LOG(LogCORE_UIManager, Log, TEXT("Requesting Modal with ID: %s"), *ID.ToString());
}

void UCORE_UIManager::RequestDisplayLayer(EDisplayLayer Layer)
{
	UE_LOG(LogCORE_UIManager, Log, TEXT("Requesting Display Layer: %d"), static_cast<int32>(Layer));
}

void UCORE_UIManager::PushWidget(UUserWidget* Widget)
{
	if (Widget)
	{
		// UE_LOG(LogCORE_UIManager, Log, TEXT("Pushing Widget: %s to the UI"), *Widget->GetName());
	}
	else
	{
		UE_LOG(LogCORE_UIManager, Warning, TEXT("Attempted to push a null Widget to the UI!"));
	}
}

void UCORE_UIManager::RequestCloseDisplay()
{
	UE_LOG(LogCORE_UIManager, Log, TEXT("Request Close Display"));
}

void UCORE_UIManager::RequestSimpleAnnouncement(FText Title, FText Message, float Duration, FGameplayTag AudioID)
{
	UE_LOG(LogCORE_UIManager, Log, TEXT("Announcement < %s : %s > <%s>"),
		*Title.ToString(), *Message.ToString(), *AudioID.ToString());
}

void UCORE_UIManager::RequestSimpleNotification(FText Title, FText Message, float Duration, FGameplayTag AudioID)
{
	UE_LOG(LogCORE_UIManager, Log, TEXT("Notification < %s : %s > <%s>"),
		*Title.ToString(), *Message.ToString(), *AudioID.ToString());
}

void UCORE_UIManager::RequestSimpleToast(FText Message, float Duration, FGameplayTag AudioID)
{
	UE_LOG(LogCORE_UIManager, Log, TEXT("Toast < %s > <%s>"),
		*Message.ToString(), *AudioID.ToString());
}

void UCORE_UIManager::RequestSimpleHeadsUpMessage(FText Message, float Duration, FGameplayTag AudioID)
{
	UE_LOG(LogCORE_UIManager, Log, TEXT("Message < %s > <%s>"),
		*Message.ToString(), *AudioID.ToString());
}


