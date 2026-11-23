#include "TrophyWallBiomeCardWidget.h"

UTrophyWallBiomeCardWidget::UTrophyWallBiomeCardWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->TrophiesPerRow = 2;
    this->BiomeReward = NULL;
    this->Sheet = NULL;
    this->Biome = NULL;
}

void UTrophyWallBiomeCardWidget::UpdateVisuals() {
}

void UTrophyWallBiomeCardWidget::SetBiome(UTrophySheet* InSheet, UBiome* InBiome) {
}

void UTrophyWallBiomeCardWidget::Refresh() {
}




bool UTrophyWallBiomeCardWidget::IsBiomeClaimed() const {
    return false;
}

void UTrophyWallBiomeCardWidget::HandleTrophyClaimRequested(UTrophyWallBossTrophyWidget* InTrophy) {
}

void UTrophyWallBiomeCardWidget::HandleRewardClaimRequested(UTrophyWallBiomeRewardWidget* InReward) {
}

int32 UTrophyWallBiomeCardWidget::GetTrophyRow(int32 InIndex) const {
    return 0;
}

int32 UTrophyWallBiomeCardWidget::GetTrophyColumn(int32 InIndex) const {
    return 0;
}

UTrophySheet* UTrophyWallBiomeCardWidget::GetSheet() const {
    return NULL;
}

int32 UTrophyWallBiomeCardWidget::GetClaimedCount() const {
    return 0;
}

int32 UTrophyWallBiomeCardWidget::GetClaimableCount() const {
    return 0;
}

TArray<UTrophyWallBossTrophyWidget*> UTrophyWallBiomeCardWidget::GetBossTrophies() const {
    return TArray<UTrophyWallBossTrophyWidget*>();
}

int32 UTrophyWallBiomeCardWidget::GetBossCount() const {
    return 0;
}

FText UTrophyWallBiomeCardWidget::GetBiomeName() const {
    return FText::GetEmpty();
}

UTexture2D* UTrophyWallBiomeCardWidget::GetBiomeImage() const {
    return NULL;
}

UTexture2D* UTrophyWallBiomeCardWidget::GetBiomeIcon() const {
    return NULL;
}

UBiome* UTrophyWallBiomeCardWidget::GetBiome() const {
    return NULL;
}


