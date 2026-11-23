#include "ResourceChunk.h"
#include "Net/UnrealNetwork.h"
#include "SimpleObjectInfoComponent.h"

AResourceChunk::AResourceChunk(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->CollectDuration = 0.30f;
    this->CanBeCollectedNormally = true;
    this->CanBeCollected = false;
    this->InfoComponent = CreateDefaultSubobject<USimpleObjectInfoComponent>(TEXT("Info"));
    this->ResourceAmount = 0.00f;
    this->PickupSound = NULL;
    this->ResourceData = NULL;
    this->SpawnedByObjective = NULL;
    this->CollectMovement = ECollectMovementMethod::Time;
    this->CollectMaxSpeed = 600.00f;
    this->CollectSpeedVariance = 0.15f;
    this->CollectMomentumBlendTime = 0.30f;
    this->CollectSuckInDistance = 100.00f;
    this->CollectSuckInSpeedMultiplier = 1.80f;
    this->CollectStretch = 1.30f;
    this->CollectSpinSpeed = 720.00f;
    this->CollectWobbleAmplitude = 4.00f;
    this->CollectWobbleFrequency = 1.50f;
    this->CollectShrinkDistance = 40.00f;
    this->CollectShrinkScale = 0.20f;
    this->CollectMaxTime = 3.00f;
    this->CollectStaggerStep = 0.04f;
    this->CollectStaggerMaxDelay = 0.12f;
    this->FeedbackReferenceAmount = 5.00f;
    this->FeedbackSizeMin = 0.60f;
    this->FeedbackSizeMax = 1.80f;
    this->PickupComboPitchStep = 0.06f;
    this->PickupComboWindow = 1.00f;
    this->PickupComboMaxPitch = 1.60f;
    this->PickupComboVolumeStep = 0.05f;
    this->PickupComboMaxVolume = 1.50f;
    this->ArrivalRumbleIntensity = 0.25f;
    this->ArrivalRumbleDuration = 0.08f;
    this->ArrivalLightFlare = 4.00f;
    this->ArrivalFlareTime = 0.25f;
    this->LandingSquashAmount = 0.30f;
    this->LandingSquashTime = 0.18f;
    this->LandingSquashMinSpeed = 150.00f;
    this->IdleRotationSpeed = 30.00f;
    this->IdleGlowPulseAmount = 0.25f;
    this->IdleGlowPulseFrequency = 1.20f;
    this->IdleTickInterval = 0.03f;
    this->IdleEffectsTimeout = 3.00f;
    this->TrailRestSpeed = 20.00f;
    this->TrailRestTime = 0.30f;
    this->Light = NULL;
    this->VisualMesh = NULL;
    this->bInPool = false;
    this->PoolGeneration = 0;
}

AResourceChunk* AResourceChunk::SpawnChunk(UObject* WorldContextObject, UResourceData* Data, float Size, FVector position) {
    return NULL;
}

void AResourceChunk::SetCollectOpen() {
}

void AResourceChunk::OnRep_CollectedBy() {
}

UResourceData* AResourceChunk::GetResourceData() const {
    return NULL;
}

float AResourceChunk::GetResourceAmount() const {
    return 0.0f;
}


void AResourceChunk::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AResourceChunk, CollectedBy);
    DOREPLIFETIME(AResourceChunk, bInPool);
    DOREPLIFETIME(AResourceChunk, PoolGeneration);
}



AActor* AResourceChunk::SpawnResource(UObject* WorldContext, UResourceData* Resource, const float ResourceSize, const FVector position, EResourceSpawnSource SpawnSource) {
    return NULL;
}

void AResourceChunk::OnRep_PoolState() {
}

void AResourceChunk::OnBodyWake(UPrimitiveComponent* WakingComponent, FName BoneName) {
}

float AResourceChunk::GetFeedbackSizeFactor() const {
    return 0.0f;
}

