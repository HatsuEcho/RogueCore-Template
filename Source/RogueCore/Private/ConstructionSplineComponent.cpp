#include "ConstructionSplineComponent.h"

UConstructionSplineComponent::UConstructionSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Stationary;
}


