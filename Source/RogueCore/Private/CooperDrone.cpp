#include "CooperDrone.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PointLightComponent -FallbackName=PointLightComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpotLightComponent -FallbackName=SpotLightComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent
#include "BobbingComponent.h"
#include "Components/AudioComponent.h"
#include "NiagaraComponent.h"
#include "CooperAbillityComponent.h"
#include "DroneMiningToolBase.h"
#include "DroneSkinnableComponent.h"
#include "HealthComponent.h"
#include "HitscanComponent.h"
#include "Net/UnrealNetwork.h"
#include "UpgradableCooperComponent.h"

ACooperDrone::ACooperDrone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
    this->PrimaryAbility = CreateDefaultSubobject<UCooperAbillityComponent>(TEXT("PrimaryAbility"));
    this->SecondaryAbility = CreateDefaultSubobject<UCooperAbillityComponent>(TEXT("SecondaryAbility"));
    this->MiningTool = CreateDefaultSubobject<UDroneMiningToolBase>(TEXT("MiningTool"));
    this->BobbingComponent = CreateDefaultSubobject<UBobbingComponent>(TEXT("BobbingComponent"));
    this->CooperMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BoscoMesh"));
    this->DroneHitScan = CreateDefaultSubobject<UHitscanComponent>(TEXT("BoscoHitscan"));
    this->SpotLightComponent = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLightComponent"));
    this->PointLightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLightComponent"));
    this->LTrailNS = CreateDefaultSubobject<UNiagaraComponent>(TEXT("LTrailNS"));
    this->RTrailNS = CreateDefaultSubobject<UNiagaraComponent>(TEXT("RTrailNS"));
    this->MomentumSound = CreateDefaultSubobject<UAudioComponent>(TEXT("MomentumAudio"));
    this->DefendDrilldozerShout = NULL;
    this->DefendGenericShout = NULL;
    this->MineOrderShout = NULL;
    this->KillOrderShout = NULL;
    this->GoToOrderShout = NULL;
    this->ReviveOrderShout = NULL;
    this->PickupGemShout = NULL;
    this->ReviveThankShout = NULL;
    this->GeneralCallShout = NULL;
    this->VacuumShout = NULL;
    this->MiningFinishedSound = NULL;
    this->MineResponse = NULL;
    this->CombatResponse = NULL;
    this->LightResponse = NULL;
    this->ReviveResponse = NULL;
    this->AbillityResponse = NULL;
    this->CurrentResponse = NULL;
    this->ResponseTime = 0.00f;
    this->ShouldSelfDestructOnMultiplePlayers = true;
    this->SeeTargetTime = 0.50f;
    this->AbillityErrorSound = NULL;
    this->IncreasedMiningArea = 15.00f;
    this->MiningAnimationRate = 1.00f;
    this->TimeToResetMiningBoost = 3.00f;
    this->MiningBoosMultiplier = 7.00f;
    this->RocketAbillity = NULL;
    this->CryoGrenadeAbillity = NULL;
    this->ItemID = NULL;
    this->Upgradable = CreateDefaultSubobject<UUpgradableCooperComponent>(TEXT("Upgradable"));
    this->SaluteAnimation = NULL;
    this->PickupGemAnimation = NULL;
    this->DropGemAnimation = NULL;
    this->SaluteDuration = 0.00f;
    this->Skinnable = CreateDefaultSubobject<UDroneSkinnableComponent>(TEXT("Skinnable"));
    this->TargetLightSetting = 0;
    this->RotateTarget = NULL;
    this->ShootSound = NULL;
    this->ShootSoundFadeout = 0.20f;
    this->ShootSoundTail = NULL;
    this->ShootSoundInstance = NULL;
    this->MuzzleEffect = NULL;
    this->TracerEffect = NULL;
    this->FireRate = 0.00f;
    this->MinShotsInBurst = 0;
    this->MaxShotsInBurst = 0;
    this->MaxRandomBurstCooldown = 0.00f;
    this->MinRandomBurstCooldown = 0.00f;
    this->MaxFiringAngle = 0.00f;
    this->MaxEngagementRange = 0.00f;
    this->MinTracerDistance = 100.00f;
    this->TracerSpeed = 10000.00f;
    this->ReviveSirens = NULL;
    this->DistanceToFacePlayer = 0.00f;
    this->RotationSpeed = 0.00f;
    this->PrepareToMineRange = 0.00f;
    this->MiningRange = 0.00f;
    this->MaxRevives = 0;
    this->IsFiring = false;
    this->IsInRangeToMine = false;
    this->IsPreparedToMine = false;
    this->IsMining = false;
    this->IsReviving = false;
    this->IsRotateMode = false;
    this->DroneController = NULL;
    this->CurrentState = ECooperDroneAIState::Follow;
    this->BobbingComponent->SetupAttachment(RootComponent);
    this->CooperMesh->SetupAttachment(BobbingComponent);
    this->LTrailNS->SetupAttachment(CooperMesh);
    this->MomentumSound->SetupAttachment(CooperMesh);
    this->PointLightComponent->SetupAttachment(CooperMesh);
    this->RTrailNS->SetupAttachment(CooperMesh);
    this->SpotLightComponent->SetupAttachment(CooperMesh);
}

void ACooperDrone::UsePlayerActivatedAbillity(EAbilityIndex Index, AActor* aTarget, const FVector& aLocation) {
}

void ACooperDrone::UseABillity() {
}

void ACooperDrone::StopShootingSound_Implementation() {
}


void ACooperDrone::StartSelfDestruct() {
}

void ACooperDrone::SetIsReviving(bool aIsReviving) {
}

void ACooperDrone::SetIsRepairing(bool isRepairing) {
}


void ACooperDrone::ReviveCounterChanged(int32 remainingCharges) {
}

void ACooperDrone::Respond() {
}

void ACooperDrone::PlaySalute_Implementation() {
}

void ACooperDrone::OnWeaponFired(const FVector& Location) {
}

void ACooperDrone::OnTargetBurrowChange(bool burrowed) {
}

void ACooperDrone::OnRep_State(ECooperDroneAIState prevState) {
}

void ACooperDrone::OnReadyToShoot() {
}

void ACooperDrone::OnNotReadyToShoot() {
}

void ACooperDrone::OnHit(float Amount, float BaseAmount, const FDamageData& DamageData) {
}

void ACooperDrone::OnGrabbedGem() {
}

void ACooperDrone::MineEffects_Implementation(UTerrainMaterial* aTerrainMaterial, FVector_NetQuantize aLocation, FRotator aRotation) {
}

UUpgradableCooperComponent* ACooperDrone::GetUpgradeComponent() {
    return NULL;
}

TArray<FBXEUnlockInstance> ACooperDrone::GetUnlocks() const {
    return TArray<FBXEUnlockInstance>();
}

int32 ACooperDrone::GetReviveCharges() const {
    return 0;
}

UCooperAbillityComponent* ACooperDrone::GetPlayerAbillity() const {
    return NULL;
}

ECooperDroneAIState ACooperDrone::GetCurrentState() const {
    return ECooperDroneAIState::Follow;
}

bool ACooperDrone::GetCarryInterrupted() const {
    return false;
}

bool ACooperDrone::DoPickupGemAnimation() {
    return false;
}

void ACooperDrone::All_OnSelfDestruct_Implementation() {
}

void ACooperDrone::AddReviveCharges(int32 charges) {
}

void ACooperDrone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACooperDrone, RotateTarget);
    DOREPLIFETIME(ACooperDrone, LookAtLocation);
    DOREPLIFETIME(ACooperDrone, IsFiring);
    DOREPLIFETIME(ACooperDrone, IsInRangeToMine);
    DOREPLIFETIME(ACooperDrone, IsPreparedToMine);
    DOREPLIFETIME(ACooperDrone, IsMining);
    DOREPLIFETIME(ACooperDrone, IsReviving);
    DOREPLIFETIME(ACooperDrone, IsRotateMode);
    DOREPLIFETIME(ACooperDrone, CurrentState);
}


