#include "TeleporterPortal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
#include "Components/CapsuleComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

ATeleporterPortal::ATeleporterPortal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->TeleportTrigger = CreateDefaultSubobject<UCapsuleComponent>(TEXT("TeleportTrigger"));
    this->ArrivalHeightOffset = 10.00f;
    this->FallDamageSuppressSeconds = 1.00f;
    this->OffSurfaceExitSpeed = 300.00f;
    this->TeleportDelaySeconds = 0.50f;
    this->ActivationDelaySeconds = 0.50f;
    this->SpawnOverlapGraceSeconds = 0.50f;
    this->MaxNpcArrivalSnapDistance = 100.00f;
    this->CollapseSeconds = 1.00f;
    this->bTeleportNPCs = false;
    this->LargestNPCSize = DeepPathFinderSize::Medium;
    this->LinkedPortal = NULL;
    this->Slot = ETeleporterPortalReplaceMode::First;
    this->bCollapsing = false;
    this->ColorPairIndex = -1;
    this->TeleportTrigger->SetupAttachment(RootComponent);
}










void ATeleporterPortal::OnTriggerEndOverlap(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex) {
}

void ATeleporterPortal::OnTriggerBeginOverlap(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex, bool bInFromSweep, const FHitResult& InSweepResult) {
}

void ATeleporterPortal::OnRep_ReplaceMode() {
}

void ATeleporterPortal::OnRep_LinkedPortal() {
}

void ATeleporterPortal::OnRep_Collapsing() {
}

bool ATeleporterPortal::IsCollapsing() const {
    return false;
}

bool ATeleporterPortal::IsActive() const {
    return false;
}

ETeleporterPortalReplaceMode ATeleporterPortal::GetSlot() const {
    return ETeleporterPortalReplaceMode::First;
}

ATeleporterPortal* ATeleporterPortal::GetLinkedPortal() const {
    return NULL;
}

int32 ATeleporterPortal::GetColorPairIndex() const {
    return 0;
}

FTeleporterColorPair ATeleporterPortal::GetColorPair() const {
    return FTeleporterColorPair{};
}

FVector ATeleporterPortal::GetArrivalLocation() const {
    return FVector{};
}

bool ATeleporterPortal::CanTeleportActor(const AActor* InActor) const {
    return false;
}

void ATeleporterPortal::All_NotifyRefused_Implementation(AActor* InRefusedActor) {
}

void ATeleporterPortal::All_NotifyDwellStarted_Implementation(AActor* InDwellingActor, float InDuration) {
}

void ATeleporterPortal::All_NotifyDwellCancelled_Implementation(AActor* InDwellingActor) {
}

void ATeleporterPortal::All_NotifyDeparted_Implementation(AActor* InTeleportedActor) {
}

void ATeleporterPortal::All_NotifyArrived_Implementation(AActor* InTeleportedActor) {
}

void ATeleporterPortal::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATeleporterPortal, LinkedPortal);
    DOREPLIFETIME(ATeleporterPortal, Slot);
    DOREPLIFETIME(ATeleporterPortal, bCollapsing);
    DOREPLIFETIME(ATeleporterPortal, ColorPairIndex);
}


