#include "BossFightStateComponent.h"
#include "Net/UnrealNetwork.h"

UBossFightStateComponent::UBossFightStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SegmentTransferDamageClass = NULL;
    this->bHasRecoveryStage = true;
    this->ImmunePhysicalMaterial = NULL;
    this->PhaseIndexKeyName = TEXT("BossFightPhaseIndex");
    this->StageKeyName = TEXT("BossFightStage");
}

void UBossFightStateComponent::StartBossFight() {
}

void UBossFightStateComponent::OnRep_FightState(const FBossFightState& InOldState) {
}

void UBossFightStateComponent::OnPhaseHealthDestroyed(UDestructibleSubHealthComponent* InSubHealth) {
}

void UBossFightStateComponent::OnOwnerControllerChanged(APawn* InPawn, AController* InOldController, AController* InNewController) {
}

void UBossFightStateComponent::NotifyRecoveryFinished() {
}

void UBossFightStateComponent::NotifyObjectiveCompleted() {
}

bool UBossFightStateComponent::IsImmune() const {
    return false;
}

EBossFightStage UBossFightStateComponent::GetStage() const {
    return EBossFightStage::Inactive;
}

int32 UBossFightStateComponent::GetPhaseIndex() const {
    return 0;
}

void UBossFightStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBossFightStateComponent, FightState);
}


