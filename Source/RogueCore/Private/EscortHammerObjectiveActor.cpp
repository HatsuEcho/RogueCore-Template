#include "EscortHammerObjectiveActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"
#include "PathfinderCollisionComponent.h"

AEscortHammerObjectiveActor::AEscortHammerObjectiveActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->HammerRoot = CreateDefaultSubobject<USceneComponent>(TEXT("HammerRoot"));
    this->HammerMovementRoot = CreateDefaultSubobject<USceneComponent>(TEXT("HammerMovementRoot"));
    this->HammerLocationStart = CreateDefaultSubobject<USceneComponent>(TEXT("HammerLocationStart"));
    this->HammerLocationEnd = CreateDefaultSubobject<USceneComponent>(TEXT("HammerLocationEnd"));
    this->HammerPathfinderCollisionRoot = CreateDefaultSubobject<USceneComponent>(TEXT("HammerPathfinderCollisionRoot"));
    this->HammerPathfinderCollision = CreateDefaultSubobject<UPathfinderCollisionComponent>(TEXT("HammerPathfinderCollision"));
    this->State = EEscortHammeState::Intital;
    this->HammerLocationEnd->SetupAttachment(HammerRoot);
    this->HammerLocationStart->SetupAttachment(HammerRoot);
    this->HammerMovementRoot->SetupAttachment(HammerRoot);
    this->HammerPathfinderCollision->SetupAttachment(HammerPathfinderCollisionRoot);
    this->HammerPathfinderCollisionRoot->SetupAttachment(HammerMovementRoot);
    this->HammerRoot->SetupAttachment(RootComponent);
    this->WindUpProgressWidgetClass = NULL;
    this->LastPathfinderCollisionUpdateTime = 0.00f;
    this->ClientLocationDelta = 0.00f;
    this->LastVelocity = 0.00f;
    this->WindUpProgressWidget = NULL;
    this->LocalWindUpProgress = 0.00f;
}

void AEscortHammerObjectiveActor::SetHammerTargetVelocityMultiplier(float TargetVelocityMultiplier) {
}



void AEscortHammerObjectiveActor::OnRep_State(EEscortHammeState prevState) {
}

void AEscortHammerObjectiveActor::OnRep_MovementState() {
}


void AEscortHammerObjectiveActor::AdvanceState() {
}

void AEscortHammerObjectiveActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEscortHammerObjectiveActor, State);
    DOREPLIFETIME(AEscortHammerObjectiveActor, MovementState);
    DOREPLIFETIME(AEscortHammerObjectiveActor, LocalMovementState);
    DOREPLIFETIME(AEscortHammerObjectiveActor, PlayersInRange);
}



void AEscortHammerObjectiveActor::SetPlayersInRange(const TArray<APlayerCharacter*>& NewPlayersInRange) {
}

void AEscortHammerObjectiveActor::OnRep_PlayersInRange() {
}

float AEscortHammerObjectiveActor::GetWindUpProgress() const {
    return 0.0f;
}

TArray<APlayerCharacter*> AEscortHammerObjectiveActor::GetPlayersInRange() const {
    return TArray<APlayerCharacter*>();
}

