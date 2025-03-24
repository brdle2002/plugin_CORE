// CORE_Minimal Plugin, 2025, BusyBee Games

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "CORE/Data/CORE_Logging.h"
#include "CORE_PlayerManager.generated.h"

/**
 * 
 */
UCLASS()
class CORE_MINIMAL_API UCORE_PlayerManager : public ULocalPlayerSubsystem
{
	GENERATED_BODY()



/** INITIALIZATION **/
public:
		virtual void Initialize(FSubsystemCollectionBase& Collection) override;
		virtual void Deinitialize() override;
	
};
