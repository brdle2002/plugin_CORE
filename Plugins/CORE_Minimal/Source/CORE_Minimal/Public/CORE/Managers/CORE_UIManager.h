// CORE_Minimal Plugin, 2025, BusyBee Games

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CORE/Data/CORE_MiscTypes.h"
#include "CORE_UIManager.generated.h"

struct FGameplayTag;

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
		void ConstructUserInterfaceLayout();



/** UI FUNCTIONS **/
public:
        static void RequestPlayerHUD(FGameplayTag ID);
        static void RequestGameMenu(FGameplayTag ID);
        static void RequestSystemMenu(FGameplayTag ID);
        static void RequestModal(FGameplayTag ID);
        static void RequestDisplayLayer(EDisplayLayer Layer);
        static void PushWidget(UUserWidget* Widget);
        static void RequestCloseDisplay();
        static void RequestSimpleAnnouncement(FText Title, FText Message, float Duration, FGameplayTag AudioID);
        static void RequestSimpleNotification(FText Title, FText Message, float Duration, FGameplayTag AudioID);
        static void RequestSimpleToast(FText Message, float Duration, FGameplayTag AudioID);
        static void RequestSimpleHeadsUpMessage(FText Message, float Duration, FGameplayTag AudioID);

};
