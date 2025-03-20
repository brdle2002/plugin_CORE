// CORE_Minimal Plugin, 2025, BusyBee Games


#include "CORE/Managers/CORE_PlayerManager.h"
#include "CORE/Data/CORE_Logging.h"

void UCORE_PlayerManager::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	UE_LOG(LogCORE_PlayerManager, Log, TEXT("Initializing..."));
}

void UCORE_PlayerManager::Deinitialize()
{
	UE_LOG(LogCORE_PlayerManager, Log, TEXT("Deinitializing..."));

	Super::Deinitialize();
}
