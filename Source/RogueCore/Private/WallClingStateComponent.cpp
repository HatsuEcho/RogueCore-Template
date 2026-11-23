#include "WallClingStateComponent.h"
#include "Net/UnrealNetwork.h"

UWallClingStateComponent::UWallClingStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateId = 23;
    this->ReleaseInputThreshold = 0.50f;
    this->StickDistance = 60.00f;
    this->StickSpring = 8.00f;
    this->JumpOffSpeed = 450.00f;
    this->JumpOffSeparationSpeed = 120.00f;
    this->ReattachDistance = 120.00f;
    this->ReclingDelay = 0.75f;
    this->MaxSlideSpeed = 300.00f;
    this->MinWallNormalZ = -0.57f;
    this->AttachSound = NULL;
    this->SlideSound = NULL;
    this->JumpOffSound = NULL;
    this->ClingMode = EWallClingMode::Cling;
    this->SurfaceJumpVelocityScale = 1.00f;
}

void UWallClingStateComponent::ServerRelease_Implementation() {
}

void UWallClingStateComponent::ServerJumpOff_Implementation() {
}

FVector UWallClingStateComponent::GetWallNormal() const {
    return FVector{};
}

EWallClingMode UWallClingStateComponent::GetClingMode() const {
    return EWallClingMode::Cling;
}

void UWallClingStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWallClingStateComponent, WallNormal);
    DOREPLIFETIME(UWallClingStateComponent, WallPoint);
    DOREPLIFETIME(UWallClingStateComponent, ClingMode);
    DOREPLIFETIME(UWallClingStateComponent, SurfaceJumpVelocityScale);
}


