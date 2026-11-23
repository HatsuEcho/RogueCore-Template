#include "TrophyWallMenuWidget.h"
#include "Templates/SubclassOf.h"

UTrophyWallMenuWidget::UTrophyWallMenuWidget() {
    this->CardsPerRow = 5;
    this->Sound_ClaimTrophy = NULL;
    this->Sound_RewardGranted = NULL;
    this->Sound_Locked = NULL;
    this->CountReward = NULL;
    this->TrophySheet = NULL;
}

void UTrophyWallMenuWidget::SetTrophySheet(UTrophySheet* InSheet) {
}

void UTrophyWallMenuWidget::Refresh() {
}





void UTrophyWallMenuWidget::Rebuild() {
}

UTrophyWallMenuWidget* UTrophyWallMenuWidget::OpenTrophyWall(UObject* WorldContextObject, TSubclassOf<UTrophyWallMenuWidget> MenuClass, UTrophySheet* InSheet, int32 InZOrder) {
    return NULL;
}

void UTrophyWallMenuWidget::HandleTrophyWallChanged() {
}

void UTrophyWallMenuWidget::HandleTrophyClaimRequested(UTrophyWallBiomeCardWidget* InCard, UTrophyWallBossTrophyWidget* InTrophy) {
}

void UTrophyWallMenuWidget::HandleMilestoneRewardClaimRequested(UTrophyWallCountRewardWidget* InReward) {
}

void UTrophyWallMenuWidget::HandleBiomeRewardClaimRequested(UTrophyWallBiomeCardWidget* InCard) {
}

UTrophySheet* UTrophyWallMenuWidget::GetTrophySheet() const {
    return NULL;
}

FText UTrophyWallMenuWidget::GetSheetName() const {
    return FText::GetEmpty();
}

int32 UTrophyWallMenuWidget::GetClaimableTrophyCount() const {
    return 0;
}

int32 UTrophyWallMenuWidget::GetClaimableRewardCount() const {
    return 0;
}

int32 UTrophyWallMenuWidget::GetCardRow(int32 InIndex) const {
    return 0;
}

int32 UTrophyWallMenuWidget::GetCardColumn(int32 InIndex) const {
    return 0;
}

TArray<UTrophyWallBiomeCardWidget*> UTrophyWallMenuWidget::GetBiomeCards() const {
    return TArray<UTrophyWallBiomeCardWidget*>();
}

bool UTrophyWallMenuWidget::ClaimTrophy(UBiome* InBiome, UEnemyID* InBoss) {
    return false;
}

bool UTrophyWallMenuWidget::ClaimMilestoneReward(int32 InClaimedTrophyCount) {
    return false;
}

bool UTrophyWallMenuWidget::ClaimBiomeReward(UBiome* InBiome) {
    return false;
}

int32 UTrophyWallMenuWidget::ClaimAllTrophies() {
    return 0;
}

int32 UTrophyWallMenuWidget::ClaimAllRewards() {
    return 0;
}


