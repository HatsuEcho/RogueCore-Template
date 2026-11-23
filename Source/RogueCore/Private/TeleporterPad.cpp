#include "TeleporterPad.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
#include "Components/CapsuleComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAutoPossessAI -FallbackName=EAutoPossessAI
#include "Net/UnrealNetwork.h"

ATeleporterPad::ATeleporterPad(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoPossessAI = EAutoPossessAI::Disabled;
    this->TeleportTrigger = CreateDefaultSubobject<UCapsuleComponent>(TEXT("TeleportTrigger"));
    this->ArrivalHeightOffset = 10.00f;
    this->FallDamageSuppressSeconds = 1.00f;
    this->OffSurfaceExitSpeed = 300.00f;
    this->TeleportDelaySeconds = 0.50f;
    this->SpawnOverlapGraceSeconds = 0.50f;
    this->MaxNpcArrivalSnapDistance = 100.00f;
    this->LinkedPad = NULL;
    this->ChargesLeft = 0;
    this->MaxCharges = 0;
    this->PlayerTeleportCost = 0;
    this->TeleportTrigger->SetupAttachment(RootComponent);
}








void ATeleporterPad::OnTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ATeleporterPad::OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ATeleporterPad::OnRep_LinkedPad() {
}

void ATeleporterPad::OnRep_Charges() {
}

ATeleporterItem* ATeleporterPad::GetOwningItem() const {
    return NULL;
}

ATeleporterPad* ATeleporterPad::GetLinkedPad() const {
    return NULL;
}

float ATeleporterPad::GetChargePercent() const {
    return 0.0f;
}

bool ATeleporterPad::GetCanTeleportPlayer() const {
    return false;
}

FVector ATeleporterPad::GetArrivalLocation() const {
    return FVector{};
}

void ATeleporterPad::All_NotifyRefused_Implementation(AActor* RefusedActor) {
}

void ATeleporterPad::All_NotifyDwellStarted_Implementation(AActor* DwellingActor, float Duration) {
}

void ATeleporterPad::All_NotifyDwellCancelled_Implementation(AActor* DwellingActor) {
}

void ATeleporterPad::All_NotifyDeparted_Implementation(AActor* TeleportedActor) {
}

void ATeleporterPad::All_NotifyArrived_Implementation(AActor* TeleportedActor) {
}

void ATeleporterPad::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATeleporterPad, LinkedPad);
    DOREPLIFETIME(ATeleporterPad, ChargesLeft);
    DOREPLIFETIME(ATeleporterPad, MaxCharges);
    DOREPLIFETIME(ATeleporterPad, PlayerTeleportCost);
}


