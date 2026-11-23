#include "TrophyWallBossTrophyWidget.h"

UTrophyWallBossTrophyWidget::UTrophyWallBossTrophyWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ClaimSound = NULL;
    this->ClaimLayerParameter = TEXT("BossLayer");
    this->ClaimableBossOpacity = 0.30f;
    this->ClaimedBossOpacity = 1.00f;
    this->HoveredScale = 1.06f;
    this->NotKilledToolTipFormat = FText::FromString(TEXT("Defeat {Boss} in {Biome} to earn this trophy."));
    this->ClaimableToolTipFormat = FText::FromString(TEXT("{Boss} defeated in {Biome}. Click to claim the trophy."));
    this->ClaimedToolTipFormat = FText::FromString(TEXT("{Boss} trophy claimed in {Biome}."));
    this->Trophy_Button = NULL;
    this->Sheet = NULL;
    this->Biome = NULL;
    this->Boss = NULL;
    this->BossIcon = NULL;
}

void UTrophyWallBossTrophyWidget::UpdateVisuals() {
}

void UTrophyWallBossTrophyWidget::SetTrophy(UTrophySheet* InSheet, UBiome* InBiome, UEnemyID* InBoss) {
}

void UTrophyWallBossTrophyWidget::Refresh() {
}



bool UTrophyWallBossTrophyWidget::IsTrophyHovered() const {
    return false;
}

bool UTrophyWallBossTrophyWidget::IsGlowVisible() const {
    return false;
}

bool UTrophyWallBossTrophyWidget::IsClaimed() const {
    return false;
}

bool UTrophyWallBossTrophyWidget::IsClaimable() const {
    return false;
}

bool UTrophyWallBossTrophyWidget::IsBossVisible() const {
    return false;
}

void UTrophyWallBossTrophyWidget::HandleButtonUnhovered() {
}

void UTrophyWallBossTrophyWidget::HandleButtonHovered() {
}

void UTrophyWallBossTrophyWidget::HandleButtonClicked() {
}

float UTrophyWallBossTrophyWidget::GetTrophyScale() const {
    return 0.0f;
}

FText UTrophyWallBossTrophyWidget::GetToolTipText() const {
    return FText::GetEmpty();
}

ETrophyWallTrophyState UTrophyWallBossTrophyWidget::GetState() const {
    return ETrophyWallTrophyState::NotKilled;
}

UTrophySheet* UTrophyWallBossTrophyWidget::GetSheet() const {
    return NULL;
}

FLinearColor UTrophyWallBossTrophyWidget::GetOutlineColor() const {
    return FLinearColor{};
}

FLinearColor UTrophyWallBossTrophyWidget::GetGlowColor() const {
    return FLinearColor{};
}

FLinearColor UTrophyWallBossTrophyWidget::GetFillColor() const {
    return FLinearColor{};
}

float UTrophyWallBossTrophyWidget::GetBossOpacity() const {
    return 0.0f;
}

FText UTrophyWallBossTrophyWidget::GetBossName() const {
    return FText::GetEmpty();
}

UTexture2D* UTrophyWallBossTrophyWidget::GetBossIcon() const {
    return NULL;
}

FLinearColor UTrophyWallBossTrophyWidget::GetBossColor() const {
    return FLinearColor{};
}

UEnemyID* UTrophyWallBossTrophyWidget::GetBoss() const {
    return NULL;
}

UBiome* UTrophyWallBossTrophyWidget::GetBiome() const {
    return NULL;
}


