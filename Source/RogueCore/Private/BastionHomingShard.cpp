#include "BastionHomingShard.h"

UBastionHomingShard::UBastionHomingShard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CutoffTime = 0.91f;
    this->MaxProgressRate = 1.40f;
    this->MinProgressRate = 0.60f;
    this->MaxHomingAcceleration = 11400.00f;
    this->MinHomingAcceleration = 0.00f;
    this->StopHomingDistance = 0.00f;
}


