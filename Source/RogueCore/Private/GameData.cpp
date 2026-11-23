#include "GameData.h"
#include "Templates/SubclassOf.h"

UGameData::UGameData() {
    this->HUDVisibilitySettings = NULL;
    this->AscensionRewardsSettings = NULL;
    this->KPI_Settings = NULL;
    this->PerkSettings = NULL;
    this->AbilitySettings = NULL;
    this->FsdEventsSettings = NULL;
    this->GameActivitySettings = NULL;
    this->DanceSettings = NULL;
    this->AnimationSettings = NULL;
    this->EnemySettings = NULL;
    this->DamageSettings = NULL;
    this->ZoneSettings = NULL;
    this->TreasureSettings = NULL;
    this->DrinkSettings = NULL;
    this->UpgradeSettings = NULL;
    this->SpawnSettings = NULL;
    this->VanitySettings = NULL;
    this->KeyBindingSettings = NULL;
    this->BXESettings = NULL;
    this->ForgingSettings = NULL;
    this->SchematicSettings = NULL;
    this->SkinSettings = NULL;
    this->SpecialEventSettings = NULL;
    this->ProceduralSettings = NULL;
    this->PickaxeSettings = NULL;
    this->TagSettings = NULL;
    this->ItemSettings = NULL;
    this->DynamicIconSettings = NULL;
    this->ShowroomSettings = NULL;
    this->VictoryPoseSettings = NULL;
    this->TutorialSettings = NULL;
    this->LegacySettings = NULL;
    this->EffectSettings = NULL;
    this->AfflictionSettings = NULL;
    this->DailyDealSettings = NULL;
    this->TerrainMaterialSettings = NULL;
    this->SaveGameSettings = NULL;
    this->DamageNumberSettings = NULL;
    this->IntelSettings = NULL;
    this->MinersManual = NULL;
    this->StatusEffects = NULL;
    this->CharacterSettings = NULL;
    this->AchievementSettings = NULL;
    this->StageSettings = NULL;
    this->SeasonSettings = NULL;
    this->InstancedNiagaraSettings = NULL;
    this->RewardTreeSettings = NULL;
    this->DefaultCharacterID = NULL;
    this->CosmeticSheet1 = NULL;
    this->EntitlementSettings = NULL;
    this->CommunicationSettingsAsset = NULL;
    this->TrophyWallSettings = NULL;
    this->CosmeticSheetOldForFixup = NULL;
}

FGVisibilityGroups UGameData::GetVisibilityGroups() const {
    return FGVisibilityGroups{};
}

FGDTasks UGameData::GetTaskData() const {
    return FGDTasks{};
}

FText UGameData::GetPlayerRankName(int32 Rank) const {
    return FText::GetEmpty();
}

TArray<UPlayerCharacterID*> UGameData::GetPlayerCharacterIds() const {
    return TArray<UPlayerCharacterID*>();
}

UPlayerCharacterID* UGameData::GetPlayerCharacterID(const FGuid& ID) const {
    return NULL;
}

FPerkSettings UGameData::GetPerkData() const {
    return FPerkSettings{};
}

UPerkAsset* UGameData::GetPerk(const EPerkName InPerkName) const {
    return NULL;
}

FGDMissionStats UGameData::GetMissionStats() const {
    return FGDMissionStats{};
}

int32 UGameData::GetMaxNumberOfDeployments() const {
    return 0;
}

UInventoryList* UGameData::GetInventoryList() const {
    return NULL;
}

TMap<ERunHazard, UDifficultySetting*> UGameData::GetDifficulties() const {
    return TMap<ERunHazard, UDifficultySetting*>();
}

FDeploymentSlotRequirement UGameData::GetDeploymentSlotCost(int32 InSlotIndex) const {
    return FDeploymentSlotRequirement{};
}

UPlayerCharacterID* UGameData::GetDefaultCharacterID() const {
    return NULL;
}

TSubclassOf<APlayerCharacter> UGameData::GetDefaultCharacter() const {
    return NULL;
}

bool UGameData::GetDefaultBioBoosterDecks(const UPlayerCharacterID* InCharacter, TArray<UBioBoosterDeck*>& OutDecks) const {
    return false;
}

int32 UGameData::GetAscensionMeritCost(const int32 TimesAscended) const {
    return 0;
}

TArray<UHUDVisibilityGroup*> UGameData::GetAllVisibilityGroups(bool InSorted) const {
    return TArray<UHUDVisibilityGroup*>();
}

TArray<UOpsComTaskAsset*> UGameData::GetAllTasks() const {
    return TArray<UOpsComTaskAsset*>();
}

TArray<UMissionStat*> UGameData::GetAllMissionStats() const {
    return TArray<UMissionStat*>();
}

TArray<UMissionStat*> UGameData::GetAllInfirmaryStats() const {
    return TArray<UMissionStat*>();
}



void UGameData::GetAllBioBoosterDecks(TArray<UBioBoosterDeck*>& OutDecks) const {
}

