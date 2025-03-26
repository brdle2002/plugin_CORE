// CORE_Minimal Plugin, 2025, BusyBee Games


#include "CORE/Managers/CORE_PlayerManager.h"
#include "CORE/Data/CORE_Logging.h"
#include "GameplayTagContainer.h"
#include "CORE/Managers/CORE_GameManager.h"
#include "CORE/Managers/CORE_ControlsManager.h"
#include "CORE/Managers/CORE_UIManager.h"


/** HELPER FUNCTIONS **/
UGameInstance* UCORE_PlayerManager::GetGameInstance() const
{
    if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
    {
        return LocalPlayer->GetGameInstance();
    }
    return nullptr;
}

UCORE_GameManager* UCORE_PlayerManager::GetGameManager() const
{
    if (UGameInstance* GameInstance = GetGameInstance())
    {
        return GameInstance->GetSubsystem<UCORE_GameManager>();
    }
    return nullptr;
}

UCORE_ControlsManager* UCORE_PlayerManager::GetControlsManager() const
{
    if (UGameInstance* GameInstance = GetGameInstance())
    {
        return GameInstance->GetSubsystem<UCORE_ControlsManager>();
    }
    return nullptr;
}

UCORE_UIManager* UCORE_PlayerManager::GetUIManager() const
{
    if (UGameInstance* GameInstance = GetGameInstance())
    {
        return GameInstance->GetSubsystem<UCORE_UIManager>();
    }
    return nullptr;
}


/** INITIALIZATION **/
void UCORE_PlayerManager::Initialize(FSubsystemCollectionBase& Collection)
{
	UE_LOG(LogCORE_PlayerManager, Log, TEXT("Initializing..."));	
    
    Super::Initialize(Collection);

    ConnectGameManager();
    ConnectControlsManager();
    ConnectUIManager();
}

void UCORE_PlayerManager::Deinitialize()
{
	UE_LOG(LogCORE_PlayerManager, Log, TEXT("Deinitializing..."));

	Super::Deinitialize();
}

void UCORE_PlayerManager::ConnectGameManager()
{
    if (UCORE_GameManager* GameManager = GetGameManager())
    {
        GameManager->OnGameAttributeTagsUpdated.AddDynamic(this, &UCORE_PlayerManager::OnGameAttributesUpdated);

        UE_LOG(LogCORE_PlayerManager, Log, TEXT("Game Manager Connected"));
    }
    else
    {
        UE_LOG(LogCORE_PlayerManager, Error, TEXT("Game Manager Failed to Connect"));
    }
}

void UCORE_PlayerManager::ConnectControlsManager()
{

}

void UCORE_PlayerManager::ConnectUIManager()
{

}



void UCORE_PlayerManager::OnGameAttributesUpdated(const FGameplayTagContainer& Tags)
{
    UE_LOG(LogCORE_PlayerManager, Log, TEXT("Game Attributes Updated"));
}
