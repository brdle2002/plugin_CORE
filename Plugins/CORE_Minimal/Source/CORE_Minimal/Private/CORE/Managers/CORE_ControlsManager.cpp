// CORE_Minimal Plugin, 2025, BusyBee Games


#include "CORE/Managers/CORE_ControlsManager.h"
#include "CORE/Data/CORE_Logging.h"
#include "CORE/Data/CORE_GameplayTags.h"
#include "GameplayTagContainer.h"


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

void UCORE_ControlsManager::RequestControlProfile(FGameplayTag RequestedProfile)
{
	// Ensure the new profile is valid an not already active
	if (!RequestedProfile.IsValid() || RequestedProfile == ControlProfile)
	{
		UE_LOG(LogCORE_ControlsManager, Warning, TEXT("Invalid or already active control profile: %s"), *RequestedProfile.ToString());
		return;
	}

	// Switch control profiles
	if (RequestedProfile == FGameplayTag::RequestGameplayTag(FName("Player.ControlProfile.Gameplay")))
	{
		SetControlProfile_Gameplay();
		UE_LOG(LogCORE_ControlsManager, Log, TEXT("Switching to Gameplay Controls"));
	}
	else if (RequestedProfile == FGameplayTag::RequestGameplayTag(FName("Player.ControlProfile.UserInterface")))
	{
		SetControlProfile_UserInterface();
		UE_LOG(LogCORE_ControlsManager, Log, TEXT("Switching to User Interface Controls"));
	}
	else if (RequestedProfile == FGameplayTag::RequestGameplayTag(FName("Player.ControlProfile.NoShow")))
	{
		UE_LOG(LogCORE_ControlsManager, Log, TEXT("Switching to No Show Controls"));
		SetControlProfile_NoShow();
	}
	else
	{
		UE_LOG(LogCORE_ControlsManager, Warning, TEXT("Unknown Control Profile: %s"), *RequestedProfile.ToString());
		return;
	}

	ControlProfile = RequestedProfile;
}

void UCORE_ControlsManager::SetControlProfile_Gameplay()
{

}

void UCORE_ControlsManager::SetControlProfile_UserInterface()
{

}

void UCORE_ControlsManager::SetControlProfile_NoShow()
{

}