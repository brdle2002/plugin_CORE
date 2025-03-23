// CORE_Minimal Plugin, 2025, BusyBee Games


#include "CORE/Managers/CORE_GameManager.h"
#include "CORE/Data/CORE_Logging.h"
#include "Kismet/GameplayStatics.h"
#include "GameMapsSettings.h"
#include "Engine/GameInstance.h"
// #include "Engine/LocalPlayer.h"
// #include "Engine/AssetManager.h"



/** INITIALIZATION **/
void UCORE_GameManager::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
    UE_LOG(LogCORE_GameManager, Log, TEXT("Initializing..."));
}

void UCORE_GameManager::WorldReady()
{
    if (!GameAttributeTags.HasTag(FGameplayTag::RequestGameplayTag(TEXT("Game.State.FirstLoad"))))
    {
        LoadEntryLevel();
    }
    else
    {
        // Handle case where the tag IS present
    }
}

void UCORE_GameManager::LoadEntryLevel()
{
    UGameInstance* GameInstance = GetGameInstance();
    if (!GameInstance) return;

    UWorld* World = GameInstance->GetWorld();  // Get the world context
    if (!World) return;

    // Get the entry level from project settings
    FString EntryLevel = GetDefault<UGameMapsSettings>()->GetGameDefaultMap();
    if (EntryLevel.IsEmpty()) return;

    // Get the current level name
    FString CurrentLevel = World->GetMapName();
    CurrentLevel.RemoveFromStart(World->StreamingLevelsPrefix); // Removes potential "UEDPIE_0_" prefix in PIE mode

    // Check if we are already in the entry level
    if (CurrentLevel.Equals(EntryLevel, ESearchCase::IgnoreCase))
    {
        UE_LOG(LogCORE_GameManager, Log, TEXT("Already in Entry Level: %s"), *CurrentLevel);
        return;
    }

    // Load the level
    UGameplayStatics::OpenLevel(World, FName(*EntryLevel));
    GameAttributeTags.AddTag(FGameplayTag::RequestGameplayTag(TEXT("Game.State.FirstLoad")));
}

void UCORE_GameManager::Deinitialize()
{
	UE_LOG(LogCORE_GameManager, Log, TEXT("Deinitializing..."));

	Super::Deinitialize();
}



/** OBJECT REFERENCE HANDLING **/
void UCORE_GameManager::RegisterReferenceByID(FGameplayTag Tag, UObject* Object)
{
    if (Object)
    {
        ObjectReferences.Add(Tag, Object);

        UE_LOG(LogCORE_GameManager, Log, TEXT("Reference registered to: %s"), *Tag.ToString());
    }
    else
    {
        UE_LOG(LogCORE_GameManager, Warning, TEXT("Object invalid. Failed to register: %s"), *Tag.ToString());
    }
}

UObject* UCORE_GameManager::GetReferenceByID(FGameplayTag Tag) const
{
    if (const UObject* FoundObject = ObjectReferences.FindRef(Tag))
    {
        return const_cast<UObject*>(FoundObject);
    }
    return nullptr;
}



/** GAME ATTRIBUTES HANDLING **/
void UCORE_GameManager::UpdateGameAttributeTags(const FGameplayTagContainer& AddTags, const FGameplayTagContainer& RemoveTags)
{
    // Remove specified tags
    GameAttributeTags.RemoveTags(RemoveTags);

    // Add specified tags
    GameAttributeTags.AppendTags(AddTags);

    // Log the changes
    UE_LOG(LogCORE_GameManager, Log, TEXT("Updated GameAttributeTags. Current Tags: %s"), *GameAttributeTags.ToStringSimple());

    // Broadcast the delegate to notify other systems
    OnGameAttributeTagsUpdated.Broadcast(GameAttributeTags);
}
