#include "MontageReplicatorComponent.h"
#include "Net/UnrealNetwork.h"

UMontageReplicatorComponent::UMontageReplicatorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UMontageReplicatorComponent::StopMontage(UAnimMontage* InMontage) {
}

void UMontageReplicatorComponent::StopActiveMontage() {
}

float UMontageReplicatorComponent::PlayMontage(UAnimMontage* InMontage) {
    return 0.0f;
}

void UMontageReplicatorComponent::OnRep_ReplicatedMontage(const FRepMontage& InOldValue) {
}

void UMontageReplicatorComponent::OnActiveMontageEnded(UAnimMontage* InMontage, bool InInterrupted) {
}

USkeletalMeshComponent* UMontageReplicatorComponent::GetSkeletalMesh() const {
    return NULL;
}

UAnimInstance* UMontageReplicatorComponent::GetAnimInstance() const {
    return NULL;
}

UAnimMontage* UMontageReplicatorComponent::GetActiveMontage() const {
    return NULL;
}

UMontageReplicatorComponent* UMontageReplicatorComponent::FindMontageReplicator(const AActor* InActor) {
    return NULL;
}

void UMontageReplicatorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMontageReplicatorComponent, ReplicatedMontage);
    DOREPLIFETIME(UMontageReplicatorComponent, ReplicatedMontages);
}



void UMontageReplicatorComponent::SetMontageNextSection(UAnimMontage* InMontage, FName InFromSection, FName InToSection) {
}

void UMontageReplicatorComponent::OnRep_ReplicatedMontages(const TArray<FRepMontage>& InOldValue) {
}

bool UMontageReplicatorComponent::IsMontagePlaying(UAnimMontage* InMontage) const {
    return false;
}

