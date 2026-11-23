#include "CooperController.h"

ACooperController::ACooperController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BehaviourTree = NULL;
    this->CheckOutOfTheWayInterval = 0.00f;
    this->DistCountAsSameHit = 10.00f;
    this->HearthstoneCrystalMaterial = NULL;
    this->SearchForEnemiesInterval = 0.00f;
    this->SaluteDelay = 0.00f;
    this->SaluteCooldown = 0.00f;
    this->CheckGraberInterval = 0.00f;
    this->MaxThrowStrength = 800.00f;
    this->MaxThrowRange = 1600.00f;
    this->RepairRange = 100.00f;
    this->DistanceCountedAsClose = 2000.00f;
    this->ReviveHealthPercentage = 0.40f;
    this->ArmorOnRevivePercentage = 0.00f;
    this->CurrentUse = NULL;
    this->TryingToPickItem = NULL;
}

void ACooperController::ReviveTarget() {
}

void ACooperController::ResetToFollowState() {
}

void ACooperController::RegisterPlayer(APlayerCharacter* aPlayerCharacter) {
}

void ACooperController::PlayerChangedState(ECharacterState State) {
}

void ACooperController::PickupItem() {
}

void ACooperController::OnUseDone(int32 timesUsed) {
}

void ACooperController::OnSecondaryLaserPointer(const FLaserPointerTarget& HitInfo) {
}

void ACooperController::OnPlayerShout(APlayerCharacter* aPlayerCharacter) {
}

void ACooperController::OnPlayerSalute(APlayerCharacter* aCharacater) {
}

void ACooperController::OnPlayerLeave(AFSDPlayerState* aPlayerState) {
}

void ACooperController::OnLaserPointer(const FLaserPointerTarget& HitInfo) {
}

void ACooperController::OnJobFinished() {
}

void ACooperController::OnEscortTargetDied(UHealthComponentBase* Health) {
}

void ACooperController::OnCarriedUsed(APlayerCharacter* UsedBy, EInputKeys Key) {
}

FVector ACooperController::GetPointNearPlayers() const {
    return FVector{};
}

AActor* ACooperController::GetFollowTarget() {
    return NULL;
}

void ACooperController::GenerateRelativeLocation(AActor* aTarget, float aRange, float aHeightRestriction, float aMinRange, bool aTryToStayOutOfTheWay, bool aStayBehind) {
}

void ACooperController::ConfirmPickup() {
}

void ACooperController::CarriableDrop() {
}


