#include "EllisDroneController.h"

AEllisDroneController::AEllisDroneController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ElevatorClass = NULL;
    this->ArtifactResource = NULL;
    this->PotentExpeniteResource = NULL;
    this->Behaviour = NULL;
    this->DroneCallCooldown = 5.00f;
    this->LandingDistance = 1000.00f;
    this->MinUpdateTargetInterval = 0.00f;
    this->MaxUpdateTargetInterval = 0.00f;
    this->ArtifactProcessingTime = 5.00f;
    this->PotentExpeniteProcessingTime = 5.00f;
    this->SaluteDelay = 0.50f;
    this->TakeoffTime = 2.00f;
    this->LandingStuckTimeout = 5.00f;
    this->ActivatingMachineryTimeout = 10.00f;
    this->StuckOutsidePathfinderTimeout = 2.50f;
    this->StuckOutsidePathfinderMinMoveDistance = 50.00f;
    this->StoreRewards = true;
    this->ShoutCalling = NULL;
    this->SceneComponentToAttachTo = NULL;
}

void AEllisDroneController::StartManualNegotiation() {
}

void AEllisDroneController::Salute() {
}

void AEllisDroneController::ReleaseFromMachine() {
}


void AEllisDroneController::PlayerSaluted(APlayerCharacter* ShoutingPlayer) {
}

void AEllisDroneController::PlayerJoined(APlayerCharacter* aPlayerState) {
}

void AEllisDroneController::OnUsed() {
}

void AEllisDroneController::OnStoppedUsing() {
}

void AEllisDroneController::OnResourceDeposited(UResourceData* Resource, float Amount, APlayerCharacter* fromCharacter) {
}

void AEllisDroneController::OnNegotiationStarted() {
}

void AEllisDroneController::OnNegotiationComplete() {
}

void AEllisDroneController::OnMessage(FName Name) {
}

void AEllisDroneController::OnMatchStarted() {
}

void AEllisDroneController::OnGameStateCountDownStarted(const FText& countdownText) {
}

void AEllisDroneController::OnGameStateCountDownEnded() {
}

void AEllisDroneController::OnEndDeposit(APlayerCharacter* Player) {
}

void AEllisDroneController::OnDroneLeftState(EEllisDroneState State) {
}

void AEllisDroneController::OnDroneEnterState(EEllisDroneState State) {
}

void AEllisDroneController::OnDroneCalled(FVector Location, APlayerCharacter* Player) {
}

void AEllisDroneController::OnDeposit(APlayerCharacter* Player) {
}

void AEllisDroneController::ForceLandedFallback() {
}

void AEllisDroneController::ElevatorUsed(ATeamElevator* Elevator) {
}

bool AEllisDroneController::CallToMachine(AActor* Target) {
    return false;
}



void AEllisDroneController::OnNegotiationSkipped() {
}

