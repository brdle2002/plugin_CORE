// CORE_Minimal Plugin, 2025, BusyBee Games

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "CORE_DeveloperSettings.generated.h"

/**
 * 
 */
UCLASS(config = Game, defaultconfig)
class CORE_MINIMAL_API UCORE_DeveloperSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:

	// Override category name if needed
	virtual FName GetCategoryName() const override { return TEXT("CORE Minimal Plugin"); }

	// Override section display name
	virtual FText GetSectionText() const override { return NSLOCTEXT("CORE_DeveloperSettings", "COREDeveloperSettingsSection", "CORE Minimal Settings"); }


	// Settings variables

	// Reference to UserInterfaceSettings DataAsset
	UPROPERTY(config, EditAnywhere, BlueprintReadWrite, Category = "Subsystem", meta = (AllowedClasses = "/Script/Engine.DataAsset"))
		TSoftObjectPtr<UDataAsset> UserInterfaceSettings;

	// Reference to AudioSettings DataAsset
	UPROPERTY(config, EditAnywhere, BlueprintReadWrite, Category = "Subsystem", meta = (AllowedClasses = "/Script/Engine.DataAsset"))
		TSoftObjectPtr<UDataAsset> AudioSettings;
};
