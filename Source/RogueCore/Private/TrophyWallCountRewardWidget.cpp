#include "TrophyWallCountRewardWidget.h"

UTrophyWallCountRewardWidget::UTrophyWallCountRewardWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ProgressFormat = FText::FromString(TEXT("{Claimed}/{Target} Trophies Collected"));
    this->NextRewardLabel = FText::FromString(TEXT("Next Reward"));
    this->ClaimRewardLabel = FText::FromString(TEXT("Claim Reward"));
    this->Sheet = NULL;
}

void UTrophyWallCountRewardWidget::UpdateVisuals() {
}

void UTrophyWallCountRewardWidget::SetSheet(UTrophySheet* InSheet) {
}

void UTrophyWallCountRewardWidget::Refresh() {
}




bool UTrophyWallCountRewardWidget::IsNextRewardClaimable() const {
    return false;
}

bool UTrophyWallCountRewardWidget::HasNextReward() const {
    return false;
}

int32 UTrophyWallCountRewardWidget::GetTotalCount() const {
    return 0;
}

int32 UTrophyWallCountRewardWidget::GetTargetCount() const {
    return 0;
}

UTrophySheet* UTrophyWallCountRewardWidget::GetSheet() const {
    return NULL;
}

FText UTrophyWallCountRewardWidget::GetProgressText() const {
    return FText::GetEmpty();
}

float UTrophyWallCountRewardWidget::GetProgress() const {
    return 0.0f;
}

int32 UTrophyWallCountRewardWidget::GetNextRewardThreshold() const {
    return 0;
}

TArray<UReward*> UTrophyWallCountRewardWidget::GetNextRewards() const {
    return TArray<UReward*>();
}

FText UTrophyWallCountRewardWidget::GetNextRewardLabel() const {
    return FText::GetEmpty();
}

int32 UTrophyWallCountRewardWidget::GetClaimedCount() const {
    return 0;
}

bool UTrophyWallCountRewardWidget::ClaimReward() {
    return false;
}


