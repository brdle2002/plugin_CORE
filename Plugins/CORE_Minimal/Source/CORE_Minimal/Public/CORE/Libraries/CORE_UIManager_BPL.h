// CORE_Minimal Plugin, 2025, BusyBee Games

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/SubsystemBlueprintLibrary.h"
#include "CORE/Data/CORE_MiscTypes.h"
#include "CORE_UIManager_BPL.generated.h"

class UCORE_UIManager;
struct FGameplayTag;

/**
 * A library of functions for blueprints to interface with the UI Manager subsystem.
 */
UCLASS(DisplayName = "UI Manager Blueprint Library")
class CORE_MINIMAL_API UCORE_UIManager_BPL : public USubsystemBlueprintLibrary
{
	GENERATED_BODY()

private:
		static UCORE_UIManager* GetUIManager();

public:
    /** Request a specific PlayerHUD by ID */
    UFUNCTION(BlueprintCallable, Category = "UI Manager", meta = (Categories = "Reference.ID.HUD"))
        static void RequestPlayerHUD(FGameplayTag ID);

    /** Request a specific Game Menu by ID */
    UFUNCTION(BlueprintCallable, Category = "UI Manager", meta = (Categories = "Reference.ID.GameMenu"))
        static void RequestGameMenu(FGameplayTag ID);

    /** Request a specific System Menu by ID */
    UFUNCTION(BlueprintCallable, Category = "UI Manager", meta = (Categories = "Reference.ID.SystemMenu"))
        static void RequestSystemMenu(FGameplayTag ID);

    /** Request a specific Modal by ID */
    UFUNCTION(BlueprintCallable, Category = "UI Manager", meta = (Categories = "Reference.ID.Modal"))
        static void RequestModal(FGameplayTag ID);

    /** Request a specific Display Layer by ID */
    UFUNCTION(BlueprintCallable, Category = "UI Manager")
        static void RequestDisplayLayer(EDisplayLayer Layer);

    /** Push a widget cconstructed from somewhere else into the UI */
    UFUNCTION(BlueprintCallable, Category = "UI Manager")
        static void PushWidget(UUserWidget* Widget);

    /** Request the current display be closed */
    UFUNCTION(BlueprintCallable, Category = "UI Manager")
        static void RequestCloseDisplay();

    /** Request a simple Announcement */
    UFUNCTION(BlueprintCallable, Category = "UI Manager")
        static void RequestSimpleAnnouncement(FText Title, FText Message, float Duration, FGameplayTag AudioID);

    /** Request a simple Notification */
    UFUNCTION(BlueprintCallable, Category = "UI Manager")
        static void RequestSimpleNotification(FText Title, FText Message, float Duration, FGameplayTag AudioID);

    /** Request a simple Toast */
    UFUNCTION(BlueprintCallable, Category = "UI Manager")
        static void RequestSimpleToast(FText Message, float Duration, FGameplayTag AudioID);

    /** Request a simple HeadsUp Message */
    UFUNCTION(BlueprintCallable, Category = "UI Manager")
        static void RequestSimpleHeadsUpMessage(FText Message, float Duration, FGameplayTag AudioID);

};
