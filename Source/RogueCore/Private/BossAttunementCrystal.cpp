#include "BossAttunementCrystal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
#include "Components/CapsuleComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PointLightComponent -FallbackName=PointLightComponent
#include "Components/PointLightComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "Components/SphereComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "Components/StaticMeshComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent
#include "NiagaraComponent.h"
#include "EnemyHealthComponent.h"
#include "Net/UnrealNetwork.h"

ABossAttunementCrystal::ABossAttunementCrystal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->Collision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision"));
    this->mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mesh"));
    this->effect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("effect"));
    this->Light = CreateDefaultSubobject<UPointLightComponent>(TEXT("Light"));
    this->Aura = CreateDefaultSubobject<USphereComponent>(TEXT("Aura"));
    this->BeamOrigin = CreateDefaultSubobject<USceneComponent>(TEXT("BeamOrigin"));
    this->Health = CreateDefaultSubobject<UEnemyHealthComponent>(TEXT("Health"));
    this->BeamEffect = NULL;
    this->BeamStartParameter = TEXT("EnergyStart");
    this->BeamEndParameter = TEXT("EnergyEnd");
    this->BeamBossSocket = TEXT("CenterMass");
    this->BeamUpdateInterval = 0.05f;
    this->DeathEffect = NULL;
    this->deathSound = NULL;
    this->ExpireDestroyDelay = 2.00f;
    this->bTagAsHostile = true;
    this->bExpired = false;
    this->Beam = NULL;
    this->BossActor = NULL;
    this->BossMesh = NULL;
    this->Aura->SetupAttachment(RootComponent);
    this->BeamOrigin->SetupAttachment(RootComponent);
    this->Collision->SetupAttachment(RootComponent);
    this->Light->SetupAttachment(RootComponent);
    this->effect->SetupAttachment(mesh);
    this->mesh->SetupAttachment(RootComponent);
}

void ABossAttunementCrystal::OnRep_Expired() {
}

void ABossAttunementCrystal::OnCrystalDied(UHealthComponentBase* HealthComponent) {
}

bool ABossAttunementCrystal::IsLive() const {
    return false;
}

bool ABossAttunementCrystal::HasExpired() const {
    return false;
}

void ABossAttunementCrystal::Expire() {
}

void ABossAttunementCrystal::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABossAttunementCrystal, bExpired);
}

void ABossAttunementCrystal::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const {
    TagContainer = GameplayTags;
}


