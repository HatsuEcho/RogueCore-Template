#include "PickaxeItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"
#include "DamageListenerComponent.h"
#include "Net/UnrealNetwork.h"
#include "WeaponTagContainerComponent.h"

APickaxeItem::APickaxeItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->CameraShakeOnStartUsing = true;
    this->DamageListener = CreateDefaultSubobject<UDamageListenerComponent>(TEXT("DamageListener"));
    this->QuadDamageCarving = false;
    this->SpecialAttackTag = NULL;
    this->FP_Root = CreateDefaultSubobject<USceneComponent>(TEXT("FP_Root"));
    this->TP_Root = CreateDefaultSubobject<USceneComponent>(TEXT("TP_Root"));
    this->FP_Scale = CreateDefaultSubobject<USceneComponent>(TEXT("FP_Scale"));
    this->TP_Scale = CreateDefaultSubobject<USceneComponent>(TEXT("TP_Scale"));
    this->FPAnimInstance = NULL;
    this->TPAnimInstance = NULL;
    this->FP_EquipAnimation = NULL;
    this->TP_EquipAnimation = NULL;
    this->EquipDuration = 0.25f;
    this->CharacterAnimationSet = NULL;
    this->WeaponTags = CreateDefaultSubobject<UWeaponTagContainerComponent>(TEXT("WeaponTagsComponent"));
    this->SpecialCooldown = 30.00f;
    this->SpecialCooldownRemaining = 0.00f;
    this->RockMiningBonus = 0;
    this->DirtMiningBonus = 0;
    this->DamageRange = 200.00f;
    this->ExtraDamageRangeForAnimation = 50.00f;
    this->MiningRange = 300.00f;
    this->DamageRadius = 50.00f;
    this->OnDamageEnemySlowdownEffect = NULL;
    this->AttackExcertionShout = NULL;
    this->AttackHitSound = NULL;
    this->MiningSound = NULL;
    this->MineRumble = NULL;
    this->PartialMineRumble = NULL;
    this->DamageRumble = NULL;
    this->HitDamage = NULL;
    this->SpecialDamage = NULL;
    this->GeneralImpactAudioVolume = 1.00f;
    this->HitCooldown = 1.00f;
    this->MiningDuration = 1.00f;
    this->DistanceConsideredSameHit = 50.00f;
    this->BlockParticlesScaleFP = 1.00f;
    this->BlockParticlesScaleTP = 1.00f;
    this->State = EPickaxeState::Equipping;
    this->PowerAttackRefreshedSound = NULL;
    this->PreventQMining = true;
    this->QMiningExpectedDelay = 0.67f;
    this->QMiningInitialDelay = 0.45f;
    this->QMiningReducedPlayRatePct = 1.00f;
    this->CanBezerk = false;
    this->BezerkStatusEffect = NULL;
    this->PowerAttackEnabled = true;
    this->EquippedMaterial = NULL;
    this->FP_Root->SetupAttachment(RootComponent);
    this->FP_Scale->SetupAttachment(FP_Root);
    this->TP_Root->SetupAttachment(RootComponent);
    this->TP_Scale->SetupAttachment(TP_Root);
    this->QMiningLastHitTime = 0.00f;
}


void APickaxeItem::SetSpecialCoolDownDurationRemaining(float newCooldownRemaining) {
}

void APickaxeItem::SetSpecialCoolDownDuration(float newCooldownDuration) {
}

void APickaxeItem::Server_TriggerBezerk_Implementation() {
}

void APickaxeItem::Server_SetState_Implementation(EPickaxeState NewState) {
}

void APickaxeItem::Server_RemoveDebrisInstance_Implementation(FVector_NetQuantize hitPos, int32 debrisIndex, int32 remappedIndex) {
}

void APickaxeItem::Server_HitBlock_Implementation(FVector_NetQuantize position, int32 Material, bool removeDebris, bool isSpecial) {
}

void APickaxeItem::Server_DigBlock_Implementation(FVector carvePos, FVector carveDirection, int32 TerrainMaterial, bool isSpecial) {
}

void APickaxeItem::Server_DamageTarget_Implementation(UPrimitiveComponent* targetComponent, bool isSpecial, const FVector_NetQuantize& ImpactPoint, const FVector_NetQuantizeNormal& ImpactNormal, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex) {
}

void APickaxeItem::RefreshSpecialCooldown() {
}

void APickaxeItem::OnRep_State() {
}

void APickaxeItem::OnLoadoutChanged() {
}

void APickaxeItem::OnDamagedTarget(const FBXEDamageEvent& dEvent, const FDamageParams& Params) {
}

void APickaxeItem::OnCharacterStatsChanged(AFSDPlayerState* PlayerState) {
}

float APickaxeItem::GetSpecialCooldownRemaining() const {
    return 0.0f;
}

float APickaxeItem::GetSpecialCooldownProgress() const {
    return 0.0f;
}

float APickaxeItem::GetSpecialCoolDownDuration() const {
    return 0.0f;
}

void APickaxeItem::DecreaseSpecialCooldownDurationRemaining_Percent(float inPercent) {
}

void APickaxeItem::Client_SetSpecialCoolDownDurationRemaining_Implementation(float newCooldownRemaining) {
}

void APickaxeItem::Client_SetSpecialCoolDownDuration_Implementation(float newCooldownDuration) {
}

void APickaxeItem::Client_DecreaseSpecialCooldownDurationRemaining_Percent_Implementation(float inPercent) {
}

void APickaxeItem::All_SimulateHitBlock_Implementation(FVector_NetQuantize position, int32 materia, bool removeDebris, bool isSpecial) {
}

void APickaxeItem::All_SimulateDigDebris_Implementation(FVector_NetQuantize position, UFXSystemAsset* Particles, USoundCue* cue) {
}

void APickaxeItem::All_SimulateDigBlock_Implementation(FVector_NetQuantize position, bool spawnParticles, int32 Material, float density, bool isSpecial) {
}

void APickaxeItem::All_SimulateDamageTarget_Implementation(UPrimitiveComponent* targetComponent, bool isSpecial, const FVector_NetQuantize& ImpactPoint, const FVector_NetQuantizeNormal& ImpactNormal, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex) {
}

void APickaxeItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APickaxeItem, State);
}


