#include "EllisDrone.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "Components/SkeletalMeshComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent
#include "Components/SplineComponent.h"
#include "Net/UnrealNetwork.h"
#include "Components/AudioComponent.h"
#include "Components/SphereComponent.h"
#include "ResourceBank.h"
#include "SingleUsableComponent.h"

AEllisDrone::AEllisDrone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ArmSpline = CreateDefaultSubobject<USplineComponent>(TEXT("ArmSplineComponent"));
    this->MovementAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("MovementAudioComponent"));
    this->ArmExtensionNoise = CreateDefaultSubobject<UAudioComponent>(TEXT("ArmSound"));
    this->ResourceBank = CreateDefaultSubobject<UResourceBank>(TEXT("Resources"));
    this->CableHead = CreateDefaultSubobject<USceneComponent>(TEXT("CableHeadComponent"));
    this->CableHeadMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TentacleHeadMesh"));
    this->GrindingAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("GrindingAudioComponent"));
    this->HackingAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("HackingSound"));
    this->NegotiationCollider = CreateDefaultSubobject<USphereComponent>(TEXT("NegotiationCollider"));
    this->NegotiationUsable = CreateDefaultSubobject<USingleUsableComponent>(TEXT("NegotiationUsable"));
    this->PlayerNegotiationSphere = NULL;
    this->RewardCollectionTag = NULL;
    this->ArtifactCollectionTag = NULL;
    this->PotentExpeniteCollectionTag = NULL;
    this->DestinationMarkerClass = NULL;
    this->DestinationMarker = NULL;
    this->TentacleHeadMesh = NULL;
    this->SaluteAnim = NULL;
    this->CallResponseCue = NULL;
    this->CableConnectCue = NULL;
    this->ArmSegment = NULL;
    this->CableRange = 200.00f;
    this->CableExtensionTime = 2.00f;
    this->MaxArmLength = 4000.00f;
    this->ArmSegmentLength = 100.00f;
    this->ExtensionProgress = 0.00f;
    this->ExtensionTurnHeadTowardsTargetPercentage = 0.25f;
    this->SplineTangentPower = 300.00f;
    this->CallResponseTime = 7.00f;
    this->GrinderAcceleration = 1.00f;
    this->GrinderFadeTime = 0.10f;
    this->State = EEllisDroneState::Following;
    this->TrayOpen = true;
    this->PrintAudioParams = false;
    this->BlockLevelUpWhileDispensing = true;
    this->BeingDepositedTo = false;
    this->ShoutUpgradesWaiting = NULL;
    this->ShoutUpgradesLastActivation = NULL;
    this->MinTimeBetweenConsecutiveShouts = 0.00f;
    this->TimeOfLastShout = 0.00f;
    this->ComponentToFollow = NULL;
    this->ArmExtensionNoise->SetupAttachment(mesh);
    this->ArmSpline->SetupAttachment(mesh);
    this->CableHead->SetupAttachment(mesh);
    this->CableHeadMesh->SetupAttachment(mesh);
    this->GrindingAudio->SetupAttachment(mesh);
    this->HackingAudio->SetupAttachment(mesh);
    this->MovementAudio->SetupAttachment(mesh);
    this->NegotiationCollider->SetupAttachment(mesh);
    this->TutorialCollectionTag = NULL;
}

void AEllisDrone::StartNegotiation() {
}

void AEllisDrone::SetState(EEllisDroneState NewState) {
}

void AEllisDrone::SetPlayerNegotiationSphere(UPlayersNegotiationSphere* Sphere) {
}



void AEllisDrone::OnResourceAdded(UCappedResource* Resource, float Amount) {
}

void AEllisDrone::OnRep_TrayOpen() {
}

void AEllisDrone::OnRep_State(EEllisDroneState oldState) {
}

void AEllisDrone::OnRep_DestinationLocation() {
}

void AEllisDrone::OnRep_BeingDepositedTo() {
}

void AEllisDrone::OnNegotiationButtonUsed(APlayerCharacter* User, EInputKeys Key) {
}

void AEllisDrone::OnInsidePlayerChanged(int32 PlayerCount) {
}

EEllisDroneState AEllisDrone::GetState() const {
    return EEllisDroneState::Following;
}

int32 AEllisDrone::GetActiveButtonCount() const {
    return 0;
}

void AEllisDrone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEllisDrone, ConnectorPoint);
    DOREPLIFETIME(AEllisDrone, DestinationLocation);
    DOREPLIFETIME(AEllisDrone, State);
    DOREPLIFETIME(AEllisDrone, TrayOpen);
    DOREPLIFETIME(AEllisDrone, BeingDepositedTo);
    DOREPLIFETIME(AEllisDrone, ComponentToFollow);
}


