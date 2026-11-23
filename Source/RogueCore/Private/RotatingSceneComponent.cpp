#include "RotatingSceneComponent.h"
#include "Net/UnrealNetwork.h"

URotatingSceneComponent::URotatingSceneComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ForceParentUp = false;
    this->SweepDuringMovement = false;
    this->TeleportMode = ETeleportType::None;
    this->HasSyncState = false;
    this->BobbingTime = 0.00f;
    this->IsStoppingBobbing = false;
    this->BobbingSpeed = 0.00f;
    this->BobbingSize = 0.00f;
}

void URotatingSceneComponent::Stop() {
}

void URotatingSceneComponent::Start() {
}

void URotatingSceneComponent::SetNewRelativeStartLocation(const FVector& NewLocation) {
}

void URotatingSceneComponent::OnRep_SyncState() {
}

void URotatingSceneComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URotatingSceneComponent, SyncState);
}


