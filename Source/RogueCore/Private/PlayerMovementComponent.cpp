#include "PlayerMovementComponent.h"

UPlayerMovementComponent::UPlayerMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugFastMove = false;
    this->SlidingOnIceSound = NULL;
    this->LedgeClimbZVelocity = 0.00f;
    this->MovementPenalty = 1.00f;
    this->Character = NULL;
    this->AdhesiveGraceDuration = 0.30f;
    this->WallJumpProbeDistance = 75.00f;
    this->WallJumpProbeCount = 8;
    this->WallJumpPushOffSpeed = 200.00f;
    this->WallJumpMaxPushOffSpeed = 400.00f;
    this->ExtraWallJumpVelocityZ = 100.00f;
    this->WallJumpMinWallNormalZ = -0.60f;
    this->WallJumpCeilingProbeDistance = 100.00f;
    this->WallJumpFlatCeilingNormalZ = -0.95f;
}

void UPlayerMovementComponent::RemoveGravityModifier(UObject* sourceObject) {
}

void UPlayerMovementComponent::AddGravityModifier(UObject* sourceObject, float effect) {
}



bool UPlayerMovementComponent::IsOnAdhesiveSurface() const {
    return false;
}

FVector UPlayerMovementComponent::GetLastGroundedLocation() const {
    return FVector{};
}

