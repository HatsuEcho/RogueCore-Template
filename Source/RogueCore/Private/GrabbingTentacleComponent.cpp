#include "GrabbingTentacleComponent.h"
#include "Net/UnrealNetwork.h"

UGrabbingTentacleComponent::UGrabbingTentacleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerProximityRadius = 2000.00f;
    this->WarningDuration = 2.00f;
    this->AmbushLead = 1.00f;
    this->GrabRadius = 300.00f;
    this->PitExclusionRadius = 1200.00f;
    this->TelegraphEffect = NULL;
    this->GrabMontage = NULL;
    this->ReleaseMontage = NULL;
    this->MissMontage = NULL;
    this->ThrowImpulseStrength = 1500.00f;
    this->ThrowDamage = NULL;
    this->FlickSpeed = 1000.00f;
    this->FlickElevation = 30.00f;
    this->AttachBoneName = TEXT("Attach_Joint");
    this->BaseEffect = NULL;
    this->GroundTraceChannel = ECC_GameTraceChannel16;
    this->MaxGroundDistance = 1500.00f;
    this->ItemRestSpeed = 50.00f;
    this->AmbushClearanceRadius = 300.00f;
    this->AmbushClearanceHeight = 700.00f;
    this->MinAmbushClearanceHeight = 300.00f;
    this->ShrinkShare = 0.50f;
    this->bDebugDraw = false;
    this->TelegraphComponent = NULL;
    this->BaseEffectComponent = NULL;
}

void UGrabbingTentacleComponent::StopHunting() {
}

void UGrabbingTentacleComponent::OnRep_RepState(const FGrabbingTentacleRepState& InOldState) {
}

void UGrabbingTentacleComponent::OnOwnerHealthChanged(float InHealth) {
}

void UGrabbingTentacleComponent::OnOwnerDeath(UHealthComponentBase* InHealthComponent) {
}

void UGrabbingTentacleComponent::OnItemPickedUp() {
}

void UGrabbingTentacleComponent::OnItemDestroyed(AActor* InDestroyedActor) {
}

bool UGrabbingTentacleComponent::GrabItem(ABasicThrowableItem* InItem) {
    return false;
}

EGrabbingTentacleState UGrabbingTentacleComponent::GetState() const {
    return EGrabbingTentacleState::Hidden;
}

void UGrabbingTentacleComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGrabbingTentacleComponent, RepState);
    DOREPLIFETIME(UGrabbingTentacleComponent, Item);
}


