#include "ProceduralTunnelComponent.h"

UProceduralTunnelComponent::UProceduralTunnelComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TunnelParameters = NULL;
    this->DefaultConstructionSettings = NULL;
    this->CreateDirt = true;
    this->DoInvalidDirtQuery = true;
    this->DirtInfluencer = NULL;
    this->DirtInfluencerRange = 100.00f;
    this->MaxDirtRangeToSurface = 300.00f;
}


