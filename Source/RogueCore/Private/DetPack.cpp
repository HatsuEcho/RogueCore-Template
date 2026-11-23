#include "DetPack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ProjectileMovementComponent -FallbackName=ProjectileMovementComponent
#include "ExplosionComponent.h"
#include "Net/UnrealNetwork.h"
#include "SimpleHealthComponent.h"
#include "SingleUsableComponent.h"

ADetPack::ADetPack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->UpgradedStunChance = 0.00f;
    this->UpgradedStunDuration = 0.00f;
    this->UpgradedFearFactor = 0.00f;
    this->VisualDamageRadius = 0.00f;
    this->IncreasedFearRadius = 0.00f;
    this->IncreasedStunRadius = 0.00f;
    this->Movement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
    this->Explosion = CreateDefaultSubobject<UExplosionComponent>(TEXT("Explosion"));
    this->UseComp = CreateDefaultSubobject<USingleUsableComponent>(TEXT("UseComp"));
    this->SimpleHealth = CreateDefaultSubobject<USimpleHealthComponent>(TEXT("SimpleHealth"));
    this->Detonator = NULL;
    this->HasExploded = false;
    this->IsMoving = true;
    this->ExplodesOnDeath = false;
    this->HasExtraStunRadius = false;
    this->HasExtraFearRadius = false;
}

void ADetPack::UseFearStunUpgrades() {
}


void ADetPack::OnRep_IsMoving() {
}

void ADetPack::OnRep_HasExploded() {
}


void ADetPack::OnDetPackPickedUp(APlayerCharacter* User, EInputKeys Key) {
}

void ADetPack::OnDetPackDeath(UHealthComponentBase* HealthComponent) {
}

void ADetPack::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADetPack, VisualDamageRadius);
    DOREPLIFETIME(ADetPack, HasExploded);
    DOREPLIFETIME(ADetPack, IsMoving);
}


