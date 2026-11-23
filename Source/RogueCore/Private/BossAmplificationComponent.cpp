#include "BossAmplificationComponent.h"

UBossAmplificationComponent::UBossAmplificationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BossHealth = NULL;
    this->Mutator = NULL;
    this->PawnStats = NULL;
}

void UBossAmplificationComponent::OnNewHealthSegment(int32 currentSegment, int32 prevSegment) {
}

int32 UBossAmplificationComponent::GetAppliedSteps() const {
    return 0;
}


