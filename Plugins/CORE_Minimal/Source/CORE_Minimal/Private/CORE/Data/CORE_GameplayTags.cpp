// CORE_Minimal Plugin, 2025, BusyBee Games

#include "CORE/Data/Core_GameplayTags.h"

namespace CORE_Minimal_GamePhases_GameplayTags
{
	UE_DEFINE_GAMEPLAY_TAG(TAG_Game_Phase_Initiialization, TEXT("Game.Phase.Initialization"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Game_Phase_LoadingData, TEXT("Game.Phase.LoadingData"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Game_Phase_MainMenu, TEXT("Game.Phase.MainMenu"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Game_Phase_PreGameSetup, TEXT("Game.Phase.PreGameSetup"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Game_Phase_ActiveGame, TEXT("Game.Phase.ActiveGame"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Game_Phase_Pause, TEXT("Game.Phase.Pause"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Game_Phase_GameOver, TEXT("Game.Phase.GameOver"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Game_Phase_PostGame, TEXT("Game.Phase.PostGame"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Game_Phase_Shutdown, TEXT("Game.Phase.Shutdown"));
}

namespace CORE_Minimal_GameAttribute_GameplayTags
{
	UE_DEFINE_GAMEPLAY_TAG(TAG_Game_State_FirstLoad, TEXT("Game.State.FirstLoad"));
}

namespace CORE_Minimal_ManagerReferenceID_GameplayTags
{
	UE_DEFINE_GAMEPLAY_TAG(TAG_Reference_ID_Manager_GameManager, TEXT("Reference.ID.Manager.GameManager"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Reference_ID_Manager_UIManager, TEXT("Reference.ID.Manager.UIManager"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Reference_ID_Manager_ControlsManager, TEXT("Reference.ID.Manager.ControlsManager"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Reference_ID_Manager_AudioManager, TEXT("Reference.ID.Manager.AudioManager"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Reference_ID_Manager_WorldManager, TEXT("Reference.ID.Manager.WorldManager"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Reference_ID_Manager_PlayerManager, TEXT("Reference.ID.Manager.PlayerManager"));
}

namespace AbilityCore_UI_GameplayTags
{
	UE_DEFINE_GAMEPLAY_TAG(TAG_Ability_UI_Toolbar_Scroll_Up, TEXT("Ability.UI.Toolbar.Scroll.Up"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Ability_UI_Toolbar_Scroll_Down, TEXT("Ability.UI.Toolbar.Scroll.Down"));
}

namespace ActionCore_Actions_GameplayTags
{
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Action, TEXT("Action.Action"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Activate, TEXT("Action.Activate"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Add, TEXT("Action.Add"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_AddFirewood, TEXT("Action.AddFirewood"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_AddFuel, TEXT("Action.AddFuel"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_AddKindling, TEXT("Action.AddKindling"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_AddSpit, TEXT("Action.AddSpit"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_AddStoneRing, TEXT("Action.AddStoneRing"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Adjust, TEXT("Action.Adjust"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Agree, TEXT("Action.Agree"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Alert, TEXT("Action.Alert"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Analyze, TEXT("Action.Analyze"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Apply, TEXT("Action.Apply"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Assemble, TEXT("Action.Assemble"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Bait, TEXT("Action.Bait"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Barricade, TEXT("Action.Barricade"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Bless, TEXT("Action.Bless"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Boil, TEXT("Action.Boil"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Breakdown, TEXT("Action.Breakdown"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Brew, TEXT("Action.Brew"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Build, TEXT("Action.Build"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Bury, TEXT("Action.Bury"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Butcher, TEXT("Action.Butcher"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Buy, TEXT("Action.Buy"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Call, TEXT("Action.Call"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Capture, TEXT("Action.Capture"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Carve, TEXT("Action.Carve"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Cast, TEXT("Action.Cast"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Charge, TEXT("Action.Charge"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Chop, TEXT("Action.Chop"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Churn, TEXT("Action.Churn"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Clean, TEXT("Action.Clean"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Clear, TEXT("Action.Clear"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Close, TEXT("Action.Close"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Collect, TEXT("Action.Collect"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Combine, TEXT("Action.Combine"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Configure, TEXT("Action.Configure"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Confirm, TEXT("Action.Confirm"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Consume, TEXT("Action.Consume"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Cook, TEXT("Action.Cook"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Craft, TEXT("Action.Craft"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Cure, TEXT("Action.Cure"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Curse, TEXT("Action.Curse"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Cut, TEXT("Action.Cut"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Deactivate, TEXT("Action.Deactivate"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_DebugPrint, TEXT("Action.DebugPrint"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Design, TEXT("Action.Design"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Destroy, TEXT("Action.Destroy"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_DigUp, TEXT("Action.DigUp"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Disable, TEXT("Action.Disable"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Disagree, TEXT("Action.Disagree"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Disarm, TEXT("Action.Disarm"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Disassemble, TEXT("Action.Disassemble"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Discharge, TEXT("Action.Discharge"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Disinfect, TEXT("Action.Disinfect"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Dismiss, TEXT("Action.Dismiss"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Downgrade, TEXT("Action.Downgrade"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Draw, TEXT("Action.Draw"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Drink, TEXT("Action.Drink"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Drop, TEXT("Action.Drop"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Dry, TEXT("Action.Dry"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_DumpOut, TEXT("Action.DumpOut"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Eat, TEXT("Action.Eat"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_EditText, TEXT("Action.EditText"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Enable, TEXT("Action.Enable"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Equip, TEXT("Action.Equip"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Extinguish, TEXT("Action.Extinguish"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Fertilize, TEXT("Action.Fertilize"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Fill, TEXT("Action.Fill"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Filter, TEXT("Action.Filter"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Fish, TEXT("Action.Fish"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Fix, TEXT("Action.Fix"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Follow, TEXT("Action.Follow"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Forge, TEXT("Action.Forge"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Gather, TEXT("Action.Gather"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Grab, TEXT("Action.Grab"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Grind, TEXT("Action.Grind"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Hang, TEXT("Action.Hang"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Harvest, TEXT("Action.Harvest"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Heal, TEXT("Action.Heal"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Heat, TEXT("Action.Heat"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Hide, TEXT("Action.Hide"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Inspect, TEXT("Action.Inspect"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Learn, TEXT("Action.Learn"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_LevelUp, TEXT("Action.LevelUp"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Light, TEXT("Action.Light"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Listen, TEXT("Action.Listen"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Loot, TEXT("Action.Loot"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Melt, TEXT("Action.Melt"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Merge, TEXT("Action.Merge"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Mix, TEXT("Action.Mix"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Mod, TEXT("Action.Mod"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Modify, TEXT("Action.Modify"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Move, TEXT("Action.Move"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Navigate, TEXT("Action.Navigate"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Open, TEXT("Action.Open"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Packup, TEXT("Action.Packup"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Pick, TEXT("Action.Pick"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Pickup, TEXT("Action.Pickup"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Place, TEXT("Action.Place"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Plant, TEXT("Action.Plant"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Play, TEXT("Action.Play"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Poison, TEXT("Action.Poison"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Pray, TEXT("Action.Pray"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Press, TEXT("Action.Press"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Pull, TEXT("Action.Pull"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Push, TEXT("Action.Push"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Read, TEXT("Action.Read"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Recharge, TEXT("Action.Recharge"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Reclaim, TEXT("Action.Reclaim"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Recruit, TEXT("Action.Recruit"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Refuel, TEXT("Action.Refuel"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Release, TEXT("Action.Release"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Reload, TEXT("Action.Reload"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Rename, TEXT("Action.Rename"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Research, TEXT("Action.Research"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Respec, TEXT("Action.Respec"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Reveal, TEXT("Action.Reveal"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Revive, TEXT("Action.Revive"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Root, TEXT("Action.Root"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Rotate, TEXT("Action.Rotate"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Sabotage, TEXT("Action.Sabotage"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Save, TEXT("Action.Save"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Scan, TEXT("Action.Scan"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Scout, TEXT("Action.Scout"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Search, TEXT("Action.Search"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Set, TEXT("Action.Set"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Setup, TEXT("Action.Setup"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Shape, TEXT("Action.Shape"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Shoot, TEXT("Action.Shoot"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Skin, TEXT("Action.Skin"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Sleep, TEXT("Action.Sleep"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Smash, TEXT("Action.Smash"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Smelt, TEXT("Action.Smelt"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Smoke, TEXT("Action.Smoke"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Soak, TEXT("Action.Soak"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Sow, TEXT("Action.Sow"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Speak, TEXT("Action.Speak"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Split, TEXT("Action.Split"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Start, TEXT("Action.Start"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Stash, TEXT("Action.Stash"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Stop, TEXT("Action.Stop"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Store, TEXT("Action.Store"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Swing, TEXT("Action.Swing"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Switch, TEXT("Action.Switch"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Take, TEXT("Action.Take"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_TakeAway, TEXT("Action.TakeAway"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Tan, TEXT("Action.Tan"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Test, TEXT("Action.Test"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Throw, TEXT("Action.Throw"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Till, TEXT("Action.Till"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Toggle, TEXT("Action.Toggle"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_ToggleDebug, TEXT("Action.ToggleDebug"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Track, TEXT("Action.Track"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Trade, TEXT("Action.Trade"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Trash, TEXT("Action.Trash"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Tune, TEXT("Action.Tune"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_TurnOff, TEXT("Action.TurnOff"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_TurnOn, TEXT("Action.TurnOn"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Unequip, TEXT("Action.Unequip"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Upgrade, TEXT("Action.Upgrade"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Use, TEXT("Action.Use"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Watch, TEXT("Action.Watch"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Water, TEXT("Action.Water"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Weave, TEXT("Action.Weave"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_Write, TEXT("Action.Write"));
}

namespace AudioCore_Events_GameplayTags
{
	UE_DEFINE_GAMEPLAY_TAG(TAG_Event_Audio_UI_Window_Open, TEXT("Event.Audio.UI.Window.Open"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Event_Audio_UI_Window_Close, TEXT("Event.Audio.UI.Window.Close"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Event_Audio_UI_Modal_Open, TEXT("Event.Audio.UI.Modal.Open"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Event_Audio_UI_Modal_Close, TEXT("Event.Audio.UI.Modal.Close"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Event_Audio_UI_Button_01_Hovered, TEXT("Event.Audio.UI.Button.01.Hovered"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Event_Audio_UI_Button_01_Pressed, TEXT("Event.Audio.UI.Button.01.Pressed"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Event_Audio_UI_Button_01_Clicked, TEXT("Event.Audio.UI.Button.01.Clicked"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Event_Audio_UI_Notify_Announcement_Simple, TEXT("Event.Audio.UI.Notify.Announcement.Simple"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Event_Audio_UI_Notify_Announcement_PlayStart, TEXT("Event.Audio.UI.Notify.Announcement.PlayStart"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Event_Audio_UI_Notify_Announcement_LevelUp, TEXT("Event.Audio.UI.Notify.Announcement.LevelUp"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Event_Audio_UI_Notify_Announcement_NewDiscovery, TEXT("Event.Audio.UI.Notify.Announcement.NewDiscovery"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Event_Audio_UI_Notify_Notification_Simple, TEXT("Event.Audio.UI.Notify.Notification.Simple"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Event_Audio_UI_Notify_Notification_Critical, TEXT("Event.Audio.UI.Notify.Notification.Critical"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Event_Audio_UI_Notify_Toast, TEXT("Event.Audio.UI.Notify.Toast"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Event_Audio_UI_Notify_HeadsUp_Info, TEXT("Event.Audio.UI.Notify.HeadsUp.Info"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Event_Audio_UI_Notify_HeadsUp_Success, TEXT("Event.Audio.UI.Notify.HeadsUp.Success"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Event_Audio_UI_Notify_HeadsUp_Fail, TEXT("Event.Audio.UI.Notify.HeadsUp.Fail"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_Event_Audio_UI_Notify_HeadsUp_Silent, TEXT("Event.Audio.UI.Notify.HeadsUp.Silent"));
}

namespace DisplayCore_IDs_GameplayTags
{
	UE_DEFINE_GAMEPLAY_TAG(TAG_ID_HUD_Default, TEXT("Reference.ID.HUD.Default"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_ID_GameMenu_Inventory, TEXT("Reference.ID.GameMenu.Inventory"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_ID_GameMenu_Skills, TEXT("Reference.ID.GameMenu.Skills"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_ID_GameMenu_Crafting, TEXT("Reference.ID.GameMenu.Crafting"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_ID_GameMenu_Codex, TEXT("Reference.ID.GameMenu.Codex"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_ID_SystemMenu_MainMenu, TEXT("Reference.ID.SystemMenu.MainMenu"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_ID_SystemMenu_Pause, TEXT("Reference.ID.SystemMenu.Pause"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_ID_SystemMenu_Death, TEXT("Reference.ID.SystemMenu.Death"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_ID_Modal_ConfirmQuit_Play, TEXT("Reference.ID.Modal.ConfirmQuit.Play"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_ID_Modal_ConfirmQuit_Nonplay, TEXT("Reference.ID.Modal.ConfirmQuit.Nonplay"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_ID_Modal_ConfirmMainMenu_Play, TEXT("Reference.ID.Modal.ConfirmMainMenu.Play"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_ID_Modal_ConfirmMainMenu_Nonplay, TEXT("Reference.ID.Modal.ConfirmMainMenu.Nonplay"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_ID_Modal_ConfirmLoad_Play, TEXT("Reference.ID.Modal.ConfirmLoadSave.Play"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_ID_Modal_ConfirmLoad_Nonplay, TEXT("Reference.ID.Modal.ConfirmLoadSave.Nonplay"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_ID_Modal_ConfirmDeleteSave, TEXT("Reference.ID.Modal.ConfirmDeleteSave"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_ID_Modal_ConfirmRestart, TEXT("Reference.ID.Modal.ConfirmRestart"));
}

namespace ReferenceCore_IDs_GameplayTags
{
	UE_DEFINE_GAMEPLAY_TAG(TAG_ID_Compass, TEXT("Reference.ID.Compass"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_ID_Controls, TEXT("Reference.ID.Controls"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_ID_Health, TEXT("Reference.ID.Health"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_ID_Notify, TEXT("Reference.ID.Notify"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_ID_PlayerHUD, TEXT("Reference.ID.PlayerHUD"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_ID_PlayerMenu, TEXT("Reference.ID.PlayerMenu"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_ID_Reticle, TEXT("Reference.ID.Reticle"));
	UE_DEFINE_GAMEPLAY_TAG(TAG_ID_Vitals, TEXT("Reference.ID.Vitals"));
}