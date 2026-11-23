#include "StageCarryOverComponent.h"
#include "Net/UnrealNetwork.h"

UStageCarryOverComponent::UStageCarryOverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InsideCheckDownwardExtension = 200.00f;
}

void UStageCarryOverComponent::OnTransportLanded(ATeamTransport* Transport) {
}

void UStageCarryOverComponent::OnTransportDeparting(ATeamTransport* Transport) {
}

void UStageCarryOverComponent::OnRep_Ride(const FStageCarryOverRide& OldRide) {
}

void UStageCarryOverComponent::OnNewGameState(AFSDGameState* GameState) {
}

void UStageCarryOverComponent::OnMatchStarted() {
}

bool UStageCarryOverComponent::IsRidingTransport() const {
    return false;
}

bool UStageCarryOverComponent::IsLeavingStage() const {
    return false;
}

void UStageCarryOverComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UStageCarryOverComponent, Ride);
}


