// CORE_Minimal Plugin, 2025, BusyBee Games


#include "CORE/Managers/CORE_GameManager.h"
#include "CORE/Managers/CORE_Manager_Base.h"
#include "CORE/Data/CORE_MiscTypes.h"
#include "CORE/Data/CORE_GameplayTags.h"
#include "CORE/Data/CORE_Manager_DA.h"
#include "CORE/Data/CORE_Logging.h"
#include "Kismet/GameplayStatics.h"
#include "GameMapsSettings.h"
#include "Engine/GameInstance.h"
#include "Engine/LocalPlayer.h"
#include "Engine/AssetManager.h"


/** INITIALIZATION **/

void UCORE_GameManager::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
    UE_LOG(LogCORE_GameManager, Log, TEXT("Initializing..."));
    ConstructManagers();
}

void UCORE_GameManager::ConstructManagers()
{
    // Get the Asset Manager from the engine
    UAssetManager* AssetManager = &UAssetManager::Get();

    // Create a FPrimaryAssetType to represent the ManagerDefinition asset type
    FPrimaryAssetType ManagerDefinitionAssetType = FPrimaryAssetType(FName(TEXT("ManagerDefinition")));

    // Get the list of all assets that match the ManagerDefinition asset type
    TArray<FAssetData> AssetDataList;
    AssetManager->GetPrimaryAssetDataList(ManagerDefinitionAssetType, AssetDataList);

    // Loop through each asset found
    for (const FAssetData& AssetData : AssetDataList)
    {
        // Check that the asset is valid and is of the correct type
        if (AssetData.IsValid() && AssetData.AssetClassPath == UCORE_Manager_DA::StaticClass()->GetClassPathName())
        {
            // Load the asset synchronously (use synchronous loading to ensure it's ready)
            UCORE_Manager_DA* ManagerDataAsset = Cast<UCORE_Manager_DA>(AssetData.GetAsset());
            if (ManagerDataAsset)
            {
                // Instantiate the manager class specified in the ManagerDataAsset
                TSubclassOf<UCORE_Manager_Base> ManagerClass = ManagerDataAsset->ManagerClass;
                if (ManagerClass)
                {
                    UCORE_Manager_Base* ManagerInstance = NewObject<UCORE_Manager_Base>(this, ManagerClass);

                    if (ManagerInstance)
                    {
                        // Initialize the manager instance
                        ManagerInstance->Initialize(ManagerDataAsset->ManagerID, ManagerDataAsset->ManagerName);

                        // Register the reference
                        RegisterReferenceByID(ManagerDataAsset->ManagerID, ManagerInstance);

                        // UE_LOG(LogCORE_GameManager, Log, TEXT("Created Manager: %s with ID: %s"), *ManagerDataAsset->ManagerName, *ManagerDataAsset->ManagerID.ToString());
                    }
                }
            }
        }
    }
}

void UCORE_GameManager::WorldReady()
{
    if (!GameAttributeTags.HasTag(FGameplayTag::RequestGameplayTag(TEXT("Game.State.FirstLoad"))))
    {
        LoadEntryLevel();
    }
    else
    {
        StartGamePhaseTimer();
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
        ObjectReferenceRegistry.Add(Tag, Object);

        UE_LOG(LogCORE_GameManager, Log, TEXT("Reference registered to: %s"), *Tag.ToString());
    }
    else
    {
        UE_LOG(LogCORE_GameManager, Warning, TEXT("Object invalid. Failed to register: %s"), *Tag.ToString());
    }
}

UObject* UCORE_GameManager::GetReferenceByID(FGameplayTag Tag) const
{
    if (const UObject* FoundObject = ObjectReferenceRegistry.FindRef(Tag))
    {
        return const_cast<UObject*>(FoundObject);
    }
    return nullptr;
}


/** GAME PHASE HANDLING **/

void UCORE_GameManager::StartGamePhaseTimer()
{
    if (GetWorld())
    {
        GetWorld()->GetTimerManager().SetTimer(TimerHandle_GamePhaseTimer, this, &ThisClass::GamePhaseTimer, 1.f, true, 0.5f);

        UE_LOG(LogCORE_GameManager, Warning, TEXT("Started Game Phase Timer."));
    }
}

void UCORE_GameManager::GamePhaseTimer()
{
    if(ShouldStartNextGamePhase())
    { 
        StartNextGamePhase();
    }

    UE_LOG(LogCORE_GameManager, Warning, TEXT("PHASE TIMER >>>>>>>>>>>>>>>>."));
}

bool UCORE_GameManager::ShouldStartNextGamePhase()
{
    /*
    // Checkif all registered tasks for the current phase have been completed
    for(auto It = PhaseRestrationData.CreateConstIterator(); It; ++It)
    {
        if (It.Value().GamePhase.MatchesTagExact(GetGamePhase()))
        {
            if (!It.Value().bIsCompleted)
            {
                return false;
            }
        }
    }
    */
    return false;
}

void UCORE_GameManager::StartNextGamePhase()
{
    /*
    // Define the ordered phase list
    static const TArray<FGameplayTag> PhaseOrder = {
        TAG_Game_Phase_Initiialization,
        TAG_Game_Phase_LoadingData,
        TAG_Game_Phase_MainMenu,
        TAG_Game_Phase_PreGameSetup,
        TAG_Game_Phase_ActiveGame,
        TAG_Game_Phase_Pause,
        TAG_Game_Phase_GameOver,
        TAG_Game_Phase_PostGame,
        TAG_Game_Phase_Shutdown
    };

    // Find the index of the current phase
    int32 CurrentIndex = PhaseOrder.IndexOfByKey(GetGamePhase());

    if (CurrentIndex != INDEX_NONE && CurrentIndex + 1 < PhaseOrder.Num())
    {
        // Set the next phase tag
        FGameplayTag NextPhaseTag = PhaseOrder[CurrentIndex + 1];
        GameAttributeTags = NextPhaseTag;  // Update the current phase to the next phase

        // Broadcast the change
        // OnGamePhaseUpdated.Broadcast(NextPhaseTag);

        UE_LOG(LogCORE_GameManager, Log, TEXT("Game phase updated to: %s"), *NextPhaseTag.ToString());
    }
    else
    {
        UE_LOG(LogCORE_GameManager, Warning, TEXT("No next game phase found, or already at final phase."));
    }
    */
}


/** GAME ATTRIBUTE HANDLING **/

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