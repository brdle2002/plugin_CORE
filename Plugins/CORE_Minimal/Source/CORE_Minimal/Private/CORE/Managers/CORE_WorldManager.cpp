// CORE_Minimal Plugin, 2025, BusyBee Games


#include "CORE/Managers/CORE_WorldManager.h"
#include "CORE/Managers/CORE_GameManager.h"
#include "CORE/Data/CORE_Logging.h"

void UCORE_WorldManager::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	UE_LOG(LogCORE_WorldManager, Log, TEXT("Initializing..."));
}

void UCORE_WorldManager::Deinitialize()
{
	UE_LOG(LogCORE_WorldManager, Log, TEXT("Deinitializing..."));

	Super::Deinitialize();
}

void UCORE_WorldManager::OnWorldBeginPlay(UWorld& InWorld)
{
	UE_LOG(LogCORE_WorldManager, Log, TEXT("World Ready."));

	UGameInstance* GameInstance = GetWorld()->GetGameInstance();

	if (GameInstance)
	{
		// Access the GameManager subsystem and notify the world is ready
		UCORE_GameManager* GameManager = GameInstance->GetSubsystem<UCORE_GameManager>();

		if (GameManager)
		{
			GameManager->WorldReady();
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("GameManager is null!"));
	}
}
