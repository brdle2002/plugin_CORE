// CORE_Minimal Plugin, 2025, BusyBee Games


#include "CORE/Managers/CORE_UIManager.h"
#include "CORE/Data/CORE_Logging.h"



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

void UCORE_UIManager::ConstructUserInterfaceLayout()
{

}

void UCORE_UIManager::SetupGameManagerBindings()
{

}
