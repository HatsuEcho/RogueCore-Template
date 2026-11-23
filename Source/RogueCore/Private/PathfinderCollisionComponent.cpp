#include "PathfinderCollisionComponent.h"

UPathfinderCollisionComponent::UPathfinderCollisionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->ActivatePFCollisionAtInit = false;
    this->EPFColiType = PFCollisionType::SolidWalkable;
    this->ShowInTerrainScanner = true;
    this->PFColiType = PFCollisionType::SolidWalkable;
}

void UPathfinderCollisionComponent::OnInitialGenerationDone() {
}

bool UPathfinderCollisionComponent::IsInsideConvex(FVector SamplePosition) const {
    return false;
}

void UPathfinderCollisionComponent::DisablePFCollision() {
}

void UPathfinderCollisionComponent::ActivatePFCollision() {
}


