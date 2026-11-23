#include "WallJumpUnlockLogicComponent.h"

UWallJumpUnlockLogicComponent::UWallJumpUnlockLogicComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultLogicValues.AddDefaulted(1);
    this->WallJumpEffect = NULL;
    this->WallJumpSound = NULL;
    this->WallJumpAffliction = NULL;
    this->WallJumpAfflictionDuration = 0.30f;
}

void UWallJumpUnlockLogicComponent::OnWallJumpUsed(APlayerCharacter* Player) {
}


