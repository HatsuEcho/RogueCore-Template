#include "TrophyWallBiomeRewardWidget.h"

UTrophyWallBiomeRewardWidget::UTrophyWallBiomeRewardWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PendingOpacity = 0.60f;
    this->ClaimableOpacity = 1.00f;
    this->GrantedOpacity = 1.00f;
    this->Sheet = NULL;
    this->Biome = NULL;
}

void UTrophyWallBiomeRewardWidget::UpdateVisuals() {
}

void UTrophyWallBiomeRewardWidget::SetBiome(UTrophySheet* InSheet, UBiome* InBiome) {
}

void UTrophyWallBiomeRewardWidget::Refresh() {
}




bool UTrophyWallBiomeRewardWidget::IsRewardGranted() const {
    return false;
}

bool UTrophyWallBiomeRewardWidget::IsRewardClaimable() const {
    return false;
}

bool UTrophyWallBiomeRewardWidget::HasReward() const {
    return false;
}

UTrophySheet* UTrophyWallBiomeRewardWidget::GetSheet() const {
    return NULL;
}

TArray<UReward*> UTrophyWallBiomeRewardWidget::GetRewards() const {
    return TArray<UReward*>();
}

float UTrophyWallBiomeRewardWidget::GetRewardOpacity() const {
    return 0.0f;
}

float UTrophyWallBiomeRewardWidget::GetProgress() const {
    return 0.0f;
}

int32 UTrophyWallBiomeRewardWidget::GetClaimedCount() const {
    return 0;
}

int32 UTrophyWallBiomeRewardWidget::GetBossCount() const {
    return 0;
}

UBiome* UTrophyWallBiomeRewardWidget::GetBiome() const {
    return NULL;
}

bool UTrophyWallBiomeRewardWidget::ClaimReward() {
    return false;
}


