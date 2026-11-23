#include "RewardTree.h"

URewardTree::URewardTree() {
    this->Type = NULL;
    this->Token = NULL;
}

FVector2D URewardTree::GetEffectiveCanvasSize() const {
    return FVector2D{};
}

void URewardTree::ClearNodes() {
}

void URewardTree::AddNode(UReward* Reward, int32 Cost, int32 NodeID, TArray<int32> ConnectedNodes, bool isStartingNode, bool isBig, FVector2D position) {
}

void URewardTree::AddLock(int32 RequiredNodesToBuy, int32 MeritPointCost, FVector2D position) {
}



UResourceData* URewardTree::GetBuyToken() const {
    return NULL;
}

