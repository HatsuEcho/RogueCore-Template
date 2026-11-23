#include "RewardsSubSystem.h"

URewardsSubSystem::URewardsSubSystem() {
}

bool URewardsSubSystem::ShouldPendingRewardsBeGivenInstantly(EDisconnectReason DisconnectReason) const {
    return false;
}

void URewardsSubSystem::ResetPendingRewards() {
}

bool URewardsSubSystem::HasPendingRewards() const {
    return false;
}

void URewardsSubSystem::CHEAT_SetPendingRewards(FRunRewardData Data) {
}

FCurrencyRewardsForUI URewardsSubSystem::ApplyPendingRewards() {
    return FCurrencyRewardsForUI{};
}



bool URewardsSubSystem::TakeClaimedRewards(FCurrencyRewardsForUI& OutRewards) {
    return false;
}

bool URewardsSubSystem::HasClaimedRewards() const {
    return false;
}

FCurrencyRewardsForUI URewardsSubSystem::GetPendingRewardsPreview() const {
    return FCurrencyRewardsForUI{};
}

FCurrencyRewardsForUI URewardsSubSystem::ClaimRunRewards(bool bShowOnSpaceRig) {
    return FCurrencyRewardsForUI{};
}

