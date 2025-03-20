#pragma once

#include "CoreMinimal.h"

// Enum for different play types
UENUM(BlueprintType)
enum class EPlayType : uint8
{
    PlayType_None        UMETA(DisplayName = "Null"),
    PlayType_NewGame     UMETA(DisplayName = "New Game"),
    PlayType_SaveGame    UMETA(DisplayName = "Save Game")
};

// Enum for differant control profiles
UENUM(BlueprintType)
enum class EControlProfile : uint8
{
	ControlProfile_None UMETA(DisplayName = "None", Hidden),
	ControlProfile_Gameplay UMETA(DisplayName = "Gameplay"),
	ControlProfile_UserInterface UMETA(DisplayName = "User Interface"),
	ControlProfile_NoShow UMETA(DisplayName = "No Show")
};

// Available Display Layers
UENUM(BlueprintType)
enum class EDisplayLayer : uint8
{
    DisplayLayer_Null UMETA(DisplayName = "Null"),
    DisplayLayer_HUD UMETA(DisplayName = "HUD"),
    DisplayLayer_GameMenu UMETA(DisplayName = "Game Menu"),
    DisplayLayer_SystemMenu UMETA(DisplayName = "System Menu"),
    DisplayLayer_PushLayer UMETA(DisplayName = "Push Layer"),
    DisplayLayer_Modal UMETA(DisplayName = "Modal"),
};

/** Stances for Humans */
UENUM(BlueprintType)
enum class EHuman_Stance : uint8
{
	HumanStance_Standing UMETA(DisplayName = "Standing"),
	HumanStance_Crouching UMETA(DisplayName = "Crouching"),
	HumanStance_Prone UMETA(DisplayName = "Prone"),
	HumanStance_Sitting UMETA(DisplayName = "Sitting")
};

/** Gaits for Humans */
UENUM(BlueprintType)
enum class EHuman_Gait : uint8
{
	HumanGait_Walking UMETA(DisplayName = "Walking"),
	HumanGait_Jogging UMETA(DisplayName = "Jogging"),
	HumanGait_Running UMETA(DisplayName = "Running"),
	HumanGait_Sprinting UMETA(DisplayName = "Sprinting")
};

/** Movement States for Humans */
UENUM(BlueprintType)
enum class EHuman_MovementState : uint8
{
	HumanGait_None UMETA(DisplayName = "None"),
	HumanGait_Grounded UMETA(DisplayName = "Grounded"),
	HumanGait_Sliding UMETA(DisplayName = "Sliding"),
	HumanGait_Climbing UMETA(DisplayName = "Climbing"),
	HumanGait_Vaulting UMETA(DisplayName = "Vaulting"),
	HumanGait_Falling UMETA(DisplayName = "Falling"),
	HumanGait_Flying UMETA(DisplayName = "Flying"),
	HumanGait_Swimming UMETA(DisplayName = "Swimming"),
	HumanGait_Special UMETA(DisplayName = "Special")
};