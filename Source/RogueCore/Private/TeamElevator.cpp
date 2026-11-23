#include "TeamElevator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

ATeamElevator::ATeamElevator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ElevatorCableInstance = NULL;
    this->MovingPlatformRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MovingPlatformRoot"));
    this->GearsAnimInstance = NULL;
    this->ElevatorCableClass = NULL;
    this->NextStage = NULL;
    this->IsClosed = true;
    this->NextStageNumber = 0;
    this->Type = ETeamElevatorType::Unknown;
    this->MovingPlatformRoot->SetupAttachment(RootComponent);
}

void ATeamElevator::SpawnSubElevatorCable(TSubclassOf<AGeneratorLine> InCableClass, const TArray<ATeamTransport*>& InTeamElevators, const TArray<FTransform>& InEnds) {
}

void ATeamElevator::SpawnElevatorCable(const FTransform& Start, const TArray<FTransform>& End) {
}

void ATeamElevator::SetIsClosed(bool InIsClosed) {
}

void ATeamElevator::Receive_SetIsMoving_Implementation(bool Moving) {
}




void ATeamElevator::OnRep_IsClosed() {
}

void ATeamElevator::InitializeNextLevel(const int32 NextStageIndex) {
}

ETeamElevatorType ATeamElevator::GetType() const {
    return ETeamElevatorType::Unknown;
}

UElevatorGearsAnimInstance* ATeamElevator::GetGearsAnimInstance_Implementation() const {
    return NULL;
}

AGeneratorLine* ATeamElevator::GetElevatorCableInstance() const {
    return NULL;
}

FVector ATeamElevator::GetBottomLocation_Implementation() const {
    return FVector{};
}

TArray<FTransform> ATeamElevator::GetAllElevatorCableStartPoints_Implementation() const {
    return TArray<FTransform>();
}

TArray<FTransform> ATeamElevator::GetAllElevatorCableEndPoints_Implementation() const {
    return TArray<FTransform>();
}

FTransform ATeamElevator::FindTeamElevatorSpawnTransform(AProceduralSetup* Setup, UDebrisPositioning* DebrisPositioning, TSubclassOf<AActor> terrainPlacement, bool AllowInvalidRoomsAsFallback, float blockDistFromLandingZone, const bool rotateFacingLastTunnel) {
    return FTransform{};
}

void ATeamElevator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATeamElevator, IsClosed);
    DOREPLIFETIME(ATeamElevator, NextStageNumber);
    DOREPLIFETIME(ATeamElevator, NextLevelRiskVectors);
}


