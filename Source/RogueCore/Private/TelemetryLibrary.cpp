#include "TelemetryLibrary.h"

UTelemetryLibrary::UTelemetryLibrary() {
}

void UTelemetryLibrary::NotifyTelemetryWorkbenchPickWeapon(const UObject* WorldContext, const FTelemetryWorkbenchPicks& PickableOptions, const int32 PickIndex) {
}

void UTelemetryLibrary::NotifyTelemetryWorkbenchPickAttribute(const UObject* WorldContext, const FTelemetryWorkbenchPicks& PickableOptions, const int32 PickIndex) {
}

void UTelemetryLibrary::NotifyTelemetryWorkbenchPickAbilityUpgrade(const UObject* WorldContext, const FTelemetryWorkbenchPicks& PickableOptions, const int32 PickIndex) {
}

void UTelemetryLibrary::NotifyTelemetryStageEndElevatorCalled(const UObject* WorldContext) {
}

void UTelemetryLibrary::NotifyTelemetryStageEndElevatorArrived(const UObject* WorldContext) {
}

void UTelemetryLibrary::NotifyTelemetryRunEndRating(const UObject* WorldContext, const FGuid RunId, const ERunDepth RunDepth, const FString& rating, const FString& PickedQuestionOption) {
}

void UTelemetryLibrary::NotifyTelemetryRockAndStone(const UObject* WorldContext, const UPlayerCharacterID* PlayerClass) {
}

void UTelemetryLibrary::NotifyTelemetryPromotionBought(const UObject* WorldContext, const int32 PromotionLevel, const UPlayerCharacterID* PromotedClass) {
}

void UTelemetryLibrary::NotifyTelemetryPlayerDeath(const UObject* WorldContext, const FString& Cause, const int32 SecondsSinceLastDamageTaken, const int32 SecondsSinceLastRevive) {
}

void UTelemetryLibrary::NotifyTelemetryPickRiskVector(const UObject* WorldContext, const FVoteData& Vote, const int32 MyVoteIndex) {
}

void UTelemetryLibrary::NotifyTelemetryLevelLoad(const UObject* WorldContext, const float LoadTimeInSeconds) {
}

void UTelemetryLibrary::NotifyTelemetryEnhancementBought(const UObject* WorldContext, const UPerkAsset* enhancement) {
}

void UTelemetryLibrary::NotifyTelemetryBioBoosterPick(const UObject* WorldContext, const TArray<UBXEUnlockBase*>& PickableOptions, const UBXEUnlockBase* PickedOption) {
}



void UTelemetryLibrary::NotifyTelemetryUnlockRerollHealthBoost(const UObject* WorldContext, const FUnlockRerollHealthBoostResponse& Response) {
}

void UTelemetryLibrary::NotifyTelemetryUnlockReroll(const UObject* WorldContext, const FUnlockRerollResponse& Response) {
}

void UTelemetryLibrary::NotifyTelemetryTutorialStep(const UObject* WorldContext, const FString& step, const FString& status, const int32 StepIndex, const float SecondsShown) {
}

void UTelemetryLibrary::NotifyTelemetryTrophyWallOpened(const UObject* WorldContext, const UTrophySheet* Sheet, const int32 ClaimableTrophies, const int32 ClaimableRewards) {
}

void UTelemetryLibrary::NotifyTelemetryTrophyMilestoneRewardClaimed(const UObject* WorldContext, const UTrophySheet* Sheet, const int32 ClaimedTrophyCount, const bool bViaClaimAll) {
}

void UTelemetryLibrary::NotifyTelemetryTrophyClaimed(const UObject* WorldContext, const UTrophySheet* Sheet, const UBiome* Biome, const UEnemyID* Boss, const bool bViaClaimAll) {
}

void UTelemetryLibrary::NotifyTelemetryTrophyBiomeRewardClaimed(const UObject* WorldContext, const UTrophySheet* Sheet, const UBiome* Biome, const bool bViaClaimAll) {
}

void UTelemetryLibrary::NotifyTelemetryCosmeticNodeBought(const UObject* WorldContext, const URewardTree* Sheet, const int32 NodeID, UReward* Reward, const UPlayerCharacterID* PerClassCharacter) {
}

