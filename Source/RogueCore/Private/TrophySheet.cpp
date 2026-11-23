#include "TrophySheet.h"

UTrophySheet::UTrophySheet() {
}

bool UTrophySheet::IsBossKilled(const UObject* WorldContext, const UBiome* Biome, const UEnemyID* Boss) const {
    return false;
}

bool UTrophySheet::IsBossClaimed(const UObject* WorldContext, const UBiome* Biome, const UEnemyID* Boss) const {
    return false;
}

bool UTrophySheet::IsBiomeComplete(const UObject* WorldContext, const UBiome* Biome) const {
    return false;
}

bool UTrophySheet::IsBiomeClaimed(const UObject* WorldContext, const UBiome* Biome) const {
    return false;
}

bool UTrophySheet::HasMilestoneRewardBeenGranted(const UObject* WorldContext, const int32 ClaimedTrophyCount) const {
    return false;
}

bool UTrophySheet::HasBiomeCompletionRewardBeenGranted(const UObject* WorldContext, const UBiome* Biome) const {
    return false;
}

int32 UTrophySheet::GetTotalTrophyCount() const {
    return 0;
}

FText UTrophySheet::GetSheetName() const {
    return FText::GetEmpty();
}

TArray<FTrophyMilestoneReward> UTrophySheet::GetMilestoneRewards() const {
    return TArray<FTrophyMilestoneReward>();
}

int32 UTrophySheet::GetKilledTrophyCount(const UObject* WorldContext) const {
    return 0;
}

int32 UTrophySheet::GetClaimedTrophyCount(const UObject* WorldContext) const {
    return 0;
}

TSoftObjectPtr<UTexture2D> UTrophySheet::GetBossIcon(const UEnemyID* Boss) const {
    return NULL;
}

TArray<UEnemyID*> UTrophySheet::GetBosses() const {
    return TArray<UEnemyID*>();
}

TArray<UBiome*> UTrophySheet::GetBiomes() const {
    return TArray<UBiome*>();
}

TArray<UReward*> UTrophySheet::GetBiomeCompletionRewards(const UBiome* Biome) const {
    return TArray<UReward*>();
}

UEnemyID* UTrophySheet::FindBossID(const ERunBossType BossType) const {
    return NULL;
}

bool UTrophySheet::FindBiomeReward(const UBiome* Biome, FTrophyBiomeReward& OutReward) const {
    return false;
}

bool UTrophySheet::ClaimTrophy(UObject* WorldContext, const UBiome* Biome, const UEnemyID* Boss) {
    return false;
}

bool UTrophySheet::ClaimMilestoneReward(UObject* WorldContext, const int32 ClaimedTrophyCount) {
    return false;
}

bool UTrophySheet::ClaimBiomeCompletionReward(UObject* WorldContext, const UBiome* Biome) {
    return false;
}

bool UTrophySheet::CanClaimMilestoneReward(const UObject* WorldContext, const int32 ClaimedTrophyCount) const {
    return false;
}

bool UTrophySheet::CanClaimBoss(const UObject* WorldContext, const UBiome* Biome, const UEnemyID* Boss) const {
    return false;
}

bool UTrophySheet::CanClaimBiomeCompletionReward(const UObject* WorldContext, const UBiome* Biome) const {
    return false;
}


