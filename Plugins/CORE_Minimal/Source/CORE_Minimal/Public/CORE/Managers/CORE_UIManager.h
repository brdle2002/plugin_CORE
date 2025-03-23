// CORE_Minimal Plugin, 2025, BusyBee Games

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CORE_UIManager.generated.h"

/**
 * 
 */
UCLASS(DisplayName = "UI Manager")
class CORE_MINIMAL_API UCORE_UIManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()



/** INITIALIZATION **/
public:
		virtual void Initialize(FSubsystemCollectionBase& Collection) override;
		virtual void Deinitialize() override;

private:
		void SetupGameManagerBindings();



/** SETUP **/
protected:
		void ConstructUserInterfaceLayout();

};
