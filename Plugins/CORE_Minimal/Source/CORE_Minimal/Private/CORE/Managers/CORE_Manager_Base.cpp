// CORE_Minimal Plugin, 2025, BusyBee Games


#include "CORE/Managers/CORE_Manager_Base.h"
#include "CORE/Data/CORE_Logging.h"
#include "HAL/PlatformTime.h"
#include "Tickable.h"

void UCORE_Manager_Base::Initialize(FGameplayTag ManagerID, FString ManagerName)
{
    OnInitializedEvent();

    ID = ManagerID;
    Name = ManagerName;

    // Register the tick function with FTSTicker (correct handle type)
    TickDelegateHandle = FTSTicker::GetCoreTicker().AddTicker(
        FTickerDelegate::CreateUObject(this, &UCORE_Manager_Base::Tick));

}

void UCORE_Manager_Base::OnGameAttributesUpdated(const FGameplayTagContainer& UpdatedTags)
{
    UE_LOG(LogCORE_Minimal, Log, TEXT("%s: Game attributes updated! Tags: %s"),
        *GetNameSafe(this),
        *UpdatedTags.ToStringSimple());

    OnGameAttributesUpdatedEvent(UpdatedTags);
}

bool UCORE_Manager_Base::Tick(float DeltaTime)
{
    OnTickEvent();
    //E_LOG(LogTemp, Log, TEXT("Already in Entry Level");
    return false;
}
