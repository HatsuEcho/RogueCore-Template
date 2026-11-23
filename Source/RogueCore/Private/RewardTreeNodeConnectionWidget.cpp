#include "RewardTreeNodeConnectionWidget.h"

URewardTreeNodeConnectionWidget::URewardTreeNodeConnectionWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Node1 = NULL;
    this->Node2 = NULL;
}

void URewardTreeNodeConnectionWidget::Setup_Implementation(UCanvasPanel* Canvas, URewardTreeNodeWidget* InNode1, URewardTreeNodeWidget* InNode2) {
}


