#include "PlayerProximity.h"

UPlayerProximity::UPlayerProximity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Distance = 0.00f;
    this->MinCheckInterval = 0.05f;
    this->MaxCheckInterval = 5.00f;
    this->ApproachSpeed = 700.00f;
    this->IsAnyPlayerInRange = false;
    this->SourceComponent = NULL;
}


