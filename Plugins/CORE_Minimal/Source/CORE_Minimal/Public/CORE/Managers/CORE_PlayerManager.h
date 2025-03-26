// CORE_Minimal Plugin, 2025, BusyBee Games

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "CORE/Data/CORE_MiscTypes.h"
#include "CORE_PlayerManager.generated.h"

class UGameInstance;
class UCORE_GameManager;
class UCORE_ControlsManager;
class UCORE_UIManager;
struct FGameplayTagContainer;

/**
 * 
 */
UCLASS()
class CORE_MINIMAL_API UCORE_PlayerManager : public ULocalPlayerSubsystem
{
	GENERATED_BODY()

/** HELPER FUNCTIONS **/
private:
		UGameInstance* GetGameInstance() const;
		UCORE_GameManager* GetGameManager() const;
		UCORE_ControlsManager* GetControlsManager() const;
		UCORE_UIManager* GetUIManager() const;

/** INITIALIZATION **/
public:
		virtual void Initialize(FSubsystemCollectionBase& Collection) override;
		virtual void Deinitialize() override;

private:
	void ConnectGameManager();
	void ConnectControlsManager();
	void ConnectUIManager();

	UFUNCTION()
	void OnGameAttributesUpdated(const FGameplayTagContainer& Tags);
};