// CORE_Minimal Plugin, 2025, BusyBee Games

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CORE_ControlsManager.generated.h"

/**
 * 
 */
UCLASS(DisplayName = "Controls Manager")
class CORE_MINIMAL_API UCORE_ControlsManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()



/** INITIALIZATION **/
public:
		virtual void Initialize(FSubsystemCollectionBase& Collection) override;
		virtual void Deinitialize() override;
		// FGameplayTag 
	
};
