#include "AllPiercingHitscanComponent.h"

UAllPiercingHitscanComponent::UAllPiercingHitscanComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PiercingDepth = 100.00f;
    this->TracePartitions = 0;
}


