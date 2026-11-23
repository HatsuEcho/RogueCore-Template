#include "StunComponent.h"
#include "Net/UnrealNetwork.h"

UStunComponent::UStunComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StunDurationMultiplier = 1.00f;
    this->StunImmunityWindow = 0.00f;
    this->bDriveAIBlackboard = true;
    this->bStopAILogic = false;
    this->bPushStunAffliction = true;
    this->ActiveStunAffliction = NULL;
    this->ActiveImmunityAffliction = NULL;
}

bool UStunComponent::TryStun(const FStunRequest& InRequest) {
    return false;
}

void UStunComponent::SetStunImmunity(bool bInImmune, const UObject* InSource) {
}

void UStunComponent::OnRep_StunState() {
}

bool UStunComponent::IsStunned() const {
    return false;
}

bool UStunComponent::HasStunImmunity() const {
    return false;
}

float UStunComponent::GetStunStrength() const {
    return 0.0f;
}

float UStunComponent::GetStunDuration() const {
    return 0.0f;
}

float UStunComponent::GetRemainingStunTime() const {
    return 0.0f;
}

UStunComponent* UStunComponent::FindStunComponent(const AActor* InActor) {
    return NULL;
}

void UStunComponent::EndStun() {
}

bool UStunComponent::CanBeStunned() const {
    return false;
}

void UStunComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UStunComponent, StunState);
}


