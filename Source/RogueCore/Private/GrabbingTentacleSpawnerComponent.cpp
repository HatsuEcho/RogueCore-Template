#include "GrabbingTentacleSpawnerComponent.h"
#include "Net/UnrealNetwork.h"

UGrabbingTentacleSpawnerComponent::UGrabbingTentacleSpawnerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TentacleClass = NULL;
    this->HeartClass = NULL;
    this->ObjectiveStage = EBossFightStage::AwaitingObjective;
    this->RetractedMembers = 0;
}

void UGrabbingTentacleSpawnerComponent::OnStageChanged(EBossFightStage InNewStage, int32 InPhaseIndex) {
}

bool UGrabbingTentacleSpawnerComponent::IsMemberRetracted(int32 InMemberIndex) const {
    return false;
}

void UGrabbingTentacleSpawnerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGrabbingTentacleSpawnerComponent, RetractedMembers);
}


