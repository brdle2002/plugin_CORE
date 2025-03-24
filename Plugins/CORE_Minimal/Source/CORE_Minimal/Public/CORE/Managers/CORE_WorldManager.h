// CORE_Minimal Plugin, 2025, BusyBee Games

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "CORE/Data/CORE_Logging.h"
#include "CORE_WorldManager.generated.h"

/**
 * 
 */
UCLASS()
class CORE_MINIMAL_API UCORE_WorldManager : public UWorldSubsystem
{
	GENERATED_BODY()



/** INITIALIZATION **/
public:
		virtual void Initialize(FSubsystemCollectionBase& Collection) override;
		virtual void Deinitialize() override;
		virtual void OnWorldBeginPlay(UWorld& InWorld) override;

};
