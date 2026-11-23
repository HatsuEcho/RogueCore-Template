#include "MeshGroupAnimationComponent.h"
#include "Net/UnrealNetwork.h"

UMeshGroupAnimationComponent::UMeshGroupAnimationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MontageSet = NULL;
    this->FollowedLeaderMontage = NULL;
}

void UMeshGroupAnimationComponent::StopActiveMontage() {
}

float UMeshGroupAnimationComponent::PlayMontage(FName InMontageName) {
    return 0.0f;
}

void UMeshGroupAnimationComponent::OnRep_ReplicatedMontage() {
}

void UMeshGroupAnimationComponent::OnMemberMontageEnded(UAnimMontage* InMontage, bool bInInterrupted) {
}

void UMeshGroupAnimationComponent::OnLeaderMontageStarted(UAnimMontage* InMontage) {
}

void UMeshGroupAnimationComponent::OnLeaderMontageBlendingOut(UAnimMontage* InMontage, bool bInInterrupted) {
}

FName UMeshGroupAnimationComponent::GetActiveMontageName() const {
    return NAME_None;
}

void UMeshGroupAnimationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMeshGroupAnimationComponent, ReplicatedMontage);
}


