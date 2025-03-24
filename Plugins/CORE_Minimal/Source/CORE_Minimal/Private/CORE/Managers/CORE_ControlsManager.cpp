// CORE_Minimal Plugin, 2025, BusyBee Games


#include "CORE/Managers/CORE_ControlsManager.h"
#include "CORE/Data/CORE_Logging.h"


/** INITIALIZATION **/
void UCORE_ControlsManager::Initialize(FSubsystemCollectionBase& Collection)
{
    UE_LOG(LogCORE_ControlsManager, Log, TEXT("Initializing..."));

    Super::Initialize(Collection);
}

void UCORE_ControlsManager::Deinitialize()
{
	UE_LOG(LogCORE_ControlsManager, Log, TEXT("Deinitializing..."));

	Super::Deinitialize();
}

EControlProfile UCORE_ControlsManager::GetActiveControlProfile()
{
    return EControlProfile();
}

void UCORE_ControlsManager::RequestControlProfile(EControlProfile ControlProfile)
{

}
