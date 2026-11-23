#include "FSDPawn.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAutoPossessAI -FallbackName=EAutoPossessAI
#include "ElementComponent.h"
#include "Net/UnrealNetwork.h"
#include "StatusEffectsComponent.h"

AFSDPawn::AFSDPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->StatusEffects = CreateDefaultSubobject<UStatusEffectsComponent>(TEXT("StatusEffects"));
    this->Element = CreateDefaultSubobject<UElementComponent>(TEXT("Element"));
    this->SpawnedFromDescriptor = NULL;
    this->IsFrozen = false;
    this->CanFlee = true;
    this->MaxColdSlowdown = 0.25f;
    this->MaxElectricSlowdown = 0.80f;
    this->FleeInsteadOfBackingOff = false;
    this->IsFleeing = false;
    this->PawnStatsInstance = NULL;
    this->TargetedPlayer = NULL;
    this->bExternalInvulnerable = false;
    this->CycleOverrideMaterial = NULL;
    this->CloakVisualMaterial = NULL;
}

void AFSDPawn::UnFreeze() {
}

void AFSDPawn::StopFleeing() {
}

void AFSDPawn::StartFleeing(const FVector& fromLocation) {
}

void AFSDPawn::SetSpawnId(const FEnemySpawnId NewId) {
}

void AFSDPawn::SetOverrideMaterial(UMaterialInterface* InOverrideMaterial) {
}

void AFSDPawn::SetOriginalMaterials() {
}

void AFSDPawn::SetAlerted(bool isAlerted) {
}


void AFSDPawn::OnUnFrozen_Implementation() {
}



void AFSDPawn::OnRep_MaterialState(FPawnMaterialState PrevMaterialState) {
}

void AFSDPawn::OnRep_IsFrozen() {
}

void AFSDPawn::OnFrozen_Implementation(AActor* Source) {
}



void AFSDPawn::OnElectricChanged(UElementType* ElementType, const FElementState& ElementState) {
}

void AFSDPawn::OnDeath(UHealthComponentBase* HealthComponent) {
}

void AFSDPawn::OnColdChanged(UElementType* ElementType, const FElementState& ElementState) {
}

void AFSDPawn::OnArmorShattered(const FVector& Location) {
}

void AFSDPawn::OnAlerted() {
}

void AFSDPawn::MakeRagdollMesh(UPrimitiveComponent* mesh) {
}

FEnemySpawnId AFSDPawn::GetSpawnId() const {
    return FEnemySpawnId{};
}

bool AFSDPawn::GetIsAlerted() const {
    return false;
}

UHealthComponentBase* AFSDPawn::GetHealthComponent() const {
    return NULL;
}

AFSDAIController* AFSDPawn::GetFSDAIController() const {
    return NULL;
}

EPawnAttitude AFSDPawn::GetAttitude() const {
    return EPawnAttitude::Friendly;
}

void AFSDPawn::Freeze(AActor* Source) {
}

void AFSDPawn::ExplodePawn() {
}

void AFSDPawn::BackOffFromLocation(const FVector& fromLocation) {
}

void AFSDPawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(AFSDPawn, IsFrozen);
    DOREPLIFETIME(AFSDPawn, MaterialState);
    DOREPLIFETIME(AFSDPawn, TargetedPlayer);
    DOREPLIFETIME(AFSDPawn, bExternalInvulnerable);
}

void AFSDPawn::ShowDamageEffects_Implementation(UFXSystemAsset* Particles, FVector Location, FRotator Orientation) {
}

UHealthComponentBase* AFSDPawn::GetTargetHealthComponent_Implementation() const {
    return GetHealthComponent();
}

FVector AFSDPawn::GetTargetCenterMass_Implementation() const {
    return GetActorLocation();
}

bool AFSDPawn::GetIsTargetable_Implementation() const {
    return true;
}



void AFSDPawn::SetNamedSlotMaterials(const TArray<FNamedSlotMaterial>& InSlotMaterials) {
}

void AFSDPawn::SetExternalInvulnerable(bool invulnerable) {
}

void AFSDPawn::RemoveOverrideMaterials() {
}

void AFSDPawn::OnRep_ExternalInvulnerable() {
}

bool AFSDPawn::IsExternallyInvulnerable() const {
    return false;
}

USkeletalMeshComponent* AFSDPawn::GetSkeletalMeshComponent() const {
    return NULL;
}

