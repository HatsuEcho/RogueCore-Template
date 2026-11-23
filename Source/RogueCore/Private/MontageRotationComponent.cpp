#include "MontageRotationComponent.h"
#include "Net/UnrealNetwork.h"

UMontageRotationComponent::UMontageRotationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RotationCurveName = TEXT("BossRotation");
    this->bPersistRotation = true;
    this->PawnMesh = NULL;
}

void UMontageRotationComponent::ResetRotation() {
}

void UMontageRotationComponent::OnRep_ServerBank() {
}

bool UMontageRotationComponent::IsRotating() const {
    return false;
}

float UMontageRotationComponent::GetTotalYaw() const {
    return 0.0f;
}

float UMontageRotationComponent::GetRotationMontageRemaining() const {
    return 0.0f;
}

float UMontageRotationComponent::GetRotationMontageElapsed() const {
    return 0.0f;
}

EMontageRotationDirection UMontageRotationComponent::GetRotationDirection() const {
    return EMontageRotationDirection::None;
}

float UMontageRotationComponent::GetRotatedYaw() const {
    return 0.0f;
}

float UMontageRotationComponent::GetCurveYaw() const {
    return 0.0f;
}

void UMontageRotationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMontageRotationComponent, ServerBank);
}


